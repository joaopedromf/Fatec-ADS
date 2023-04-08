#include <stdio.h>
int main ()
{ float sb,sl,ir,inss;
  printf("Digite seu salário: R$");
  scanf("%f",&sb);
  inss=sb*0.08;
  if (sb>7000)
  { ir=sb*0.22;
  }
  else if (sb>=4000)
  { ir=sb*0.15;
  }
  else if (sb>=2000)
  { ir=sb*0.07;
  }
  else
  { ir=0;
  }
  sl=sb-inss-ir;
  printf("\nSalário Bruto: R$%.2f\nINSS: R$%.2f\nIR: R$%.2f\nSalário Líquido: R$%.2f\n",sb,inss,ir,sl);
  return 0;
}