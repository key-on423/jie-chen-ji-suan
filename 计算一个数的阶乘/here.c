#include <stdio.h>

int jiechen(int x);
int main()
{
	int x,y;
	int sum = 1;
	printf("请输入一个正整数，我将输出它的阶乘:\n");
	scanf("%d", &x);
	//for (y = 1;y <= x;y++) //计算方法1
	//{
	//	sum *= y;
	//}
	sum=jiechen(x);//计算方法2 递归
	printf("%d的阶乘为%d", x, sum);
	return 0;
}
int jiechen(int x)
{
	if (x <= 2)
		return x;
	else
		return x * jiechen(x - 1);
}