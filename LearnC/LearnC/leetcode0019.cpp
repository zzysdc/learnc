#include "leetcode_solutions.h"

ListNode* leetcode0019_solution::removeNthFromEnd(ListNode* head, int n) {
	ListNode* dummy_head = new ListNode(0);
	dummy_head -> next = head;
	ListNode* cur = dummy_head;
	int cnt = -1;
	ListNode* cur_n_fore = dummy_head;
	while (cur != NULL) 
	{
		cnt++;
		cur = cur->next;
		if (cnt >= n + 1)
		{
			cur_n_fore = cur_n_fore->next;
		}
	}
	ListNode* tmp = cur_n_fore->next;
	cur_n_fore->next = cur_n_fore->next->next;
	delete tmp;
	 
	head = dummy_head->next;
	return head;


}