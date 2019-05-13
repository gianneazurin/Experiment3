#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int array;
	char arr[100],i,j,temp;
	
	cout << "Enter the size of the array: "; cin>>array;
	cout << "Enter array elements: ";
	
	for (i=0; i < array; i++)
	{
		cin >> arr[i];
	}
	

	for(i=0; i < array; i++)
	{
	for (j=i+1;i < array; i++)
	{
	for(j=i+1;j<array;j++)
	{
		if (arr[i]>arr[j])
		{
			temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
		}
	}
	}
	}
	cout << "The output should be {";
	for (i=0;i< array;i++)
	{

	cout << arr[i] <<",";
	}
	cout<<"}"<<endl;
	cout<<"The size of the array is: "<< array;
getch();
return 0;
}
