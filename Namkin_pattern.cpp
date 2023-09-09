#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number:" << endl;
    cin >> num;


    for (int i=0; i<num; i++){
        for(int j=0;j<num-i-1; j++){
            cout<<" ";
        }
        
        for(int k=0;k<i+1;k++){
            cout<< "* ";
        }
        cout << endl;
    }

    for (int i=0; i<num; i++){
        for(int j=1;j<i+1; j++){
            cout<<" ";
        }
        
        for(int k=1;k<num-i;k++){
            cout<< " *";
        }
        cout << endl;
    }
    
}