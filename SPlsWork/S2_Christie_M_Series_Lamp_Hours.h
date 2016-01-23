#ifndef __S2_CHRISTIE_M_SERIES_LAMP_HOURS_H__
#define __S2_CHRISTIE_M_SERIES_LAMP_HOURS_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/


#define __S2_Christie_M_Series_Lamp_Hours_DEVICERX$_BUFFER_INPUT 0
#define __S2_Christie_M_Series_Lamp_Hours_DEVICERX$_BUFFER_MAX_LEN 7000
CREATE_STRING_STRUCT( S2_Christie_M_Series_Lamp_Hours, __DEVICERX$, __S2_Christie_M_Series_Lamp_Hours_DEVICERX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Christie_M_Series_Lamp_Hours_LAMPHOURS1_ANALOG_OUTPUT 0
#define __S2_Christie_M_Series_Lamp_Hours_LAMPHOURS2_ANALOG_OUTPUT 1



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
#define __S2_Christie_M_Series_Lamp_Hours_JNK_STRING_MAX_LEN 2550
CREATE_STRING_STRUCT( S2_Christie_M_Series_Lamp_Hours, __JNK, __S2_Christie_M_Series_Lamp_Hours_JNK_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Christie_M_Series_Lamp_Hours )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Christie_M_Series_Lamp_Hours, __DEVICERX$ );
};

START_NVRAM_VAR_STRUCT( S2_Christie_M_Series_Lamp_Hours )
{
   DECLARE_STRING_STRUCT( S2_Christie_M_Series_Lamp_Hours, __JNK );
   unsigned short __RXOK;
};



#endif //__S2_CHRISTIE_M_SERIES_LAMP_HOURS_H__

