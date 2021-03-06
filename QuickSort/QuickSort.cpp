// QuickSort.cpp: 定义控制台应用程序的入口点。
//

// QuickSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int qsort(int a[], int len)
{
	if (len <2)
		return 0;
	int low = 0;
	int high = len - 1;
	int key = a[low];
	while (low < high)
	{
		while (low<high && a[high] >= key)
			--high;

		a[low] = a[high];
		while (low < high && a[low] <= key)
			++low;
		a[high] = a[low];
	}

	a[low] = key;
	qsort(a, low);
	qsort(a + low + 1, len - low - 1);
	return 9;
}
int main()
{


	int d[] = { 1,3,2,44,23,23,28,6,34,56 };
	qsort(d, 10);
	for (int i = 0; i<10; i++)
		printf("%d  ", d[i]);
	printf("\n");
	return 0;
}