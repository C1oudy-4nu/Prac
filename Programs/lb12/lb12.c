	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	
	
	typedef struct Nomer{
		int p;
	
		struct Nomer *l;
	}R;
	
	
	
	int Spusok (R **head, int p1){
	R *s = (R*)malloc(sizeof(R));
	s -> p = p1;
	s -> l = *head;
	
	*head = s;}
	
	
	int D(R *head){
	int d,i;
	int min;
	head=head->l;
	head=head->l;
	d=head->p;
	d;}
	
	int Rf(R *head){
	int r,i;
	r=head->p;
	
	r;}
	
	
	int pr(R *head, int min, int j){
	int i;
	for (i=0;i<0; i++){
	
	printf("\n\t%d ",head->p);
	(head) = (head) -> l;}
	if(i==j)
	printf("\n\t%d ",min);
	}
	
	
	int main(int argc, char *argv[]) {
	    int i; 
		int p1;
	    R *head = NULL;
	    
		int d,r, min,max, j; 
	
	
	printf("Vvedit 3 chisla: "); 
	for (i=0;i<3;i++)
	{scanf("%d",&p1);
	Spusok(&head,p1);}
	d=D(head);
	r=Rf(head);
	
	for (i=0;i<3;i++){
	if(head->p<min)
	min=head->p;
	if(head->p>max)
	j=i;
	if(i==0)
	head->p=d;
	if(i==2)
	head->p=r;
	printf("\n\t%d ",head->p);
	(head) = (head) -> l;}
	
	pr(head,min,j);
	      
	
	  
	    while (head )  
	    {
	    (head) = (head) -> l;
	    free(head);
	    }
	    printf("\n\nSpusok Vudaleno");
	
	
		return 0;
	}

