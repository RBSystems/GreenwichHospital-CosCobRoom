#ifndef __S2_POLYCOM_FEEDBACK_BUFFER_V1_2_H__
#define __S2_POLYCOM_FEEDBACK_BUFFER_V1_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Polycom_Feedback_Buffer_v1_2_INITIALIZE_DIG_INPUT 0
#define __S2_Polycom_Feedback_Buffer_v1_2_TIMEOUT_DIG_INPUT 1


/*
* ANALOG_INPUT
*/


#define __S2_Polycom_Feedback_Buffer_v1_2_FROM_FEEDBACK_PROCESSOR$_BUFFER_INPUT 0
#define __S2_Polycom_Feedback_Buffer_v1_2_FROM_FEEDBACK_PROCESSOR$_BUFFER_MAX_LEN 20000
CREATE_STRING_STRUCT( S2_Polycom_Feedback_Buffer_v1_2, __FROM_FEEDBACK_PROCESSOR$, __S2_Polycom_Feedback_Buffer_v1_2_FROM_FEEDBACK_PROCESSOR$_BUFFER_MAX_LEN );

#define __S2_Polycom_Feedback_Buffer_v1_2_VIRTUAL_NAME$_STRING_INPUT 1
#define __S2_Polycom_Feedback_Buffer_v1_2_VIRTUAL_NAME$_ARRAY_NUM_ELEMS 100
#define __S2_Polycom_Feedback_Buffer_v1_2_VIRTUAL_NAME$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Polycom_Feedback_Buffer_v1_2, __VIRTUAL_NAME$, __S2_Polycom_Feedback_Buffer_v1_2_VIRTUAL_NAME$_ARRAY_NUM_ELEMS, __S2_Polycom_Feedback_Buffer_v1_2_VIRTUAL_NAME$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_Polycom_Feedback_Buffer_v1_2_TIMED_OUT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_Polycom_Feedback_Buffer_v1_2_TO_SCRIPTS_MODULES$_STRING_OUTPUT 0

#define __S2_Polycom_Feedback_Buffer_v1_2_TO_MODULES$_STRING_OUTPUT 1
#define __S2_Polycom_Feedback_Buffer_v1_2_TO_MODULES$_ARRAY_LENGTH 100

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
#define __S2_Polycom_Feedback_Buffer_v1_2_STEMP_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Polycom_Feedback_Buffer_v1_2, __STEMP, __S2_Polycom_Feedback_Buffer_v1_2_STEMP_STRING_MAX_LEN );
#define __S2_Polycom_Feedback_Buffer_v1_2_STEMP1_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Polycom_Feedback_Buffer_v1_2, __STEMP1, __S2_Polycom_Feedback_Buffer_v1_2_STEMP1_STRING_MAX_LEN );
#define __S2_Polycom_Feedback_Buffer_v1_2_SBUFFERNAME_ARRAY_NUM_ELEMS 100
#define __S2_Polycom_Feedback_Buffer_v1_2_SBUFFERNAME_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Polycom_Feedback_Buffer_v1_2, __SBUFFERNAME, __S2_Polycom_Feedback_Buffer_v1_2_SBUFFERNAME_ARRAY_NUM_ELEMS, __S2_Polycom_Feedback_Buffer_v1_2_SBUFFERNAME_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Polycom_Feedback_Buffer_v1_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __TO_MODULES$ );
   unsigned short __IFLAG1;
   unsigned short __A;
   unsigned short __B;
   unsigned short __C;
   unsigned short __INUMOUTPUTS;
   unsigned short __IPOINTER1;
   unsigned short __IPOINTER2;
   unsigned short __IPOINTER3;
   unsigned short __IPOINTER4;
   DECLARE_STRING_STRUCT( S2_Polycom_Feedback_Buffer_v1_2, __STEMP );
   DECLARE_STRING_STRUCT( S2_Polycom_Feedback_Buffer_v1_2, __STEMP1 );
   DECLARE_STRING_ARRAY( S2_Polycom_Feedback_Buffer_v1_2, __SBUFFERNAME );
   DECLARE_STRING_ARRAY( S2_Polycom_Feedback_Buffer_v1_2, __VIRTUAL_NAME$ );
   DECLARE_STRING_STRUCT( S2_Polycom_Feedback_Buffer_v1_2, __FROM_FEEDBACK_PROCESSOR$ );
};

START_NVRAM_VAR_STRUCT( S2_Polycom_Feedback_Buffer_v1_2 )
{
};

DEFINE_WAITEVENT( S2_Polycom_Feedback_Buffer_v1_2, WTIMEOUT );


#endif //__S2_POLYCOM_FEEDBACK_BUFFER_V1_2_H__

