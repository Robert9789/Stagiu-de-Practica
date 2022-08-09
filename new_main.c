#include <stdio.h>      /* for printf() and fprintf() */
#include <stdlib.h>      
#include <dlt/dlt.h>

// Limita maximă de bytes
#define maxim 10000
  
  DLT_DECLARE_CONTEXT(con_example1);
// Numele fișierului dat ca și comandă argument pe linie
int main(int argc, char* argv[])
{
    DLT_REGISTER_APP("Exemplu", "Primul exemplu");
    DLT_REGISTER_CONTEXT(con_example1, "CON", "First context");

    // Pointer la fișierul care urmează să fie citit 
    FILE* f;
    char chr;
  // Stochează bytes pentru citire
    char s[maxim];
    int i=0,inceput,final,j;
    // Dacă fișierul există și are permisiunea de citire
    f = fopen(argv[1], "r");
    if (f == NULL) 
    {
        return 1;
    }
  // Intrarea de la intervalul dat de utilizator in bytes inclusiv de la... până la
    printf("Citim bytes de la: ");
    scanf("%d", &inceput);

    printf("Citeste bytes până la: ");
    scanf("%d", &final);
// For pentru a citi byte-ti din fișier
    for (i=0,j=0;i<= final && chr!=EOF;i++) 
    {
        // Sare bytes care nu sunt necesari
        if (i >= inceput) 
        {
            s[j] = chr;
            j++;
        }
       // primeste caractere
        chr = fgetc(f);
    }

// Afișează bytes ca șir de caractere
    printf("%s", s);
    // inchiderea fișierului
    fclose(f);
    return 0;

    DLT_UNREGISTER_CONTEXT(con_example1);
    DLT_UNREGISTER_APP();
}


 

 


 
 


 
 
