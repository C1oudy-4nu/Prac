#include <stdio.h> 

#include <stdlib.h> 

#include <string.h> 

typedef struct {     

    char nomer [100]; 

    char misto [100];  

    float vid;  

    float chas1;  

    float chas2;  

    float chasy; 

    float price ; 

     

    } poizd; 

  

int main(int argc, char *argv[]) { 

     int p; 

     int i,n=2; 

     float chas1, chas2; 

      poizd * p;   

     float chas=0; 

     p = (poizd *) calloc (n,sizeof(poizd)); 

     for (i=0;i<n;i++)  {   

      

printf("Nomer:"); 

fflush(stdin); 

gets(p[i].nomer); 

      

printf("Pruznachennya:"); 

fflush(stdin); 

gets(p[i].misto); 

  

printf("Vidstan"); 

fflush(stdin); 

scanf("%f",&p[i].vid); 

  

printf("Chas Vidpravlennya"); 

fflush(stdin); 

scanf("%f",&p[i].chas1); 

  

printf("Chas Prubytia"); 

fflush(stdin); 

scanf("%f",&p[i].chas2); 

  

printf("Chas y dorozi"); 

fflush(stdin); 

scanf("%f",&p[i].chasy); 

  

     }              

     

        for (i=0;i<n;i++){ 

    if (chasy<=chas) 

    chas=i;  

    if (misto=='Kyiv' && chas1>=18 && chas2<=10) 

    printf("Poizd z naitruv chas = # %c, %c", p[i].misto p[i].nomer ); 

         } 

        printf("Poizd z naitruv chas = # %c, %c", p[chas].misto p[chas].nomer ); 

         

         

return 0; } 
