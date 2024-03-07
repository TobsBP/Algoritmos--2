#include <iostream>
using namespace std;

struct dado
{
    int k;
    int status; // 0-vazio, 1-ocupado, 2-removido
};

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

int hash_insert(dado t[], int m, int k)
{
    int j;
    int i = 0;

    do
    {
        j = hash_1(k,i,m);
        if (t[j].status != 1)
        {
            t[j].k = k;
            t[j].status = 1;

            return j;
        } else 
            i = i + 1;
        
    } while (i != m);

    return -1;
    
};

int hash_search(dado t[], int m, int k)
{
    int i = 0;
    int j = 0;

    do
    {
        j = hash_1(k, i, m);
        if (t[j].k == k)
            return j;

        i = i + 1;

    } while (t[j].status != 0 and i < m);

    return -1;
}

int hash_remove(dado t[], int m, int k)
{
    int j;

    j = hash_search(t,m,k);
    if (j != -1)
    {
        t[j].status = 2;
        t[j].k = -1;
        return 0; // Conseguiu remover
    }else
        return -1; // K nao esta na tabela
    
}

int main()
{
    int m;
    int k;
    int i;
    int j;
    dado t[20];

    cin >> m >> k;

    // Defini os vetores vazios e ocupados
    for (i = 0; i < m; i++)
    {
        t[i].status = 0;
        t[i].k = -1;
    }
    
    // Entrada da chave na funcao
    while (k != 0)
    {
        hash_insert(t, m, k);
        cin >> k;
    }
    
    // Valor a ser encontrado
    cin >> k;
    
    // Chama a funcao para encontrar
    j = hash_search(t, m, k);

    // Chama a funcao remove
    if (j != -1)
    {
        for (i = 0; i < m; i++)
        {
            hash_remove(t,m,k);
        }
    }
    
    // Exibe a tabela com os valores ja removidos
    for (i = 0; i < m; i++)
    {
        cout << t[i].k << " ";
    }
    

    return 0;
}