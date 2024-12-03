/*Write a class to store an array that has the array itself, information on current size and capacity, and a constructor.
Create a function that inverts the order of elements in the array: the first will be the last, the last will be the first.
Use the function in the main loop, and print the array before and after the inversion*/

#include <iostream>
using namespace std;
const int SIZE = 10;

class Array {
public:
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrInv[SIZE];
    int size = SIZE;
    //constructor !!!!!
    void invert() {
        for (int i = 0; i < size / 2; i++) {
            // Swap the i-th element with the (size-i-1)-th element
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }
};
int main() {
    Array array;
    cout << "Correct array : ";
    for (int i = 0; i < array.size; i++) {
        cout << array.arr[i];
    }
    array.invert();

    cout << endl << "Inverted array : ";
    for (int i = 0; i < array.size; i++) {
        cout << array.arrInv[i];
    }
    return 0;
}

//si queremos que el parámetro "arr[SIZE]" y "size" sean privados, necesitaremos entonces una función dentro de la clase
//que nos ayude a mostrar lo que se encuentra dentro de la clase, ya que al ser PRIVATE no se puede utilizar fuera de la clase, sería así:
/*#include <iostream>
using namespace std;

const int SIZE = 10;

class Array {
private:
    int arr[SIZE];
    int size;
public:
    // Constructor
    Array() {
        size = SIZE;
        for (int i = 0; i < size; i++) {
            arr[i] = i;
        }
    }
    //invert
    void invert() {
        for (int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }
    //display
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array array;

    cout << "Original array: ";
    array.display();

    array.invert();

    cout << "Inverted array: ";
    array.display();

    return 0;
}*/
