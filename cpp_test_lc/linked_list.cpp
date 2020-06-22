#include "linked_list_inline.h"
#include "object_base_interface.h"
#include <iostream>

template <class T>
Node<T>::Node(Node<T>* ptr, T data) : next_node{ ptr }, data{ data }
{};

template <class T>
Node<T>::Node() : next_node{}, data{}{};

template <class T>
void reverse(Node<T>* head)
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

template <class T>
void print_list(Node<T>* head)
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
	this->head = arg_head;
}

template struct Node<std::string>;
template struct Node<int>;
template struct Node <object_base>;