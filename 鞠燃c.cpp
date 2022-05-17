#include<stdio.h>
int main()
{
	int a,b,c;
	int z;
	printf("请选择1~7中任意一个数字");
	printf("你的数字是1，3，5，7么？是请输入1，否请输入0.");
	scanf("%d",&a);
	printf("你的数字是2，3，6，7么？是请输入1，否请输入0.");
	scanf("%d",&b);
	printf("你的数字是4，5，6，7么？是请输入1，否请输入0.");
	scanf("%d",&c);
	printf("我猜你的数字应该是%d",z=a+2*b+4*c);
	return 0;
	
}


