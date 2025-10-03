#include <iostream>

int add(int a, int b) {
    return a + b;
}

int arithmeticMean(int a, int b) {
    double b1, q;
    int n;

    // Введення даних
    std::cout << "Введіть перший член прогресії (b1): ";
    std::cin >> b1;
    std::cout << "Введіть знаменник прогресії (q): ";
    std::cin >> q;
    std::cout << "Введіть кількість елементів (n): ";
    // std::cin >> n;

    n = 11;
    double sum = 0;  // Змінна для зберігання суми елементів
    double current_element = b1;  // Поточний член прогресії
    
    // Цикл для обчислення суми перших n елементів
    for (int i = 0; i < n; ++i) {
        sum += current_element;  // Додаємо поточний елемент до суми
        current_element *= q;    // Переходимо до наступного елемента (множимо на q)
    }

    // Обчислюємо середнє арифметичне
    double S_avg = sum / n;

    // Виведення результату
    std::cout << "Середнє арифметичне перших " << n << " елементів: " << S_avg << std::endl;
}

int main() {
    int result = add(1, 2);
    std::cout << "Result: " << result << std::endl;

    int arithmeticMeanResult = arithmeticMean(1, 2);
    std::cout << "Arithmetic mean result: " << arithmeticMeanResult << std::endl;

    return 0;
}
