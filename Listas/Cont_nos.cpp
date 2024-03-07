#include <iostream>
using namespace std;

struct no
{
    int info;
    no *next;
};

typedef no* noptr; 

void push(noptr &lista, int x)
{
    noptr p = NULL;
    p = new(no);
    p->info = x;

    if (lista == NULL)
        p->next = NULL;
    else
        p->next = lista;

    lista = p;
}

int contar(noptr lista)
{
    noptr p = NULL;
    int cont = 0;

    for(p = lista; p != NULL; p = p->next)
    {
        if (p != NULL)
            cont++;
    }

    return cont;
}

int main()
{
    noptr lista = NULL;
    int cont; // Recebe a quantidade de nos
    int num; // Numeros para lista

    // Entrada dos nums
    cin >> num;

    while (num != 0)
    {
        // Chama a funcao
        push(lista,num);
        cin >> num;
    }
    
    // Chama a funcao para contar
    cont = contar(lista);

    // Exibe
    cout << cont << endl;

    // Fim
    return 0;
}