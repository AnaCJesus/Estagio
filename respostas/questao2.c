#include <stdio.h>
#include <stdbool.h>

bool calculoSequencia( int x){
     int j = 0, k = 1;
     
    if (x == j || x == k) {
        return true;
    }     
     
     while (k<=x){
        int ant_j = j;
        j = k;
        k = ant_j + k;
        
        if(k==x){
            return true;
        }
     }
     
     return false;
}
int main()
{
  int x;
  
  
    printf ("digite um número:\n");
    scanf("%d",&x);
 
         if (calculoSequencia(x)){
            printf (" %d Pertence à sequência \n",x);
        }
        else {
            printf(" %d Não pertence à sequência \n",x);
        }
    return 0;
}
