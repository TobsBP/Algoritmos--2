#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int h = k % m;

    // Caso de num negativo soma m
    if (h < 0)
        h += m;
    return h;
};

int hash_1(int k, int i, int m)
{
    return (hash_aux(k,m) + i) % m;
};

int main()
{
    int k; // Chave 
    int j; // Posicao onde a chave k vai ser inserida
    int m; // Tamanho da tabela hash
    int i = 0;

    cin >> k >> m;

    for (i = 0; i < m; i++)
    {
        j = hash_1(k, i, m);
        cout << j << " ";
    }
    
    return 0;
}