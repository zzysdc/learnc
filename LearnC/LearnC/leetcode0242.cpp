#include "leetcode_solutions.h"


bool leetcode0242_solution::isAnagram(string s, string t) {
	int character_index[26] = {0};
	bool result = true;
	for (int i = 0; i < s.length(); i++)
	{
		character_index[s[i] - 'a']++;
	}
	for (int i = 0; i < t.length(); i++)
	{
		character_index[t[i] - 'a']--;
	}
	for (size_t i = 0; i < 26; i++)
	{
		if (0 != character_index[i]) {
			result = false;
			break;
		}
	}
	return result;
}