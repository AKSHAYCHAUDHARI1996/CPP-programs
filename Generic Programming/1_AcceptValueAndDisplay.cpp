template<class T>
void Display(T value, int iSize)
{
	int i = 0;
	for ( i = 0 ; i < iSize ; i++ )
	{
		cout << value << "\t" ;
	}
}

int main() {
	Display('M', 7);
  
	Display(11, 3);
	
  Display(3.7, 6);
	
  return 0;
}
