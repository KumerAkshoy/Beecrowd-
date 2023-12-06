#include <bits/stdc++.h>
using namespace std;

int main(){
    double N;
    cin >> N;
    cout << "NOTAS:" << endl;
    double arr[12]={100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};

     for(int i=0;i<12;i++){
        int value = (N/arr[i]);
        if(i<6){
            cout << value <<" nota(s) de R$ "<< arr[i]<< endl ;
        }
        if(i==5){
            cout << "MOEDAS:" << endl;
        }
        if(i>5){
            cout << value <<" moeda(s) de R$ "<< arr[i]<< endl ;
        }

        N = fmod(N,arr[i]);

        cout << N <<endl;

        if(i==11){
         cout << value << endl;
        }
    }

    return 0;
}

