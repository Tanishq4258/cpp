#include <iostream>
using namespace std;
int &largest(int a[], int size){
    int *ptr = &a[0];
    for(int i = 1; i < size; i++){
        if(a[i] > *ptr){
            ptr = &a[i];
        }
    }
    return *ptr;
}
int main(){
    int a[5]={4,1,7,3,2};
    cout << "Before: ";
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    largest(a, 5) = 0;
    cout << "After: ";
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}