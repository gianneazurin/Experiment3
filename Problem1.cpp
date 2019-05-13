#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int arr[10],v,i, smallest,largest, total=0;
	float average;


	v =10;


	for (i=0;i < v;i++)
	{
		cout << "Input number " << i+1 << ": ";
		cin >> arr[i];
	}

	smallest = arr[0];
	largest = arr[0];


	for (i=1;i < v;i++)
	{
		if (arr[i] < smallest)
			smallest = arr[i];
		if(arr[i] > largest)
			largest = arr[i];
	}
	
	
		for (i=0;i < v;i++)
	{
		total += arr[i];
	}
	
	average = (float)total /v;
	
	cout << "\nThe smallest integer is= "<< smallest;
	cout << "\nThe largest integer is= "<< largest;
	
    
    cout << "\nThe Sum is= " << total << endl;
    cout << "Average= " << average;

    getch();
	return 0;
}

