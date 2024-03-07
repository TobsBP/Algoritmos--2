#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> pilha; // Não precisa se preocupar com a memoria
    int x;

    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        pilha.push_front(x); // Coloca o x no inicio da lista '<-'    
    }
    
    cout << "Primeiro sem remover: " << *pilha.begin() << endl; // Exibe o primeiro no da lista

    pilha.pop_front(); // Remove o primeiro no da lista

    cout << "Primeiro removido: "<< *pilha.begin() << endl;

    // Limpando os nos recebidos
    pilha.pop_front(); // Remove o primeiro no da lista
    pilha.pop_front(); // Remove o primeiro no da lista

    // Lemrar da fila do banco

// Ao contrario do de cima ele coloca no final 

    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        pilha.push_back(x); // Coloca o x no final da lista '->'    
    }
    
    while (!pilha.empty())
    {
        cout << *pilha.begin() << endl; // Exibe o primeiro no da lista
        pilha.pop_front(); // Remove o primeiro no da lista
    }
    


    return 0;
}