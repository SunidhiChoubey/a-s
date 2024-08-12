#include <iostream>
using namespace std;

int main() {
    int a[100] = {78, 890, 67, 34, 13};
    int b[5] = {56, 78, 12, 90, 97};
    int c[100] = {19, 10, 100, 45, 47};

    cout << "Traditional method" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    cout << endl;

    // Modern method of printing
    cout << "Modern method of printing an array" << endl;
    for (int j : b) {
        cout << j << " ";
    }
    cout << endl;

    cout << "--------------------------------" << endl;
    // User-defined array
    cout << "User-defined array" << endl;
    int array[100], n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "The array is as follows: " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    // Reversing an array
    cout << "Reversing an array" << endl;
    for (int j = n - 1; j >= 0; j--) {
        cout << array[j] << " ";
    }
    cout << endl;

    // Finding marks 
    cout << "-----------------------------------" << endl;
    cout << "Finding an element in an array" << endl;
    int mark, marks[5], flag = 0, count = 0;
    cout << "Enter 5 elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    cout << "Which element position do you want? " << endl;
    cin >> mark;

    for (int i = 0; i < 5; i++) {
        if (mark == marks[i]) {
            cout << "Position of the element is at: " << i << endl;
            count++;
            flag = 1;
        }
    }

    if (count == 0) {
        cout << "No elements found" << endl;
    } else if (flag == 1) {
        cout << "Element is present " << count << " time(s)" << endl;
    }

    cout << "-----------------------------------" << endl;
    // Sum of an array
    cout << "The sum of array elements" << endl;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + marks[i];
    }
    cout << "Sum of elements: " << sum << endl;

    // Average of an array 
    float avg = static_cast<float>(sum) / 5;
    cout << "The average of the array is: " << avg << endl;

    cout << "-----------------------------------------" << endl;

    // Minimum and maximum of an array
    int min = marks[0], max = marks[0];

    for (int i = 1; i < 5; i++) {
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    cout << "\nThe least value of the array is: " << min << endl;

    for (int i = 1; i < 5; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }
    cout << "\nThe highest value of the array is: " << max << endl;

    cout << "-----------------------------" << endl;

    return 0;
}
