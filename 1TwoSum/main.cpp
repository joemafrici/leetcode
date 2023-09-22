#include <vector>
#include <iostream>
using std::vector;

vector<int> twoSum(vector<int>& nums, int target);

int main (int argc, char *argv[]) {
	std::vector<int> nums {2, 7, 11, 15};
	int target = 9;
	vector<int> result = twoSum(nums, target);
	std::cout << result[0] << std::endl;
	std::cout << result[1] << std::endl;
	printf("%d\t%d", result[0], result[1]);
	return 0;
}

vector<int> twoSum(vector<int>& nums, int target)
{
	int firstIndex;
	int secondIndex;
	for (auto ii = 0; ii < nums.size(); ++ii)
	{
		if (nums[ii] + nums[ii + 1] == target)
		{
			firstIndex = ii;
			secondIndex = ii + 1;
		}
	}
	return vector<int>{firstIndex, secondIndex};
}
