#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number:" << endl;
    cin >> num;

    for(int i=0; i<num;i++){
        for(int j=0;j<2*num;j++){
            if(i==0 && j==num)
            cout << "*";
            else if(j>=num-i && j<num+i)
            cout << " ";
            else cout << "*";
    }
cout << endl;
}

for(int i=0; i<num;i++){
        for(int j=0;j<2*num;j++){
            if(j<i+1 || j>=(2*num)-i-1)
            cout << "*";
            else cout << " ";
    }
cout << endl;
}
}