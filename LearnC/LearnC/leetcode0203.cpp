#include "leetcode_solutions.h"
ListNode* leetcode0203_solution::removeElements(ListNode* head, int val) {
	while (head != NULL && head->val == val) {
		ListNode* tmp = head;
		head = head->next;
		delete tmp;
	}

	ListNode* cur = head;
	while (cur != NULL && cur->next != NULL) {
		if (cur->next->val == val)
		{
			ListNode* tmp = cur->next;
			cur->next = cur->next->next;
			delete tmp;
		}
		else {
			cur = cur->next;
		}	
	}
	return head;
}
