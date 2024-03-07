#include <iostream>
using namespace std;

struct no
{
    int info;
    no *next;
};

typedef no* noptr; // troca o nome da variavel do ponteiro

// Insere um no no inicio da lista
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

// So vai ser null quando a lista estiver vazia
int main()
{
    noptr lista = NULL;
    noptr p = NULL;
    int soma = 0;
    int x;
    int i;

    cin >> x;
    while (x != 0)
    {
        push(lista, x);
        cin >> x;
    }

    // Exibe todos elementos dos nos
    for(p = lista; p != NULL; p = p->next)
    {
        cout << p->info << endl;
        soma += p->info;
    }

    cout << "Soma = " << soma << endl;

    // Fim
    return 0;
}