/*
	Microsoft Corp. (C) Copyright 1995-1996
	Developed under contract by Numbers & Co.
----------------------------------------------------------------------------

		name:	Oprah Context Help Ids
	
		file:	help_ids.h

	comments:	This header contains all of the current Oprah context 
				help ids in #define form. These are intended to be used in 
				a DWORD array to associate them with Oprah internal 
				controls. Each Oprah component can make an array using just 
				the subset of these ids that it needs. The id values are 
				arbitrary except that I tried to allow a range of 20 for each 
				logical area (also arbitrary).

				For dialog boxes, the array is handed to WinHelp as shown in 
				the example below.
				------------------------

The following example shows how to implement context-sensitive help in a dialog box.
  
LRESULT CALLBACK EditDlgProc(HWND hwndDlg, UINT uMsg, WPARAM	wParam, 
	LPARAM lParam) 
{ 
 
// Create an array of control identifiers and context identifiers. 
 
static DWORD aIds[] = { 
	ID_SAVE,   IDH_SAVE, 
	ID_DELETE, IDH_DELETE, 
	ID_COPY,   IDH_COPY, 
	ID_PASTE,  IDH_PASTE, 
	0,0 
}; 
 
switch (uMsg) { 
	case WM_HELP: 
		WinHelp(((LPHELPINFO) lParam)->hItemHandle, "helpfile.hlp", 
			HELP_WM_HELP, (DWORD) (LPSTR) aIds); 
		break; 
 
	case WM_CONTEXTMENU: 
		WinHelp((HWND) wParam, "helpfile.hlp", HELP_CONTEXTMENU, 
			(DWORD) (LPVOID) aIds); 
		break; 
	. 
	. // process other messages here 
	. 
	} 
 
return FALSE; 
 
} 


WM_HELP is generated by pressing F1. WM_CONTEXTMENU is generated by right clicking.


(This example is an except from:
	Win32 Programmer's Reference
		Overviews
			Window Management
				Help
					Using Help
						Providing Help in a Dialog Box
 )

----------------------------------------------------------------------------
	Microsoft Corp. (C) Copyright 1995-1996
	Developed under contract by Numbers & Co.
 */




/* For the options dialog (confcp.dll) */

// For the General tab
#define IDH_GENERAL_GENERAL 					26100
#define IDH_GENERAL_SHOW_ON_TASKBAR 			26000
#define IDH_GENERAL_FRIENDS_TAB 				26101
#define IDH_GENERAL_CHECK_DEFAULT				26102
#define IDH_GENERAL_SHOW_ICA_ON_TASKBAR 		26200

#define IDH_GENERAL_AUTO_ACCEPT 				26004

#define IDH_GENERAL_FT_GROUP					26103
#define IDH_GENERAL_FT_DIRECTORY				26009
#define IDH_GENERAL_FT_BROWSE					26010
#define IDH_GENERAL_FT_VIEWFILES				26104

// For the protocols tab
#define IDH_PROTOCOLS_LIST						26020
#define IDH_PROTOCOLS_PROPERTIES				26021
#define IDH_PROTOCOLS_DESCRIPTION				26022

// For the video tab
#define IDH_VIDEO_CAMERA						26105
#define IDH_VIDEO_CAPTURE                       26082
#define IDH_VIDEO_SOURCE						26074
#define IDH_VIDEO_FORMAT						26075
#define IDH_VIDEO_MIRROR						26083

#define IDH_VIDEO_SQCIF 						26076
#define IDH_VIDEO_QCIF							26077
#define IDH_VIDEO_CIF							26078

#define IDH_VIDEO_QUALITY						26079

#define IDH_VIDEO_SEND_RECEIVE					26106
#define IDH_VIDEO_AUTO_SEND 					26080
#define IDH_VIDEO_AUTO_RECEIVE					26081

// For the audio tab
#define IDH_AUDIO_GENERAL						26107
#define IDH_AUDIO_FULL_DUPLEX					26030
#define IDH_AUDIO_AUTO_GAIN 					26031
#define IDH_AUDIO_TUNING_WIZARD 				26032

#define IDH_AUDIO_SET_COMPRESSION				26033
#define IDH_AUDIO_CONNECTION_SPEED				26034
#define IDH_AUDIO_MANUAL_CODEC_SETTINGS 		26035
#define IDH_AUDIO_ADVANCED_CODEC_SETTINGS		26036

#define IDH_AUDIO_MIC_SENSITIVITY				26108
#define IDH_AUDIO_AUTO_SENSITIVITY				26037
#define IDH_AUDIO_MANUAL_SENSITIVITY			26038

#define IDH_AUDIO_GATEWAY						26109
#define IDH_AUDIO_USEGATEWAY					26039
#define IDH_AUDIO_H323_GATEWAY					26043
#define IDH_SERVERS_DIRECT_CALL					26048
#define IDH_SERVERS_USE_GATEKEEPER				26045
#define IDH_SERVERS_GATEKEEPER_NAME				26046
#define IDH_SERVERS_GATEKEEPER_PHONENO			26047
#define IDH_SERVERS_GATEKEEPER_EMAIL			26049


// For the My Information tab
#define IDH_MYINFO_MYINFO                       26110
#define IDH_MYINFO_FIRSTNAME					26111
#define IDH_MYINFO_LASTNAME 					26112
#define IDH_MYINFO_EMAIL						26113
#define IDH_MYINFO_LOCATION						26114
#define IDH_MYINFO_PHONENUM						26115
#define IDH_MYINFO_COMMENTS 					26116

#define IDH_MYINFO_CATEGORIZE_GROUP				26300
#define IDH_MYINFO_PERSONAL_RADIO				26301
#define IDH_MYINFO_BUSINESS_RADIO				26302
#define IDH_MYINFO_ADULT_RADIO					26304

#define IDH_MYINFO_PUBLISH						26041
#define IDH_MYINFO_ULS_SERVER					26042
#define IDH_MYINFO_DIRECTORY_AT_START			26044
#define IDH_DIRECTORY_DIRECTORY 				26117
#define IDH_ADVCALL_USE_ACCOUNT					26122
#define IDH_ADVCALL_ACCOUNT_NO					26003
#define IDH_MYINFO_PHONE						26115
#define IDH_CALLING_ADVANCED					26123
#define IDH_CALLING_BANDWIDTH					26130
#define IDH_ADVCALL_USE_PROXY					26200
#define IDH_ADVCALL_PROXY_NAME					26121
#define IDH_ADVCALL_ADD_DIRECTORY				26101
#define IDH_ADVCALL_DISPLAY_NAME				26102
#define IDH_ADVCALL_SERVER						26103
#define IDH_ADVCALL_URL							26403

#define IDH_FRIENDS_ADDFRIENDS					26120
#define IDH_FRIENDS_ADD_NEVER					26121
#define IDH_FRIENDS_ADD_ASKME					26122
#define IDH_FRIENDS_ADD_AUTO					26123
#define IDH_FRIENDS_GENERAL 					26124
#define IDH_FRIENDS_REFRESH_AT_START			26125
#define IDH_FRIENDS_REFRESH 					26126
#define IDH_FRIENDS_REFRESH_INTERVAL			26127
#define IDH_FRIENDS_REFRESH_WARNING 			26128
#define IDH_FRIENDS_REFRESH_COUNT				26129

////////////////////////////////////////////////////
// For the Modem properties dialog

#define IDH_MODEMPROP_AUTOANSWER				26050
#define IDH_MODEMPROP_NRINGS					26051
#define IDH_MODEMPROP_LOCATION					26052
#define IDH_MODEMPROP_DIALPROP					26053
#define IDH_MODEMPROP_USEMODEM					26054
#define IDH_MODEMPROP_MODEMPROP 				26055

////////////////////////////////////////////////////
// For the Advanced compression settings dialog

#define IDH_ADVCOMP_CODECS                      26060
#define IDH_ADVCOMP_UP                          26061
#define IDH_ADVCOMP_DOWN                        26062
#define IDH_ADVCOMP_DEFAULTS                    26063

#define IDH_AUDIO_AUTOMIXER                     26138
#define IDH_AUDIO_DIRECTSOUND                   26139


// Security Tab
#define IDH_SECURITY_SECURITY                   26400
#define IDH_SECURITY_INCOMING                   26401
#define IDH_SECURITY_OUTGOING                   26402

#define IDH_SECURITY_CERTIFICATE                26404
#define IDH_SECURITY_CHANGE_CERTIFICATE         26405
#define IDH_SECURITY_CERTIFICATE_PRIVACY        26406
#define IDH_SECURITY_CERTIFICATE_PRIV_AUTH      26409

#define IDH_SECURITY_CERTIFICATE_LIST           26410   // BUGBUG LAURABU - From MargeM

#define IDH_SECURITY_CHANGE_PASSWORD            26407
#define IDH_SECURITY_RUN_REMOTE                 26408


/* Whiteboard - Page Sorter */			
#define IDH_CONF_PAGESORT_MAIN                  27000
#define IDH_CLOSE                               27001
#define IDH_CONF_PAGESORT_GOTO                  27002
#define IDH_CONF_PAGESORT_DEL                   27003
#define IDH_CONF_PAGESORT_BEFORE                27004
#define IDH_CONF_PAGESORT_AFTER                 27005

/* Chat - Message Format */ 			
#define IDH_CHAT_FORMAT_MESSAGE                 28000
#define IDH_CHAT_FORMAT_HEADER                  28001
#define IDH_CHAT_RECEIVE_MSG					28002
#define IDH_CHAT_RECEIVE_PRIV					28003
#define IDH_CHAT_SENT_MSG						28004
#define IDH_CHAT_SENT_PRIV						28005
#define IDH_CHAT_FONT							28006
#define IDH_CHAT_FONTS_LABEL                    28007	
#define IDH_CHAT_NAME                           28008
#define IDH_CHAT_DATE                           28009
#define IDH_CHAT_TIME                           28010



/* IDH_OK */							
/* IDH_CANCEL */						

/* conf.exe help id's */
/* (most are in confroom\messages\usa\resource.hm) */
#define IDH_SHADOW_REMOTE_DETACHED              29000
#define IDH_SHADOW_LOCAL_DETACHED               29001


/* New Call (9/5/97)*/
#define IDH_ADV_PASSWORD                        29002

/* Com Port Properties (9/5/97) */
#define IDH_PROTO_TIME                          29003
#define IDH_PROTO_PORT                          29004
#define IDH_PROTO_PROP                          29005

/* Host a Meeting */
#define IDH_HOST_GENERAL                        27000
#define IDH_HOST_SETTINGS                       29008
#define IDH_HOST_NAME                           29006
#define IDH_HOST_PASSWORD                       29007
#define IDH_HOST_SECURE                         29201
#define IDH_HOST_ACCEPT_PEOPLE                  26202
#define IDH_HOST_TOOLS                          26208
#define IDH_HOST_AUDIO                          26203
#define IDH_HOST_CHAT                           26204
#define IDH_HOST_INVITE_PEOPLE                  26205
#define IDH_HOST_SHARE                          26207
#define IDH_HOST_VIDEO                          26209
#define IDH_HOST_WHITEBD                        26210
#define IDH_HOST_XFER                           26211

/* Place a Call (3/6/98)  */
#define IDH_PLACECALL_SECURITY_CHKBX			29009
#define IDH_PLACECALL_NAME                      29010
#define IDH_PLACECALL_INFOSTORE                 29011
#define IDH_PLACECALL_LIST                      29012
#define IDH_PLACECALL_DIRECT                    29013
#define IDH_PLACECALL_CALL                      29014

#define IDH_PLACECALL_TO						29016
#define IDH_PLACECALL_TO_TEXT					29017
#define IDH_PLACECALL_USING						29018
#define IDH_ADV_NORMAL_HINT						29019

/* NM/Office Info (3/20/98)  */
#define IDH_INFO_CATEGORY                       29015

/* WDM Device Source Dialog (9/03/98)  */
#define IDH_DEVICE_SETTINGS                     29020
#define IDH_CAMERA_CONTROLS                     29021

/* Choose Conference Dialog (3/11/99)  */
#define IDH_MCU_CONF_MAIN                       27000
#define IDH_MCU_CONF_NAME                       29022
#define IDH_MCU_CONF_LIST                       29023

#define IDH_PLACECALL_SEARCH_DIR				29025
#define IDH_FINDSOMEONE_REFRESH					29024
#define IDH_FINDSOMEONE_BROWSER					29026
#define IDH_FINDSOMEONE_HELP					29027
#define IDH_FINDSOMEONE_DELETE_ILS				29028


/* Create SpeedDial Dialog (3/15/99)  */
#define IDH_STATIC_SPEED_DIAL_INSTRUCTIONS      26011
#define IDH_CSD_ADDRESS_EDIT                    0x80a30424
#define IDH_CSD_CALL_USING_COMBO                0x80a30423
#define IDH_CSD_CREATE_GROUPBOX                 0x80a3047f
#define IDH_CSD_SAVE_DESKTOP_RADIO              0x80a3040b
#define IDH_CSD_SD_INFO_GROUP                   0x80a30480
#define IDH_CSD_SPEEDDIAL_LIST_RADIO            0x80a3040d