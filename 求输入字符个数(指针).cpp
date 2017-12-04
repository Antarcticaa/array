#include<stdio.h>
int main(){
	char s[1000];
	int i=0;
	gets(s);
	char*p=s;  //指向数组第一个元素 
	printf("%d  ",*p);   //会显示输入的第一个字符字符的ascii码，说明指针指向了第一个字符 
	while(*p!='\0')   //p指向的元素是最后Null时停止 
   {
   	p++;            //指针向后移动，指向下一个数 
   	i++;
	   }	
	printf("%d",i);
	return 0;
}
