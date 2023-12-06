#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,temp=1;
    char O;
    double M[12][12],sum=0,media;
    cin >> O;
    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++){
            cin >> M[i][j];
        }
    }
    for(int i=11;i>=7;i--){
        for(int j=temp;j<=i-1;j++)
        {
            sum=sum+M[i][j];
            count++;
        }
        temp++;
    }

    cout << count  << " " << sum << endl;
    if(O =='S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(O =='M'){
        cout << fixed << setprecision(1) << sum/30.0 << endl;
    }
}




