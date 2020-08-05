#include <stdio.h>
#include <stdlib.h>
int fync(int d1,int n1){     //описуємо функцію
    int s1=n1; // наша сума (вже дор n бо потім будемо добавляти інші ел)
    if(d1>=s1)   // якщо крок більший за n то виводимо цю суму (S)
    return  s1;  // повертаємо суму
    if(d1<n1)   // якщо крок менше N
     while(n1>0){   // поки n буде більше нуля  обраховуємо
        s1=s1+d1;   // до суму плюсуємо кроки
        n1=n1-d1;}  // від n віднімаємо ті самі кроки
     return s1;  // повертаємо суму
    }


int main(){  // основна програма
int d,n,s;   // опис змінних
printf("vvedit krok = "); // повідомлення
scanf("%d",&d);  // скануємо число
printf("vvedit chulslo: "); // повідомлення
scanf("%d",&n);  // скануємо число
s=fync(d,n);   //
printf("suma chusel dor ==== %d",s);
return 0;
} 
