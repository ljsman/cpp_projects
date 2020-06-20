#pragma once
//#ifndef LINKED_LIST_H
//#define LINKED_LIST_H
#include "linked_list_fwd.h"

template <class T>
struct Node
{
	Node<T>* next_node;
	T data;
public:
	Node(Node<T>* ptr, T data);
	Node();
};

template <class T>
inline Node<T> operator++ (Node<T>&, int);

template <class T>
class linked_list
{
	Node<T>* head;
public:
	void set_head(Node<T>*);
};

//#endif // !LINKED_LIST_H
