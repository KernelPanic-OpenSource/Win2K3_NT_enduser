	<%
    '
    ' Copyright (c) Microsoft Corporation.  All rights reserved. 
    '
	' For site area
	Dim L_APPLIANCE_SITES_TEXT
	Dim L_COLUMN_ID_TEXT
	Dim L_COLUMN_DESCRIPTION_TEXT
	Dim L_COLUMN_FULLNAME_TEXT	
	Dim L_COLUMN_PORT_TEXT	
	Dim L_TASKS_TEXT	
	Dim L_SERVEAREABUTTON_NEW_TEXT	
	Dim L_NEW_ROLLOVERTEXT
	Dim L_START_TEXT
	Dim L_STOPPED_TEXT
	Dim L_PAUSED_TEXT
	Dim L_IP_UNASSIGNED_TEXT	
	Dim L_SERVEAREABUTTON_MODIFY_TEXT
	Dim L_MODIFY_ROLLOVERTEXT	
	Dim L_DELETE_ROLLOVERTEXT	
	Dim L_SITE_STATUS
	Dim L_HOST_HEADER
	Dim L_FAILEDTOGETSITES_ERRORMESSAGE	
	Dim L_FAILEDTOADDCOLOUMN_ERRORMESSAGE
	Dim L_FAILEDTOADDROW_ERRORMESSAGE	
	Dim L_FAILEDTOADDTASK_ERRORMESSAGE	
	Dim L_FAILEDTOSORT_ERRORMESSAGE		
	Dim L_FAILEDTOSHOW_ERRORMESSAGE		
	Dim L_FAILEDTOADDTASKTITLE_ERRORMESSAGE
	Dim L_WMICONNECTIONFAILED_ERRORMESSAGE

	' For delete site
	Dim L_TASKTITLE
	Dim L_NOTE
	Dim L_COULDNOTDELETESITE_ERRORMESSAGE
	Dim L_INFORMATION_ERRORMESSAGE
	Dim L_FTPUSER_ERRORMESSAGE
	Dim L_ADMINUSER_ERRORMESSAGE
	Dim L_UNABLETO_CONNECT_SERVER
	Dim L_UNABLETO_DELETEFOLDER_ERRORMESSAGE
	Dim L_OBJECTNOTFOUND_ERRORMESSAGE
	Dim L_ATTEMPTING_TODELETE_SITE	
	Dim L_ATTEMPTING_TO_DELETE_USERS
	Dim L_USERSDELETED
	Dim L_ATTEMPTING_TODELETE_DIR	
	Dim L_SERVEAREABUTTON_DELETE_TEXT
	Dim L_UNABLE_TOLOGIN_ERRORMESSAGE

	' For site new prop
	Dim L_ID_NOTEMPTY_ERROR_MESSAGE
	Dim L_DESC_NOTEMPTY_ERROR_MESSAGE
	Dim L_DIR_NOTEMPTY_ERROR_MESSAGE
	Dim L_ADMIN_NOTEMPTY_ERROR_MESSAGE
	Dim L_PWD_MISMATCH_ERROR_MESSAGE
	Dim L_SETPW_ERRORMESSAGE
	Dim L_CREATEUSER_ERRORMESSAGE
	Dim L_CREATETASKTITLE_TEXT
	Dim L_NOINPUTDATA_TEXT
	Dim L_TABPROPSHEET_TEXT
	Dim L_GENERAL_TEXT
	Dim L_SITEIDENTITY_TEXT
	Dim L_APPLICATIONSETTINGS_TEXT
	Dim L_CREATINGUSERS_TEXT
	Dim L_CREATINGSITE_TEXT
	Dim L_INPUTS_VALIDATED_TEXT
	Dim L_SUCCESS_USERS_TEXT
	Dim L_SET_DACL_ENTRY_TEXT
	Dim L_DACL_ENTRY_SET_TEXT
	Dim L_DACL_ENTRY_FTP_USER_TEXT
	Dim L_UPDATE_FRONTPAGE_EXT_TEXT
	Dim L_FRONPAGE_EXTENSIONS_UPDATE_TEXT
	Dim L_SITE_CREATED_SUCCESS_TEXT
	Dim L_SITE_STARTED_SUCCESS_TEXT
	Dim L_DIR_FOR_WEB_SITES_TEXT	
	Dim L_CONTENT_UPLOADMETHOD_NEITHER
	Dim L_CONTENT_UPLOADMETHOD_TITLE
	Dim L_FRONTPAGEFTP_WARNING_TEXT

	' Error messages
	Dim L_CREATEFAIL_ERRORMESSAGE
	Dim L_UPDATEFAIL_ERRORMESSAGE
	Dim L_APPPROTECTION_ERRORMESSAGE
	Dim L_STARTSITE_ERRORMESSAGE
	Dim L_FILEINFORMATION_ERRORMESSAGE
	Dim L_USERADMINPERMS_ERRORMESSAGE
	Dim L_CREATEFAIL_DACLENTRY_ERRORMESSAGE
	Dim L_APPSETTINGS_ERRORMESSAGE
	Dim L_ANONSETTINGS_ERRORMESSAGE
	Dim L_CANNOTDELETE_CREATEDUSERS_ERRORMESSAGE
	Dim L_CRMANAGEDSITE_REGKEY_ERRORMESSAGE
	Dim L_DACL_ERRORMESSAGE
	Dim L_SUCCESS_LOG
	Dim MD_AUTH_ANONYMOUS
	Dim DEFAULTBITMASKVALUE
	Dim L_LOCALIZATIONOBJECTFAILED_ERRORMESSAGE
	Dim L_COMPUTERNAME_ERRORMESSAGE
	Dim L_UNABLE_TOSET_OPERATORS_ERRORMESSAGE
	Dim L_DIR_DOESNOT_EXIST_ERRMSG
	Dim L_INVALID_DRIVE_ERRMSG
	Dim L_NOT_NTFS_DRIVE_ERRMSG
	Dim L_FAILED_CREATE_DIR_ERRMSG
	Dim L_INVALID_DIR_PATH_ERRMSG
	Dim L_GEN_SITE_ID_TEXT
	Dim L_GEN_SITE_DIR_TEXT
	Dim L_GEN_SITE_CREATEDIR_TEXT
	Dim L_GEN_SITE_ADMIN_TEXT
	Dim L_GEN_SITE_ADMIN_PSWD_TEXT
	Dim L_GEN_SITE_CONFIRM_PSWD_TEXT
	Dim L_SITE_IPADDR_TEXT
	Dim L_SITE_TCPPORT_TEXT
	Dim L_SITE_HOST_HEADER_TEXT
	Dim L_APPL_FRONT_PAGE_EXTN_TEXT
	Dim L_INVALID_DIR_ERRORMESSAGE			
	Dim L_SITE_IDENTIFIER_EMPTY_TEXT
	Dim L_VALID_PORT_ERRORMESSAGE		
	Dim  L_EXECUTE_PERMISSIONS
	Dim  L_NONE			
	Dim  L_SCRIPTS_ONLY	
	Dim  L_SCRIPTS_EXECUTABLES
	Dim  L_FAIL_TO_SET_EXECPERMS

	' For site modify
	Dim L_TASKTITLE_TEXT
	Dim L_UNABLETOSET_SITEDESC_ERRORMESSAGE
	Dim L_UNABLETOSET_PASSWORD_ERRORMESSAGE
	Dim L_UNABLETOSET_IP_ERRORMESSAGE	
	Dim L_UNABLETOSET_ALLOWANON_ERRORMESSAGE
	Dim L_UNABLETOSET_APP_PROT_ERRORMESSAGE		
	Dim L_USRDOESNOTEXITS_ERRORMESSAGE
	Dim L_UNABLE_TOSET_USER_INFO
	Dim L_UNABLETOSTART_SITE_ERRORMESSAGE
	Dim L_MODIFYINGSETTINGS_TEXT
	Dim L_ATTEMPTINGMODIFY_TEXT
	Dim L_ATTEMPTINGTOSETADMINPWD_TEXT
	Dim L_ATTEMPTINGTOSETEXECPERMS_TEXT
	Dim L_SUCCESSEXECPERMS_TEXT
	Dim L_ATTEMPTINGTOSETAPPLNSETTINGS_TEXT
	Dim L_SUCCESSAPPLNSETTINGS_TEXT
	Dim L_ATTEMPTINGTOSTARTSITE_TEXT
	Dim L_SUCCESSSITESTARTED_TEXT
	Dim L_ATTEMPTINGTOSETDACL_TEXT
	Dim L_SUCCESSDACLENTRY_TEXT
	Dim L_ATTEMPTINGTOSETFPE_TEXT
	Dim L_SUCCESSFPE_TEXT
	Dim L_SUCCESS_CREATE_TEXT
	Dim L_ATTEMPTINGFPE_TEXT
	Dim L_SUCCESS_DACLFTP_TEXT
	Dim L_ATTEMPTINGDACL_FTP_TEXT
	Dim L_PAUSETASK_TEXT
	Dim L_PAUSE_ROLLOVERTEXT
	Dim L_STOPTASK_TEXT
	Dim L_STOP_ROLLOVERTEXT
	Dim L_STARTTASK_TEXT
	Dim L_START_ROLLOVERTEXT
	Dim L_ERR_ADMIN_PASSWD_NULL
	Dim L_CREATE_DOMAIN_USER
	Dim L_CREATE_LOCAL_USER
	Dim L_CREATE_EXIST_USER
	Dim L_CREATE_FTP_SITE
	Dim L_DOMAIN_USER_ACCOUNT
	Dim L_LOCAL_USER_ACCOUNT
	Dim L_DEFAULT_PAGE
	Dim L_FILE_NAME
	Dim L_BUTTON_FACE_ADD
	Dim L_BUTTON_FACE_MOVE_UP
	Dim L_BUTTON_FACE_MOVE_DOWM
	Dim L_BUTTON_FACE_REMOVE
	Dim L_ALLOW_ANONYMOUS_ACCESS
	Dim L_ERR_INPUT_ISEMPTY
	Dim L_ERR_EXCEED_TWELVE
	Dim L_ERR_FILE_EXIST
	Dim L_ERR_PASSWORD_POLICY
	Dim L_ERR_ADMINISTRATOR_NAME
	Dim L_ERR_ACCOUNT_NOT_FOUND
	Dim L_ERR_CREATE_VIR_FTP_SITE
	Dim L_ERR_GET_USER_OBJECT
	Dim L_ERR_DELETE_VIR_FTP_SITE
	Dim L_ERR_WEBSITE_START
	Dim L_UNABLETOCREATE_GROUP_ERRORMESSAGE
    Dim L_ERR_FRONTPAGE_CONFIGURATION


	'initial localization resource
	L_APPLIANCE_SITES_TEXT = GetLocString("Sitearea.dll", "40420001", "")	

	L_COLUMN_ID_TEXT = GetLocString("Sitearea.dll", "40420003", "")

	L_COLUMN_DESCRIPTION_TEXT = GetLocString("Sitearea.dll", "40420004", "")

	L_COLUMN_FULLNAME_TEXT = GetLocString("Sitearea.dll", "40420005", "")

	L_COLUMN_PORT_TEXT = GetLocString("Sitearea.dll", "40420006", "")

	L_TASKS_TEXT = GetLocString("Sitearea.dll", "40420007", "")

	L_SERVEAREABUTTON_NEW_TEXT = GetLocString("Sitearea.dll", "40420008", "")

	L_NEW_ROLLOVERTEXT = GetLocString("Sitearea.dll", "40420009", "")

	L_OBJECTNOTFOUND_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042000A", "")

	L_UNABLETO_DELETEFOLDER_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042000B", "")

	L_UNABLETO_CONNECT_SERVER = GetLocString("Sitearea.dll", "C042000C", "")

	L_ADMINUSER_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042000E", "")

	L_FTPUSER_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042000F", "")

	L_COULDNOTDELETESITE_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420011", "")

	L_NOTE = GetLocString("Sitearea.dll", "40420013", "")

	L_TASKTITLE = GetLocString("Sitearea.dll", "40420014", "")

	L_USERSDELETED = GetLocString("Sitearea.dll", "00420017", "")

	L_ATTEMPTING_TO_DELETE_USERS = GetLocString("Sitearea.dll", "4042001A", "")

	L_ATTEMPTING_TODELETE_DIR = GetLocString("Sitearea.dll", "4042001B", "")

	L_ATTEMPTING_TODELETE_SITE = GetLocString("Sitearea.dll", "4042001C", "")

	L_NOINPUTDATA_TEXT = GetLocString("Sitearea.dll", "4042001D", "")

	L_TABPROPSHEET_TEXT = GetLocString("Sitearea.dll", "4042001F", "")

	L_TASKTITLE_TEXT = GetLocString("Sitearea.dll", "40420020", "")

	L_APPLICATIONSETTINGS_TEXT = GetLocString("Sitearea.dll", "40420021", "")

	L_SITEIDENTITY_TEXT = GetLocString("Sitearea.dll", "40420023", "")

	L_GENERAL_TEXT = GetLocString("Sitearea.dll", "40420024", "")

	L_UNABLETOSTART_SITE_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420025", "")

	L_UNABLE_TOSET_USER_INFO = GetLocString("Sitearea.dll", "C0420026", "")

	L_USRDOESNOTEXITS_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420027", "")

	L_UNABLETOSET_APP_PROT_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420028", "")

	L_UNABLETOSET_ALLOWANON_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420029", "")

	L_UNABLETOSET_IP_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042002A", "")

	L_UNABLETOSET_PASSWORD_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042002B", "")

	L_UNABLETOSET_SITEDESC_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042002C", "")

	L_CANNOTDELETE_CREATEDUSERS_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042002D", "")

	L_ANONSETTINGS_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042002F", "")

	L_APPSETTINGS_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420030", "")

	L_CREATEFAIL_DACLENTRY_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420033", "")

	L_USERADMINPERMS_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420034", "")

	L_APPPROTECTION_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420035", "")

	L_UPDATEFAIL_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420036", "")

	L_FILEINFORMATION_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420037", "")

	L_INFORMATION_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420038", "")

	L_PWD_MISMATCH_ERROR_MESSAGE = GetLocString("Sitearea.dll", "C042003A", "")

	L_ADMIN_NOTEMPTY_ERROR_MESSAGE = GetLocString("Sitearea.dll", "C042003B", "")

	L_DIR_NOTEMPTY_ERROR_MESSAGE = GetLocString("Sitearea.dll", "C042003C", "")

	L_DESC_NOTEMPTY_ERROR_MESSAGE = GetLocString("Sitearea.dll", "C042003D", "")

	L_ID_NOTEMPTY_ERROR_MESSAGE = GetLocString("Sitearea.dll", "C042003E", "")

	L_EXECUTE_PERMISSIONS = GetLocString("Sitearea.dll", "4042003F", "")

	L_FAIL_TO_SET_EXECPERMS = GetLocString("Sitearea.dll", "C0420040", "")

	L_SCRIPTS_EXECUTABLES = GetLocString("Sitearea.dll", "40420041", "")

	L_SCRIPTS_ONLY = GetLocString("Sitearea.dll", "40420042", "")

	L_NONE = GetLocString("Sitearea.dll", "40420043", "")

	L_IP_UNASSIGNED_TEXT = GetLocString("Sitearea.dll", "4042004B", "")

	L_APPL_FRONT_PAGE_EXTN_TEXT = GetLocString("Sitearea.dll", "4042004D", "")

	L_SITE_HOST_HEADER_TEXT = GetLocString("Sitearea.dll", "40420053", "")

	L_SITE_TCPPORT_TEXT = GetLocString("Sitearea.dll", "40420054", "")

	L_SITE_IPADDR_TEXT = GetLocString("Sitearea.dll", "40420055", "")

	L_GEN_SITE_CONFIRM_PSWD_TEXT = GetLocString("Sitearea.dll", "40420059", "")

	L_GEN_SITE_ADMIN_PSWD_TEXT = GetLocString("Sitearea.dll", "4042005A", "")

	L_GEN_SITE_ADMIN_TEXT = GetLocString("Sitearea.dll", "4042005B", "")

	L_GEN_SITE_DIR_TEXT = GetLocString("Sitearea.dll", "4042005C", "")

	L_GEN_SITE_ID_TEXT = GetLocString("Sitearea.dll", "4042005E", "")

	L_SUCCESSFPE_TEXT = GetLocString("Sitearea.dll", "00420062", "")

	L_ATTEMPTINGTOSETFPE_TEXT = GetLocString("Sitearea.dll", "40420063", "")

	L_SUCCESSDACLENTRY_TEXT = GetLocString("Sitearea.dll", "00420064", "")

	L_ATTEMPTINGTOSETDACL_TEXT = GetLocString("Sitearea.dll", "40420065", "")

	L_SUCCESSSITESTARTED_TEXT = GetLocString("Sitearea.dll", "00420066", "")

	L_ATTEMPTINGTOSTARTSITE_TEXT = GetLocString("Sitearea.dll", "40420067", "")

	L_SUCCESSAPPLNSETTINGS_TEXT = GetLocString("Sitearea.dll", "00420068", "")

	L_ATTEMPTINGTOSETAPPLNSETTINGS_TEXT = GetLocString("Sitearea.dll", "40420069", "")

	L_SUCCESSEXECPERMS_TEXT = GetLocString("Sitearea.dll", "0042006A", "")

	L_ATTEMPTINGTOSETEXECPERMS_TEXT = GetLocString("Sitearea.dll", "4042006B", "")

	L_ATTEMPTINGMODIFY_TEXT = GetLocString("Sitearea.dll", "40420070", "")

	L_ATTEMPTINGTOSETADMINPWD_TEXT = GetLocString("Sitearea.dll", "40420072", "")

	L_MODIFYINGSETTINGS_TEXT = GetLocString("Sitearea.dll", "40420073", "")

	L_GEN_SITE_CREATEDIR_TEXT = GetLocString("Sitearea.dll", "40420076", "")

	L_CREATEFAIL_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420077", "")

	L_UNABLE_TOLOGIN_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420078", "")

	L_CREATETASKTITLE_TEXT = GetLocString("Sitearea.dll", "4042007A", "")

	L_DACL_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042007B", "")

	L_INVALID_DIR_PATH_ERRMSG = GetLocString("Sitearea.dll", "C042007C", "")

	L_FAILED_CREATE_DIR_ERRMSG = GetLocString("Sitearea.dll", "C042007D", "")

	L_NOT_NTFS_DRIVE_ERRMSG = GetLocString("Sitearea.dll", "C042007E", "")

	L_INVALID_DRIVE_ERRMSG = GetLocString("Sitearea.dll", "C042007F", "")

	L_DIR_DOESNOT_EXIST_ERRMSG = GetLocString("Sitearea.dll", "C0420080", "")

	L_CRMANAGEDSITE_REGKEY_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420081", "")

	L_UNABLE_TOSET_OPERATORS_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420083", "")

	L_COMPUTERNAME_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420084", "")

	L_LOCALIZATIONOBJECTFAILED_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420085", "")

	L_WMICONNECTIONFAILED_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420086", "")

	L_CREATEUSER_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420087", "")

	L_SETPW_ERRORMESSAGE = GetLocString("Sitearea.dll", "C0420088", "")

	L_SUCCESS_CREATE_TEXT = GetLocString("Sitearea.dll", "0042008A", "")

	L_ATTEMPTINGFPE_TEXT = GetLocString("Sitearea.dll", "4042008C", "")

	L_SUCCESS_DACLFTP_TEXT = GetLocString("Sitearea.dll", "0042008D", "")

	L_ATTEMPTINGDACL_FTP_TEXT = GetLocString("Sitearea.dll", "4042008E", "")

	L_SUCCESS_USERS_TEXT = GetLocString("Sitearea.dll", "00420093", "")

	L_CREATINGUSERS_TEXT = GetLocString("Sitearea.dll", "40420094", "")

	L_CREATINGSITE_TEXT = GetLocString("Sitearea.dll", "40420095", "")

	L_INPUTS_VALIDATED_TEXT = GetLocString("Sitearea.dll", "00420096", "")

	L_START_TEXT = GetLocString("Sitearea.dll", "40420097", "")

	L_STOPPED_TEXT = GetLocString("Sitearea.dll", "40420098", "")

	L_PAUSED_TEXT = GetLocString("Sitearea.dll", "40420099", "")

	L_FAILEDTOGETSITES_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042009A", "")

	L_FAILEDTOADDCOLOUMN_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042009B", "")

	L_FAILEDTOADDROW_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042009C", "")

	L_FAILEDTOADDTASK_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042009D", "")

	L_FAILEDTOSORT_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042009E", "")

	L_FAILEDTOSHOW_ERRORMESSAGE = GetLocString("Sitearea.dll", "C042009F", "")

	L_FAILEDTOADDTASKTITLE_ERRORMESSAGE = GetLocString("Sitearea.dll", "C04200A0", "")

	L_SITE_IDENTIFIER_EMPTY_TEXT = GetLocString("Sitearea.dll", "C04200A5", "")

	L_VALID_PORT_ERRORMESSAGE = GetLocString("Sitearea.dll", "C04200A6", "")

	L_INVALID_DIR_ERRORMESSAGE = GetLocString("Sitearea.dll", "C04200A7", "")

	L_SET_DACL_ENTRY_TEXT = GetLocString("Sitearea.dll", "404200AD", "")

	L_DACL_ENTRY_SET_TEXT = GetLocString("Sitearea.dll", "404200AE", "")

	L_DACL_ENTRY_FTP_USER_TEXT = GetLocString("Sitearea.dll", "404200AF", "")

	L_UPDATE_FRONTPAGE_EXT_TEXT = GetLocString("Sitearea.dll", "404200B0", "")

	L_FRONPAGE_EXTENSIONS_UPDATE_TEXT = GetLocString("Sitearea.dll", "404200B1", "")

	L_SITE_CREATED_SUCCESS_TEXT = GetLocString("Sitearea.dll", "404200B2", "")

	L_SITE_STARTED_SUCCESS_TEXT = GetLocString("Sitearea.dll", "404200B3", "")

	L_DIR_FOR_WEB_SITES_TEXT = GetLocString("Sitearea.dll", "404200B6", "")

	L_CONTENT_UPLOADMETHOD_NEITHER = GetLocString("Sitearea.dll", "404200BD", "")
	
	L_CONTENT_UPLOADMETHOD_TITLE = GetLocString("Sitearea.dll", "404200BE", "")

	L_FRONTPAGEFTP_WARNING_TEXT = GetLocString("Sitearea.dll", "404200BF", "")
	
	L_SERVEAREABUTTON_MODIFY_TEXT = GetLocString("Sitearea.dll", "404200B7", "")

	L_MODIFY_ROLLOVERTEXT = GetLocString("Sitearea.dll", "404200B8", "")

	L_SERVEAREABUTTON_DELETE_TEXT = GetLocString("Sitearea.dll", "404200B9", "")

	L_DELETE_ROLLOVERTEXT = GetLocString("Sitearea.dll", "404200BA", "")

	L_SITE_STATUS = GetLocString("Sitearea.dll", "404200BB", "")

	L_HOST_HEADER = GetLocString("Sitearea.dll", "404200BC", "")
	
	L_PAUSETASK_TEXT = GetLocString("Sitearea.dll", "4042012C", "")

	L_PAUSE_ROLLOVERTEXT = GetLocString("Sitearea.dll", "4042012D", "")

	L_STOPTASK_TEXT = GetLocString("Sitearea.dll", "4042015E", "")

	L_STOP_ROLLOVERTEXT = GetLocString("Sitearea.dll", "4042015F", "")

	L_STARTTASK_TEXT = GetLocString("Sitearea.dll", "40420190", "")

	L_START_ROLLOVERTEXT = GetLocString("Sitearea.dll", "40420191", "")

	L_ERR_ADMIN_PASSWD_NULL = GetLocString("Sitearea.dll", "404201C2", "")

	L_CREATE_DOMAIN_USER = GetLocString("Sitearea.dll", "404201C3", "")

	L_CREATE_LOCAL_USER= GetLocString("Sitearea.dll", "404201C4", "")

	L_CREATE_EXIST_USER= GetLocString("Sitearea.dll", "404201C5", "")

	L_CREATE_FTP_SITE = GetLocString("Sitearea.dll", "404201C6", "")

	L_DOMAIN_USER_ACCOUNT = GetLocString("Sitearea.dll", "404201C7", "")

	L_LOCAL_USER_ACCOUNT = GetLocString("Sitearea.dll", "404201C8", "")

	L_DEFAULT_PAGE = GetLocString("Sitearea.dll", "404201C9", "")

	L_FILE_NAME = GetLocString("Sitearea.dll", "404201CA", "")

	L_BUTTON_FACE_ADD = GetLocString("Sitearea.dll", "404201CB", "")

	L_BUTTON_FACE_MOVE_UP = GetLocString("Sitearea.dll", "404201CC", "")

	L_BUTTON_FACE_MOVE_DOWM = GetLocString("Sitearea.dll", "404201CD", "")

	L_BUTTON_FACE_REMOVE = GetLocString("Sitearea.dll", "404201CE", "")

	L_ALLOW_ANONYMOUS_ACCESS = GetLocString("Sitearea.dll", "404201CF", "")

	L_ERR_INPUT_ISEMPTY = GetLocString("Sitearea.dll", "C04201D0", "")

	L_ERR_EXCEED_TWELVE = GetLocString("Sitearea.dll", "C04201D1", "")

	L_ERR_FILE_EXIST = GetLocString("Sitearea.dll", "C04201D2", "")

	L_ERR_PASSWORD_POLICY = GetLocString("Sitearea.dll", "C04201D3", "")

	L_ERR_ADMINISTRATOR_NAME = GetLocString("Sitearea.dll", "C04201D5", "")

	L_ERR_ACCOUNT_NOT_FOUND	= GetLocString("Sitearea.dll", "C04201D6", "")

	L_ERR_CREATE_VIR_FTP_SITE = GetLocString("Sitearea.dll", "C04201D7", "")

	L_ERR_GET_USER_OBJECT = GetLocString("Sitearea.dll", "C04201D8", "")

	L_ERR_DELETE_VIR_FTP_SITE = GetLocString("Sitearea.dll", "C04201D9", "")

	L_ERR_WEBSITE_START = GetLocString("Sitearea.dll", "404201DD", "")

	L_UNABLETOCREATE_GROUP_ERRORMESSAGE = GetLocString("Sitearea.dll", "C04201DA", "")

    L_ERR_FRONTPAGE_CONFIGURATION = GetLocString("Sitearea.dll", "C04201DB", "")
	%>
