#include <stdio.h>      /* for printf() and fprintf() */
#include <stdlib.h>      

#include <dlt/dlt.h>

DLT_DECLARE_CONTEXT(con_exemplu);

int main()
{
    DLT_REGISTER_APP("Exemplu", "Primul exemplu");
    DLT_REGISTER_CONTEXT(con_exemplu, "CON", "First context");


   DLT_UNREGISTER_CONTEXT(con_exemplu);

    DLT_UNREGISTER_APP();
}
