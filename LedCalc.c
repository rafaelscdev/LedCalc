#include <stdio.h>
#include <stdlib.h>

float Vin  = 0.0,//inicio declaração de varaiáveis (Global)
      Vled = 0.0,
      Iled = 0.0,
      R    = 0.0;//"R" significa Resistor//fim da declaração.
       

int main()
{
    printf(" LED CALC v1.0 \n\n");//inicio do cabeçalho.
    printf("Dev. Rafael Correa\n\n");//fim do cabeçalho.
    
    printf(" Digite o valor de Vin (em Volts): ");
    scanf("%f",&Vin);//guarda o valor na variável.
    printf(" Digite o valor de Vled (em Volts): ");
    scanf("%f", &Vled);
    printf(" Digite o valor de Iled (em Amperes): ");
    scanf("%f", &Iled);
    printf("\n\n");
    
    R = (Vin-Vled)/Iled;//calculo do resistor.
    
    printf("Vin = %.2f\n\n",Vin);//duas casa decimais e o valor de Vin.
    printf("Vled = %.2f\n\n",Vled);//duas casa decimais e o valor de Vled.
    printf("Iled = %.2f\n\n",Iled);//duas casa decimais e o valor de Iled.
    printf("O resistor para Led tem o valor de %.2f Ohms!\n\n", R);
    
   system("pause");
   return 0;//encerra o programa. 
}
