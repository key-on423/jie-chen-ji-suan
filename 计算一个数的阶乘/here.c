#include <stdio.h>

int jiechen(int x);
int main()
{
	int x,y;
	int sum = 1;
	printf("������һ�����������ҽ�������Ľ׳�:\n");
	scanf("%d", &x);
	//for (y = 1;y <= x;y++) //���㷽��1
	//{
	//	sum *= y;
	//}
	sum=jiechen(x);//���㷽��2 �ݹ�
	printf("%d�Ľ׳�Ϊ%d", x, sum);
	return 0;
}
int jiechen(int x)
{
	if (x <= 2)
		return x;
	else
		return x * jiechen(x - 1);
}