#include "linked_list.h"
#include <iostream>

template <class T>
Node<T> operator++ (Node<T>& node, int)
{
	auto tmp{ node };
	node = *node.next_node;
	return tmp;
}

template <class T>
void linked_list<T>::reverse(Node<T>* head)
{
	if (!head)
	{
		return;
	}

	auto current = head;

	Node<T>* priv{};
	for (;;)
	{
		//no matter which stage we are in we have to do the following operations
		Node<T>* next = current->next_node;
		current->next_node = priv;
		//at the last node
		if (!next)
		{
			head = current;
			return;
		}
		priv = current;
		current = next;
	}
}


void linked_list::print_list(Node* head)
{
	while (head)
	{
		std::cout << head->data << "<-";
		head = head->next_node;
	}
}

template <class T>
void linked_list<T>::set_head(Node<T>* arg_head)
{
	//this->head = arg_head;
}