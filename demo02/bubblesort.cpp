#include"head.h"
void bubbleSort(int *arr, int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return ;
}
void bubblePrint(int *arr,int len)
{
	int i;
	cout << "排序后的数组是：" << endl;
	for (i = 0; i < len; i++)
	{
		cout <<"a["<<i<<"]"<< arr[i] << endl;
	}
}