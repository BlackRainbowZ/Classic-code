#define _CRT_SECURE_NO_WARNINGS 1

//1.��֪Բ�İ뾶����Բ���ܳ��������
//#include <stdio.h>
//#define PI 3.1415926			//ʹ�÷��ų�����ʾԲ����
//int main()
//{
//	double r, l, s;				//����뾶r���ܳ�l�����s
//	printf("������Բ�İ뾶��");	//�����ʾ��
//	scanf("%lf", &r);			//����뾶r��ֵ
//	l = 2 * PI * r;				//�����ܳ�l
//	s = PI * r * r;				//�������s
//	printf("Բ���ܳ�Ϊ%f,Բ�����Ϊ%f\n", l, s);//����ܳ�l�����s
//	return 0;					//���򷵻�ֵ0
//}

//2.����n�Ľ׳ˡ�
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

//3.����1!+ 2!+ 3!+ ...... + n!��
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

//4.��n!(n-1)!��ǰn��͡�
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

//5.��һ�����������в��Ҿ����ĳ������n��
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//6.��������Ϸ
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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//7.���Լ��
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
//	printf("���Լ����%d\n", n);
//
//	return 0;
//}

//8.�ж��Ƿ�Ϊ����
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("���������:");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//	return 0;
//}

//9.�ж��Ƿ�Ϊ����
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
			printf("%d��������\n",i);
			break;
		}
	}
	if (j > sqrt(i))
	{
		printf("%d������\n", i);
	}

	return 0;
}