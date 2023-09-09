#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number:" << endl;
    cin >> num;

    for(int i=0;i<num;i++){
        int j;
        for(j=0;j<i+1;j++){
            char ch= j + 'A';
            cout << ch;
        }

        j=j-1;

        for(;j>=1;j--){
            char ch = j+'A'-1;
            cout << ch;
        }
        
        cout << endl;
    }
}
