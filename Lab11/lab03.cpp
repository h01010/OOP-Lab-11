// (�ǽ�3)�Ʒ� �ڵ��� ���� ����� �м��Ͻÿ�(count �� ��ȭ ������ ������ ������ ������).

#include <iostream>
using namespace std;

template <typename T>
void fun(const T&x)
{
	static int count = 0;
	//static�� ������ �������� ������ �����̱⿡ �ϳ��� �����ȴ�
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
	//������ double�� ȣ���ϸ� ���ο� template ��ü�� ��������鼭 static �� ����
	cout << endl;
	return 0;
}
