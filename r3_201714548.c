#include <stdio.h>

int main(void)
{
	int math=88;
	int science=85;
	int sum=math+science;
	double average=0;
	
	sum=math+science;
	average= (double)sum/3;
	
	printf("�հ�=%d\t ���=%.5f\n", sum, average);
	
	return 0;
}

