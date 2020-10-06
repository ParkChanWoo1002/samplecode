#include <iostream> //20173504박찬우
using namespace std;

int generateID()
{
	int a = 0;
	return ++a;
}

int main()
{
	cout << "s_id(1)" << generateID() << endl;
	cout << "s_id(2)" << generateID() << endl;
	cout << "s_id(3)" << generateID() << endl;
	return 0;
}
// main함수에서 generateID()함수를 호출하게되고 s_id라는 변수를 선언 0으로 초기화하고  s_id값을 증감하고 반환해줘서
//1을 출력하게된다. s_id는 지역변수 이기때문에 벗어나면 값과 할당된 메모리를 삭제하기때문에 s_id라는 변수는 없어진다.
// 그리고나서 generateID()로 다시 호출하는데 앞에 선언했던 s_id라는 변수는 사라졌기때문에 새로운 s_id라는 변수를
//선언하고 증감함으로써 또 1을 출력하게된다.