#include <stdio.h>
#include <string.h>
#define N 254
//idejas algoritmēšanai

/*

1)
int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15

2) vārda garuma aprēķināšanai strlen()
*/

//mainīgie
char burts;
char burti[] = {0};
char adrese;
char t[N];
char alfabets = 97;

//ja ascii kods  ir no lielajiem burtiem -65
//ja ascii kods ir no mazajiem -97
void teikums_print(char t[]);
int main(){
   printf("Lūdzu ievadiet teikumu!: \n");
   fgets(t, sizeof(t), stdin);
   teikums_print(t);
   for(int i = 0; i<strlen(t); i++)
   {
       if((t[i]>='A')&&(t[i]<='Z'))
       {
	  adrese = t[i] - 65;
	  burti[adrese] = burti[adrese]+1;
       }

       if((t[i]>='a')&&(t[i]<='z'))
       {
	  adrese = t[i] - 97;
	  burti[adrese] = burti[adrese]+1;
       }
//    burts = t[i];
//    printf("%c\n", burts);
   }
   for(int j = 0; j<26; j++)
   {
      printf("\nburta %c skaits teikumā: %d \n",alfabets,burti[j]);
      alfabets = alfabets+1;
   }
  // scanf("%s", t);
  // printf("%s", t);
   return 0;
}

void teikums_print(char t[])
{
   printf("teikums: ");
   puts(t);
}