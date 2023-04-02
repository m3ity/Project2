#include <iostream>
#include "Matrix.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	Matrix m{ 5, 5 };
	m.print();
}