#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fync(float a,float b)       
{float s;               
s=(sqrt(a)+b+a*a)/(sqrt(b)+a+b*b);   
return s; }  
int main(int argc, char *argv[]) {  
	float f;                          
	f=fync(2,3)+fync(5,7)+fync(6,9)+fync(4,8);                  
	printf("\n answer == %f",f);         

	return 0;
}

