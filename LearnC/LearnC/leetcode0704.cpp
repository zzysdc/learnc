#include "leetcode_solutions.h"

int leetcode0704_solution::search(vector<int>& nums, int target)
{
	int index = -1;
	int num_lens = nums.size();
	int left_node = 0;
	int right_node = num_lens - 1;
	int half = int( (right_node - left_node) / 2);
	while (left_node <= right_node) {
		if (target == nums[half])
		{
			index = half;
			break;
		}
		else if (target < nums[half])
		{
			right_node = half - 1;
			half = int((left_node + right_node) / 2);
		}

		else
		{
			left_node = half + 1;
			half = int((left_node + right_node) / 2);
		}
	}

	return index;
}
