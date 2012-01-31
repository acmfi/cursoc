#include <stdio.h>

int factorial(int a);

int main()
{
  int f;
  
  f=factorial(5); 
  printf("El factorial de 5 es: %d\n",f);
  return 0;
}

int factorial (int a)
{
  int i = 0, res = 1;
  
  for (i=a; i>1; i--)
    res=res*i;
  
  return res;
}
