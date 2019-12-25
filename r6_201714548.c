#include <stdio.h>

int main(void)
{
	int num;
	printf("고객점수 : ");
	scanf("%d", &num);
	
	if(num>=1000)
		printf("VIP \n");
		printf("일반");
	return 0;
}
