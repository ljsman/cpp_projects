#pragma once
class cpp_test
{

};
#include <iostream>
#include <regex>
#include <array>
#include <stdlib.h>
#include <forward_list>
using namespace std;

template <class T>
struct Node
{
	//private:
	Node<T>* next_node;
	T data;
public:
	Node(Node<T>* ptr, T data) : next_node{ ptr }, data{ data }
	{};
	Node() : next_node{}, data{}{};
};

template <class T>
Node<T> operator++ (Node<T>& node, int)
{
	auto tmp{ node };
	node = *node.next_node;
	return tmp;
}

void printMatrix(vector<vector<int>>& matrix)
{
	for (auto vect : matrix)
	{
		cout << "{";
		for (auto num = vect.begin(); num < vect.end() - 1; ++num)
		{
			if (*num < 10)
			{
				cout << *num << ",  ";
				continue;
			}
			cout << *num << ", ";
		}
		cout << *(vect.end() - 1);
		cout << "},";
		cout << "\n" << endl;
	}
	cout << "------------" << endl;
}

void rotate(vector<vector<int>>& matrix)
{
	int n = matrix.size();//5
	for (int i = 0; i < (n + 1) / 2; ++i) {//0, 1, 2

		//int counter = 0;
		for (int j = 0; j < n / 2; ++j)//0, 1
		{
			//temp = lower left corner
			int temp = matrix[n - 1 - j][i];

			matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];

			matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 - i];

			matrix[j][n - 1 - i] = matrix[i][j];

			matrix[i][j] = temp;

			//printMatrix(matrix);
		}

	}
}

template <class T>
void reverse(Node<T>* head) noexcept // reverse sequence
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
		cout << head->data << "<-";
		head = head->next_node;
	}
}

void cpp_test_main()
{
	//char buff[100]{};
	//char buffer[14]{"1\n11111"};
	//char buffer0[14]{"[2]"};
	//char buffer1[6]{ "again" };
	//char buffer2[6]{"read"};
	//auto buffAdd = addressof(buffer);
	//FILE* fPtr;
	//fopen_s(&fPtr, "English0.srt", "r+");
	//
	////fread(buff, 1, 34, fPtr);
	//fwrite(buffer, 1, 10, fPtr);
	//fwrite(buffer0, 1, 10, fPtr);
	//
	//fflush(fPtr);
	//fwrite(buffer1, 1, 6, fPtr);
	//fflush(fPtr);
	////rewind(fPtr);
	//fread(buffer2, 1, 6, fPtr);
	//fclose(fPtr);
	//printf("%s", buff);
	/*vector<vector<int>> matrix
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};*/

	/*vector<vector<int>> matrix
	{
		{1,  2,  3,  4,   5},
		{6,  7,  8,  9,  10},
		{11, 12, 13, 14, 15},
		{15, 16, 17, 18, 19},
		{20, 21, 22, 23, 24}
	};

	printMatrix(matrix);
	rotate(matrix);
	printMatrix(matrix);*/

	array<int, 4> arr{ 4,3,2,1 };
	auto iter = arr.begin();
	iter++;


	Node<string> first, second, third, forth, fifth;
	first = { &second, "Jinshi" };
	second = { &third, "Li" };
	third = { &forth, "DePaul" };
	forth = { nullptr, "University" };
	first++;
	reverse(&first);
}


//int n = matrix.size();
//for (int i = 0; i < n / 2; ++i) {
//
//	int counter = 0;
//	for (int j = i; j < n - 1 - i; ++j)
//	{
//		cout << ++counter << "\n";
//
//		int temp = matrix[n - 1 - j][i];
//
//		matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
//
//		matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 - i];
//
//		matrix[j][n - 1 - i] = matrix[i][j];
//
//		matrix[i][j] = temp;
//
//		printMatrix(matrix);
//	}
//
//}

