#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
	int count = 0 ,i = 0;
	for ( i = 0; i < iSize; i++)
	{
		if ( arr[i] == iNo )
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int arr[] = { 10,20,30,10,30,40,10,40,10 };
	int iRet = Frequency(arr, 9, 10);
	printf("%d", iRet);
	return 0;
}
