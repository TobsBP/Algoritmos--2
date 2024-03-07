#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lista;
    list<int>::iterator p;
    int x;

    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        lista.push_back(x);
    }

    for (p = lista.begin(); p != lista.end(); p++)
        cout << *p << " ";
    cout << endl;
    
    while (!lista.empty())
        lista.pop_front();
    
    // Fim
    return 0;
}