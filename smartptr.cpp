#include <iostream>
#include <memory>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int a[5] = {10, 20, 30, 40, 50};
    unique_ptr<int[]> p1(new int[5]);
    for(int i = 0; i < 5; i++) {
        p1[i] = arr[i] + a[i];
    }
    cout << "Sum of arrays: ";
    for(int i = 0; i < 5; i++) {
        cout << p1[i] << " ";
    }
    cout << endl;
}