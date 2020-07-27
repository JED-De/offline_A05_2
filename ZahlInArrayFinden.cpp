#include <iostream>
using namespace std;

int main()
{
	unsigned int eingabe_array[6];
	int suchzahl;
	bool fund = false;
	//unsigned int pos =0 ;
	for (int i = 0; i < 6; i++)
	{
		int eingabe;
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe < 1 || eingabe > 6);
		eingabe_array[i] = eingabe;
	}

	cout << "Bitte geben Sie die Suchzahl ein: ? ";
	cin >> suchzahl;

	for (int i = 0; i < 6; i++)
	{
		if (eingabe_array[i] == suchzahl)
		{
			fund = true;
			//pos = i + 1;

			break;
		}
	}

	if (fund == true)
	{
		//cout << "Die Suchzahl kam unter den Eingaben an Position " << pos << " vor." << endl; //wieder bereichtigt
		cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
	}

	else
	{
		cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;
	}

	system("PAUSE");
	return 0;
}