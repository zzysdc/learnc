#include "leetcode_solutions.h"

vector<vector<int>> leetcode0059_solution::generateMatrix(int n) {
	vector<vector <int>> result(n, vector<int>(n, 0));
	int up_border = 0;
	int low_border = n - 1;
	int left_border = 0;
	int right_border = n - 1;
	int j = 0;
	int k = 0;
	int direction = 0;

	for (int i = 1; i < n * n + 1; i++)
	{
		result[j][k] = i;
		switch (direction)
		{
		case 0:
			if (k < right_border)
			{
				k++;
			}
			else {
				j++;
				up_border++;
				direction = 1;
			}
			break;


		case 1:
			if (j < low_border)
			{
				j++;
			}
			else {
				k--;
				right_border--;
				direction = 2;
			}
			break;

		case 2:
			if (k > left_border)
			{
				k--;

			}
			else {
				j--;
				low_border--;
				direction = 3;
			}
			break;

		case 3:
			if (j > up_border)
			{
				j--;
			}
			else {
				k++;
				left_border++;
				direction = 0;
			}
			break;


		default:
			break;

		}
	}
	return result;
};
