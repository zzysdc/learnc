#pragma once
#include "common.h"

class leetcode0704_solution {
public:
	int search(vector<int>& nums, int target);
};

class leetcode0027_solution {
public:
	int removeElement(vector<int>& nums, int val);
};

class leetcode0977_solution {
public:
	vector<int> sortedSquares(vector<int>& nums);
};

class leetcode0209_solution {
public:
	int minSubArrayLen(int target, vector<int>& nums);
};

class leetcode0059_solution {
public:
	vector<vector<int>> generateMatrix(int n);
};

class leetcode0203_solution {
public:
	ListNode* removeElements(ListNode* head, int val);
};

class MyLinkedList{ //leetcode0707_solution
public:
	struct myListNode 
	{
		int val;
		myListNode* next;
		myListNode(int x) : val(x), next(NULL) {}
	};
	MyLinkedList() {
		_dummy_head = new myListNode(0);
		_size = 0;
	};
	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void deleteAtIndex(int index);
private:
	myListNode* _dummy_head = NULL;
	int _size = 0;
};

class leetcode0206_solution {
public:
	ListNode* reverseList(ListNode* head);
};

class leetcode0024_solution {
public:
	ListNode* swapPairs(ListNode* head);
};

class leetcode0019_solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n);
};

class leetcode0207_solution {
public:
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);
};