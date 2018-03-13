#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int i,no=0,letter=0,count=0;
            gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		no++;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
		count++;
		letter=no-count;
			
		}
		
	}
	printf("%d",letter);
	return 0;
}
