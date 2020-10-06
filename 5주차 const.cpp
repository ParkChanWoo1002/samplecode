#include <iostream>
using namespace std;

class Something
{
public:
    int m_value;
    Something() :m_value(0) {}
    void setValue(int value) { m_value = value;}

    void resetValue() { m_value = 0;}
  int getValue()const {return m_value;} // const형태로 멤버 함수가 정의되면 멤버 변수나 객체를 수정하지 못하고 함수를 호출할때에도 const 멤버 함수만 호출이 가능하다
};

void printValue(const Something &sData)
{
    cout << "value: " << sData.getValue() << endl; // getValue()함수를 호출하려면 저 멤버함수가 const 멤버 함수이어야함.
}

int main()
{
    Something first;

    first.setValue(3);
    cout << first.getValue() << endl;
    first.resetValue();
    printValue(first);
    return 0;
}