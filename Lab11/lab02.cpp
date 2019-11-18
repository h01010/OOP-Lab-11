/*

(실습 2) 아래 코드의 컴파일 에러 원인을 알아보고 결과 값이 아래와 같도록 코드를 수정해 보세요.
(결과값)
min(x, y) : 2, min(d, e) : 2.1, min(d, x) : 2.1

*/

#include <iostream>

template<typename T>
T min(T x, T y) {
	return x < y ? x : y;
}

int main() {
	int x = 3;
	int y = 2;
	double d = 2.1;
	double e = 3.3;
	std::cout << "min(x,y): " << min(x, y) << ", min(d,e): " << min(d, e) << ", min(d, x): " << min<double>(d, x) << std::endl;
	//컴파일러가 어떤 걸 선택해서 컴파일할지 고민
	//<int>로 해도되지만, double로 해야지 올바른 답이 나온다, 더 큰 자료형을 넣어주는게 맞다
	return 0;
}
