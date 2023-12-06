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
    for(int i=1;i<=10;i++){
        if(i<6){
            for(int j=0;j<=i-1;j++)
            {
                sum=sum+M[i][j];
                count++;
            }
        }

        if(i>5){
            for(int j=10-i;j>=0;j--){
                sum=sum+M[i][j];
                count++;
            }
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




