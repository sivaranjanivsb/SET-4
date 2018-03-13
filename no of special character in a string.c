#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int i,count=0,s=0;
            scanf("%[^\n]s",a);
           
	for(i=0;a[i]!='\0';i++)
	{
		if(((a[i]>='0')&&(a[i]<='9'))||((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A'&&a[i]<='z')))
		{
		count=0;
			
		}
		else
		s++;
		
	}
	printf("%d",s);
	return 0;
}
