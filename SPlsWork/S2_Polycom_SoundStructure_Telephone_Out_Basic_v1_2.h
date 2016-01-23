#ifndef __S2_POLYCOM_SOUNDSTRUCTURE_TELEPHONE_OUT_BASIC_V1_2_H__
#define __S2_POLYCOM_SOUNDSTRUCTURE_TELEPHONE_OUT_BASIC_V1_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_DIAL_DIG_INPUT 0

#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_KEY_DIG_INPUT 1
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_KEY_ARRAY_LENGTH 15

/*
* ANALOG_INPUT
*/
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_FADER_VALUE_IN_ANALOG_INPUT 0

#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_PHONE_NAME$_STRING_INPUT 1
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_PHONE_NAME$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __PHONE_NAME$, __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_PHONE_NAME$_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_NUMBER_IN$_STRING_INPUT 2
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_NUMBER_IN$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __NUMBER_IN$, __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_NUMBER_IN$_STRING_MAX_LEN );

#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_FROM_DEVICE$_BUFFER_INPUT 3
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_FROM_DEVICE$_BUFFER_MAX_LEN 5000
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __FROM_DEVICE$, __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_OUT_FADER_UP_OK_DIG_OUTPUT 0
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_OUT_FADER_DOWN_OK_DIG_OUTPUT 1
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_OUT_MUTE_IN_DIG_OUTPUT 2
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_POLL_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_HOOK_STATE_IN_ANALOG_OUTPUT 0
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_OUT_FADER_IN_ANALOG_OUTPUT 1

#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_NUMBER$_STRING_OUTPUT 2
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_VIRTUAL_NAME_OUT$_STRING_OUTPUT 3
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_TO_DEVICE$_STRING_OUTPUT 4


/*
* Direct Socket Variables
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
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_STEMP_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __STEMP, __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_STEMP_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_SNAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __SNAME, __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_SNAME_STRING_MAX_LEN );
#define __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_SNUMBER_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __SNUMBER, __S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2_SNUMBER_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __KEY );
   unsigned short __IFLAG1;
   unsigned short __IHOOKVALUE;
   unsigned short __IRINGVALUE;
   unsigned short __IPOINTER1;
   unsigned short __IPOINTER2;
   unsigned short __IKEY;
   unsigned short __IOUTVALUE;
   unsigned short __IFADERSPAN;
   unsigned short __IFADERMULTIPLIER;
   unsigned short __IFADERMOD;
   unsigned short __IFADER;
   short __SIMAXOUTFADER;
   short __SIMINOUTFADER;
   short __SIOUTFADER;
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __STEMP );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __SNAME );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __SNUMBER );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __PHONE_NAME$ );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __NUMBER_IN$ );
   DECLARE_STRING_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Polycom_SoundStructure_Telephone_Out_Basic_v1_2 )
{
};



#endif //__S2_POLYCOM_SOUNDSTRUCTURE_TELEPHONE_OUT_BASIC_V1_2_H__

