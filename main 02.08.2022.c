#include <stdio.h>      /* for printf() and fprintf() */
#include <stdlib.h>      

#include <dlt/dlt.h>

#define DLT_INT32(INT_VAR)(void)dlt_user_log_write_int32(&log_local,INT_VAR)

#define DLT_FLOAT32(FLOAT32_VAR)(void)dlt_user_log_write_float32(&log_local,FLOAT32_VAR)

#define DLT_BOOL(BOOL_VAR)(void)dlt_user_log_write_bool(&log_local,BOOL_VAR)


 

DLT_DECLARE_CONTEXT(con_example1);


int main()
{
    DLT_REGISTER_APP("Exemplu", "Primul exemplu");
    DLT_REGISTER_CONTEXT(con_example1, "CON", "First context");

int i,n;
 
for (i=0;i<=9;i++)
{
DLT_LOG(con_example1, DLT_LOG_INFO, DLT_STRING("Message nr "),DLT_INT32(i));
}



   DLT_UNREGISTER_CONTEXT(con_example1);
    DLT_UNREGISTER_APP();
}
