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
	//vector<int> result = twoSum(nums, target);
	//std::cout << "first " << result[0] << " " << result[1] << std::endl;
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
	int lead;
	int follow;
	
	for (auto followidx = 0; followidx < nums.size() - 1; ++followidx)
	{
		for (auto leadidx = followidx + 1; leadidx < nums.size(); ++leadidx)
		{
			if (leadidx < nums.size() && nums[followidx] + nums[leadidx] == target)
			{
				lead = leadidx;
				follow = followidx;
			}
		}
	}
	return vector<int>{lead, follow};
}
