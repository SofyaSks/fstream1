#include <iostream>
#include<fstream>
#include <string>
#include <conio.h>
#include "windows.h"
using namespace std;

/*string subfile(string path, int pos) {
	ifstream in;
	in.open(path);
	if (in.is_open()) {

	}
}*/

unsigned int timer = 0;


int main() {
	setlocale(LC_ALL, "ru");

	char sym;
	while (true) {
		if (_kbhit()) {
			sym = _getch(); //_getche() ��� ������� � ������
			//cout << "������: " << sym << endl;
			switch (sym) {
			case 'a': case 'A':system("cls"); cout << "��� �����\n"; break;
			case'd': case 'D':system("cls"); cout << "��� ������\n"; break;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer >= 1000) {
			cout << ".\n";
			timer = 0;
		}
	}


	//string path = "file.txt";
	
	// ������ 1
	
	// ������ 2

	/*ifstream indate;
	indate.open("date.txt");
	int day, month, year;
	if (indate.is_open()) {
		cout << "���� ������ ��� ����������\n";
		string date;
		indate >> date;
		cout << "���������� �����: \n" << date << endl;
		year = stoi(date.substr(date.rfind('.')+ 1));
		//cout << year << endl;
		month = stoi(date.substr(date.find('.') + 1));
		//cout << month << endl;
		day = stoi(date.substr(0, date.find('.')));
		//cout << day;
	}
	else
		cout << "������ �������� �����\n";
	indate.close();

	cout << "����: " << day << endl;
	cout << "�����: " << month << endl;
	cout << "���: " << year << endl;*/



















	/*fstream fs;
	fs.open(path, ios::in | ios:: out | ios::ate);

	string file;

	if (fs.is_open()) {
		cout << "���� ������\n";
		fs.seekg(10, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			file += str + "\n";
		}
		cout << file << endl;
	}
	else
		cout << "������ �������� �����\n";

	/*if (fs.is_open()) {
		cout << "���� ������\n";
		string str;
		cout << "������� ������: \n";
		getline(cin, str);
		fs.seekg(20, ios::beg);
		fs << str << "\n";
		//fs.seekg(0, ios::beg);
		//getline(fs, str);
		//cout << str << "\n";
	}
	else
		cout << "������ �������� �����\n";* /

	fs.close();

	file.insert(1, "\npomogite\n");

	fs.open(path,  ios::out | ios::in );
	if (fs.is_open()) {
		cout << "���� ������\n";
		fs << file << "\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
		cout << "������ �������� �����\n";
	fs.close();*/




	return 0;
}