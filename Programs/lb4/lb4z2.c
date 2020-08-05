#include <stdio.h>
#include <stdlib.h>

float func( float max1,float max2,float max3)      
{ float max;                             
   if(max3>max2 && max3>max1)                    
  max=max3;
  if(max1>max2 && max1>max3)
  max=max1;
  if(max2>max1 && max2>max3)
  max=max2;
  
  return max;}                      

int main(int argc, char *argv[]) {  
	
	float a,b,c,f;                 
	printf("enter a, b, c ");         
	scanf("%f%f%f ",&a,&b,&c);
	f=( func(a,a+b,0)+func(a,c+b,0))/(1+func(a+b*c,b-c,25));               
	printf("\n Function = %f",f);        


	return 0;
}

