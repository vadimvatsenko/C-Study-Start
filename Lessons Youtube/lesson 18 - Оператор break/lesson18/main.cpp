//���� 18. �������� ����� break. �������� break
#include <iostream>
using namespace std;

int main()
{
	cout << "Cycle start" << endl;
	for (int i = 0; ; i++)
	{
		cout << "variable i = " << i << endl;
		if (i == 5) {
			break;
		}
	}


}
