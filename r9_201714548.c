#include <stdio.h>

int myMax(int a,int b);
int main(void)
{
	int x,y;
	printf("���� �ΰ� �Է�:");
	scanf("%d %d",&x,&y); 
	printf("ū��: %d\n",myMax(x,y));
	return 0;
}

int myMax(int a,int b)
{
	if(a>b)
		return (a>b)?a:b;
	else
		return b;
}
