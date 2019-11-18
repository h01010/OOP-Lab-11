// (실습3)아래 코드의 실행 결과를 분석하시오(count 값 변화 추이의 이유를 생각해 보세요).

#include <iostream>
using namespace std;

template <typename T>
void fun(const T&x)
{
	static int count = 0;
	//static은 컴파일 과정에서 생성된 변수이기에 하나만 생성된다
	cout << "x = " << x << " count = " << count << endl;
	++count;
	return;
}

int main()
{
	fun<int>(1);
	cout << endl;
	fun<int>(1);
	cout << endl;
	fun<double>(1.1);
	cout << endl;
	fun<double>(2.1);
	//하지만 double로 호출하면 새로운 template 객체가 만들어지면서 static 또 생성
	cout << endl;
	return 0;
}
