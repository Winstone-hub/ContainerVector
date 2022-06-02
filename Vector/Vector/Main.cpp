// ** Vector v0.6
#include <iostream>

using namespace std;



// ** 1. 데이터 추가 (새로운 공간 확보)
// ** 2. 데이터 삭제
// ** 3. 데이터를 삽입 할 수 있는 공간의 크기
// ** 4. 현재 삽입되어있는 원소의 개수
// ** 5. 컨테이너의 시작 지점
// ** 6. 컨테이너의 종료 지점



// 0 0000000 = 0
// 0 0000001 = 1
// 0 0000010 = 2
// 0 0000011 = 3
// 0 0000100 = 4
// 0 0000101 = 5
// 0 0000110 = 6
// 0 0000111 = 7
// 0 0001000 = 8
// 0 0001001 = 9
// 0 0001010 = 10
// 0 0001011 = 11
// 0 0001100 = 12
// 0 0001101 = 13
// 0 0001110 = 14
// 0 0001111 = 15
// 0 0010000 = 16
// .
// .
// .
// .
// .
// .
// 
// 0 1111111 = 127
// 1 0000000




//   00010000 = 16
// - 00000110 = 6
//---------------
// (16 - 6 == 16 + (-6))

// ** 2의 보수 시작
// 0 0 0 0 0 1 1 0 = 6
// 1 1 1 1 1 1 1 1 
//-------------------
// 1 1 1 1 1 0 0 1
// 11111001 + 1
//-----------------
// 11111010 = -6
// 
//   00010000 = 16
// + 11111010 = -6
//-----------------
//   00001010
//   00001010 = 10


int main(void)
{
	/*
	// ** 양수 표현의 최대값에서 +1을 더하면 어떤값이 나올까?

	char n = 127;
	n += 1;
	printf_s("%d", n);
	*/



	/*
	// ** +연산과 -연산중 무엇이 더 효율적일까?
	char n = 16;

	n -= 6;
	//n += -6;

	printf_s("%d", n);
	*/



	/*
	// ** 나누기를 해야 할 때에는 * 기로 대체할 수 있을지 확인해보고
	int n = 1920 / 2;
	// int n = 1920 * 0.5f;

	printf_s("%d", n);

	// ** 아래와 같이 쉬프트 연산자로 사용할수 있을지 확인해보자.
	//printf_s("%d", n >> 1);
	*/


	/*
	//const int MAX = 16;
	int Vector[16];

	int length = 10;
	
	for (int i = 0; i < length; ++i)
		cout << Vector[i] << endl;
	*/


	/*
	// ** 배열은 0이 아닌 값으로만 초기화가 가능하다.
	// ** 배열은 상수값으로만 초기화가 가능하다.

	// ** 아래와 같이 사용한다면 위 조건은 무시할 수 있다.

	int Size = 0;
	int iter = 0;
	int* Vector = new int[Size];

	Vector[iter];
	*/



	// ** 배열은 아니지만 배열 처럼 사용할 수 있다.
	int Size = 10;
	int iter = 0;
	int* Vector = new int[Size];

	for (int i = 0; i < Size; ++i)
		Vector[i] = i;

	for (int i = 0; i < 11; ++i)
		cout << Vector[iter++] << endl;

	return 0;
}
