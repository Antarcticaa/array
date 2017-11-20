#include<stdio.h>
#define number 5   //宏 
int main(){
	int i;
	int tensu[number];
	int max,min;
	int sum=0;
	printf("please input %d student's scores.\n",number);
	for(i=0;i<number;i++){
		printf("NO.%2d:",i+1);
		scanf("%d",&tensu[i]);
		sum+=tensu[i];     //用for循环依次输入5个元素并求5个元素的和 
	}
	min=max=tensu[0];
	for(i=1;i<number;i++){
		if(tensu[i]>max) max=tensu[i];
		if(tensu[i]<min) min=tensu[i];    //用for循环寻找最大和最小的元素 
	}
	printf("the highest score is:%d\n",max);
	printf("the lowest score is:%d\n",min);
	printf("sum=%5d\n",sum);
	printf("average=%5.1f\n",(double)sum/number);
	return 0;
} 
