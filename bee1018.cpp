#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    cout << N << endl;
    int arr[7]={100,50,20,10,5,2,1};

    for(int i=0;i<7;i++){
        cout << N/arr[i] <<" nota(s) de R$ "<< arr[i] << ",00" << endl ;
        N = N%arr[i];
    }

    return 0;
}
