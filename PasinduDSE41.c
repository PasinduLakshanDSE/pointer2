#include<stdio.h>
void main(){
	
	int c;
	int *p;
	c=5;
	p =&c;
	c=1;
	printf("%d\n",c);
	printf("%d\n",*p);
	printf("%d\n",p);
}