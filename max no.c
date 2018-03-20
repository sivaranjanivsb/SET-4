#include <stdio.h>

int main(void) {
	int no[10],i,temp;
	for(i=0;i<10;i++)
	scanf("%d",&no[i]);
	temp=no[0];
	for(i=0;i<10;i++)
	{
		if(no[i]>temp)
		temp=no[i];
	}

	printf("%d",temp);
	return 0;
}
