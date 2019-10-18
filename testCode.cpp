#include<iostream>
using namespace std;

int main() {

    int size;

    cout << "How big will your pyramid be? ";
    cin >> size;

    // the main loop: assigned for row printing
    for(int i = 1; i <= size; i++) {

        /*
         * secondary loop: prints spaces to center the pyramid.
         * it is dependent by the counter to determine how many
         * spaces it should print.
         * 
         * for instance: the size of the pyramid is 8.
         * legend: '_' and '=' are spaces.
         * 
         * _=_=_=_*             (spaces needed: 7)
         * =_=_=_***            (spaces needed: 6)
         * _=_=_*****           (spaces needed: 5)
         * =_=_*******          (spaces needed: 4)
         * _=_*********         (spaces needed: 3)
         * =_***********        (spaces needed: 2)
         * _*************       (spaces needed: 1)
         * ***************      (spaces needed: 0)
         * 
         */
        for(int s = (size - i); s > 0; s--) {
            cout << " ";
        }

        /*
         * secondary loop: prints stars for the pyramid.
         * it is dependent by the counter to determine how many
         * stars it should print to make it a 'pyramid'.
         * 
         * for instance: the size of the pyramid is 8.
         * legend: '_' and '=' are spaces.
         * 
         * _=_=_=_*             (stars needed: 1)
         * =_=_=_***            (stars needed: 3)
         * _=_=_*****           (stars needed: 5)
         * =_=_*******          (stars needed: 7)
         * _=_*********         (stars needed: 9)
         * =_***********        (stars needed: 11)
         * _*************       (stars needed: 13)
         * ***************      (stars needed: 15)
         * 
         */
        for(int j = 1; j <= i + (i - 1); j++) {
            cout << "*";
        }

        // Sends the marker to a new line.
        cout << endl;
    }
}