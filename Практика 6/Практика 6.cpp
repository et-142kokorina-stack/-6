#include <iostream>
#include <string>
using namespace std;

int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void inputArray(int*& arr, int& n) {
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива N: ";
    cin >> n;

    arr = new int[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void inputM(int& m, int n) {
    cout << "Введите количество максимальных чисел M: ";
    cin >> m;
}

int* findMaxElements(int* arr, int n, int m) {
    int* tempArr = new int[n];
    for (int i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }
    
    quickSort(tempArr, 0, n - 1);

    int* result = new int[m];
    for (int i = 0; i < m; i++) {
        result[i] = tempArr[i];
    }

    return result;
}

void printArray(int* arr, int size, const string& name) {
    cout << name << ": [";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    try {
        int n, m;
        int* arr = nullptr;
        int* maxElements = nullptr;

        inputArray(arr, n);
        printArray(arr, n, "Исходный массив");

        inputM(m, n);
        maxElements = findMaxElements(arr, n, m);

        printArray(maxElements, m, "M максимальных чисел");

        delete[] arr;
        delete[] maxElements;

    }
    catch (const string& error) {
        cout << "Ошибка: " << error << endl;
        return 1;
    }
    catch (const bad_alloc& e) {
        cout << "Ошибка выделения памяти" << endl;
        return 1;
    }
    catch (...) {
        cout << "Неизвестная ошибка" << endl;
        return 1;
    }

    return 0;
}
