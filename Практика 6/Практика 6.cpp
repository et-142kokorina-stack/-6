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

    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
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

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string html = "<html> <body>My site: https://mysite.ru Picture: <img src=https://images.com/cat.jpg> Link in quotes: \"https://quoted.ru\" Link in brackets (https://susu.ru/ru) Link with dot: https://google.com. Link with comma: https://yandex.ru, Link https://ya.ru/?npr=1&utm_referrer=https%3A%2F%2Fyandex.ru%2F and also http://web-archive.com </body></html>";

    int pos = 0;
    int num = 0;

    string protocols[] = { "http://", "https://" };

    cout << "Найденные гиперссылки:\n";

    for (string prot : protocols)
    {
        pos = 0;
        while (true)
        {
            int start = html.find(prot, pos);
            if (start == -1) break;

            int end = start;

            while (end < html.length() &&
                html[end] != ' ' &&
                html[end] != '<' &&
                html[end] != '>' &&
                html[end] != '"' &&
                html[end] != '\'' &&
                html[end] != '(' &&
                html[end] != ')')
            {
                end++;
            }

            num++;
            cout << num << ". ";
            for (int i = start; i < end; i++) cout << html[i];
            cout << endl;

            pos = end;
        }
    }

    return 0;
}
