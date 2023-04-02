#include <iostream>
#include "Matrix.h"

Matrix::Matrix(int row, int col) {
	matrix = new int* [row];
	mrow = row;
	mcol = col;
	for (int i = 0; i < mrow; i++) {
		matrix[i] = new int[mcol]{};
	}
}
Matrix::~Matrix() {
	for (int i = 0; i < mrow; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}
void Matrix::print() {
	for (int i = 0; i < mrow; i++) {
		for (int j = 0; j < mcol; j++) {
			std::cout << matrix[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}