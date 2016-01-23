#ifndef __S2_POLYCOM_SOUNDSTRUCTURE_VOLUME_CONTROL_R1_3_H__
#define __S2_POLYCOM_SOUNDSTRUCTURE_VOLUME_CONTROL_R1_3_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_UP_DIG_INPUT 0
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_DOWN_DIG_INPUT 1
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_MUTE_ON_DIG_INPUT 2
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_MUTE_OFF_DIG_INPUT 3
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_MUTE_TOGGLE_DIG_INPUT 4


/*
* ANALOG_INPUT
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_FADER_IN_ANALOG_INPUT 0


#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_RX$_BUFFER_INPUT 1
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_RX$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __RX$, __S2_Polycom_SoundStructure_Volume_Control_r1_3_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_MUTE_ON_F_DIG_OUTPUT 0
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VOLUME_MUTE_OFF_F_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_FADER_BAR_ANALOG_OUTPUT 0

#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_TX$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/

#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_POLYCOM_SOCKET 4
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_POLYCOM_STRING_MAX_LEN 1000
START_SOCKET_DEFINITION( S2_Polycom_SoundStructure_Volume_Control_r1_3, __POLYCOM )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Polycom_SoundStructure_Volume_Control_r1_3, SocketRxBuf, __S2_Polycom_SoundStructure_Volume_Control_r1_3_POLYCOM_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_RAMP_TIME_INTEGER_PARAMETER 11
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_MUTE_CANCEL_INTEGER_PARAMETER 12
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_FADER_WHEN_MUTED_INTEGER_PARAMETER 13
/*
* SIGNED_INTEGER_PARAMETER
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_MAX_VOLUME_SIGNED_INTEGER_PARAMETER 14
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_MIN_VOLUME_SIGNED_INTEGER_PARAMETER 15
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VIRTUAL_NAME_STRING_PARAMETER 10
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_IP_ADDRESS_STRING_PARAMETER 16
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VIRTUAL_NAME_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __VIRTUAL_NAME, __S2_Polycom_SoundStructure_Volume_Control_r1_3_VIRTUAL_NAME_PARAM_MAX_LEN );
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_IP_ADDRESS_PARAM_MAX_LEN 21
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __IP_ADDRESS, __S2_Polycom_SoundStructure_Volume_Control_r1_3_IP_ADDRESS_PARAM_MAX_LEN );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_RESPONSE$_STRING_MAX_LEN 250
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __RESPONSE$, __S2_Polycom_SoundStructure_Volume_Control_r1_3_RESPONSE$_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_TRASH_STRING_MAX_LEN 250
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __TRASH, __S2_Polycom_SoundStructure_Volume_Control_r1_3_TRASH_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_VIRTUAL_NAME_QUOTES_STRING_MAX_LEN 52
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __VIRTUAL_NAME_QUOTES, __S2_Polycom_SoundStructure_Volume_Control_r1_3_VIRTUAL_NAME_QUOTES_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_IP_ADDR_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __IP_ADDR, __S2_Polycom_SoundStructure_Volume_Control_r1_3_IP_ADDR_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Volume_Control_r1_3_TXQ$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __TXQ$, __S2_Polycom_SoundStructure_Volume_Control_r1_3_TXQ$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __RAMP_DELAY;
   unsigned short __BOOT;
   unsigned short __K;
   unsigned short __HAVE_MAX;
   unsigned short __HAVE_MIN;
   unsigned short __HAVE_LEVEL;
   unsigned short __PROCESSING;
   unsigned short __IP_PORT;
   unsigned short __VALID_IP;
   short __FADER_MIN;
   short __FADER_MAX;
   short __FADER_LEVEL;
   short __FADER_SPAN;
   short __BOOT_WAIT;
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __RESPONSE$ );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __TRASH );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __VIRTUAL_NAME_QUOTES );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __IP_ADDR );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __TXQ$ );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __RX$ );
   DECLARE_SOCKET( S2_Polycom_SoundStructure_Volume_Control_r1_3, __POLYCOM );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __VIRTUAL_NAME );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3, __IP_ADDRESS );
};

START_NVRAM_VAR_STRUCT( S2_Polycom_SoundStructure_Volume_Control_r1_3 )
{
};



#endif //__S2_POLYCOM_SOUNDSTRUCTURE_VOLUME_CONTROL_R1_3_H__

