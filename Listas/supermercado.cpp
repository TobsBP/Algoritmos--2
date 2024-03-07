#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>::iterator p; // Ponteiro
    list<int> estoque; // Armazena o estoque
    list<int> venda; // Armazena as vendas
    int codigo; // Codigo do produto
    int escolha; // Escolha entre 1 e 2
    int quant; // Quantidade de produtos

    // Entrada
    cin >> quant;

    for (int i = 0; i < quant; i++)
    {
        cin >> escolha;

        // Distribuicao dos produtos
        if (escolha == 1)
        {
            cin >> codigo;
            estoque.push_back(codigo);
        }
        else if(escolha == 2)
        {         
            venda.push_front(estoque.front());
            estoque.pop_front();
        }
    }

    // Exeibe e libera a memoria
    cout << "Estoque: ";
    while (!estoque.empty())
    {
        cout << *estoque.begin() << " ";
        estoque.pop_front();
    }

    cout << "Venda: ";
    while (!venda.empty())
    {
        cout << *venda.begin() << " ";
        venda.pop_front();
    }

    return 0;
}
