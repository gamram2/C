#include <stdio.h>

int main()
{
	int num1, num2;
	int sum=0;
	float avg;
	
	printf("���� 2�� �Է�:");
	scanf("%d %d", &num1, &num2);
	 
	sum=num1+num2;
	avg=sum/2.0;
	
	(avg>=70)? printf("����� �հ��Դϴ�."):printf("����� ���հ��Դϴ�.");
	
	return 0;
}

