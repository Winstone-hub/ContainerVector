//** STL_Vector v0.1
#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
	vector<int> vecNumbers;

	for (int i = 0; i < 10; ++i)
		vecNumbers.push_back(10 * i);

	for (vector<int>::iterator iter = vecNumbers.begin();
		iter != vecNumbers.end(); ++iter)
		cout << (*iter) << endl;





	/*
	int Array[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

	int* iterator = Array;

	for (int i = 0; i < 16; ++i)
		cout << Array[i] << endl;


	for (int i = 0; i < 16; ++i)
		//cout << *(iterator + i) << endl;
		cout << *(iterator++) << endl;
	*/



	return 0;
}

