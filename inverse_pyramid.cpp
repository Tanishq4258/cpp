#include <iostream>
using namespace std;
int main(){
    int i, j, k;
    int n = 4;
    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++)
            cout << " ";
        for(k = 1; k <= 2*(n-i+1)-1; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}