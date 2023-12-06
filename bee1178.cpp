#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X,N[100];
    cin >> X;
    double temp=X;

    for(int i=0;i<100;i++){
        cout << fixed << setprecision(4) << "N[" << i << "] = " << temp << endl;
        temp=temp/2.0;
    }

    return 0;
}
