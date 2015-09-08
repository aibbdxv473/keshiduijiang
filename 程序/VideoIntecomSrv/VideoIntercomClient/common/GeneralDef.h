/**********************************************************
FileName:    GeneralDef.h
Description: demo and struct define for clientdemo      
Date:        2008/03/27   
Modification History:      
    <version> <time>         <desc>
    <1.0    > <2008/03/27>       <created>
***********************************************************/

#ifndef _GLOBLE_DEF_H_
#define _GLOBLE_DEF_H_

//include header file for SDK and decoding lib
#include "HCNetSDK.h"
#include "DecodeCardSdk.h"
#include "DataType.h"
#include "plaympeg4.h"
#include ".\\common\\Client.h"
//vca
#define MIN_PNT_NUM 3			//minixum number of polygon points
#define PI 3.1415926
#define WM_MYCOMMAND					WM_USER + 1		//for sdk
#define WM_CHANGE_CHANNEL_ITEM_IMAGE	WM_USER + 2     //change channel node icon
#define WM_CHANGE_DEVICE_ITEM_IMAGE		WM_USER + 3     //change device node icon
#define WM_ADD_LOG						WM_USER + 4		//add log 
#define WM_PROC_ALARM					WM_USER + 5		//alarm handle
#define WM_SEND_CONNECT					WM_USER + 6
#define DEMO_FULL_WIDTH 1024	//default demo width
#define DEMO_FULL_HEIGHT 768	//default demo height
#define OUTPUT_INTERVAL 4		//interval between each display window
#define LIST_ENLARGE_HIGH 575	//enlarge height of	local log or alarm list

#define WIDTH_4CIF			704
#define HEIGHT_4CIF_PAL		576
#define HEIGHT_4CIF_NTSC	480
#define WIDTH_CIF			352
#define HEIGHT_CIF_PAL		288
#define HEIGHT_CIF_NTSC		240
#define PRECISION_4CIF_FRAME	32//zone setting unit precision under 4cif

//m_iMainType mian fuction bar main function type
#define PREVIEW_T		0
#define CONFIG_ALL_T	1
#define PLAY_BACK_T		2

//config dialog type 
	//remote config type
#define REMOTE_DEVICE_CFG_T		0	//device/network info config
#define REMOTE_CHANNEL_CFG_T	1	//channel info configuration
#define REMOTE_SEREIAL_CFG_T	2	//serial port info configuration
#define REMOTE_AlARM_CFG_T		3	//alarm input/output configuration
#define REMOTE_USER_CFG_T		4	//user info configuration
#define REMOTE_EXCEPTION_CFG_T	5	//exception info configuration
#define REMOTE_ATM_INFO_CFG_T	6	//ATM info configuration
#define REMOTE_MAT_DEC_CFG_T	7	//multi-channel decoder configuration

	
#define LOCAL_CFG_T				8
#define LOG_QUERY_T				9
#define DECODE_CARD_CFG_T		10

//play back dialog type
#define  PLAY_REMOTE_FILE_T 0
#define  PLAY_LOCAL_FILE_T 1
#define  PLAY_REMOTE_TIME_T 2
#define  PLAY_REMOTE_EVENT_T 3

//local log type
#define ALARM_INFO_T		0	//alarm
#define OPERATION_SUCC_T	1	//operation succeed
#define OPERATION_FAIL_T	2	//operation fail
#define PLAY_SUCC_T			3	//player succeed
#define PLAY_FAIL_T			4	//player fail
#define RECV_CLI_T			5   //RECEIVE //FANLONGJIA
#define SEND_CLI_T			6	//SEND //FANLONGJIA

#define DETECT_AREA_LEFT 10//left position of detection zone
#define DETECT_AREA_TOP 10//upper position of detection zone
#define SCREEN_EDGE 30		//size of screen edge

#define MINSPACE		(200*1024*1024)//min HD size

//timer
#define SYSTEM_TIMER			1		//timer for system parameter,cpu
#define CYCLE_PREVIEW_TIMER		2		//switch display timer
#define	AUTORECORD_TIMER		3		//suto record timer
#define	FREESPACE_TIMER			4		//check HD timer
#define	FILEINTERVAL_TIMER		5		//save file interval timer
#define UPGRADE_TIMER			6		//update timer
#define PLAY_TIMER				7		//local playback status timer
#define REMOTE_PLAY_STATE_TIMER	8		//remote playback status timer
#define DOWNSTATE_TIMER			9		//file download timer
#define FORMAT_TIMER			10		//remote HD format timer
#define EVENTLOG_TIMER			11		//event log timer
#define PLAYBYTIME_TIMER		12		//timer for playback on time
#define DOWNBYTIME_TIMER		13		//timerfor download on time
#define SERIAL_TIMER			14		//timer for serial port send data
#define	CHECK_DEVICE_TIMER		15		//tiner for device time checking

//default image parameter
#define DEFAULT_BRIGHTNESS	6			//default brightness
#define DEFAULT_CONTRAST	6			//default contrast
#define DEFAULT_SATURATION  6			//default saturation
#define DEFAULT_HUE			6			//default hue
#define DEFAULT_VOLUME		50			//default volume


#define MAX_DEVICES			512	//max device number
#define MAX_OUTPUTS			512	//16max windownumber
#define MAX_PREVIEWS		512	//max preview number

//device list config
#define TREE_ALL_T	 0        //root node
#define DEVICETYPE 	 1		  //device
#define CHANNELTYPE	 2	      //channel		

/////
//bmp status
#define TREE_ALL			 0	//device list	
#define DEVICE_LOGOUT	     1   //device not log in
#define DEVICE_LOGIN	     2   //devic3e login
#define DEVICE_FORTIFY	     3   //on guard
#define DEVICE_ALARM		 4   //alarm on device
#define DEVICE_FORTIFY_ALARM 5	//onguard & alarm on device

#define CHAN_ORIGINAL		 6   //no preview, no record
#define CHAN_PLAY		 	 7   //preview
#define CHAN_RECORD			 8   //record
#define CHAN_PLAY_RECORD	 9   //preview and record

#define CHAN_ALARM		 	 10   //no preview, no record, only alarm
#define CHAN_PLAY_ALARM			 11   //review, no record, with alarm info
#define CHAN_PLAY_RECORD_ALARM	 12   //preview & record & alarm
#define CHAN_OFF_LINE			 13	 //channel off-line

#define CHAN_AUDIO				 1   //audio channel

//ATM info input
#define NET_LISTEN				0	//network listen;
#define NET_ACCEPT				1	//network receive;
#define SERIAL_INPUT_DIRECTLY	2	//serial port input;
#define SERIAL_ATM_CMD_INPUT	3	//serial port ATM command input;

//compression parameter
#define NORM_HIGH_STREAM_COMPRESSION		0//主码流图像压缩参数,压缩能力强,性能可以更高
#define SUB_STREAM_COMPRESSION		1//子码流图像压缩参数
#define EVENT_INVOKE_COMPRESSION	2//事件触发图像压缩参数,一些参数相对固定
#define NORM_LOW_STREAM_COMPRESSION		3//主码流图像压缩参数,压缩能力强,性能可以更高

//serial port type
#define SERIAL_232		1	//232
#define SERIAL_485		2	//485


#define	ANALOG_CHAN_DISABLE 0
#define	ANALOG_CHAN_ENABLE	1
#define	IP_CHAN_DISABLE		2
#define	IP_CHAN_ENABLE		3

#define ALARM_OUT_FORMAT		("AlarmOut%d")
#define ALARM_IN_NAME			("AlarmIn%d")
#define IP_ALARM_IN_NAME		("IPAlarmIn%d")
#define IP_ALARM_OUT_NAME		("IPAlarmOut%d")
#define ANALOG_C_FORMAT			("Camera%d")
#define IP_CAMERA_NAME			("IPCamera%02d")
#define DIGITAL_C_FORMAT		("IPCamera%d")

//device index on play-all/group play mode
typedef struct STRU_PLAY_INFO{

	int		iDeviceIndex;		//device index
	int		iChanIndex;			//channel index

	STRU_PLAY_INFO()
	{
		iDeviceIndex = -1;
		iChanIndex   = -1;
	}
}PLAY_INFO,*PPLAY_INFO;

//device index info
typedef struct STRU_CHANNEL_INFO{ 

	int		iDeviceIndex;			//设备序号
	int		iChanIndex;			//通道序号
	char	chChanName[100];	//通道名 
	
	BOOL    bLocalManualRec;     //人工处理标志
	BOOL    bAlarm;				//警报标志
	BOOL	bEnable;			//连接标志 
	char	chAccessChanIP[32];//通道IP

	STRU_CHANNEL_INFO *pNext;
	STRU_CHANNEL_INFO()
	{
		iDeviceIndex		= -1;
		iChanIndex			= -1;
		chChanName[0]		= '\0';

		bLocalManualRec		= FALSE;
		bAlarm				= FALSE;
		bEnable				= TRUE;
		chAccessChanIP[0]	= '\0';	 		  
		pNext				= NULL;
	}

}CHANNEL_INFO,*PCHANNEL_INFO;

/*typedef enum ENUM_CHANNEL_STATUS
{
free = 0,
login,
connect,
error
} CHANNEL_STATUS;*/
//操作台信息
typedef struct STRU_CONSOLE_INFO
{
	int iConsoleIndex; // 控制台序号
	CClient *pConsoleClient;//APP通信
//	CHANNEL_STATUS channelstatus;//
	bool bLocalManualRec;//监控端正在处理
	int channelIndex;//通道编号
	bool bConChannel;   //连接视频状态
	bool bConnected; //连接状态
	char chVideoSrvIP[32]; //操作台IP
	STRU_CONSOLE_INFO()
	{
		iConsoleIndex = -1;
		pConsoleClient = NULL;
		channelIndex = -1;
		bConChannel = FALSE;
		bLocalManualRec = false;
		bConnected = FALSE;
		chVideoSrvIP[0] = '\0';
	}
}CONSOLE_INFO,*PCONSOLE_INFO;


//device info
typedef struct STRU_DEVICE_INFO{
	int		iDeviceIndex;			//device index
	LONG	lLoginID;				//ID  登陆后返回ID
	DWORD	dwDevSoftVer;			//erserved

	char	chLocalNodeName[100];	//local device node
	char	chDeviceName[100];		//device name 
	char	chDeviceIP[33];			//device IP: IP,pppoe address, or network gate address, etc
	//char	chDevNetCard1IP[33];	//IP
	char	chLoginUserName[30];	//login user name
	char	chLoginPwd[30];	//password
	char	chDeviceMultiIP[20];	//multi-cast group address
	//char	chIPServerIP[32];		//IP
	char	chSerialNumber[50];		//SN
	int		iDeviceChanNum;		    //channel numder
	int		iStartChan;				//start channel number
	int		iDeviceType;			//device type
	int 	iDiskNum;				//HD number
	LONG 	lDevicePort;			//port number
	int		iAlarmInNum;			//alarm in number
	int		iAlarmOutNum;			//alarm out number
	int 	iAudioNum;				//voice talk number
	int 	iIPChanNum;				//max IP channel number

	BOOL	bCycle;					//if this device is on cycle recording
	BOOL	bPlayDevice;			//will be added later
	BOOL	bVoiceTalk;				//on voice talkor not
	LONG    lAudioHandle[MAX_AUDIO_V30]; //voicebroadcast handle
	BOOL	bCheckBroadcast[MAX_AUDIO_V30]; //Add to broad cast group
	LONG	lFortifyHandle;			//on guard handle
	BOOL    bAlarm;					//whether there is alarm
	int	    iDeviceLoginType;		//register mode  0 - fix IP   1- IPSERVER mode    2 -  domain name 
	DWORD	dwImageType;			//device status icon
	BOOL	bIPRet;					//support IP conection
	int		iEnableChanNum;			//valid channel number
	BOOL	bDVRLocalAllRec;		//local recording
	LONG	lVoiceCom[MAX_AUDIO_V30];	//voice transmit
	LONG	lFirstEnableChanIndex;			//first enabled channel index
	LONG	lTranHandle;				//232 transparent channel handle

	STRU_CHANNEL_INFO struChanInfo[MAX_CHANNUM_V30]; //channel structure
	NET_DVR_IPPARACFG_V31 struIPParaCfg;				//IP channel parameters
	NET_DVR_IPALARMINCFG struAlarmInCfg;
	NET_DVR_IPALARMOUTCFG struAlarmOutCfg;
	STRU_DEVICE_INFO *pNext;
	STRU_DEVICE_INFO()
	{						
		iDeviceIndex		= -1;
		lLoginID            = -1;	
		dwDevSoftVer		= 0;
		chLocalNodeName[0]  = '\0';	
		chDeviceName[0]     = '\0';	
		chDeviceIP[0]	    = '\0';	
		//chDevNetCard1IP[0]	= '\0';
		chLoginUserName[0]= '\0';	
		chLoginPwd[0] = '\0';	
		chDeviceMultiIP[0]  = '\0';		
		chSerialNumber[0]   = '\0';	 
		iDeviceChanNum      = -1;
		iStartChan			= 0;
		iDeviceType         = 0;	
		iDiskNum            = 0;				
		lDevicePort         = 8000;	
		iAlarmInNum			= 0;	
		iAlarmOutNum        = 0;
		iIPChanNum			= 0;
			
		bCycle              = FALSE;
		bPlayDevice			= FALSE;
		bVoiceTalk			= FALSE;
		bCheckBroadcast[0]     = FALSE;	
		bCheckBroadcast[1]     = FALSE;	
		lFortifyHandle      = -1;	
		bAlarm				= FALSE;
		iDeviceLoginType    = 0;	
		dwImageType			= DEVICE_LOGOUT;
		bIPRet				= FALSE;
		pNext = NULL;
		lVoiceCom[0] = -1;
		lVoiceCom[1] = -1;
		lFirstEnableChanIndex = 0;
		lTranHandle = -1;
		memset(&struIPParaCfg,0, sizeof(NET_DVR_IPPARACFG_V31));
		memset(&struAlarmOutCfg,0, sizeof(NET_DVR_IPALARMOUTCFG));
		memset(&struAlarmInCfg,0, sizeof(NET_DVR_IPALARMINCFG));
	}

}LOCAL_DEVICE_INFO, *PLOCAL_DEVICE_INFO;

//video parameter
typedef struct STRU_VIDEO_EFFECT{
	UINT	m_iBrightness;				//1-10
	UINT	m_iContrast;				//1-10
	UINT	m_iSaturation;				//1-10
	UINT	m_iHue;						//1-10
	STRU_VIDEO_EFFECT()
	{
		m_iBrightness = DEFAULT_BRIGHTNESS;
		m_iContrast = DEFAULT_CONTRAST;	
		m_iSaturation = DEFAULT_SATURATION;
		m_iHue = DEFAULT_HUE;
	}
}VIDEO_INFO, *PVIDEO_INFO;

typedef struct tagLOCAL_LOG_INFO 
{
	int iLogType;
	char szTime[64];
	char szLogInfo[512];
	char szDevInfo[128];
	char szErrInfo[256];
	tagLOCAL_LOG_INFO ()
	{
		iLogType = 0;
		szTime[0] = '\0';
		szLogInfo[0] = '\0';
		szDevInfo[0] = '\0';
		szErrInfo[0] = '\0';
	}
}LOCAL_LOG_INFO, *LPLOCAL_LOG_INFO;
//local recording structure
typedef struct STRU_LOCAL_RECORD_TIME{
	WORD	iStartHour;
	WORD	iStartMinute;
	WORD	iStopHour;
	WORD	iStopMinute;
	WORD	iStartTime;
	WORD	iStopTime;
}LOCAL_RECORD_TIME,*PLOCAL_RECORD_TIME;

//local config
typedef struct STRU_LOCAL_PARAM
{
	BOOL		bCyclePlay;				    //cycle play
	int			iCycleTime;				    //cycle time, default 20
	BOOL		bUseCard;					//hadrware decode
	BOOL		bNTSC;						//hardware decode mode,FALSE,PAL;TRUE,NTSC;default as pal

	BOOL		bAutoRecord;				//auto record;
	BOOL		bCycleRecord;				//cycle record
	int			iStartRecordDriver;		    //client record starting HD dirve
	int			iEndRecordDriver;			//client record stop HD drive
	int			iRecFileSize;				//record file size
	int			iRecordFileInterval;		//record file interval
	char		chDownLoadPath[100];		//remote file download directory
	char		chPictureSavePath[100];		//image capture directory
	char		chRemoteCfgSavePath[100];	//remote config file saving directory
	char		chClientRecordPath[100];		//client record path

	BOOL		bAutoCheckDeviceTime;		//check time with device
	LONG		lCheckDeviceTime;			//check time interval

	int			iAlarmDelayTime ;			//alarm delay time
	int			iAlarmListenPort;			//local listen type

	BOOL		bAutoSaveLog;				//auto save local log info
	BOOL		bAlarmInfo;					//display alarm info on log list
	BOOL		bSuccLog;				//display log access on log list
	BOOL		bFailLog;					//display filaure operation on log list
	BOOL		bAllDiskFull;				//HD full

	//preview
	BOOL		bPlaying;					//on playing
	BOOL		bCycling;					//cycle playing
	BOOL		bPaused;					//cycle pause
	BOOL		bNextPage;				    //next page
	BOOL		bFrontPage;				    //previous page
	BOOL		bEnlarged;				    //enlarge image
	BOOL		bFullScreen;				//full screen
	BOOL		bMultiScreen;				//multi-split-window full screen
	BOOL		bNoDecode;					//soft decode or not
	BOOL		bPreviewBlock;				//preview block or not

	VIDEO_INFO	struVideoInfo[MAX_OUTPUTS];	//video parameter
	int			iVolume;					//volume
	BOOL		bBroadCast;					//voice broadcast
	char		chIPServerIP[16];
	BOOL		bOutputDebugString;

	LOCAL_RECORD_TIME struLocalRecordTime[7][4];
	DWORD		dwBFrameNum;//throw B frame number
	DWORD   bSDKLog;
	STRU_LOCAL_PARAM()
	{
		bCyclePlay			= FALSE;
		iCycleTime			= 20;
		bUseCard		    = FALSE;
		bNTSC				= FALSE;
		bAutoRecord			= FALSE;
		bCycleRecord		= FALSE;
		iStartRecordDriver = 0;
		iEndRecordDriver   = 0;
		iRecFileSize	   = 1;
		iRecordFileInterval = 60;
		sprintf(chDownLoadPath, "%s","C:\\DownLoad");
		sprintf(chPictureSavePath, "%s", "C:\\Picture");
		sprintf(chRemoteCfgSavePath ,"%s", "C:\\SaveRemoteCfgFile");
		sprintf(chClientRecordPath ,"%s", "C:\\mpeg4record\\2008-04-30");

		bAutoCheckDeviceTime	=  FALSE;
		lCheckDeviceTime	= 0;

		iAlarmDelayTime		= 10;
		iAlarmListenPort	= 7200;

		bAutoSaveLog		= TRUE;
		bAlarmInfo			= TRUE;
		bSuccLog			= TRUE;
		bFailLog			= TRUE;

		bAllDiskFull		= FALSE;
		bPlaying			= FALSE;
		bCycling			= FALSE;
		bPaused				= FALSE;
		bNextPage			= FALSE;
		bFrontPage			= FALSE;
		bEnlarged			= FALSE;
		bFullScreen			= FALSE;
		bMultiScreen		= FALSE;
		iVolume				= DEFAULT_VOLUME;
		bBroadCast			= FALSE;
		bNoDecode			= FALSE;
		bPreviewBlock		= TRUE;
		chIPServerIP[0] 	= '\0';
		bOutputDebugString	= FALSE;
		dwBFrameNum			= 0;
		bSDKLog				= 2;
		memset(&struLocalRecordTime[0][0], 0, sizeof(LOCAL_RECORD_TIME)*7*4);
	}
}LOCAL_PARAM, *PLOCAL_PARAM;

#endif
