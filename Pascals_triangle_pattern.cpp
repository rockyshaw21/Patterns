#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << " Enter a number:";
    cin >> n;

    for(int i=1; i<=n;i++){
        for(int j=1;j<n-i+2;j++){
            
            cout << " ";
        }

        int C=1;
        for(int j=1;j<=i;j++){
            cout << C << " ";
            C=C*(i-j)/j;

        }
        cout << endl;
    }
}