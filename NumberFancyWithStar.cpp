#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout << " Enter a number:";
    cin >> m;
    n=m+2;

    for(int i=0;i<n;i++){
        int cond = i<=n/2 ? 2*i: 2*(n-i-1);
        
        for(int j=0;j<=cond;j++){
            if(j==0 || j==cond)
            cout << "*";
            else if(j<=cond/2){
                cout << j;
                
            }
            else{
                cout << cond-j;
                } 
        }
        cout << endl;
    }

}
