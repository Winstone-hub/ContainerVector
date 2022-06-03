// ** Vector v0.7
#include <iostream>

using namespace std;



// ** 원소의 개수
int Size = 0;

// ** 컨테이너
int* Vector = nullptr;


void push_back(const int* _Vector, const int& _Value);


int main(void)
{
	push_back(Vector, 100);
	push_back(Vector, 200);

	for (int i = 0; i < Size; ++i)
		cout << Vector[i] << endl;

	return 0;
}

void push_back(const int* _Vector, const int& _Value)
{
	++Size;
	Vector = new int[Size];

	Vector[Size - 1] = _Value;
}