/*#include <iostream>

int main() { //new와 delete의 사용
	int* p = new int; //new로 int 공간을 마련하고 p에 대입
	*p = 10; //p에 10을 대입

	std::cout << *p << std::endl;  //출력후

	delete p; //마련한 p의 공간을 풀어준다.
	return 0;
}*/
/*
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
}*/

//돌아온 마이펫
#include <iostream>
using std::cout;
using std::cin;

typedef struct Animal {
	char name[30]; //이름
	int age;  //나이
	int health;  //체력
	int food;  //음식
	int clean;  //청결도
} Animal;

void create_animal(Animal *animal) {
	cout << "동물의 이름? ";
	cin >> animal->name;

	cout << "동물의 나이? ";
	cin >> animal->age;

	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}

void play(Animal* animal) {
	animal->health += 10;
	animal->food -= 20;
	animal->clean -= 30;
}

void one_day_pass(Animal* animal) {
	animal->health -= 10;
	animal->food -= 30;
	animal->clean -= 20;
}

void show_stat(Animal* animal) {
	cout << animal->name << "의 상태" << '\n';
	cout << "체력: " << animal->health << '\n';
	cout << "배고픔: " << animal->food << '\n';
	cout << "청결도: " << animal->clean << '\n';
}

int main() {
	Animal* list[10];
	int animal_num = 0;

	for (;;) {
		cout << "1. 동물 추가하기" << '\n';
		cout << "2. 놀기" << '\n';
		cout << "3. 상태보기" << '\n';

		int input;
		cin >> input;

		switch (input) {
			int play_with;
		case 1:
			list[animal_num] = new Animal;
			create_animal(list[animal_num]);
			
			animal_num++;
			break;
		case 2:
			cout << "누구랑 노는가?: ";
			cin >> play_with;

			if (play_with < animal_num) play(list[play_with]);

			break;

		case 3:
			cout << "누구의 것을 봅니까? ";
			cin >> play_with;
			if (play_with < animal_num) show_stat(list[play_with]);
			break;
		}

		for (int i = 0; i != animal_num; i++) {
			one_day_pass(list[i]);
		}

	}
	for (int i = 0; i != animal_num; i++) {
		delete list[i];
	}
}