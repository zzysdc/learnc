#include "leetcode_solutions.h"

vector<int> leetcode0977_solution::sortedSquares(vector<int>& nums) {
	vector<int> result(nums.size());
	int i = 0;
	int j = nums.size() - 1;
	for (int k = nums.size() - 1; k > -1; k--)
	{
		int sq_left = nums[i] * nums[i];
		int sq_right = nums[j] * nums[j];

		if (sq_left < sq_right)
		{
			result[k] = sq_right;
			j--;
		}
		else
		{
			result[k] = sq_left;
			i++;
		}
	}
	return result;
}