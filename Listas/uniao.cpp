#include<iostream>
#include<algorithm>
#include<list>
#include<queue>
using namespace std;

bool existe(priority_queue<int> lista, int x){
    priority_queue<int> temp = lista;

    while(!temp.empty()){
        if(temp.top() == x) return true;
        else temp.pop();
    }
    return false;
}

int main()
{
    priority_queue<int> lista_3;
    list<int> lista_1;
    list<int> lista_2;
    list<int>::iterator p;
    int cont_3;
    int nums;

    int vet[100];

    // Entrada lista_1
    cin >> nums;

    while (nums != 0)
    {
        lista_1.push_back(nums);
        cin >> nums;
    }
    
    // Entrada lista_2
    cin >> nums;

    while (nums != 0)
    {
        lista_2.push_back(nums);
        cin >> nums;
    }


    for(p = lista_1.begin(); p != lista_1.end(); p++){
        if(!existe(lista_3, *p)){
            lista_3.push(*p);
        }
    }

    for(p = lista_2.begin(); p != lista_2.end(); p++){
        if(!existe(lista_3, *p)){
            lista_3.push(*p);
        }
    }
    int i = 0;
    while(!lista_3.empty()){
        vet[i] = lista_3.top();
        i++;
        lista_3.pop();
    }

    for(; i>=0;i--){
        cout<<vet[i]<<" ";
    }

    return 0;
}