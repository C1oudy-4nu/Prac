#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fync(float a1,float b1,float a2,float b2){     // ���� �������
float ab;    //���� ab
ab=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));  // �������� ������ ab (�� �������� ������ �� �������)
return ab;}             // ���������� ������ ab
          

int main(int argc, char *argv[]) {  // ������� ��������
	float t,p1,p2,s1,s2,x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;            // ���� ������
  	   printf("vvedit koord 1 trykutnyka\n");         // ����������(����� ������ ����� 1 ����������)
	printf("vvedit x i y tocky 1 ");         // ����������(����� ������ ����� 1 �)
	scanf("%f%f",&x1,&y1);              // ���������� �����(���������)
	printf("vvedit x i y tocky 2 ");         // ����������(����� ������ ����� 2 �)
	scanf("%f%f",&x2,&y2);              // ���������� ����� (���������)
	printf("vvedit x i y tocky 3 ");         // ����������(����� ������ ����� 3 �����)
	scanf("%f%f",&x3,&y3);              // ���������� �����(���������)
	
	printf("vvedit koord 2 trykutnyka\n");         // ����������(����� ������ ����� 2 ����)
	printf("vvedit x i y tocky 1 ");         // ����������(����� ������ ����� 1 �)
	scanf("%f%f",&x4,&y4);              // ���������� �����(���������)
	printf("vvedit x i y tocky 2 ");         // ����������(����� ������ ����� 2 �)
	scanf("%f%f",&x5,&y5);              // ���������� ����� (���������)
	printf("vvedit x i y tocky 3 ");         // ����������(����� ������ ����� 3 �����)
	scanf("%f%f",&x6,&y6);              // ���������� �����(���������)
    
	
	p1=(fync(x1,y1,x2,y2)+fync(x2,y2,x3,y3)+fync(x3,y3,x1,y1))/2; //��������� �� ������� ����������� �������� �� ������� -����� � ����������� ����������� 
    s1=sqrt(p1*(p1-fync(x1,y1,x2,y2))*(p1-(fync(x2,y2,x3,y3)))*(p1-fync(x3,y3,x1,y1))); //�� � ������ ������ ����� 1
    
	p2=(fync(x4,y4,x5,y5)+fync(x5,y5,x6,y6)+fync(x6,y6,x4,y4))/2;//��������� �� ������� ����������� �������� �� ������� -����� � ����������� �����������
    s2=sqrt(p2*(p2-fync(x4,y4,x5,y5))*(p2-fync(x5,y5,x6,y6))*(p2-fync(x6,y6,x4,y4))); //�� � ������ ������ ����� 2
 //��������� �����

	if(s1>s2)
	printf("\n plosca 1 == %f",s1);         // ���� �������� ����� 1 �����  
	if(s2>s1)
	printf("\n plosca 2 == %f",s2);         // ���� �������� ����� 1 ����� 
    if(s1==s2)
	printf("\n plosca 1 ==plosca 2 == %f",s1);         // ���� �������� ����� 1 �� ��� 

    
	return 0;
}

