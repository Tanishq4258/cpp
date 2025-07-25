#include <iostream>
using namespace std;


int main(){
int a,b, temp;
cout << "Enter 2 nums: ";
cin >> a >> b;
temp = a;
a = b;
b = temp;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
return 0;
}

// int main(){
//     int x,y;
//     cout << "Enter 2 nums: " << endl;
//     cin >> x >> y;
//     x = x + y;
//     y = x - y;
//     x = x - y;
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     return 0;
// }