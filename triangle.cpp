#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=0;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int i,j,k;
    for(i=0;i<4+1;i++){
        for(j=0;j<4-i;j++){
            cout << "  ";
        }
        for(k=0;k<i;k++){
            cout << "* ";
        }
        cout << endl;
    }
    
}


int main(){
    int i,j;
    for(i=4;i>=0;i--){
        for(j=0;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}