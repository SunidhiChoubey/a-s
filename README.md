# EXPERIMENT-7 A
## AIM- To study and implement c++ array.
## THEORY
An array is a data structure that consists of a collection of elements, all of the same data type, stored in contiguous memory locations.
Each element in an array is identified by an index, with the first element typically starting at index 0.
### Memory Allocation:
Arrays in C++ have a fixed size, which means once you declare an array, its size cannot be changed. This is because the memory is allocated statically, and any attempt to expand or shrink the array would violate the contiguous memory allocation requirement.
Example:
If an integer array arr is declared, all elements in arr must be integers.
If the first element is stored at memory address 1000, the next element will be stored at 1004 (assuming an integer is 4 bytes in size).
### Applications:
#### Matrix Representation: Arrays can represent data in matrix form or tabular format.
#### Data Storage: Arrays store data that will be processed, such as elements in algorithms.
#### Implementing Other Structures: Arrays are used to implement other data structures like queues, stacks, and dynamic memory allocations like linked lists and trees.
### Array Operations:
#### Traversal: Visiting each element in the array in a specific order (e.g., sequentially or in reverse).
#### Insertion: Adding a new element at a specific index.
#### Deletion: Removing an element from a specific index.
#### Searching: Finding the index of a particular element.
### Types of Arrays:
#### One-Dimensional Arrays: A single row of elements.
#### Multi-Dimensional Arrays: Arrays of arrays, such as 2D arrays (matrices).
### Advantages:
#### Random Access: Direct access to elements using their index, which is faster.
#### Cache Locality: Arrays have better cache performance because elements are stored contiguously.
#### Multiple Data Items: Arrays allow multiple data items of the same type to be stored under a single name.
#### Base for Other Structures: Arrays are foundational for implementing data structures like linked lists, stacks, and queues.
### Disadvantages:
#### Fixed Size: Once the size of an array is set, it cannot be changed. This limits flexibility in storage.
#### Homogeneity: Arrays can only store elements of the same data type.
#### Complex Insertion/Deletion: Due to contiguous memory allocation, inserting or deleting elements in an array is complex and time-consuming compared to linked lists.

## CODES
~~~
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
~~~
## OUTPUT
![](https://github.com/SunidhiChoubey/a-s/blob/main/Screenshot%202024-08-12%20125931.png)
![](https://github.com/SunidhiChoubey/a-s/blob/main/Screenshot%202024-08-12%20125939.png)

## CONCLUSION
We learnt how to implement arrays and its operations in C++ programming languages

# EXPERIMENT-7 B
## AIM- To study and implement c++ strings
## THEORY-
A string is a data type consisting of a sequence of characters, primarily used to represent and manipulate textual data in computer programs. Strings can be modified and interacted with through various operations, such as concatenation, substring extraction, and comparison.

In most programming languages, strings are treated as a distinct data type with specialized operations and properties. They can be declared and manipulated using a variety of string-related functions and methods tailored for text handling.

### Applications of Strings
#### Data Security: Strings play a critical role in hashing and encryption, where random strings are generated to secure or encrypt data.
#### Text Representation: Strings are essential for representing textual data, whether in user interfaces, documents, or files.
#### Database Operations: Strings are commonly used to handle and manipulate text fields in databases.
#### Web Development: Strings are key in web development for managing HTML, URLs, and user input.
### String Operations
#### Finding the Length: Determine the number of characters in a string.
#### Character Access: Retrieve individual characters from a string using their index positions.
#### String Concatenation: Combine two strings into one.
#### Appending Strings: Add text to the end of an existing string.
#### Comparing Strings: Check if two strings are equal or determine their lexicographical order.
#### Substring Creation: Extract a portion of a string.
#### Character Search: Locate a specific character or substring within a string.
#### Replacing Text: Modify a string by replacing characters or substrings with new content.
#### Inserting Characters: Add characters or substrings at a specific position within a string.
#### Deleting Characters: Remove characters or substrings from a string.
#### C-Style String Conversion: Convert a std::string to a C-style string (character array).
## codes
~~~
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    cout<<"Enter any string"<<endl;
    cin>> a;
    cout<<"The entered string is: "<<a<<endl;

    cout<<"-----------------"<<endl;

    cout<<"Concatenation of 2 strings: "<<endl;
    cout<<"\nEnter 2 strings to concatenate: "<<endl;
    string str1,str2,str3,str4;
    cin>> str1>> str2;
    cout<<"\nConcatenation of the 2 strings: "<<str1+str2<<endl;

    cout<<"-------------------"<<endl;
    cout<<"\nReversing a string"<<endl;
    cout<<"\nEnter a string to reverse"<<endl;
    cin>> str3;
    for(int i = str3.length()-1;i>=0;i--)
    {
        cout<<str3[i];
    }

    cout<<"\n-------------------------"<<endl;
    cout<<"\nTo check whether the given string is a Palindrome"<<endl;
    cout<<"Enter a string to check whether a given string is a Palindrome"<<endl;
    cin>>str4;
    int len = str4.length();
    bool flag = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (str4[i] != str4[len - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<"The given string is  a palindrome"<<endl;
    }
    else 
    {
        cout<<"The given string is not a palindrome"<<endl;
    }


    return 0;
}
~~~
## OUTPUT-
![](https://github.com/SunidhiChoubey/a-s/blob/main/Screenshot%202024-08-12%20125945.png)
![](https://github.com/SunidhiChoubey/a-s/blob/main/Screenshot%202024-08-12%20130121.png)
## CONCLUSION
we learnt how to implement strings and its operation
