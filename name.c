#include<stdio.h>
//#include<alloc.h>
#include<string.h>
int main()
{
	char *na,*str;
	int i;
	//char str[20];
    str=(char *)malloc(10);
	printf("enter name\n");
	scanf("%s",str);
	na=str;
	//str=NULL;
	
	
	 printf("%s",na);
    
	return 0;
}
