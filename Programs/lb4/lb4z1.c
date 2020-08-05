#include <stdio.h>
#include <stdlib.h>

float func( float r,float h)      
{ float v;                                 
  float p=3.14;                   
  v=2*p*r*h;                      
  return v;}                      

int main(int argc, char *argv[]) {  
	
	float r,h,ex;                 
	printf("enter radius ");         
	scanf("%f ",&r);
	
	printf("enter height");
	 scanf("%f",&h);
	ex=func(r,h);                  
	printf("\n Extent V=%f ",ex);         


	return 0;
}
