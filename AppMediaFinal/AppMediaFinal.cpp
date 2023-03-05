#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	cout << "Calcule sua média e verifique se foi aprovado ou reprovado" << endl;
	cout << "================" << endl;
	string nome = "";
	int P1, P2;
	float media;
	string statusAprovado = "Aprovado! :)";
	string statusReprovado = "Reprovado! :(";

	cout << "Digite seu nome: ";
	cin >> nome;

	cout << "Digite a nota da P1: ";
	cin >> P1;

	while (P1 > 10 || P1 < 0) {
		cout << "Nota inválida. Digite a nota da P1 novamente: ";
		cin >> P1;
	}

	cout << "Digite a nota da P2: ";
	cin >> P2;

	while (P2 > 10 || P1 < 0 ) {
		cout << "Nota inválida. Digite a nota da P2 novamente: ";
		cin >> P2;
	}

	media = (P1 + P2) / 2.0;

	cout << "Sua media final é: ";
	cout << media;
	cout << "\n";
	if (media >= 6) {

		cout << "Você foi " << statusAprovado << endl;
	}
	else {
		cout << "Você foi " << statusReprovado << endl;
	}

	return 0;

	cout << "Qualquer tecla para sair...";
	system("pause");


}