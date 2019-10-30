#include<iostream>
using namespace std;

void peneira(int p,int m,int *v)
{
    int f=2*p;
    int x=v[p];
    while(f<=m)
    {
        if(f<m&&v[f]<v[f+1])
            ++f;
        if(x>=v[f])
            break;
        v[p]=v[f];
        p=f;
        f=2*p;
    }
    v[p]=x;
}
void heapsort(int n,int *v)
{
    int p,m;
    int x;
    for (p=n/2; p>=1; --p)
    {
        peneira(p,n,v);
    }
    for (m=n; m>=2; --m)
    {
        x=v[1];
        v[1]=v[m];
        v[m]=x;
        peneira(1,m-1,v);
    }
}

int main(){
	int v[] = { 4, 13, 11, 6, 5, 7 };
    heapsort(6, v);
    for(int i = 0; i < 6; i++){
        cout << v[i] << "\t";
    }
}