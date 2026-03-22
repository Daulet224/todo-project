#include<iostream>
#include<string>
using namespace std;

int main() {
	std::string ex[10];
	int id;
	int a;
	bool akame = true;

	cout << "============task============= \n";
	for (int i = 0; i < 10; i++) {
		if (ex[i] == "") {
			ex[i] = "no task";
		}
		cout << i + 1 << "\t" << ex[i] << endl;
	}
		while (akame) {
			cout << "\n1 - добавить\n2 - удалить\n3 - отметить готовым\n4 - выход\n";
			cout << "введите номер: ";
			cin >> a; cout << endl;
			if (a > 4 or a < 1) {
				cout << "error" << endl;
				cout << "\n1 - добавить\n2 - удалить\n3 - отметить готовым\n4 - выход\n";
				cout << "введите номер: ";
				cin >> a; cout << endl;
			}
			if (a == 1) {
					cout << "id: "; cin >> id;
					if (id >= 1 and id <= 10) {
						cout << "\n new ex: ";
						cin >> ex[id - 1];
						cout << endl;
					}
			}
			if (a == 2) {
					cout << "id: "; cin >> id; cout << endl;
					if (id >= 1 and id <= 10) {
						ex[id - 1] = "no task";
					}
			}
			if (a == 3) {
					cout << "id: "; cin >> id; cout << endl;
					if (id >= 1 and id <= 10) {
						ex[id - 1] += " (done)";
					}
			}
			if (a == 4) {
				break;
			}
			for (int i = 0; i < 10; i++) {
				cout << i + 1 <<"\t"<< ex[i] << endl << "================================" << endl;
			}
		}
}