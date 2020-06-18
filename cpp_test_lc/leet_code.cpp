#include "leet_code.h"
#include <iostream>
#include <vector>
#include <array>
#include "matrix.h"
#include "linked_list.h"
#include <string>
using namespace std;

void leet_code::linked_list_stuff()
{
	Node<string> first, second, third, forth, fifth;
	first = { &second, "Jinshi" };
	second = { &third, "Li" };
	third = { &forth, "DePaul" };
	forth = { nullptr, "University" };
	//first++;
	//ll.print_list(&first);
	//ll.set_head(&first);
	//linked_list<string>::reverse(&first);
}

void leet_code::vector_stuff()
{
	
	//vector<vector<int>> matrix
	//{
	//	{1, 2, 3},
	//	{4, 5, 6},
	//	{7, 8, 9}
	//};
	matrix mtx;
	vector<vector<int>> matrix
	{
		{1,  2,  3,  4,   5},
		{6,  7,  8,  9,  10},
		{11, 12, 13, 14, 15},
		{15, 16, 17, 18, 19},
		{20, 21, 22, 23, 24}
	};

	mtx.printMatrix(matrix);
	mtx.rotate(matrix);
	mtx.printMatrix(matrix);
}