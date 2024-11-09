#include "leetcode_solutions.h"


ListNode* leetcode0207_solution::getIntersectionNode(ListNode* headA, ListNode* headB) {
	ListNode* result = 0;
	ListNode* cur_a = headA;
	ListNode* cur_b = headB;
	int lens_a = 0;
	int lens_b = 0;
	while(NULL != cur_a)
	{
		cur_a = cur_a->next;
		lens_a++;
	}
	while (NULL != cur_b)
	{
		cur_b = cur_b->next;
		lens_b++;
	}
	cur_a = headA;
	cur_b = headB;
	if (lens_a >= lens_b)
	{
		for (size_t i = 0; i < lens_a - lens_b; i++)
		{
			cur_a = cur_a->next;
		}
		for (size_t i = 0; i < lens_b; i++)
		{
			if (cur_a == cur_b)
			{
				result = cur_a;
				break;
			}
			else 
			{
				cur_a = cur_a->next;
				cur_b = cur_b->next;
			}
		}
	
	}
	else {
		for (size_t i = 0; i < lens_b - lens_a; i++)
		{
			cur_b = cur_b->next;
		}
		for (size_t i = 0; i < lens_a; i++)
		{
			if (cur_a == cur_b)
			{
				result = cur_a;
				break;
			}
			else
			{
				cur_a = cur_a->next;
				cur_b = cur_b->next;
			}
		}
	}
	return result;

}