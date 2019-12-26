#include <stdio.h>
#define SIZE 6
int main()
{
	int num[SIZE]={98,99,100,45,30,0};
	int max;
	int i;
	max=num[0];
	
	for(i=0;i<SIZE;i++) {
		if(num[i]>max){
			max=num[i];
		}
	}
	printf("max=%d\n",max);
	return 0;
}
