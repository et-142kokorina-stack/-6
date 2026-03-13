Задача 1. Написать программу, которая находит M максимальных чисел в массиве размерности N. 
Максимальные числа представить в виде отдельного массива.

Наборы тестов:
Введите N и M: 4 3
Введите элементы массива
Элемент 1: 4
Элемент 2: 6
Элемент 3: 7
Элемент 4: 8
Исходный массив: 4 6 7 8
Отсортированный массив: 8 7 6 4
M максимальных чисел: 8, 7, 6

Введите N и M: 6 5
Введите элементы массива
Элемент 1: 78
Элемент 2: 50
Элемент 3: 99
Элемент 4: 100
Элемент 5: 999
Элемент 6: 4
Исходный массив: 78 50 99 100 999 4
Отсортированный массив: 999 100 99 78 50 4
M максимальных чисел: 999, 100, 99, 78, 50

Задача 2. Дан текст в формате HTML. Найти в нем все гиперссылки. Гиперссылки могут
быть такими:
https://www.susu.ru/ru
https://ya.ru/?npr=1&utm_referrer=https%3A%2F%2Fyandex.ru%2F
http://web-archive.com

Наборы тестов:
http://simple.com http://with-path/page.html http://with-port:8080

Найденные гиперссылки:
1. http://simple.com
2. http://with-path/page.html
3. http://with-port:8080

https://secure.com https://api.site.com/v1/users https://shop.ru/catalog/?id=123

Найденные гиперссылки:
1. https://secure.com
2. https://api.site.com/v1/users
3. https://shop.ru/catalog/?id=123

https://mysite.ru <img src=https://images.com/cat.jpg> \"https://quoted.ru\"(https://susu.ru/ru) https://google.com. https://yandex.ru, https://ya.ru/?npr=1&utm_referrer=https%3A%2F%2Fyandex.ru%2F http://web-archive.com

Найденные гиперссылки:
1. http://web-archive.com
2. https://mysite.ru
3. https://images.com/cat.jpg
4. https://quoted.ru
5. https://susu.ru/ru
6. https://google.com
7. https://yandex.ru
8. https://ya.ru/?npr=1&utm_referrer=https%3A%2F%2Fyandex.ru%2F
