#include <iostream>

using namespace std;

int main() {
    const int n = 7;

    int arr[n] = { 19, 37, 5, 23, 14, 1, 30 };

    int key = 5;

    int comparisons = 0;
    int index = -1;

    cout << "Початковий масив: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nКлюч пошуку: " << key << endl;

    for (int i = 0; i < n; i++) {
        comparisons++;

        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Елемент знайдено." << endl;
        cout << "Індекс: " << index << endl;
    }
    else {
        cout << "Елемент не знайдено." << endl;
    }

    cout << "Кількість порівнянь: "
        << comparisons << endl;

    return 0;
}
