WINDOWS_COM= $(BASEDIR)\$(WU_ROOT_PROJ)\windows.com
WULIB= $(WINDOWS_COM)\lib
WUV3= $(WINDOWS_COM)\wuv3
WUAU= $(WINDOWS_COM)\wuau

!if "$(WUBLDLAB)" == "1"
C_DEFINES = $(C_DEFINES) /DWUBLDLAB=1
!endif
