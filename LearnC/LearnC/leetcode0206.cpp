#include "leetcode_solutions.h"
ListNode* leetcode0206_solution::reverseList(ListNode* head) {
	ListNode* cur = head;
	ListNode* result = NULL;
	ListNode* dummy_head = new ListNode(0);
	ListNode* tmp = 0;
	while (cur != NULL) {
		ListNode* tmp = dummy_head->next;
		dummy_head->next = new ListNode(cur->val);
		dummy_head->next->next = tmp;
		cur = cur->next;

	}
	result = dummy_head->next;
	delete dummy_head;
	dummy_head = NULL;
	return result;

}
