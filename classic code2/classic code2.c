#define _CRT_SECURE_NO_WARNINGS 1

//1.�ػ�����
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
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "������") == 0)
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

//2.����1/1-1/2+1/3-1/4+1/5......-1/n��ֵ
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

//3.�˷��ھ���
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

//4.��while�����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		S += i;
//		i++;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//��do-while�����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	do
//	{
//		S += i;
//		i++;
//	} while (i <= n);
//	printf("S=%d\n", S);
//	return 0;
//}

//��for�����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		S += i;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//��goto�����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
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

//5.��֤�ķ�������������һ����Ȼ�����������ĸ�����ƽ��������ʾ��
#include <stdio.h>
int main()
{
	int i, j, k, l, n;
	printf("������һ����:\n");
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
