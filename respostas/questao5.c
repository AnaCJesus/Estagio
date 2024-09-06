#include <stdio.h>

int main()
{
   char string [] = "programa";
   int comeco = 0;
   int fim = 0;
   char troca;
   
   while(string[fim] != '\0'){
       fim++;
   }
   fim--;
   
   while (comeco < fim){
       troca = string[comeco];
       string[comeco] = string [fim];
       string[fim] = troca;
       
       comeco++;
       fim--;
   }
   
   printf("%s",string);
    return 0;
}
