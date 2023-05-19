#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int Nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "masukkan NIM:";
	cin >> Nim;
	cout << "masukkan Nama:";
	cin >> nama;
	nodeBaru->noMhs = Nim;
	nodeBaru->name + nama;

	if (START == NULL || Nim <= START->noMhs) {
		if (START != NULL && Nim == START->noMhs)
		{
			cout << "Nim sudah ada" << endl;
			return;
		}

		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}

	Node* previous = START;
	Node* current = START;

	while ((current != NULL) && (Nim >= current->noMhs))
	{
		if (Nim == current->noMhs)
		{
			cout << "Nim sudah ada" << endl;
			return;
		}
		previous = current;
		current = current->next;
	}

	nodeBaru->next = current;
	previous = current->next;
}
