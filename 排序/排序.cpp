#include<stdio.h>
void BubbleSort(int number[],int n)//冒泡排序法排序函数
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(number[j]<number[j-1])
			{
				temp=number[j];
				number[j]=number[j-1];
				number[j-1]=temp;
			}
		 } 
	} 
 }
 int main()
 {  int n,i,j;
 	int number[n];
 	printf("请输入要排序的数字个数:"); 
 	scanf("%d",&n);
 	printf("请输入要排序的数字:");
 	for(i=0;i<n;i++)
 	{
	 scanf("%d",&number[i]);
	 }
 	BubbleSort(number, n);
 	for(j=0;j<n;j++)
 	{
 		printf("%d ",number[j]);
	 }
	 return 0;
  }

