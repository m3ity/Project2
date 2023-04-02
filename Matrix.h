#pragma once
class Matrix{
public:
	int** matrix{ nullptr };
	int mrow{};
	int mcol{};
	void print();
	Matrix(int row, int col);
	~Matrix();
};

