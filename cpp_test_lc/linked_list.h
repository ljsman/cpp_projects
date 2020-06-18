#pragma once
//#ifndef LINKED_LIST_H
//#define LINKED_LIST_H

template <class T>
struct Node
{
	Node<T>* next_node;
	T data;
public:
	Node(Node<T>* ptr, T data) : next_node{ ptr }, data{ data }
	{};
	Node() : next_node{}, data{}{};
};

template <class T>
Node<T> operator++ (Node<T>&, int);


template <class T>
class linked_list
{
	//Node<T>* head;
public:
	static void reverse(Node<T>*);
	void print_list(Node<T>*);
	void set_head(Node<T>*);
};

//#endif // !LINKED_LIST_H
