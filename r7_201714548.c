#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	int num;
	printf("���� ������ �Է��Ͻÿ�.:");
	scanf("%d",&num);
	while(1){
		sum=sum+i;
		i=i+1;
		if(i>num)
		break;
	}
	printf("1���� %d������ ��: %d", num,sum);
	return 0;
}

