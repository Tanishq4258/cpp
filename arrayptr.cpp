#include <iostream>
using namespace std;
int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int *ptr = num;
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
   
    return 0;
}