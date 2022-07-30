/*#include <iostream>

int main() { //new와 delete의 사용
	int* p = new int; //new로 int 공간을 마련하고 p에 대입
	*p = 10; //p에 10을 대입

	std::cout << *p << std::endl;  //출력후

	delete p; //마련한 p의 공간을 풀어준다.
	return 0;
}*/

#include <iostream>

int main() {
	int arr_size;
	std::cout << "array_size : ";
	std::cin >> arr_size;
	int* list = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
		std::cin >> list[i];
	}
	for (int i = 1; i < arr_size; i++) {
		std::cout << i << "th element of list : " << list[i] << std::endl;
	}
	delete[] list;
	return 0;
}