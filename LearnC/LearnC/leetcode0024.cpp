#include "leetcode_solutions.h"

ListNode* leetcode0024_solution::swapPairs(ListNode* head) {
	ListNode* cur = head;	
	ListNode* tmp = 0;
	ListNode* dummy_head = new ListNode(0);
	dummy_head->next = head;
	ListNode* cur_fore = dummy_head;
	while (cur != NULL && cur->next != NULL) {
		tmp = cur->next->next;
		cur_fore->next = cur->next;
		cur_fore->next->next = cur;
		cur->next = tmp;
		cur_fore = cur;
		cur = tmp;
	
	}
	head = dummy_head->next;
	delete dummy_head;
	dummy_head = NULL;
	return head;

}