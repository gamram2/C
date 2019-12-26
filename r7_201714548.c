#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	int num;
	printf("양의 정수를 입력하시오.:");
	scanf("%d",&num);
	while(1){
		sum=sum+i;
		i=i+1;
		if(i>num)
		break;
	}
	printf("1부터 %d까지의 합: %d", num,sum);
	return 0;
}

