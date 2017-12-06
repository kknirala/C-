#include<stdio.h>
#include<conio.h>
void main()
{
	int *c=(int *)malloc(8*sizeof(int)); 
	int i=0,x=1;
	while(i<8)
	{
		i++;
		c[i]=i*i%2;
		x=x+c[i];
	}
	printf("%d ",x);
	getch();
}
