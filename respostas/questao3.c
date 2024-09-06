#include <stdio.h>


int main(){
double Faturamento [30]={22174.1664,24537.6698,26139.6134,0.0,0.0,26742.6612,0.0,42889.2258,46251.174,11191.4722,0.0,0.0,3847.4823,373.7838,2659.7563,48924.2448,18419.2614,0.0,0.0,35240.1826,43829.1667,18235.6852,4355.00662,13327.1025,0.0,0.0,25681.8318,1718.1221,13220.495,3414.61};
   
   
    double Faturamento_MAX = Faturamento[0];
    double Faturamento_MIN = Faturamento[0];
    double Faturamento_TOTAL = 0.0;
    int Dias_com_Faturamento = 0;
    double Faturamento_MEDIO;
    int Acima_da_Media = 0;
    
    
     for (int i = 0; i < 30; i++) {
       
       if(Faturamento[i] > 0.0){
        Faturamento_TOTAL += Faturamento[i];
            Dias_com_Faturamento++;
       }
   }
   
   if(Dias_com_Faturamento > 0){ 
       
        Faturamento_MEDIO = Faturamento_TOTAL/ Dias_com_Faturamento;
        
        for(int i =0; i < 30; i++){
       
             if(Faturamento[i] > Faturamento_MEDIO){
                 Acima_da_Media++;   }
   }
  } 
  
   
   for (int i = 0; i < 30; i++) {
       
       
        if(Faturamento[i] >Faturamento_MAX ){
            Faturamento_MAX = Faturamento[i];
        }
        
        if(Faturamento[i] < Faturamento_MIN ){
            Faturamento_MIN = Faturamento[i];
        }
    }
    
    
    printf("\nMaior faturamento: %.2f\n", Faturamento_MAX);
    printf("\nMenor faturamento: %.2f\n", Faturamento_MIN);
    printf("\nDias acima da média: %d\n", Acima_da_Media);
    

    return 0;
}
