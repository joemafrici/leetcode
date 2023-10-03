#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(int x);
int main()
{
	vector<int> test_cases { 121, -121, 10, 1023 };
	for (auto n : test_cases) {
		
		if (isPalindrome(n))
		{
			cout << n << " is a palindrome" << endl;
		}
		else {
			cout << n << " is not a palindrome" << endl;
		}
	}
	return 0;
}

bool isPalindrome(int x)
{
	if (x < 0) return false;
	if (x == 0) return true;
	int num_digits = log10(x) + 1;
	cout << "There are " << num_digits << " digits" << endl;
	vector<int> digits(num_digits);
	for (auto left = 0; left < num_digits; ++left)
	{
		digits[left] = x % 10;
		x /= 10;
	}
	
	auto digits2 = digits; 
	reverse(digits2.begin(), digits2.end());
	if (digits == digits2) return true;
	else return false;
	return true;
}
