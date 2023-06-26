//Урок 22 Оператор перехода goto

#include<iostream>
using namespace std;

int main() {
	cout << "One" << endl;

	goto link;

	cout << "Two" << endl;

	cout << "Tree" << endl;

	link: 

	cout << "Four" << endl;

	cout << "Five" << endl;

}