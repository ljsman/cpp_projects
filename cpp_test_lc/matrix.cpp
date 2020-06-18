#include "matrix.h"
using namespace std;
void matrix::printMatrix(vector<vector<int>>& matrix)
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

void matrix::rotate(vector<vector<int>>& matrix)
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