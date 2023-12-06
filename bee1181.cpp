#include<bits/stdc++.h>
using namespace std;
int main(){
    int L;
    char T;
    float M[12][12],sum=0,media;
    cin >> L >> T;
    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++){
            cin >> M[i][j];
        }
    }
    for(int i=L,j=0;j<=11;j++){
        sum=sum+M[i][j];
    }

    if(T=='S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(T=='M'){
        cout << fixed << setprecision(1) << sum/12.0 << endl;
    }
}
