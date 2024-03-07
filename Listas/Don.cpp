#include <iostream>
#include <list>
using namespace std;

struct dados
{
    string nome;
    list<int> divida;
};

int main()
{   
    dados pessoa[100]; // Armazena as pessoas
    list<int>::iterator p; // Ponteiro da lista
    string pes_pg; // Pessoa que pagou a divida
    int num_pes; // QUantidade de pessoas
    int valor; // Valor da divida
    int i; // Contador
    
    // Entrada
    cin >> num_pes; 

    for(i = 0; i < num_pes; i++)
    {
        cin.ignore();
        getline(cin,pessoa[i].nome);
        cin >> valor;
        pessoa[i].divida.push_back(valor);    
    }

    // Entrada da pessoa que pagou
    cin.ignore();
    getline(cin,pes_pg);

    // Limpa a divida da pessoa que pagou
    for (i = 0; i < num_pes; i++)
    {
        if (pes_pg == pessoa[i].nome)
        {
            while(!pessoa[i].divida.empty())
            {
                pessoa[i].divida.pop_front();
            }
        }   
    }
    
    // Exibe as pessoas que tem divida
    for(i = 0; i < num_pes; i++)
    {
        if (!pessoa[i].divida.empty())
        {
            cout << pessoa[i].nome << endl;
            for(p = pessoa[i].divida.begin(); p != pessoa[i].divida.end(); p++)
            {
                cout << *p << endl;
            }
        }           
    }
    
    // Libera a memoria
    for(i = 0; i < num_pes; i++)
    {
        while (!pessoa[i].divida.empty())
        {
            pessoa[i].divida.pop_front();
        }
    }

    return 0;
}