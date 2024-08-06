// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//????? ?? array by refrance ???? ???? &??
void read_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter[" << i + 1 << "]: student mark ";
        cin >> array[i];
    }

}
void display_array(int array[] , int size) {
    // Optionally, display the array elements
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;


}
void avrage_array(int array[], int size) {
    int sum=0;
    int avrage;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    avrage = sum / size;
    cout << "the class mark avrege is \n" << avrage;
    if (avrage > 50)
        cout << "class pass";

    else
        cout << "clase fiald";
    


}


int main() {
    int size;
    cout << "student number: ";
    cin >> size;
    // Dynamic memory allocation for array
    int* array = new int[size];
    // Reading array elements
    read_array(array, size);
    // writing array elements
    display_array(array, size);
    // avrage array elements
    avrage_array(array, size);

    // Free the allocated memory
    delete[] array;

    return 0;
}

