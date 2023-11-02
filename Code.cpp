#include<iostream>
using namespace std;
int main()
{
	int days, fine = 1;
	cout << "Enter Days: ";
	cin >> days;
	fine = days * fine;
	if (fine <= 7)
	{
		cout << "No Fine!";
	}
	else
	{
		cout << "Fine is " << fine;
	}
	return 0;
}