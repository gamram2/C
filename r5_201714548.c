#include <stdio.h>

int main()
{
	int num1, num2;
	int sum=0;
	float avg;
	
	printf("정수 2개 입력:");
	scanf("%d %d", &num1, &num2);
	 
	sum=num1+num2;
	avg=sum/2.0;
	
	(avg>=70)? printf("당신은 합격입니다."):printf("당신은 불합격입니다.");
	
	return 0;
}

