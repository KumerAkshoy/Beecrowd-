#include<iostream>
using namespace std;

int main()
{
    int X,Z;

    cin >> X >> Z;

    while(Z<=X){
        cin >> Z;
    }
    int sum = X;
    int count = 1;
    for(int i=1; ;){
        count+=1;
        X=X+i;
        sum=sum+X;
        if(sum>=Z){
            cout<< count << endl;
            break;
        }
    }

    return 0;
}
