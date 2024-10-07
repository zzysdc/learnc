#include "leetcode_solutions.h"

int leetcode0027_solution::removeElement(vector<int>& nums, int val)
{
	int k = 0;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (val != nums[i])
		{
			nums[k] = nums[i];
			k++;
		}
	}
	return k;
}
