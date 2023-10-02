#include <iostream>
#include <cmath>
#include <vector>
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
	int magnitude = log10(x) + 1;
	vector<int> digits(magnitude);
	for (auto left = 0, right = magnitude - 1; left < magnitude; ++left)
	{
		digits[left] = x % 10;
		digits[right] = x %  int(pow(10, magnitude - 2));
		cout << "power thing " << int(pow(10, magnitude - 2)) << endl;
		cout << digits[left] << endl;
		cout << digits[right] << endl;
		//x /= 10;
	}

	/*
	for (auto ii = 0; ii < digits.size(); ++ii)
	{
		cout << digits[ii] << endl;
	}
	*/	
	return true;
}
