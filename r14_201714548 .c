#include <stdio.h>
void main()
{
	FILE *fp;
	char name[10],tel[15];
	int i;
	fp=fopen("14��_sample.txt","w");
	fprintf(fp,"�̸�      ����ó\n");
	for(i=0;i<5;i++){
		printf("%d��° �̸�: ",i+1);
		scanf("%s\n",name);
		printf("����ó: ");
		scanf("%s\n",tel);
		
		fprintf(fp,"%s\t %s\n ",name,tel);
	}
	fclose(fp);
	return 0;
}
