//#--------------------------------------------------------------
//
//  File:       ResCtrl.h
//
//  Synopsis:   This file holds the declaration of the
//                of CResCtrl class
//
//  History:     01/15/2001  serdarun Created
//
//    Copyright (C) 2000-2001 Microsoft Corporation
//    All rights reserved.
//
//#--------------------------------------------------------------

#ifndef __RESCTRL_H_
#define __RESCTRL_H_

#include "resource.h"       // main symbols
#include <atlctl.h>
#include "Wbemidl.h"
#include "elementmgr.h"
#include "satrace.h"
#include "getvalue.h"
#include "mem.h"
#include <string>
#include <map>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
// CResCtrl
class ATL_NO_VTABLE CResCtrl : 
    public CComObjectRootEx<CComSingleThreadModel>,
    public IDispatchImpl<IResCtrl, &IID_IResCtrl, &LIBID_LOCALUIRESOURCELib>,
    public CComControl<CResCtrl>,
    public IOleControlImpl<CResCtrl>,
    public IOleObjectImpl<CResCtrl>,
    public IOleInPlaceActiveObjectImpl<CResCtrl>,
    public IViewObjectExImpl<CResCtrl>,
    public IOleInPlaceObjectWindowlessImpl<CResCtrl>,
    public CComCoClass<CResCtrl, &CLSID_ResCtrl>,
    public IWbemObjectSink
{
public:
    CResCtrl()
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_RESCTRL)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_CLASSFACTORY_SINGLETON (CResCtrl)

BEGIN_COM_MAP(CResCtrl)
    COM_INTERFACE_ENTRY(IResCtrl)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(IViewObjectEx)
    COM_INTERFACE_ENTRY(IViewObject2)
    COM_INTERFACE_ENTRY(IViewObject)
    COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
    COM_INTERFACE_ENTRY(IOleInPlaceObject)
    COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
    COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
    COM_INTERFACE_ENTRY(IOleControl)
    COM_INTERFACE_ENTRY(IOleObject)
    COM_INTERFACE_ENTRY(IWbemObjectSink)
END_COM_MAP()

BEGIN_PROP_MAP(CResCtrl)
    PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
    PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
    // Example entries
    // PROP_ENTRY("Property Description", dispid, clsid)
    // PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_MSG_MAP(CResCtrl)
    CHAIN_MSG_MAP(CComControl<CResCtrl>)
    DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);



// IViewObjectEx
    DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IResCtrl
private:
    //
    // method for determining the resource dll directory
    //
    HRESULT GetResourceDirectory (
                                /*[out]*/   wstring&    wstrResourceDir
                                );

    HRESULT ExpandSz(IN const TCHAR *lpszStr, OUT LPTSTR *ppszStr);


    //
    // sets the language id
    //
    void SetLangID(DWORD * dwLangID);


    //
    // mapping of state and icon information for each resource
    //
    typedef map< LONG, HICON >  ResourceIconMap;
    typedef ResourceIconMap::iterator         ResourceIconMapIterator;

    //
    // struct for each localui resource
    //
    typedef struct
    {
        LONG lState;
        ResourceIconMap mapResIcon;
    } ResourceStruct,*ResourceStructPtr;

    //
    // mapping of resource name and  localui resource
    //
    typedef map< wstring, ResourceStructPtr >  ResourceMap;
    typedef ResourceMap::iterator         ResourceMapIterator;

    //
    // contains all of the localui resources
    //
    ResourceMap m_ResourceMap;

    //
    // mapping of resource names and their merits
    //
    typedef map< DWORD, wstring>  MeritMap;
    typedef MeritMap::iterator        MeritMapIterator;

    
    //
    // contains localui resource names and merits
    //
    MeritMap m_MeritMap;

    //
    // resource directory
    //
    wstring m_wstrResourceDir;

    //
    // number of localui resources
    //
    LONG m_lResourceCount;


    CComPtr  <IWbemServices> m_pWbemServices;


    //
    // method obtaining resource information from element manager
    //
    STDMETHOD(GetLocalUIResources)
                                (
                                void
                                );

    //
    // initializes wbem for localui resource events
    //
    STDMETHOD(InitializeWbemSink)
                                (
                                void
                                );

    //
    // loads icons for each resource web element
    //
    STDMETHOD(AddIconResource)
                            (
                            /*[in]*/IWebElement * pElement
                            );

    //
    // converts a hex digit to base 10 number
    //
    ULONG HexCharToULong(WCHAR wch);

    //
    // converts a hex string to unsigned long
    //
    ULONG HexStringToULong(wstring wsHexString);

public:

    //
    // called just after constructor, initializes the component
    //
    STDMETHOD(FinalConstruct)(void);

    //
    // called just before destructor, releases resources
    //
    STDMETHOD(FinalRelease)(void);

    //
    // ---------IWbemUnboundObjectSink interface methods----------
    //
    STDMETHOD(Indicate) (
                    /*[in]*/    LONG                lObjectCount,
                    /*[in]*/    IWbemClassObject    **ppObjArray
                    );
    
    STDMETHOD(SetStatus) (
                    /*[in]*/    LONG                lFlags,
                    /*[in]*/    HRESULT             hResult,
                    /*[in]*/    BSTR                strParam,
                    /*[in]*/    IWbemClassObject    *pObjParam
                    );


    //
    // draws the icons
    //
    HRESULT OnDraw(ATL_DRAWINFO& di);

};

#endif //__RESCTRL_H_
