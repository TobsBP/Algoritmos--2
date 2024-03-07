#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int pos;

    pos = k % m;
    if (pos < 0)
        return pos = pos + m;
    else
        return pos;
}

int main()
{
    int k; // Chave
    int m, pos; // Tamanho

    cin >> k >> m;

    pos = hash_aux(k, m);

    cout << pos << endl;

    return 0;
}