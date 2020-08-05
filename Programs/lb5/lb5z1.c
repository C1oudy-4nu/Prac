#include <stdio.h> 

#include <stdlib.h> 

float fync(float a1,float b1,float a2,float b2){     // iien ooieo?? 

float ab;    //iien ab 

ab=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));  // cia?aiiy iaoiai ab (ca oi?ioei? a?anoai? i?? oi?eaie) 

return ab;}             // iiaa?iaiiy ci?iiii? ab 

                        

  

int main(int argc, char *argv[]) {  // iniiaia i?ia?aia 

    float p,x1,x2,x3,y1,y2,y3;                 // iien ci?iieo 

    printf("vvedit x i y tocky 1 ");         // iaieioaiiy(oaeno aaaa?ou eii?a 1 o) 

    scanf("%f%f",&x1,&y1);              // c?eooaaiiy ?enae(eii?aeiao) 

    printf("vvedit x i y tocky 2 ");         // iaieioaiiy(oaeno aaaa?ou eii?a 2 o) 

    scanf("%f%f",&x2,&y2);              // c?eooaaiiy ?enae (eii?aeiao) 

    printf("vvedit x i y tocky 3 ");         // iaieioaiiy(oaeno aaaa?ou eii?a 3 oi?ee) 

    scanf("%f%f",&x3,&y3);              // c?eooaaiiy ?enae(eii?aeiao) 

     

p=fync(x1,y1,x2,y2)+fync(x2,y2,x3,y3)+fync(x3,y3,x1,y1);//caa?iaiiy ai ooieo?? ciaoia?aiiy a?anoaiae i?? oi?eaie -noi??i ? ia?aooaaiiy ia?eiao?a  

    printf("\n p= %f",p);         // aea?a cia?aiiy ia?eiao?a p   

  

  

    return 0; 

} 
