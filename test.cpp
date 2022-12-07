
#include <iostream>
#include <iostream>

using namespace std;

int Transformare(int q, int n)
{
    int rest,numar=0,v[100],i=0,j;
    while(n)
    {
        i++;
        rest=n%q;
        v[i]=rest;
        n=n/q;
    }
    for(j=i;i>=1;j--)
    {
        numar=numar*10+v[j];
    }
    return numar;
}

int Numarare(int c, int n) */Contorizeaza numarul de aparitii ale lui c in n 
{
    int cnt=0;
    while(n)
    {
        if(n%10==c)
        cnt++;
        n=n/10;
    }
    return cnt;
}

struct numar
{
    int nr_baza10;
    int nr_baza_q;
    int nr_aparitii;
};

int main()
{
    int nr_maxim=-1;
    int q,c,n;

    numar v[100];
    
    cin>>q>>c>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>v[i].nr_baza10;
    }

    for(int i=1; i<=n; i++)
    {
        v[i].nr_baza_q = Transformare(q,v[i].nr_baza10);    
        v[i].nr_aparitii = Numarare(c, v[i].nr_baza_q);
        if(v[i].nr_aparitii>nr_maxim) 
        {
            nr_maxim=v[i].nr_aparitii;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(v[i].nr_aparitii==nr_maxim)
        {
            cout<<v[i].nr_baza10<<" ";
        }
    }
}
using namespace std;

int main()
{
    cout<<"Hello World";

    return 0;
}
