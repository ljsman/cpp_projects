#pragma once
#include "linked_list_interface.h"
//all linked list inline definitions goes here

template <class T>
Node<T> operator++ (Node<T>& node, int)
{
	auto tmp{ node };
	node = *node.next_node;
	return tmp;
}

//template Node<std::string> operator++(Node<std::string>&, int);

