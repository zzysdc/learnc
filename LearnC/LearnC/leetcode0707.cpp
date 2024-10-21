#include "leetcode_solutions.h"


int MyLinkedList::get(int index) {
	int result = -1;
	myListNode* cur_node = _dummy_head;
	if (index < 0 || index >= _size)
	{
		result = -1;
	}
	else {
		for (int i = -1; i < index; i++)
		{
			cur_node = cur_node->next;
		}
		result = cur_node->val;
	}
	return result;
}

void MyLinkedList::addAtHead(int x) {

	myListNode* new_head = new myListNode(x);
	new_head->next = _dummy_head->next;
	_dummy_head->next = new_head;
	_size++;
}

void MyLinkedList::addAtTail(int x) {
	myListNode* cur_node = _dummy_head;
	myListNode* new_end = new myListNode(x);
	for (int i = -1; i < _size - 1; i++)
	{
		cur_node = cur_node->next;
	}
	cur_node->next = new_end;
	_size++;
}

void MyLinkedList::addAtIndex(int index, int x) {
	myListNode* cur_node = _dummy_head;
	myListNode* new_node = new myListNode(x);
	if (index == _size)
	{
		for (int i = -1; i < _size - 1; i++)
		{
			cur_node = cur_node->next;
		}
		cur_node->next = new_node;
		_size++;
	}
	else if(index < _size){
		for (int i = -1; i < index; i++)
		{
			cur_node = cur_node->next;
		}
		new_node->val = cur_node->val;
		new_node->next = cur_node->next;
		cur_node->val = x;
		cur_node->next = new_node;
		_size++;
	}
	else {
		;
	}
}
void MyLinkedList::deleteAtIndex(int index) 
{
	myListNode* cur_node = _dummy_head;
	if (index >=0 && index < _size)
	{
		for (int i = - 1; i < index - 1; i++)
		{
			cur_node = cur_node->next;
		}
		myListNode *tmp = cur_node->next;
		cur_node->next = cur_node->next->next;
		_size--;
		delete tmp;
		tmp = NULL;
		
	}
}