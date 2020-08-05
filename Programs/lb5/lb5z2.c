#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fync(int a)      
{int s,a1,i,n;               
s=1;
 for(i=1;i<=a;i++)   
{s=s*i;}
return s; }  
int main(int argc, char *argv[]) {  
	int f,b;                
	printf("enter number ");        
	scanf("%d",&b);             
	f=fync(b);                  
	printf("\n factorial= %d",f);         


	return 0;
}
