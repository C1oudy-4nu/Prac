#include <iostream> 

using namespace std; 

double MIN(double a[2][2], int& imin, int& jmin) 

{ 

double min=a[0][0]; 

imin=jmin=0; 

for(int i=0; i<2; i++) 

for(int j=0; j<2; j++) 

if(a[i][j]<min) 

{ min=a[i][j]; 

imin=i; jmin=j; 

} 

imin++; jmin++; 

return min; 

} 

int main () 

{ 

setlocale(0,".1251"); 

double a[2][2], m; 

int i, j, ind_i, ind_j; 

cout<<" Vvedit6 nmeobhidnuy masuv:"<<endl; 

for(i=0; i<2; i++) 

for(j=0; j<2; j++) cin>>a[i][j]; 

m = MIN(a, ind_i, ind_j); 

cout<< "\n Minimal6nuy element " << m << "\n rozmidhenuy pid indexom " 

<< ind_i <<"-error " << ind_j <<"-not found " << endl; 

 

return 0; 

} 
