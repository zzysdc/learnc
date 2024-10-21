#pragma once
#include <vector>
#include <iostream>

using namespace std;

typedef struct _ListNode {
	int val;
	_ListNode* next;
	_ListNode() : val(0), next(nullptr) {}
	_ListNode(int x) : val(x), next(nullptr) {}
	_ListNode(int x, _ListNode* next) : val(x), next(next) {}
}ListNode;




void print1DVector(vector<int>& vec);
void print2DVector(vector<vector<int>>& vec);
template<typename T>
void printSingleList(T head) {
	while (head != NULL) {
		std::cout << head->val << " ";
		head = head->next;
	}
	std::cout << std::endl;
};