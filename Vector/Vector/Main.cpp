// ** Vector v0.10
#include <iostream>

using namespace std;

// ** ���� ������ ����
int Size = 0;

// ** �ִ� ���� ����
int Capacity = 0;

// ** �����̳�
int* Vector = nullptr;





// ** �����̳��� ������ ��ġ�� ���� �߰�.
void push_back(const int& _Value);

// ** �����̳��� ������ ��ġ�� �ִ� ���� ����.
void pop_back();

// ** ���� ���ʿ� �ִ� ����.
int front();

// ** ���� ���ʿ� �ִ� ����.
int back();

// ** _where �� ��ġ�� ������ ����.
void erase(const int& _where);

// ** _where �� ��ġ�� _Value �߰�.
void insert(const int& _where, const int& _Value);



int main(void)
{
	// ** �� �߰�.
	//for (int i = 0; i < 10; ++i)
		//push_back(i * 1 + 1);

	int i = 1;
	push_back(i);



	insert(5, 10);



	// ** ���
	for (int i = 0 ; i < Size; ++i)
		cout << "Value : " << Vector[i] << endl;

	cout << "Size : " << Size << endl;
	cout << "Capacity : " << Capacity << endl << endl;

	return 0;
}


void push_back(const int& _Value)
{
	// ** ���� ���̻� ������ �� �ִ� ������ ���ٸ�...
	if (Capacity <= Size)
	{
		// ** ���� ���뷮�� 4���� �۴ٸ� 1�� �����ϰ� 
		// ** ���� ���뷮�� 4���� ũ���� ���ٸ� 1/2 ��ŭ �߰���.
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// ** �ӽ��� ����Ҹ� ����
		int* Temp = new int[Capacity + 1];

		// ** ������ ������ �ʱ�ȭ ��.
		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;
		
		// ** ������ �ִ� ���� ����.
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		// ** ������ ���� ����.
		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		// ** �ӽ��� ��(�ش� �ּ�)�� �����ؿ�.
		Temp[Size] = _Value;

		// ** �ӽ��� �ּҰ��� �����ص� ����
		// ** �߰��� ���ο� ���� �ٽ� 
		// ** ���������� ����Ǿ� �ִ� Vector �� ������.
		Vector = Temp;
	}
	else
		// ** ������ ��ġ�� �� �߰�.
		Vector[Size] = _Value;

	// ** ���� ������ �ִ밪 ����.
	++Size;
}

void pop_back()
{
	// ** ���� ������ �ִ밪 ����.
	--Size;
}

int front()
{
	// ** 0��° ���� ��ȯ
	return Vector[0];
}

int back()
{
	// ** ������ ���� ��ȯ
	return Vector[Size - 1];
}

void erase(const int& _where)
{
	// ** ���� ������ �ִ밪 ����.
	--Size;

	// ** ������
	for (int i = _where + (-1); i < Size; ++i)
		Vector[i] = Vector[i + 1];
}

void insert(const int& _where, const int& _Value)
{
	if (Capacity <= Size)
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

	// ** �ӽ� �����
	int* Temp = new int[Capacity + 1];

	// ** �ʱ�ȭ
	for (int i = 0; i <= Capacity; ++i)
		Temp[i] = NULL;

	// ** �ش� ��ġ ������ ���� ����.
	for (int i = 0; i < _where; ++i)
		Temp[i] = Vector[i];

	// ** �ش� ��ġ�� �� ����.
	Temp[_where] = _Value;
	++Size;

	// ** �ش� ��ġ ������ ���� ����.
	for (int i = _where + 1; i < Size; ++i)
		Temp[i] = Vector[i - 1];

	if (Vector)
	{
		delete Vector;
		Vector = nullptr;
	}

	Vector = Temp;
}
