#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lista;
    list<int>::iterator p; // Ponteiro
    int soma = 0;
    int x;

    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        lista.push_back(x); // Coloca o x no final da lista '->'    
    }
    
    // lista.end() é um no dps do ultimo no para esse for funcionar

    for (p = lista.begin(); p != lista.end(); p++) // p++ move para o proximo no
    {    
        soma += *p;
        cout << *p << " ";     
    }
    cout << endl;
    cout << "Soma = " << soma << endl;

    // Resumindo usa o p para andar na lista

    // Libera a memoria
    while (!lista.empty())
    {
        cout << *lista.begin() << endl; // Exibe o primeiro no da lista
        lista.pop_front(); // Remove o primeiro no da lista
    }

    return 0;
}