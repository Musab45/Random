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
		int over;
		over = fine - 7;
		cout << "Fine is " << over<<"$";
	}
	return 0;
}