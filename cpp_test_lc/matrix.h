#pragma once
#include <vector>
#include <iostream>

class matrix
{
public:
	matrix() = default;

	void printMatrix(std::vector<std::vector<int>>&);
	void rotate(std::vector<std::vector<int>>&);
};

