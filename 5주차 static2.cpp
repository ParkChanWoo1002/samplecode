#include <iostream>
using namespace std;

class Something
{
    static int m_value; //정적 멤버 변수 선언
public:
    Something(); // 생성자 선언
    int result(); // 멤버 함수 선언
};
int Something::m_value = 0; // 멤버 변수 초기화
Something::Something() // 생성자 정의
{
   m_value++; // 생성자가 호출되면 m_value값을 증감시킴
}
int Something::result() // 멤버함수 정의
{
    return m_value; // m_value값을 반환 하는 멤버 함수
}
int main()
{
    cout << "객체의 개수를 알아보는 프로그램" << endl;
    Something year; // 객체를 생성함으로써 생성자가 호출됨
    cout << "현재 객체의 수 : " << year.result() << "개" << endl; // 생성자가 호출되면서 value값이 증감되고 result를 호출하면서 1을 반환
    Something month; // 객체를 생성함으로써 생성자가 다시 호출됨 m_value값은 static 변수이기때문에 값이 남아있어 2로 증감
    cout << "현재 객체의 수 : " << month.result() << "개" << endl; // result를 호출하면서 2를 반환함
    Something day; // 객체를 생성함으로써 생성자가 또다시호출되고 m_value값은 3으로 증감
    cout << "현재 객체의 수 : " << day.result() << "개" << endl; // result를 호출하면서 3을 반환함
    return 0;
}

