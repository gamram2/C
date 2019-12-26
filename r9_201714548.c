#include <stdio.h>

int myMax(int a,int b);
int main(void)
{
	int x,y;
	printf("정수 두개 입력:");
	scanf("%d %d",&x,&y); 
	printf("큰값: %d\n",myMax(x,y));
	return 0;
}

int myMax(int a,int b)
{
	if(a>b)
		return (a>b)?a:b;
	else
		return b;
}
