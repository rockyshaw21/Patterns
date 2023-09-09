#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number:" << endl;
    cin >> num;

    for(int i=0;i<num;i++){
        int k=0;
        for(int j=0;j<(num*2)-1;j++){
            if(j<num-i-1)
            cout << " ";
            else if(k<i+1){
                if(k==0||k==i)
                cout << "* ";
                else cout << "  ";
                k++;
            }
            else continue;
        }
        cout << endl;
    }

    for(int i=0;i<num;i++){
        int k=0;
        for(int j=0;j<(num*2)-1;j++){
            if(j<i)
            cout << " ";
            else if(k<num-i){
                if(k==0||k==num-i-1)
                cout << "* ";
                else cout << "  ";
                k++;
            }
            else continue;
        }
        cout << endl;
    }
}