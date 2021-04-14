/*
 *	conflist.h
 *
 *	Copyright (c) 1995 by DataBeam Corporation, Lexington, KY
 *
 *	Abstract:
 *		This is the interface file for the class CConfDescriptorListContainer.
 *		Instances of this class represent the Conference Descriptor list that is
 *		generated by a call to GCCConferenceQueryRequest.  This class hides most
 *		of the complexity associated with building this list.  It also handles
 *		building the set of conference descriptors used in the
 *		ConferenceQueryResponse PDU	and the conference descriptor list passed 
 *		to the GCC interface.  This class is designed so that a CControlSAP 
 *		object can use it to create	a GCC_CONFERENCE_QUERY_CONFIRM message by 
 *		requesting a pointer to a list of Conference Descriptor pointers from 
 *		it.  Objects of this type only live long enough to service a particular
 *		query request.  After a message	callback has returned or a PDU has been
 *		sent to MCS, the CConfDescriptorListContainer object is deleted.
 *
 *	Caveats:
 *		None.
 *
 *	Author:
 *		blp
 */
#ifndef _CONFERENCE_DESCRIPTOR_LIST_
#define _CONFERENCE_DESCRIPTOR_LIST_

#include "netaddr.h"

/*
 * This typedef defines the structure used internally by this class to maintain
 * the data associated with an individual conference descriptor.
 */
typedef struct CONF_DESCRIPTOR
{
	CONF_DESCRIPTOR(void);
	~CONF_DESCRIPTOR(void);

	LPSTR					pszNumericConfName;
	LPWSTR					pwszTextConfName;
	LPSTR					pszConfModifier;
	LPWSTR					pwszConfDescription;
	CNetAddrListContainer   *network_address_list;
	BOOL					conference_is_locked;
	BOOL					password_in_the_clear;
}
    CONF_DESCRIPTOR;

/*
 * These typedefs define the Rogue Wave container used to hold the list of 
 * CONF_DESCRIPTOR structures internally and the iterator used for
 * accessing structures in the list.
 */
class CConfDesccriptorList : public CList
{
    DEFINE_CLIST(CConfDesccriptorList, CONF_DESCRIPTOR*)
};


/*
 * Class definition:
 */
class CConfDescriptorListContainer : public CRefCount
{
public:

    CConfDescriptorListContainer(void);
    CConfDescriptorListContainer(PSetOfConferenceDescriptors, PGCCError);

    ~CConfDescriptorListContainer(void);

    GCCError	AddConferenceDescriptorToList(
    						LPSTR					pszNumericConfName,
    						LPWSTR					conference_text_name,
    						LPSTR					pszConfModifier,
    						BOOL					locked_conference,
    						BOOL					password_in_the_clear,
    						LPWSTR					pwszConfDescription,
    						CNetAddrListContainer   *network_address_list);

    GCCError	GetConferenceDescriptorListPDU(PSetOfConferenceDescriptors *);
    void		FreeConferenceDescriptorListPDU(void);

    GCCError	LockConferenceDescriptorList(void);
    void		UnLockConferenceDescriptorList(void);

    void		GetConferenceDescriptorList(PGCCConferenceDescriptor **, UINT *pcDescriptors);

private:

	void		GetConferenceDescriptor(PGCCConferenceDescriptor, CONF_DESCRIPTOR *);

private:

	/*
	 * Instance variables:
	 */
	PGCCConferenceDescriptor	*	m_ppGCCConfDescriptorList;
	PSetOfConferenceDescriptors		m_pSetOfConfDescriptors;
	UINT							m_cDescriptors;
	LPBYTE							m_pDescriptorListMemory;
	CConfDesccriptorList            m_ConfDescriptorList;

	//
	// LONCHANC: m_pNetAddrMemoryPointer points to available space,
	// initially equaling to m_pNetAddrListMemory.
	//
	LPBYTE							m_pNetAddrListMemory;
    LPBYTE                          m_pNetAddrMemoryPointer;
};

/*
 *	Comments explaining the public and private class member functions
 */

/*
 *	CConfDescriptorListContainer ();
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This is a constructor for the CConfDescriptorListContainer class.  It
 *		initializes instance variables.
 *
 *	Formal Parameters:
 *
 *	Return Value:
 *		None.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */

/*
 *	CConfDescriptorListContainer (	PSetOfConferenceDescriptors		conference_list,
 *								PGCCError						gcc_error);
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This is a constructor for the CConfDescriptorListContainer class.  
 *		This constructor builds a list of conference descriptors that can
 *		be passed on to the GCC interface.  This list is built from a set
 *		of conference descriptors which is part of a Query Response PDU.
 *
 *	Formal Parameters:
 *		conference_list		(i) The PDU form of the descriptor list.
 *		gcc_error			(o) Error return parameter.
 *
 *	Return Value:
 *		GCC_NO_ERROR					-	No error.
 *		GCC_ALLOCATION_FAILURE			- 	Error creating an object using the
 *												"new" operator.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */

/*
 *	~CConfDescriptorListContainer ();
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This is the destructor for the CConfDescriptorListContainer class.  It is
 *		responsible for freeing up any resources allocated during the life of
 *		this object.
 *
 *	Formal Parameters:
 *		None.
 *
 *	Return Value:
 *		None.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */


/*
 *	GCCError		AddConferenceDescriptorToList (
 *								LPSTR					pszNumericConfName,
 *								LPWSTR					conference_text_name,
 *								LPSTR					pszConfModifier,
 *								BOOL					locked_conference,
 *								BOOL					password_in_the_clear,
 *								LPWSTR					pwszConfDescription,
 *								CNetAddrListContainer   *network_address_list);
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This routine is used to add a single new conference descriptor to the
 *		list of conference descriptors.
 *
 *	Formal Parameters:
 *		conference_numeric_name		(i)	The numeric form of the conference name.
 *		conference_text_name		(i) The text form of the conference name.
 *		pszConfModifier				(i) The conference modifier string.
 *		locked_conference			(i) Flag indicating whether or not the
 *											conference is locked.
 *		password_in_the_clear		(i)	Flag indicating whether the conference 
 *											password is "clear" or is a
 *											"challenge".
 *		pwszConfDescription			(i)	The conference description string.
 *		network_address_list		(i) List of network addresses at the queried
 *											node.
 *
 *	Return Value:
 *		GCC_NO_ERROR					-	No error.
 *		GCC_ALLOCATION_FAILURE			- 	Error creating an object using the
 *												"new" operator.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */


/*
 *	GCCError		GetConferenceDescriptorListPDU (
 *								PSetOfConferenceDescriptors	*  conference_list);
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This routine is used to retrieve the PDU form of the conference 
 *		descriptor list which is a list of "SetOfConferenceDescriptors"
 *		structures.
 *
 *	Formal Parameters:
 *		conference_list			(o)	The pointer to the list of 
 *										"SetOfConferenceDescriptors" structures
 *										to fill in.
 *
 *	Return Value:
 *		GCC_NO_ERROR					-	No error.
 *		GCC_ALLOCATION_FAILURE			- 	Error creating an object using the
 *												"new" operator.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */


/*
 *	void		FreeConferenceDescriptorListPDU ();
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This routine is used to free up any resources allocated to hold the PDU 
 *		form of the conference descriptor list.
 *
 *	Formal Parameters:
 *		None.
 *
 *	Return Value:
 *		None.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */


/*
 *	GCCError		LockConferenceDescriptorList ();
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This routine is used to "lock" the API form of the conference descriptor
 *		list.  The lock count is incremented and the API form of the list
 *		created in preparation for a "GetConferenceDescriptorList" call used to
 *		retrieve the API form of the list.  The memory necessary to hold the
 *		API list is allocated by this routine.
 *
 *	Formal Parameters:
 *		None.
 *
 *	Return Value:
 *		GCC_NO_ERROR			   -	No error.
 *		GCC_ALLOCATION_FAILURE	   - 	Error creating an object using the "new"
 *											operator or else an	allocation using
 *								   			the memory manager failed.
 *
 *  Side Effects:
 *		The internal lock count is incremented.
 *
 *	Caveats:
 *		None.
 */


/*
 *	void		GetConferenceDescriptorList (
 *								PGCCConferenceDescriptor **	   conference_list,	
 *								UINT*							number_of_descriptors);
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This routine is used to retrieve the API form of the conference 
 *		descriptor list.
 *
 *	Formal Parameters:
 *		conference_list			(o) Pointer to list of GCCConferenceDescriptor
 *										API structures to fill in.
 *		number_of_descriptors	(o) Pointer to the number of descriptors in the
 *										list to fill in.
 *
 *	Return Value:
 *		None.
 *
 *  Side Effects:
 *		None.
 *
 *	Caveats:
 *		None.
 */


/*
 *	void		UnLockConferenceDescriptorList ();
 *
 *	Public member function of CConfDescriptorListContainer.
 *
 *	Function Description:
 *		This routine is used to "unlock" the "API" data for this object.  This
 *		results in the lock count for this object being decremented.  When the
 *		lock count transitions from 1 to 0, a check is made to determine 
 *		whether the object has been freed through a call to 
 *		FreeConferenceDescriptorList.  If so, the object will automatically 
 *		delete itself.  If not, any resources allocated to hold the API form
 *		of the decriptor list are freed.
 *
 *	Formal Parameters:
 *		None.
 *
 *	Return Value:
 *		None.
 *
 *  Side Effects:
 *		The internal lock count is decremented.
 *
 *	Caveats:
 *		None.
 */

#endif