//** STL_Vector v0.2
#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
	int MAX = 50;

	vector<int> vecNumbers;


	// ** �Է�
	for (int i = 0; i < 10; ++i)
	{
		vecNumbers.push_back(10 * i);

		//cout << "capacity : " << vecNumbers.capacity() << endl;
		//cout << "size : " << vecNumbers.size() << endl << endl;
	}






	/*
	// ** ���� �տ� �ִ� [���Ҹ� ��ȯ]
	vecNumbers.front();

	// ** ���� �ڿ� �ִ� [���Ҹ� ��ȯ]
	vecNumbers.back();

	// ** �������� ����Ű�� [�ݺ���]
	vecNumbers.begin();

	// ** ���� ������ ����Ű�� [�ݺ���]
	vecNumbers.end();
	*/




	/*
	for (int i = 0; i < vecNumbers.size(); ++i)
		cout << vecNumbers[i] << endl;

	for (vector<int>::iterator iter = vecNumbers.begin();
		iter != vecNumbers.end(); ++iter)
		cout << (*iter) << endl;

	for (auto iter = vecNumbers.begin(); 
		iter != vecNumbers.end(); ++iter)
		cout << (*iter) << endl;
	*/






	/*
	int Array[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

	int* iterator = Array;

	for (int i = 0; i < 16; ++i)
		cout << Array[i] << endl;

	for (int i = 0; i < 16; ++i)
		//cout << *(iterator + i) << endl;
		cout << *(iterator++) << endl;
	*/






	/*
	for (auto iter = vecNumbers.begin(); iter != vecNumbers.end(); )
	{
		if ((*iter) > MAX)
			iter = vecNumbers.erase(iter);
		else
			++iter;
	}

	for (auto iter = vecNumbers.begin(); iter != vecNumbers.end(); ++iter)
	{
		cout << (*iter) << endl;
	}
	*/


	return 0;
}

