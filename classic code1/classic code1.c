#define _CRT_SECURE_NO_WARNINGS 1

//1.已知圆的半径，求圆的周长和面积。
//#include <stdio.h>
//#define PI 3.1415926			//使用符号常量表示圆周率
//int main()
//{
//	double r, l, s;				//定义半径r，周长l和面积s
//	printf("请输入圆的半径：");	//输出提示语
//	scanf("%lf", &r);			//输入半径r的值
//	l = 2 * PI * r;				//计算周长l
//	s = PI * r * r;				//计算面积s
//	printf("圆的周长为%f,圆的面积为%f\n", l, s);//输出周长l和面积s
//	return 0;					//程序返回值0
//}

//2.计算n的阶乘。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//	return 0;
//}

//3.计算1!+ 2!+ 3!+ ...... + n!。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//4.求n!(n-1)!的前n项和。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//5.在一个有序数组中查找具体的某个数字n。
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,100 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	scanf("%d", &k);
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//6.猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("******	1.play	 ******\n");
//	printf("******	0.exit	 ******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//7.最大公约数
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//
//	return 0;
//}

//8.判断是否为闰年
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("请输入年号:");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}

//9.判断是否为素数
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	scanf("%d", &i);
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			printf("%d不是素数\n",i);
			break;
		}
	}
	if (j > sqrt(i))
	{
		printf("%d是素数\n", i);
	}

	return 0;
}