#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) 
	{
		string lcp;
		int vector_index = 0;
		int string_index = 0;
		bool done = false;
		if (strs[vector_index].size() == 0) return "";
		while (done == false && vector_index < strs.size())
		{
			char curr;	
			if (string_index < strs[vector_index].size())
				curr = strs[vector_index].at(string_index);
			else return lcp;
			for (auto ii = 0; ii < strs.size(); ++ii) 
			{

				if (string_index < strs[ii].size() && strs[ii].at(string_index) != curr)
				{
					done = true;	
					break;
				}
			}
			if (!done)
				lcp.append(sizeof(char), strs[vector_index].at(string_index));
			++string_index;
		}
		return lcp;
	}
};

int main()
{
	vector<string> strs { "flower", "flow", "flight" };
	cout << Solution().longestCommonPrefix(strs) << endl;
	vector<string> strs2 { "dog", "racecar", "car" };
	cout << Solution().longestCommonPrefix(strs2) << endl;
}
