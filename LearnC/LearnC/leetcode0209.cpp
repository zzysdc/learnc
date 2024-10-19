#include "leetcode_solutions.h"

int vector_sum(vector<int>& nums, int p_begin, int p_end) {
	int sums = 0;
	for (int i = p_begin; i < p_end; i++)
	{
		sums = sums + nums[i];
	}
	return sums;

}

int leetcode0209_solution::minSubArrayLen(int target, vector<int>& nums) {
	int min_lens = 1000000;
	int block_sum = 0;
	int i = 0;
	for (int j = 0; j < nums.size(); j++)
	{
		block_sum = block_sum + nums[j];
		while (block_sum >= target) {
			int block_lens = j - i + 1;
			min_lens = min(min_lens, block_lens);
			block_sum = block_sum - nums[i];
			i++;
		}
	}
	if (min_lens == 1000000)
	{
		min_lens = 0;
	}
	return min_lens;
}