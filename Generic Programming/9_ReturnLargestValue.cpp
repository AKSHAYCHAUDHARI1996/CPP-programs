#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
	int i = 0;
	T iMax = arr[0];

	for (i = 0;i < (iSize-1);i++)
	{
		if (arr[i] > iMax)
		{
			iMax = arr[i];
		}
		
	}
	return iMax;
}
int main()
{
	int i = 0;
	int arr[] = { 10,20,30,50,40 };
	float brr[] = { 10.2,3.7,9.8,8.7 };
	int iRet = Max(arr, 5);
	printf("%d", iRet);// 50
	float fRet = Max(brr, 4);
	printf("%f", fRet); // 9.8

	return 0;
}
