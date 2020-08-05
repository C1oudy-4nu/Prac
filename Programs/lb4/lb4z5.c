#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fync(float a1,float b1,float a2,float b2){    
float ab;   
ab=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2)); 
return ab;}           
                       

int main(int argc, char *argv[]) {  
	float p,x1,x2,x3,y1,y2,y3;                
	printf("enter x,y point1 ");         
	scanf("%f%f",&x1,&y1);              
	printf("enter x,y point2 ");         
	scanf("%f%f",&x2,&y2);              
	printf("enter x,y point3 ");         
	scanf("%f%f",&x3,&y3);             
	
p=fync(x1,y1,x2,y2)+fync(x2,y2,x3,y3)+fync(x3,y3,x1,y1); 
	printf("\n p= %f",p);         


	return 0;
}


