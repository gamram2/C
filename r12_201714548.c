#include <stdio.h>
void printArr(int a[],int n)
{	int i;
 	for(i=0;i<n;i++)
 		printf("%d ",a[i]);
}
int main()
{
	int arr[10]={9,17,5,6,124,112,1,3,87,55};
	int i,j;
	int temp;//�� ���� �ٲ� �� ����� ����
	int length=sizeof(arr)/sizeof(int);
	printf("���� �� : ");
	printArr(arr,length) ;
	for(i=0;i<length-1;i++){
		for(j=0;j<length-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n���� �� : ");
	printArr(arr,length);
	return 0;
}
