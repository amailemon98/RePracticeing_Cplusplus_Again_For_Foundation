/*#include <iostream>

int main() { //new�� delete�� ���
	int* p = new int; //new�� int ������ �����ϰ� p�� ����
	*p = 10; //p�� 10�� ����

	std::cout << *p << std::endl;  //�����

	delete p; //������ p�� ������ Ǯ���ش�.
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