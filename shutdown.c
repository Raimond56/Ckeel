// c keele p�ised
#include <stdio.h>
#include <stdlib.h>

//shutdown programm
main()
{
   char ch;
 
   printf("Kas sa tahad t�esti arvuti sulgeda?(j/e)\n");
   scanf("%c",&ch);
 
   if (ch == 'j' || ch == 'J')
      system("C:\\WINDOWS\\System32\\shutdown /s");
 
   return 0;
}