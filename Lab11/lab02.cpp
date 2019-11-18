/*

(�ǽ� 2) �Ʒ� �ڵ��� ������ ���� ������ �˾ƺ��� ��� ���� �Ʒ��� ������ �ڵ带 ������ ������.
(�����)
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
	//�����Ϸ��� � �� �����ؼ� ���������� ���
	//<int>�� �ص�������, double�� �ؾ��� �ùٸ� ���� ���´�, �� ū �ڷ����� �־��ִ°� �´�
	return 0;
}
