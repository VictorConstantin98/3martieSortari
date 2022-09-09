#include <iostream>
using namespace std;
void main()
{
	/*
	* Sortare crescatoare prin interschimbare si gasirea minimului.
	*/
	int lista[100] = { 5,4,8,9,4,2,-3,8,9,100 };
	int nrElemente = 10;
	for (int j = 0;j < nrElemente;j++)
	{
		int min;
		min = lista[j];
		int pozitiaMinimului;
		pozitiaMinimului = j;
		for (int i = j;i < nrElemente;i++)
		{
			if (lista[i] < min)
			{
				min = lista[i];
				pozitiaMinimului = i;
			}

		}
		// lista[pozitiaMinimului]    lista[j]
		int aux;
		aux = lista[j];
		lista[j] = lista[pozitiaMinimului];
		lista[pozitiaMinimului] = aux;
	}

	for (int i = 0;i < nrElemente;i++)
	{
		cout << "lista[" << i << "]= " << lista[i] << endl;
	}
	
	/*
	* Sortare descrescatoare prin interschimbare si gasirea maximului.
	*/
	int lista2[100] = { 5,4,8,9,4,2,-3,8,9,100 };
	int nrElemente2 = 10;
	for (int j = 0;j < nrElemente2;j++)
	{
		int max;
		max = lista2[j];
		int pozitiaMaximului;
		pozitiaMaximului = j;
		for (int i = j;i < nrElemente2;i++)
		{
			if (lista2[i] > max)
			{
				max = lista2[i];
				pozitiaMaximului = i;
			}
		}
		//lista[pozitiaMaximului]   lista[j]
		int aux;
		aux = lista2[j];
		lista2[j] = lista2[pozitiaMaximului];
		lista2[pozitiaMaximului] = aux;
	}

	for (int i = 0;i < nrElemente2;i++)
	{
		cout << "lista2[" << i << "]= " << lista2[i] << endl;
	}











}