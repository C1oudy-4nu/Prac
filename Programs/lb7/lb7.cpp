#include<iostream> 

     

    #include<math.h> 

     

    using namespace std; 

     

    long double fank (long double k); 

     

    int main() 
	
	{ 

     

    setlocale(LC_ALL,"UKR"); 

     

    cout<<"Praktuka N1. Laboratorna N7. Zavdannya 1."<<endl; 

     

    const int k=12; 

     

    long double y[k],sk,d; 

     

    int i; 

     

    for(i=1,y;i<=k;i++) 

     

    { 

     

    y[i]=fank(i); 

     
    cout<<"X["<<i<<"] "<<y[i]<<endl; 

     

    } 

     
    for(i=1,y[i],sk=0,d=1;i<=k;i++) 

     

    { 

     

    y[i]=fank(i); 

     

    if(y[i]>5 && y[i]<10) 

     

    { 

     

    sk+=(y[i]*y[i]); 

     

    d*=y[i]; 

     

    } 

     

    } 

     

    cout<<"Syma kvadrativ "<<sk<<endl; 

     

    cout<<"Dobytok "<<d<<endl; 

     

    

     

    } 

     

    long double fank(long double k) 

     

    { 

     

    return ((6.3*k-2*sin(3*k))/(1.5*(3*k-7))+pow((k-2),1/3)); 

     

    } 
