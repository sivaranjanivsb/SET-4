#include <stdio.h>

int main(void) {
	int a1,a2;
	scanf("%d %d",&a1,&a2);
	a1=a1^a2;
	a2=a1^a2;
	a1=a1^a2;
	printf("%d %d",a1,a2);
	return 0;
}
