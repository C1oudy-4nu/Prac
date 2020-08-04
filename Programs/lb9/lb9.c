#include <stdio.h> 

#include <stdlib.h> 

#include <math.h> 

              

float main (void) { 

int *a, *b, j,l,l1;  

int i, n,m; 

scanf("%d",&n); 

scanf("%d",&m); 

  

a=(int*) malloc (n* sizeof(int)); 

b=(int*) malloc (m* sizeof(int)); 

  

if (a == NULL){ 

{ 

printf("Error"); 

return -1; 

}} 

  

  

for(i=1; i<=n; i++){ 

a[i]=rand()% 20-10; 

printf("%d ",a[i]); 

} 

for(i=1; i<=n; i++){ 

if(a[i]%3 != 0) 

l=l+1;} 

printf("\n"); 

printf("K-st %d", l); 

printf("\n"); 

  

l1=0;; 

for(i=1; i<=m; i++){ 

b[i]=rand()% 20-10; 

printf("%d ",b[i]); 

} 

for(i=1; i<=m; i++){ 

if((a[i]%3)== 0) 

l1=l1+1;} 

printf("\n"); 

printf("K-st %d ", l1); 

printf("\n"); 

  

  

free(a); 

free(b); 

return 0; 

} 
