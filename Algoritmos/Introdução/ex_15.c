#include <stdio.h>
#include <math.h>

int main ()
{ float peso,altura,imc;
  printf("Digite o peso (kg): ");
  scanf("%f",&peso);
  printf("Digite a altura (m): ");
  scanf("%f",&altura);
  imc=peso/pow(altura,2);
  printf("IMC = %.2f\n",imc);
  if (imc<18.5)
  { printf("Magreza");
  }
  else if (imc<25)
  { printf("Normal");
  }
  else if (imc<30)
  { printf("Sobrepeso");
  }
  else if (imc<40)
  { printf("Obesidade");
  }
  else
  { printf("Obesidade Grave");
  }
  return 0;
}