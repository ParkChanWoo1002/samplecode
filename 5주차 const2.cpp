#include <iostream>
using namespace std;

class Something
{
public:
	int m_value;
	Something() :m_value(0) {}
	void setValue(int value) { m_value = value; }

	void resetValue() { m_value = 0; }
	int getValue()const { return m_value; }
	void printvalue() const { cout << "value:" << getValue() <<endl; } // const함수는 const멤버 함수만 호출이 가능하다.
};

int main(int argc, char const* argv[])
{
	Something first;
	first.setValue(3);
	cout << first.getValue() << endl;
	first.resetValue();
	first.printvalue();
	return 0;
}