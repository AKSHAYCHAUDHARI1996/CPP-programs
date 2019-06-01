#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
	int iCnt = 0;
	while ( iCnt < iSize )
	{
		if ( arr[iCnt] == iNo )
		{
			break;
		}
		iCnt++;
	}
	if ( iCnt == iSize )
	{
		return FALSE;
	}
	else
	{
		return iCnt+1;
	}
}
int main()
{
	int arr[] = { 10,20,30,10,30,40,10,40,10 };
	int iRet = SearchFirst(arr, 9, 40);
	if ( iRet == FALSE )
	{
		printf( "not found" );
	}
	else
	{
		printf( "%d", iRet ); 
	}
	return 0;
}
