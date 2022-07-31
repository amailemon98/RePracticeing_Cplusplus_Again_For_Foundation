/*#include <iostream>

int main() { //new�� delete�� ���
	int* p = new int; //new�� int ������ �����ϰ� p�� ����
	*p = 10; //p�� 10�� ����

	std::cout << *p << std::endl;  //�����

	delete p; //������ p�� ������ Ǯ���ش�.
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

//���ƿ� ������
#include <iostream>
using std::cout;
using std::cin;

typedef struct Animal {
	char name[30]; //�̸�
	int age;  //����
	int health;  //ü��
	int food;  //����
	int clean;  //û�ᵵ
} Animal;

void create_animal(Animal *animal) {
	cout << "������ �̸�? ";
	cin >> animal->name;

	cout << "������ ����? ";
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
	cout << animal->name << "�� ����" << '\n';
	cout << "ü��: " << animal->health << '\n';
	cout << "�����: " << animal->food << '\n';
	cout << "û�ᵵ: " << animal->clean << '\n';
}

int main() {
	Animal* list[10];
	int animal_num = 0;

	for (;;) {
		cout << "1. ���� �߰��ϱ�" << '\n';
		cout << "2. ���" << '\n';
		cout << "3. ���º���" << '\n';

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
			cout << "������ ��°�?: ";
			cin >> play_with;

			if (play_with < animal_num) play(list[play_with]);

			break;

		case 3:
			cout << "������ ���� ���ϱ�? ";
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