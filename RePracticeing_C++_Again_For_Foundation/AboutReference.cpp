/*#include <iostream>

int change_val(int* p) {
	*p = 3;

	return 0;
}

int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
}*/
/*
#include <iostream>

int main() {
	int a = 3;
	int& another_a = a;

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	return 0;
}*//*
#include <iostream>

int change_val(int& p) {
	p = 3;

	return 0;
}
int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_val(number);
	std::cout << number << std::endl;
}*/

/*
//������ �����ϱ�
#include <iostream>

int main() {
	int x;
	int& y = x;
	int& z = y;

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
}*/
//���ͷ� ����
/*
#include <iostream>

int main() {
	char str[] = "hello";

	str[1] = 'a';

	std::cout << str;

	return 0;
}*/
/*
#include <iostream>

int main() {
	const char* pstr = "goodbye";
	//char* pstr2 = "goodbye";//goodbye�� ���ڿ����ͷ��ν� text segment�� �ּҰ��� ���� �� ����.
	//�׷��⿡ ����� �Լ��� �����ؾ��Ѵ�.

	std::cout << pstr << '\n';
	//std::cout << pstr2 << '\n';
}
*/