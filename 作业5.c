#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
// 1、使用指针打印一个数组的内容

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
//scnaf 使用%s进行读取时，遇见空格就不读了，例如输入abc def,只能读取到abc
//gets() 函数也可以用来读取数据，空格也可以读取到

// 2、字符串逆序
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
//	gets(arr);//表示将取到的数据放到arr里，回车结束
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

//3、计算Sn=a+aa+aaa+aaaa+aaaaa 前五项之和
//例如：2+22+222+2222+22222

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

// 求前n项之和
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

// 4、求0-100000的“水仙花数”
//“水仙花数”：一个n位数字，其各位数字的n次方之和恰好等于这个数字。
//例如一个3位数字153,153 == 1^3+5^3+3^3 ，那么153是“水仙花数”
//
//#include <math.h>
//int count(int num)
//{
//	//计算一个数字是几位数
//	int count = 1;//任何一个数字，至少是一位数字
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
//		//1 计算i是几位数字
//		
//		int r = count(i);
//		//2 得到i的每一位
//		// 例如：123 %10 得到 3
//		//       123 /10 得到 12
//		//        12 % 10 得到2
//		//       12 /10 得到 1
//		//        1 % 10 得到1
//		//       1 /10 得到 0
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


//5 、 打印菱形      
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
// 思路：							a[0][6]='*';
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
//	//初始化 数组的所有元素为' '
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
//			//复制上一行
//			int j = 0;
//			for (j = 0; j < 13; j++)
//			{
//				arr[i][j] = arr[i - 1][j];
//			}
//			 //左边增加一个' '，右边增加一个*
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
//			//先复制上一行
//			int j = 0;
//			for (j = 0; j < 13; j++)
//			{
//				arr[i][j] = arr[i - 1][j];			}
//			// 左边增加一个*，右边增加一个*
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
//	// 打印
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
//  方法2


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int mid = (line+1)/2;
//	int i = 0;
//
//	//上半部分
//	
//	for (i = 1; i <= mid; i++)
//	{
//		int j = 0;
//		// 打印空格
//		for (j = 1; j <= mid-i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 1; j <= 2 * i-1 ; j++)
//		{
//			printf("*");
//		}
//		// 换行
//		printf("\n");
//	}
//	
//	
//	//下半部分
//
//	for (i = 1; i <= mid-1; i++)
//	{
//		int j = 0;
//		// 打印空格
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 1; j <= line-2*i; j++)
//		{
//			printf("*");
//		}
//		// 换行
//		printf("\n");
//	}
//
//	
//
//	return 0;
//}

// 6、喝汽水问题：汽水一块钱一瓶，两个空瓶子可以换一瓶汽水
//    给定金额，计算能喝多少瓶汽水
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