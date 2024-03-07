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

int soma(noptr lista)
{
    noptr p = NULL;
    int soma = 0;

    // Faz a soma
    for (p = lista; p != NULL; p = p->next)
        soma += p->info;
    
    // Retorna a soma dos valores
    return soma;
}

int main()
{
    noptr lista = NULL;
    int res; // Recebe a soma da funcao
    int num; // Numero para lista

    // Entrada dos numeros
    cin >> num;

    while (num != 0)
    {
        // Chama a funcao
        push(lista,num);
        cin >> num;
    }
    
    // Chama a funcao soma
    res = soma(lista);

    // Exibe
    cout << res << endl;
    
    // Fim
    return 0;
}