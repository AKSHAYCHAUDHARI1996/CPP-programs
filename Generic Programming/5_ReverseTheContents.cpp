#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

template<class T>
void Reverse(T *arr, int iSize)
{
	T temp = 0;
	int i = 0, SizeTmp= (iSize-1);
	for ( i = 0; i <(iSize/2); i++,SizeTmp-- )
	{
		temp = arr[i];
		arr[i] = arr[SizeTmp];
		arr[SizeTmp] = temp;
	}
}

int main()
{
	int arr[] = { 10,20,30,10,30,40,10,40,10 };
	for ( int i = 0; i < 9; i++ )
	{
		cout << arr[i]<<"\t";
	}
	cout << "\n";
	Reverse(arr, 9);
	for (int i = 0;i<9;i++)
	{
		cout << arr[i]<<"\n"; // 10 40 10 40 30 10 30 20 10
	}
	return 0;
}
