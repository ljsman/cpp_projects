#include "leet_code_interface.h"
#include <iostream>
#include <vector>

#include "matrix.h"
#include "linked_list_interface.h"
#include <string>


void leet_code::linked_list_stuff()
{
	Node<std::string> first, second, third, forth, fifth;
	first = { &second, "Jinshi" };
	second = { &third, "Li" };
	third = { &forth, "DePaul" };
	forth = { nullptr, "University" };
	Node<int> first_int;
	first++;
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
	std::vector<std::vector<int>> matrix
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