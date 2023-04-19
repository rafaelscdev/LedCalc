#include <stdio.h>
#include <stdlib.h>

float Vin  = 0.0,
      Vled = 0.0,
      Iled = 0.0,
      R    = 0.0;
       

int main()
{
    printf(" LED CALC v1.0 \n\n");
    printf("Dev. Rafael Correa\n\n");
    
    printf(" Digite o valor de Vin (em Volts): ");
    scanf("%f",&Vin);
    printf(" Digite o valor de Vled (em Volts): ");
    scanf("%f", &Vled);
    printf(" Digite o valor de Iled (em Amperes): ");
    scanf("%f", &Iled);
    printf("\n\n");
    
    R = (Vin-Vled)/Iled;
    
    printf("Vin = %.2f\n\n",Vin);
    printf("Vled = %.2f\n\n",Vled);
    printf("Iled = %.2f\n\n",Iled);
    printf("O resistor para Led tem o valor de %.2f Ohms!\n\n", R);
    
   system("pause");
   return 0;   
}
