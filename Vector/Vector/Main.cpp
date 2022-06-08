// ** Vector v0.10
#include <iostream>

using namespace std;

// ** 현재 원소의 개수
int Size = 0;

// ** 최대 수용 개수
int Capacity = 0;

// ** 컨테이너
int* Vector = nullptr;





// ** 컨테이너의 마지막 위치에 값을 추가.
void push_back(const int& _Value);

// ** 컨테이너의 마지막 위치에 있는 값을 삭제.
void pop_back();

// ** 가장 앞쪽에 있는 원소.
int front();

// ** 가장 뒷쪽에 있는 원소.
int back();

// ** _where 의 위치에 데이터 삭제.
void erase(const int& _where);

// ** _where 의 위치에 _Value 추가.
void insert(const int& _where, const int& _Value);



int main(void)
{
	// ** 값 추가.
	//for (int i = 0; i < 10; ++i)
		//push_back(i * 1 + 1);

	int i = 1;
	push_back(i);



	insert(5, 10);



	// ** 출력
	for (int i = 0 ; i < Size; ++i)
		cout << "Value : " << Vector[i] << endl;

	cout << "Size : " << Size << endl;
	cout << "Capacity : " << Capacity << endl << endl;

	return 0;
}


void push_back(const int& _Value)
{
	// ** 만약 더이상 수용할 수 있는 공간이 없다면...
	if (Capacity <= Size)
	{
		// ** 현재 수용량이 4보다 작다면 1씩 증가하고 
		// ** 현재 수용량이 4보다 크가나 같다면 1/2 만큼 추가함.
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// ** 임시의 저장소를 생성
		int* Temp = new int[Capacity + 1];

		// ** 생성된 공간을 초기화 함.
		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;
		
		// ** 기존에 있던 값을 복사.
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		// ** 기존에 값을 삭제.
		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		// ** 임시의 값(해당 주소)를 복사해옴.
		Temp[Size] = _Value;

		// ** 임시의 주소값에 복사해둔 값과
		// ** 추가된 새로운 값을 다시 
		// ** 전역변수로 저장되어 있는 Vector 로 가져옴.
		Vector = Temp;
	}
	else
		// ** 마짐가 위치에 값 추가.
		Vector[Size] = _Value;

	// ** 현재 원소의 최대값 증가.
	++Size;
}

void pop_back()
{
	// ** 현재 원소의 최대값 감소.
	--Size;
}

int front()
{
	// ** 0번째 원소 반환
	return Vector[0];
}

int back()
{
	// ** 마지막 원소 반환
	return Vector[Size - 1];
}

void erase(const int& _where)
{
	// ** 현재 원소의 최대값 감소.
	--Size;

	// ** 재정렬
	for (int i = _where + (-1); i < Size; ++i)
		Vector[i] = Vector[i + 1];
}

void insert(const int& _where, const int& _Value)
{
	if (Capacity <= Size)
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

	// ** 임시 저장소
	int* Temp = new int[Capacity + 1];

	// ** 초기화
	for (int i = 0; i <= Capacity; ++i)
		Temp[i] = NULL;

	// ** 해당 위치 이전의 값을 복사.
	for (int i = 0; i < _where; ++i)
		Temp[i] = Vector[i];

	// ** 해당 위치에 값 삽입.
	Temp[_where] = _Value;
	++Size;

	// ** 해당 위치 이후의 값을 복사.
	for (int i = _where + 1; i < Size; ++i)
		Temp[i] = Vector[i - 1];

	if (Vector)
	{
		delete Vector;
		Vector = nullptr;
	}

	Vector = Temp;
}
