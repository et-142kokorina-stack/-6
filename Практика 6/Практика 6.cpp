#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    const int MAX_SIZE = 1000;
    int arr[MAX_SIZE] = { 0 };
    int maxArr[MAX_SIZE] = { 0 };
    int N, M;

    cout << "Введите N и M: ";
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 1000;
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < M; i++) {
        maxArr[i] = arr[i];
    }
    cout << "M максимальных чисел: ";
    for (int i = 0; i < M; i++) {
        cout << maxArr[i];
        if (i < M - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
