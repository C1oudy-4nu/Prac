#include <stdio.h> 

#include <stdlib.h> 

int main() 

{ 

    int n,i,s,k=0; 

    printf("n="); 

    scanf("%d",&n); 

    int a[n],*p; 

    p=a; 

    for(i=0;i<n;i++){ 

        scanf("%d",&a[i]); 

    } 

    s=*(p+1); 

    for(i=0;i<n;i++){ 

        if(s!=a[i-1]){ 

            k++; 

        } 

    } 

    printf("\nk=%d",k); 

    return 0; 

} 


