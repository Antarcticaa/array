#include<stdio.h>
int main(){
	char a[1000];
	int i;
	int s=0;
	gets(a);
	for(i=0;a[i]!='\0';i++) s++;    //���һ������\0 
	printf("%d",s);
	return 0;
} 
