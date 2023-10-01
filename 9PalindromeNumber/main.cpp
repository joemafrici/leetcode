#include <iostream>
using namespace std;

bool isPalindrome(int x);
int main()
{
	int num1 = 121;
	int num2 = -121;
	int num3 = 10;
	int num4 = 1023;
	//isPalindrome(num1);
	//isPalindrome(num2);
	//isPalindrome(num3);
	isPalindrome(num4);
	return 0;
}

bool isPalindrome(int x)
{
	if (x < 0) return false;

	cout << x % 10 << endl;
	x /= 10;
	cout << x % 10 << endl;
	x /= 10;
	cout << x % 10 << endl;
	x /= 10;
	cout << x % 10 << endl;
	x /= 10;
	cout << x % 10 << endl;
	return true;
}
