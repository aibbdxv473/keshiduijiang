#ifndef _HC_NET_SDK_H_
#define _HC_NET_SDK_H_

#define NET_DVR_API  extern "C"__declspec(dllimport)

//�궨��
#define MAX_NAMELEN			    16		//DVR���ص�½��
#define MAX_RIGHT			    32		//�豸֧�ֵ�Ȩ�ޣ�1-12��ʾ����Ȩ�ޣ�13-32��ʾԶ��Ȩ�ޣ�
#define NAME_LEN			    32      //�û�������
#define PASSWD_LEN			    16      //���볤��
#define SERIALNO_LEN		    48      //���кų���
#define MACADDR_LEN			    6       //mac��ַ����
#define MAX_ETHERNET		    2       //�豸������̫����
#define PATHNAME_LEN		    128     //·������
#define MAX_PRESET_V13          16      //Ԥ�õ�

#define MAX_TIMESEGMENT_V30	    8       //9000�豸���ʱ�����
#define MAX_TIMESEGMENT		    4       //8000�豸���ʱ�����

#define MAX_SHELTERNUM			4       //8000�豸����ڵ�������
#define MAX_DAYS				7       //ÿ������
#define PHONENUMBER_LEN			32      //pppoe���ź�����󳤶�

#define MAX_DISKNUM_V30			33		//9000�豸���Ӳ����/* ���33��Ӳ��(����16������SATAӲ�̡�1��eSATAӲ�̺�16��NFS��) */
#define MAX_DISKNUM		        16      //8000�豸���Ӳ����
#define MAX_DISKNUM_V10		    8       //1.2�汾֮ǰ�汾

#define MAX_WINDOW_V30			32      //9000�豸������ʾ��󲥷Ŵ�����
#define MAX_WINDOW				16      //8000�豸���Ӳ����
#define MAX_VGA_V30				4       //9000�豸���ɽ�VGA��
#define MAX_VGA			    	1       //8000�豸���ɽ�VGA��

#define MAX_USERNUM_V30			32      //9000�豸����û���
#define MAX_USERNUM			    16      //8000�豸����û���
#define MAX_EXCEPTIONNUM_V30	32      //9000�豸����쳣������
#define MAX_EXCEPTIONNUM		16      //8000�豸����쳣������
#define MAX_LINK				6       //8000�豸��ͨ�������Ƶ��������

#define MAX_DECPOOLNUM			4       //��·������ÿ������ͨ������ѭ��������
#define MAX_DECNUM				4       //��·��������������ͨ������ʵ��ֻ��һ������������������
#define MAX_TRANSPARENTNUM		2       //��·���������������͸��ͨ����
#define MAX_CYCLE_CHAN			16      //��·�����������ѭͨ����
#define MAX_CYCLE_CHAN_V30      64      //�����ѯͨ��������չ��
#define MAX_DIRNAME_LENGTH		80      //���Ŀ¼����
#define MAX_WINDOWS				16      //��󴰿���

#define MAX_STRINGNUM_V30		8		//9000�豸���OSD�ַ�������
#define MAX_STRINGNUM			4       //8000�豸���OSD�ַ�������
#define MAX_STRINGNUM_EX		8       //8000������չ
#define MAX_AUXOUT_V30			16      //9000�豸����������
#define MAX_AUXOUT			    4       //8000�豸����������
#define MAX_HD_GROUP			16      //9000�豸���Ӳ������
#define MAX_NFS_DISK			8       //8000�豸���NFSӲ����

#define IW_ESSID_MAX_SIZE	    32      //WIFI��SSID�ų���
#define IW_ENCODING_TOKEN_MAX	32      //WIFI��������ֽ���
#define MAX_SERIAL_NUM			64	    //���֧�ֵ�͸��ͨ��·��
#define MAX_DDNS_NUMS	        10      //9000�豸������ddns��
#define MAX_DOMAIN_NAME		    64		/* ����������� */
#define MAX_EMAIL_ADDR_LEN	    48      //���email��ַ����
#define MAX_EMAIL_PWD_LEN		32      //���email���볤��

#define MAXPROGRESS		        100     //�ط�ʱ�����ٷ���
#define MAX_SERIALNUM	        2       //8000�豸֧�ֵĴ����� 1-232�� 2-485
#define CARDNUM_LEN		        20      //���ų���
#define MAX_VIDEOOUT_V30        4       //9000�豸����Ƶ�����
#define MAX_VIDEOOUT	        2       //8000�豸����Ƶ�����

#define MAX_PRESET_V30			    256		/* 9000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK_V30			    256		/* 9000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE_V30			    256		/* 9000�豸֧�ֵ���̨Ѳ���� */
#define MAX_PRESET				    128		/* 8000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK				    128		/* 8000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE				    128		/* 8000�豸֧�ֵ���̨Ѳ���� */

#define CRUISE_MAX_PRESET_NUMS	    32 	    /* һ��Ѳ������Ѳ���� */

#define MAX_SERIAL_PORT             8       //9000�豸֧��232������
#define MAX_PREVIEW_MODE            8       /* �豸֧�����Ԥ��ģʽ��Ŀ 1����,4����,9����,16����.... */
#define MAX_MATRIXOUT               16      /* ���ģ������������ */
#define LOG_INFO_LEN                11840   /* ��־������Ϣ */
#define DESC_LEN                    16      /* ��̨�����ַ������� */
#define PTZ_PROTOCOL_NUM            200     /* 9000���֧�ֵ���̨Э���� */

#define MAX_AUDIO			        1       //8000�����Խ�ͨ����
#define MAX_AUDIO_V30			    2       //9000�����Խ�ͨ����
#define MAX_CHANNUM			        16      //8000�豸���ͨ����
#define MAX_ALARMIN			        16      //8000�豸��󱨾�������
#define MAX_ALARMOUT		        4       //8000�豸��󱨾������
//9000 IPC����
#define MAX_ANALOG_CHANNUM          32      //���32��ģ��ͨ��
#define MAX_ANALOG_ALARMOUT         32      //���32·ģ�ⱨ����� 
#define MAX_ANALOG_ALARMIN          32      //���32·ģ�ⱨ������

#define MAX_IP_DEVICE               32      //�����������IP�豸��
#define MAX_IP_CHANNEL              32      //�����������IPͨ����
#define MAX_IP_ALARMIN              128     //����������౨��������
#define MAX_IP_ALARMOUT             64      //����������౨�������

//SDK_V31 ATM
#define MAX_ACTION_TYPE	        12	    //�Զ���Э����ӽ�����Ϊ�����Ϊ���� 
#define MAX_ATM_PROTOCOL_NUM    256   //ÿ�����뷽ʽ��Ӧ��ATM���Э����
#define  ATM_CUSTOM_PROTO       1025   //�Զ���Э�� ֵΪ1025
#define ATM_PROTOCOL_SORT       4       //ATMЭ����� 
#define ATM_DESC_LEN            32      //ATM�����ַ�������
// SDK_V31 ATM

/* ���֧�ֵ�ͨ���� ���ģ��������IP֧�� */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160

/*******************ȫ�ִ����� begin**********************/	
#define NET_DVR_NOERROR 					0	//û�д���
#define NET_DVR_PASSWORD_ERROR 				1	//�û����������
#define NET_DVR_NOENOUGHPRI 				2	//Ȩ�޲���
#define NET_DVR_NOINIT 						3	//û�г�ʼ��
#define NET_DVR_CHANNEL_ERROR 				4	//ͨ���Ŵ���
#define NET_DVR_OVER_MAXLINK 				5	//���ӵ�DVR�Ŀͻ��˸����������
#define NET_DVR_VERSIONNOMATCH				6	//�汾��ƥ��
#define NET_DVR_NETWORK_FAIL_CONNECT		7	//���ӷ�����ʧ��
#define NET_DVR_NETWORK_SEND_ERROR			8	//�����������ʧ��
#define NET_DVR_NETWORK_RECV_ERROR			9	//�ӷ�������������ʧ��
#define NET_DVR_NETWORK_RECV_TIMEOUT		10	//�ӷ������������ݳ�ʱ
#define NET_DVR_NETWORK_ERRORDATA			11	//���͵���������
#define NET_DVR_ORDER_ERROR					12	//���ô������
#define NET_DVR_OPERNOPERMIT				13	//�޴�Ȩ��
#define NET_DVR_COMMANDTIMEOUT				14	//DVR����ִ�г�ʱ
#define NET_DVR_ERRORSERIALPORT				15	//���ںŴ���
#define NET_DVR_ERRORALARMPORT				16	//�����˿ڴ���
#define NET_DVR_PARAMETER_ERROR 			17  //��������
#define NET_DVR_CHAN_EXCEPTION				18	//������ͨ�����ڴ���״̬
#define NET_DVR_NODISK						19	//û��Ӳ��
#define NET_DVR_ERRORDISKNUM				20	//Ӳ�̺Ŵ���
#define NET_DVR_DISK_FULL					21	//������Ӳ����
#define NET_DVR_DISK_ERROR					22	//������Ӳ�̳���
#define NET_DVR_NOSUPPORT					23	//��������֧��
#define NET_DVR_BUSY						24	//������æ
#define NET_DVR_MODIFY_FAIL					25	//�������޸Ĳ��ɹ�
#define NET_DVR_PASSWORD_FORMAT_ERROR		26	//���������ʽ����ȷ
#define NET_DVR_DISK_FORMATING				27	//Ӳ�����ڸ�ʽ����������������
#define NET_DVR_DVRNORESOURCE				28	//DVR��Դ����
#define	NET_DVR_DVROPRATEFAILED				29  //DVR����ʧ��
#define NET_DVR_OPENHOSTSOUND_FAIL 			30  //��PC����ʧ��
#define NET_DVR_DVRVOICEOPENED 				31  //�����������Խ���ռ��
#define	NET_DVR_TIMEINPUTERROR				32  //ʱ�����벻��ȷ
#define	NET_DVR_NOSPECFILE					33  //�ط�ʱ������û��ָ�����ļ�
#define NET_DVR_CREATEFILE_ERROR			34	//�����ļ�����
#define	NET_DVR_FILEOPENFAIL				35  //���ļ�����
#define	NET_DVR_OPERNOTFINISH				36  //�ϴεĲ�����û�����
#define	NET_DVR_GETPLAYTIMEFAIL				37  //��ȡ��ǰ���ŵ�ʱ�����
#define	NET_DVR_PLAYFAIL					38  //���ų���
#define NET_DVR_FILEFORMAT_ERROR			39  //�ļ���ʽ����ȷ
#define NET_DVR_DIR_ERROR					40	//·������
#define NET_DVR_ALLOC_RESOURCE_ERROR		41  //��Դ�������
#define NET_DVR_AUDIO_MODE_ERROR			42	//����ģʽ����
#define NET_DVR_NOENOUGH_BUF				43	//������̫С
#define NET_DVR_CREATESOCKET_ERROR		 	44	//����SOCKET����
#define NET_DVR_SETSOCKET_ERROR				45	//����SOCKET����
#define NET_DVR_MAX_NUM						46	//�����ﵽ���
#define NET_DVR_USERNOTEXIST				47	//�û�������
#define NET_DVR_WRITEFLASHERROR				48  //дFLASH����
#define NET_DVR_UPGRADEFAIL					49  //DVR����ʧ��
#define NET_DVR_CARDHAVEINIT				50  //���뿨�Ѿ���ʼ����
#define NET_DVR_PLAYERFAILED				51	//���ò��ſ���ĳ������ʧ��
#define NET_DVR_MAX_USERNUM					52  //�豸���û����ﵽ���
#define NET_DVR_GETLOCALIPANDMACFAIL		53  //��ÿͻ��˵�IP��ַ�������ַʧ��
#define NET_DVR_NOENCODEING					54	//��ͨ��û�б���
#define NET_DVR_IPMISMATCH					55	//IP��ַ��ƥ��
#define NET_DVR_MACMISMATCH					56	//MAC��ַ��ƥ��
#define NET_DVR_UPGRADELANGMISMATCH			57	//�����ļ����Բ�ƥ��
#define NET_DVR_MAX_PLAYERPORT				58	//������·���ﵽ���
#define NET_DVR_NOSPACEBACKUP				59	//�����豸��û���㹻�ռ���б���
#define NET_DVR_NODEVICEBACKUP				60	//û���ҵ�ָ���ı����豸
#define NET_DVR_PICTURE_BITS_ERROR			61	//ͼ����λ����������24ɫ
#define NET_DVR_PICTURE_DIMENSION_ERROR		62	//ͼƬ��*���ޣ� ��128*256
#define NET_DVR_PICTURE_SIZ_ERROR			63	//ͼƬ��С���ޣ���100K
#define NET_DVR_LOADPLAYERSDKFAILED			64	//���뵱ǰĿ¼��Player Sdk����
#define NET_DVR_LOADPLAYERSDKPROC_ERROR		65	//�Ҳ���Player Sdk��ĳ���������
#define NET_DVR_LOADDSSDKFAILED				66	//���뵱ǰĿ¼��DSsdk����
#define NET_DVR_LOADDSSDKPROC_ERROR		    67	//�Ҳ���DsSdk��ĳ���������
#define NET_DVR_DSSDK_ERROR					68	//����Ӳ�����DsSdk��ĳ������ʧ��
#define NET_DVR_VOICEMONOPOLIZE				69	//��������ռ
#define NET_DVR_JOINMULTICASTFAILED			70	//����ಥ��ʧ��
#define NET_DVR_CREATEDIR_ERROR				71	//������־�ļ�Ŀ¼ʧ��
#define NET_DVR_BINDSOCKET_ERROR			72	//���׽���ʧ��
#define NET_DVR_SOCKETCLOSE_ERROR			73	//socket�����жϣ��˴���ͨ�������������жϻ�Ŀ�ĵز��ɴ�
#define NET_DVR_USERID_ISUSING			    74	//ע��ʱ�û�ID���ڽ���ĳ����
#define NET_DVR_SOCKETLISTEN_ERROR			75	//����ʧ��
#define NET_DVR_PROGRAM_EXCEPTION			76	//�����쳣
#define NET_DVR_WRITEFILE_FAILED			77	//д�ļ�ʧ��
#define NET_DVR_FORMAT_READONLY				78  //��ֹ��ʽ��ֻ��Ӳ��
#define NET_DVR_WITHSAMEUSERNAME		    79  //�û����ýṹ�д�����ͬ���û���
#define NET_DVR_DEVICETYPE_ERROR            80  /*�������ʱ�豸�ͺŲ�ƥ��*/
#define NET_DVR_LANGUAGE_ERROR              81  /*�������ʱ���Բ�ƥ��*/
#define NET_DVR_PARAVERSION_ERROR           82  /*�������ʱ����汾��ƥ��*/
#define NET_DVR_IPCHAN_NOTALIVE             83  /*Ԥ��ʱ���IPͨ��������*/
#define NET_DVR_RTSP_SDK_ERROR				84	/*���ظ���IPCͨѶ��StreamTransClient.dllʧ��*/
#define NET_DVR_CONVERT_SDK_ERROR			85	/*����ת���ʧ��*/
#define NET_DVR_IPC_COUNT_OVERFLOW			86  /*��������ip����ͨ����*/
#define NET_DVR_PARAMMODE_ERROR             88 //ͼ����ǿ�ǣ�����ģʽ��������Ӳ������ʱ���ͻ��˽����������ʱ����ֵ��
//2009-01-04 
#define NET_DVR_CODESPITTER_OFFLINE			89 //��Ƶ�ۺ�ƽ̨�������������

#define  NET_PLAYM4_NOERROR					    500	//no error
#define	 NET_PLAYM4_PARA_OVER				    501	//input parameter is invalid;
#define  NET_PLAYM4_ORDER_ERROR				    502	//The order of the function to be called is error.
#define	 NET_PLAYM4_TIMER_ERROR				    503	//Create multimedia clock failed;
#define  NET_PLAYM4_DEC_VIDEO_ERROR			    504	//Decode video data failed.
#define  NET_PLAYM4_DEC_AUDIO_ERROR			    505	//Decode audio data failed.
#define	 NET_PLAYM4_ALLOC_MEMORY_ERROR		    506	//Allocate memory failed.
#define  NET_PLAYM4_OPEN_FILE_ERROR			    507	//Open the file failed.
#define  NET_PLAYM4_CREATE_OBJ_ERROR		    508	//Create thread or event failed
#define  NET_PLAYM4_CREATE_DDRAW_ERROR		    509	//Create DirectDraw object failed.
#define  NET_PLAYM4_CREATE_OFFSCREEN_ERROR      510	//failed when creating off-screen surface.
#define  NET_PLAYM4_BUF_OVER			        511	//buffer is overflow
#define  NET_PLAYM4_CREATE_SOUND_ERROR	        512	//failed when creating audio device.	
#define	 NET_PLAYM4_SET_VOLUME_ERROR	        513	//Set volume failed
#define  NET_PLAYM4_SUPPORT_FILE_ONLY	        514	//The function only support play file.
#define  NET_PLAYM4_SUPPORT_STREAM_ONLY	        515	//The function only support play stream.
#define  NET_PLAYM4_SYS_NOT_SUPPORT		        516	//System not support.
#define  NET_PLAYM4_FILEHEADER_UNKNOWN          517	//No file header.
#define  NET_PLAYM4_VERSION_INCORRECT	        518	//The version of decoder and encoder is not adapted.  
#define  NET_PALYM4_INIT_DECODER_ERROR          519	//Initialize decoder failed.
#define  NET_PLAYM4_CHECK_FILE_ERROR	        520	//The file data is unknown.
#define  NET_PLAYM4_INIT_TIMER_ERROR	        521	//Initialize multimedia clock failed.
#define	 NET_PLAYM4_BLT_ERROR			        522	//Blt failed.
#define  NET_PLAYM4_UPDATE_ERROR		        523	//Update failed.
#define  NET_PLAYM4_OPEN_FILE_ERROR_MULTI       524   //openfile error, streamtype is multi
#define  NET_PLAYM4_OPEN_FILE_ERROR_VIDEO       525   //openfile error, streamtype is video
#define  NET_PLAYM4_JPEG_COMPRESS_ERROR         526   //JPEG compress error
#define  NET_PLAYM4_EXTRACT_NOT_SUPPORT         527	//Don't support the version of this file.
#define  NET_PLAYM4_EXTRACT_DATA_ERROR          528	//extract video data failed.

/*******************ȫ�ִ����� end**********************/

/*************************************************
NET_DVR_IsSupport()����ֵ
1��9λ�ֱ��ʾ������Ϣ��λ����TRUE)��ʾ֧�֣�
**************************************************/
#define NET_DVR_SUPPORT_DDRAW			0x01//֧��DIRECTDRAW�������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLT				0x02//�Կ�֧��BLT�����������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLTFOURCC		0x04//�Կ�BLT֧����ɫת���������֧�֣��������������������RGBת����
#define NET_DVR_SUPPORT_BLTSHRINKX		0x08//�Կ�BLT֧��X����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSHRINKY		0x10//�Կ�BLT֧��Y����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHX		0x20//�Կ�BLT֧��X��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHY		0x40//�Կ�BLT֧��Y��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_SSE				0x80//CPU֧��SSEָ�Intel Pentium3����֧��SSEָ�
#define NET_DVR_SUPPORT_MMX				0x100//CPU֧��MMXָ���Intel Pentium3����֧��SSEָ�

/**********************��̨�������� begin*************************/	
#define LIGHT_PWRON		2	/* ��ͨ�ƹ��Դ */
#define WIPER_PWRON		3	/* ��ͨ��ˢ���� */
#define FAN_PWRON		4	/* ��ͨ���ȿ��� */
#define HEATER_PWRON	5	/* ��ͨ���������� */
#define AUX_PWRON1		6	/* ��ͨ�����豸���� */
#define AUX_PWRON2		7	/* ��ͨ�����豸���� */
#define SET_PRESET		8	/* ����Ԥ�õ� */
#define CLE_PRESET		9	/* ���Ԥ�õ� */

#define ZOOM_IN			11	/* �������ٶ�SS���(���ʱ��) */
#define ZOOM_OUT		12	/* �������ٶ�SS��С(���ʱ�С) */
#define FOCUS_NEAR      13  /* �������ٶ�SSǰ�� */
#define FOCUS_FAR       14  /* �������ٶ�SS��� */
#define IRIS_OPEN       15  /* ��Ȧ���ٶ�SS���� */
#define IRIS_CLOSE      16  /* ��Ȧ���ٶ�SS��С */

#define TILT_UP			21	/* ��̨��SS���ٶ����� */
#define TILT_DOWN		22	/* ��̨��SS���ٶ��¸� */
#define PAN_LEFT		23	/* ��̨��SS���ٶ���ת */
#define PAN_RIGHT		24	/* ��̨��SS���ٶ���ת */
#define UP_LEFT			25	/* ��̨��SS���ٶ���������ת */
#define UP_RIGHT		26	/* ��̨��SS���ٶ���������ת */
#define DOWN_LEFT		27	/* ��̨��SS���ٶ��¸�����ת */
#define DOWN_RIGHT		28	/* ��̨��SS���ٶ��¸�����ת */
#define PAN_AUTO		29	/* ��̨��SS���ٶ������Զ�ɨ�� */

#define FILL_PRE_SEQ	30	/* ��Ԥ�õ����Ѳ������ */
#define SET_SEQ_DWELL	31	/* ����Ѳ����ͣ��ʱ�� */
#define SET_SEQ_SPEED	32	/* ����Ѳ���ٶ� */
#define CLE_PRE_SEQ		33	/* ��Ԥ�õ��Ѳ��������ɾ�� */
#define STA_MEM_CRUISE	34	/* ��ʼ��¼�켣 */
#define STO_MEM_CRUISE	35	/* ֹͣ��¼�켣 */
#define RUN_CRUISE		36	/* ��ʼ�켣 */
#define RUN_SEQ			37	/* ��ʼѲ�� */
#define STOP_SEQ		38	/* ֹͣѲ�� */
#define GOTO_PRESET		39	/* ����ת��Ԥ�õ� */

/**********************��̨�������� end*************************/	

/*************************************************
�ط�ʱ���ſ�������궨�� 
NET_DVR_PlayBackControl
NET_DVR_PlayControlLocDisplay
NET_DVR_DecPlayBackCtrl�ĺ궨��
����֧�ֲ鿴����˵���ʹ���
**************************************************/	
#define NET_DVR_PLAYSTART		1//��ʼ����
#define NET_DVR_PLAYSTOP		2//ֹͣ����
#define NET_DVR_PLAYPAUSE		3//��ͣ����
#define NET_DVR_PLAYRESTART		4//�ָ�����
#define NET_DVR_PLAYFAST		5//���
#define NET_DVR_PLAYSLOW		6//����
#define NET_DVR_PLAYNORMAL		7//�����ٶ�
#define NET_DVR_PLAYFRAME		8//��֡��
#define NET_DVR_PLAYSTARTAUDIO	9//������
#define NET_DVR_PLAYSTOPAUDIO	10//�ر�����
#define NET_DVR_PLAYAUDIOVOLUME	11//��������
#define NET_DVR_PLAYSETPOS		12//�ı��ļ��طŵĽ���
#define NET_DVR_PLAYGETPOS		13//��ȡ�ļ��طŵĽ���
#define NET_DVR_PLAYGETTIME		14//��ȡ��ǰ�Ѿ����ŵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_PLAYGETFRAME	15//��ȡ��ǰ�Ѿ����ŵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALFRAMES  16//��ȡ��ǰ�����ļ��ܵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALTIME    17//��ȡ��ǰ�����ļ��ܵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_THROWBFRAME		20//��B֡
#define NET_DVR_SETSPEED		24//���������ٶ�
#define NET_DVR_KEEPALIVE		25//�������豸������(����ص�����������2�뷢��һ��)

//Զ�̰����������£�
/* key value send to CONFIG program */
#define KEY_CODE_1 1
#define KEY_CODE_2 2
#define KEY_CODE_3 3
#define KEY_CODE_4 4
#define KEY_CODE_5 5
#define KEY_CODE_6 6
#define KEY_CODE_7 7
#define KEY_CODE_8 8
#define KEY_CODE_9 9
#define KEY_CODE_0 10
#define KEY_CODE_POWER 11
#define KEY_CODE_MENU 12
#define KEY_CODE_ENTER 13
#define KEY_CODE_CANCEL 14
#define KEY_CODE_UP 15
#define KEY_CODE_DOWN 16
#define KEY_CODE_LEFT 17
#define KEY_CODE_RIGHT 18
#define KEY_CODE_EDIT 19
#define KEY_CODE_ADD 20
#define KEY_CODE_MINUS 21
#define KEY_CODE_PLAY 22
#define KEY_CODE_REC 23
#define KEY_CODE_PAN 24
#define KEY_CODE_M 25
#define KEY_CODE_A 26
#define KEY_CODE_F1 27
#define KEY_CODE_F2 28

/* for PTZ control */
#define KEY_PTZ_UP_START KEY_CODE_UP
#define KEY_PTZ_UP_STOP 32

#define KEY_PTZ_DOWN_START KEY_CODE_DOWN
#define KEY_PTZ_DOWN_STOP 33

#define KEY_PTZ_LEFT_START KEY_CODE_LEFT
#define KEY_PTZ_LEFT_STOP 34

#define KEY_PTZ_RIGHT_START KEY_CODE_RIGHT
#define KEY_PTZ_RIGHT_STOP 35

#define KEY_PTZ_AP1_START KEY_CODE_EDIT /* ��Ȧ+ */
#define KEY_PTZ_AP1_STOP 36

#define KEY_PTZ_AP2_START KEY_CODE_PAN /* ��Ȧ- */
#define KEY_PTZ_AP2_STOP 37

#define KEY_PTZ_FOCUS1_START KEY_CODE_A /* �۽�+ */
#define KEY_PTZ_FOCUS1_STOP 38

#define KEY_PTZ_FOCUS2_START KEY_CODE_M /* �۽�- */
#define KEY_PTZ_FOCUS2_STOP 39

#define KEY_PTZ_B1_START 40 /* �䱶+ */
#define KEY_PTZ_B1_STOP 41

#define KEY_PTZ_B2_START 42 /* �䱶- */
#define KEY_PTZ_B2_STOP 43

//9000����
#define KEY_CODE_11 44
#define KEY_CODE_12 45
#define KEY_CODE_13 46
#define KEY_CODE_14 47
#define KEY_CODE_15 48
#define KEY_CODE_16 49

/*************************������������ begin*******************************/
//����NET_DVR_SetDVRConfig��NET_DVR_GetDVRConfig,ע�����Ӧ�����ýṹ

#define NET_DVR_GET_DEVICECFG		100		//��ȡ�豸����
#define NET_DVR_SET_DEVICECFG		101		//�����豸����
#define NET_DVR_GET_NETCFG			102		//��ȡ�������
#define NET_DVR_SET_NETCFG			103		//�����������
#define NET_DVR_GET_PICCFG			104		//��ȡͼ�����
#define NET_DVR_SET_PICCFG			105		//����ͼ�����
#define NET_DVR_GET_COMPRESSCFG		106		//��ȡѹ������
#define NET_DVR_SET_COMPRESSCFG		107		//����ѹ������
#define NET_DVR_GET_RECORDCFG		108		//��ȡ¼��ʱ�����
#define NET_DVR_SET_RECORDCFG		109		//����¼��ʱ�����
#define NET_DVR_GET_DECODERCFG		110		//��ȡ����������
#define NET_DVR_SET_DECODERCFG		111		//���ý���������
#define NET_DVR_GET_RS232CFG 		112		//��ȡ232���ڲ���
#define NET_DVR_SET_RS232CFG		113		//����232���ڲ���
#define NET_DVR_GET_ALARMINCFG 		114		//��ȡ�����������
#define NET_DVR_SET_ALARMINCFG		115		//���ñ����������
#define NET_DVR_GET_ALARMOUTCFG 	116		//��ȡ�����������
#define NET_DVR_SET_ALARMOUTCFG		117		//���ñ����������
#define NET_DVR_GET_TIMECFG 		118		//��ȡDVRʱ��
#define NET_DVR_SET_TIMECFG			119		//����DVRʱ��
#define NET_DVR_GET_PREVIEWCFG 		120		//��ȡԤ������
#define NET_DVR_SET_PREVIEWCFG		121		//����Ԥ������
#define NET_DVR_GET_VIDEOOUTCFG 	122		//��ȡ��Ƶ�������
#define NET_DVR_SET_VIDEOOUTCFG		123		//������Ƶ�������
#define NET_DVR_GET_USERCFG 		124		//��ȡ�û�����
#define NET_DVR_SET_USERCFG			125		//�����û�����
#define NET_DVR_GET_EXCEPTIONCFG 	126		//��ȡ�쳣����
#define NET_DVR_SET_EXCEPTIONCFG	127		//�����쳣����
#define NET_DVR_GET_ZONEANDDST		128		//��ȡʱ������ʱ�Ʋ���
#define NET_DVR_SET_ZONEANDDST		129		//����ʱ������ʱ�Ʋ���
#define NET_DVR_GET_SHOWSTRING		130		//��ȡ�����ַ�����
#define NET_DVR_SET_SHOWSTRING		131		//���õ����ַ�����
#define NET_DVR_GET_EVENTCOMPCFG	132		//��ȡ�¼�����¼�����
#define NET_DVR_SET_EVENTCOMPCFG	133		//�����¼�����¼�����

#define NET_DVR_GET_AUXOUTCFG		140		//��ȡ�������������������(HS�豸�������2006-02-28)
#define NET_DVR_SET_AUXOUTCFG		141		//���ñ������������������(HS�豸�������2006-02-28)
#define NET_DVR_GET_PREVIEWCFG_AUX 	142		//��ȡ-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)
#define NET_DVR_SET_PREVIEWCFG_AUX	143		//����-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)

#define NET_DVR_GET_PICCFG_EX		200		//��ȡͼ�����(SDK_V14��չ����)
#define NET_DVR_SET_PICCFG_EX		201		//����ͼ�����(SDK_V14��չ����)
#define NET_DVR_GET_USERCFG_EX 		202		//��ȡ�û�����(SDK_V15��չ����)
#define NET_DVR_SET_USERCFG_EX		203		//�����û�����(SDK_V15��չ����)
#define NET_DVR_GET_COMPRESSCFG_EX	204		//��ȡѹ������(SDK_V15��չ����2006-05-15)
#define NET_DVR_SET_COMPRESSCFG_EX	205		//����ѹ������(SDK_V15��չ����2006-05-15)


#define NET_DVR_GET_NETAPPCFG		222		//��ȡ����Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_SET_NETAPPCFG		223		//��������Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_GET_NTPCFG			224		//��ȡ����Ӧ�ò��� NTP
#define NET_DVR_SET_NTPCFG			225		//��������Ӧ�ò��� NTP
#define NET_DVR_GET_DDNSCFG			226		//��ȡ����Ӧ�ò��� DDNS
#define NET_DVR_SET_DDNSCFG			227		//��������Ӧ�ò��� DDNS
//��ӦNET_DVR_EMAILPARA
#define NET_DVR_GET_EMAILCFG		228		//��ȡ����Ӧ�ò��� EMAIL
#define NET_DVR_SET_EMAILCFG		229		//��������Ӧ�ò��� EMAIL

#define NET_DVR_GET_NFSCFG			230		/* NFS disk config */
#define NET_DVR_SET_NFSCFG			231		/* NFS disk config */

#define NET_DVR_GET_SHOWSTRING_EX	238		//��ȡ�����ַ�������չ(֧��8���ַ�)
#define NET_DVR_SET_SHOWSTRING_EX	239		//���õ����ַ�������չ(֧��8���ַ�)
#define NET_DVR_GET_NETCFG_OTHER	244		//��ȡ�������
#define NET_DVR_SET_NETCFG_OTHER	245		//�����������

//��ӦNET_DVR_EMAILCFG�ṹ
#define NET_DVR_GET_EMAILPARACFG	250		//Get EMAIL parameters
#define NET_DVR_SET_EMAILPARACFG	251		//Setup EMAIL parameters


#define NET_DVR_GET_DDNSCFG_EX		274	//��ȡ��չDDNS����
#define NET_DVR_SET_DDNSCFG_EX		275	//������չDDNS����

#define	NET_DVR_SET_PTZPOS			292		//��̨����PTZλ��
#define	NET_DVR_GET_PTZPOS			293		//��̨��ȡPTZλ��
#define	NET_DVR_GET_PTZSCOPE		294		//��̨��ȡPTZ��Χ

/***************************DS9000��������(_V30) begin *****************************/
//����(NET_DVR_NETCFG_V30�ṹ)
#define NET_DVR_GET_NETCFG_V30		    1000		//��ȡ�������
#define NET_DVR_SET_NETCFG_V30		    1001		//�����������

//ͼ��(NET_DVR_PICCFG_V30�ṹ)
#define NET_DVR_GET_PICCFG_V30		    1002		//��ȡͼ�����
#define NET_DVR_SET_PICCFG_V30		    1003		//����ͼ�����

//¼��ʱ��(NET_DVR_RECORD_V30�ṹ)
#define NET_DVR_GET_RECORDCFG_V30	    1004		//��ȡ¼�����
#define NET_DVR_SET_RECORDCFG_V30	    1005		//����¼�����

//�û�(NET_DVR_USER_V30�ṹ)
#define NET_DVR_GET_USERCFG_V30 	    1006		//��ȡ�û�����
#define NET_DVR_SET_USERCFG_V30		    1007		//�����û�����

//9000DDNS��������(NET_DVR_DDNSPARA_V30�ṹ)
#define     NET_DVR_GET_DDNSCFG_V30		1010		//��ȡDDNS(9000��չ)
#define     NET_DVR_SET_DDNSCFG_V30		1011		//����DDNS(9000��չ)

//EMAIL����(NET_DVR_EMAILCFG_V30�ṹ)
#define NET_DVR_GET_EMAILCFG_V30		1012	//��ȡEMAIL���� 
#define NET_DVR_SET_EMAILCFG_V30		1013	//����EMAIL���� 

//Ѳ������ (NET_DVR_CRUISE_PARA�ṹ)
#define 	NET_DVR_GET_CRUISE			1020		
#define 	NET_DVR_SET_CRUISE			1021		


//��������ṹ���� (NET_DVR_ALARMINCFG_V30�ṹ)
#define 	NET_DVR_GET_ALARMINCFG_V30			1024		
#define 	NET_DVR_SET_ALARMINCFG_V30			1025

//��������ṹ���� (NET_DVR_ALARMOUTCFG_V30�ṹ)
#define 	NET_DVR_GET_ALARMOUTCFG_V30			1026		
#define 	NET_DVR_SET_ALARMOUTCFG_V30			1027

//��Ƶ����ṹ���� (NET_DVR_VIDEOOUT_V30�ṹ)
#define 	NET_DVR_GET_VIDEOOUTCFG_V30			1028		
#define 	NET_DVR_SET_VIDEOOUTCFG_V30			1029	

//�����ַ��ṹ���� (NET_DVR_SHOWSTRING_V30�ṹ)
#define 	NET_DVR_GET_SHOWSTRING_V30			1030		
#define 	NET_DVR_SET_SHOWSTRING_V30			1031

//�쳣�ṹ���� (NET_DVR_EXCEPTION_V30�ṹ)
#define 	NET_DVR_GET_EXCEPTIONCFG_V30		1034		
#define 	NET_DVR_SET_EXCEPTIONCFG_V30		1035

//����232�ṹ���� (NET_DVR_RS232CFG_V30�ṹ)
#define 	NET_DVR_GET_RS232CFG_V30			1036		
#define 	NET_DVR_SET_RS232CFG_V30			1037

//����Ӳ�̽���ṹ���� (NET_DVR_NET_DISKCFG�ṹ)
#define		NET_DVR_GET_NET_DISKCFG				1038		//����Ӳ�̽����ȡ
#define		NET_DVR_SET_NET_DISKCFG				1039		//����Ӳ�̽�������
//ѹ������ (NET_DVR_COMPRESSIONCFG_V30�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_V30	        1040		
#define     NET_DVR_SET_COMPRESSCFG_V30	        1041		

//��ȡ485���������� (NET_DVR_DECODERCFG_V30�ṹ)
#define     NET_DVR_GET_DECODERCFG_V30		    1042		//��ȡ����������
#define     NET_DVR_SET_DECODERCFG_V30		    1043		//���ý���������

//��ȡԤ������ (NET_DVR_PREVIEWCFG_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_V30		    1044		//��ȡԤ������
#define     NET_DVR_SET_PREVIEWCFG_V30		    1045		//����Ԥ������

//����Ԥ������ (NET_DVR_PREVIEWCFG_AUX_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_AUX_V30		1046		//��ȡ����Ԥ������
#define     NET_DVR_SET_PREVIEWCFG_AUX_V30		1047		//���ø���Ԥ������

//IP�������ò��� ��NET_DVR_IPPARACFG�ṹ��
#define     NET_DVR_GET_IPPARACFG               1048        //��ȡIP����������Ϣ 
#define     NET_DVR_SET_IPPARACFG               1049        //����IP����������Ϣ

//IP��������������ò��� ��NET_DVR_IPALARMINCFG�ṹ��
#define     NET_DVR_GET_IPALARMINCFG            1050        //��ȡIP�����������������Ϣ 
#define     NET_DVR_SET_IPALARMINCFG            1051        //����IP�����������������Ϣ

//IP��������������ò��� ��NET_DVR_IPALARMOUTCFG�ṹ��
#define     NET_DVR_GET_IPALARMOUTCFG           1052        //��ȡIP�����������������Ϣ 
#define     NET_DVR_SET_IPALARMOUTCFG           1053        //����IP�����������������Ϣ

//Ӳ�̹���Ĳ�����ȡ (NET_DVR_HDCFG�ṹ)
#define     NET_DVR_GET_HDCFG			        1054	    //��ȡӲ�̹������ò���
#define     NET_DVR_SET_HDCFG			        1055	    //����Ӳ�̹������ò���
//�������Ĳ�����ȡ (NET_DVR_HDGROUP_CFG�ṹ)
#define     NET_DVR_GET_HDGROUP_CFG			    1056	    //��ȡ����������ò���
#define     NET_DVR_SET_HDGROUP_CFG			    1057	    //��������������ò���

//�豸������������(NET_DVR_COMPRESSION_AUDIO�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_AUD         1058        //��ȡ�豸�����Խ��������
#define     NET_DVR_SET_COMPRESSCFG_AUD         1059        //�����豸�����Խ��������

//IP�������ò��� ��NET_DVR_IPPARACFG_V31�ṹ��
#define     NET_DVR_GET_IPPARACFG_V31            1060        //��ȡIP����������Ϣ 
#define     NET_DVR_SET_IPPARACFG_V31            1061        //����IP����������Ϣ
/***************************DS9000��������(_V30) end *****************************/

/*************************������������ end*******************************/


/*******************�����ļ�����־��������ֵ*************************/
#define NET_DVR_FILE_SUCCESS		1000	//����ļ���Ϣ
#define NET_DVR_FILE_NOFIND			1001	//û���ļ�
#define NET_DVR_ISFINDING			1002	//���ڲ����ļ�
#define	NET_DVR_NOMOREFILE			1003	//�����ļ�ʱû�и�����ļ�
#define	NET_DVR_FILE_EXCEPTION		1004	//�����ļ�ʱ�쳣

/*********************�ص��������� begin************************/
#define COMM_ALARM					0x1100	//8000������Ϣ�����ϴ�
#define	COMM_TRADEINFO				0x1500  //ATMDVR�����ϴ�������Ϣ

#define COMM_ALARM_V30				0x4000	//9000������Ϣ�����ϴ�
#define COMM_IPCCFG			        0x4001	//9000�豸IPC�������øı䱨����Ϣ�����ϴ�
#define COMM_IPCCFG_V31			    0x4002	//9000�豸IPC�������øı䱨����Ϣ�����ϴ���չ 9000_1.1


/*************�����쳣����(��Ϣ��ʽ, �ص���ʽ(����))****************/
#define EXCEPTION_EXCHANGE			0x8000	//�û�����ʱ�쳣
#define EXCEPTION_AUDIOEXCHANGE		0x8001	//�����Խ��쳣
#define EXCEPTION_ALARM				0x8002	//�����쳣
#define EXCEPTION_PREVIEW			0x8003	//����Ԥ���쳣
#define EXCEPTION_SERIAL			0x8004	//͸��ͨ���쳣
#define EXCEPTION_RECONNECT			0x8005	//Ԥ��ʱ����
#define EXCEPTION_ALARMRECONNECT	0x8006	//����ʱ����
#define EXCEPTION_SERIALRECONNECT	0x8007	//͸��ͨ������
#define EXCEPTION_SERIALRECONSUCCESS 0x8008	//͸��ͨ�������ɹ�
#define EXCEPTION_PLAYBACK	        0x8010	//�ط��쳣
#define EXCEPTION_DISKFMT	        0x8011	//Ӳ�̸�ʽ��
#define EXCEPTION_PASSIVEDECODE     0x8012  //���������쳣
/********************Ԥ���ص�����*********************/
#define NET_DVR_SYSHEAD			1	//ϵͳͷ����
#define NET_DVR_STREAMDATA		2	//��Ƶ�����ݣ�����������������Ƶ�ֿ�����Ƶ�����ݣ�
#define NET_DVR_AUDIOSTREAMDATA	3	//��Ƶ������
#define NET_DVR_STD_VIDEODATA	4	//��׼��Ƶ������
#define NET_DVR_STD_AUDIODATA	5	//��׼��Ƶ������


//�豸�ͺ�(DVR����)
/* �豸���� */
#define DVR							1				/*����δ�����dvr���ͷ���NETRET_DVR*/
#define ATMDVR						2				/*atm dvr*/
#define DVS							3				/*DVS*/
#define DEC							4				/* 6001D */
#define ENC_DEC						5				/* 6001F */
#define DVR_HC						6				/*8000HC*/
#define DVR_HT						7				/*8000HT*/
#define DVR_HF						8				/*8000HF*/
#define DVR_HS						9				/* 8000HS DVR(no audio) */
#define DVR_HTS						10              /* 8016HTS DVR(no audio) */
#define DVR_HB						11              /* HB DVR(SATA HD) */
#define DVR_HCS						12              /* 8000HCS DVR */
#define DVS_A						13              /* ��ATAӲ�̵�DVS */
#define DVR_HC_S					14              /* 8000HC-S */
#define DVR_HT_S					15              /* 8000HT-S */
#define DVR_HF_S					16              /* 8000HF-S */
#define DVR_HS_S					17              /* 8000HS-S */
#define ATMDVR_S					18              /* ATM-S */
#define LOWCOST_DVR					19				/*7000Hϵ��*/
#define DEC_MAT						20              /*��·������*/
#define DVR_MOBILE					21				/* mobile DVR */                 
#define DVR_HD_S					22              /* 8000HD-S */
#define DVR_HD_SL					23				/* 8000HD-SL */
#define DVR_HC_SL					24				/* 8000HC-SL */
#define DVR_HS_ST					25				/* 8000HS_ST */
#define DVS_HW						26              /* 6000HW */
#define DS630X_D					27              /* ��·������ */
#define IPCAM						30				/*IP �����*/
#define MEGA_IPCAM					31				/*X52MFϵ��,752MF,852MF*/
#define IPCAM_X62MF					32				/*X62MFϵ�пɽ���9000�豸,762MF,862MF*/
#define IPDOME                      40              /*IP �������*/
#define IPDOME_MEGA200              41              /*IP 200��������*/
#define IPDOME_MEGA130              42              /*IP 130��������*/
#define IPMOD						50				/*IP ģ��*/
#define DS71XX_H					71				/* DS71XXH_S */
#define DS72XX_H_S					72				/* DS72XXH_S */
#define DS73XX_H_S					73				/* DS73XXH_S */
#define DS76XX_H_S					76				/* DVR,e.g. DS7604_HI_S */
#define DS76XX_N_S					77				/* NVR,e.g. DS7604_NI_S */
#define DS81XX_HS_S					81				/* DS81XX_HS_S */
#define DS81XX_HL_S					82				/* DS81XX_HL_S */
#define DS81XX_HC_S					83				/* DS81XX_HC_S */
#define DS81XX_HD_S					84				/* DS81XX_HD_S */
#define DS81XX_HE_S					85				/* DS81XX_HE_S */
#define DS81XX_HF_S					86				/* DS81XX_HF_S */
#define DS81XX_AH_S					87				/* DS81XX_AH_S */
#define DS81XX_AHF_S				88				/* DS81XX_AHF_S */
#define DS90XX_HF_S		            90              /*DS90XX_HF_S*/
#define DS91XX_HF_S					91              /*DS91XX_HF_S*/
#define DS91XX_HD_S					92              /*91XXHD-S(MD)*/
#define DS_B10_XY                   100             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�(X:�����Ƭ����Y:�����Ƭ��)*/
#define DS_6504HF_B10               101             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_6504D_B10                102             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_65XXHC					105				//65XXHC DVS
#define DS_65XXHC_S					106				//65XXHC-SATA DVS
#define DS_65XXHF					107				//65XXHF DVS
#define DS_65XXHF_S					108				//65XXHF-SATA DVS

/**********************�豸���� end***********************/

/*************************************************
�������ýṹ������(����_V30Ϊ9000����)
**************************************************/

/////////////////////////////////////////////////////////////////////////
//Уʱ�ṹ����
typedef struct
{
	DWORD dwYear;		//��
	DWORD dwMonth;		//��
	DWORD dwDay;		//��
	DWORD dwHour;		//ʱ
	DWORD dwMinute;		//��
	DWORD dwSecond;		//��
}NET_DVR_TIME, *LPNET_DVR_TIME;

//ʱ���(�ӽṹ)
typedef struct
{
	//��ʼʱ��
    BYTE byStartHour;
	BYTE byStartMin;
	//����ʱ��
	BYTE byStopHour;
	BYTE byStopMin;
}NET_DVR_SCHEDTIME, *LPNET_DVR_SCHEDTIME;

/*�豸�������쳣����ʽ*/
#define NOACTION			0x0				/*����Ӧ*/
#define WARNONMONITOR		0x1				/*�������Ͼ���*/
#define WARNONAUDIOOUT		0x2				/*��������*/
#define UPTOCENTER			0x4				/*�ϴ�����*/
#define TRIGGERALARMOUT		0x8				/*�����������*/

//�������쳣����ṹ(�ӽṹ)(�ദʹ��)(9000��չ)
typedef struct
{
	DWORD	dwHandleType;	/*����ʽ,����ʽ��"��"���*/
	/*0x00: ����Ӧ*/
	/*0x01: �������Ͼ���*/
	/*0x02: ��������*/
	/*0x04: �ϴ�����*/
	/*0x08: �����������*/
	/*0x10: Jpegץͼ���ϴ�EMail*/
	BYTE byRelAlarmOut[MAX_ALARMOUT_V30];  
    //�������������ͨ��,�������������,Ϊ1��ʾ���������
}NET_DVR_HANDLEEXCEPTION_V30, *LPNET_DVR_HANDLEEXCEPTION_V30;

//�������쳣����ṹ(�ӽṹ)(�ദʹ��)
typedef struct
{
	DWORD	dwHandleType;			/*����ʽ,����ʽ��"��"���*/
	/*0x00: ����Ӧ*/
	/*0x01: �������Ͼ���*/
	/*0x02: ��������*/
	/*0x04: �ϴ�����*/
	/*0x08: �����������*/
	/*0x10: Jpegץͼ���ϴ�EMail*/
	BYTE byRelAlarmOut[MAX_ALARMOUT];  //�������������ͨ��,�������������,Ϊ1��ʾ���������
}NET_DVR_HANDLEEXCEPTION, *LPNET_DVR_HANDLEEXCEPTION;

//DVR�豸����
typedef struct
{
	DWORD dwSize;
	BYTE sDVRName[NAME_LEN];     //DVR����
	DWORD dwDVRID;				//DVR ID,����ң���� //V1.4(0-99), V1.5(0-255)
	DWORD dwRecycleRecord;		//�Ƿ�ѭ��¼��,0:����; 1:��
	//���²��ɸ���
	BYTE sSerialNumber[SERIALNO_LEN];  //���к�
	DWORD dwSoftwareVersion;			//����汾��,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwSoftwareBuildDate;			//�����������,0xYYYYMMDD
	DWORD dwDSPSoftwareVersion;		    //DSP����汾,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwDSPSoftwareBuildDate;		// DSP�����������,0xYYYYMMDD
	DWORD dwPanelVersion;				// ǰ���汾,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwHardwareVersion;	// Ӳ���汾,��16λ�����汾,��16λ�Ǵΰ汾
	BYTE byAlarmInPortNum;		//DVR�����������
	BYTE byAlarmOutPortNum;		//DVR�����������
	BYTE byRS232Num;			//DVR 232���ڸ���
	BYTE byRS485Num;			//DVR 485���ڸ���
	BYTE byNetworkPortNum;		//����ڸ���
	BYTE byDiskCtrlNum;			//DVR Ӳ�̿���������
	BYTE byDiskNum;				//DVR Ӳ�̸���
	BYTE byDVRType;				//DVR����, 1:DVR 2:ATM DVR 3:DVS ......
	BYTE byChanNum;				//DVR ͨ������
	BYTE byStartChan;			//��ʼͨ����,����DVS-1,DVR - 1
	BYTE byDecordChans;			//DVR ����·��
	BYTE byVGANum;				//VGA�ڵĸ���
	BYTE byUSBNum;				//USB�ڵĸ���
    BYTE byAuxoutNum;			//���ڵĸ���
    BYTE byAudioNum;			//�����ڵĸ���
    BYTE byIPChanNum;			//�������ͨ����
}NET_DVR_DEVICECFG, *LPNET_DVR_DEVICECFG;

/*
IP��ַ
*/
typedef struct
{		
	char	sIpV4[16];						/* IPv4��ַ */
	BYTE	byRes[128];						/* ���� */
}NET_DVR_IPADDR, *LPNET_DVR_IPADDR;


/*
�������ݽṹ(�ӽṹ)(9000��չ)
*/
typedef struct 
{
	NET_DVR_IPADDR	struDVRIP;          					//DVR IP��ַ
	NET_DVR_IPADDR	struDVRIPMask;  //DVR IP��ַ����
	DWORD	dwNetInterface;  //����ӿ�1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M/1000M����Ӧ��6-1000Mȫ˫��
	WORD	wDVRPort;										//�˿ں�
	WORD	wMTU;											//����MTU���ã�Ĭ��1500��
	BYTE	byMACAddr[MACADDR_LEN];							// �����ַ
}NET_DVR_ETHERNET_V30, *LPNET_DVR_ETHERNET_V30;

/*
�������ݽṹ(�ӽṹ)
*/
typedef struct
{
	char sDVRIP[16];          //DVR IP��ַ
	char sDVRIPMask[16];      //DVR IP��ַ����
	DWORD dwNetInterface;     //����ӿ� 1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M����Ӧ
	WORD wDVRPort;		      //�˿ں�
	BYTE byMACAddr[MACADDR_LEN];		//�������������ַ
}NET_DVR_ETHERNET;

//pppoe�ṹ
typedef struct 
{
	DWORD	dwPPPOE;										//0-������,1-����
	BYTE	sPPPoEUser[NAME_LEN];							//PPPoE�û���
	char	sPPPoEPassword[PASSWD_LEN];						// PPPoE����
	NET_DVR_IPADDR	struPPPoEIP;							//PPPoE IP��ַ
}NET_DVR_PPPOECFG, *LPNET_DVR_PPPOECFG;

//�������ýṹ(9000��չ)
typedef struct
{	
	DWORD dwSize;
	NET_DVR_ETHERNET_V30	struEtherNet[MAX_ETHERNET];		//��̫����
	NET_DVR_IPADDR	struRes1[2];					/*����*/
	NET_DVR_IPADDR	struAlarmHostIpAddr;					/* ��������IP��ַ */
	WORD	wRes2[2];								/* ���� */
	WORD	wAlarmHostIpPort;								/* ���������˿ں� */
	BYTE    byUseDhcp;                                      /* �Ƿ�����DHCP 0xff-��Ч 0-������ 1-����*/
	BYTE	byRes3;
	NET_DVR_IPADDR	struDnsServer1IpAddr;					/* ����������1��IP��ַ */
	NET_DVR_IPADDR	struDnsServer2IpAddr;					/* ����������2��IP��ַ */
	BYTE	byIpResolver[MAX_DOMAIN_NAME];					/* IP����������������IP��ַ */
	WORD	wIpResolverPort;								/* IP�����������˿ں� */
	WORD	wHttpPortNo;									/* HTTP�˿ں� */
	NET_DVR_IPADDR	struMulticastIpAddr;					/* �ಥ���ַ */
	NET_DVR_IPADDR	struGatewayIpAddr;						/* ���ص�ַ */
	NET_DVR_PPPOECFG struPPPoE;	
    BYTE    byRes[64];
} NET_DVR_NETCFG_V30, *LPNET_DVR_NETCFG_V30;

//�������ýṹ
typedef struct
{
	DWORD dwSize;
	NET_DVR_ETHERNET struEtherNet[MAX_ETHERNET];		/* ��̫���� */
	char sManageHostIP[16];		//Զ�̹���������ַ
	WORD wManageHostPort;		//Զ�̹��������˿ں�
	char sIPServerIP[16];            //IPServer��������ַ
	char sMultiCastIP[16];     //�ಥ���ַ
	char sGatewayIP[16];       	//���ص�ַ
	char sNFSIP[16];			//NFS����IP��ַ
	BYTE sNFSDirectory[PATHNAME_LEN];//NFSĿ¼
	DWORD dwPPPOE;				//0-������,1-����
	BYTE sPPPoEUser[NAME_LEN];	//PPPoE�û���
	char sPPPoEPassword[PASSWD_LEN];// PPPoE����
	char sPPPoEIP[16];			//PPPoE IP��ַ(ֻ��)
	WORD wHttpPort;				//HTTP�˿ں�
}NET_DVR_NETCFG, *LPNET_DVR_NETCFG;

//ͨ��ͼ��ṹ
//�ƶ����(�ӽṹ)(9000��չ)
typedef struct 
{
	BYTE byMotionScope[64][96];									/*�������,0-96λ,��ʾ64��,����96*64��С���,Ϊ1��ʾ���ƶ��������,0-��ʾ����*/
	BYTE byMotionSensitive;										/*�ƶ����������, 0 - 5,Խ��Խ����,oxff�ر�*/
	BYTE byEnableHandleMotion;									/* �Ƿ����ƶ���� 0���� 1����*/ 
	BYTE byPrecision;											/* �ƶ�����㷨�Ľ���: 0--16*16, 1--32*32, 2--64*64 ... */
	char reservedData;	
	NET_DVR_HANDLEEXCEPTION_V30 struMotionHandleType;				/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30]; /*����ʱ��*/
	BYTE byRelRecordChan[MAX_CHANNUM_V30];									/* ����������¼��ͨ��*/
}NET_DVR_MOTION_V30, *LPNET_DVR_MOTION_V30;

//�ƶ����(�ӽṹ)
typedef struct 
{
	BYTE byMotionScope[18][22];	/*�������,����22*18��С���,Ϊ1��ʾ�ĺ�����ƶ��������,0-��ʾ����*/
	BYTE byMotionSensitive;		/*�ƶ����������, 0 - 5,Խ��Խ����,0xff�ر�*/
	BYTE byEnableHandleMotion;	/* �Ƿ����ƶ���� */
	char reservedData[2];
	NET_DVR_HANDLEEXCEPTION strMotionHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
	BYTE byRelRecordChan[MAX_CHANNUM]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
}NET_DVR_MOTION, *LPNET_DVR_MOTION;

//�ڵ�����(�ӽṹ)(9000��չ)  �����С704*576
typedef struct 
{
	DWORD dwEnableHideAlarm;				/* �Ƿ������ڵ����� ,0-��,1-�������� 2-�������� 3-��������*/
	WORD wHideAlarmAreaTopLeftX;			/* �ڵ������x���� */
	WORD wHideAlarmAreaTopLeftY;			/* �ڵ������y���� */
	WORD wHideAlarmAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAlarmAreaHeight;				/*�ڵ�����ĸ�*/
	NET_DVR_HANDLEEXCEPTION_V30 strHideAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
}NET_DVR_HIDEALARM_V30, *LPNET_DVR_HIDEALARM_V30;
//�ڵ�����(�ӽṹ)  �����С704*576
typedef struct 
{
	DWORD dwEnableHideAlarm;				/* �Ƿ������ڵ����� ,0-��,1-�������� 2-�������� 3-��������*/
	WORD wHideAlarmAreaTopLeftX;			/* �ڵ������x���� */
	WORD wHideAlarmAreaTopLeftY;			/* �ڵ������y���� */
	WORD wHideAlarmAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAlarmAreaHeight;				/*�ڵ�����ĸ�*/
	NET_DVR_HANDLEEXCEPTION strHideAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
}NET_DVR_HIDEALARM, *LPNET_DVR_HIDEALARM;

//�źŶ�ʧ����(�ӽṹ)(9000��չ)
typedef struct 
{
	BYTE byEnableHandleVILost;	/* �Ƿ����źŶ�ʧ���� */
	NET_DVR_HANDLEEXCEPTION_V30 strVILostHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
}NET_DVR_VILOST_V30, *LPNET_DVR_VILOST_V30;

//�źŶ�ʧ����(�ӽṹ)
typedef struct 
{
	BYTE byEnableHandleVILost;	/* �Ƿ����źŶ�ʧ���� */
	NET_DVR_HANDLEEXCEPTION strVILostHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
}NET_DVR_VILOST, *LPNET_DVR_VILOST;

//�ڵ�����(�ӽṹ)
typedef struct 
{
	WORD wHideAreaTopLeftX;				/* �ڵ������x���� */
	WORD wHideAreaTopLeftY;				/* �ڵ������y���� */
	WORD wHideAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAreaHeight;				/*�ڵ�����ĸ�*/
}NET_DVR_SHELTER, *LPNET_DVR_SHELTER;

typedef struct
{
	BYTE byBrightness;  	/*����,0-255*/
	BYTE byContrast;    	/*�Աȶ�,0-255*/	
	BYTE bySaturation;  	/*���Ͷ�,0-255*/
	BYTE byHue;    			/*ɫ��,0-255*/
}NET_DVR_COLOR, *LPNET_DVR_COLOR;


//ͨ��ͼ��ṹ(9000��չ)
typedef struct
{
	DWORD dwSize;
	BYTE sChanName[NAME_LEN];
	DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
	NET_DVR_COLOR struColor;//	ͼ�����
	char reservedData [60];/*����*/
	//��ʾͨ����
	DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
	WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
	WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
	//��Ƶ�źŶ�ʧ����
	NET_DVR_VILOST_V30 struVILost;
	NET_DVR_VILOST_V30 struRes;		/*����*/
	//�ƶ����
	NET_DVR_MOTION_V30 struMotion;
	//�ڵ�����
	NET_DVR_HIDEALARM_V30 struHideAlarm;
	//�ڵ�  �����С704*576
	DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
	NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
	//OSD
	DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
	WORD wOSDTopLeftX;				/* OSD��x���� */
	WORD wOSDTopLeftY;				/* OSD��y���� */
	BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
	/* 0: XXXX-XX-XX ������ */
	/* 1: XX-XX-XXXX ������ */
	/* 2: XXXX��XX��XX�� */
	/* 3: XX��XX��XXXX�� */
	/* 4: XX-XX-XXXX ������*/
	/* 5: XX��XX��XXXX�� */
	BYTE byDispWeek;				/* �Ƿ���ʾ���� */
	BYTE byOSDAttrib;				/* OSD����:͸������˸ */
	/* 0: ����ʾOSD */
	/* 1: ͸��,��˸ */
	/* 2: ͸��,����˸ */
	/* 3: ��˸,��͸�� */
	/* 4: ��͸��,����˸ */
    BYTE byHourOSDType;				/* OSDСʱ��:0-24Сʱ��,1-12Сʱ�� */
	BYTE byRes[64];
}NET_DVR_PICCFG_V30, *LPNET_DVR_PICCFG_V30;

//ͨ��ͼ��ṹSDK_V14��չ
typedef struct 
{
	DWORD dwSize;
	BYTE sChanName[NAME_LEN];
	DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
	BYTE byBrightness;  	/*����,0-255*/
	BYTE byContrast;    	/*�Աȶ�,0-255*/
	BYTE bySaturation;  	/*���Ͷ�,0-255 */
	BYTE byHue;    			/*ɫ��,0-255*/
	//��ʾͨ����
	DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
	WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
	WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
	//�źŶ�ʧ����
	NET_DVR_VILOST struVILost;
	//�ƶ����
	NET_DVR_MOTION struMotion;
	//�ڵ�����
	NET_DVR_HIDEALARM struHideAlarm;
	//�ڵ�  �����С704*576
	DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
	NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
	//OSD
	DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
	WORD wOSDTopLeftX;				/* OSD��x���� */
	WORD wOSDTopLeftY;				/* OSD��y���� */
	BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
	/* 0: XXXX-XX-XX ������ */
	/* 1: XX-XX-XXXX ������ */
	/* 2: XXXX��XX��XX�� */
	/* 3: XX��XX��XXXX�� */
	/* 4: XX-XX-XXXX ������*/
	/* 5: XX��XX��XXXX�� */
	BYTE byDispWeek;				/* �Ƿ���ʾ���� */
	BYTE byOSDAttrib;				/* OSD����:͸������˸ */
	/* 0: ����ʾOSD */
	/* 1: ͸��,��˸ */
	/* 2: ͸��,����˸ */
	/* 3: ��˸,��͸�� */
	/* 4: ��͸��,����˸ */
	BYTE byHourOsdType;		/* OSDСʱ��:0-24Сʱ��,1-12Сʱ�� */
}NET_DVR_PICCFG_EX, *LPNET_DVR_PICCFG_EX;

//ͨ��ͼ��ṹ(SDK_V13��֮ǰ�汾)
typedef struct 
{
	DWORD dwSize;
	BYTE sChanName[NAME_LEN];
	DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
	BYTE byBrightness;  	/*����,0-255*/
	BYTE byContrast;    	/*�Աȶ�,0-255*/
	BYTE bySaturation;  	/*���Ͷ�,0-255 */
	BYTE byHue;    			/*ɫ��,0-255*/
	//��ʾͨ����
	DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
	WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
	WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
	//�źŶ�ʧ����
	NET_DVR_VILOST struVILost;
	//�ƶ����
	NET_DVR_MOTION struMotion;
	//�ڵ�����
	NET_DVR_HIDEALARM struHideAlarm;
	//�ڵ�  �����С704*576
	DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
	WORD wHideAreaTopLeftX;				/* �ڵ������x���� */
	WORD wHideAreaTopLeftY;				/* �ڵ������y���� */
	WORD wHideAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAreaHeight;				/*�ڵ�����ĸ�*/
	//OSD
	DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
	WORD wOSDTopLeftX;				/* OSD��x���� */
	WORD wOSDTopLeftY;				/* OSD��y���� */
	BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
	/* 0: XXXX-XX-XX ������ */
	/* 1: XX-XX-XXXX ������ */
	/* 2: XXXX��XX��XX�� */
	/* 3: XX��XX��XXXX�� */
	/* 4: XX-XX-XXXX ������*/
	/* 5: XX��XX��XXXX�� */
	BYTE byDispWeek;				/* �Ƿ���ʾ���� */
	BYTE byOSDAttrib;				/* OSD����:͸������˸ */
	/* 0: ����ʾOSD */
	/* 1: ͸��,��˸ */
	/* 2: ͸��,����˸ */
	/* 3: ��˸,��͸�� */
	/* 4: ��͸��,����˸ */
	char reservedData2;
}NET_DVR_PICCFG, *LPNET_DVR_PICCFG;

//����ѹ������(�ӽṹ)(9000��չ)
typedef struct 
{
	BYTE byStreamType;		//�������� 0-��Ƶ��, 1-������, ��ʾ�¼�ѹ������ʱ���λ��ʾ�Ƿ�����ѹ������
	BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF 5��������,
	                        //16-VGA��640*480��, 17-UXGA��1600*1200��, 18-SVGA ��800*600��,
	                        //19-HD720p��1280*720��,20-XVGA,  21-HD900p, 27-HD1080i, 
	                        //28-2560*1920, 29-1600*304, 30-2048*1536, 31-2448*2048
	BYTE byBitrateType;		//�������� 0:������, 1:������
	BYTE byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
	DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
	// 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
	//���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ��
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20; V2.0�汾���¼�14-15; 15-18; 16-22;
	WORD  wIntervalFrameI;  //I֡���
	//2006-08-11 ���ӵ�P֡�����ýӿڣ����Ը���ʵʱ����ʱ����
	BYTE  byIntervalBPFrame;//0-BBP֡; 1-BP֡; 2-��P֡
 	BYTE  byres1;        //����
 	BYTE  byVideoEncType;   //��Ƶ�������� 0 hik264;1��׼h264; 2��׼mpeg4;
 	BYTE  byAudioEncType;   //��Ƶ�������� 0��OggVorbis
 	BYTE  byres[10];//���ﱣ����Ƶ��ѹ������
}NET_DVR_COMPRESSION_INFO_V30, *LPNET_DVR_COMPRESSION_INFO_V30;

//ͨ��ѹ������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO_V30 struNormHighRecordPara;    //¼�� ��Ӧ8000����ͨ
	NET_DVR_COMPRESSION_INFO_V30 struRes;//���� char reserveData[28];
    NET_DVR_COMPRESSION_INFO_V30 struEventRecordPara;       //�¼�����ѹ������
	NET_DVR_COMPRESSION_INFO_V30 struNetPara;               //����(������)
}NET_DVR_COMPRESSIONCFG_V30, *LPNET_DVR_COMPRESSIONCFG_V30;

//����ѹ������(�ӽṹ)
typedef struct 
{
	BYTE byStreamType;		//��������0-��Ƶ��,1-������,��ʾѹ������ʱ���λ��ʾ�Ƿ�����ѹ������
	BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(����ר��)
	BYTE byBitrateType;		//��������0:�����ʣ�1:������
	BYTE  byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
	DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
							// 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
							//���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20;
}NET_DVR_COMPRESSION_INFO, *LPNET_DVR_COMPRESSION_INFO;

//ͨ��ѹ������
typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO struRecordPara; //¼��/�¼�����¼��
	NET_DVR_COMPRESSION_INFO struNetPara;	//����/����
}NET_DVR_COMPRESSIONCFG, *LPNET_DVR_COMPRESSIONCFG;

//����ѹ������(�ӽṹ)(��չ) ����I֡���
typedef struct 
{
	BYTE byStreamType;		//��������0-��Ƶ��, 1-������
	BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(����ר��)
	BYTE byBitrateType;		//��������0:�����ʣ�1:������
	BYTE  byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
	DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
	// 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
	//���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20, //V2.0����14-15, 15-18, 16-22;
	WORD  wIntervalFrameI;  //I֡���
	//2006-08-11 ���ӵ�P֡�����ýӿڣ����Ը���ʵʱ����ʱ����
	BYTE  byIntervalBPFrame;//0-BBP֡; 1-BP֡; 2-��P֡
	BYTE  byRes;
}NET_DVR_COMPRESSION_INFO_EX, *LPNET_DVR_COMPRESSION_INFO_EX;

//ͨ��ѹ������(��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO_EX struRecordPara; //¼��
	NET_DVR_COMPRESSION_INFO_EX struNetPara;	//����
}NET_DVR_COMPRESSIONCFG_EX, *LPNET_DVR_COMPRESSIONCFG_EX;


//ʱ���¼���������(�ӽṹ)
typedef struct 
{
	NET_DVR_SCHEDTIME struRecordTime;
	BYTE byRecordType;	//0:��ʱ¼��1:�ƶ���⣬2:����¼��3:����|������4:����&����, 5:�����, 6: ����¼��
	char reservedData[3];
}NET_DVR_RECORDSCHED, *LPNET_DVR_RECORDSCHED;

//ȫ��¼���������(�ӽṹ)
typedef struct 
{
	WORD wAllDayRecord;				/* �Ƿ�ȫ��¼�� 0-�� 1-��*/
	BYTE byRecordType;				/* ¼������ 0:��ʱ¼��1:�ƶ���⣬2:����¼��3:����|������4:����&���� 5:�����, 6: ����¼��*/
	char reservedData;
}NET_DVR_RECORDDAY, *LPNET_DVR_RECORDDAY;

//ͨ��¼���������(9000��չ)
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwRecord;  						/*�Ƿ�¼�� 0-�� 1-��*/
	NET_DVR_RECORDDAY	struRecAllDay[MAX_DAYS];
	NET_DVR_RECORDSCHED	struRecordSched[MAX_DAYS][MAX_TIMESEGMENT_V30];
	DWORD	dwRecordTime;					/* ¼����ʱ���� 0-5�룬 1-20�룬 2-30�룬 3-1���ӣ� 4-2���ӣ� 5-5���ӣ� 6-10����*/
	DWORD	dwPreRecordTime;				/* Ԥ¼ʱ�� 0-��Ԥ¼ 1-5�� 2-10�� 3-15�� 4-20�� 5-25�� 6-30�� 7-0xffffffff(������Ԥ¼) */
	DWORD	dwRecorderDuration;				/* ¼�񱣴���ʱ�� */
	BYTE	byRedundancyRec;	/*�Ƿ�����¼��,��Ҫ����˫���ݣ�0/1*/
	BYTE	byAudioRec;		/*¼��ʱ����������ʱ�Ƿ��¼��Ƶ���ݣ������д˷���*/
	BYTE	byReserve[10];	
}NET_DVR_RECORD_V30, *LPNET_DVR_RECORD_V30;

//ͨ��¼���������
typedef struct 
{
	DWORD dwSize;
	DWORD dwRecord;  /*�Ƿ�¼�� 0-�� 1-��*/
	NET_DVR_RECORDDAY struRecAllDay[MAX_DAYS];
	NET_DVR_RECORDSCHED struRecordSched[MAX_DAYS][MAX_TIMESEGMENT];
	DWORD dwRecordTime;	/* ¼��ʱ�䳤�� */
	DWORD dwPreRecordTime;	/* Ԥ¼ʱ�� 0-��Ԥ¼ 1-5�� 2-10�� 3-15�� 4-20�� 5-25�� 6-30�� 7-0xffffffff(������Ԥ¼) */
}NET_DVR_RECORD, *LPNET_DVR_RECORD;

//��̨Э���ṹ����
typedef struct
{ 
    DWORD dwType;               /*����������ֵ*/    
    BYTE  byDescribe[DESC_LEN]; /*������������������8000�е�һ��*/    
}NET_DVR_PTZ_PROTOCOL;

typedef struct
{    
    DWORD   dwSize;    
    NET_DVR_PTZ_PROTOCOL struPtz[PTZ_PROTOCOL_NUM];/*���200��PTZЭ��*/    
    DWORD   dwPtzNum;           /*��Ч��ptzЭ����Ŀ����0��ʼ(������ʱ��1)*/
    BYTE    byRes[8];
}NET_DVR_PTZCFG, *LPNET_DVR_PTZCFG;


#define IPC_PROTOCOL_NUM      50   //ipc Э��������

//Э������
typedef struct tagNET_DVR_PROTO_TYPE
{ 
    DWORD dwType;               /*ipcЭ��ֵ*/    
    BYTE  byDescribe[DESC_LEN]; /*Э�������ֶ�*/    
}NET_DVR_PROTO_TYPE;

//Э���б�
typedef struct
{    
    DWORD   dwSize;    
    NET_DVR_PROTO_TYPE struProto[IPC_PROTOCOL_NUM];/*��Ч��ipcЭ��*/    
    DWORD   dwProtoNum;           /*��Ч��ipcЭ����Ŀ*/
    BYTE    byRes[8];
}NET_DVR_IPC_PROTO_LIST, *LPNET_DVR_IPC_PROTO_LIST;
NET_DVR_API BOOL __stdcall NET_DVR_GetIPCProtoList(LONG lUserID, NET_DVR_IPC_PROTO_LIST *pProtoList);
/***************************��̨����(end)******************************/

//ͨ��������(��̨)��������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	DWORD dwBaudRate;//������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
	BYTE byDataBit;// �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
	BYTE byStopBit;// ֹͣλ 0��1λ��1��2λ;
	BYTE byParity;// У�� 0����У�飬1����У�飬2��żУ��;
	BYTE byFlowcontrol;// 0���ޣ�1��������,2-Ӳ����
	WORD wDecoderType;//����������, ��0��ʼ����ӦptzЭ���б��NET_DVR_IPC_PROTO_LIST�õ�
	WORD wDecoderAddress;	/*��������ַ:0 - 255*/
	BYTE bySetPreset[MAX_PRESET_V30];		/* Ԥ�õ��Ƿ�����,0-û������,1-����*/
	BYTE bySetCruise[MAX_CRUISE_V30];		/* Ѳ���Ƿ�����: 0-û������,1-���� */
	BYTE bySetTrack[MAX_TRACK_V30];		    /* �켣�Ƿ�����,0-û������,1-����*/
}NET_DVR_DECODERCFG_V30, *LPNET_DVR_DECODERCFG_V30;

//ͨ��������(��̨)��������
typedef struct 
{
	DWORD dwSize;
	DWORD dwBaudRate;       //������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
	BYTE byDataBit;         // �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
	BYTE byStopBit;         // ֹͣλ 0��1λ��1��2λ;
	BYTE byParity;          // У�� 0����У�飬1����У�飬2��żУ��;
	BYTE byFlowcontrol;     // 0���ޣ�1��������,2-Ӳ����
	WORD wDecoderType;      //����������  NET_DVR_IPC_PROTO_LIST�еõ�
	WORD wDecoderAddress;	/*��������ַ:0 - 255*/
	BYTE bySetPreset[MAX_PRESET];		/* Ԥ�õ��Ƿ�����,0-û������,1-����*/
	BYTE bySetCruise[MAX_CRUISE];		/* Ѳ���Ƿ�����: 0-û������,1-���� */
	BYTE bySetTrack[MAX_TRACK];		/* �켣�Ƿ�����,0-û������,1-����*/
}NET_DVR_DECODERCFG, *LPNET_DVR_DECODERCFG;

//ppp��������(�ӽṹ)
typedef struct 
{
	NET_DVR_IPADDR struRemoteIP;	//Զ��IP��ַ
	NET_DVR_IPADDR struLocalIP;		//����IP��ַ
	char sLocalIPMask[16];			//����IP��ַ����
	BYTE sUsername[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byPPPMode;					//PPPģʽ, 0��������1������
	BYTE byRedial;					//�Ƿ�ز� ��0-��,1-��
	BYTE byRedialMode;				//�ز�ģʽ,0-�ɲ�����ָ��,1-Ԥ�ûز�����
	BYTE byDataEncrypt;				//���ݼ���,0-��,1-��
	DWORD dwMTU;					//MTU
	char sTelephoneNumber[PHONENUMBER_LEN];   //�绰����
}NET_DVR_PPPCFG_V30, *LPNET_DVR_PPPCFG_V30;

//ppp��������(�ӽṹ)
typedef struct 
{
	char sRemoteIP[16];				//Զ��IP��ַ
	char sLocalIP[16];				//����IP��ַ
	char sLocalIPMask[16];			//����IP��ַ����
	BYTE sUsername[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byPPPMode;					//PPPģʽ, 0��������1������
	BYTE byRedial;					//�Ƿ�ز� ��0-��,1-��
	BYTE byRedialMode;				//�ز�ģʽ,0-�ɲ�����ָ��,1-Ԥ�ûز�����
	BYTE byDataEncrypt;				//���ݼ���,0-��,1-��
	DWORD dwMTU;					//MTU
	char sTelephoneNumber[PHONENUMBER_LEN];   //�绰����
}NET_DVR_PPPCFG, *LPNET_DVR_PPPCFG;

//RS232���ڲ�������(9000��չ)
typedef struct
{
    DWORD dwBaudRate;   /*������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;*/
    BYTE byDataBit;     /* �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ */
    BYTE byStopBit;     /* ֹͣλ 0��1λ��1��2λ */
    BYTE byParity;      /* У�� 0����У�飬1����У�飬2��żУ�� */
    BYTE byFlowcontrol; /* 0���ޣ�1��������,2-Ӳ���� */
    DWORD dwWorkMode;   /* ����ģʽ��0��232��������PPP���ţ�1��232�������ڲ������ƣ�2��͸��ͨ�� */
}NET_DVR_SINGLE_RS232;

//RS232���ڲ�������(9000��չ)
typedef struct 
{
	DWORD dwSize;
    NET_DVR_SINGLE_RS232 struRs232;
	BYTE byRes[84]; 
	NET_DVR_PPPCFG_V30 struPPPConfig;
}NET_DVR_RS232CFG_V30, *LPNET_DVR_RS232CFG_V30;

//RS232���ڲ�������
typedef struct 
{
	DWORD dwSize;
	DWORD dwBaudRate;//������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
	BYTE byDataBit;// �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
	BYTE byStopBit;// ֹͣλ 0��1λ��1��2λ;
	BYTE byParity;// У�� 0����У�飬1����У�飬2��żУ��;
	BYTE byFlowcontrol;// 0���ޣ�1��������,2-Ӳ����
	DWORD dwWorkMode;// ����ģʽ��0��խ������(232��������PPP����)��1������̨(232�������ڲ�������)��2��͸��ͨ��
	NET_DVR_PPPCFG struPPPConfig;
}NET_DVR_RS232CFG, *LPNET_DVR_RS232CFG;

//���������������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmInName[NAME_LEN];	/* ���� */
	BYTE byAlarmType;	            //����������,0������,1������
	BYTE byAlarmInHandle;	        /* �Ƿ��� 0-������ 1-����*/
    BYTE byRes1[2];			
	NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
	BYTE byRelRecordChan[MAX_CHANNUM_V30]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
	BYTE byEnablePreset[MAX_CHANNUM_V30];		/* �Ƿ����Ԥ�õ� 0-��,1-��*/
	BYTE byPresetNo[MAX_CHANNUM_V30];			/* ���õ���̨Ԥ�õ����,һ������������Ե��ö��ͨ������̨Ԥ�õ�, 0xff��ʾ������Ԥ�õ㡣*/
	BYTE byRes2[192];					/*����*/
	BYTE byEnableCruise[MAX_CHANNUM_V30];		/* �Ƿ����Ѳ�� 0-��,1-��*/
	BYTE byCruiseNo[MAX_CHANNUM_V30];			/* Ѳ�� */
	BYTE byEnablePtzTrack[MAX_CHANNUM_V30];		/* �Ƿ���ù켣 0-��,1-��*/
	BYTE byPTZTrack[MAX_CHANNUM_V30];			/* ���õ���̨�Ĺ켣��� */
    BYTE byRes3[16];
}NET_DVR_ALARMINCFG_V30, *LPNET_DVR_ALARMINCFG_V30;

//���������������
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmInName[NAME_LEN];	/* ���� */
	BYTE byAlarmType;	//����������,0������,1������
	BYTE byAlarmInHandle;	/* �Ƿ��� 0-������ 1-����*/
	NET_DVR_HANDLEEXCEPTION struAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
	BYTE byRelRecordChan[MAX_CHANNUM]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
	BYTE byEnablePreset[MAX_CHANNUM];		/* �Ƿ����Ԥ�õ� 0-��,1-��*/
	BYTE byPresetNo[MAX_CHANNUM];			/* ���õ���̨Ԥ�õ����,һ������������Ե��ö��ͨ������̨Ԥ�õ�, 0xff��ʾ������Ԥ�õ㡣*/
	BYTE byEnableCruise[MAX_CHANNUM];		/* �Ƿ����Ѳ�� 0-��,1-��*/
	BYTE byCruiseNo[MAX_CHANNUM];			/* Ѳ�� */
	BYTE byEnablePtzTrack[MAX_CHANNUM];		/* �Ƿ���ù켣 0-��,1-��*/
	BYTE byPTZTrack[MAX_CHANNUM];			/* ���õ���̨�Ĺ켣��� */
}NET_DVR_ALARMINCFG, *LPNET_DVR_ALARMINCFG;


//�ϴ�������Ϣ(9000��չ)
typedef struct 
{
	DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-��Ƶ�ź��쳣��10-¼���쳣 */
	DWORD dwAlarmInputNumber;/*��������˿�*/
	BYTE byAlarmOutputNumber[MAX_ALARMOUT_V30];/*����������˿ڣ�Ϊ1��ʾ��Ӧ���*/
	BYTE byAlarmRelateChannel[MAX_CHANNUM_V30];/*������¼��ͨ����Ϊ1��ʾ��Ӧ¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
	BYTE byChannel[MAX_CHANNUM_V30];/*dwAlarmTypeΪ2��3,6��9��10ʱ����ʾ�ĸ�ͨ����dwChannel[0]��Ӧ��1��ͨ��*/
	BYTE byDiskNumber[MAX_DISKNUM_V30];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]��Ӧ��1��Ӳ��*/
#ifdef SDK_CHEZAI
	NET_DVR_ADDIT_POSITION GPS_pos;  /* GPS��λ��Ϣ */
#endif
}NET_DVR_ALARMINFO_V30, *LPNET_DVR_ALARMINFO_V30;


typedef struct 
{
	DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-����״̬, 0xa-GPS��λ��Ϣ(���ض���)*/
	DWORD dwAlarmInputNumber;/*��������˿�, ����������Ϊ9ʱ�ñ�����ʾ����״̬0��ʾ������ -1��ʾ����*/
	DWORD dwAlarmOutputNumber[MAX_ALARMOUT];/*����������˿ڣ���һλΪ1��ʾ��Ӧ��һ�����*/
	DWORD dwAlarmRelateChannel[MAX_CHANNUM];/*������¼��ͨ������һλΪ1��ʾ��Ӧ��һ·¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
	DWORD dwChannel[MAX_CHANNUM];/*dwAlarmTypeΪ2��3,6ʱ����ʾ�ĸ�ͨ����dwChannel[0]λ��Ӧ��1��ͨ��*/
	DWORD dwDiskNumber[MAX_DISKNUM];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]λ��Ӧ��1��Ӳ��*/
}NET_DVR_ALARMINFO, *LPNET_DVR_ALARMINFO;




//////////////////////////////////////////////////////////////////////////////////////
//IPC�����������
/* IP�豸�ṹ */
typedef struct 
{
    DWORD dwEnable;				    /* ��IP�豸�Ƿ����� */
    BYTE sUserName[NAME_LEN];		/* �û��� */
    BYTE sPassword[PASSWD_LEN];	    /* ���� */ 
    NET_DVR_IPADDR struIP;			/* IP��ַ */
    WORD wDVRPort;			 	    /* �˿ں� */
    BYTE byRes[34];				/* ���� */
}NET_DVR_IPDEVINFO, *LPNET_DVR_IPDEVINFO;

//ipc�����豸��Ϣ��չ��֧��ip�豸���������
typedef struct tagNET_DVR_IPDEVINFO_V31
{
    BYTE byEnable;				    //��IP�豸�Ƿ���Ч
	BYTE byProType;					//Э�����ͣ�0-����Э��(default)��1-����Э�飬2-����
	BYTE byRes1[2];					//�����ֶΣ���0
    BYTE sUserName[NAME_LEN];		//�û���
    BYTE sPassword[PASSWD_LEN];	    //����
    BYTE byDomain[MAX_DOMAIN_NAME];	//�豸����
    NET_DVR_IPADDR struIP;			//IP��ַ
    WORD wDVRPort;			 	    // �˿ں�
	BYTE byRes2[34];				//�����ֶΣ���0
}NET_DVR_IPDEVINFO_V31, *LPNET_DVR_IPDEVINFO_V31;

/* IPͨ��ƥ����� */
typedef struct 
{
    BYTE byEnable;					/* ��ͨ���Ƿ����� */
    BYTE byIPID;					/* IP�豸ID ȡֵ1- MAX_IP_DEVICE */
    BYTE byChannel;					/* ͨ���� */
	BYTE byres[33];					//����,��0
} NET_DVR_IPCHANINFO, *LPNET_DVR_IPCHANINFO;

/* IP�������ýṹ */
typedef struct 
{
    DWORD dwSize;			                            /* �ṹ��С */
    NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];    /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];        /* ģ��ͨ���Ƿ����ã��ӵ͵��߱�ʾ1-32ͨ����0��ʾ��Ч 1��Ч */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	/* IPͨ�� */    
}NET_DVR_IPPARACFG, *LPNET_DVR_IPPARACFG;
/* ��չIP�������ýṹ */
typedef struct tagNET_DVR_IPPARACFG_V31
{
    DWORD dwSize;			                            /* �ṹ��С */
    NET_DVR_IPDEVINFO_V31  struIPDevInfo[MAX_IP_DEVICE];    /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];        /* ģ��ͨ���Ƿ����ã��ӵ͵��߱�ʾ1-32ͨ����0��ʾ��Ч 1��Ч */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	/* IPͨ�� */    
}NET_DVR_IPPARACFG_V31, *LPNET_DVR_IPPARACFG_V31;

/* ����������� */
typedef struct 
{
    BYTE byIPID;					/* IP�豸IDȡֵ1- MAX_IP_DEVICE */
    BYTE byAlarmOut;				/* ��������� */
    BYTE byRes[18];					/* ���� */
}NET_DVR_IPALARMOUTINFO, *LPNET_DVR_IPALARMOUTINFO;

/* IP����������ýṹ */
typedef struct 
{
    DWORD dwSize;			                        /* �ṹ��С */    
   NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT];/* IP������� */
}NET_DVR_IPALARMOUTCFG, *LPNET_DVR_IPALARMOUTCFG;

/* ����������� */
typedef struct 
{
    BYTE byIPID;					/* IP�豸IDȡֵ1- MAX_IP_DEVICE */
    BYTE byAlarmIn;					/* ��������� */
    BYTE byRes[18];					/* ���� */
}NET_DVR_IPALARMININFO, *LPNET_DVR_IPALARMININFO;

/* IP�����������ýṹ */
typedef struct 
{
    DWORD dwSize;			                        /* �ṹ��С */    
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];/* IP�������� */
}NET_DVR_IPALARMINCFG, *LPNET_DVR_IPALARMINCFG;

//ipc alarm info
typedef struct tagNET_DVR_IPALARMINFO
{
    NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];            /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];                /* ģ��ͨ���Ƿ����ã�0-δ���� 1-���� */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	        /* IPͨ�� */
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP�������� */
    NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP������� */
}NET_DVR_IPALARMINFO, *LPNET_DVR_IPALARMINFO;

//ipc���øı䱨����Ϣ��չ 9000_1.1
typedef struct tagNET_DVR_IPALARMINFO_V31
{
    NET_DVR_IPDEVINFO_V31  struIPDevInfo[MAX_IP_DEVICE];            /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];                /* ģ��ͨ���Ƿ����ã�0-δ���� 1-���� */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	        /* IPͨ�� */
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP�������� */
    NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP������� */   
}NET_DVR_IPALARMINFO_V31, *LPNET_DVR_IPALARMINFO_V31;

typedef enum _HD_STAT_
{
	HD_STAT_OK					=	0,  /* ���� */
	HD_STAT_UNFORMATTED			=	1,  /* δ��ʽ�� */
	HD_STAT_ERROR           	=	2,  /* ���� */
	HD_STAT_SMART_FAILED    	=	3,  /* SMART״̬ */
	HD_STAT_MISMATCH        	=	4,  /* ��ƥ�� */
	HD_STAT_IDLE            	=	5,  /* ����*/
	NET_HD_STAT_OFFLINE     	=	6  /*�����̴���δ����״̬ */	
}HD_STAT;


//����Ӳ����Ϣ����
typedef struct
{
    DWORD dwHDNo;         /*Ӳ�̺�, ȡֵ0~MAX_DISKNUM_V30-1*/
    DWORD dwCapacity;     /*Ӳ������(��������)*/
    DWORD dwFreeSpace;    /*Ӳ��ʣ��ռ�(��������)*/
    DWORD dwHdStatus;     /*Ӳ��״̬(��������) HD_STAT*/
    BYTE  byHDAttr;       /*0-Ĭ��, 1-����; 2-ֻ��*/
	BYTE  byHDType;		  /*0-����Ӳ��,1-ESATAӲ��,2-NASӲ��*/
	BYTE  byRes1[2];
    DWORD dwHdGroup;      /*�����ĸ����� 1-MAX_HD_GROUP*/
    BYTE  byRes2[120];
}NET_DVR_SINGLE_HD, *LPNET_DVR_SINGLE_HD;

typedef struct
{
    DWORD dwSize;
    DWORD dwHDCount;          /*Ӳ����(��������)*/
    NET_DVR_SINGLE_HD struHDInfo[MAX_DISKNUM_V30];//Ӳ����ز�������Ҫ����������Ч��
}NET_DVR_HDCFG, *LPNET_DVR_HDCFG;

//����������Ϣ����
typedef struct
{
    DWORD dwHDGroupNo;       /*�����(��������) 1-MAX_HD_GROUP*/        
    BYTE byHDGroupChans[64]; /*�����Ӧ��¼��ͨ��, 0-��ʾ��ͨ����¼�󵽸����飬1-��ʾ¼�󵽸�����*/
    BYTE byRes[8];
}NET_DVR_SINGLE_HDGROUP, *LPNET_DVR_SINGLE_HDGROUP;

typedef struct
{
    DWORD dwSize;
    DWORD dwHDGroupCount;        /*��������(��������)*/
    NET_DVR_SINGLE_HDGROUP struHDGroupAttr[MAX_HD_GROUP];//Ӳ����ز�������Ҫ����������Ч��
}NET_DVR_HDGROUP_CFG, *LPNET_DVR_HDGROUP_CFG;
                                       

//�������Ų����Ľṹ
typedef struct
{
    DWORD dwSize;
    DWORD dwMajorScale;    /* ����ʾ 0-�����ţ�1-����*/
    DWORD dwMinorScale;    /* ����ʾ 0-�����ţ�1-����*/
    DWORD dwRes[2];
}NET_DVR_SCALECFG, *LPNET_DVR_SCALECFG;



//DVR�������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmOutName[NAME_LEN];	/* ���� */
	DWORD dwAlarmOutDelay;	/* �������ʱ��(-1Ϊ���ޣ��ֶ��ر�) */
	//0-5��,1-10��,2-30��,3-1����,4-2����,5-5����,6-10����,7-�ֶ�
	NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT_V30];/* �����������ʱ��� */
    BYTE byRes[16];
}NET_DVR_ALARMOUTCFG_V30, *LPNET_DVR_ALARMOUTCFG_V30;

//DVR�������
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmOutName[NAME_LEN];	/* ���� */
	DWORD dwAlarmOutDelay;	/* �������ʱ��(-1Ϊ���ޣ��ֶ��ر�) */
	//0-5��,1-10��,2-30��,3-1����,4-2����,5-5����,6-10����,7-�ֶ�
	NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT];/* �����������ʱ��� */
}NET_DVR_ALARMOUTCFG, *LPNET_DVR_ALARMOUTCFG;

//DVR����Ԥ������(9000��չ)
typedef struct 
{
    DWORD dwSize;
    BYTE byPreviewNumber;//Ԥ����Ŀ,0-1����,1-4����,2-9����,3-16����,0xff:�����
    BYTE byEnableAudio;//�Ƿ�����Ԥ��,0-��Ԥ��,1-Ԥ��
    WORD wSwitchTime;//�л�ʱ��,0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
    BYTE bySwitchSeq[MAX_PREVIEW_MODE][MAX_WINDOW_V30];//�л�˳��,���lSwitchSeq[i]Ϊ 0xff��ʾ����
    BYTE byRes[24];
}NET_DVR_PREVIEWCFG_V30, *LPNET_DVR_PREVIEWCFG_V30;
//DVR����Ԥ������
typedef struct 
{
	DWORD dwSize;
	BYTE byPreviewNumber;//Ԥ����Ŀ,0-1����,1-4����,2-9����,3-16����,0xff:�����
	BYTE byEnableAudio;//�Ƿ�����Ԥ��,0-��Ԥ��,1-Ԥ��
	WORD wSwitchTime;//�л�ʱ��,0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
	BYTE bySwitchSeq[MAX_WINDOW];//�л�˳��,���lSwitchSeq[i]Ϊ 0xff��ʾ����
}NET_DVR_PREVIEWCFG, *LPNET_DVR_PREVIEWCFG;

//DVR��Ƶ���
typedef struct 
{
	WORD wResolution;							/* �ֱ��� */
	WORD wFreq;									/* ˢ��Ƶ�� */
	DWORD dwBrightness;							/* ���� */
}NET_DVR_VGAPARA;

/*
* MATRIX��������ṹ
*/
typedef struct
{		
	WORD	wOrder[MAX_ANALOG_CHANNUM];		/* Ԥ��˳��, 0xff��ʾ��Ӧ�Ĵ��ڲ�Ԥ�� */
	WORD	wSwitchTime;				/* Ԥ���л�ʱ�� */
	BYTE	res[14];
}NET_DVR_MATRIXPARA_V30, *LPNET_DVR_MATRIXPARA_V30;

typedef struct 
{
	WORD wDisplayLogo;						/* ��ʾ��Ƶͨ���� */
	WORD wDisplayOsd;						/* ��ʾʱ�� */
}NET_DVR_MATRIXPARA;

typedef struct 
{
	BYTE byVideoFormat;						/* �����ʽ,0-PAL,1-NTSC */
	BYTE byMenuAlphaValue;					/* �˵��뱳��ͼ��Աȶ� */
	WORD wScreenSaveTime;					/* ��Ļ����ʱ�� 0-�Ӳ�,1-1����,2-2����,3-5����,4-10����,5-20����,6-30���� */
	WORD wVOffset;							/* ��Ƶ���ƫ�� */
	WORD wBrightness;						/* ��Ƶ������� */
	BYTE byStartMode;						/* ��������Ƶ���ģʽ(0:�˵�,1:Ԥ��)*/
	BYTE byEnableScaler;                    /* �Ƿ��������� (0-������, 1-����)*/
}NET_DVR_VOOUT;

//DVR��Ƶ���(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT_V30];
	NET_DVR_VGAPARA struVGAPara[MAX_VGA_V30];	/* VGA���� */
	NET_DVR_MATRIXPARA_V30 struMatrixPara[MAX_MATRIXOUT];		/* MATRIX���� */
    BYTE byRes[16];
}NET_DVR_VIDEOOUT_V30, *LPNET_DVR_VIDEOOUT_V30;

//DVR��Ƶ���
typedef struct 
{
	DWORD dwSize;
	NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT];
	NET_DVR_VGAPARA struVGAPara[MAX_VGA];	/* VGA���� */
	NET_DVR_MATRIXPARA struMatrixPara;		/* MATRIX���� */
}NET_DVR_VIDEOOUT, *LPNET_DVR_VIDEOOUT;

//���û�����(�ӽṹ)(9000��չ)
typedef struct
{
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byLocalRight[MAX_RIGHT];	/* ����Ȩ�� */
	/*����0: ���ؿ�����̨*/
	/*����1: �����ֶ�¼��*/
	/*����2: ���ػط�*/
	/*����3: �������ò���*/
	/*����4: ���ز鿴״̬����־*/
	/*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
    /*����6: ���ز鿴���� */
    /*����7: ���ع���ģ���IP camera */
    /*����8: ���ر��� */
    /*����9: ���عػ�/���� */    
	BYTE byRemoteRight[MAX_RIGHT];/* Զ��Ȩ�� */	
	/*����0: Զ�̿�����̨*/
	/*����1: Զ���ֶ�¼��*/
	/*����2: Զ�̻ط� */
	/*����3: Զ�����ò���*/
	/*����4: Զ�̲鿴״̬����־*/
	/*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
	/*����6: Զ�̷��������Խ�*/
	/*����7: Զ��Ԥ��*/
	/*����8: Զ�����󱨾��ϴ����������*/
	/*����9: Զ�̿��ƣ��������*/
	/*����10: Զ�̿��ƴ���*/	
    /*����11: Զ�̲鿴���� */
    /*����12: Զ�̹���ģ���IP camera */
    /*����13: Զ�̹ػ�/���� */
	BYTE byNetPreviewRight[MAX_CHANNUM_V30];		/* Զ�̿���Ԥ����ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalPlaybackRight[MAX_CHANNUM_V30];	/* ���ؿ��Իطŵ�ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byNetPlaybackRight[MAX_CHANNUM_V30];	/* Զ�̿��Իطŵ�ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalRecordRight[MAX_CHANNUM_V30];		/* ���ؿ���¼���ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byNetRecordRight[MAX_CHANNUM_V30];		/* Զ�̿���¼���ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalPTZRight[MAX_CHANNUM_V30];		/* ���ؿ���PTZ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byNetPTZRight[MAX_CHANNUM_V30];			/* Զ�̿���PTZ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalBackupRight[MAX_CHANNUM_V30];		/* ���ر���Ȩ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	NET_DVR_IPADDR struUserIP;		/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
	BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
	BYTE byPriority;				/* ���ȼ���0xff-�ޣ�0--�ͣ�1--�У�2--�� */
                                    /*
                                    �ޡ�����ʾ��֧�����ȼ�������
                                    �͡���Ĭ��Ȩ��:�������غ�Զ�̻ط�,���غ�Զ�̲鿴��־��״̬,���غ�Զ�̹ػ�/����
                                    �С����������غ�Զ�̿�����̨,���غ�Զ���ֶ�¼��,���غ�Զ�̻ط�,�����Խ���Զ��Ԥ��
                                          ���ر���,����/Զ�̹ػ�/����
                                    �ߡ�������Ա
                                    */
	BYTE byRes[17];	
}NET_DVR_USER_INFO_V30, *LPNET_DVR_USER_INFO_V30;

//���û�����(SDK_V15��չ)(�ӽṹ)
typedef struct 
{
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	DWORD dwLocalRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: ���ؿ�����̨*/
	/*����1: �����ֶ�¼��*/
	/*����2: ���ػط�*/
	/*����3: �������ò���*/
	/*����4: ���ز鿴״̬����־*/
	/*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
	DWORD dwLocalPlaybackRight;		/* ���ؿ��Իطŵ�ͨ�� bit0 -- channel 1*/
	DWORD dwRemoteRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: Զ�̿�����̨*/
	/*����1: Զ���ֶ�¼��*/
	/*����2: Զ�̻ط� */
	/*����3: Զ�����ò���*/
	/*����4: Զ�̲鿴״̬����־*/
	/*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
	/*����6: Զ�̷��������Խ�*/
	/*����7: Զ��Ԥ��*/
	/*����8: Զ�����󱨾��ϴ����������*/
	/*����9: Զ�̿��ƣ��������*/
	/*����10: Զ�̿��ƴ���*/
	DWORD dwNetPreviewRight;		/* Զ�̿���Ԥ����ͨ�� bit0 -- channel 1*/
	DWORD dwNetPlaybackRight;		/* Զ�̿��Իطŵ�ͨ�� bit0 -- channel 1*/
	char sUserIP[16];				/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
	BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
}NET_DVR_USER_INFO_EX, *LPNET_DVR_USER_INFO_EX;

//���û�����(�ӽṹ)
typedef struct 
{
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	DWORD dwLocalRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: ���ؿ�����̨*/
	/*����1: �����ֶ�¼��*/
	/*����2: ���ػط�*/
	/*����3: �������ò���*/
	/*����4: ���ز鿴״̬����־*/
	/*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
	DWORD dwRemoteRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: Զ�̿�����̨*/
	/*����1: Զ���ֶ�¼��*/
	/*����2: Զ�̻ط� */
	/*����3: Զ�����ò���*/
	/*����4: Զ�̲鿴״̬����־*/
	/*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
	/*����6: Զ�̷��������Խ�*/
	/*����7: Զ��Ԥ��*/
	/*����8: Զ�����󱨾��ϴ����������*/
	/*����9: Զ�̿��ƣ��������*/
	/*����10: Զ�̿��ƴ���*/
	char sUserIP[16];				/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
	BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
}NET_DVR_USER_INFO, *LPNET_DVR_USER_INFO;


//DVR�û�����(9000��չ)
typedef struct
{
	DWORD dwSize;
	NET_DVR_USER_INFO_V30 struUser[MAX_USERNUM_V30];
}NET_DVR_USER_V30, *LPNET_DVR_USER_V30;

//DVR�û�����(SDK_V15��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_USER_INFO_EX struUser[MAX_USERNUM];
}NET_DVR_USER_EX, *LPNET_DVR_USER_EX;

//DVR�û�����
typedef struct 
{
	DWORD dwSize;
	NET_DVR_USER_INFO struUser[MAX_USERNUM];
}NET_DVR_USER, *LPNET_DVR_USER;

//DVR�쳣����(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_HANDLEEXCEPTION_V30 struExceptionHandleType[MAX_EXCEPTIONNUM_V30];
	/*����0-����,1- Ӳ�̳���,2-���߶�,3-��������IP ��ַ��ͻ, 4-�Ƿ�����, 5-����/�����Ƶ��ʽ��ƥ��, 6-��Ƶ�ź��쳣, 7-¼���쳣*/
}NET_DVR_EXCEPTION_V30, *LPNET_DVR_EXCEPTION_V30;

//DVR�쳣����
typedef struct 
{
	DWORD dwSize;
	NET_DVR_HANDLEEXCEPTION struExceptionHandleType[MAX_EXCEPTIONNUM];
	/*����0-����,1- Ӳ�̳���,2-���߶�,3-��������IP ��ַ��ͻ,4-�Ƿ�����, 5-����/�����Ƶ��ʽ��ƥ��, 6-��Ƶ�ź��쳣*/
}NET_DVR_EXCEPTION, *LPNET_DVR_EXCEPTION;

//ͨ��״̬(9000��չ)
typedef struct 
{
	BYTE byRecordStatic; //ͨ���Ƿ���¼��,0-��¼��,1-¼��
	BYTE bySignalStatic; //���ӵ��ź�״̬,0-����,1-�źŶ�ʧ
	BYTE byHardwareStatic;//ͨ��Ӳ��״̬,0-����,1-�쳣,����DSP����
	BYTE byRes1;		//����
	DWORD dwBitRate;//ʵ������
	DWORD dwLinkNum;//�ͻ������ӵĸ���
	NET_DVR_IPADDR struClientIP[MAX_LINK];//�ͻ��˵�IP��ַ
    DWORD dwIPLinkNum;//�����ͨ��ΪIP���룬��ô��ʾIP���뵱ǰ��������
	BYTE byRes[12];
}NET_DVR_CHANNELSTATE_V30, *LPNET_DVR_CHANNELSTATE_V30;

//ͨ��״̬
typedef struct 
{
	BYTE byRecordStatic; //ͨ���Ƿ���¼��,0-��¼��,1-¼��
	BYTE bySignalStatic; //���ӵ��ź�״̬,0-����,1-�źŶ�ʧ
	BYTE byHardwareStatic;//ͨ��Ӳ��״̬,0-����,1-�쳣,����DSP����
	char reservedData;		//����
	DWORD dwBitRate;//ʵ������
	DWORD dwLinkNum;//�ͻ������ӵĸ���
	DWORD dwClientIP[MAX_LINK];//�ͻ��˵�IP��ַ
}NET_DVR_CHANNELSTATE, *LPNET_DVR_CHANNELSTATE;

//Ӳ��״̬
typedef struct 
{
	DWORD dwVolume;//Ӳ�̵�����
	DWORD dwFreeSpace;//Ӳ�̵�ʣ��ռ�
	DWORD dwHardDiskStatic; //Ӳ�̵�״̬,0-�,1-����,2-������
}NET_DVR_DISKSTATE, *LPNET_DVR_DISKSTATE;

//DVR����״̬(9000��չ)
typedef struct 
{
	DWORD dwDeviceStatic; 	//�豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
	NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM_V30];
	NET_DVR_CHANNELSTATE_V30 struChanStatic[MAX_CHANNUM_V30];//ͨ����״̬
	BYTE  byAlarmInStatic[MAX_ALARMIN_V30]; //�����˿ڵ�״̬,0-û�б���,1-�б���
	BYTE  byAlarmOutStatic[MAX_ALARMOUT_V30]; //��������˿ڵ�״̬,0-û�����,1-�б������
	DWORD  dwLocalDisplay;//������ʾ״̬,0-����,1-������
    BYTE  byAudioChanStatus[MAX_AUDIO_V30];//��ʾ����ͨ����״̬ 0-δʹ�ã�1-ʹ����, 0xff��Ч
    BYTE  byRes[10];
}NET_DVR_WORKSTATE_V30, *LPNET_DVR_WORKSTATE_V30;

//DVR����״̬
typedef struct 
{
	DWORD dwDeviceStatic; 	//�豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
	NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM];
	NET_DVR_CHANNELSTATE struChanStatic[MAX_CHANNUM];//ͨ����״̬
	BYTE  byAlarmInStatic[MAX_ALARMIN]; //�����˿ڵ�״̬,0-û�б���,1-�б���
	BYTE  byAlarmOutStatic[MAX_ALARMOUT]; //��������˿ڵ�״̬,0-û�����,1-�б������
	DWORD  dwLocalDisplay;//������ʾ״̬,0-����,1-������
}NET_DVR_WORKSTATE, *LPNET_DVR_WORKSTATE;

/************************DVR��־ begin***************************/


/* ���� */
//������
#define MAJOR_ALARM						0x1
//������
#define MINOR_ALARM_IN					0x1		/* �������� */
#define MINOR_ALARM_OUT					0x2		/* ������� */
#define MINOR_MOTDET_START				0x3		/* �ƶ���ⱨ����ʼ */
#define MINOR_MOTDET_STOP				0x4		/* �ƶ���ⱨ������ */
#define MINOR_HIDE_ALARM_START			0x5		/* �ڵ�������ʼ */
#define MINOR_HIDE_ALARM_STOP			0x6		/* �ڵ��������� */
#define MINOR_VCA_ALARM_START			0x7		/*���ܱ�����ʼ*/
#define MINOR_VCA_ALARM_STOP			0x8		/*���ܱ���ֹͣ*/


/* �쳣 */
//������
#define MAJOR_EXCEPTION					0x2
//������
#define MINOR_VI_LOST					0x21	/* ��Ƶ�źŶ�ʧ */
#define MINOR_ILLEGAL_ACCESS			0x22	/* �Ƿ����� */
#define MINOR_HD_FULL					0x23	/* Ӳ���� */
#define MINOR_HD_ERROR					0x24	/* Ӳ�̴��� */
#define MINOR_DCD_LOST					0x25	/* MODEM ����(������ʹ��) */
#define MINOR_IP_CONFLICT				0x26	/* IP��ַ��ͻ */
#define MINOR_NET_BROKEN				0x27	/* ����Ͽ�*/
#define MINOR_REC_ERROR                 0x28    /* ¼����� */
#define MINOR_IPC_NO_LINK               0x29    /* IPC�����쳣 */
#define MINOR_VI_EXCEPTION              0x2a    /* ��Ƶ�����쳣(ֻ���ģ��ͨ��) */
#define MINOR_IPC_IP_CONFLICT           0x2b    /*ipc ip ��ַ ��ͻ*/

//2009-12-16 ������Ƶ�ۺ�ƽ̨��־����
#define MINOR_FANABNORMAL				0x31	/* ��Ƶ�ۺ�ƽ̨������״̬�쳣 */
#define MINOR_FANRESUME					0x32	/* ��Ƶ�ۺ�ƽ̨������״̬�ָ����� */
#define MINOR_SUBSYSTEM_ABNORMALREBOOT	0x33	/* ��Ƶ�ۺ�ƽ̨��6467�쳣���� */
#define MINOR_MATRIX_STARTBUZZER		0x34	/* ��Ƶ�ۺ�ƽ̨��dm6467�쳣������������ */

//2010-01-22 ������Ƶ�ۺ�ƽ̨�쳣��־������
#define MINOR_NET_ABNORMAL				0x35	/*����״̬�쳣*/
#define MINOR_MEM_ABNORMAL				0x36	/*�ڴ�״̬�쳣*/
#define MINOR_FILE_ABNORMAL				0x37	/*�ļ�״̬�쳣*/

/* ���� */
//������
#define MAJOR_OPERATION					0x3
//������
#define MINOR_START_DVR					0x41	/* ���� */
#define MINOR_STOP_DVR					0x42	/* �ػ� */
#define MINOR_STOP_ABNORMAL				0x43	/* �쳣�ػ� */
#define MINOR_REBOOT_DVR                0x44    /*���������豸*/

#define MINOR_LOCAL_LOGIN				0x50	/* ���ص�½ */
#define MINOR_LOCAL_LOGOUT				0x51	/* ����ע����½ */
#define MINOR_LOCAL_CFG_PARM			0x52	/* �������ò��� */
#define MINOR_LOCAL_PLAYBYFILE          0x53	/* ���ذ��ļ��طŻ����� */
#define MINOR_LOCAL_PLAYBYTIME          0x54	/* ���ذ�ʱ��طŻ�����*/
#define MINOR_LOCAL_START_REC			0x55	/* ���ؿ�ʼ¼�� */
#define MINOR_LOCAL_STOP_REC			0x56	/* ����ֹͣ¼�� */
#define MINOR_LOCAL_PTZCTRL				0x57	/* ������̨���� */
#define MINOR_LOCAL_PREVIEW				0x58	/* ����Ԥ�� (������ʹ��)*/
#define MINOR_LOCAL_MODIFY_TIME         0x59	/* �����޸�ʱ��(������ʹ��) */
#define MINOR_LOCAL_UPGRADE             0x5a	/* �������� */
#define MINOR_LOCAL_RECFILE_OUTPUT      0x5b    /* ���ر���¼���ļ� */
#define MINOR_LOCAL_FORMAT_HDD          0x5c    /* ���س�ʼ��Ӳ�� */
#define MINOR_LOCAL_CFGFILE_OUTPUT      0x5d    /* �������������ļ� */
#define MINOR_LOCAL_CFGFILE_INPUT       0x5e    /* ���뱾�������ļ� */
#define MINOR_LOCAL_COPYFILE            0x5f    /* ���ر����ļ� */
#define MINOR_LOCAL_LOCKFILE            0x60    /* ��������¼���ļ� */
#define MINOR_LOCAL_UNLOCKFILE          0x61    /* ���ؽ���¼���ļ� */
#define MINOR_LOCAL_DVR_ALARM           0x62    /* �����ֶ�����ʹ�������*/
#define MINOR_IPC_ADD                   0x63    /* �������IPC */
#define MINOR_IPC_DEL                   0x64    /* ����ɾ��IPC */
#define MINOR_IPC_SET                   0x65    /* ��������IPC */
#define MINOR_LOCAL_START_BACKUP		0x66	/* ���ؿ�ʼ���� */
#define MINOR_LOCAL_STOP_BACKUP			0x67	/* ����ֹͣ����*/
#define MINOR_LOCAL_COPYFILE_START_TIME 0x68	/* ���ر��ݿ�ʼʱ��*/
#define MINOR_LOCAL_COPYFILE_END_TIME	0x69	/* ���ر��ݽ���ʱ��*/
#define MINOR_LOCAL_ADD_NAS             0x6a	/*�����������Ӳ�� ��nfs��iscsi��*/
#define MINOR_LOCAL_DEL_NAS             0x6b	/* ����ɾ��nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_SET_NAS             0x6c	/* ��������nas�� ��nfs��iscsi��*/

#define MINOR_REMOTE_LOGIN				0x70	/* Զ�̵�¼ */
#define MINOR_REMOTE_LOGOUT				0x71	/* Զ��ע����½ */
#define MINOR_REMOTE_START_REC			0x72	/* Զ�̿�ʼ¼�� */
#define MINOR_REMOTE_STOP_REC			0x73	/* Զ��ֹͣ¼�� */
#define MINOR_START_TRANS_CHAN			0x74	/* ��ʼ͸������ */
#define MINOR_STOP_TRANS_CHAN			0x75	/* ֹͣ͸������ */
#define MINOR_REMOTE_GET_PARM			0x76	/* Զ�̻�ȡ���� */
#define MINOR_REMOTE_CFG_PARM			0x77	/* Զ�����ò��� */
#define MINOR_REMOTE_GET_STATUS         0x78	/* Զ�̻�ȡ״̬ */
#define MINOR_REMOTE_ARM				0x79	/* Զ�̲��� */
#define MINOR_REMOTE_DISARM				0x7a	/* Զ�̳��� */
#define MINOR_REMOTE_REBOOT				0x7b	/* Զ������ */
#define MINOR_START_VT					0x7c	/* ��ʼ�����Խ� */
#define MINOR_STOP_VT					0x7d	/* ֹͣ�����Խ� */
#define MINOR_REMOTE_UPGRADE			0x7e	/* Զ������ */
#define MINOR_REMOTE_PLAYBYFILE         0x7f	/* Զ�̰��ļ��ط� */
#define MINOR_REMOTE_PLAYBYTIME         0x80	/* Զ�̰�ʱ��ط� */
#define MINOR_REMOTE_PTZCTRL			0x81	/* Զ����̨���� */
#define MINOR_REMOTE_FORMAT_HDD         0x82    /* Զ�̸�ʽ��Ӳ�� */
#define MINOR_REMOTE_STOP               0x83    /* Զ�̹ػ� */
#define MINOR_REMOTE_LOCKFILE			0x84	/* Զ�������ļ� */
#define MINOR_REMOTE_UNLOCKFILE         0x85	/* Զ�̽����ļ� */
#define MINOR_REMOTE_CFGFILE_OUTPUT     0x86    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_CFGFILE_INTPUT     0x87    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_RECFILE_OUTPUT     0x88    /* Զ�̵���¼���ļ� */
#define MINOR_REMOTE_DVR_ALARM          0x89    /* Զ���ֶ�����ʹ�������*/
#define MINOR_REMOTE_IPC_ADD			0x8a	/* Զ�����IPC */
#define MINOR_REMOTE_IPC_DEL			0x8b	/* Զ��ɾ��IPC */
#define MINOR_REMOTE_IPC_SET			0x8c	/* Զ������IPC */
#define MINOR_REBOOT_VCA_LIB            0x8d    /*�������ܿ�*/
#define MINOR_REMOTE_ADD_NAS            0x8e   /* Զ�����nas�� ��nfs��iscsi��*/
#define MINOR_REMOTE_DEL_NAS            0x8f   /* Զ��ɾ��nas�� ��nfs��iscsi��*/
#define MINOR_REMOTE_SET_NAS            0x90   /* Զ������nas�� ��nfs��iscsi��*/

//2009-12-16 ������Ƶ�ۺ�ƽ̨��־����
#define MINOR_SUBSYSTEMREBOOT           0xa0	/*��Ƶ�ۺ�ƽ̨��dm6467 ��������*/
#define MINOR_MATRIX_STARTTRANSFERVIDEO 0xa1	/*��Ƶ�ۺ�ƽ̨�������л���ʼ����ͼ��*/
#define MINOR_MATRIX_STOPTRANSFERVIDEO	0xa2	/*��Ƶ�ۺ�ƽ̨�������л�ֹͣ����ͼ��*/
#define MINOR_REMOTE_SET_ALLSUBSYSTEM   0xa3	/*��Ƶ�ۺ�ƽ̨����������6467��ϵͳ��Ϣ*/
#define MINOR_REMOTE_GET_ALLSUBSYSTEM   0xa4	/*��Ƶ�ۺ�ƽ̨����ȡ����6467��ϵͳ��Ϣ*/
#define MINOR_REMOTE_SET_PLANARRAY      0xa5	/*��Ƶ�ۺ�ƽ̨�����üƻ���ѯ��*/
#define MINOR_REMOTE_GET_PLANARRAY      0xa6	/*��Ƶ�ۺ�ƽ̨����ȡ�ƻ���ѯ��*/
#define MINOR_MATRIX_STARTTRANSFERAUDIO 0xa7	/*��Ƶ�ۺ�ƽ̨�������л���ʼ������Ƶ*/
#define MINOR_MATRIX_STOPRANSFERAUDIO   0xa8	/*��Ƶ�ۺ�ƽ̨�������л�ֹͣ������Ƶ*/
#define MINOR_LOGON_CODESPITTER         0xa9	/*��Ƶ�ۺ�ƽ̨����½�����*/
#define MINOR_LOGOFF_CODESPITTER        0xaa	/*��Ƶ�ۺ�ƽ̨���˳������*/

//2010-01-22 ������Ƶ�ۺ�ƽ̨�н�����������־
#define MINOR_START_DYNAMIC_DECODE 		0xb0	/*��ʼ��̬����*/
#define MINOR_STOP_DYNAMIC_DECODE		0xb1	/*ֹͣ��̬����*/
#define MINOR_GET_CYC_CFG				0xb2	/*��ȡ������ͨ����ѯ����*/
#define MINOR_SET_CYC_CFG				0xb3	/*���ý���ͨ����ѯ����*/
#define MINOR_START_CYC_DECODE			0xb4	/*��ʼ��ѯ����*/
#define MINOR_STOP_CYC_DECODE			0xb5	/*ֹͣ��ѯ����*/
#define MINOR_GET_DECCHAN_STATUS		0xb6	/*��ȡ����ͨ��״̬*/
#define MINOR_GET_DECCHAN_INFO			0xb7	/*��ȡ����ͨ����ǰ��Ϣ*/
#define MINOR_START_PASSIVE_DEC			0xb8	/*��ʼ��������*/
#define MINOR_STOP_PASSIVE_DEC			0xb9	/*ֹͣ��������*/
#define MINOR_CTRL_PASSIVE_DEC			0xba	/*���Ʊ�������*/
#define MINOR_RECON_PASSIVE_DEC			0xbb	/*������������*/
#define MINOR_GET_DEC_CHAN_SW			0xbc	/*��ȡ����ͨ���ܿ���*/
#define MINOR_SET_DEC_CHAN_SW			0xbd	/*���ý���ͨ���ܿ���*/
#define MINOR_CTRL_DEC_CHAN_SCALE		0xbe	/*����ͨ�����ſ���*/
#define MINOR_SET_REMOTE_REPLAY			0xbf	/*����Զ�̻ط�*/
#define MINOR_GET_REMOTE_REPLAY			0xc0	/*��ȡԶ�̻ط�״̬*/
#define MINOR_CTRL_REMOTE_REPLAY		0xc1	/*Զ�̻طſ���*/
#define MINOR_SET_DISP_CFG				0xc2	/*������ʾͨ��*/
#define MINOR_GET_DISP_CFG				0xc3	/*��ȡ��ʾͨ������*/
#define MINOR_SET_PLANTABLE				0xc4	/*���üƻ���ѯ��*/
#define MINOR_GET_PLANTABLE				0xc5	/*��ȡ�ƻ���ѯ��*/
#define MINOR_START_PPPPOE				0xc6	/*��ʼPPPoE����*/
#define MINOR_STOP_PPPPOE				0xc7	/*����PPPoE����*/
#define MINOR_UPLOAD_LOGO				0xc8	/*�ϴ�LOGO*/


/*��־������Ϣ*/
//������
#define MAJOR_INFORMATION               0x4     /*������Ϣ*/
//������
#define MINOR_HDD_INFO                  0xa1 /*Ӳ����Ϣ*/
#define MINOR_SMART_INFO                0xa2 /*SMART��Ϣ*/
#define MINOR_REC_START                 0xa3 /*��ʼ¼��*/
#define MINOR_REC_STOP                  0xa4 /*ֹͣ¼��*/
#define MINOR_REC_OVERDUE				0xa5 /*����¼��ɾ��*/
#define MINOR_LINK_START				0xa6 //����ǰ���豸
#define MINOR_LINK_STOP					0xa7 //�Ͽ�ǰ���豸��
#define MINOR_NET_DISK_INFO				0xa8 //����Ӳ����Ϣ


//����־��������ΪMAJOR_OPERATION=03��������ΪMINOR_LOCAL_CFG_PARM=0x52����MINOR_REMOTE_GET_PARM=0x76����MINOR_REMOTE_CFG_PARM=0x77ʱ��dwParaType:����������Ч���京�����£�
#define PARA_VIDEOOUT	0x1
#define PARA_IMAGE		0x2
#define PARA_ENCODE		0x4
#define PARA_NETWORK	0x8
#define PARA_ALARM		0x10
#define PARA_EXCEPTION	0x20
#define PARA_DECODER	0x40    /*������*/
#define PARA_RS232		0x80
#define PARA_PREVIEW	0x100
#define PARA_SECURITY	0x200
#define PARA_DATETIME	0x400
#define PARA_FRAMETYPE	0x800    /*֡��ʽ*/
#define PARA_VCA_RULE   0x1001  //��Ϊ���� 
#define PARA_VCA_CTRL   0x1002  //�������ܿ�����Ϣ
#define PARA_VCA_PLATE  0x1003 //  ����ʶ��

#define PARA_CODESPLITTER 0x2000 /*���������*/
//2010-01-22 ������Ƶ�ۺ�ƽ̨��־��Ϣ������
#define PARA_RS485		  0x2001			/* RS485������Ϣ*/
#define PARA_DEVICE		  0x2002			/* �豸������Ϣ*/
#define PARA_HARDDISK	  0x2003			/* Ӳ��������Ϣ */
#define PARA_AUTOBOOT	  0x2004			/* �Զ�����������Ϣ*/
#define PARA_HOLIDAY	  0x2005			/* �ڼ���������Ϣ*/			
#define PARA_IPC		  0x2006			/* IPͨ������ */	

//��־��Ϣ(9000��չ)
typedef struct 
{
	NET_DVR_TIME strLogTime;
	DWORD	dwMajorType;	//������ 1-����; 2-�쳣; 3-����; 0xff-ȫ��
	DWORD	dwMinorType;//������ 0-ȫ��;
	BYTE	sPanelUser[MAX_NAMELEN]; //���������û���
	BYTE	sNetUser[MAX_NAMELEN];//����������û���
	NET_DVR_IPADDR	struRemoteHostAddr;//Զ��������ַ
	DWORD	dwParaType;//��������,9000�豸MINOR_START_VT/MINOR_STOP_VTʱ����ʾ�����Խ��Ķ��Ӻ�
	DWORD	dwChannel;//ͨ����
	DWORD	dwDiskNumber;//Ӳ�̺�
	DWORD	dwAlarmInPort;//��������˿�
	DWORD	dwAlarmOutPort;//��������˿�
    DWORD   dwInfoLen;
    char    sInfo[LOG_INFO_LEN];
}NET_DVR_LOG_V30, *LPNET_DVR_LOG_V30;

//��־��Ϣ
typedef struct 
{
	NET_DVR_TIME strLogTime;
	DWORD	dwMajorType;	//������ 1-����; 2-�쳣; 3-����; 0xff-ȫ��
	DWORD	dwMinorType;//������ 0-ȫ��;
	BYTE	sPanelUser[MAX_NAMELEN]; //���������û���
	BYTE	sNetUser[MAX_NAMELEN];//����������û���
	char	sRemoteHostAddr[16];//Զ��������ַ
	DWORD	dwParaType;//��������
	DWORD	dwChannel;//ͨ����
	DWORD	dwDiskNumber;//Ӳ�̺�
	DWORD	dwAlarmInPort;//��������˿�
	DWORD	dwAlarmOutPort;//��������˿�
}NET_DVR_LOG, *LPNET_DVR_LOG;

/************************DVR��־ end***************************/


//�������״̬(9000��չ)
typedef struct 
{
	BYTE Output[MAX_ALARMOUT_V30];
}NET_DVR_ALARMOUTSTATUS_V30, *LPNET_DVR_ALARMOUTSTATUS_V30;

//�������״̬
typedef struct 
{
	BYTE Output[MAX_ALARMOUT];
}NET_DVR_ALARMOUTSTATUS, *LPNET_DVR_ALARMOUTSTATUS;

//������Ϣ
typedef struct 
{
	USHORT m_Year;
	USHORT m_Month;
	USHORT m_Day;
	USHORT m_Hour;
	USHORT m_Minute;
	USHORT m_Second;
	BYTE DeviceName[24];	//�豸����
	DWORD dwChannelNumer;	//ͨ����
	BYTE CardNumber[32];	//����
	char cTradeType[12];	//��������
	DWORD dwCash;			//���׽��
}NET_DVR_TRADEINFO, *LPNET_DVR_TRADEINFO;


//ATMר��
/****************************ATM(begin)***************************/
#define NCR		0
#define DIEBOLD	1
#define WINCOR_NIXDORF	2
#define SIEMENS	3
#define OLIVETTI	4
#define FUJITSU	5
#define HITACHI	6
#define SMI		7
#define IBM		8
#define BULL	9
#define YiHua	10
#define LiDe	11
#define GDYT	12
#define Mini_Banl	13
#define GuangLi	14
#define DongXin	15
#define ChenTong	16
#define NanTian	17
#define XiaoXing	18
#define GZYY	19
#define QHTLT	20
#define DRS918	21
#define KALATEL	22
#define NCR_2	23	
#define NXS		24


/*֡��ʽ*/
typedef struct 
{
	BYTE code[12];		/* ���� */
}NET_DVR_FRAMETYPECODE;


//ATM����
typedef struct 
{
	DWORD dwSize;
	char sATMIP[16];						/* ATM IP��ַ */
	DWORD dwATMType;						/* ATM���� */
	DWORD dwInputMode;						/* ���뷽ʽ	0-�������� 1-������� 2-����ֱ������ 3-����ATM��������*/
	DWORD dwFrameSignBeginPos;              /* ���ı�־λ����ʼλ��*/
	DWORD dwFrameSignLength;				/* ���ı�־λ�ĳ��� */
	BYTE  byFrameSignContent[12];			/* ���ı�־λ������ */
	DWORD dwCardLengthInfoBeginPos;			/* ���ų�����Ϣ����ʼλ�� */
	DWORD dwCardLengthInfoLength;			/* ���ų�����Ϣ�ĳ��� */
	DWORD dwCardNumberInfoBeginPos;			/* ������Ϣ����ʼλ�� */
	DWORD dwCardNumberInfoLength;			/* ������Ϣ�ĳ��� */
	DWORD dwBusinessTypeBeginPos;           /* �������͵���ʼλ�� */
	DWORD dwBusinessTypeLength;				/* �������͵ĳ��� */
	NET_DVR_FRAMETYPECODE frameTypeCode[10];/* ���� */
}NET_DVR_FRAMEFORMAT, *LPNET_DVR_FRAMEFORMAT;
//SDK_V31 ATM

/*��������*/
typedef struct	tagNET_DVR_FILTER
{	
	BYTE			        byEnable;			//0,������;1,����
	BYTE					byMode;				//0,ASCII;1,HEX	
    BYTE                    byFrameBeginPos;    // ��Ҫ����Ŀ���ַ�����ʼλ��     
	BYTE					byRes[1];           // �����ֽ�
	BYTE 					byFilterText[16];	//�����ַ���
	BYTE					byRes2[12];         // �����ֽ�
}NET_DVR_FILTER, *LPNET_DVR_FILTER;

//���ݰ����� ���ݰ���ʶ
typedef struct	tagNET_DVR_IDENTIFICAT
{	
	BYTE					byStartMode;		//��ʼ�ַ�ģʽ:0,ASCII;1,HEX
	BYTE					byEndMode;			//�����ַ�ģʽ��0,ASCII;1,HEX
	BYTE					byRes[2];           //�����ֽ�
	NET_DVR_FRAMETYPECODE	struStartCode;		//���ݰ���ʼ��ʶ�ַ�
	NET_DVR_FRAMETYPECODE	struEndCode;		//���ݰ�������ʶ�ַ�
	BYTE					byRes1[12];         //�����ֽ�
}NET_DVR_IDENTIFICAT, *LPNET_DVR_IDENTIFICAT;

typedef struct	tagNET_DVR_PACKAGE_LOCATION/*������Ϣλ��*/
{	
	BYTE 					byOffsetMode;			/*����λ����Ϣģʽ 0,token(�ַ���־ģʽ);1,fix���̶�ģʽ��*/
    BYTE                    byRes1[3];				// �����ֽ�
	DWORD  				    dwOffsetPos;			/*modeΪ1��ʱ��ʹ��,�̶�ƫ�ƴ�С*/
	NET_DVR_FRAMETYPECODE	struTokenCode;			/*��־λ*/
	BYTE					byMultiplierValue;		/*��־λ���ٴγ���*/
	BYTE					byEternOffset;			/*�����ַ�ƫ����*/
	BYTE					byCodeMode;			    /*0,ASCII;1,HEX*/
	BYTE 					byRes2[9];			    //�����ֽ�
}NET_DVR_PACKAGE_LOCATION, *LPNET_DVR_PACKAGE_LOCATION;


typedef struct	tagNET_DVR_PACKAGE_LENGTH//������Ϣ����
{	
	BYTE					byLengthMode;			//�������ͣ�0,�ɱ䳤��;1,�̶�����;2,��������(�ӿ����л�ȡ)
    BYTE                    byRes1[3];              // �����ֽ�
	DWORD  			    	dwFixLength;			    //modeΪ1��ʱ��ʹ��,�̶����ȴ�С
	DWORD					dwMaxLength;            //������Ϣ��󳤶�  byLengthMode Ϊ0 ʱʹ��
	DWORD					dwMinLength;            //������Ϣ��С����  byLengthModeΪ1ʱʹ��
	BYTE					byEndMode;			    //�ɱ䳤�� �ս��ģʽ 0,ASCII;1,HEX	
    BYTE                    byRes2[3];              //�����ֽ�
	NET_DVR_FRAMETYPECODE	struEndCode;		//�ɱ䳤���ս��
	DWORD					dwLengthPos;			//lengthModeΪ2��ʱ��ʹ�ã����ų����ڱ����е�λ��
	DWORD					dwLengthLen;			//lengthModeΪ2��ʱ��ʹ�ã����ų��ȵĳ���
	BYTE					byRes3[8];              // �����ֽ�
}NET_DVR_PACKAGE_LENGTH,* LPNET_DVR_PACKAGE_LENGTH;
 
typedef struct	tagNET_DVR_OSD_POSITION//OSD ���ӵ�λ��
{	
	BYTE					byPositionMode;		//���ӷ�񣬹�2�֣�0������ʾ��1���Զ���
    BYTE                    byRes1[3];          // �����ֽ�
	DWORD 					dwPosX;				//x���꣬���ӷ��Ϊ�Զ���ʱʹ��
	DWORD					dwPosY;				//y���꣬���ӷ��Ϊ�Զ���ʱʹ��
	BYTE					byRes2[8];          //�����ֽ�
}NET_DVR_OSD_POSITION, *LPNET_DVR_OSD_POSITION;

typedef struct	tagNET_DVR_DATE_FORMAT//������ʾ��ʽ
{	
	BYTE					byMonth;			    //Month,0.mm;1.mmm;2.mmmm							
	BYTE 					byDay;				    //Day,0.dd;									
	BYTE 					byYear;				    //Year,0.yy;1.yyyy	
	BYTE					byDateForm;			    //0~5�������յ��������
	BYTE					byRes[20];              // �����ֽ�
	char					chSeprator[4];		    //�ָ���
	char	    			chDisplaySeprator[4];	//��ʾ�ָ���
    BYTE	    			byDisplayForm;			//0~5��3��item���������
	BYTE					res[27];                // �����ֽ�
}NET_DVR_DATE_FORMAT, *LPNET_DVR_DATE_FORMAT;
typedef struct	tagNET_DVRT_TIME_FORMAT//ʱ����ʾ��ʽ
{	
	BYTE					byTimeForm;				//1. HH MM SS;0. HH MM
	BYTE 					byRes1[23];             // �����ֽ�
    BYTE                    byHourMode;             //0,12;1,24 
    BYTE                    byRes2[3];              // �����ֽ�
	char					chSeprator[4]; 			//���ķָ�������ʱû��
	char					chDisplaySeprator[4];	//��ʾ�ָ���
	BYTE	    			byDisplayForm;			//0~5��3��item���������
    BYTE                    byRes3[3];              // �����ֽ�
	BYTE					byDisplayHourMode;		//0,12;1,24 
	BYTE					byRes4[19];             // �����ֽ�
}NET_DVR_TIME_FORMAT, *LPNET_DVR_TIME_FORMAT;

typedef struct tagNET_DVR_OVERLAY_CHANNEL
{	
	BYTE                    byChannel[64];//���ӵ�ͨ�� ÿ���ֽڱ�ʶһ��ͨ���� ����byChannel[0]ֵΪ1��Ӧ����ͨ��1��0��ʾ������ͨ��1��
	DWORD					dwDelayTime;			//������ʱʱ��
	BYTE					byEnableDelayTime;		//�Ƿ����õ�����ʱ
	BYTE					byRes[11];          // �����ֽ�
}NET_DVR_OVERLAY_CHANNEL, *LPNET_DVR_OVERLAY_CHANNEL;

// ATM ������Ϊ��Ϣ
typedef struct tagNET_DVR_ATM_PACKAGE_ACTION
{	
	NET_DVR_PACKAGE_LOCATION	struPackageLocation;// ����λ����Ϣ
	NET_DVR_OSD_POSITION		struOsdPosition;    // OSD ����λ��
	NET_DVR_FRAMETYPECODE		struActionCode;		//����������Ϊ��
	NET_DVR_FRAMETYPECODE		struPreCode;		//�����ַ�ǰ���ַ�
	BYTE					byActionCodeMode;		//����������Ϊ��ģʽ0,ASCII;1,HEX
	BYTE					byRes[7];               // �����ֽ�
}NET_DVR_ATM_PACKAGE_ACTION, *LPNET_DVR_ATM_PACKAGE_ACTION;

// ATM ����DATA��Ϣ
typedef struct tagNET_DVR_ATM_PACKAGE_DATE
{	
	NET_DVR_PACKAGE_LOCATION	struPackageLocation;// �����ڱ����е�λ����Ϣ
	NET_DVR_DATE_FORMAT		    struDateForm;		//������ʾ��ʽ
	NET_DVR_OSD_POSITION		struOsdPosition;	// OSD����λ����Ϣ
	BYTE				    	res[8]; 			// �����ֽ�
}NET_DVR_ATM_PACKAGE_DATE, *LPNET_DVR_ATM_PACKAGE_DATE;


//ATM����ʱ����Ϣ
typedef struct tagNET_DVR_ATM_PACKAGE_TIME
{	
	NET_DVR_PACKAGE_LOCATION	location;		// ʱ���ڱ����е�λ����Ϣ
	NET_DVR_TIME_FORMAT		    struTimeForm;	// ʱ����ʾ��ʽ
	NET_DVR_OSD_POSITION		struOsdPosition;// OSD ����λ����Ϣ
	BYTE					    byRes[8];		// �����ֽ�
}NET_DVR_ATM_PACKAGE_TIME, *LPNET_DVR_ATM_PACKAGE_TIME;


// ATM ����������Ϣ�����ţ����׽�������ţ�
typedef struct tagNET_DVR_ATM_PACKAGE_OTHERS
{	
	NET_DVR_PACKAGE_LOCATION	struPackageLocation; //����λ����Ϣ
	NET_DVR_PACKAGE_LENGTH	struPackageLength;		//������Ϣ
	NET_DVR_OSD_POSITION		struOsdPosition;	// OSD����λ����Ϣ
	NET_DVR_FRAMETYPECODE		struPreCode;		//�����ַ�ǰ���ַ�
	BYTE					res[8];					//�����ֽ�
}NET_DVR_ATM_PACKAGE_OTHERS, *LPNET_DVR_ATM_PACKAGE_OTHERS;


//�û��Զ���Э��
typedef struct tagNET_DVR_ATM_USER_DEFINE_PROTOCOL
{
    NET_DVR_IDENTIFICAT        struIdentification;  //���ı�־
    NET_DVR_FILTER             struFilter; //���ݰ���������
    NET_DVR_ATM_PACKAGE_OTHERS struCardNoPara; //���ӿ�������
    NET_DVR_ATM_PACKAGE_ACTION struTradeActionPara[MAX_ACTION_TYPE]; //���ӽ�����Ϊ���� 0-9 ���ζ�ӦInCard OutCard OverLay SetTime GetStatus Query WithDraw Deposit ChanPass Transfer
    NET_DVR_ATM_PACKAGE_OTHERS struAmountPara; //���ӽ��׽������
    NET_DVR_ATM_PACKAGE_OTHERS struSerialNoPara; //���ӽ����������
    NET_DVR_OVERLAY_CHANNEL    struOverlayChan; //����ͨ������
    NET_DVR_ATM_PACKAGE_DATE   struRes1; //�������ڣ�����
    NET_DVR_ATM_PACKAGE_TIME   struRes2; //����ʱ�䣬����
    BYTE                       byRes3[124];        //����
}NET_DVR_ATM_USER_DEFINE_PROTOCOL, *LPNET_DVR_ATM_USER_DEFINE_PROTOCOL;

typedef struct tagNET_DVR_ATM_FRAMEFORMAT_V30
{		
    DWORD                        dwSize;                 //�ṹ��С
    BYTE					    byEnable;				/*�Ƿ�����0,������;1,����*/
    BYTE					    byInputMode;			/**���뷽ʽ:0-���������1����Э�顢2-���ڼ�����3-����Э��*/
    BYTE					    byRes1[34];              //�����ֽ� 
    NET_DVR_IPADDR		    	struAtmIp;				/*ATM ��IP �������ʱʹ�� */
    WORD					    wAtmPort;				/* ����Э�鷽ʽʱ��ʹ��*/
    BYTE					    byRes2[2];              // �����ֽ�
    DWORD					    dwAtmType;				/*ATMЭ�����ͣ���NET_DVR_ATM_PROTOCOL�ṹ�л�ȡ���������Ϊ�Զ���ʱʹ���û��Զ���Э��*/
    NET_DVR_ATM_USER_DEFINE_PROTOCOL   struAtmUserDefineProtocol; //�û��Զ���Э�飬��ATM����Ϊ�Զ�ʱ��Ҫʹ�øö���
    BYTE					    byRes3[8];
}NET_DVR_ATM_FRAMEFORMAT_V30, *LPNET_DVR_ATM_FRAMEFORMAT_V30;


typedef struct  tagNET_DVR_ATM_PROTO_TYPE
{
    DWORD dwAtmType; //ATMЭ�����ͣ�ͬʱ��Ϊ������� ATM �����е�dwAtmType �Զ���ʱΪ1025
    char chDesc[ATM_DESC_LEN]; //ATMЭ�������
}NET_DVR_ATM_PROTO_TYPE, *LPNET_DVR_ATM_PROTO_TYPE; //Э����Ϣ���ݽṹ

typedef struct tagNET_DVR_ATM_PROTO_LIST    //ATM Э���б�
{
    DWORD                  dwAtmProtoNum;           // Э���б�ĸ���
    NET_DVR_ATM_PROTO_TYPE struAtmProtoType[MAX_ATM_PROTOCOL_NUM]; //Э���б���Ϣ
}NET_DVR_ATM_PROTO_LIST, *LPNET_DVR_ATM_PROTO_LIST;

typedef struct tagNET_DVR_ATM_PROTOCOL
{
    DWORD dwSize;
    NET_DVR_ATM_PROTO_LIST struNetListenList; // �������Э������
    NET_DVR_ATM_PROTO_LIST struSerialListenList; //���ڼ���Э������
    NET_DVR_ATM_PROTO_LIST struNetProtoList;     //����Э������
    NET_DVR_ATM_PROTO_LIST struSerialProtoList;   //����Э������
    NET_DVR_ATM_PROTO_TYPE struCustomProto;        //�Զ���Э��
}NET_DVR_ATM_PROTOCOL, *LPNET_DVR_ATM_PROTOCOL;
// SDK_V31

/*****************************DS-6001D/F(begin)***************************/
//DS-6001D Decoder
typedef struct 
{
	BYTE byEncoderIP[16];		//�����豸���ӵķ�����IP
	BYTE byEncoderUser[16];		//�����豸���ӵķ��������û���
	BYTE byEncoderPasswd[16];	//�����豸���ӵķ�����������
	BYTE bySendMode;			//�����豸���ӷ�����������ģʽ
	BYTE byEncoderChannel;		//�����豸���ӵķ�������ͨ����
	WORD wEncoderPort;			//�����豸���ӵķ������Ķ˿ں�
	BYTE reservedData[4];		//����
}NET_DVR_DECODERINFO, *LPNET_DVR_DECODERINFO;

typedef struct 
{
	BYTE byEncoderIP[16];		//�����豸���ӵķ�����IP
	BYTE byEncoderUser[16];		//�����豸���ӵķ��������û���
	BYTE byEncoderPasswd[16];	//�����豸���ӵķ�����������
	BYTE byEncoderChannel;		//�����豸���ӵķ�������ͨ����
	BYTE bySendMode;			//�����豸���ӵķ�����������ģʽ
	WORD wEncoderPort;			//�����豸���ӵķ������Ķ˿ں�
	DWORD dwConnectState;		//�����豸���ӷ�������״̬
	BYTE reservedData[4];		//����
}NET_DVR_DECODERSTATE, *LPNET_DVR_DECODERSTATE;

/*�����豸�����붨��*/
#define NET_DEC_STARTDEC		1
#define NET_DEC_STOPDEC			2
#define NET_DEC_STOPCYCLE		3
#define NET_DEC_CONTINUECYCLE	4
/*���ӵ�ͨ������*/
typedef struct 
{
	char sDVRIP[16];				/* DVR IP��ַ */
	WORD wDVRPort;			 		/* �˿ں� */
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byChannel;					/* ͨ���� */
	BYTE byLinkMode;				/* ����ģʽ */
	BYTE byLinkType;				/* �������� 0�������� 1�������� */
}NET_DVR_DECCHANINFO, *LPNET_DVR_DECCHANINFO;

/*ÿ������ͨ��������*/
typedef struct 
{
	BYTE	byPoolChans;			/*ÿ·����ͨ���ϵ�ѭ��ͨ������, ���4ͨ�� 0��ʾû�н���*/
	NET_DVR_DECCHANINFO struchanConInfo[MAX_DECPOOLNUM];
	BYTE	byEnablePoll;			/*�Ƿ���Ѳ 0-�� 1-��*/
	BYTE	byPoolTime;				/*��Ѳʱ�� 0-���� 1-10�� 2-15�� 3-20�� 4-30�� 5-45�� 6-1���� 7-2���� 8-5���� */
}NET_DVR_DECINFO, *LPNET_DVR_DECINFO;

/*�����豸��������*/
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwDecChanNum; 		/*����ͨ��������*/
	NET_DVR_DECINFO struDecInfo[MAX_DECNUM];
}NET_DVR_DECCFG, *LPNET_DVR_DECCFG;

//2005-08-01
/* �����豸͸��ͨ������ */
typedef struct 
{
	DWORD dwEnableTransPort;	/* �Ƿ�����͸��ͨ�� 0�������� 1������*/
	char sDecoderIP[16];		/* DVR IP��ַ */
	WORD wDecoderPort;			/* �˿ں� */
	WORD wDVRTransPort;			/* ����ǰ��DVR�Ǵ�485/232�����1��ʾ232����,2��ʾ485���� */
	char cReserve[4];
}NET_DVR_PORTINFO, *LPNET_DVR_PORTINFO;

typedef struct 
{
	DWORD dwSize;
	NET_DVR_PORTINFO struTransPortInfo[MAX_TRANSPARENTNUM]; /* ����0��ʾ232 ����1��ʾ485 */
}NET_DVR_PORTCFG, *LPNET_DVR_PORTCFG;

/* ���������ļ��ط� */
typedef struct 
{
	DWORD dwSize;
	char sDecoderIP[16];		/* DVR IP��ַ */
	WORD wDecoderPort;			/* �˿ں� */
	WORD wLoadMode;				/* �ط�����ģʽ 1�������� 2����ʱ�� */
	union
	{
		BYTE byFile[100];		/* �طŵ��ļ��� */
		struct
		{
			DWORD dwChannel;
			BYTE sUserName[NAME_LEN];	/*������Ƶ�û���*/
			BYTE sPassword[PASSWD_LEN];	/* ���� */
			NET_DVR_TIME struStartTime;	/* ��ʱ��طŵĿ�ʼʱ�� */
			NET_DVR_TIME struStopTime;	/* ��ʱ��طŵĽ���ʱ�� */
		}bytime;
	}mode_size;
}NET_DVR_PLAYREMOTEFILE, *LPNET_DVR_PLAYREMOTEFILE;

/*��ǰ�豸��������״̬*/
typedef struct 
{
	DWORD dwWorkType;		/*������ʽ��1����Ѳ��2����̬���ӽ��롢3���ļ��ط����� 4����ʱ��ط�����*/
	char sDVRIP[16];		/*���ӵ��豸ip*/
	WORD wDVRPort;			/*���Ӷ˿ں�*/
	BYTE byChannel;			/* ͨ���� */
	BYTE byLinkMode;		/* ����ģʽ */
	DWORD	dwLinkType;		/*�������� 0�������� 1��������*/
	union
	{
		struct
		{
			BYTE sUserName[NAME_LEN];	/*������Ƶ�û���*/
			BYTE sPassword[PASSWD_LEN];	/* ���� */
			char cReserve[52];
		}userInfo;
		struct
		{
			BYTE   fileName[100];
		}fileInfo;
		struct
		{
			DWORD	dwChannel;
			BYTE	sUserName[NAME_LEN];	/*������Ƶ�û���*/
			BYTE	sPassword[PASSWD_LEN];	/* ���� */
			NET_DVR_TIME struStartTime;		/* ��ʱ��طŵĿ�ʼʱ�� */
			NET_DVR_TIME struStopTime;		/* ��ʱ��طŵĽ���ʱ�� */
		}timeInfo;
	}objectInfo;
}NET_DVR_DECCHANSTATUS, *LPNET_DVR_DECCHANSTATUS;

typedef struct 
{
	DWORD   dwSize;
	NET_DVR_DECCHANSTATUS struDecState[MAX_DECNUM];
}NET_DVR_DECSTATUS, *LPNET_DVR_DECSTATUS;
/*****************************DS-6001D/F(end)***************************/

//���ַ�����(�ӽṹ)
typedef struct 
{
	WORD wShowString;				// Ԥ����ͼ�����Ƿ���ʾ�ַ�,0-����ʾ,1-��ʾ �����С704*576,�����ַ��Ĵ�СΪ32*32
	WORD wStringSize;				/* �����ַ��ĳ��ȣ����ܴ���44���ַ� */
	WORD wShowStringTopLeftX;		/* �ַ���ʾλ�õ�x���� */
	WORD wShowStringTopLeftY;		/* �ַ�������ʾλ�õ�y���� */
	char sString[44];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRINGINFO, *LPNET_DVR_SHOWSTRINGINFO;

//�����ַ�(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_V30];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRING_V30, *LPNET_DVR_SHOWSTRING_V30;

//�����ַ���չ(8���ַ�)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_EX];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRING_EX, *LPNET_DVR_SHOWSTRING_EX;

//�����ַ�
typedef struct 
{
	DWORD dwSize;
	NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRING, *LPNET_DVR_SHOWSTRING;

/****************************DS9000�����ṹ(begin)******************************/

/*
EMAIL�����ṹ
*/
typedef struct
{		
	DWORD		dwSize;
	BYTE		sAccount[NAME_LEN];				/* �˺�*/ 
	BYTE		sPassword[MAX_EMAIL_PWD_LEN];			/*���� */
	struct
	{
		BYTE	sName[NAME_LEN];				/* ���������� */
		BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* �����˵�ַ */
	}struSender;
	BYTE		sSmtpServer[MAX_EMAIL_ADDR_LEN];	/* smtp������ */
	BYTE		sPop3Server[MAX_EMAIL_ADDR_LEN];	/* pop3������ */
	struct
	{
		BYTE	sName[NAME_LEN];				/* �ռ������� */
		BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* �ռ��˵�ַ */
	}struReceiver[3];							/* ����������3���ռ��� */
	BYTE		byAttachment;					/* �Ƿ������ */
	BYTE		bySmtpServerVerify;				/* ���ͷ�����Ҫ�������֤ */
    BYTE        byMailInterval;                 /* mail interval */
	BYTE        byEnableSSL;					//ssl�Ƿ�����9000_1.1
	WORD        wSmtpPort;						//gmail��465����ͨ��Ϊ25     
	BYTE        byRes[74];						//����
} NET_DVR_EMAILCFG_V30, *LPNET_DVR_EMAILCFG_V30;

/*
DVRʵ��Ѳ�����ݽṹ
*/
typedef struct
{	
	DWORD 	dwSize;
	BYTE	byPresetNo[CRUISE_MAX_PRESET_NUMS];		/* Ԥ�õ�� */
	BYTE 	byCruiseSpeed[CRUISE_MAX_PRESET_NUMS];	/* Ѳ���ٶ� */
	WORD	wDwellTime[CRUISE_MAX_PRESET_NUMS];		/* ͣ��ʱ�� */
	BYTE	byEnableThisCruise;						/* �Ƿ����� */
	BYTE	res[15];
}NET_DVR_CRUISE_PARA, *LPNET_DVR_CRUISE_PARA; 
/****************************DS9000�����ṹ(end)******************************/


//ʱ���
typedef struct 
{
	DWORD dwMonth;		//�� 0-11��ʾ1-12����
	DWORD dwWeekNo;		//�ڼ��� 0����1�� 1����2�� 2����3�� 3����4�� 4�����һ��
	DWORD dwWeekDate;	//���ڼ� 0�������� 1������һ 2�����ڶ� 3�������� 4�������� 5�������� 6��������
	DWORD dwHour;		//Сʱ	��ʼʱ��0��23 ����ʱ��1��23
	DWORD dwMin;		//��	0��59
}NET_DVR_TIMEPOINT;

//����ʱ����
typedef struct 
{
	DWORD dwSize;
	BYTE byRes1[16];			//����
	DWORD dwEnableDST;		//�Ƿ�������ʱ�� 0�������� 1������
	BYTE byDSTBias;	//����ʱƫ��ֵ��30min, 60min, 90min, 120min, �Է��Ӽƣ�����ԭʼ��ֵ
	BYTE byRes2[3];
	NET_DVR_TIMEPOINT struBeginPoint;	//��ʱ�ƿ�ʼʱ��
	NET_DVR_TIMEPOINT struEndPoint;	//��ʱ��ֹͣʱ��
}NET_DVR_ZONEANDDST, *LPNET_DVR_ZONEANDDST;



//ͼƬ����
typedef struct 
{
	/*ע�⣺��ͼ��ѹ���ֱ���ΪVGAʱ��֧��0=CIF, 1=QCIF, 2=D1ץͼ��
	���ֱ���Ϊ3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA,7=XVGA, 8=HD900p
	��֧�ֵ�ǰ�ֱ��ʵ�ץͼ*/
	WORD	wPicSize;				/* 0=CIF, 1=QCIF, 2=D1 3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA*/
	WORD	wPicQuality;			/* ͼƬ����ϵ�� 0-��� 1-�Ϻ� 2-һ�� */
}NET_DVR_JPEGPARA, *LPNET_DVR_JPEGPARA;

/* aux video out parameter */
//���������������
typedef struct 
{
	DWORD dwSize;
	DWORD dwAlarmOutChan;                       /* ѡ�񱨾������󱨾�ͨ���л�ʱ�䣺1��������ͨ��: 0:�����/1:��1/2:��2/3:��3/4:��4 */
	DWORD dwAlarmChanSwitchTime;                /* :1�� - 10:10�� */
	DWORD dwAuxSwitchTime[MAX_AUXOUT];			/* ��������л�ʱ��: 0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s */
	BYTE  byAuxOrder[MAX_AUXOUT][MAX_WINDOW];	/* �������Ԥ��˳��, 0xff��ʾ��Ӧ�Ĵ��ڲ�Ԥ�� */
}NET_DVR_AUXOUTCFG, *LPNET_DVR_AUXOUTCFG;


//ntp
typedef struct 
{
	BYTE sNTPServer[64];   /* Domain Name or IP addr of NTP server */
	WORD wInterval;		 /* adjust time interval(hours) */
	BYTE byEnableNTP;    /* enable NPT client 0-no��1-yes*/
	signed char cTimeDifferenceH; /* ����ʱ�׼ʱ��� Сʱƫ��-12 ... +13 */
	signed char cTimeDifferenceM;/* ����ʱ�׼ʱ��� ����ƫ��0, 30, 45*/
	BYTE res1;
    WORD wNtpPort;         /* ntp server port 9000���� �豸Ĭ��Ϊ123*/
    BYTE res2[8];
}NET_DVR_NTPPARA, *LPNET_DVR_NTPPARA;

//ddns
typedef struct 
{
	BYTE sUsername[NAME_LEN];  /* DDNS�˺��û���/���� */
	BYTE sPassword[PASSWD_LEN];
	BYTE sDomainName[64];       /* ���� */
	BYTE byEnableDDNS;			/*�Ƿ�Ӧ�� 0-��1-��*/
	BYTE res[15];
}NET_DVR_DDNSPARA, *LPNET_DVR_DDNSPARA;


typedef struct
{
	BYTE byHostIndex;					/* 0-Hikvision DNS 1��Dyndns 2��PeanutHull(������)*/
	BYTE byEnableDDNS;					/*�Ƿ�Ӧ��DDNS 0-��1-��*/
	WORD wDDNSPort;						/* DDNS�˿ں� */
	BYTE sUsername[NAME_LEN];			/* DDNS�û���*/
	BYTE sPassword[PASSWD_LEN];			/* DDNS���� */
	BYTE sDomainName[MAX_DOMAIN_NAME];	/* �豸�䱸��������ַ */
	BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNS ��Ӧ�ķ�������ַ��������IP��ַ������ */
	BYTE byRes[16];
}NET_DVR_DDNSPARA_EX, *LPNET_DVR_DDNSPARA_EX;

//9000��չ
typedef struct
{
    BYTE byEnableDDNS;
    BYTE byHostIndex;/* 0-Hikvision DNS(����) 1��Dyndns 2��PeanutHull(������)*/
    BYTE byRes1[2];
    struct
    {    
        BYTE sUsername[NAME_LEN];			/* DDNS�˺��û���*/
        BYTE sPassword[PASSWD_LEN];			/* ���� */
        BYTE sDomainName[MAX_DOMAIN_NAME];	/* �豸�䱸��������ַ */
        BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNSЭ���Ӧ�ķ�������ַ��������IP��ַ������ */
        WORD wDDNSPort;						/* �˿ں� */
        BYTE byRes[10];
    } struDDNS[MAX_DDNS_NUMS];
    BYTE byRes2[16];
}NET_DVR_DDNSPARA_V30, *LPNET_DVR_DDNSPARA_V30;

//email
typedef struct 
{
	BYTE sUsername[64];  /* �ʼ��˺�/���� */
	BYTE sPassword[64];
	BYTE sSmtpServer[64];
	BYTE sPop3Server[64];
	BYTE sMailAddr[64];   /* email */
	BYTE sEventMailAddr1[64];  /* �ϴ�����/�쳣�ȵ�email */
	BYTE sEventMailAddr2[64];
	BYTE res[16];
}NET_DVR_EMAILPARA, *LPNET_DVR_EMAILPARA;

//�����������
typedef struct 
{
	DWORD  dwSize;
	char  sDNSIp[16];                /* DNS��������ַ */
	NET_DVR_NTPPARA  struNtpClientParam;      /* NTP���� */
	NET_DVR_DDNSPARA struDDNSClientParam;     /* DDNS���� */
	BYTE res[464];			/* ���� */
}NET_DVR_NETAPPCFG, *LPNET_DVR_NETAPPCFG;

//nfs�ṹ����
typedef struct
{
    char sNfsHostIPAddr[16];
    BYTE sNfsDirectory[PATHNAME_LEN];        // PATHNAME_LEN = 128
}NET_DVR_SINGLE_NFS, *LPNET_DVR_SINGLE_NFS;

typedef struct 
{
	DWORD  dwSize;
	NET_DVR_SINGLE_NFS struNfsDiskParam[MAX_NFS_DISK];
}NET_DVR_NFSCFG, *LPNET_DVR_NFSCFG;

//Ѳ��������(HIK IP����ר��)
typedef struct
{
    BYTE	PresetNum;	//Ԥ�õ�
    BYTE	Dwell;		//ͣ��ʱ��
    BYTE	Speed;		//�ٶ�
    BYTE	Reserve;	//����
}NET_DVR_CRUISE_POINT, *LPNET_DVR_CRUISE_POINT;

typedef struct 
{
	NET_DVR_CRUISE_POINT struCruisePoint[32];			//���֧��32��Ѳ����
}NET_DVR_CRUISE_RET, *LPNET_DVR_CRUISE_RET;

/************************************��·������(begin)***************************************/
typedef struct 
{
	DWORD	dwSize;
	char	sFirstDNSIP[16];
	char	sSecondDNSIP[16];
	char	sRes[32];
}NET_DVR_NETCFG_OTHER, *LPNET_DVR_NETCFG_OTHER;

typedef struct 
{
	char 	sDVRIP[16];				/* DVR IP��ַ */
	WORD 	wDVRPort;			 	/* �˿ں� */
	BYTE 	byChannel;				/* ͨ���� */
	BYTE	byTransProtocol;			/* ����Э������ 0-TCP, 1-UDP */
	BYTE	byTransMode;				/* ��������ģʽ 0�������� 1��������*/
	BYTE	byRes[3];
	BYTE	sUserName[NAME_LEN];			/* ���������½�ʺ� */
	BYTE	sPassword[PASSWD_LEN];			/* ����������� */
}NET_DVR_MATRIX_DECINFO, *LPNET_DVR_MATRIX_DECINFO;

//����/ֹͣ��̬����
typedef struct 
{
	DWORD	dwSize;				
	NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ��̬����ͨ����Ϣ */
}NET_DVR_MATRIX_DYNAMIC_DEC, *LPNET_DVR_MATRIX_DYNAMIC_DEC;

typedef struct  
{
    DWORD 	dwSize;
    DWORD   dwIsLinked;         /* ����ͨ��״̬ 0������ 1���������� 2�������� 3-���ڽ��� */
    DWORD   dwStreamCpRate;     /* Stream copy rate, X kbits/second */
    char    cRes[64];		/* ���� */
}NET_DVR_MATRIX_DEC_CHAN_STATUS, *LPNET_DVR_MATRIX_DEC_CHAN_STATUS;

typedef struct 
{
	DWORD	dwSize;
	NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ����ͨ����Ϣ */
	DWORD	dwDecState;	/* 0-��̬���� 1��ѭ������ 2����ʱ��ط� 3�����ļ��ط� */
	NET_DVR_TIME StartTime;		/* ��ʱ��طſ�ʼʱ�� */
	NET_DVR_TIME StopTime;		/* ��ʱ��ط�ֹͣʱ�� */
	char    sFileName[128];		/* ���ļ��ط��ļ��� */
}NET_DVR_MATRIX_DEC_CHAN_INFO, *LPNET_DVR_MATRIX_DEC_CHAN_INFO;

//���ӵ�ͨ������ 2007-11-05
typedef struct 
{
	DWORD dwEnable;					/* �Ƿ����� 0���� 1������*/
	NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ��ѭ����ͨ����Ϣ */
}NET_DVR_MATRIX_DECCHANINFO, *LPNET_DVR_MATRIX_DECCHANINFO;

//2007-11-05 ����ÿ������ͨ��������
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwPoolTime;			/*��Ѳʱ�� */
	NET_DVR_MATRIX_DECCHANINFO struchanConInfo[MAX_CYCLE_CHAN];
}NET_DVR_MATRIX_LOOP_DECINFO, *LPNET_DVR_MATRIX_LOOP_DECINFO;

//2007-12-22
typedef struct 
{
	BYTE	baudrate; 	/* ������ */
	BYTE	databits;		/* ����λ */
	BYTE	stopbits;		/* ֹͣλ */
	BYTE	parity;		/* ��żУ��λ */
	BYTE	flowcontrol;	/* ���� */
	BYTE	res[3];
}TTY_CONFIG, *LPTTY_CONFIG;

typedef struct  
{					
	BYTE byTranChanEnable;	/* ��ǰ͸��ͨ���Ƿ�� 0���ر� 1���� */	
	/*
	 *	��·������������1��485���ڣ�1��232���ڶ�������Ϊ͸��ͨ��,�豸�ŷ������£�
	 *	0 RS485
	 *	1 RS232 Console
	 */
	BYTE	byLocalSerialDevice;			/* Local serial device */
	/*
	 *	Զ�̴��������������,һ��RS232��һ��RS485
	 *	1��ʾ232����
	 *	2��ʾ485����
	 */
	BYTE	byRemoteSerialDevice;			/* Remote output serial device */
	BYTE	res1;							/* ���� */
	char	sRemoteDevIP[16];				/* Remote Device IP */
	WORD	wRemoteDevPort;				/* Remote Net Communication Port */
	BYTE	res2[2];						/* ���� */
	TTY_CONFIG RemoteSerialDevCfg;
}NET_DVR_MATRIX_TRAN_CHAN_INFO, *LPNET_DVR_MATRIX_TRAN_CHAN_INFO;

typedef struct  
{
	DWORD dwSize;
	BYTE 	by232IsDualChan; /* ������·232͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	by485IsDualChan; /* ������·485͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	res[2];	/* ���� */
	NET_DVR_MATRIX_TRAN_CHAN_INFO struTranInfo[MAX_SERIAL_NUM];/*ͬʱ֧�ֽ���MAX_SERIAL_NUM��͸��ͨ��*/
}NET_DVR_MATRIX_TRAN_CHAN_CONFIG, *LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG;

//2007-12-24 Merry Christmas Eve...
typedef struct 
{
	DWORD	dwSize;
	char	sDVRIP[16];		/* DVR IP��ַ */	
	WORD	wDVRPort;			/* �˿ں� */	
	BYTE	byChannel;			/* ͨ���� */
	BYTE 	byReserve;
	BYTE	sUserName[NAME_LEN];		/* �û��� */
	BYTE	sPassword[PASSWD_LEN];		/* ���� */
	DWORD	dwPlayMode;   	/* 0�����ļ� 1����ʱ��*/        	
	NET_DVR_TIME StartTime;
	NET_DVR_TIME StopTime;
	char    sFileName[128];
}NET_DVR_MATRIX_DEC_REMOTE_PLAY, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY;

/* �ļ��������� */
#define NET_DVR_PLAYSTART		1//��ʼ����
#define NET_DVR_PLAYSTOP		2//ֹͣ����
#define NET_DVR_PLAYPAUSE		3//��ͣ����
#define NET_DVR_PLAYRESTART		4//�ָ�����
#define NET_DVR_PLAYFAST		5//���
#define NET_DVR_PLAYSLOW		6//����
#define NET_DVR_PLAYNORMAL		7//�����ٶ�
#define NET_DVR_PLAYSTARTAUDIO	9//������
#define NET_DVR_PLAYSTOPAUDIO	10//�ر�����
#define NET_DVR_PLAYSETPOS		12//�ı��ļ��طŵĽ���

typedef struct 
{
	DWORD	dwSize;
	DWORD	dwPlayCmd;		/* �������� ���ļ���������*/
	DWORD	dwCmdParam;		/* ����������� */
}NET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL;

typedef struct  
{
	DWORD dwSize;
	DWORD dwCurMediaFileLen;		/* ��ǰ���ŵ�ý���ļ����� */       
	DWORD dwCurMediaFilePosition;	/* ��ǰ�����ļ��Ĳ���λ�� */        
	DWORD dwCurMediaFileDuration;	/* ��ǰ�����ļ�����ʱ�� */        
	DWORD dwCurPlayTime;			/* ��ǰ�Ѿ����ŵ�ʱ�� */        
	DWORD dwCurMediaFIleFrames;		/* ��ǰ�����ļ�����֡�� */        
	DWORD dwCurDataType;			/* ��ǰ������������ͣ�19-�ļ�ͷ��20-�����ݣ� 21-���Ž�����־ */        
	BYTE res[72];	
}NET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS;

//2009-4-11 added by likui ��·������new
typedef struct tagNET_MATRIX_PASSIVEMODE
{
    WORD	wTransProtol;		//����Э�飬0-TCP, 1-UDP, 2-MCAST
    WORD	wPassivePort;		//UDP�˿�, TCPʱĬ��
    NET_DVR_IPADDR  struMcastIP;	//TCP,UDPʱ��Ч, MCASTʱΪ�ಥ��ַ
    BYTE	byStreamType;/* ���ݲ���ģʽ:REAL_TIME_STREAM(1)ʵʱ��,RECORD_STREAM(2)�ļ��� */
    BYTE	byRes[7];
}NET_DVR_MATRIX_PASSIVEMODE, *LPNET_DVR_MATRIX_PASSIVEMODE;

typedef struct tagDEV_CHAN_INFO
{
    NET_DVR_IPADDR struIP;				/* DVR IP��ַ */
    WORD 	wDVRPort;			 	/* �˿ں� */
    BYTE 	byChannel;				/* ͨ���� */
    BYTE	byTransProtocol;		/* ����Э������0-TCP��1-UDP */
    BYTE	byTransMode;			/* ��������ģʽ 0�������� 1��������*/
    BYTE	byRes[71];
    BYTE	sUserName[NAME_LEN];	/* ���������½�ʺ� */
    BYTE	sPassword[PASSWD_LEN];	/* ����������� */
} NET_DVR_DEV_CHAN_INFO,*LPNET_DVR_DEV_CHAN_INFO;

typedef struct tagMATRIX_TRAN_CHAN_INFO 
{					
	BYTE byTranChanEnable;	/* ��ǰ͸��ͨ���Ƿ�� 0���ر� 1���� */	
/*
	 *	��·������������1��485���ڣ�1��232���ڶ�������Ϊ͸��ͨ��,�豸�ŷ������£�
	 *	0 RS485
	 *	1 RS232 Console
	 */
	BYTE	byLocalSerialDevice;			/* Local serial device */
/*
	 *	Զ�̴��������������,һ��RS232��һ��RS485
	 *	1��ʾ232����
	 *	2��ʾ485����
	 */
	BYTE	byRemoteSerialDevice;			/* Remote output serial device */
	BYTE	byRes1;							/* ���� */		
    NET_DVR_IPADDR  struRemoteDevIP;/* Remote Device IP */
	WORD    wRemoteDevPort;				/* Remote Net Communication Port */
    BYTE    byIsEstablished;			/* ͸��ͨ�������ɹ���־��0-û�гɹ���1-�����ɹ� */
    BYTE	byRes2;						/* ���� */
	TTY_CONFIG RemoteSerialDevCfg;
	BYTE  	byUsername[NAME_LEN]; 		/* 32BYTES */
	BYTE   	byPassword[PASSWD_LEN]; 		/* 16BYTES */
	BYTE 	byRes3[16];
} NET_DVR_MATRIX_TRAN_CHAN_INFO_V30,*LPNET_DVR_MATRIX_TRAN_CHAN_INFO_V30;

typedef struct tagMATRIX_TRAN_CHAN_CONFIG 
{
	DWORD   dwSize;
	BYTE 	by232IsDualChan; /* ������·232͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	by485IsDualChan; /* ������·485͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	vyRes[2];	/* ���� */
	NET_DVR_MATRIX_TRAN_CHAN_INFO_V30 struTranInfo[MAX_SERIAL_NUM];/*ͬʱ֧�ֽ���MAX_SERIAL_NUM��͸��ͨ��*/
}NET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30,*LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30;

/*��ý���������������*/
typedef struct
{
    BYTE	byValid;			/*�Ƿ�������ý�������ȡ��,0��ʾ��Ч����0��ʾ��Ч*/
    BYTE	byRes1[3];
    NET_DVR_IPADDR  struDevIP;
    WORD	wDevPort;			/*��ý��������˿�*/    
    BYTE	byTransmitType;		/*����Э������ 0-TCP��1-UDP*/
    BYTE	byRes2[69];
}NET_DVR_STREAM_MEDIA_SERVER_CFG,*LPNET_DVR_STREAM_MEDIA_SERVER_CFG;

typedef struct
{
    DWORD								dwSize;
    NET_DVR_STREAM_MEDIA_SERVER_CFG	struStreamMediaSvrCfg;
    NET_DVR_DEV_CHAN_INFO			struDevChanInfo;
}NET_DVR_PU_STREAM_CFG,*LPNET_DVR_PU_STREAM_CFG;

typedef struct  
{
    DWORD								dwEnable;	/* �Ƿ����� 0���� 1������*/
    NET_DVR_STREAM_MEDIA_SERVER_CFG	streamMediaServerCfg;	
    NET_DVR_DEV_CHAN_INFO 		struDevChanInfo;		/* ��ѭ����ͨ����Ϣ */
}NET_DVR_MATRIX_CHAN_INFO_V30,*LPNET_DVR_CYC_SUR_CHAN_ELE_V30;

typedef struct  tagMATRIX_LOOP_DECINFO_V30
{
    DWORD							dwSize;
    DWORD							dwPoolTime;		/*��ѯ���*/
    NET_DVR_MATRIX_CHAN_INFO_V30	struchanConInfo[MAX_CYCLE_CHAN_V30];
    BYTE               				byRes[16];
} NET_DVR_MATRIX_LOOP_DECINFO_V30,*LPNET_DVR_MATRIX_LOOP_DECINFO_V30;


typedef struct tagDEC_MATRIX_CHAN_INFO_V30
{
    DWORD	dwSize;
    NET_DVR_STREAM_MEDIA_SERVER_CFG streamMediaServerCfg;	/*��ý�����������*/
    NET_DVR_DEV_CHAN_INFO 			  struDevChanInfo;		/* ����ͨ����Ϣ */
    DWORD	dwDecState;		/* 0-��̬���� 1��ѭ������ 2����ʱ��ط� 3�����ļ��ط� */
    NET_DVR_TIME StartTime;		/* ��ʱ��طſ�ʼʱ�� */
    NET_DVR_TIME StopTime;		/* ��ʱ��ط�ֹͣʱ�� */
    char    sFileName[128];		/* ���ļ��ط��ļ��� */
    DWORD   dwGetStreamMode;	/*ȡ��ģʽ:1-������2-����*/
    NET_DVR_MATRIX_PASSIVEMODE      struPassiveMode;
    BYTE	byRes[32];
}NET_DVR_MATRIX_DEC_CHAN_INFO_V30,*LPNET_DVR_MATRIX_DEC_CHAN_INFO_V30;

#define MAX_RESOLUTIONNUM    64 //֧�ֵ����ֱ���
typedef struct tagNET_DVR_MATRIX_ABILITY
{
    DWORD dwSize;
    BYTE  byDecNums;
    BYTE  byStartChan;
    BYTE  byVGANums;
    BYTE  byBNCNums;
    BYTE  byVGAWindowMode[8][12];     /*VGA֧�ֵĴ���ģʽ��VGA1�����ɻ�����*/
    BYTE  byBNCWindowMode[4];       	/*BNC֧�ֵĴ���ģʽ*/
    BYTE  byDspNums;   
	BYTE  byRes1[15];
	BYTE  bySupportResolution[MAX_RESOLUTIONNUM];//���������ö�ٶ���,һ���ֽڴ���һ���ֱ�����//��֧�֣�1��֧�֣�0����֧��
	BYTE  byRes2[88];
}NET_DVR_MATRIX_ABILITY, *LPNET_DVR_MATRIX_ABILITY;/* Video Output Info of decoder */
//�ϴ�logo�ṹ
typedef struct tagNET_DVR_DISP_LOGOCFG
{
    DWORD		dwCorordinateX;	//ͼƬ��ʾ����X����
    DWORD		dwCorordinateY;	//ͼƬ��ʾ����Y����
    BYTE        byRes1[8];
    BYTE        byFlash;  //�Ƿ���˸1-��˸��0-����˸
    BYTE        byTranslucent; //�Ƿ��͸��1-��͸����0-����͸��
    BYTE		byRes2[6];				//����
    DWORD		dwLogoSize;//LOGO��С������BMP���ļ�ͷ
}NET_DVR_DISP_LOGOCFG,*LPNET_DVR_DISP_LOGOCFG;

/*��������*/
#define NET_DVR_ENCODER_UNKOWN 0 /*δ֪�����ʽ*/
#define NET_DVR_ENCODER_H264   1 /*HIK 264*/
#define NET_DVR_ENCODER_S264  2 /*Standard H264*/
#define NET_DVR_ENCODER_MPEG4  3 /*MPEG4*/
#define NET_DVR_ORIGINALSTREAM    4 //ԭʼ��(��Ƶ�ۺ�ƽ̨������ϵͳ��)
/* �����ʽ */
#define NET_DVR_STREAM_TYPE_UNKOWN   0     /*δ֪�����ʽ*/
#define NET_DVR_STREAM_TYPE_HIKPRIVT   1     /*�����Զ�������ʽ*/
#define NET_DVR_STREAM_TYPE_TS    7   /* TS��� */
#define NET_DVR_STREAM_TYPE_PS   8   /* PS��� */
#define NET_DVR_STREAM_TYPE_RTP  9    /* RTP��� */
#define NET_DVR_STREAM_TYPE_ORIGIN    10 //δ���(��Ƶ�ۺ�ƽ̨������ϵͳ��)

/*����ͨ��״̬*/
typedef struct
{
    BYTE  byDecodeStatus; /*��ǰ״̬:0:δ������1����������*/
    BYTE  byStreamType;    /*��������*/
    BYTE  byPacketType;     /*�����ʽ*/
    BYTE  byRecvBufUsage; /*���ջ���ʹ����*/
    BYTE  byDecBufUsage; /*���뻺��ʹ����*/
    BYTE  byFpsDecV; /*��Ƶ����֡��*/
    BYTE  byFpsDecA; /*��Ƶ����֡��*/
    BYTE  byCpuLoad;     /*DSP CPUʹ����*/ 
    BYTE  byRes1[4];    
    DWORD dwDecodedV; /*�������Ƶ֡*/
    DWORD dwDecodedA; /*�������Ƶ֡*/
    WORD wImgW; /*��������ǰ��ͼ���С,��*/
    WORD wImgH; //��
    BYTE byVideoFormat; /*��Ƶ��ʽ:0-NON,NTSC--1,PAL--2*/
    BYTE byRes2[27];
}NET_DVR_MATRIX_CHAN_STATUS, *LPNET_DVR_MATRIX_CHAN_STATUS;

/*��ʾͨ��״̬*/
#define NET_DVR_MAX_DISPREGION 16         /*ÿ����ʾͨ����������ʾ�Ĵ���*/
//�ֱ���
typedef enum
{
	/*VGA*/
    VGA_NOT_AVALIABLE,
    VGA_THS8200_MODE_SVGA_60HZ,    //(800*600)
    VGA_THS8200_MODE_SVGA_75HZ,    //(800*600)
    VGA_THS8200_MODE_XGA_60HZ,     //(1024*768)
    VGA_THS8200_MODE_XGA_70HZ,     //(1024*768)
    VGA_THS8200_MODE_SXGA_60HZ,    //(1280*1024)
    VGA_THS8200_MODE_720P_60HZ,    //(1280*720)
    VGA_THS8200_MODE_1080I_60HZ,   //(1920*1080)
    VGA_THS8200_MODE_1080P_30HZ,   //(1920*1080)
    VGA_THS8200_MODE_UXGA_30HZ ,    //(1600*1200)
	/*HDMI*/	
	HDMI_SII9134_MODE_XGA_60HZ,	   //(1024*768)
	HDMI_SII9134_MODE_SXGA_60HZ,   //(1280*1024)
	HDMI_SII9134_MODE_SXGA2_60HZ,  //(1280*960)
	HDMI_SII9134_MODE_720P_60HZ,   //(1280*720)	
	HDMI_SII9134_MODE_720P_50HZ,   //(1280*720)		
	HDMI_SII9134_MODE_1080I_60HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080I_50HZ,  //(1920*1080)	
	HDMI_SII9134_MODE_1080P_25HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080P_30HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080P_50HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080P_60HZ,  //(1920*1080)
	HDMI_SII9134_MODE_UXGA_60HZ,   //(1600*1200)
	/*DVI*/	
	DVI_SII9134_MODE_XGA_60HZ,	   //(1024*768)
	DVI_SII9134_MODE_SXGA_60HZ,	   //(1280*1024)
	DVI_SII9134_MODE_SXGA2_60HZ,   //(1280*960)
	DVI_SII9134_MODE_720P_60HZ,	   //(1280*720)	
	DVI_SII9134_MODE_720P_50HZ,    //(1280*720)		
	DVI_SII9134_MODE_1080I_60HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080I_50HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_25HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_30HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_50HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_60HZ,   //(1920*1080)
	DVI_SII9134_MODE_UXGA_60HZ     //(1600*1200)
}VGA_MODE;

//��֡�ʶ���
#define           LOW_DEC_FPS_1_2                51
#define           LOW_DEC_FPS_1_4                52
#define           LOW_DEC_FPS_1_8                53
#define           LOW_DEC_FPS_1_16               54

/*��Ƶ��ʽ��׼*/
typedef enum
{
    VS_NON = 0,
    VS_NTSC = 1,
    VS_PAL = 2
}VIDEO_STANDARD;

typedef struct tagNET_DVR_VGA_DISP_CHAN_CFG
{        
    DWORD	dwSize; 
    BYTE	byAudio;			/*��Ƶ�Ƿ���,0-��1-��*/
    BYTE    byAudioWindowIdx;      /*��Ƶ�����Ӵ���*/
    BYTE 	byVgaResolution;      /*VGA�ķֱ���*/
    BYTE	byVedioFormat;         /*1:NTSC,2:PAL,0-NULL*/
    DWORD	dwWindowMode;		/*����ģʽ,����������ȡ,Ŀǰ֧��1,2,4,9,16*/       
    BYTE	byJoinDecChan[MAX_WINDOWS];/*�����Ӵ��ڹ����Ľ���ͨ��*/
    BYTE	byEnlargeStatus;          /*�Ƿ��ڷŴ�״̬��0�����Ŵ�1���Ŵ�*/
    BYTE    byEnlargeSubWindowIndex;//�Ŵ���Ӵ��ں�
    BYTE	byRes[18];
}NET_DVR_VGA_DISP_CHAN_CFG,*LPNET_DVR_VGA_DISP_CHAN_CFG;


/*��ʾͨ��״̬*/
#define NET_DVR_MAX_DISPREGION 16 /*ÿ����ʾͨ����������ʾ�Ĵ���*/
typedef struct
{
    BYTE  byDispStatus;          /*��ʾ״̬��0��δ��ʾ��1��������ʾ*/
    BYTE  byBVGA;                /*VGA/BNC*/
    BYTE  byVideoFormat;        /*��Ƶ��ʽ:1:NTSC,2:PAL,0-NON*/
    BYTE  byWindowMode;        /*��ǰ����ģʽ*/
    BYTE  byJoinDecChan[MAX_WINDOWS];        /*�����Ӵ��ڹ����Ľ���ͨ��*/
    BYTE  byFpsDisp[NET_DVR_MAX_DISPREGION]; /*ÿ���ӻ������ʾ֡��*/
    BYTE  byRes2[32];
}NET_DVR_DISP_CHAN_STATUS, *LPNET_DVR_DISP_CHAN_STATUS;

#define MAX_DECODECHANNUM   32//��·������������ͨ����
#define MAX_DISPCHANNUM   24//��·�����������ʾͨ����

/*�������豸״̬*/
typedef struct tagNET_DVR__DECODER_WORK_STATUS
{
    DWORD dwSize;
    NET_DVR_MATRIX_CHAN_STATUS struDecChanStatus[MAX_DECODECHANNUM]; /*����ͨ��״̬*/
    NET_DVR_DISP_CHAN_STATUS   struDispChanStatus[MAX_DISPCHANNUM];  /*��ʾͨ��״̬*/
    BYTE byAlarmInStatus[MAX_ANALOG_ALARMIN];         /*��������״̬*/
    BYTE byAalarmOutStatus[MAX_ANALOG_ALARMOUT];       /*�������״̬*/
    BYTE byAudioInChanStatus;          /*�����Խ�״̬*/
    BYTE byRes[127];
}NET_DVR_DECODER_WORK_STATUS,*LPNET_DVR_DECODER_WORK_STATUS;

//2009-12-1 ���ӱ������벥�ſ���
typedef struct tagNET_DVR_PASSIVEDECODE_CONTROL
{
    DWORD	dwSize;
    DWORD	dwPlayCmd;		/* �������� ���ļ���������*/
    DWORD	dwCmdParam;		/* ����������� */
    BYTE	byRes[16];//Reverse
}NET_DVR_PASSIVEDECODE_CONTROL,*LPNET_DVR_PASSIVEDECODE_CONTROL;

#define		PASSIVE_DEC_PAUSE			1	/*����������ͣ(���ļ�����Ч)*/
#define		PASSIVE_DEC_RESUME			2	/*�ָ���������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_FAST          	3   /*���ٱ�������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_SLOW			4   /*���ٱ�������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_NORMAL      	5   /*������������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_ONEBYONE      	6  /*�������뵥֡����(����)*/
#define 	PASSIVE_DEC_AUDIO_ON 		7   /*��Ƶ����*/
#define 	PASSIVE_DEC_AUDIO_OFF		8  	 /*��Ƶ�ر�*/
#define		PASSIVE_DEC_RESETBUFFER	    9    /*��ջ�����(���ļ�����Ч)*/
//2009-12-16 ���ӿ��ƽ���������ͨ������
typedef struct tagNET_DVR_MATRIX_DECCHAN_CONTROL
{        
	DWORD	dwSize;
	BYTE	byDecChanScaleStatus;/*����ͨ����ʾ���ſ���,1��ʾ������ʾ��0��ʾ��ʵ��ʾ*/
	BYTE	byRes[67];//Reverse
}NET_DVR_MATRIX_DECCHAN_CONTROL,*LPNET_DVR_MATRIX_DECCHAN_CONTROL;
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanCfg(LONG lUserID, DWORD dwDecChan, LPNET_DVR_MATRIX_DECCHAN_CONTROL lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDecChanCfg(LONG lUserID, DWORD dwDecChan, LPNET_DVR_MATRIX_DECCHAN_CONTROL lpInter);
/************************************��·������(end)***************************************/
//2009-8-19 ��Ƶ�ۺ�ƽ̨�ӿں���
/************************************��Ƶ�ۺ�ƽ̨(begin)***************************************/
#define MAX_SUBSYSTEM_NUM	80   //һ������ϵͳ�������ϵͳ����
#define MAX_SERIALLEN		36  //������кų���
#define MAX_LOOPPLANNUM		16//���ƻ��л���
#define DECODE_TIMESEGMENT 4//�ƻ�����ÿ��ʱ�����
typedef struct tagNET_DVR_SUBSYSTEMINFO
{
    BYTE		bySubSystemType;//��ϵͳ���ͣ�1-��������ϵͳ��2-��������ϵͳ��0-NULL���˲���ֻ�ܻ�ȡ��
    BYTE		byChan;//��ϵͳͨ�������˲���ֻ�ܻ�ȡ��
    BYTE		byLoginType;//ע�����ͣ�1-ֱ����2-DNS��3-������
    BYTE		byRes1[5];
    NET_DVR_IPADDR   struSubSystemIP;		/*IP��ַ�����޸ģ�*/
    WORD		wSubSystemPort;        //��ϵͳ�˿ںţ����޸ģ�
    BYTE		byRes2[6];
    NET_DVR_IPADDR  struSubSystemIPMask;//��������
    NET_DVR_IPADDR	struGatewayIpAddr;	/* ���ص�ַ*/   
    BYTE		sUserName[NAME_LEN];	/* �û��� ���˲���ֻ�ܻ�ȡ��*/
    BYTE		sPassword[PASSWD_LEN];	/*���루�˲���ֻ�ܻ�ȡ��*/
    char		sDomainName[MAX_DOMAIN_NAME];//����(���޸�)
    char 		sDnsAddress[MAX_DOMAIN_NAME];/*DNS������IP��ַ*/
    BYTE		sSerialNumber[SERIALNO_LEN];//���кţ��˲���ֻ�ܻ�ȡ��
}NET_DVR_SUBSYSTEMINFO, *LPNET_DVR_SUBSYSTEMINFO;

typedef struct tagNET_DVR_ALLSUBSYSTEMINFO
{
    DWORD dwSize;
    NET_DVR_SUBSYSTEMINFO struSubSystemInfo[MAX_SUBSYSTEM_NUM];
    BYTE byRes[8];
}NET_DVR_ALLSUBSYSTEMINFO, *LPNET_DVR_ALLSUBSYSTEMINFO;

typedef struct  tagNET_DVR_LOOPPLAN_SUBCFG
{
    DWORD 						    dwSize;
    DWORD							dwPoolTime;		/*��ѯ�������λ����*/      
    NET_DVR_MATRIX_CHAN_INFO_V30 struChanConInfo[MAX_CYCLE_CHAN_V30];
    BYTE               				byRes[16];
}NET_DVR_LOOPPLAN_SUBCFG,*LPNET_DVR_LOOPPLAN_SUBCFG;

typedef struct tagNET_DVR_ALARMMODECFG
{
    DWORD 	dwSize;
    BYTE	byAlarmMode;//�����������ͣ�1-��ѯ��2-����		
    WORD	wLoopTime;//��ѯʱ��, ��λ����			
    BYTE    byRes[9];
}NET_DVR_ALARMMODECFG,*LPNET_DVR_ALARMMODECFG;

typedef struct  tagNET_DVR_CODESPLITTERINFO
{
    DWORD			dwSize;
    NET_DVR_IPADDR   struIP;		/*�����IP��ַ*/
    WORD		wPort;        			//������˿ں�
    BYTE		byRes1[6];
    BYTE		sUserName[NAME_LEN];	/* �û��� */
    BYTE		sPassword[PASSWD_LEN];	/*���� */
    BYTE        byChan;//�����485��
    BYTE		by485Port;//485�ڵ�ַ
    BYTE		byRes2[14];
} NET_DVR_CODESPLITTERINFO, *LPNET_DVR_CODESPLITTERINFO;

typedef struct tagNET_DVR_ASSOCIATECFG
{
    BYTE	byAssociateType;//�������ͣ�1-����
    WORD	wAlarmDelay;//������ʱ��0��5�룻1��10�룻2��30�룻3��1���ӣ�4��2���ӣ�5��5���ӣ�6��10���ӣ�
    BYTE	byAlarmNum;//�����ţ������ֵ��Ӧ�ø�����ͬ�ı�������ͬ��ֵ
    BYTE	byRes[8];
} NET_DVR_ASSOCIATECFG,*LPNET_DVR_ASSOCIATECFG;

typedef struct tagNET_DVR_DYNAMICDECODE
{
    DWORD						    dwSize;
    NET_DVR_ASSOCIATECFG   		struAssociateCfg;//������̬��������ṹ
    NET_DVR_PU_STREAM_CFG		struPuStreamCfg;//��̬����ṹ
    BYTE							byRes[8];
}NET_DVR_DYNAMICDECODE,*LPNET_DVR_DYNAMICDECODE;

typedef struct  tagNET_DVR_DECODESCHED
{
	NET_DVR_SCHEDTIME  struSchedTime;//
    BYTE  byDecodeType;/*0-�ޣ�1-��ѯ���룬2-��̬����*/
	BYTE  byLoopGroup;//��ѯ���
	BYTE  byRes[6];
	NET_DVR_PU_STREAM_CFG struDynamicDec;//��̬����
} NET_DVR_DECODESCHED, *LPNET_DVR_DECODESCHED;

typedef struct tagNET_DVR_PLANDECODE
{
	DWORD dwSize;
	NET_DVR_DECODESCHED struDecodeSched[MAX_DAYS][DECODE_TIMESEGMENT];//��һ��Ϊ��ʼ����9000һ��
	BYTE byRes[8];
} NET_DVR_PLANDECODE,*LPNET_DVR_PLANDECODE;

//2009-8-19 ��Ƶ�ۺ�ƽ̨�ӿں���
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSubSystemInfo(LONG lUserID, LPNET_DVR_ALLSUBSYSTEMINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetSubSystemInfo(LONG lUserID, LPNET_DVR_ALLSUBSYSTEMINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopPlanArray(LONG lUserID, DWORD dwArrayNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopPlanArray(LONG lUserID, DWORD dwArrayNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetAlarmShowMode(LONG lUserID, LPNET_DVR_ALARMMODECFG lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetAlarmShowMode(LONG lUserID, LPNET_DVR_ALARMMODECFG lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetCodeSplitter(LONG lUserID, DWORD dwCodeChan, LPNET_DVR_CODESPLITTERINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetCodeSplitter(LONG lUserID, DWORD dwCodeChan, LPNET_DVR_CODESPLITTERINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamicAssociateDecode(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_DYNAMICDECODE lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAlarmTurn(LONG lUserID, DWORD dwDecChanNum, DWORD dwTurnParam);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAlarmShowControl(LONG lUserID, DWORD dwDecChanNum, DWORD dwShowMode);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetPlanDecode(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PLANDECODE lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetPlanDecode(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PLANDECODE lpInter);
//end
/************************************��Ƶ�ۺ�ƽ̨(end)***************************************/
typedef struct 
{	/* 12 bytes */
	DWORD	dwSize;
	char	sUserName[32];
	char 	sPassWord[32];
	char 	sFromName[32];			/* Sender *///�ַ����еĵ�һ���ַ������һ���ַ�������"@",�����ַ�����Ҫ��"@"�ַ�
	char 	sFromAddr[48];			/* Sender address */
	char 	sToName1[32];			/* Receiver1 */
	char 	sToName2[32];			/* Receiver2 */
	char 	sToAddr1[48];			/* Receiver address1 */
	char 	sToAddr2[48];			/* Receiver address2 */
	char	sEmailServer[32];		/* Email server address */
	BYTE	byServerType;			/* Email server type: 0-SMTP, 1-POP, 2-IMTP��*/
	BYTE	byUseAuthen;			/* Email server authentication method: 1-enable, 0-disable */
	BYTE	byAttachment;			/* enable attachment */
	BYTE	byMailinterval;			/* mail interval 0-2s, 1-3s, 2-4s. 3-5s*/
} NET_DVR_EMAILCFG, *LPNET_DVR_EMAILCFG;

typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO_EX  struLowCompression;	//��ʱ¼��
	NET_DVR_COMPRESSION_INFO_EX  struEventCompression;	//�¼�����¼��
}NET_DVR_COMPRESSIONCFG_NEW, *LPNET_DVR_COMPRESSIONCFG_NEW;

//���λ����Ϣ
typedef struct
{
    WORD wAction;//��ȡʱ���ֶ���Ч
    WORD wPanPos;//ˮƽ����
    WORD wTiltPos;//��ֱ����
    WORD wZoomPos;//�䱶����
}NET_DVR_PTZPOS, *LPNET_DVR_PTZPOS;

//�����Χ��Ϣ
typedef struct
{
    WORD wPanPosMin;//ˮƽ����min
    WORD wPanPosMax;//ˮƽ����max
    WORD wTiltPosMin;//��ֱ����min
    WORD wTiltPosMax;//��ֱ����max
    WORD wZoomPosMin;//�䱶����min
    WORD wZoomPosMax;//�䱶����max
}NET_DVR_PTZSCOPE, *LPNET_DVR_PTZSCOPE;

//rtsp���� ipcameraר��
typedef struct
{
    DWORD dwSize;         //����
    WORD  wPort;          //rtsp�����������˿�
    BYTE  byReserve[54];  //Ԥ��
}NET_DVR_RTSPCFG, *LPNET_DVR_RTSPCFG;


/********************************�ӿڲ����ṹ(begin)*********************************/

//NET_DVR_Login()�����ṹ
typedef struct
{
	BYTE sSerialNumber[SERIALNO_LEN];   //���к�
	BYTE byAlarmInPortNum;		        //DVR�����������
	BYTE byAlarmOutPortNum;		        //DVR�����������
	BYTE byDiskNum;				        //DVRӲ�̸���
	BYTE byDVRType;				        //DVR����, 1:DVR 2:ATM DVR 3:DVS ......
	BYTE byChanNum;				        //DVR ͨ������
	BYTE byStartChan;			        //��ʼͨ����,����DVS-1,DVR - 1
}NET_DVR_DEVICEINFO, *LPNET_DVR_DEVICEINFO;

//NET_DVR_Login_V30()�����ṹ
typedef struct
{
    BYTE sSerialNumber[SERIALNO_LEN];  //���к�
    BYTE byAlarmInPortNum;		        //�����������
    BYTE byAlarmOutPortNum;		        //�����������
    BYTE byDiskNum;				    //Ӳ�̸���
    BYTE byDVRType;				    //�豸����, 1:DVR 2:ATM DVR 3:DVS ......
    BYTE byChanNum;				    //ģ��ͨ������
    BYTE byStartChan;			        //��ʼͨ����,����DVS-1,DVR - 1
    BYTE byAudioChanNum;                //����ͨ����
    BYTE byIPChanNum;					//�������ͨ������  
	BYTE byRes1[24];					//����
}NET_DVR_DEVICEINFO_V30, *LPNET_DVR_DEVICEINFO_V30;

//sdk���绷��ö�ٱ���������Զ������
typedef enum _SDK_NET_ENV
{
    LOCAL_AREA_NETWORK = 0,
        WIDE_AREA_NETWORK
}SDK_NETWORK_ENVIRONMENT;

//��ʾģʽ
typedef enum
{
	NORMALMODE = 0,
	OVERLAYMODE
}DISPLAY_MODE;

//����ģʽ
typedef enum
{
	PTOPTCPMODE = 0,
	PTOPUDPMODE,
	MULTIMODE,
	RTPMODE,
	RESERVEDMODE
}SEND_MODE;

//ץͼģʽ
typedef enum 
{
	BMP_MODE = 0,		//BMPģʽ
	JPEG_MODE = 1		//JPEGģʽ 
}CAPTURE_MODE;

//ʵʱ����ģʽ
typedef enum
{
	MONOPOLIZE_MODE = 1,//��ռģʽ
	SHARE_MODE = 2		//����ģʽ
}REALSOUND_MODE;

//�����Ԥ������
typedef struct
{
	LONG lChannel;//ͨ����
	LONG lLinkMode;//���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ�ӣ�0��30λ��ʾ�������ӷ�ʽ: 0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��4-����Ƶ�ֿ�(TCP)
	HWND hPlayWnd;//���Ŵ��ڵľ��,ΪNULL��ʾ������ͼ��
	char* sMultiCastIP;//�ಥ���ַ
}NET_DVR_CLIENTINFO, *LPNET_DVR_CLIENTINFO;

//SDK״̬��Ϣ(9000����)
typedef struct 
{
    DWORD dwTotalLoginNum;		//��ǰlogin�û���
    DWORD dwTotalRealPlayNum;	//��ǰrealplay·��
    DWORD dwTotalPlayBackNum;	//��ǰ�طŻ�����·��
    DWORD dwTotalAlarmChanNum;	//��ǰ��������ͨ��·��
    DWORD dwTotalFormatNum;		//��ǰӲ�̸�ʽ��·��
    DWORD dwTotalFileSearchNum;	//��ǰ��־���ļ�����·��
    DWORD dwTotalLogSearchNum;	//��ǰ��־���ļ�����·��
    DWORD dwTotalSerialNum;	    //��ǰ͸��ͨ��·��
    DWORD dwTotalUpgradeNum;	//��ǰ����·��
    DWORD dwTotalVoiceComNum;	//��ǰ����ת��·��
    DWORD dwTotalBroadCastNum;	//��ǰ�����㲥·��
    DWORD dwRes[10];
}NET_DVR_SDKSTATE, *LPNET_DVR_SDKSTATE;

//SDK����֧����Ϣ(9000����)
typedef struct 
{
    DWORD dwMaxLoginNum;		//���login�û��� MAX_LOGIN_USERS
    DWORD dwMaxRealPlayNum;		//���realplay·�� WATCH_NUM
    DWORD dwMaxPlayBackNum;		//���طŻ�����·�� WATCH_NUM
    DWORD dwMaxAlarmChanNum;	//���������ͨ��·�� ALARM_NUM
    DWORD dwMaxFormatNum;		//���Ӳ�̸�ʽ��·�� SERVER_NUM
    DWORD dwMaxFileSearchNum;	//����ļ�����·�� SERVER_NUM
    DWORD dwMaxLogSearchNum;	//�����־����·�� SERVER_NUM
    DWORD dwMaxSerialNum;	    //���͸��ͨ��·�� SERVER_NUM
    DWORD dwMaxUpgradeNum;	    //�������·�� SERVER_NUM
    DWORD dwMaxVoiceComNum;		//�������ת��·�� SERVER_NUM
    DWORD dwMaxBroadCastNum;	//��������㲥·�� MAX_CASTNUM
    DWORD dwRes[10];
}NET_DVR_SDKABL, *LPNET_DVR_SDKABL;

//�����豸��Ϣ
typedef struct
{   
    BYTE byUserIDValid;                 /* userid�Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE bySerialValid;                 /* ���к��Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byVersionValid;                /* �汾���Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byDeviceNameValid;             /* �豸�����Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byMacAddrValid;                /* MAC��ַ�Ƿ���Ч 0-��Ч��1-��Ч */    
    BYTE byLinkPortValid;               /* login�˿��Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byDeviceIPValid;               /* �豸IP�Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE bySocketIPValid;               /* socket ip�Ƿ���Ч 0-��Ч��1-��Ч */
    LONG lUserID;                       /* NET_DVR_Login()����ֵ, ����ʱ��Ч */
    BYTE sSerialNumber[SERIALNO_LEN];	/* ���к� */
    DWORD dwDeviceVersion;			    /* �汾��Ϣ ��16λ��ʾ���汾����16λ��ʾ�ΰ汾*/
    char sDeviceName[NAME_LEN];		    /* �豸���� */
    BYTE byMacAddr[MACADDR_LEN];		/* MAC��ַ */    
    WORD wLinkPort;                     /* link port */
    char sDeviceIP[128];    			/* IP��ַ */
    char sSocketIP[128];    			/* ���������ϴ�ʱ��socket IP��ַ */
    BYTE byIpProtocol;                  /* IpЭ�� 0-IPV4, 1-IPV6 */
    BYTE byRes2[11];
}NET_DVR_ALARMER, *LPNET_DVR_ALARMER;

//Ӳ������ʾ�������(�ӽṹ)
typedef struct
{
	long bToScreen;
	long bToVideoOut;
	long nLeft;
	long nTop;
	long nWidth;
	long nHeight;
	long nReserved;
}NET_DVR_DISPLAY_PARA, *LPNET_DVR_DISPLAY_PARA;

//Ӳ����Ԥ������
typedef struct
{
	LONG lChannel;//ͨ����
	LONG lLinkMode; //���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ�ӣ�0��30λ��ʾ�������ӷ�ʽ:0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��4-�绰�ߣ�5��128k�����6��256k�����7��384k�����8��512k�����
	char* sMultiCastIP;
	NET_DVR_DISPLAY_PARA struDisplayPara;
}NET_DVR_CARDINFO, *LPNET_DVR_CARDINFO;

//¼���ļ�����
typedef struct 
{
	char sFileName[100];//�ļ���
	NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
	NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
	DWORD dwFileSize;//�ļ��Ĵ�С
}NET_DVR_FIND_DATA, *LPNET_DVR_FIND_DATA;

//¼���ļ�����(9000)
typedef struct 
{
    char sFileName[100];//�ļ���
    NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
    NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
    DWORD dwFileSize;//�ļ��Ĵ�С
    char sCardNum[32];
    BYTE byLocked;//9000�豸֧��,1��ʾ���ļ��Ѿ�������,0��ʾ�������ļ�
    BYTE byRes[3];
}NET_DVR_FINDDATA_V30, *LPNET_DVR_FINDDATA_V30;

//¼���ļ�����(������)
typedef struct 
{
	char sFileName[100];//�ļ���
	NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
	NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
	DWORD dwFileSize;//�ļ��Ĵ�С
	char sCardNum[32];
}NET_DVR_FINDDATA_CARD, *LPNET_DVR_FINDDATA_CARD;


//¼���ļ����������ṹ
typedef struct 
{
    LONG lChannel;//ͨ����
    DWORD dwFileType;//¼���ļ�����0xff��ȫ����0����ʱ¼��,1-�ƶ���� ��2������������
                    //3-����|�ƶ���� 4-����&�ƶ���� 5-����� 6-�ֶ�¼��
    DWORD dwIsLocked;//�Ƿ����� 0-�����ļ�,1-�����ļ�, 0xff��ʾ�����ļ�
    DWORD dwUseCardNo;//�Ƿ�ʹ�ÿ���
    BYTE sCardNumber[32];//����
    NET_DVR_TIME struStartTime;//��ʼʱ��
    NET_DVR_TIME struStopTime;//����ʱ��
}NET_DVR_FILECOND, *LPNET_DVR_FILECOND;

//��̨����ѡ��Ŵ���С(HIK ����ר��)
typedef struct 
{
	int xTop;     //������ʼ���x����
	int yTop;     //����������y����
	int xBottom;  //����������x����
	int yBottom;  //����������y����
	int bCounter; //����
}NET_DVR_POINT_FRAME, *LPNET_DVR_POINT_FRAME;

//�����Խ�����
typedef struct tagNET_DVR_COMPRESSION_AUDIO
{
	BYTE  byAudioEncType;   //��Ƶ�������� 0-G722; 1-G711_MU
	BYTE  byres[7];//���ﱣ����Ƶ��ѹ������ 
}NET_DVR_COMPRESSION_AUDIO, *LPNET_DVR_COMPRESSION_AUDIO;

/********************************�ӿڲ����ṹ(end)*********************************/


/********************************SDK�ӿں�������*********************************/
NET_DVR_API BOOL __stdcall NET_DVR_Init();
NET_DVR_API BOOL __stdcall NET_DVR_Cleanup();
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessage(UINT nMessage,HWND hWnd);
//NET_DVR_SetDVRMessage����չ
NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT nMessage, HWND hWnd, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);

NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack(BOOL (CALLBACK *fMessCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen));
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_EX(BOOL (CALLBACK *fMessCallBack_EX)(LONG lCommand,LONG lUserID,char *pBuf,DWORD dwBufLen));
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_NEW(BOOL (CALLBACK *fMessCallBack_NEW)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, WORD dwLinkDVRPort));
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack(BOOL (CALLBACK *fMessageCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, DWORD dwUser), DWORD dwUser);
typedef void (CALLBACK *MSGCallBack)(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack_V30(MSGCallBack fMessageCallBack, void* pUser);

NET_DVR_API BOOL __stdcall NET_DVR_SetConnectTime(DWORD dwWaitTime = 5000, DWORD dwTryTimes = 3);
NET_DVR_API BOOL __stdcall NET_DVR_SetReconnect(DWORD dwInterval = 30000, BOOL bEnableRecon = TRUE);
NET_DVR_API DWORD __stdcall NET_DVR_GetSDKVersion();
NET_DVR_API DWORD __stdcall NET_DVR_GetSDKBuildVersion();
NET_DVR_API int __stdcall NET_DVR_IsSupport();
NET_DVR_API BOOL __stdcall NET_DVR_StartListen(char *sLocalIP,WORD wLocalPort);
NET_DVR_API BOOL __stdcall NET_DVR_StopListen();

NET_DVR_API LONG __stdcall NET_DVR_StartListen_V30(char *sLocalIP, WORD wLocalPort, MSGCallBack DataCallback, void* pUserData = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_StopListen_V30(LONG lListenHandle);
NET_DVR_API LONG __stdcall NET_DVR_Login(char *sDVRIP,WORD wDVRPort,char *sUserName,char *sPassword,LPNET_DVR_DEVICEINFO lpDeviceInfo);
NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_Logout_V30(LONG lUserID);
NET_DVR_API DWORD __stdcall NET_DVR_GetLastError();
NET_DVR_API char* __stdcall NET_DVR_GetErrorMsg(LONG *pErrorNo = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_SetShowMode(DWORD dwShowType,COLORREF colorKey);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRIPByResolveSvr(char *sServerIP, WORD wServerPort, BYTE *sDVRName,WORD wDVRNameLen,BYTE *sDVRSerialNumber,WORD wDVRSerialLen,char* sGetIP);
NET_DVR_API BOOL  __stdcall NET_DVR_GetDVRIPByResolveSvr_EX(char *sServerIP, WORD wServerPort, unsigned char *sDVRName, WORD wDVRNameLen, BYTE *sDVRSerialNumber, WORD wDVRSerialLen, char* sGetIP, DWORD *dwPort);

//Ԥ����ؽӿ�
NET_DVR_API LONG __stdcall NET_DVR_RealPlay(LONG lUserID,LPNET_DVR_CLIENTINFO lpClientInfo);
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
NET_DVR_API BOOL __stdcall NET_DVR_StopRealPlay(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_RigisterDrawFun(LONG lRealHandle,void (CALLBACK* fDrawFun)(LONG lRealHandle,HDC hDc,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPlayerBufNumber(LONG lRealHandle,DWORD dwBufNum);
NET_DVR_API BOOL __stdcall NET_DVR_ThrowBFrame(LONG lRealHandle,DWORD dwNum);
NET_DVR_API BOOL __stdcall NET_DVR_SetAudioMode(DWORD dwMode);
NET_DVR_API BOOL __stdcall NET_DVR_OpenSound(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSound();
NET_DVR_API BOOL __stdcall NET_DVR_OpenSoundShare(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSoundShare(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_Volume(LONG lRealHandle,WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData(LONG lRealHandle,char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopSaveRealData(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetRealDataCallBack(LONG lRealHandle,void(CALLBACK *fRealDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetStandardDataCallBack(LONG lRealHandle,void(CALLBACK *fStdDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_CapturePicture(LONG lRealHandle,char *sPicFileName);//bmp

//��̬����I֡
NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//������
NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//������

//��̨������ؽӿ�
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_Other(LONG lUserID,LONG lChannel,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_Other(LONG lUserID,LONG lChannel,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_EX(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_EX(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_EX(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_EX(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack(LONG lRealHandle, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_Other(LONG lUserID, LONG lChannel, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_EX(LONG lRealHandle, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_Other(LONG lUserID, LONG lChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_EX(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_GetPTZCruise(LONG lUserID,LONG lChannel,LONG lCruiseRoute, LPNET_DVR_CRUISE_RET lpCruiseRet);
NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack(LONG lRealHandle,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack_Other(LONG lUserID,LONG lChannel,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack_EX(LONG lRealHandle,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);

//�ļ�������ط�
NET_DVR_API LONG __stdcall NET_DVR_FindFile(LONG lUserID,LONG lChannel,DWORD dwFileType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API LONG __stdcall NET_DVR_FindNextFile(LONG lFindHandle,LPNET_DVR_FIND_DATA lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindClose(LONG lFindHandle);
NET_DVR_API LONG __stdcall NET_DVR_FindNextFile_V30(LONG lFindHandle, LPNET_DVR_FINDDATA_V30 lpFindData);
NET_DVR_API LONG __stdcall NET_DVR_FindFile_V30(LONG lUserID, LPNET_DVR_FILECOND pFindCond);
NET_DVR_API BOOL __stdcall NET_DVR_FindClose_V30(LONG lFindHandle);
//2007-04-16���Ӳ�ѯ��������ŵ��ļ�����
NET_DVR_API LONG __stdcall NET_DVR_FindNextFile_Card(LONG lFindHandle, LPNET_DVR_FINDDATA_CARD lpFindData);
NET_DVR_API LONG __stdcall NET_DVR_FindFile_Card(LONG lUserID, LONG lChannel, DWORD dwFileType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API BOOL __stdcall NET_DVR_LockFileByName(LONG lUserID, char *sLockFileName);
NET_DVR_API BOOL __stdcall NET_DVR_UnlockFileByName(LONG lUserID, char *sUnlockFileName);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackByName(LONG lUserID,char *sPlayBackFileName, HWND hWnd);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, HWND hWnd);
NET_DVR_API BOOL __stdcall NET_DVR_PlayBackControl(LONG lPlayHandle,DWORD dwControlCode,DWORD dwInValue,DWORD *LPOutValue);
NET_DVR_API BOOL __stdcall NET_DVR_StopPlayBack(LONG lPlayHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetPlayDataCallBack(LONG lPlayHandle,void(CALLBACK *fPlayDataCallBack) (LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_PlayBackSaveData(LONG lPlayHandle,char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopPlayBackSave(LONG lPlayHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetPlayBackOsdTime(LONG lPlayHandle, LPNET_DVR_TIME lpOsdTime);
NET_DVR_API BOOL __stdcall NET_DVR_PlayBackCaptureFile(LONG lPlayHandle,char *sFileName);
NET_DVR_API LONG __stdcall NET_DVR_GetFileByName(LONG lUserID,char *sDVRFileName,char *sSavedFileName);
NET_DVR_API LONG __stdcall NET_DVR_GetFileByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, char *sSavedFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopGetFile(LONG lFileHandle);
NET_DVR_API int __stdcall NET_DVR_GetDownloadPos(LONG lFileHandle);
NET_DVR_API int	__stdcall NET_DVR_GetPlayBackPos(LONG lPlayHandle);

//����
NET_DVR_API LONG __stdcall NET_DVR_Upgrade(LONG lUserID, char *sFileName);
NET_DVR_API int __stdcall NET_DVR_GetUpgradeState(LONG lUpgradeHandle);
NET_DVR_API int __stdcall NET_DVR_GetUpgradeProgress(LONG lUpgradeHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseUpgradeHandle(LONG lUpgradeHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetNetworkEnvironment(DWORD dwEnvironmentLevel);
//Զ�̸�ʽ��Ӳ��
NET_DVR_API LONG __stdcall NET_DVR_FormatDisk(LONG lUserID,LONG lDiskNumber);
NET_DVR_API BOOL __stdcall NET_DVR_GetFormatProgress(LONG lFormatHandle, LONG *pCurrentFormatDisk,LONG *pCurrentDiskPos,LONG *pFormatStatic);
NET_DVR_API BOOL __stdcall NET_DVR_CloseFormatHandle(LONG lFormatHandle);
//����
NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan(LONG lAlarmHandle);
NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V30(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan_V30(LONG lAlarmHandle);
//�����Խ�
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom(LONG lUserID, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, DWORD dwUser), DWORD dwUser);
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_V30(LONG lUserID, DWORD dwVoiceChan, BOOL bNeedCBNoEncData, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetVoiceComClientVolume(LONG lVoiceComHandle, WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_StopVoiceCom(LONG lVoiceComHandle);
//����ת��
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR(LONG lUserID, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, DWORD dwUser), DWORD dwUser);
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR_V30(LONG lUserID, DWORD dwVoiceChan, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_VoiceComSendData(LONG lVoiceComHandle, char *pSendBuf, DWORD dwBufSize);

//�����㲥
NET_DVR_API BOOL __stdcall NET_DVR_ClientAudioStart();
NET_DVR_API BOOL __stdcall NET_DVR_ClientAudioStart_V30(void(CALLBACK *fVoiceDataCallBack)(char *pRecvDataBuffer, DWORD dwBufSize, void * pUser), void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_ClientAudioStop();
NET_DVR_API BOOL __stdcall NET_DVR_AddDVR(LONG lUserID);
NET_DVR_API LONG __stdcall NET_DVR_AddDVR_V30(LONG lUserID, DWORD dwVoiceChan);
NET_DVR_API BOOL __stdcall NET_DVR_DelDVR(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_DelDVR_V30(LONG lVoiceHandle);
////////////////////////////////////////////////////////////
//͸��ͨ������
NET_DVR_API LONG __stdcall NET_DVR_SerialStart(LONG lUserID,LONG lSerialPort,void(CALLBACK *fSerialDataCallBack)(LONG lSerialHandle,char *pRecvDataBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
//485��Ϊ͸��ͨ��ʱ����Ҫָ��ͨ���ţ���Ϊ��ͬͨ����485�����ÿ��Բ�ͬ(���粨����)
NET_DVR_API BOOL __stdcall NET_DVR_SerialSend(LONG lSerialHandle, LONG lChannel, char *pSendBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_SerialStop(LONG lSerialHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SendTo232Port(LONG lUserID, char *pSendBuf, DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_SendToSerialPort(LONG lUserID, DWORD dwSerialPort, DWORD dwSerialIndex, char *pSendBuf, DWORD dwBufSize);

//���� nBitrate = 16000
NET_DVR_API void* __stdcall NET_DVR_InitG722Decoder(int nBitrate = 16000);
NET_DVR_API void __stdcall NET_DVR_ReleaseG722Decoder(void *pDecHandle);
NET_DVR_API BOOL __stdcall NET_DVR_DecodeG722Frame(void *pDecHandle, unsigned char* pInBuffer, unsigned char* pOutBuffer);
//����
NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,unsigned char* pInBuffer, unsigned char* pOutBuffer);
NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);

//Զ�̿��Ʊ�����ʾ
NET_DVR_API BOOL __stdcall NET_DVR_ClickKey(LONG lUserID, LONG lKeyIndex);
//Զ�̿����豸���ֶ�¼��
NET_DVR_API BOOL __stdcall NET_DVR_StartDVRRecord(LONG lUserID,LONG lChannel,LONG lRecordType);
NET_DVR_API BOOL __stdcall NET_DVR_StopDVRRecord(LONG lUserID,LONG lChannel);
//���뿨
NET_DVR_API BOOL __stdcall NET_DVR_InitDevice_Card(long *pDeviceTotalChan);
NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDevice_Card();
NET_DVR_API BOOL __stdcall NET_DVR_InitDDraw_Card(HWND hParent,COLORREF colorKey);
NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDDraw_Card();
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_Card(LONG lUserID,LPNET_DVR_CARDINFO lpCardInfo,long lChannelNum);
NET_DVR_API BOOL __stdcall NET_DVR_ResetPara_Card(LONG lRealHandle,LPNET_DVR_DISPLAY_PARA lpDisplayPara);
NET_DVR_API BOOL __stdcall NET_DVR_RefreshSurface_Card();
NET_DVR_API BOOL __stdcall NET_DVR_ClearSurface_Card();
NET_DVR_API BOOL __stdcall NET_DVR_RestoreSurface_Card();
NET_DVR_API BOOL __stdcall NET_DVR_OpenSound_Card(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSound_Card(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetVolume_Card(LONG lRealHandle,WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_AudioPreview_Card(LONG lRealHandle,BOOL bEnable);
NET_DVR_API LONG __stdcall NET_DVR_GetCardLastError_Card();
NET_DVR_API HANDLE __stdcall NET_DVR_GetChanHandle_Card(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CapturePicture_Card(LONG lRealHandle, char *sPicFileName);
//��ȡ���뿨���кŴ˽ӿ���Ч������GetBoardDetail�ӿڻ��(2005-12-08֧��)
NET_DVR_API BOOL __stdcall NET_DVR_GetSerialNum_Card(long lChannelNum,DWORD *pDeviceSerialNo);
//��־
NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API LONG __stdcall NET_DVR_FindNextLog(LONG lLogHandle, LPNET_DVR_LOG lpLogData);
NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose(LONG lLogHandle);
NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog_V30(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, BOOL bOnlySmart = FALSE);
NET_DVR_API LONG __stdcall NET_DVR_FindNextLog_V30(LONG lLogHandle, LPNET_DVR_LOG_V30 lpLogData);
NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose_V30(LONG lLogHandle);
//��ֹ2004��8��5��,��113���ӿ�
//ATM DVR
NET_DVR_API LONG __stdcall NET_DVR_FindFileByCard(LONG lUserID,LONG lChannel,DWORD dwFileType, int nFindType, BYTE *sCardNumber, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
//��ֹ2004��10��5��,��116���ӿ�

//����
NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,unsigned char* pInBuffer, unsigned char* pOutBuffer);
NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);
//2005-09-15
NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sPicFileName);
//JPEGץͼ���ڴ�
NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture_NEW(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sJpegPicBuffer, DWORD dwPicSize,  LPDWORD lpSizeReturned);


//2006-02-16
NET_DVR_API int __stdcall NET_DVR_GetRealPlayerIndex(LONG lRealHandle);
NET_DVR_API int __stdcall NET_DVR_GetPlayBackPlayerIndex(LONG lPlayHandle);

//2006-08-28 704-640 ��������
NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG(LONG lUserID, DWORD dwScale);
NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG(LONG lUserID, DWORD *lpOutScale);
NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
//2006-08-28 ATM���˿�����
NET_DVR_API BOOL __stdcall NET_DVR_SetATMPortCFG(LONG lUserID, WORD wATMPort);
NET_DVR_API BOOL __stdcall NET_DVR_GetATMPortCFG(LONG lUserID, WORD *LPOutATMPort);

//2006-11-10 ֧���Կ��������
NET_DVR_API BOOL __stdcall NET_DVR_InitDDrawDevice();
NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDDrawDevice();
NET_DVR_API LONG __stdcall NET_DVR_GetDDrawDeviceTotalNums();
NET_DVR_API BOOL __stdcall NET_DVR_SetDDrawDevice(LONG lPlayPort, DWORD nDeviceNum);

NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn(LONG lRealHandle, LPNET_DVR_POINT_FRAME pStruPointFrame);
NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn_EX(LONG lUserID, LONG lChannel, LPNET_DVR_POINT_FRAME pStruPointFrame);

//�����豸DS-6001D/DS-6001F
NET_DVR_API BOOL __stdcall NET_DVR_StartDecode(LONG lUserID, LONG lChannel, LPNET_DVR_DECODERINFO lpDecoderinfo);
NET_DVR_API BOOL __stdcall NET_DVR_StopDecode(LONG lUserID, LONG lChannel);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecoderState(LONG lUserID, LONG lChannel, LPNET_DVR_DECODERSTATE lpDecoderState);
//2005-08-01
NET_DVR_API BOOL __stdcall NET_DVR_SetDecInfo(LONG lUserID, LONG lChannel, LPNET_DVR_DECCFG lpDecoderinfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecInfo(LONG lUserID, LONG lChannel, LPNET_DVR_DECCFG lpDecoderinfo);
NET_DVR_API BOOL __stdcall NET_DVR_SetDecTransPort(LONG lUserID, LPNET_DVR_PORTCFG lpTransPort);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecTransPort(LONG lUserID, LPNET_DVR_PORTCFG lpTransPort);
NET_DVR_API BOOL __stdcall NET_DVR_DecPlayBackCtrl(LONG lUserID, LONG lChannel, DWORD dwControlCode, DWORD dwInValue,DWORD *LPOutValue, LPNET_DVR_PLAYREMOTEFILE lpRemoteFileInfo);
NET_DVR_API BOOL __stdcall NET_DVR_StartDecSpecialCon(LONG lUserID, LONG lChannel, LPNET_DVR_DECCHANINFO lpDecChanInfo);
NET_DVR_API BOOL __stdcall NET_DVR_StopDecSpecialCon(LONG lUserID, LONG lChannel, LPNET_DVR_DECCHANINFO lpDecChanInfo);
NET_DVR_API BOOL __stdcall NET_DVR_DecCtrlDec(LONG lUserID, LONG lChannel, DWORD dwControlCode);
NET_DVR_API BOOL __stdcall NET_DVR_DecCtrlScreen(LONG lUserID, LONG lChannel, DWORD dwControl);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecCurLinkStatus(LONG lUserID, LONG lChannel, LPNET_DVR_DECSTATUS lpDecStatus);

//��·������
//2007-11-30 V211֧�����½ӿ� //11
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DYNAMIC_DEC lpDynamicInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStopDynamic(LONG lUserID, DWORD dwDecChanNum); 
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_INFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanEnable(LONG lUserID, DWORD dwDecChanNum, DWORD dwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanEnable(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecEnable(LONG lUserID, LPDWORD lpdwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDecChanEnable(LONG lUserID, DWORD dwDecChanNum, DWORD dwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanEnable(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_STATUS lpInter);
//2007-12-22 ����֧�ֽӿ� //18
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlay(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlayControl(LONG lUserID, DWORD dwDecChanNum, DWORD dwControlCode, DWORD dwInValue, DWORD *LPOutValue);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetRemotePlayStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS lpOuter);
//2009-4-13 ����
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PU_STREAM_CFG lpDynamicInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanInfo_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_INFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetTranInfo_V30(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30 lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTranInfo_V30(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30 lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDisplayCfg(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_VGA_DISP_CHAN_CFG lpDisplayCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDisplayCfg(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_VGA_DISP_CHAN_CFG lpDisplayCfg);

NET_DVR_API LONG __stdcall NET_DVR_MatrixStartPassiveDecode(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_PASSIVEMODE lpPassiveMode /*, void(CALLBACK *fPassiveDataCallBack)(LONG lPassiveHandle, char * pSendBuf, DWORD dwBufSize, DWORD dwStatus, DWORD dwUser), DWORD dwUser*/);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSendData(LONG lPassiveHandle, char *pSendBuf, DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStopPassiveDecode(LONG lPassiveHandle);
NET_DVR_API BOOL __stdcall NET_DVR_UploadLogo(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_DISP_LOGOCFG lpDispLogoCfg, char *sLogoBuffer);
#define	NET_DVR_SHOWLOGO			1		/*��ʾLOGO*/
#define	NET_DVR_HIDELOGO			2		/*����LOGO*/  
NET_DVR_API BOOL __stdcall NET_DVR_LogoSwitch(LONG lUserID, DWORD dwDecChan, DWORD dwLogoSwitch);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDeviceStatus(LONG lUserID,  LPNET_DVR_DECODER_WORK_STATUS lpDecoderCfg);

#define	DISP_CMD_ENLARGE_WINDOW				1	/*��ʾͨ���Ŵ�ĳ������*/
#define	DISP_CMD_RENEW_WINDOW				2	/*��ʾͨ�����ڻ�ԭ*/

NET_DVR_API BOOL __stdcall NET_DVR_MatrixDiaplayControl(LONG lUserID, DWORD dwDispChanNum, DWORD dwDispChanCmd, DWORD dwCmdParam);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixPassiveDecodeControl(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PASSIVEDECODE_CONTROL lpInter);
NET_DVR_API LONG __stdcall NET_DVR_MatrixGetPassiveDecodeStatus(LONG lPassiveHandle);

//end
NET_DVR_API BOOL __stdcall NET_DVR_RefreshPlay(LONG lPlayHandle);
//�ָ�Ĭ��ֵ
NET_DVR_API BOOL __stdcall NET_DVR_RestoreConfig(LONG lUserID);
//�������
NET_DVR_API BOOL __stdcall NET_DVR_SaveConfig(LONG lUserID);
//����
NET_DVR_API BOOL __stdcall NET_DVR_RebootDVR(LONG lUserID);
//�ر�DVR
NET_DVR_API BOOL __stdcall NET_DVR_ShutDownDVR(LONG lUserID);

//�������� begin
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpOutBuffer, DWORD dwOutBufferSize, LPDWORD lpBytesReturned);
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRWorkState_V30(LONG lUserID, LPNET_DVR_WORKSTATE_V30 lpWorkState);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRWorkState(LONG lUserID, LPNET_DVR_WORKSTATE lpWorkState);
NET_DVR_API BOOL __stdcall NET_DVR_SetVideoEffect(LONG lUserID, LONG lChannel, DWORD dwBrightValue, DWORD dwContrastValue, DWORD dwSaturationValue, DWORD dwHueValue);
NET_DVR_API BOOL __stdcall NET_DVR_GetVideoEffect(LONG lUserID, LONG lChannel, DWORD *pBrightValue, DWORD *pContrastValue, DWORD *pSaturationValue, DWORD *pHueValue);
NET_DVR_API BOOL __stdcall NET_DVR_ClientGetframeformat(LONG lUserID, LPNET_DVR_FRAMEFORMAT lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_ClientSetframeformat(LONG lUserID, LPNET_DVR_FRAMEFORMAT lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_GetAtmFrameFormat_V30(LONG lUserID, LONG lAtmChannel, LPNET_DVR_ATM_FRAMEFORMAT_V30 lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_SetAtmFrameFormat_V30(LONG lUserID, LONG lAtmChannel, LPNET_DVR_ATM_FRAMEFORMAT_V30 lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_GetAtmProtocol(LONG lUserID, LPNET_DVR_ATM_PROTOCOL lpAtmProtocol);
NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmOut_V30(LONG lUserID, LPNET_DVR_ALARMOUTSTATUS_V30 lpAlarmOutState);
NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmOut(LONG lUserID, LPNET_DVR_ALARMOUTSTATUS lpAlarmOutState);
NET_DVR_API BOOL __stdcall NET_DVR_SetAlarmOut(LONG lUserID, LONG lAlarmOutPort,LONG lAlarmOutStatic);

//��Ƶ��������
NET_DVR_API BOOL __stdcall NET_DVR_ClientSetVideoEffect(LONG lRealHandle,DWORD dwBrightValue,DWORD dwContrastValue, DWORD dwSaturationValue,DWORD dwHueValue);
NET_DVR_API BOOL __stdcall NET_DVR_ClientGetVideoEffect(LONG lRealHandle,DWORD *pBrightValue,DWORD *pContrastValue, DWORD *pSaturationValue,DWORD *pHueValue);

//�����ļ�
NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile(LONG lUserID, char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile(LONG lUserID, char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_V30(LONG lUserID, char *sOutBuffer, DWORD dwOutSize, DWORD *pReturnSize);

NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_EX(LONG lUserID, char *sOutBuffer, DWORD dwOutSize);
NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile_EX(LONG lUserID, char *sInBuffer, DWORD dwInSize);

//������־�ļ�д��ӿ�
NET_DVR_API BOOL __stdcall NET_DVR_SetLogToFile(BOOL bLogEnable = FALSE, char * strLogDir = NULL, BOOL bAutoDel = TRUE);
NET_DVR_API BOOL __stdcall NET_DVR_GetSDKState(LPNET_DVR_SDKSTATE pSDKState);
NET_DVR_API BOOL __stdcall NET_DVR_GetSDKAbility(LPNET_DVR_SDKABL pSDKAbl);
NET_DVR_API BOOL __stdcall NET_DVR_GetPTZProtocol(LONG lUserID, NET_DVR_PTZCFG *pPtzcfg);
//ǰ�������
NET_DVR_API BOOL __stdcall NET_DVR_LockPanel(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_UnLockPanel(LONG lUserID);

NET_DVR_API BOOL __stdcall NET_DVR_SetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpInBuffer, DWORD dwInBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpOutBuffer, DWORD dwOutBufferSize);

//SDK_V222
//�����豸����
#define  IDS6002_HF_B    62//˫�����٣�DS6002-HF/B
#define  IDS6101_HF_B	 63//��Ϊ������DS6101-HF/B DS6101-HF/B_SATA
#define  IDS52XX		 64//���ܷ�����IVMS

//IVMS �豸  
// SDK_V35
#define  IVMS_6400      110 // IVMS-6400 
#define IDS8104_AHL_S_HX  66// ��������ʶ�� ATM
// SDK_V35

//������ȡ����
#define DEVICE_ALL_ABILITY            0x000  //�豸ȫ������
#define DEVICE_SOFTHARDWARE_ABILITY   0x001  //�豸��Ӳ������
#define DEVICE_NETWORK_ABILITY        0x002   //�豸��������
#define DEVICE_ENCODE_ALL_ABILITY     0x003  //�豸���б�������
#define	DEVICE_ENCONE_CURRENT         0x004  //�豸��ǰ��������
#define IPC_FRONT_PARAMETER				0x005	//ipcǰ�˲���
#define IPC_UPGRADE_DESCRIPTION			0x006	//ipc������Ϣ
#define VCA_DEV_ABILITY 	 0x100 //�豸���ܷ�����������
#define VCA_CHAN_ABILITY     0x110 //��Ϊ��������
#define MATRIXDECODER_ABILITY 0x200 //��·��������ʾ����������
//��ȡ/���ô�ӿڲ�����������
//����ʶ��NET_VCA_PLATE_CFG��
#define 	NET_DVR_SET_PLATECFG	150		//���ó���ʶ�����
#define 	NET_DVR_GET_PLATECFG	151		//��ȡ����ʶ�����
//��Ϊ��Ӧ��NET_VCA_RULECFG��
#define 	NET_DVR_SET_RULECFG		152	//������Ϊ��������
#define 	NET_DVR_GET_RULECFG	    153	//��ȡ��Ϊ��������,
//����궨������NET_DVR_TRACK_CFG ��
#define  	NET_DVR_SET_TRACK_CFG  160//������������ò��� 
#define  	NET_DVR_GET_TRACK_CFG  161//��ȡ��������ò���

//���ܷ�����ȡ�����ýṹ
#define 	NET_DVR_SET_IVMS_STREAMCFG		162		//�������ܷ�����ȡ������
#define 	NET_DVR_GET_IVMS_STREAMCFG		163		//��ȡ���ܷ�����ȡ������
//���ܿ��Ʋ����ṹ
#define 	NET_DVR_SET_VCA_CTRLCFG			164	 //�������ܿ��Ʋ���
#define 	NET_DVR_GET_VCA_CTRLCFG			165	 //��ȡ���ܿ��Ʋ���

//��������NET_VCA_MASK_REGION_LIST
#define 	NET_DVR_SET_VCA_MASK_REGION		166	 //���������������
#define 	NET_DVR_GET_VCA_MASK_REGION		167	 //��ȡ�����������

//ATM�������� NET_VCA_ENTER_REGION
#define 	NET_DVR_SET_VCA_ENTER_REGION	168	 //���ý����������
#define 	NET_DVR_GET_VCA_ENTER_REGION	169	 //��ȡ�����������

//�궨������NET_VCA_LINE_SEGMENT_LIST
#define 	NET_DVR_SET_VCA_LINE_SEGMENT	170	 //���ñ궨��
#define 	NET_DVR_GET_VCA_LINE_SEGMENT	171	 //��ȡ�궨��

// ivms��������NET_IVMS_MASK_REGION_LIST
#define 	NET_DVR_SET_IVMS_MASK_REGION	172	 //����IVMS�����������
#define 	NET_DVR_GET_IVMS_MASK_REGION	173	 //��ȡIVMS�����������
// ivms����������NET_IVMS_ENTER_REGION
#define 	NET_DVR_SET_IVMS_ENTER_REGION	174	 //����IVMS�����������
#define 	NET_DVR_GET_IVMS_ENTER_REGION	175	 //��ȡIVMS�����������

#define 	NET_DVR_SET_IVMS_BEHAVIORCFG		  176	//�������ܷ�������Ϊ�������
#define 	NET_DVR_GET_IVMS_BEHAVIORCFG		  177	//��ȡ���ܷ�������Ϊ�������

// IVMS �طż���
#define NET_DVR_IVMS_SET_SEARCHCFG		178	//����IVMS�طż�������
#define NET_DVR_IVMS_GET_SEARCHCFG			179	//��ȡIVMS�طż�������

// SDK_V35
#define NET_DVR_SET_POSITION_RULE   180  // ���ó���λ����Ϊ��������
#define NET_DVR_GET_POSITION_RULE   181  // ��ȡ����λ����Ϊ��������

#define NET_DVR_SET_CALIBRATION         182    // ���ñ궨��Ϣ
#define NET_DVR_GET_CALIBRATION         183    // ��ȡ�궨��Ϣ

#define NET_DVR_SET_PDC_RULECFG         184    // ����������ͳ�ƹ���
#define NET_DVR_GET_PDC_RULECFG         185    // ��ȡ������ͳ�ƹ���

#define NET_DVR_SET_PU_STREAMCFG        186     // ����ǰ��ȡ���豸��Ϣ
#define NET_DVR_GET_PU_STREAMCFG        187     // ��ȡǰ��ȡ���豸��Ϣ

#define NET_DVR_SET_DETECT_RULECFG          190 ////  ����ATM���������
#define NET_DVR_GET_DETECT_RULECFG          191 ////  ��ȡATM���������
//SDK_V35

//�����ص�����
//��ӦNET_DVR_PLATE_RESULT
#define  COMM_ALARM_PLATE				0x1101	//����ʶ�𱨾���Ϣ
//��ӦNET_VCA_RULE_ALARM
#define  COMM_ALARM_RULE				0x1102	//��Ϊ����������Ϣ

#define  COMM_ALARM_PDC                 0x1103  // ����ͳ�Ʊ�����Ϣ

//�ṹ�����궨�� 
#define VCA_MAX_POLYGON_POINT_NUM		10		//����������֧��10����Ķ����
#define MAX_RULE_NUM					8		//����������
#define MAX_TARGET_NUM    				30		//���Ŀ�����
#define MAX_CALIB_PT 					6		//���궨�����
#define MIN_CALIB_PT 					4		//��С�궨�����
#define MAX_TIMESEGMENT_2	    		2		//���ʱ�����
#define MAX_LICENSE_LEN					16		//���ƺ���󳤶�
#define MAX_PLATE_NUM					3		//���Ƹ���
#define MAX_MASK_REGION_NUM				4       //����ĸ���������
#define MAX_SEGMENT_NUM					6        //������궨�����������Ŀ
#define MIN_SEGMENT_NUM					3        //������궨��С��������Ŀ


//���ܿ�����Ϣ
#define MAX_VCA_CHAN  16//�������ͨ����
typedef struct tagNET_VCA_CTRLINFO
{
	BYTE   byVCAEnable;		//�Ƿ�������
	BYTE   byVCAType;	    //�����������ͣ�VCA_CHAN_ABILITY_TYPE 
	BYTE   byStreamWithVCA; //�������Ƿ��������Ϣ
    BYTE   byMode;			//ģʽ��VCA_CHAN_MODE_TYPE ,atm������ʱ����Ҫ����
	BYTE   byRes[4]; 		//����������Ϊ0 
}NET_VCA_CTRLINFO, * LPNET_VCA_CTRLINFO;

//���ܿ�����Ϣ�ṹ
typedef struct tagNET_VCA_CTRLCFG
{
	DWORD dwSize;
	NET_VCA_CTRLINFO  struCtrlInfo[MAX_VCA_CHAN]; 	//������Ϣ,����0��Ӧ�豸����ʼͨ��
	BYTE byRes[16];
}NET_VCA_CTRLCFG, * LPNET_VCA_CTRLCFG;

//�����豸������
typedef struct tagNET_VCA_DEV_ABILITY
{
	DWORD dwSize;			//�ṹ����
	BYTE byVCAChanNum;		//����ͨ������
	BYTE byPlateChanNum; 	//����ͨ������
	BYTE byBBaseChanNum;	//��Ϊ���������
	BYTE byBAdvanceChanNum; //��Ϊ�߼������
	BYTE byBFullChanNum;    //��Ϊ���������
	BYTE byATMChanNum;		//����ATM����
    BYTE byPDCChanNum;      //����ͳ��ͨ������
    BYTE byRes[33];
}NET_VCA_DEV_ABILITY, *LPNET_VCA_DEV_ABILITY;


//��Ϊ������������
typedef enum _VCA_ABILITY_TYPE_
{
    TRAVERSE_PLANE_ABILITY           = 0x01,      //��Խ������
    ENTER_AREA_ABILITY          = 0x02,      //��������
    EXIT_AREA_ABILITY           = 0x04,      //�뿪����
    INTRUSION_ABILITY           = 0x08,      //����
    LOITER_ABILITY               = 0x10,     //�ǻ�
    LEFT_TAKE_ABILITY            = 0x20,     //�������
    PARKING_ABILITY              = 0x40,     //ͣ��
    RUN_ABILITY                  = 0x80,    //����
	HIGH_DENSITY_ABILITY         = 0x100,    //����Ա�ܶ�
	LF_TRACK_ABILITY			 = 0x200,    //�������
// 	STICK_UP_ABILITY             = 0x40000000,  //��ֽ��
// 	INSTALL_SCANNER_ABILITY      = 0x80000000   //��װ������
}VCA_ABILITY_TYPE;


//����ͨ������
typedef enum _VCA_CHAN_ABILITY_TYPE_
{
	VCA_BEHAVIOR_BASE     =  1,   //��Ϊ����������
	VCA_BEHAVIOR_ADVANCE  =  2,   //��Ϊ�����߼���
	VCA_BEHAVIOR_FULL     =  3,   //��Ϊ����������
    VCA_PLATE     		  =  4,   //��������
	VCA_ATM               =  5,    //ATM����
    VCA_PDC               =  6      // ������ͳ��
}VCA_CHAN_ABILITY_TYPE;

//����ATMģʽ����(ATM��������)
typedef enum _VCA_CHAN_MODE_TYPE_
{
    VCA_ATM_PANEL     =  0, //ATM���
    VCA_ATM_SURROUND  =  1,  //ATM����
    VCA_ATM_FACE		= 2		//ATM ��������ʶ��
}VCA_CHAN_MODE_TYPE;


//ͨ�������������
typedef struct tagNET_VCA_CHAN_IN_PARAM
{
	BYTE byVCAType;	    //VCA_CHAN_ABILITY_TYPEö��ֵ
	BYTE byMode;		//ģʽ��VCA_CHAN_MODE_TYPE ,atm������ʱ����Ҫ����
	BYTE byRes[2]; 	    //����������Ϊ0 
}NET_VCA_CHAN_IN_PARAM, *LPNET_VCA_CHAN_IN_PARAM;


//��Ϊ�������ṹ
typedef struct tagNET_VCA_BEHAVIOR_ABILITY
{
	DWORD dwSize;		 //�ṹ����
	DWORD dwAbilityType; //֧�ֵ��������ͣ���λ��ʾ����VCA_ABILITY_TYPE����
	BYTE byMaxRuleNum;	 //��������
	BYTE byMaxTargetNum; //���Ŀ����
	BYTE byRes[10];      //����������Ϊ0
}NET_VCA_BEHAVIOR_ABILITY, *LPNET_VCA_BEHAVIOR_ABILITY;

NET_DVR_API BOOL __stdcall NET_DVR_GetDeviceAbility(LONG lUserID, DWORD dwAbilityType, char* pInBuf, DWORD dwInLength, char* pOutBuf, DWORD dwOutLength);


//���ܹ��ýṹ
//����ֵ��һ��,������ֵΪ��ǰ����İٷֱȴ�С, ����ΪС�������λ
//������ṹ
typedef struct tagNET_VCA_POINT
{	
	float fX;								// X������, 0.001~1
	float fY;								//Y������, 0.001~1
}NET_VCA_POINT, *LPNET_VCA_POINT;

//�����ṹ
typedef struct tagNET_VCA_RECT
{
	float fX;               //�߽�����Ͻǵ��X������, 0.001~1
	float fY;               //�߽�����Ͻǵ��Y������, 0.001~1
	float fWidth;           //�߽��Ŀ��, 0.001~1
	float fHeight;          //�߽��ĸ߶�, 0.001~1
}NET_VCA_RECT, *LPNET_VCA_RECT;

//��Ϊ�����¼�����
typedef enum _VCA_EVENT_TYPE_
{
	VCA_TRAVERSE_PLANE		= 0x1,    //��Խ������
	VCA_ENTER_AREA		= 0x2,    //Ŀ���������,֧���������
	VCA_EXIT_AREA		= 0x4,    //Ŀ���뿪����,֧���������
	VCA_INTRUSION		= 0x8,    //�ܽ�����,֧���������
	VCA_LOITER			= 0x10,   //�ǻ�,֧���������
	VCA_LEFT_TAKE		= 0x20,   //�������,֧���������
	VCA_PARKING			= 0x40,   //ͣ��,֧���������
	VCA_RUN				= 0x80,   //����,֧���������
	VCA_HIGH_DENSITY	= 0x100,  //��������Ա�ܶ�,֧���������
    VCA_STICK_UP        = 0x40000000,  //��ֽ��,֧���������
    VCA_INSTALL_SCANNER = 0x80000000 //��װ������,֧���������
}VCA_EVENT_TYPE;

//�����洩Խ��������
typedef enum _VCA_CROSS_DIRECTION_
{
	VCA_BOTH_DIRECTION,  // ˫�� 
	VCA_LEFT_GO_RIGHT,   // �������� 
	VCA_RIGHT_GO_LEFT    // �������� 
}VCA_CROSS_DIRECTION;

//�߽ṹ
typedef struct tagNET_VCA_LINE
{
	NET_VCA_POINT struStart;    //��� 
	NET_VCA_POINT struEnd;      //�յ�
}NET_VCA_LINE, *LPNET_VCA_LINE;

//����ͽṹ��
typedef struct tagNET_VCA_POLYGON
{
	DWORD dwPointNum;                                  //��Ч�� ���ڵ���3������3����һ��������Ϊ����Ч�����߽�����Ϊ����Ч���� 
	NET_VCA_POINT  struPos[VCA_MAX_POLYGON_POINT_NUM]; //����α߽��,���ʮ�� 
}NET_VCA_POLYGON, *LPNET_VCA_POLYGON;

//���������
typedef struct tagNET_VCA_TRAVERSE_PLANE
{	
    NET_VCA_LINE struPlaneBottom;  //������ױ�
    VCA_CROSS_DIRECTION dwCrossDirection; //��Խ����: 0-˫��1-�����ң�2-���ҵ���
    BYTE byRes1;//����
    BYTE byPlaneHeight; //������߶�
    BYTE byRes2[38];				//����
}NET_VCA_TRAVERSE_PLANE, *LPNET_VCA_TRAVERSE_PLANE;

//����/�뿪�������
typedef struct tagNET_VCA_AREA
{
    NET_VCA_POLYGON struRegion;//����Χ
    BYTE byRes[8];
}NET_VCA_AREA, *LPNET_VCA_AREA;

//���ݱ����ӳ�ʱ������ʶ�����д�ͼƬ�����������IO����һ�£�1�뷢��һ����
//���ֲ���
typedef struct tagNET_VCA_INTRUSION
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration;    //�����ӳ�ʱ��: 1-120�룬����5�룬�ж�����Ч������ʱ��
    BYTE byRes[6];
}NET_VCA_INTRUSION, *LPNET_VCA_INTRUSION;

//�ǻ�����
typedef struct tagNET_VCA_PARAM_LOITER
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //�����ǻ������ĳ���ʱ�䣺1-120�룬����10��
    BYTE byRes[6];
}NET_VCA_LOITER, *LPNET_VCA_LOITER;

//����/�������
typedef struct tagNET_VCA_TAKE_LEFT
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //��������/��������ĳ���ʱ�䣺1-120�룬����10��
    BYTE byRes[6];
}NET_VCA_TAKE_LEFT, *LPNET_VCA_TAKE_LEFT;

//ͣ������
typedef struct tagNET_VCA_PARKING
{
    NET_VCA_POLYGON struRegion;	//����Χ
    WORD wDuration;				//����ͣ����������ʱ�䣺1-120�룬����10��
    BYTE byRes[6];
}NET_VCA_PARKING, *LPNET_VCA_PARKING;

//���ܲ���
typedef struct tagNET_VCA_RUN
{
	NET_VCA_POLYGON struRegion;	//����Χ
    float  fRunDistance;		//�˱���������, ��Χ: [0.1, 1.00]
    BYTE byRes[4];
}NET_VCA_RUN, *LPNET_VCA_RUN;

//��Ա�ۼ�����
typedef struct tagNET_VCA_HIGH_DENSITY
{
    NET_VCA_POLYGON struRegion;//����Χ
    float fDensity;     //�ܶȱ���, ��Χ: [0.1, 1.0]
    BYTE byRes[4];
}NET_VCA_HIGH_DENSITY, *LPNET_VCA_HIGH_DENSITY; 

//��ֽ������
typedef struct tagNET_VCA_STICK_UP
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //��������ʱ�䣺10-60�룬����10��
    BYTE  bySensitivity;       //�����Ȳ�������Χ[1,5]
    BYTE byRes[5];
}NET_VCA_STICK_UP, *LPNET_VCA_STICK_UP; 

//����������
typedef struct tagNET_VCA_SCANNER
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //��������ʱ�䣺10-60��
    BYTE  bySensitivity;       //�����Ȳ�������Χ[1,5]
    BYTE byRes[5];
}NET_VCA_SCANNER, *LPNET_VCA_SCANNER; 


//�����¼�����
typedef union tagNET_VCA_EVENT_UNION
{
	DWORD                uLen[23];			//����
	NET_VCA_TRAVERSE_PLANE    struTraversePlane;		//��Խ��������� 
	NET_VCA_AREA    	 struArea;			//����/�뿪�������
	NET_VCA_INTRUSION    struIntrusion;		//���ֲ���
	NET_VCA_LOITER       struLoiter;		//�ǻ�����
	NET_VCA_TAKE_LEFT    struTakeTeft;		//����/�������
	NET_VCA_PARKING      struParking;		//ͣ������
	NET_VCA_RUN          struRun;			//���ܲ���
	NET_VCA_HIGH_DENSITY struHighDensity;	//��Ա�ۼ�����  
    NET_VCA_STICK_UP 	struStickUp;		//��ֽ��
    NET_VCA_SCANNER 	struScanner;		//���������� 	
}NET_VCA_EVENT_UNION, *LPNET_VCA_EVENT_UNION;

// �ߴ����������
typedef enum _VCA_SIZE_FILTER_MODE_
{
	IMAGE_PIX_MODE, //�������ش�С����
	REAL_WORLD_MODE //����ʵ�ʴ�С����
}SIZE_FILTER_MODE;
//�ߴ������
typedef struct tagNET_VCA_SIZE_FILTER
{
	BYTE    byActive;			//�Ƿ񼤻�ߴ������ 0-�� ��0-��
    BYTE    byMode;		 //������ģʽSIZE_FILTER_MODE
	BYTE    byRes[2];        //��������0
	NET_VCA_RECT struMiniRect;    //��СĿ���,ȫ0��ʾ������
	NET_VCA_RECT struMaxRect;	  //���Ŀ���,ȫ0��ʾ������
}NET_VCA_SIZE_FILTER, *LPNET_VCA_SIZE_FILTER;

//�������ṹ
typedef struct tagNET_VCA_ONE_RULE
{
	BYTE   byActive;					//�Ƿ񼤻����,0-��,��0-��
	BYTE   byRes[7];         			//����������Ϊ0�ֶ�
    BYTE   byRuleName[NAME_LEN];		//��������
	VCA_EVENT_TYPE dwEventType;			//��Ϊ�����¼�����
    NET_VCA_EVENT_UNION uEventParam;	//��Ϊ�����¼�����
    NET_VCA_SIZE_FILTER  struSizeFilter;  //�ߴ������
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
	NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	  //����ʽ 
	BYTE byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
}NET_VCA_ONE_RULE, *LPNET_VCA_ONE_RULE;

//��Ϊ�������ýṹ��
typedef struct tagNET_VCA_RULECFG
{
	DWORD  dwSize;			//�ṹ����
	BYTE    byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
	BYTE    byRes[3];
	NET_DVR_JPEGPARA struPictureParam; 		//ͼƬ���ṹ
	NET_VCA_ONE_RULE  struRule[MAX_RULE_NUM];  //��������
}NET_VCA_RULECFG, *LPNET_VCA_RULECFG;

//��Ŀ��ṹ��
typedef struct tagNET_VCA_TARGET_INFO
{
	DWORD    dwID;				//Ŀ��ID ,��Ա�ܶȹ��߱���ʱΪ0
	NET_VCA_RECT struRect;      //Ŀ��߽�� 
    BYTE      byRes[4];			//����
}NET_VCA_TARGET_INFO, *LPNET_VCA_TARGET_INFO;

//�򻯵Ĺ�����Ϣ, ��������Ļ�����Ϣ
typedef struct tagNET_VCA_RULE_INFO
{
	BYTE   byRuleID;		    //����ID,0-7
	BYTE   byRes[3];			//����
    BYTE   byRuleName[NAME_LEN]; //��������
	VCA_EVENT_TYPE  dwEventType; //�����¼�����
    NET_VCA_EVENT_UNION uEventParam;//�¼�����
}NET_VCA_RULE_INFO, *LPNET_VCA_RULE_INFO;

//ǰ���豸��ַ��Ϣ�����ܷ����Ǳ�ʾ����ǰ���豸�ĵ�ַ��Ϣ�������豸��ʾ�����ĵ�ַ
typedef struct tagNET_VCA_DEV_INFO
{
	NET_DVR_IPADDR  struDevIP; //ǰ���豸��ַ�� 
	WORD wPort; 			//ǰ���豸�˿ںţ� 
	BYTE byChannel;  		//ǰ���豸ͨ���� 
    BYTE byRes;		// �����ֽ�
} NET_VCA_DEV_INFO, *LPNET_VCA_DEV_INFO;

//��Ϊ��������ϱ��ṹ
typedef struct  tagNET_VCA_RULE_ALARM
{
	DWORD    dwSize;						//�ṹ����
	DWORD    dwRelativeTime;				//���ʱ��
	DWORD    dwAbsTime;						//����ʱ��
	NET_VCA_RULE_INFO     struRuleInfo;		//�¼�������Ϣ
	NET_VCA_TARGET_INFO  struTargetInfo;	//����Ŀ����Ϣ
	NET_VCA_DEV_INFO  	 struDevInfo;		//ǰ���豸��Ϣ
	DWORD dwPicDataLen;						//����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����*/
	DWORD dwRes[4];							//����������Ϊ0
	BYTE  *pImage;   						//ָ��ͼƬ��ָ��
}NET_VCA_RULE_ALARM, *LPNET_VCA_RULE_ALARM;

//����/��ȡ�����ؼ���
NET_DVR_API BOOL __stdcall NET_DVR_SetBehaviorParamKey(LONG lUserID, LONG lChannel, DWORD dwParameterKey,int nValue);
NET_DVR_API BOOL __stdcall NET_DVR_GetBehaviorParamKey(LONG lUserID, LONG lChannel, DWORD dwParameterKey,int *pValue);

//��Ϊ��������DSP��Ϣ���ӽṹ
typedef struct tagNET_VCA_DRAW_MODE
{ 
	DWORD  dwSize;
	BYTE	byDspAddTarget;			//�����Ƿ����Ŀ��
 	BYTE    byDspAddRule;			//�����Ƿ���ӹ���
	BYTE	byDspPicAddTarget;		//ץͼ�Ƿ����Ŀ��
	BYTE	byDspPicAddRule;		//ץͼ�Ƿ���ӹ���
	BYTE	byRes[4];			
}NET_VCA_DRAW_MODE, *LPNET_VCA_DRAW_MODE;

//��ȡ/������Ϊ����Ŀ����ӽӿ�
NET_DVR_API BOOL __stdcall NET_DVR_GetVCADrawMode(LONG lUserID, LONG lChannel, LPNET_VCA_DRAW_MODE lpDrawMode);
NET_DVR_API BOOL __stdcall NET_DVR_SetVCADrawMode(LONG lUserID, LONG lChannel, LPNET_VCA_DRAW_MODE lpDrawMode);

//�궨���ӽṹ
typedef struct tagNET_DVR_CB_POINT
{
 	NET_VCA_POINT struPoint;     //�궨�㣬���������ǹ����
 	NET_DVR_PTZPOS struPtzPos;  //��������PTZ����
	BYTE	byRes[8];
}NET_DVR_CB_POINT, LPNET_DVR_CB_POINT;

//�궨�������ýṹ
typedef struct tagNET_DVR_TRACK_CALIBRATION_PARAM
{	
	BYTE byPointNum;			//��Ч�궨�����
	BYTE byRes[3];				
	NET_DVR_CB_POINT  struCBPoint[MAX_CALIB_PT]; //�궨����
}NET_DVR_TRACK_CALIBRATION_PARAM, *LPNET_DVR_TRACK_CALIBRATION_PARAM;

//������ýṹ
typedef struct tagNET_DVR_TRACK_CFG 
{	
	DWORD dwSize;				//�ṹ����	
    BYTE byEnable;				//�궨ʹ��
    BYTE byFollowChan;          // �����ƵĴ�ͨ��
    BYTE byDomeCalibrate;			//�������ܸ�������궨��1���� 0������ 
    BYTE byRes;					// �����ֽ�
	NET_DVR_TRACK_CALIBRATION_PARAM  struCalParam; //�궨����
}NET_DVR_TRACK_CFG, *LPNET_DVR_TRACK_CFG ;

//����ģʽ
typedef enum _TRACK_MODE_
{
     MANUAL_CTRL = 0,  //�ֶ�����
     ALARM_TRACK,    //������������
     TARGET_TRACK     //Ŀ�����
}TRACK_MODE;

//�ֶ����ƽṹ
typedef struct tagNET_DVR_MANUAL_CTRL_INFO 
{
	NET_VCA_POINT struCtrlPoint;
	BYTE  byRes[8];
}NET_DVR_MANUAL_CTRL_INFO, *LPNET_DVR_MANUAL_CTRL_INFO ;

//����ģʽ�ṹ
typedef struct tagNET_DVR_TRACK_MODE
{
	DWORD dwSize;		//�ṹ����
	BYTE byTrackMode;   //����ģʽ
	BYTE byRes[3];      //��������0
	union
	{
		DWORD dwULen[4];
		NET_DVR_MANUAL_CTRL_INFO  struManualCtrl;//�ֶ����ٽṹ
	}uModeParam;
}NET_DVR_TRACK_MODE,*LPNET_DVR_TRACK_MODE;

//�������ģʽ���ýӿ�

NET_DVR_API BOOL __stdcall NET_DVR_SetTrackMode(LONG lUserID, LONG lChannel, LPNET_DVR_TRACK_MODE lpTrackMode);
NET_DVR_API BOOL __stdcall NET_DVR_GetTrackMode(LONG lUserID, LONG lChannel, LPNET_DVR_TRACK_MODE lpTrackMode);


//ʶ�𳡾�
typedef enum _VCA_RECOGNIZE_SCENE_
{
	VCA_LOW_SPEED_SCENE = 0, 	//����ͨ���������շ�վ��С���ſڡ�ͣ������
	VCA_HIGH_SPEED_SCENE = 1,	//����ͨ�����������ڡ����ٹ�·���ƶ�����)
    VCA_MOBILE_CAMERA_SCENE = 2  //�ƶ������Ӧ�ã� 
} VCA_RECOGNIZE_SCENE;

//ʶ������־
typedef enum _VCA_RECOGNIZE_RESULT_
{
	VCA_RECOGNIZE_FAILURE = 0, 					//ʶ��ʧ��
	VCA_IMAGE_RECOGNIZE_SUCCESS,				//ͼ��ʶ��ɹ�
	VCA_VIDEO_RECOGNIZE_SUCCESS_OF_BEST_LICENSE,//��Ƶʶ����Ž��
	VCA_VIDEO_RECOGNIZE_SUCCESS_OF_NEW_LICENSE, //��Ƶʶ���µĳ���
	VCA_VIDEO_RECOGNIZE_FINISH_OF_CUR_LICENSE   //��Ƶʶ���ƽ���
} VCA_RECOGNIZE_RESULT;

//������ɫ
typedef enum _VCA_PLATE_COLOR_
{
	VCA_BLUE_PLATE  = 0,       //��ɫ����
	VCA_YELLOW_PLATE,          //��ɫ����
	VCA_WHITE_PLATE,          //��ɫ����
	VCA_BLACK_PLATE           //��ɫ����
}VCA_PLATE_COLOR;

//��������
typedef enum _VCA_PLATE_TYPE_
{
	VCA_STANDARD92_PLATE = 0,	//��׼���ó������
	VCA_STANDARD02_PLATE,		//02ʽ���ó��� 
	VCA_WJPOLICE_PLATE,		    //�侯�� 
	VCA_JINGCHE_PLATE,			//����
	STANDARD92_BACK_PLATE  	    //���ó�˫��β��
}VCA_PLATE_TYPE;

//��Ƶʶ�𴥷�����
typedef enum _VCA_TRIGGER_TYPE_
{
	INTER_TRIGGER=0, // ģ���ڲ�����ʶ��
	EXTER_TRIGGER=1 // �ⲿ�����źŴ�������Ȧ���״�ֶ������źţ�
}VCA_TRIGGER_TYPE;

#define MAX_CHINESE_CHAR_NUM 64    // ������������

typedef struct tagNET_DVR_ALARM_JPEG
{
    BYTE    byPicProType;	    /*����ʱͼƬ����ʽ 0-������ 1-�ϴ�*/
    BYTE    byRes[3];           //�����ֽ�
    NET_DVR_JPEGPARA struPicParam; 				/*ͼƬ���ṹ*/
}NET_DVR_ALARM_JPEG, *LPNET_DVR_ALARM_JPEG;

//���ƿɶ�̬�޸Ĳ���
typedef struct tagNET_VCA_PLATE_PARAM
{
	NET_VCA_RECT      struSearchRect;      //��������(��һ��)
	NET_VCA_RECT      struInvalidateRect;  //��Ч���������������ڲ� (��һ��)
    WORD wMinPlateWidth;					//���Ƴ�����С���
    WORD wTriggerDuration;					//��������ʱ�� (����)
    BYTE byRecogniseScene;					//ʶ�𳡾�(0-���٣�1-����)
    BYTE byTriggerType;						//����ģʽ, VCA_TRIGGER_TYPE
    BYTE bySensitivity;						//������
    BYTE byRes[9];							//��������0
    BYTE byCharPriority[MAX_CHINESE_CHAR_NUM]; // �������ȼ�
}NET_VCA_PLATE_PARAM, *LPNET_VCA_PLATE_PARAM;
/*wMinPlateWidth:�ò���Ĭ������Ϊ80���أ��ò��������ö��ڳ��ƺ������ӳ���ʶ��˵���ĵ� 
	ʶ����Ӱ�죬������ù�����ô��������г���С���ƾͻ�©ʶ����������г��ƿ���ձ�ϴ󣬿��԰Ѹò��������Դ󣬱��ڼ��ٶ���ٳ��ƵĴ����ڱ�������½�������Ϊ80�� �ڸ�������½�������Ϊ120
wTriggerDuration �� �ⲿ�����źų���֡�������京���ǴӴ����źſ�ʼʶ���֡��������ֵ�ڵ��ٳ�����������Ϊ50��100�����ٳ�����������Ϊ15��25���ƶ�ʶ��ʱ���Ҳ���ⲿ����������Ϊ15��25��������Ը����ֳ������������
*/

//����ʶ�����ò���
typedef struct tagNET_VCA_PLATECFG
{	
	DWORD dwSize;	
    NET_DVR_ALARM_JPEG struAlarmJpeg;
    NET_VCA_PLATE_PARAM struPlateParam;   //������Ϣ
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
	NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	   //����ʽ
	BYTE byRelRecordChan[MAX_CHANNUM_V30];  //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    BYTE    byRes[12];  //  �������� 
}NET_VCA_PLATECFG, *LPNET_VCA_PLATECFG;

//����ʶ�����ӽṹ
typedef struct tagNET_VCA_PLATE_INFO
{
	VCA_RECOGNIZE_RESULT eResultFlag; //ʶ������־ 
	VCA_PLATE_TYPE  ePlateType;		  //�������� 
	VCA_PLATE_COLOR ePlateColor;		//������ɫ
	NET_VCA_RECT	struPlateRect;		//����λ��
	DWORD    dwRes[4];					//����������Ϊ0 
	DWORD    dwLicenseLen;			//���Ƴ���
	char sLicense[MAX_LICENSE_LEN];		//���ƺ��� 
	char sBelieve[MAX_LICENSE_LEN];		//����ʶ���ַ������Ŷȣ����⵽����"��A12345", ���Ŷ�Ϊ10,20,30,40,50,60,70�����ʾ"��"����ȷ�Ŀ�����ֻ��10%��"A"�ֵ���ȷ�Ŀ�������20%
}NET_VCA_PLATE_INFO, *LPNET_VCA_PLATE_INFO;

//���Ƽ����
typedef struct tagNET_VCA_PLATE_RESULT
{
	DWORD      dwSize;						//�ṹ����
	DWORD    dwRelativeTime;				//���ʱ��
	DWORD    dwAbsTime;						//����ʱ��
	BYTE     byPlateNum;					//���Ƹ���
	BYTE    byRes1[3];			        
	NET_VCA_PLATE_INFO  struPlateInfo[MAX_PLATE_NUM];    //������Ϣ�ṹ
	DWORD dwPicDataLen;						//����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����
	DWORD dwRes2[4];						//����������Ϊ0 ͼƬ�ĸ߿�
	BYTE  *pImage;   						//ָ��ͼƬ��ָ��
}NET_VCA_PLATE_RESULT, *LPNET_VCA_PLATE_RESULT;

//��������Ϊ��������ṹ
//�������ṹ
typedef struct tagNET_IVMS_ONE_RULE_
{
	BYTE    byActive;           /* �Ƿ񼤻����,0-��, ��0-�� */
	BYTE	byRes1[7];	//����������Ϊ0�ֶ�
	BYTE   byRuleName[NAME_LEN]; //��������
	VCA_EVENT_TYPE dwEventType;   //��Ϊ�����¼�����
    NET_VCA_EVENT_UNION uEventParam;//��Ϊ�����¼�����
    NET_VCA_SIZE_FILTER  struSizeFilter;  //�ߴ������
BYTE byRes2[68]; /*����������Ϊ0*/
}NET_IVMS_ONE_RULE, *LPNET_IVMS_ONE_RULE;

// �����ǹ���ṹ
typedef struct tagNET_IVMS_RULECFG
{
	NET_IVMS_ONE_RULE  struRule[MAX_RULE_NUM];   //��������
}NET_IVMS_RULECFG, *LPNET_IVMS_RULECFG;

 // IVMS��Ϊ�������ýṹ
typedef struct tagNET_IVMS_BEHAVIORCFG
{
    DWORD dwSize;
	BYTE    byPicProType;	    //����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
	BYTE    byRes[3];
	NET_DVR_JPEGPARA struPicParam; 				//ͼƬ���ṹ
	NET_IVMS_RULECFG struRuleCfg[MAX_DAYS][MAX_TIMESEGMENT];//ÿ��ʱ��ζ�Ӧ����
} NET_IVMS_BEHAVIORCFG, *LPNET_IVMS_BEHAVIORCFG;

//���ܷ�����ȡ���ƻ��ӽṹ
typedef struct tagNET_IVMS_DEVSCHED
{
	NET_DVR_SCHEDTIME 	struTime;       //ʱ�����
	NET_DVR_PU_STREAM_CFG struPUStream; //ǰ��ȡ������
}NET_IVMS_DEVSCHED, *LPNET_IVMS_DEVSCHED;

//���ܷ����ǲ������ýṹ
typedef struct tagNET_IVMS_STREAMCFG
{
    DWORD dwSize;
	NET_IVMS_DEVSCHED	struDevSched[MAX_DAYS][MAX_TIMESEGMENT];//��ʱ�������ǰ��ȡ���Լ�������Ϣ
} NET_IVMS_STREAMCFG, *LPNET_IVMS_STREAMCFG;

//��������
typedef struct tagNET_VCA_MASK_REGION
{
    BYTE byEnable;			//�Ƿ񼤻�, 0-�񣬷�0-��
	BYTE byRes[3];         //��������0
	NET_VCA_POLYGON  struPolygon; //���ζ����
}NET_VCA_MASK_REGION, * LPNET_VCA_MASK_REGION;

//������������ṹ
typedef struct tagNET_VCA_MASK_REGION_LIST
{
	DWORD dwSize;     //�ṹ����
	BYTE byRes[4];     //��������0
	NET_VCA_MASK_REGION  struMask[MAX_MASK_REGION_NUM]; //������������
}NET_VCA_MASK_REGION_LIST, *LPNET_VCA_MASK_REGION_LIST;


//ATM�����������
typedef struct tagNET_VCA_ENTER_REGION//�������ν�����ˣ���ֹ����ATM���
{
	DWORD dwSize;
    BYTE byEnable;			//�Ƿ񼤻0-�񣬷�0-��
	BYTE byRes1[3];
	NET_VCA_POLYGON  struPolygon; //��������
	BYTE byRes2[16];
}NET_VCA_ENTER_REGION, * LPNET_VCA_ENTER_REGION;

//	�������ܿ�
NET_DVR_API BOOL __stdcall NET_VCA_RestartLib(LONG lUserID, LONG lChannel);

//IVMS������������
typedef struct tagNET_IVMS_MASK_REGION_LIST
{
	DWORD dwSize;    //�ṹ����
	NET_VCA_MASK_REGION_LIST struList[MAX_DAYS][ MAX_TIMESEGMENT];
}NET_IVMS_MASK_REGION_LIST, *LPNET_IVMS_MASK_REGION_LIST;

//IVMS��ATM�����������
typedef struct tagNET_IVMS_ENTER_REGION
{
	DWORD dwSize;
	NET_VCA_ENTER_REGION  struEnter[MAX_DAYS][ MAX_TIMESEGMENT]; //��������
}NET_IVMS_ENTER_REGION, *LPNET_IVMS_ENTER_REGION;

// ivms ����ͼƬ�ϴ��ṹ
typedef struct tagNET_IVMS_ALARM_JPEG
{
    BYTE                byPicProType;               
    BYTE                byRes[3];
    NET_DVR_JPEGPARA      struPicParam;     
}NET_IVMS_ALARM_JPEG, *LPNET_IVMS_ALARM_JPEG;

// IVMS ���������
typedef struct tagNET_IVMS_SEARCHCFG
{
    DWORD                        dwSize;
    NET_DVR_MATRIX_DEC_REMOTE_PLAY struRemotePlay;// Զ�̻ط�
    NET_IVMS_ALARM_JPEG         struAlarmJpeg; // �����ϴ�ͼƬ����
    NET_IVMS_RULECFG           struRuleCfg;   //IVMS ��Ϊ��������
}NET_IVMS_SEARCHCFG, *LPNET_IVMS_SEARCHCFG;

//2009-7-22
#define NET_DVR_GET_AP_INFO_LIST	305//��ȡ����������Դ����
#define NET_DVR_SET_WIFI_CFG		306	//����IP����豸���߲���
#define NET_DVR_GET_WIFI_CFG		307	//��ȡIP����豸���߲���
#define NET_DVR_SET_WIFI_WORKMODE	308	//����IP����豸���ڹ���ģʽ����
#define NET_DVR_GET_WIFI_WORKMODE	309	//��ȡIP����豸���ڹ���ģʽ����

#define IW_ESSID_MAX_SIZE						 32
#define WIFI_WEP_MAX_KEY_COUNT					 4
#define WIFI_WEP_MAX_KEY_LENGTH					 33
#define WIFI_WPA_PSK_MAX_KEY_LENGTH				 63
#define WIFI_WPA_PSK_MIN_KEY_LENGTH				 8
#define WIFI_MAX_AP_COUNT						 20

typedef struct tagNET_DVR_AP_INFO
{
	char  sSsid[IW_ESSID_MAX_SIZE];
	DWORD  dwMode;						/* 0 mange ģʽ;1 ad-hocģʽ���μ�NICMODE */
	DWORD  dwSecurity;           /*0 �����ܣ�1 wep���ܣ�2 wpa-psk;3 wpa-Enterprise���μ�WIFISECURITY*/
	DWORD  dwChannel;            /*1-11��ʾ11��ͨ��*/
	DWORD  dwSignalStrength;    /*0-100�ź���������Ϊ��ǿ*/
	DWORD  dwSpeed;               /*����,��λ��0.01mbps*/
}NET_DVR_AP_INFO,*LPNET_DVR_AP_INFO;

typedef struct tagNET_DVR_AP_INFO_LIST
{
	DWORD dwSize;
	DWORD dwCount;        /*����AP������������20*/
	NET_DVR_AP_INFO struApInfo[WIFI_MAX_AP_COUNT];
}NET_DVR_AP_INFO_LIST,*LPNET_DVR_AP_INFO_LIST;

typedef struct tagNET_DVR_WIFIETHERNET
{	
	char sIpAddress[16];				/*IP��ַ*/
	char sIpMask[16];					/*����*/	
	BYTE	byMACAddr[MACADDR_LEN];		/*�����ַ��ֻ������ʾ*/
	BYTE	bRes[2];
	DWORD	dwEnableDhcp;				/*�Ƿ�����dhcp  0������ 1����*/
	DWORD	dwAutoDns;					/*�������dhcp�Ƿ��Զ���ȡdns,0���Զ���ȡ 1�Զ���ȡ�����������������dhcpĿǰ�Զ���ȡdns*/	
	char sFirstDns[16];						 /*��һ��dns����*/
	char sSecondDns[16];					 /*�ڶ���dns����*/
	char sGatewayIpAddr[16]; 				/* ���ص�ַ*/
	BYTE   bRes2[8];
}NET_DVR_WIFIETHERNET,*LPNET_DVR_WIFIETHERNET;

typedef struct tagNET_DVR__WIFI_CFG_EX
{
	NET_DVR_WIFIETHERNET struEtherNet;        /*wifi����*/
	char sEssid[IW_ESSID_MAX_SIZE];	 /*SSID*/
	DWORD dwMode;      /* 0 mange ģʽ;1 ad-hocģʽ���μ�*/
	DWORD dwSecurity; /*0 �����ܣ�1 wep���ܣ�2 wpa-psk; */
	union 
	{
		struct 
		{
			DWORD dwAuthentication;/*0 -����ʽ 1-����ʽ*/
			DWORD dwKeyLength;/* 0 -64λ��1- 128λ��2-152λ*/
			DWORD dwKeyType;/*0 16����;1 ASCI */
			DWORD dwActive;/*0 ������0---3��ʾ����һ����Կ*/
			char sKeyInfo[WIFI_WEP_MAX_KEY_COUNT][WIFI_WEP_MAX_KEY_LENGTH];
		}wep;
		struct 
		{
			DWORD dwKeyLength;/*8-63��ASCII�ַ�*/
			char sKeyInfo[WIFI_WPA_PSK_MAX_KEY_LENGTH];
			char sRes;
		}wpa_psk;
		
	}key;	
}NET_DVR_WIFI_CFG_EX,*LPNET_DVR_WIFI_CFG_EX;

//wifi���ýṹ
typedef struct tagNET_DVR_WIFI_CFG
{
	DWORD dwSize;
	NET_DVR_WIFI_CFG_EX struWifiCfg;
}NET_DVR_WIFI_CFG,*LPNET_DVR_WIFI_CFG;

//wifi����ģʽ
typedef struct tagNET_DVR_WIFI_WORKMODE
{
	DWORD dwSize;
	DWORD dwNetworkInterfaceMode; /*0 �Զ��л�ģʽ��1 ����ģʽ*/
}NET_DVR_WIFI_WORKMODE,*LPNET_DVR_WIFI_WORKMODE;

NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData_V30(LONG lRealHandle, DWORD dwTransType, char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_EncodeG711Frame(unsigned int iType, unsigned char *pInBuffer, unsigned char *pOutBuffer);
NET_DVR_API BOOL __stdcall NET_DVR_DecodeG711Frame(unsigned int iType, unsigned char *pInBuffer, unsigned char *pOutBuffer);
//2009-7-22 end

//����Ӳ�̽ṹ����
typedef struct tagNET_DVR_SINGLE_NET_DISK_INFO
{
	BYTE byRes1[4];							//����
    NET_DVR_IPADDR struNetDiskAddr;			//����Ӳ�̵�ַ
    BYTE sDirectory[PATHNAME_LEN];			// PATHNAME_LEN = 128
	BYTE byRes2[68];							//����
}NET_DVR_SINGLE_NET_DISK_INFO, *LPNET_DVR_SINGLE_NET_DISK_INFO;

#define MAX_NET_DISK	16//�������Ӳ�̸���

typedef struct tagNET_DVR_NET_DISKCFG 
{
    DWORD  dwSize;
    NET_DVR_SINGLE_NET_DISK_INFO struNetDiskParam[MAX_NET_DISK];
}NET_DVR_NET_DISKCFG, *LPNET_DVR_NET_DISKCFG;

//�¼�����
//������
typedef enum _MAIN_EVENT_TYPE_
{
	EVENT_MOT_DET = 0,		//�ƶ����
	EVENT_ALARM_IN = 1,		//��������
	EVENT_VCA_BEHAVIOR = 2	//��Ϊ����
}MAIN_EVENT_TYPE;

//��Ϊ���������Ͷ�Ӧ�Ĵ����ͣ� 0xffff��ʾȫ��
typedef enum _BEHAVIOR_MINOR_TYPE_
{
	EVENT_TRAVERSE_PLANE     = 0,    // ��Խ������,
	EVENT_ENTER_AREA,				//Ŀ���������,֧���������
	EVENT_EXIT_AREA,				//Ŀ���뿪����,֧���������
	EVENT_INTRUSION,				 // �ܽ�����,֧���������
	EVENT_LOITER,				 //�ǻ�,֧���������
	EVENT_LEFT_TAKE,				//�������,֧���������
	EVENT_PARKING,					//ͣ��,֧���������
	EVENT_RUN,					//����,֧���������
	EVENT_HIGH_DENSITY,
    EVENT_OBJECT_PASTE	    =20		// ����ճ������
}BEHAVIOR_MINOR_TYPE;


#define SEARCH_EVENT_INFO_LEN 300	//�¼���Ϣ����

//�¼���������
typedef struct tagNET_DVR_SEARCH_EVENT_PARAM
{
	WORD wMajorType;			//0-�ƶ���⣬1-��������, 2-�����¼�
	WORD wMinorType;			//����������- ���������ͱ仯��0xffff��ʾȫ��
	NET_DVR_TIME struStartTime;	//�����Ŀ�ʼʱ�䣬ֹͣʱ��: ͬʱΪ(0, 0) ��ʾ�������ʱ�俪ʼ���������ǰ���4000���¼�
	NET_DVR_TIME struEndTime;	//
	BYTE byRes[132];			//����
	union	
	{
		BYTE byLen[SEARCH_EVENT_INFO_LEN];		  
		struct//��������
		{
			BYTE byAlarmInNo[MAX_ALARMIN_V30];    //��������ţ�byAlarmInNo[0]����1���ʾ�����ɱ�������1�������¼�
			BYTE byRes[SEARCH_EVENT_INFO_LEN - MAX_ALARMIN_V30];
		}struAlarmParam;
		struct//�ƶ����
		{
			BYTE byMotDetChanNo[MAX_CHANNUM_V30];//�ƶ����ͨ����byMotDetChanNo[0]����1���ʾ������ͨ��1�����ƶ���ⴥ�����¼�
			BYTE byRes[SEARCH_EVENT_INFO_LEN - MAX_CHANNUM_V30];
		}struMotionParam;
		struct//��Ϊ����
		{
			BYTE byChanNo[MAX_CHANNUM_V30];	//�����¼���ͨ��
			BYTE byRuleID;					//����ID��0xff��ʾȫ��
			BYTE byRes1[43];				//����
		}struVcaParam;
	}uSeniorParam;
}NET_DVR_SEARCH_EVENT_PARAM, *LPNET_DVR_SEARCH_EVENT_PARAM;

//���ҷ��ؽ��
typedef struct tagNET_DVR_SEARCH_EVENT_RET
{
	WORD wMajorType;			//������
	WORD wMinorType;			//������
	NET_DVR_TIME struStartTime;	//�¼���ʼ��ʱ��
	NET_DVR_TIME struEndTime;   //�¼�ֹͣ��ʱ�䣬�����¼�ʱ�Ϳ�ʼʱ��һ��
	BYTE byChan[MAX_CHANNUM_V30];	
	BYTE byRes[36];
	union		
	{
		struct//����������
		{
			DWORD dwAlarmInNo;     //���������
			BYTE byRes[SEARCH_EVENT_INFO_LEN];
		}struAlarmRet;
		struct//�ƶ������
		{
			DWORD dwMotDetNo;	//�ƶ����ͨ��
			BYTE byRes[SEARCH_EVENT_INFO_LEN];
		}struMotionRet;
		struct//��Ϊ�������  
		{
			DWORD dwChanNo;					//�����¼���ͨ����
			BYTE byRuleID;					//����ID
			BYTE byRes1[3];					//����
			BYTE byRuleName[NAME_LEN];		//��������
			NET_VCA_EVENT_UNION uEvent;     //��Ϊ�¼�������wMinorType = VCA_EVENT_TYPE�����¼�����
		}struVcaRet;
	}uSeniorRet;
}NET_DVR_SEARCH_EVENT_RET, *LPNET_DVR_SEARCH_EVENT_RET;

NET_DVR_API LONG __stdcall NET_DVR_FindFileByEvent(LONG lUserID, LPNET_DVR_SEARCH_EVENT_PARAM  lpSearchEventParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextEvent(LONG lSearchHandle, LPNET_DVR_SEARCH_EVENT_RET lpSearchEventRet);
//ֹͣ���� NET_DVR_FindClose

//ͼ����ǿ��
//ͼ����ǿȥ����������
typedef struct tagIMAGEREGION
{
    DWORD dwSize ;//�ܵĽṹ����
    WORD wImageRegionTopLeftX;			/* ͼ����ǿȥ�������x���� */
    WORD wImageRegionTopLeftY;			/* ͼ����ǿȥ�������y���� */
    WORD wImageRegionWidth;			/* ͼ����ǿȥ������Ŀ� */
    WORD wImageRegionHeight;			/*ͼ����ǿȥ������ĸ�*/ 
    BYTE  byRes[16] ;					
} NET_DVR_IMAGEREGION, *LPNET_DVR_IMAGEREGION;

//ͼ����ǿ��ȥ�뼶���ȶ���ʹ������
typedef struct tagIMAGESUBPARAM
{
    NET_DVR_SCHEDTIME	struImageStatusTime;//ͼ��״̬ʱ���
    BYTE	byImageEnhancementLevel ;//ͼ����ǿ�ļ���0-9��0��ʾ�ر�
    BYTE	byImageDenoiseLevel ;//ͼ��ȥ��ļ���0-9��0��ʾ�ر�
    BYTE	byImageStableEnable;//ͼ���ȶ���ʹ�ܣ�0��ʾ�رգ�1��ʾ��
    BYTE    byRes[9] ;					
} NET_DVR_IMAGESUBPARAM, *LPNET_DVR_IMAGESUBPARAM;
#define     NET_DVR_GET_IMAGEREGION              1062       //ͼ����ǿ��ͼ����ǿȥ�������ȡ
#define     NET_DVR_SET_IMAGEREGION              1063       //ͼ����ǿ��ͼ����ǿȥ�������ȡ
#define     NET_DVR_GET_IMAGEPARAM               1064       // ͼ����ǿ��ͼ�����(ȥ�롢��ǿ�����ȶ���ʹ��)��ȡ
#define     NET_DVR_SET_IMAGEPARAM               1065       // ͼ����ǿ��ͼ�����(ȥ�롢��ǿ�����ȶ���ʹ��)����
typedef struct tagIMAGEPARAM
{
    DWORD	 dwSize;
    //ͼ����ǿʱ��β�������	   	
    NET_DVR_IMAGESUBPARAM struImageParamSched[MAX_DAYS][MAX_TIMESEGMENT];
    BYTE  byRes[16] ;					
} NET_DVR_IMAGEPARAM, *LPNET_DVR_IMAGEPARAM;
NET_DVR_API BOOL __stdcall NET_DVR_GetParamSetMode(LONG lUserID, DWORD *dwParamSetMode);
//SDK_V35  2009-10-26
// �������������
typedef enum 
{
    DETECTION_AREA = 0, // �������
    ENTER_AREA  = 1     //��������
}DETECT_TYPE;
typedef struct tagNET_DVR_DETECT_RECT
{
    NET_VCA_RECT  struVcaRect; // ��������
    BYTE            byDetectType;  //�������� ���DETECT_TYPE 
    BYTE            byRes1[7];		// �����ֽ�
}NET_DVR_DETECT_RECT, *LPNET_DVR_DETECT_RECT;
#define MAX_DETECT_RECT 8  // ������������
typedef struct tagNET_DVR_DETECT_RECT_LIST
{	
    BYTE    byDetectNum;    // ����������
    BYTE    byRes1[3];      //�����ֽ� 
    NET_DVR_DETECT_RECT struDetectRect[MAX_DETECT_RECT]; // ��������б�
}NET_DVR_DETECT_RECT_LIST, *LPNET_DVR_DETECT_RECT_LIST;


typedef struct tagNET_DVR_DETECT_RULECFG
{
    DWORD dwSize;       // �ṹ��С
    NET_DVR_DETECT_RECT_LIST struDetectRectList;
    NET_DVR_ALARM_JPEG struAlarmJpeg;	// �����ϴ�ͼƬ
    BYTE byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    NET_DVR_HANDLEEXCEPTION_V30 struHandleType;//����ʽ
    NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
    BYTE byRes2[40];
}NET_DVR_DETECT_RULECFG, *LPNET_DVR_DETECT_RULECFG;


// ��������ʶ���ڲ������ؼ���
typedef enum _FACE_PARAM_KEY_
{
    MAX_FACE_SIZE = 20, // ���������С
        MINI_FACE_SIZE = 21	// ��С������С
}FACE_PARAM_KEY;  // ����ʶ���ڲ�����

// �궨��������
typedef enum tagCALIBRATE_TYPE
{
    PDC_CALIBRATE  = 0x01  // PDC �궨
}CALIBRATE_TYPE;



#define MAX_RECT_NUM  6
typedef struct tagNET_DVR_RECT_LIST
{	
    BYTE    byRectNum;    // ���ο�ĸ���
    BYTE    byRes1[11];  //�����ֽ� 
    NET_VCA_RECT struVcaRect[MAX_RECT_NUM]; // ���Ϊ6��Rect 
}NET_DVR_RECT_LIST, *LPNET_DVR_RECT_LIST;

// PDC �궨����
typedef struct tagNET_DVR_PDC_CALIBRATION
{
    NET_DVR_RECT_LIST struRectList;       // �궨���ο��б�
    BYTE           byRes[120];       // �����ֽ� 
}NET_DVR_PDC_CALIBRATION, *LPNET_DVR_PDC_CALIBRATION;

// �궨����������
// ��������ر궨�������Է��ڸýṹ����
typedef union tagNET_DVR_CALIBRATION_PRARM_UNION
{
    BYTE byRes[240];                    //������ṹ��С
    NET_DVR_PDC_CALIBRATION struPDCCalibration;  //PDC �궨����
}NET_DVR_CALIBRATION_PRARM_UNION, *LPNET_DVR_CALIBRATION_PRARM_UNION;

// �궨���ýṹ
typedef struct tagNET_DVR_CALIBRATION_CFG
{
    DWORD   dwSize;               //�궨�ṹ��С
    BYTE    byEnable;           // �Ƿ����ñ궨
    BYTE    byCalibrationType;    // �궨���� ���ݲ�ͬ��������������ѡ��ͬ�ı궨 �ο�CALIBRATE_TYPE
    BYTE    byRes1[2];
    NET_DVR_CALIBRATION_PRARM_UNION uCalibrateParam;  // �궨����������
    BYTE    byRes2[12];
}NET_DVR_CALIBRATION_CFG, *LPNET_DVR_CALIBRATION_CFG; 

//����ͳ�Ʒ���ṹ��
typedef struct  tagNET_DVR_PDC_ENTER_DIRECTION
{
    NET_VCA_POINT struStartPoint; //����ͳ�Ʒ�����ʼ��
    NET_VCA_POINT struEndPoint;    // ����ͳ�Ʒ�������� 
}NET_DVR_PDC_ENTER_DIRECTION, *LPNET_DVR_PDC_ENTER_DIRECTION;

typedef struct tagNET_DVR_PDC_RULE_CFG
{
    DWORD           dwSize;              //�ṹ��С
    BYTE            byEnable;             // �Ƿ񼤻����;
    BYTE            byRes1[23];       // �����ֽ� 
    NET_VCA_POLYGON          struPolygon;            // �����
    NET_DVR_PDC_ENTER_DIRECTION  struEnterDirection;    // �������뷽��
} NET_DVR_PDC_RULE_CFG, *LPNET_DVR_PDC_RULE_CFG;

//����������ͳ�Ʋ���  ������Ϊ�ڲ��ؼ��ֲ��� 
// HUMAN_GENERATE_RATE
// Ŀ�������ٶȲ���������PDC������Ŀ����ٶȡ��ٶ�Խ�죬Ŀ��Խ�������ɡ���������Ƶ���������ϲ�ԱȶȽϵ�ʱ���������õĹ��������Сʱ��Ӧ�ӿ�Ŀ�������ٶȣ� ����Ŀ���©�죻��������Ƶ�жԱȶȽϸ�ʱ�����߹�������ϴ�ʱ��Ӧ�ý���Ŀ�������ٶȣ��Լ�����졣Ŀ�������ٶȲ�������5����1���ٶ�������5����죬Ĭ�ϲ���Ϊ3��
// 
// DETECT_SENSITIVE
// Ŀ���������ȿ��Ʋ���������PDC����һ���������򱻼��ΪĿ��������ȡ�������Խ�ߣ���������Խ���ױ����ΪĿ�꣬������Խ����Խ�Ѽ��ΪĿ�ꡣ��������Ƶ���������ϲ�ԱȶȽϵ�ʱ��Ӧ��߼�������ȣ� ����Ŀ���©�죻��������Ƶ�жԱȶȽϸ�ʱ��Ӧ�ý��ͼ�������ȣ��Լ�����졣��Ӧ��������5��������1��������ͣ�5����ߣ�Ĭ�ϼ���Ϊ3��
// TRAJECTORY_LEN
// �켣���ɳ��ȿ��Ʋ�������ʾ���ɹ켣ʱҪ��Ŀ������λ�����ء���Ӧ��������5��������1�����ɳ�������켣����������5�����ɳ�����̣��켣������죬Ĭ�ϼ���Ϊ3��
// TRAJECT_CNT_LEN
// �켣�������ȿ��Ʋ�������ʾ�켣����ʱҪ��Ŀ������λ�����ء���Ӧ��������5��������1������Ҫ�󳤶�����켣����������5������Ҫ�󳤶���̣��켣������죬Ĭ�ϼ���Ϊ3��
// PREPROCESS
// ͼ��Ԥ������Ʋ�����0 - ������1 - ����Ĭ��Ϊ0��
// CAMERA_ANGLE
// ������Ƕ���������� 0 - ��б�� 1 - ��ֱ��Ĭ��Ϊ0��
typedef enum tagPDC_PARAM_KEY
{
    HUMAN_GENERATE_RATE = 50,              // Ŀ�������ٶ� ��50��ʼ
    DETECT_SENSITIVE    = 51,               // ���������
    TRAJECTORY_LEN      = 52,               // �켣���ɳ��ȿ��Ʋ���
    TRAJECT_CNT_LEN     = 53,               // �켣�������ȿ��Ʋ���
    PREPROCESS          = 54,               // ͼ��Ԥ������Ʋ���
    CAMERA_ANGLE        = 55                // ������Ƕ��������
}PDC_PARAM_KEY;

#define  COMM_ALARM_PDC				0x1103	//�������������ϴ�
typedef struct tagNET_DVR_PDC_TARGET_INFO
{
    DWORD       dwTargetID;                 // Ŀ��id 
    NET_VCA_RECT struTargetRect;               // Ŀ���
    BYTE      byRes1[8];        // �����ֽ�
}NET_DVR_PDC_TARGET_INFO, *LPNET_DVR_PDC_TARGET_INFO;

typedef struct tagNET_DVR_PDC_TARGET_IN_FRAME
{
    BYTE           byTargetNum;                   //Ŀ�����
    BYTE            byRes1[3];
        NET_DVR_PDC_TARGET_INFO  struTargetInfo[MAX_TARGET_NUM];   //Ŀ����Ϣ����
    BYTE    byRes2[8];                  // �����ֽ�
}NET_DVR_PDC_TARGET_IN_FRAME, *LPNET_DVR_PDC_TARGET_IN_FRAME;

typedef struct tagNET_DVR_PDC_ALRAM_INFO
{
    DWORD                       dwSize;           // PDC�����������ϴ��ṹ���С
    BYTE                        byMode;            // 0 ��֡ͳ�ƽ�� 1��Сʱ���ͳ�ƽ��  
    BYTE                        byChannel;           // �����ϴ�ͨ����
    BYTE                        byRes1[2];         // �����ֽ�   
    NET_VCA_DEV_INFO  	 struDevInfo;		        //ǰ���豸��Ϣ
    union		
    {
        struct   // ��֡ͳ�ƽ��ʱʹ��
        {
            DWORD   dwRelativeTime;     // ���ʱ��
            DWORD   dwAbsTime;          // ����ʱ��
            BYTE    byRes[92];            
        }struStatFrame;
        struct
        {
            NET_DVR_TIME                      tmStart; // ͳ����ʼʱ�� 
            NET_DVR_TIME                      tmEnd;  //  ͳ�ƽ���ʱ�� 
            BYTE byRes[92];
        }struStatTime;
    }uStatModeParam;  // ��Ϊһ�������� ��֡��ʱ�����֡��Ŀ����Ϣ ��Сʱ���ͳ�ƽ����Ҫͳ��ʱ�� ����
    DWORD                       dwLeaveNum;        // �뿪����
    DWORD                       dwEnterNum;        // ��������
    BYTE                        byRes2[40];           // �����ֽ�
}NET_DVR_PDC_ALRAM_INFO, *LPNET_DVR_PDC_ALRAM_INFO;


//  ��������Ϣ��ѯ 
typedef struct tagNET_DVR_PDC_QUERY
{
    NET_DVR_TIME tmStart;
    NET_DVR_TIME tmEnd;
    DWORD       dwLeaveNum;
    DWORD        dwEnterNum; 
    BYTE        byRes1[256];

}NET_DVR_PDC_QUERY, *LPNET_DVR_PDC_QUERY;

NET_DVR_API LONG __stdcall NET_DVR_FindPDCInfo(LONG lUserID, LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API LONG __stdcall NET_DVR_FindNextPDCInfo(LONG lFindHandle,LPNET_DVR_PDC_QUERY lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindPDCClose(LONG lFindHandle);

// �궨У�� 
#define NET_DVR_PDC_VERIFY_CALIBRATION  1  //��ֵΪ1��ΪPDC�궨У�� pdc����ֵΪNET_VCA_POINT   ����ֵΪ NET_VCA_RECT�ṹ
NET_DVR_API BOOL __stdcall NET_DVR_VerifyCalibration(LONG lUserID, DWORD dwCommand, LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize, LPVOID lpOuterBuffer, DWORD dwOuterBufferSize);

NET_DVR_API BOOL __stdcall  NET_DVR_ResetCounter(LONG lUserID,LONG lChannel);

typedef struct    tagNET_DVR_PTZ_POSITION
{
    BYTE byVcaPtzId; //ptz������������ ID
    BYTE byRes1[3];  //����
    BYTE byPtzPositionName[NAME_LEN]; //����λ������
    NET_DVR_PTZPOS struPtzPos; //ptz ����
    BYTE byRes2[40];
}NET_DVR_PTZ_POSITION, *LPNET_DVR_PTZ_POSITION;

typedef struct tagNET_DVR_POSITION_RULE_CFG
{
    DWORD                   dwSize;             // �ṹ��С 
    NET_DVR_PTZ_POSITION    struPtzPosition;    // ����λ����Ϣ
    NET_VCA_RULECFG         struVcaRuleCfg;     //��Ϊ��������
    BYTE                    byRes2[80];         // �����ֽ�
}NET_DVR_POSITION_RULE_CFG, *LPNET_DVR_POSITION_RULE_CFG;

//09-11-21
typedef struct 
{
    NET_DVR_TIME strLogTime;
    DWORD	dwMajorType;	//Main type 1-alarm; 2-abnormal; 3-operation; 0xff-all 
    DWORD	dwMinorType;	//Hypo-Type 0-all;
    BYTE	sPanelUser[MAX_NAMELEN]; //user ID for local panel operation
    BYTE	sNetUser[MAX_NAMELEN];//user ID for network operation
    NET_DVR_IPADDR	struRemoteHostAddr;//remote host IP
    DWORD	dwParaType;//parameter type
    DWORD	dwChannel;//channel number
    DWORD	dwDiskNumber;//HD number
    DWORD	dwAlarmInPort;//alarm input port
    DWORD	dwAlarmOutPort;//alarm output port
    DWORD   dwInfoLen;
    BYTE  byDevSequence;//��λ��
    BYTE  byMacAddr[MACADDR_LEN];//MAC��ַ,6
    BYTE  sSerialNumber[SERIALNO_LEN];//���кţ�48
    char  sInfo[LOG_INFO_LEN - SERIALNO_LEN - MACADDR_LEN - 1 ];
}NET_DVR_LOG_MATRIX, *LPNET_DVR_LOG_MATRIX;
NET_DVR_API LONG __stdcall NET_DVR_FindNextLog_MATRIX(LONG lLogHandle, LPNET_DVR_LOG_MATRIX lpLogData);
//2009-11-21 ��Ƶ�ۺ�ƽ̨
typedef struct tagVEDIOPLATLOG
{
    BYTE bySearchCondition;//����������0-����λ��������1-�����к�������                          							//2-��MAC��ַ��������
    BYTE byDevSequence;//��λ�ţ�0-79����Ӧ��ϵͳ�Ĳ�λ�ţ�
    //0xff����ʾ�������е���־������78K������6467��
    //0xfe����ʾ����78K�ϵ���־��
    BYTE  sSerialNumber[SERIALNO_LEN];//���кţ�48
    BYTE  byMacAddr[MACADDR_LEN];//MAC��ַ,6
} NET_DVR_VEDIOPLATLOG, *LPNET_DVR_VEDIOPLATLOG;
//2009-11-21
NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog_Matrix(LONG lUserID, LONG lSelectMode, DWORD dwMajorType, DWORD dwMinorType, LPNET_DVR_VEDIOPLATLOG lpVedioPlatLog, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
//2009-12-17 ������Ƶ�ۺ�ƽ̨������ϵͳ������
#define VIDEOPLATFORM_SBUCODESYSTEM_ABILITY          0x211 //��Ƶ�ۺ�ƽ̨������ϵͳ������
typedef struct tagNET_DVR_CODESYSTEMABILITY
{
    DWORD dwSize;
    DWORD dwAbilityVersion;//�������汾�ţ���16λ��ʾ���汾����16λ��ʾ�ΰ汾 
    DWORD dwSupportMaxVideoFrameRate;//��λ(K)
	/*��λ:
	0:��ʱ¼��
	1:��ʱ|�¼�����¼�� 
	2:�ƶ����¼��
	3:���翪��������¼��
	4:�ƶ����|���翪��������¼��
	5:�ƶ����&���翪��������¼��
	6:�ܽ��������¼��
	7:������ⴥ��¼��
	8:����ʶ�𴥷�¼��
	9:�ֶ�¼��*/
    DWORD dwSupportRecordType;
    BYTE  bySupportLinkMode;//��λ:��0λ:��ʾ����������1λ:��ʾ������
    BYTE  byRes[71];//����
}NET_DVR_CODESYSTEMABILITY, *LPNET_DVR_CODESYSTEMABILITY;
//2009-10-26 ץ�Ļ����� begin

#define NET_DVR_GET_CCDPARAMCFG              1067       //IPC��ȡCCD��������
#define NET_DVR_SET_CCDPARAMCFG              1068       //IPC����CCD��������

#define NET_DVR_GET_IOINCFG		                1070    //��ȡץ�Ļ�IO�������
#define NET_DVR_SET_IOINCFG		                1071	 //����ץ�Ļ�IO�������

#define NET_DVR_GET_IOOUTCFG		            1072    //��ȡץ�Ļ�IO�������
#define NET_DVR_SET_IOOUTCFG		            1073	 //����ץ�Ļ�IO�������

#define NET_DVR_GET_FLASHCFG		            1074    //��ȡIO������������
#define NET_DVR_SET_FLASHCFG		            1075	 //����IO������������

#define NET_DVR_GET_LIGHTSNAPCFG		        1076    //��ȡץ�Ļ����̵Ʋ���
#define NET_DVR_SET_LIGHTSNAPCFG	        	1077	 //����ץ�Ļ����̵Ʋ���

#define NET_DVR_GET_MEASURESPEEDCFG		        1078    //��ȡץ�Ļ����ٲ���
#define NET_DVR_SET_MEASURESPEEDCFG		        1079	 //����ץ�Ļ����ٲ���

#define NET_DVR_GET_IMAGEOVERLAYCFG	            1080//��ȡץ�Ļ�ͼ�������Ϣ����
#define NET_DVR_SET_IMAGEOVERLAYCFG	            1081//����ץ�Ļ�ͼ�������Ϣ����

#define NET_DVR_GET_SNAPCFG	                    1082//��ȡ��IO����ץ�Ĺ�������
#define NET_DVR_SET_SNAPCFG	                    1083//���õ�IO����ץ�Ĺ�������

#define NET_DVR_GET_VTPPARAM		            1084//��ȡ������Ȧ����
#define NET_DVR_SET_VTPPARAM		            1085//����������Ȧ����

#define NET_DVR_GET_SNAPENABLECFG					1086//��ȡץ�Ļ�ʹ�ܲ���
#define NET_DVR_SET_SNAPENABLECFG					1087//����ץ�Ļ�ʹ�ܲ���

//IO��������
typedef struct tagNET_DVR_IO_INCFG
{
    DWORD   dwSize;
    BYTE    byIoInStatus;//�����IO��״̬��0-�½��أ�1-�����أ�2-�����غ��½��أ�3-�ߵ�ƽ��4-�͵�ƽ
    BYTE	byRes[3];//�����ֽ�
}NET_DVR_IO_INCFG, *LPNET_DVR_IO_INCFG;

//IO�������
typedef struct tagNET_DVR_IO_OUTCFG
{
    DWORD   dwSize;
    BYTE    byDefaultStatus;//IOĬ��״̬��0-�͵�ƽ��1-�ߵ�ƽ 
    BYTE    byIoOutStatus;//IO��Чʱ״̬��0-�͵�ƽ��1-�ߵ�ƽ��2-����
    BYTE    byRes1[2];
    DWORD   dwTimePluse;//������ʱ�䣬��λus
    DWORD   dwTimeDelay;//IO��Ч����ʱ�䣬��λus
    BYTE    byRes2[4];
}NET_DVR_IO_OUTCFG, *LPNET_DVR_IO_OUTCFG;

//���������
typedef struct tagNET_DVR_FLASH_OUTCFG
{
    DWORD  dwSize;
    BYTE   byMode;//�������˸ģʽ��0-������1-����2-��������3-����
    BYTE   byRelatedIoIn;//����ƹ���������IO�ţ�������ʱ�˲�����Ч��
    BYTE   byRes[10];
}NET_DVR_FLASH_OUTCFG, *LPNET_DVR_FLASH_OUTCFG;

//���̵ƹ��ܣ�2��IO����һ�飩
typedef struct tagNET_DVR_LIGHTSNAPCFG
{
    DWORD   dwSize;
    BYTE	byLightIoIn;//���̵Ƶ�IO ��
    BYTE	byTrigIoIn;//������IO��
    BYTE	byRelatedDriveWay;//����IO�����ĳ�����
    BYTE	byTrafficLight; //0-�ߵ�ƽ��ƣ��͵�ƽ�̵ƣ�1-�ߵ�ƽ�̵ƣ��͵�ƽ���
    BYTE 	bySnapTimes1; //���ץ�Ĵ���1��0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE 	bySnapTimes2; //�̵�ץ�Ĵ���2��0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE	byRes1[2];
    WORD	wIntervalTime1[4];//������ļ��ʱ�䣬ms
    WORD	wIntervalTime2[4];//�̵����ļ��ʱ�䣬ms
    BYTE	byRecord;//���������¼���־��0-��¼��1-¼��
    BYTE	bySessionTimeout;//���������¼��ʱʱ�䣨�룩
    BYTE	byPreRecordTime;//�����¼��Ƭ��Ԥ¼ʱ��(��)
    BYTE	byVideoDelay;//�����¼��Ƭ����ʱʱ�䣨�룩
    BYTE	byRes2[32];//�����ֽ�
}NET_DVR_LIGHTSNAPCFG, *LPNET_DVR_LIGHTSNAPCFG;

//���ٹ���(2��IO����һ�飩
typedef struct tagNET_DVR_MEASURESPEEDCFG
{
    DWORD   dwSize;
    BYTE	byTrigIo1;   //���ٵ�1��Ȧ
    BYTE	byTrigIo2;   //���ٵ�2��Ȧ
    BYTE	byRelatedDriveWay;//����IO�����ĳ�����
    BYTE	byTestSpeedTimeOut;//����ģʽ��ʱʱ�䣬��λs
    DWORD   dwDistance;//��Ȧ����,cm
    BYTE	byCapSpeed;//����ģʽ�����ٶȣ���λkm/h
    BYTE	bySpeedLimit;//����ֵ����λkm/h
    BYTE 	bySnapTimes1; //��Ȧ1ץ�Ĵ�����0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE 	bySnapTimes2; //��Ȧ2ץ�Ĵ�����0-��ץ�ģ���0-���Ĵ��������5�� 
    WORD	wIntervalTime1[4];//��Ȧ1���ļ��ʱ�䣬ms
    WORD	wIntervalTime2[4];//��Ȧ2���ļ��ʱ�䣬ms
    BYTE	byRes[32];//�����ֽ�
}NET_DVR_MEASURESPEEDCFG, *LPNET_DVR_MEASURESPEEDCFG;

//��Ƶ��������
typedef struct tagNET_DVR_VIDEOEFFECT
{
    BYTE byBrightnessLevel; /*0-100*/
    BYTE byContrastLevel; /*0-100*/
    BYTE bySharpnessLevel; /*0-100*/
    BYTE bySaturationLevel; /*0-100*/
    BYTE byHueLevel; /*0-100,��������*/
    BYTE byRes[3];
}NET_DVR_VIDEOEFFECT, *LPNET_DVR_VIDEOEFFECT;

//��������
typedef struct tagNET_DVR_GAIN
{
    BYTE byGainLevel; /*���棺0-100*/
    BYTE byGainUserSet; /*�û��Զ������棻0-100*/
    BYTE byRes[2];
    DWORD byMaxGainValue;/*�������ֵ����λdB*/
}NET_DVR_GAIN, *LPNET_DVR_GAIN;

//��ƽ������
typedef struct tagNET_DVR_WHITEBALANCE
{
    BYTE byWhiteBalanceMode; /*0�ֶ���ƽ��; 1�Զ���ƽ��1����ΧС��; 2 �Զ���ƽ��2����Χ��2200K-15000K��;3�Զ�����3*/
    BYTE byWhiteBalanceModeRGain; /*�ֶ���ƽ��ʱ��Ч���ֶ���ƽ�� R����*/
    BYTE byWhiteBalanceModeBGain; /*�ֶ���ƽ��ʱ��Ч���ֶ���ƽ�� B����*/
    BYTE byRes[5];
}NET_DVR_WHITEBALANCE, *LPNET_DVR_WHITEBALANCE;

//�ع����
typedef struct tagNET_DVR_EXPOSURE
{
    BYTE  byExposureMode; /*0 �ֶ��ع� 1�Զ��ع�*/
    BYTE  byRes[3];
    DWORD dwVideoExposureSet; /* �Զ�����Ƶ�ع�ʱ�䣨��λus��*//*ע:�Զ��ع�ʱ��ֵΪ�ع�����ֵ*/        
    DWORD dwExposureUserSet ; /* �Զ���ץ���ع�ʱ�䣨��λus��*/    
    DWORD dwRes;    
} NET_DVR_EXPOSURE, *LPNET_DVR_EXPOSURE;

//��̬����
typedef struct tagNET_DVR_WDR
{
    BYTE byWDREnabled; /*��̬��0 dsibale  1 enable*/
    BYTE byWDRLevel1; /*0-F*/
    BYTE byWDRLevel2; /*0-F*/
    BYTE byWDRContrastLevel; /*0-100*/
    BYTE byRes[16];
} NET_DVR_WDR, *LPNET_DVR_WDR;

//��ҹת����������
typedef struct tagNET_DVR_DAYNIGHT
{
    BYTE byDayNightFilterType; /*��ҹ�л���0 day,1 night,2 auto */
    BYTE bySwitchScheduleEnabled; /*0 dsibale  1 enable,(����)*/
    //ģʽ1(����)
    BYTE byBeginTime; /*0-100*/
    BYTE byEndTime; /*0-100*/
    //ģʽ2
    BYTE byDayToNightFilterLevel; //0-7
    BYTE byNightToDayFilterLevel; //0-7
    BYTE byDayNightFilterTime;//(60��)
    BYTE byRes[5];
} NET_DVR_DAYNIGHT, *LPNET_DVR_DAYNIGHT;

//GammaУ��
typedef struct tagNET_DVR_GAMMACORRECT
{
    BYTE byGammaCorrectionEnabled; /*0 dsibale  1 enable*/
    BYTE byGammaCorrectionLevel; /*0-100*/
    BYTE byRes[6];
} NET_DVR_GAMMACORRECT, *LPNET_DVR_GAMMACORRECT;

//���ⲹ������
typedef struct tagNET_DVR_BACKLIGHT
{
    BYTE byBacklightMode; /*���ⲹ��:0 USERSET 1 UP��2 DOWN��3 LEFT��4 RIGHT��5MIDDLE*/
    BYTE byBacklightLevel; /*0x0-0xF*/
    BYTE byRes1[2];
    DWORD dwPositionX1; //��X����1��
    DWORD dwPositionY1; //��Y����1��
    DWORD dwPositionX2; //��X����2��
    DWORD dwPositionY2; //��Y����2��
    BYTE byRes2[4];
} NET_DVR_BACKLIGHT, *LPNET_DVR_BACKLIGHT;

//���ֽ��빦��
typedef struct tagNET_DVR_NOISEREMOVE
{
    BYTE byDigitalNoiseRemoveEnable; /*����ȥ�룺0 dsibale  1 enable*/
    BYTE byDigitalNoiseRemoveLevel; /*0x0-0xF*/
    BYTE byRes[6];
} NET_DVR_NOISEREMOVE, *LPNET_DVR_NOISEREMOVE;

//IPC CCD��������
typedef struct tagNET_DVR_CAMERAPARAMCFG
{
    DWORD dwSize;
    NET_DVR_VIDEOEFFECT struVideoEffect;/*���ȡ��Աȶȡ����Ͷȡ���ȡ�ɫ������*/    
    NET_DVR_GAIN struGain;/*�Զ�����*/
    NET_DVR_WHITEBALANCE struWhiteBalance;/*��ƽ��*/
    NET_DVR_EXPOSURE struExposure; /*�ع����*/
    NET_DVR_GAMMACORRECT struGammaCorrect;/*GammaУ��*/
    NET_DVR_WDR struWdr;/*��̬*/
    NET_DVR_DAYNIGHT struDayNight;/*��ҹת��*/
    NET_DVR_BACKLIGHT struBackLight;/*���ⲹ��*/
    NET_DVR_NOISEREMOVE struNoiseRemove;/*���ֽ���*/
    BYTE byPowerLineFrequencyMode; /*0-50HZ; 1-60HZ*/
    BYTE byIrisMode; /*0 �Զ���Ȧ 1�ֶ���Ȧ*/    
    BYTE byMirror ;  /* ����0 Left;1 Right,;2 Up;3Down */
    BYTE byDigitalZoom;  /*��������:0 dsibale  1 enable*/
    BYTE byDeadPixelDetect;   /*������,0 dsibale  1 enable*/
    BYTE byRes[31];
}NET_DVR_CAMERAPARAMCFG, *LPNET_DVR_CAMERAPARAMCFG;



//����ʶ�����ӽṹ
typedef struct tagNET_DVR_PLATE_INFO
{
    BYTE  byPlateType;					//��������
    BYTE  byColor;						//������ɫ
    BYTE  byBright;						//��������
    BYTE  byLicenseLen;					//�����ַ�����
    BYTE  byEntireBelieve;					//�������Ƶ����Ŷȣ�-100
    BYTE  byRes[35];					//����
    NET_VCA_RECT	struPlateRect;		//����λ��
    char sLicense[MAX_LICENSE_LEN];		//���ƺ���
    BYTE byBelieve[MAX_LICENSE_LEN];	//����ʶ���ַ������Ŷȣ����⵽����"��A12345", ���Ŷ�Ϊ,20,30,40,50,60,70�����ʾ"��"����ȷ�Ŀ�����ֻ��%��"A"�ֵ���ȷ�Ŀ�������%
}NET_DVR_PLATE_INFO, *LPNET_DVR_PLATE_INFO;

//������Ϣ
typedef struct tagNET_DVR_VEHICLE_INFO_
{
    DWORD dwIndex;					//�������
    BYTE  byVehicleType;		//��������
    BYTE  byColorDepth;		//������ɫ��ǳ
    BYTE  byColor;					//������ɫ
    BYTE  byRes1[1];				//����
    WORD  wSpeed;					//��λkm/h
    WORD  wLength;					//ǰһ�����ĳ�����
    BYTE  byRes[36];					//����
}NET_DVR_VEHICLE_INFO, *LPNET_DVR_VEHICLE_INFO;

//���Ƽ����
typedef struct tagNET_DVR_PLATE_RESULT
{
    DWORD   dwSize;						//�ṹ����
    BYTE	byResultType;			//0-��Ƶʶ������-ͼ��ʶ����
    BYTE    byRes1[3];				//����
    DWORD   dwRelativeTime;		//���ʱ���
    BYTE    byAbsTime[32];		//����ʱ���,yyyymmddhhmmssxxx,e.g.20090810235959999�����룩
    DWORD   dwPicLen;					//ͼƬ����
    DWORD	dwPicPlateLen;			//����СͼƬ����
    DWORD   dwVideoLen;					//¼�����ݳ���
    BYTE	byTrafficLight;				//0-�Ǻ��̵�ץ�ģ�1-�̵�ʱץ�ģ�2-���ʱץ��
    BYTE    byPicNum;				//���ĵ�ͼƬ���
    BYTE	byDriveChan;				//����������
    BYTE	byRes2[33];					//����   
    NET_DVR_PLATE_INFO  struPlateInfo;    //������Ϣ�ṹ
    NET_DVR_VEHICLE_INFO struVehicleInfo; //������Ϣ
    BYTE	*pBuffer1;   		        // ���ϴ�����ͼƬ��ָ��ָ��ͼƬ��Ϣ�����ϴ�������Ƶ��ָ��ָ����Ƶ��Ϣ�����������ͼƬ����Ƶ��Ϣ����NULL
    BYTE    *pBuffer2;                  // ���ϴ�����ͼƬʱ��ָ����ͼƬ��ָ��
}NET_DVR_PLATE_RESULT, *LPNET_DVR_PLATE_RESULT;
//�������ͼƬ���ݺ�¼�����ݣ�ֻ��һ�֣�ͼƬ����Ϊ����ͼƬ+����СͼƬ

//���Ʊ���NET_DVR_PLATE_RESULT
#define COMM_UPLOAD_PLATE_RESULT		0x2800	//�ϴ�������Ϣ
//ͼ�������Ϣ����        
typedef struct tagNET_DVR_IMAGEOVERLAYCFG
{
	DWORD		dwSize;
	BYTE		byOverlayInfo;//����ʹ�ܿ��أ�0-�����ӣ�1-����
	BYTE		byOverlayMonitorInfo;//�Ƿ���Ӽ�����Ϣ��0-�����ӣ�1-����
	BYTE		byOverlayTime;//�Ƿ����ʱ�䣬0-�����ӣ�1-����
	BYTE		byOverlaySpeed;//�Ƿ�����ٶȣ�0-�����ӣ�1-����
	BYTE		byOverlaySpeeding;//�Ƿ���ӳ��ٱ�����0-�����ӣ�1-����
	BYTE		byOverlayLimitFlag;//�Ƿ�������ٱ�־��0-�����ӣ�1-����
	BYTE		byOverlayPlate;//�Ƿ���ӳ��ƣ�0-�����ӣ�1-����
	BYTE		byOverlayColor;//�Ƿ���ӳ�����ɫ��0-�����ӣ�1-����
    BYTE		byOverlayLength;//�Ƿ���ӳ�����0-�����ӣ�1-����
    BYTE		byOverlayType;//�Ƿ���ӳ��ͣ�0-�����ӣ�1-����
    BYTE		byOverlayColorDepth;//�Ƿ���ӳ�����ɫ��ǳ��0-�����ӣ�1-����
    BYTE		byOverlayDriveChan;//�Ƿ���ӳ�����0-�����ӣ�1-����
    BYTE		byOverlayMilliSec; //���Ӻ�����Ϣ 0-�����ӣ�1-����
	BYTE		byOverlayIllegalInfo; //����Υ����Ϣ 0-�����ӣ�1-����
	BYTE		byRes1[6];    //����
	BYTE		byMonitorInfo1[32];    //������Ϣ1
	BYTE		byMonitorInfo2[44]; //������Ϣ2
	BYTE		byRes2[52];    //����
}NET_DVR_IMAGEOVERLAYCFG, *LPNET_DVR_IMAGEOVERLAYCFG;

//��IO����ץ�Ĺ�������
typedef struct tagNET_DVR_SNAPCFG
{
    DWORD   dwSize;
    BYTE	byRelatedDriveWay;//����IO�����ĳ�����
    BYTE 	bySnapTimes; //��Ȧץ�Ĵ�����0-��ץ�ģ���0-���Ĵ�����Ŀǰ���5��  
    BYTE	byRes1[2];
    WORD	wIntervalTime[4];//���ļ��ʱ��1��ms
    BYTE	byRes2[24];//�����ֽ�
}NET_DVR_SNAPCFG, *LPNET_DVR_SNAPCFG;

typedef struct tagNET_DVR_SNAP_ABILITY
{
    DWORD dwSize;
    BYTE  byIoInNum;//IO�������
    BYTE  byIoOutNum;//IO�������
    BYTE  bySingleSnapNum;//��IO��������
    BYTE  byLightModeArrayNum;//���̵�ģʽ����
    BYTE  byMeasureModeArrayNum;//����ģʽ����
	BYTE  byPlateEnable; //����ʶ������
    BYTE  byRes[30];
} NET_DVR_SNAP_ABILITY, *LPNET_DVR_SNAP_ABILITY;
#define SNAPCAMERA_ABILITY          0x300 //ץ�Ļ�������

typedef struct tagNET_DVR_TRIGCOORDINATE
{
    WORD wTopLeftX; /*��Ȧ���ϽǺ����꣨2���ֽڣ�*/
    WORD wTopLeftY; /*��Ȧ���Ͻ������꣨2���ֽڣ�*/
    WORD wWdith; /*��Ȧ��ȣ�2���ֽڣ�*/
    WORD wHeight; /*��Ȧ�߶ȣ�2���ֽڣ�*/
} NET_DVR_TRIGCOORDINATE, *LPNET_DVR_TRIGCOORDINATE;

typedef struct tagNET_DVR_VTPARAM
{
    DWORD   dwSize;
	BYTE    byEnable;  /* �Ƿ�ʹ��������Ȧ��0-��ʹ�ã�1-ʹ��*/
	BYTE    byIsDisplay; /* �Ƿ���ʾ������Ȧ��0-����ʾ��1-��ʾ*/
	BYTE    byRes1[6];
    NET_DVR_TRIGCOORDINATE struTrigCoordinate;
    NET_DVR_TRIGCOORDINATE struRes[5];
    BYTE    byTotalLaneNum;/*��Ƶ�����ĳ�����1*/
    BYTE    byPolarLenType; /*ƫ�����ͣ�0������ƫ�񾵣�1����ʩ�͵�ƫ�񾵡�*/
    BYTE	byDayAuxLightMode; /*���츨������ģʽ��0���޸���������1��LED��������2�����������*/
    BYTE	byLoopToCalRoadBright; /*���Լ���·�����ȵĳ���(������Ȧ)*/
    BYTE	byRoadGrayLowTh; /*·�����ȵ���ֵ��ʼ��ֵ1*/
    BYTE	byRoadGrayHighTh; /*·�����ȸ���ֵ��ʼ��ֵ140*/
    WORD	wLoopPosBias; /*��䴥����Ȧλ��30*/
    DWORD   dwHfrShtterInitValue; /*����ͼ���ع�ʱ��ĳ�ʼֵ2000*/
    DWORD   dwSnapShtterInitValue; /*ץ��ͼ���ع�ʱ��ĳ�ʼֵ500*/
    DWORD   dwHfrShtterMaxValue; /*����ͼ���ع�ʱ������ֵ20000*/
    DWORD   dwSnapShtterMaxValue; /*ץ��ͼ���ع�ʱ������ֵ1500*/
    DWORD   dwHfrShtterNightValue; /*�������ͼ���ع�ʱ�������ֵ3000*/
    DWORD   dwSnapShtterNightMinValue; /*���ץ��ͼ���ع�ʱ�����Сֵ3000*/
    DWORD   dwSnapShtterNightMaxValue; /*���ץ��ͼ���ع�ʱ������ֵ5000*/
    DWORD   dwInitAfe; /*����ĳ�ʼֵ200*/
    DWORD   dwMaxAfe; /*��������ֵ400*/
	WORD    wResolutionX;/* �豸��ǰ�ֱ��ʿ�*/
	WORD    wResolutionY;/* �豸��ǰ�ֱ��ʸ�*/
    BYTE    byRes2[96];
}NET_DVR_VTPARAM, *LPNET_DVR_VTPARAM;

typedef struct tagNET_DVR_SNAPENABLECFG
{
	DWORD		dwSize;
	BYTE		byPlateEnable;//�Ƿ�֧�ֳ���ʶ��0-��֧�֣�1-֧��
	BYTE        byDetectBrightness;//�Զ��������ʹ�������0-����⣻1-���
	BYTE        byBrightnessThreld;//ʹ�������������ֵ����Χ0-100��������ֵ����������ֵ����
	BYTE 		byRes[69]; //����
}NET_DVR_SNAPENABLECFG, *LPNET_DVR_SNAPENABLECFG;

//ץ�Ĵ�������ṹ(����)
typedef struct tagNET_DVR_MANUALSNAP
{
    BYTE byRes[24]; //����
}NET_DVR_MANUALSNAP, *LPNET_DVR_MANUALSNAP;
NET_DVR_API BOOL __stdcall NET_DVR_ManualSnap(LONG lUserID, LPNET_DVR_MANUALSNAP lpInter, LPNET_DVR_PLATE_RESULT lpOuter);
//2009-10-26 ץ�Ļ����� end


//2009-12-22 ������Ƶ�ۺ�ƽ̨��ͨ����ȡPTZЭ��ӿ�
NET_DVR_API BOOL __stdcall NET_DVR_GetPTZProtocol_Ex(LONG lUserID, LONG lChannel, NET_DVR_PTZCFG *pPtzcfg);
// SDK_V35
#endif //
