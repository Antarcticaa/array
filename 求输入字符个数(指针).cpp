#include<stdio.h>
int main(){
	char s[1000];
	int i=0;
	gets(s);
	char*p=s;  //ָ�������һ��Ԫ�� 
	printf("%d  ",*p);   //����ʾ����ĵ�һ���ַ��ַ���ascii�룬˵��ָ��ָ���˵�һ���ַ� 
	while(*p!='\0')   //pָ���Ԫ�������Nullʱֹͣ 
   {
   	p++;            //ָ������ƶ���ָ����һ���� 
   	i++;
	   }	
	printf("%d",i);
	return 0;
}
