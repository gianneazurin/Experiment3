#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int h, i, j, k, l, m, n;
	int arra[i], arrb[i], arrc[i], arrd[h];
	int total;
	int Day;
	int num[l];
 
	cout << "Enter all temperature for a week of Province A, Province B and then Province C.\n";
	
	i=1;
   for (i = 0; i < 7; i++)
    {
       cout << "Province A, Day " << i+1 << ": ";
       cin >> arrd[h];
       h++;
   }
   
   i=1;
   for(i = 0; i < 7; i++)
    {
       cout << "Province B, Day " << i+1 << ": ";
       cin >> arrd[h];
       h++;
   }
   
   i=1;
   for(i = 0; i < 7; i++)
    {
       cout << "Province C, Day " << i+1 << ": ";
       cin >> arrd[h];
       h++;
   }
   cout <<"\nDisplaying values:"<< endl;
   cout <<"Province A, Day 1= "<< arrd[0]<<endl;
   cout <<"Province A, Day 2= "<< arrd[1]<<endl;
   cout <<"Province A, Day 3= "<< arrd[2]<<endl;
   cout <<"Province A, Day 4= "<< arrd[3]<<endl;
   cout <<"Province A, Day 5= "<< arrd[4]<<endl;
   cout <<"Province A, Day 6= "<< arrd[5]<<endl;
   cout <<"Province A, Day 7= "<< arrd[6]<<endl;
   cout <<"Province B, Day 1= "<< arrd[7]<<endl;
   cout <<"Province B, Day 2= "<< arrd[8]<<endl;
   cout <<"Province B, Day 3= "<< arrd[9]<<endl;
   cout <<"Province B, Day 4= "<< arrd[10]<<endl;
   cout <<"Province B, Day 5= "<< arrd[11]<<endl;
   cout <<"Province B, Day 6= "<< arrd[12]<<endl;
   cout <<"Province B, Day 7= "<< arrd[13]<<endl;
   cout <<"Province C, Day 1= "<< arrd[14]<<endl;
   cout <<"Province C, Day 2= "<< arrd[15]<<endl;
   cout <<"Province C, Day 3= "<< arrd[16]<<endl;
   cout <<"Province C, Day 4= "<< arrd[17]<<endl;
   cout <<"Province C, Day 5= "<< arrd[18]<<endl;
   cout <<"Province C, Day 6= "<< arrd[19]<<endl;
   cout <<"Province C, Day 7= "<< arrd[20]<<endl;  

getch();
return 0;
}

