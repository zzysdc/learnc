#include "leetcode_solutions.h"

vector<string>  leetcode1002_solution::commonChars(vector<string>& words) {
	vector<string> _result;
	int _char_record_num[26];
	for (int j = 0; j < 26; j++)
	{
		_char_record_num[j] = 9999999999;
	}
	for (int i = 0; i < words.size(); i++)
	{
		int _char_record[26];
		memset(_char_record, 0, sizeof(_char_record));
		for (size_t j = 0; j < words[i].size(); j++)
		{
			_char_record[words[i][j] - 'a']++;
		}
		for (size_t j = 0; j < 26; j++)
		{
			_char_record_num[j] = min(_char_record_num[j], _char_record[j]);
		}

	}
	for (int i = 0; i < 26; i++)
	{
		for (size_t j = 0; j < _char_record_num[i]; j++)
		{
			string _cur_string(1, 'a' + i);
			_result.push_back(_cur_string);
		}
	}
	string _s;
	return _result;
}