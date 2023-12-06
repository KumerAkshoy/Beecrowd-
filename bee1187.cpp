#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,temp=0;
    char O;
    float M[12][12],sum=0,media;
    cin >> O;
    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++){
            cin >> M[i][j];
        }
    }
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=10-i;j++)
        {
            sum=sum+M[i][j];
            temp++;
            count++;
        }
    }

    cout << count  << " " << sum << endl;
    if(O =='S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(O =='M'){
        cout << fixed << setprecision(1) << sum/count << endl;
    }
}



