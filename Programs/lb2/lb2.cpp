#include <iostream> 

using namespace std; 

double sr(int a[], int n) 

{ double s=0; int i, kol=0; 

for (i=0; i<n; i++) 

if (a[i]) { s+=a[i]; kol++; } 

if (kol) s/=kol; 

return s; 

} 

int main () 

{ setlocale(0,".1251"); 

int a[11], i; 

cout<<" Vvedit6 11 ciluh 4usel:\n"; 

for(i=0; i<11; i++) cin >> a[i]; 

cout<<"\n Serednye arufmetu4ne "<<11<<" elementiv - " <<sr(a,11) <<endl; 

cout<<" Serednye arufmetu4ne "<< 5 << " elementiv - " << sr(a,5) <<endl; 



return 0; 

} 
