#include <stdio.h>

int main()
{
    double Faturamento[5] = {67834.43, 36678.66, 29229.88, 27165.48, 19849.53};
    const char* Estados [5] = {"SP","RJ","MG","ES","Outros"};
 
    
   double FaturamentoTotal=0.0;
   double Porcentagem;
    
    
    for (int i = 0; i < 5; i++) {
        FaturamentoTotal += Faturamento[i];
    }
    
    for (int i = 0; i < 5; i++) {
        Porcentagem = (Faturamento[i]/FaturamentoTotal)*100;
        printf("Estado: %-9s Porcentagem: %.2f%% \n",Estados[i],Porcentagem);
    }
    
    
    return 0;
}
