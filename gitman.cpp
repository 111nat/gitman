#include <iostream>
#include <string>
#include <fstream>
using namespace std;



bool FileIsExist(string& filePath)
{
	string cpp = ".cpp";

	filePath += cpp; //�������� ���� �� ����.cpp

	bool isExist = false;
	ifstream fin(filePath);

	if (fin.is_open()) {
		isExist = true;
	}

	fin.close();
	return isExist;
}

int main()
{
	setlocale(LC_ALL, "ru");
	string filepath;
	
	cout << "������� �������� �����, ������������ � ��� �� �����, ��� � .exe. ���� ���������� .cpp" << endl;
	cin >> filepath;
	if (FileIsExist(filepath)) {
		cout << "����� ���� ����������" << endl;
		string g = "git add ";
		g += filepath;
		char help[100];
		
		int i = 0;
		while (1) {
			if (g[i] == '\0') {
				help[i] = g[i];
				i = 0;
				break;
			}
			help[i] = g[i];
			i++;
		}
		
		system(help);
		g = "git commit -m  ";
		cout << "������� commit" << endl;
		string commit;
		cin >> commit;
		
		g += commit;
		
		while (1) {
			if (g[i] == '\0') {
				help[i] = '"';
				help[i+1] = g[i];
				i = 0;
				break;
			}
			if (i == 14) {
				help[i] = '"';
				i++;
				continue;
			}
			help[i] = g[i];
			i++;
		}
		
		system(help);
		g = "git push";
		while (1) {
			if (g[i] == '\0') {
				help[i] = g[i];
				i = 0;
				break;
			}
			help[i] = g[i];
			i++;
		}
		system(help);
		return 0;
	}
	else {
		cout << "����� ���� �� ����������" << endl;
		system("pause");
		return 0;
	}

	
	

	
	system("pause");
	return 0;
}