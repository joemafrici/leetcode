#include <vector>
#include <iostream>
using std::vector;

vector<int> twoSum(vector<int>& nums, int target);

int main (int argc, char *argv[]) {
	std::vector<int> nums {2, 7, 11, 15};
	std::vector<int> nums2 {3, 2, 4};
	std::vector<int> nums3 {3, 3};
	std::vector<int> nums4 {3, 2, 3};
	int target = 9;
	int target2 = 6;
	int target3 = 6;
	int target4 = 6;
	vector<int> result = twoSum(nums, target);
	std::cout << "first " << result[0] << " " << result[1] << std::endl;
	vector<int> result2 = twoSum(nums2, target2);
	std::cout << "second " << result2[0] << " " << result2[1] << std::endl;
	vector<int> result3 = twoSum(nums3, target3);
	std::cout << "third " << result3[0] << " " << result3[1] << std::endl;
	vector<int> result4 = twoSum(nums4, target4);
	std::cout << "fourth " << result4[0] << " " << result4[1] << std::endl;

	return 0;
}

vector<int> twoSum(vector<int>& nums, int target)
{
	int firstIndex;
	int secondIndex;
	
	for (auto ii = 0; ii < nums.size() - 1; ++ii)
	{
		for (auto kk = ii + 1; kk < nums.size() - 1; ++kk)
		{
			if (kk < nums.size() && nums[ii] + nums[kk] == target)
			{
				firstIndex = ii;
				secondIndex = kk;
			}
		}
	}
	/*
	for (auto ii = 0; ii < nums.size() - 1; ++ii)
	{
		if (nums[ii] + nums[ii + 1] == target)
		{
			firstIndex = ii;
			secondIndex = ii + 1;
		}
	}
    */
	return vector<int>{firstIndex, secondIndex};
}
