#include <stdio.h>
#include <stdlib.h>
int fync(int d1,int n1){     //������� �������
    int s1=n1; // ���� ���� (��� ��� n �� ���� ������ ��������� ���� ��)
    if(d1>=s1)   // ���� ���� ������ �� n �� �������� �� ���� (S)
    return  s1;  // ��������� ����
    if(d1<n1)   // ���� ���� ����� N
     while(n1>0){   // ���� n ���� ����� ����  ����������
        s1=s1+d1;   // �� ���� ������� �����
        n1=n1-d1;}  // �� n ������� � ��� �����
     return s1;  // ��������� ����
    }


int main(){  // ������� ��������
int d,n,s;   // ���� ������
printf("vvedit krok = "); // �����������
scanf("%d",&d);  // ������� �����
printf("vvedit chulslo: "); // �����������
scanf("%d",&n);  // ������� �����
s=fync(d,n);   //
printf("suma chusel dor ==== %d",s);
return 0;
} 
