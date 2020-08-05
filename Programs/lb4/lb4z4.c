#include <stdio.h>
#include <stdlib.h>
float func(float x,float y){     
float f;    
f =(x*x+x*y-y*y)/(1+x+y)+(x-y)/(x*x+y*y+2);  
return f;}             
                       

int main(int argc, char *argv[]) {  
	
	float u,a,b;                 
	printf("enter a i b ");        
	scanf("%f%f",&a,&b);              
	u=func(0.5,a)+func(a+b,a-b);                  
	printf("\n u= %f",u);         


	return 0;
}

