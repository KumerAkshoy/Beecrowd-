#include<iostream>
using namespace std;

int main()
{
    int A,N;
    cin >> A ;
    while (A<0){
        cin >> A ;
    }
    cin >> N;
    while(N<=0){
        cin >> N;
    }
    int presum=A;
    int sum=A;
    for(int i=1;i<N;i++){
        presum=presum+1;
        sum = sum + presum;
    }

    cout << sum << endl;

    return 0;
}
