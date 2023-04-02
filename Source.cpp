#include <iostream>
#include "Matrix.h"
using namespace std;

class Student {
	string name;
	int mark;
public:
	void setMark(int mark) {
		if (mark < 1 || mark > 12) {
			cout << "\nMisstake\n";
			this->mark = '1';
			return;
		}
		this -> mark = mark;
	}
	int getMark() {
		return mark;
	}
	void setName(string name) {
		if (name.size() < 5) {
			cout << "\nSmall name\n";
			this->name = "\nNoName\n";
			return;
		}
		this->name = name;
	}
	string getName() {
		return name;
	}
	Student(int smark, string sname) {
		setMark(smark);
		setName(sname);
	};
	Student() : Student{ 0,"NoName" } {}
	Student(int smark) : Student{ smark,"NoName" } {}
	Student(string sname) : Student{ 0,sname } {}
	~Student(){}

};

int main() {
	string name;
	cout << "Set name more 4 chars: ";
	cin >> name;
	int mark;
	cout << "Set mark: ";
	cin >> mark;
	Student a{ 5, "Charlie" };
	cout << a.getMark() << ' ' << a.getName() << '\n';
	Student b{};
	cout << b.getMark() << ' ' << b.getName() << '\n';
}