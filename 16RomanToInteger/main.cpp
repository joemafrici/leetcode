#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
	int romanToInt(string s) {
		int num = 0;
		int ii = 0;
		while (ii < s.size())
		{
			switch (s.at(ii)) {
				case 'I':
					if (ii + 1 < s.size() && s.at(ii + 1) == 'V')
					{
						num += 4;
						++ii;
					}
					else if (ii + 1 < s.size() && s.at(ii + 1) == 'X')
					{
						num += 9;
						++ii;
					}
					else num += 1;
					break;
				case 'V':
					num += 5;
					break;
				case 'X':
					if (ii + 1 < s.size() && s.at(ii + 1) == 'L')
					{
						num += 40;
						++ii;
					}
					else if (ii + 1 < s.size() && s.at(ii + 1) == 'C')
					{
						num += 90;
						++ii;
					}
					else {
						num += 10;
					}
					break;
				case 'L':
					num += 50;
					break;
				case 'C':
					if (ii + 1 < s.size() && s.at(ii + 1) == 'D')
					{
						num += 400;
						++ii;
					}
					else if (ii + 1 < s.size() && s.at(ii + 1) == 'M')
					{
						num += 900;
						++ii;
					}
					else {
						num += 100;
					}
					break;
				case 'D':
					num += 500;
					break;
				case 'M':
					num += 1000;
					break;
			}
			++ii;
		}
		return num;
	}
};
int main()
{
	cout << Solution().romanToInt("III") << endl;
	cout << Solution().romanToInt("LVIII") << endl;
	cout << Solution().romanToInt("MCMXCIV") << endl;
}
