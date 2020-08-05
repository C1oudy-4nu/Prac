#include <stdio.h> 

#include <stdlib.h> 

#include <string.h> 

typedef struct {     

    char number [64]; 

    char city [64];  

    float dist;  

    float time1;  

    float time2;  

    float timer; 

    float time; 

  

     

    } a; 

  

int main(int argc, char *argv[]) { 

     int t; 

     int i,n=2; 

      a * train;   

     float time=0; 

     train = (a *) calloc (n,sizeof(train)); 

     for (i=0;i<n;i++)  {   

              printf("Number:"); 

                 fflush(stdin); 

                gets(train[i].number); 

                 printf("Destination:"); 

                  fflush(stdin); 

     gets(train [i].city); 

              printf("Distance:"); 

              fflush(stdin); 

                   scanf("%f",&train[i].dist); 

  

               printf("Time to departure:"); 

             fflush(stdin); 

                        scanf("%f",&train[i].time1); 

  

                         printf("Time to arrive:"); 

                       fflush(stdin); 

                                      scanf("%f",&train[i].time2); 

  

                           printf("Travel time:"); 

            fflush(stdin); 

              scanf("%f",&train[i].timer);     }              

     

                              for (i=0;i<n;i++){ 

                               if ( train[i].time <= train[i].timer) 

                 time=i;  

                if (train[i].city =='Chernivtsi' && train[i].time1>=24 && train[i].time2<=12) 

         printf(" Train with longest time=  %c, %c", train[i].city && train[i].number );         } 

              printf("Train with longest time =  %c, %c", train[i].city && train[i].number ); 

         

         

return 0; } 

 
