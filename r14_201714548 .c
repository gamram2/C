#include <stdio.h>
void main()
{
	FILE *fp;
	char name[10],tel[15];
	int i;
	fp=fopen("14주_sample.txt","w");
	fprintf(fp,"이름      연락처\n");
	for(i=0;i<5;i++){
		printf("%d번째 이름: ",i+1);
		scanf("%s\n",name);
		printf("연락처: ");
		scanf("%s\n",tel);
		
		fprintf(fp,"%s\t %s\n ",name,tel);
	}
	fclose(fp);
	return 0;
}
