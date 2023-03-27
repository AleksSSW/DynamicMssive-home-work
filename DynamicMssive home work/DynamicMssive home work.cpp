// DynamicMssive home work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cstdlib>
#include <ctime>

void fill_arr(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
        arr[i] = rand() % (max - min) + min;
}
template <typename T>
void show_arr(T arr[], int size) {
    std::cout << '[';
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ,";
    std::cout << '\b\b]\n';

}
template <typename T>
 void resize_arr(T arr[], int size1, int size2) {
    if (size2 < 0)
        return;
    int* tmp = new int[size2] {};
    for (int i = 0; i < size2; i++)
        tmp[i] = arr[size2];
    
}

int main()
{
    setlocale(LC_ALL, "russian");
    /*int size1;
    int size2;
    std::cout << "Введите размер массива 1:\n";
    std::cin >> size1;
    std::cout << "Введите размер для массива 2:\n";
    std::cin >> size2;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    fill_arr(arr1, size1, 15, 25);
    fill_arr(arr2, size2, 30, 52);
    std::cout << "Массив 1:\n";
    show_arr(arr1, size1);
    std::cout << '\n';
    std::cout << "Массив 2:\n";
    show_arr(arr2, size2);
    std::cout << '\n';
    int* arr3 = new int[size1+size2];
    for (int i = 0; i < size1; i++)
        arr3[i] = arr1[i];
    for (int i = size1; i < size1 + size2; i++)
        arr3[i] = arr2[i - size1];
    std::cout << "массив 3:\n";
    show_arr(arr3, size1 + size2);
    delete[] arr1;
    delete[] arr2;*/
    //Задача 2;
    int size1;
    int size2;
    std::cout << "Введите длину изначального массива:\n";
    std::cin >> size1;
    int* arr = new int[size1];
    fill_arr(arr, size1, 34, 85);
    std::cout << "Массив изначальный:\n";
    show_arr(arr, size1);
    std::cout << "Введите второго  массива:\n";
    std::cin >> size2;
    std::cout << "массив измененный:\n";
    resize_arr(arr, size1, size2);
    show_arr(arr, size2);



    return 0;
}


