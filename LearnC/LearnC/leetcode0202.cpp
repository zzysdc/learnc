#include "leetcode_solutions.h"

bool leetcode0202_solution::isHappy(int n) {
	bool _result = 0;
	int _unhappy_set[100] = {0};
	memset(_unhappy_set, 0, sizeof(int));

	_unhappy_set[2] = 1;
	_unhappy_set[4] = 1;
	_unhappy_set[16] = 1;
	_unhappy_set[37] = 1;
	_unhappy_set[54] = 1;
	_unhappy_set[41] = 1;
	_unhappy_set[17] = 1;
	_unhappy_set[50] = 1;
	_unhappy_set[25] = 1;
	_unhappy_set[29] = 1;
	int num_sq[10] = { 0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
	int _flag = 1;

	while (1 != n && _flag)
	{
		int _cur_sum = 0;
		int _cur_n = n;
		while (_cur_n != 0)
		{
			_cur_sum += num_sq[_cur_n % 10];
			_cur_n = _cur_n / 10;
		}
		n = _cur_sum;
		if (n < 100)
		{
			_flag = 1 - _unhappy_set[n];
		}
	}

	if (1 == n)
	{
		_result = true;
	}
	return _result;

} 