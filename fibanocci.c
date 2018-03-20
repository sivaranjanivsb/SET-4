#include <stdio.h>

int main(void) {
	int a=0,b=1,f=0,i,no;
	scanf(" %d",&no);
            printf("%d %d\t",a,b);
	for(i=1;i<=no;i++)
	{         f=a+b;
	printf("%d\t",f);
		a=b;
		b=f;
		
	
	}
	
	return 0;
}
