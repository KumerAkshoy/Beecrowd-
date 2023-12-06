#include<bits/stdc++.h>
using namespace std;
int main(){
    int X[10000],N;
    int Min=0,pos=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> X[i];
    }

    for(int i=0;i<N;i++){
        if(i==0){
            Min=X[i];
            pos=i;
        }
        else if(X[i]<Min){
            Min=X[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << Min << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
