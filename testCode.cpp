#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int size;

    cout << "How big will your pyramid be? ";
    cin >> size;

    for(int i = 1; i <= size; i++) {

        for(int s = (size - i); s > 0; s--) {
            cout << " ";
        }

        for(int j = 1; j <= i + (i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}