#include<stdio.h>
#define number 5   //�� 
int main(){
	int i;
	int tensu[number];
	int max,min;
	int sum=0;
	printf("please input %d student's scores.\n",number);
	for(i=0;i<number;i++){
		printf("NO.%2d:",i+1);
		scanf("%d",&tensu[i]);
		sum+=tensu[i];     //��forѭ����������5��Ԫ�ز���5��Ԫ�صĺ� 
	}
	min=max=tensu[0];
	for(i=1;i<number;i++){
		if(tensu[i]>max) max=tensu[i];
		if(tensu[i]<min) min=tensu[i];    //��forѭ��Ѱ��������С��Ԫ�� 
	}
	printf("the highest score is:%d\n",max);
	printf("the lowest score is:%d\n",min);
	printf("sum=%5d\n",sum);
	printf("average=%5.1f\n",(double)sum/number);
	return 0;
} 
