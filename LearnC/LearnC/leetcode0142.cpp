#include "leetcode_solutions.h"


ListNode* leetcode0142_solution::detectCycle(ListNode* head) {
	ListNode* fast_p = head;
	int flag = 1;
	int cnt = 1;
	ListNode* result = NULL;
	while (NULL != fast_p && flag) {
		ListNode* slow_p = head;
		for (size_t i = 0; i < cnt; i++)
		{
			if (slow_p == fast_p->next)
			{
				result = slow_p;
				flag = 0;
				break;
			}
			slow_p = slow_p->next;
		}
		cnt++;
		fast_p = fast_p->next;
	}
	return result;

}






