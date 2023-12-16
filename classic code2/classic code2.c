#define _CRT_SECURE_NO_WARNINGS 1

//1.关机程序
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//2.计算1/1-1/2+1/3-1/4+1/5......-1/n的值
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double sum = 0.0;
//	int flag = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//3.乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4.用while语句求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		S += i;
//		i++;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//用do-while语句求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	do
//	{
//		S += i;
//		i++;
//	} while (i <= n);
//	printf("S=%d\n", S);
//	return 0;
//}

//用for语句求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		S += i;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//用goto语句求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//loop:
//	if (i <= n)
//	{
//		S += i;
//		i++;
//		goto loop;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//5.验证四方定理，输入任意一个自然数，都可用四个数的平方和来表示。
#include <stdio.h>
int main()
{
	int i, j, k, l, n;
	printf("请输入一个数:\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			for (k = 0; k <= j; k++)
			{
				for (l = 0; l <= k; l++)
				{
					if (i * i + j * j + k * k + l * l == n)
					{
						printf("%d*%d+%d*%d+%d*%d+%d*%d=%d\n", i, i, j, j, k, k, l, l, n);
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
