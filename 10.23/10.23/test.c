#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//对一个二进制数求他共有多少个一
//#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{ 
//	int num=0;
//	while(value)
//	{
//		if(value%2)
//			num++;
//		value=value/2;
//	}
//	return num;
//}
//int main()
//{
//	int i=0;
//	printf("请输入一个数\n");
//	scanf("%d",&i);
//	count_one_bits(i);
//	printf("%d\n",count_one_bits(i));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int num=0;
//	while(value)
//	{
//		if((value&1)==1)
//			num++;
//		value>>=1;
//	}
//	return num;
//
//}
//int main()
//{
//	int i=0;
//	printf("请输入一个数\n");
//	scanf("%d",&i);
//	count_one_bits(i);
//	printf("%d\n",count_one_bits(i));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void count_zxc(unsigned int value)
//{
//	int num=0;
//	int i=0;
//	int arr[32]={0};
//	while(value)
//	{
//		
//		if((value&1)==1)
//		{
//			num++;				
//		    value>>=1;
//		}
//				
//	}
//	for(i=num; i>=0; i-=2 )
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//	for(i=num-1; i>=0; i-=2 )
//	{
//		printf("%d",arr[i]);
//	}
//	
//	
//
//
//}
//int main()
//{
//	int i=0;
//	printf("请输入一个数\n");
//	scanf("%d",&i);
//	count_zxc(i);	
//	system("pause");    
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num, i,b[32];
//	printf("please enter a number:\n");
//	scanf("%d", &num);
//	for (i = 0; i <= 31; i++)
//	{
//		if ((num >> i) & 1)
//			b[i] = 1;
//		else
//			b[i] = 0;
//	}
//	    printf("偶数序列为:\n");
//		for (i = 31; i >= 1; i -= 2)
//		{
//			printf("%d", b[i]);
//		}
//		printf("\n");
//		printf("奇数序列为:\n");
//		for (i = 30; i >= 0; i -= 2)
//		{
//			printf("%d", b[i]);
//		}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
int print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	int i=0;
	printf("请输入一个数字\n");
	scanf("%d",&i);
	print(i);	
	return 0;
}

