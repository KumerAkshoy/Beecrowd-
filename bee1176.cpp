#include<iostream>
using namespace std;

long long int fibo(int N){
     long long int temp1=0,temp2=1,temp3=0;
     if(N==0 || N==1){
        return N;
    }
    else{
        for(int i=2;i<=N;i++){
            temp3 = temp1+temp2;
            temp1 = temp2;
            temp2 = temp3;
            if (i==N){
                return temp3;
                break;
            }
        }
    }
}

int main(){
   long long int n,arr[100];
   cin >> n;

   for(int i=0;i<n;i++){
        cin >> arr[i];
   }

   for(int i=0;i<n;i++){
    cout << "Fib(" << arr[i] << ") = " << fibo(arr[i]) << endl;
   }

   return 0;
}
