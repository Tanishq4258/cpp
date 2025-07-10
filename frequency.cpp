#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    bool counted[5] = {false};

    for (int i = 0; i < 5; i++) {
        if (!counted[i]) {
            int count = 1;
            for (int j = i + 1; j < 5; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = true;
                }
            }
            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }
}