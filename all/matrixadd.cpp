#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    cout << endl;
    int m[x][y], n[x][y],sum[x][y];
    cout << "Enter first matrix:" << endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> m[i][j];
        }
    }
    cout << "Enter second matrix:" << endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> n[i][j];
        }
    }
    cout << "Sum matrix:" << endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            sum[i][j] = m[i][j] + n[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout << sum[i][j] << " "; 
        }
        cout << endl;
    }
}