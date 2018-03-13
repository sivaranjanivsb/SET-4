#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int i,count=0,l;
            scanf("%[^\n]s",a);
           
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
		count++;
			
		}
		
	}
	printf("%d",count);
	return 0;
}
