#include <iostream>
using namespace std;

int main()
{
    int aux, num=8, div=0;

    for(aux=1 ; aux<=num ; aux++)
        if(num%aux==0)
            div++;

    if(div==2)
        cout<<"� primo"<<endl;
    else
        cout<<"N�o � primo"<<endl;
    return 0;
}