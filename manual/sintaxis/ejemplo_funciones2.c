#include <stdio.h>

int main()
{
  int a=5;
  int b;

  int factorial(int n)
    {
      int res=1;
      
      for (;n>1;n--)
	{
	  res=res*n;
	}
      
      return res;
    }
  
  b=factorial(a);
  
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  
  return 0;
}
