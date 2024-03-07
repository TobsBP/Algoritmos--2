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

bool encontrar(noptr lista, int x)
{
    noptr p = NULL;

    for (p = lista; p != NULL; p = p->next)
    {
        if (x == p->info)
            return true;
    }
    
    return false;
}

int main()
{
    noptr lista = NULL;
    bool achou; // Recebe se encontrou ou nao
    int num; // Numeros a serem inseridos na lista
    int x; // Numero a ser encontrado

    // Entrada dos nums
    cin >> num;

    while (num != 0)
    {   
        // Chama a func
        push(lista,num);
        cin >> num;
    }
    
    // Entrada do numero a ser encontrado
    cin >> x;
    achou = encontrar(lista,x);

    // Exibe
    if(achou)
        cout << "Encontrado" << endl;
    else   
        cout << "Nao encontrado" << endl;

    return 0;
}   