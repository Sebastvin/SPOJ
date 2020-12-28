#include <iostream>
#include <string>
#include <vector>
using namespace std;


void display(vector<string> tab)
{
	for(int i=0; i<tab.size(); i++)
	{
		cout << tab[i] << endl;
	}
}

int main()
{
	int counter;
	cin >> counter;
	vector<string> niedowaga;
	vector<string> prawidlowa;
	vector<string> nadwaga;
	

	for (int i = 0; i < counter; i++)
	{
		float BMI;
		string name;
		float weight = 1, growth = 1;
		cin >> name >> weight >> growth;

		BMI = (weight / (growth * growth)) * 10000;

		if (BMI < 18.5)
			niedowaga.push_back(name);

		if (BMI >= 18.5 && BMI <= 25)
			prawidlowa.push_back(name);

		if (BMI >= 25.0)
			nadwaga.push_back(name);
	}


	cout << "niedowaga" << endl;
	display(niedowaga);
	cout << endl;
	
	cout << "wartosc prawidlowa" << endl;
	display(prawidlowa);
	cout << endl;

	cout << "nadwaga" << endl;
	display(nadwaga);
	cout << endl;
}
