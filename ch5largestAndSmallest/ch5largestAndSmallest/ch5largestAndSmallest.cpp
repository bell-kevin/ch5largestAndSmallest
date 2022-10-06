// ch5largestAndSmallest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number, count=0, largest=-99999999999, smallest=99999999999;
    cout << "Ch 5 Largest and Smallest by Kevin Bell\n\n";
    cout << "Enter an integer (or -99 to quit): ";
    cin >> number;
    if (number > largest) {
        largest = number;
    }
    if (number != -99) {
        if (number < smallest) {
            smallest = number;
        }
    }
    while (number != -99) {
        cout << "Enter another integer (or -99 to quit): ";
        cin >> number;
        count++;
        if (number > largest) {
            largest = number;
        }
        if (number != -99) {
            if (number < smallest) {
                smallest = number;
            }
        }
        if (number == -99) {
            cout << "Out of these " << count << " numbers, the largest number is " << largest << " and the smallest number is " << smallest << endl;
        }
    }
    system("pause");
    return 0;
}