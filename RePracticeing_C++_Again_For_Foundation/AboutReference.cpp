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
//참조자 이해하기
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
//리터럴 배우기
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
	//char* pstr2 = "goodbye";//goodbye는 문자열리터럴로써 text segment의 주소값을 넣을 수 없다.
	//그렇기에 상수인 함수로 구현해야한다.

	std::cout << pstr << '\n';
	//std::cout << pstr2 << '\n';
}
*//*
#include <iostream>

int main() {
	int arr[3] = { 1,2,3 };
	int(&ref)[3] = arr;

	ref[0] = 2;
	ref[1] = 3;
	ref[2] = 1;

	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	return 0;
}*/

#include <iostream>

int function() {
	int a = 2;
	return a;
}
int main() {
	int b = function();
	return 0;
}