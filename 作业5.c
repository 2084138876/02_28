#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
// 1��ʹ��ָ���ӡһ�����������

//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(arr + i));
//	}
//
//}
//
//int main()
//{
//	int arr[10]={ 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	return 0;
//}
//scnaf ʹ��%s���ж�ȡʱ�������ո�Ͳ����ˣ���������abc def,ֻ�ܶ�ȡ��abc
//gets() ����Ҳ����������ȡ���ݣ��ո�Ҳ���Զ�ȡ��

// 2���ַ�������
//void reverse_str(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tem = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tem;
//		
//		left++;
//		right--;
//
//	}
//
//
//}
//
//
//int main()
//{
//	char arr[11] = { 0 };
//	gets(arr);//��ʾ��ȡ�������ݷŵ�arr��س�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse_str(arr, sz);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%c", arr[j]);
//
//	}
//	return 0;
//}

//3������Sn=a+aa+aaa+aaaa+aaaaa ǰ����֮��
//���磺2+22+222+2222+22222

#include <math.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int tem = a;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		sum += a;
//		a = a + tem * pow(10, i);
//		// a = a*10+2;
//	}
//	printf("%d", sum);
//	return 0;
//}

// ��ǰn��֮��
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int tem = a;
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += a;
//		a = a + tem * pow(10, i);
//	}
//	printf("%f", sum);
//	return 0;
//}

// 4����0-100000�ġ�ˮ�ɻ�����
//��ˮ�ɻ�������һ��nλ���֣����λ���ֵ�n�η�֮��ǡ�õ���������֡�
//����һ��3λ����153,153 == 1^3+5^3+3^3 ����ô153�ǡ�ˮ�ɻ�����
//
//#include <math.h>
//int count(int num)
//{
//	//����һ�������Ǽ�λ��
//	int count = 1;//�κ�һ�����֣�������һλ����
//	while (num / 10 != 0)
//	{
//		count++;
//		num /= 10;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		//1 ����i�Ǽ�λ����
//		
//		int r = count(i);
//		//2 �õ�i��ÿһλ
//		// ���磺123 %10 �õ� 3
//		//       123 /10 �õ� 12
//		//        12 % 10 �õ�2
//		//       12 /10 �õ� 1
//		//        1 % 10 �õ�1
//		//       1 /10 �õ� 0
//		/*int j = 0;
//		int tem = i;
//		int sum = 0;
//		for (j = 1; j <= r; j ++ )
//		{
//			sum += pow(i % 10, r);
//			i = i / 10;
//		}
//		i = tem;
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//
//	}
//	
//
//
//	return 0;
//}*/


//5 �� ��ӡ����      
/*
		  *
		 ***
		*****
       *******
      *********
	 ***********
	*************
	 ***********
      *********
       *******
        *****
		 ***
		  *
*/
// ˼·��							a[0][6]='*';
//				   a[1][5]='*'	    a[1][6]='*';      a[1][7]='*'

//int main()
//{
//	char arr[13][13] = { 0 };
//	
//	int mid = 6;
//	int left = mid;
//	int right = mid;
//	int i = 0;
//	int j = 0;
//
//	//��ʼ�� ���������Ԫ��Ϊ' '
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//
//
//	for (i = 0; i < 13; i++)
//	{
//		if (i < 6)
//		{
//			arr[i][mid] = '*';
//			arr[i][left] = '*';
//			arr[i][right] = '*';
//		}
//
//		if (i >6)
//		{
//			//������һ��
//			int j = 0;
//			for (j = 0; j < 13; j++)
//			{
//				arr[i][j] = arr[i - 1][j];
//			}
//			 //�������һ��' '���ұ�����һ��*
//			if (left >= 0 && right <= 12)
//			{
//				
//				arr[i][left] = ' ';
//				arr[i][right] = ' ';
//				left++;
//				right--;
//			}
//
//
//		}
//		
//		if (i >= 1&&i<7)
//		{
//			//�ȸ�����һ��
//			int j = 0;
//			for (j = 0; j < 13; j++)
//			{
//				arr[i][j] = arr[i - 1][j];			}
//			// �������һ��*���ұ�����һ��*
//			if (left <=6&& right >=6)
//			{
//				left--;
//				right++;
//				arr[i][left] = '*';
//				arr[i][right] = '*';
//			}
//			
//		}
//		
//	
//
//
//	}
//
//	// ��ӡ
//
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}
//  ����2


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int mid = (line+1)/2;
//	int i = 0;
//
//	//�ϰ벿��
//	
//	for (i = 1; i <= mid; i++)
//	{
//		int j = 0;
//		// ��ӡ�ո�
//		for (j = 1; j <= mid-i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ*
//		for (j = 1; j <= 2 * i-1 ; j++)
//		{
//			printf("*");
//		}
//		// ����
//		printf("\n");
//	}
//	
//	
//	//�°벿��
//
//	for (i = 1; i <= mid-1; i++)
//	{
//		int j = 0;
//		// ��ӡ�ո�
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ*
//		for (j = 1; j <= line-2*i; j++)
//		{
//			printf("*");
//		}
//		// ����
//		printf("\n");
//	}
//
//	
//
//	return 0;
//}

// 6������ˮ���⣺��ˮһ��Ǯһƿ��������ƿ�ӿ��Ի�һƿ��ˮ
//    �����������ܺȶ���ƿ��ˮ
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int count = money;
//	int empty = count;
//	while (empty >= 2)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", count);
//
//}