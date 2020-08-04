#include <stdio.h> 

#include <stdlib.h> 

  

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

  

  

int main(int argc, char *argv[]) { 

float x, y; 

printf("Vvedit koord tocky(x,y)\n"); 

scanf("%f%f",&x ,&y); 

if((x>=-4)&&(x<=4)&&(y>=-4)&&(y<=4)) 

{if((x*x+y*y>16)) 

printf("Tocka vhodyt v vydilenu obl"); 

else 

printf("Tocka ne vhodyt v vydilenu obl"); 

} 

else 

printf("Tocka ne vhodyt v vydilenu obl"); 

  

    return 0; 

} 
