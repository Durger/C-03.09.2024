// Lesson_1_03.09.2024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std; //включение библиотеки
//std:: -подключение библиотнеки для отдельной строки
void main()
{
	system("chcp 1251"); //Подключение русского языка
	int  num{ 10 }; //Объявление переменной

	for (int i = 0; i < 5; i++) {
		cout << "\tHello";    //  \ -вызов экрана для команды
	}
	if (num == 10) {
		cout << "Hello world!:\n"; // Вывод надписи в консоль  \n -перенос строки
	} 
	else {
		cout << "Привет мир!" << endl; //endl -перенос строки
	}

	cout << "\t\t\t\t Escape Aequence\n";
	cout << "\n"; //Выводит пустую строчку
	cout << "\t\t\b" << "\tBackspace\n";
	cout << "\t\t\\n" << "\tNew Line\n";
	cout << "\n";
	cout << "\t\t\\t" << "\tWorld horizon tab\n";
	cout << "\t\t\\\\" << "\tBackslash\\\n";
	cout << "\n";
	cout << "\t\t\`" << "\t Sing question mark \`\n";
	cout << "\n";





}


