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

int main()
{
    noptr lista = NULL;
    noptr p = NULL;
    int x, i;

    for (i = 0; i < 4; i++)
    {
        cin >> x;
        push(lista,x);
    }
    
    for(p = lista; p != NULL; p = p->next)
        cout << p->info << endl;

    return 0; 
}