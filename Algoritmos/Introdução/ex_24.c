#include <stdio.h>
int main ()
{ int i=1,i2=0;
  while (i<=100)
  { if (i<=99)
    { printf("%d + ",i);
    }
    else if (i==100)
    { printf("%d ",i);
    }
    i2=i+i2;
    i=i+1;
  }
  printf("= %d",i2);
  return 0;
}