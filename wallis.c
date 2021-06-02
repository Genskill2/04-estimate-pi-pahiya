#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    printf("%f\n",pi);
     
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
    for (int i=500; i<510; i++) {
    pi = wallis_pi(i);
    
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}

  
}
float wallis_pi (int n )
{
  float pi=1;
  float a,b,comp_pi;
   
   for(int i=1;i<n+1;i++)
  {
    a= 4*i*i;
    b=a/(a-1);
  
    pi = pi*b;
   
  }
  if(n!=0)
  return (2*pi);
  else
  return 0;
    }
