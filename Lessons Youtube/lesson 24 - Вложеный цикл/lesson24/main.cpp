// Урок 24 что такое вложенный цикл

#include<iostream>

using namespace std;

int main() {
	for (int i = 0; i < 5; i++)
	{
		cout << "Work first cycle 1st ite # " << i << endl; 
		
		for (int j = 0; j < 5; j++)
		{
			cout << "\tWork first cycle 2nd ite # " << j << endl;
		}
	}
}