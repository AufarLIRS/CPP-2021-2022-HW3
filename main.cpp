#include <iostream>
#include <string>
#include <utility>
// #include <ctime>
#include <chrono>
#include <iomanip>


//Это для моих тестов

// constexpr int minElement(const int* arr, const int &size)
// {
//     int min{arr[0]};
//
//     for (int i{0}; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }

int minElement(int* arr,int size) // 1 task
{
    int min{arr[0]};

    for (int i{0}; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int minElement(int* first_elem, int* last_elem) // 2 task я так понимаю это и есть перегрузка функции?
{
    int min{first_elem[0]};
    int *elem = first_elem;
    
  
    int i{0};
    while(*elem != *last_elem)
    {
        elem = &first_elem[i];
        i++;
        if (*elem < min)
        {
            min = *elem;
        }
    }
    return min;
}

void rotate (int* first_elem, int* last_elem) // 3 task
{
    int *elem = first_elem;
    int *dop_elem = last_elem;
    int dop_num;
    int count_first{0};
    int count_last{0};

    while(*dop_elem != *elem)
    {
        
        dop_elem = (last_elem - count_last - 1); // полезно было узнать, что компилятор обрабатывает подобное последовательно 
        last_elem = (last_elem - count_last);
        elem = (first_elem - count_first);
        dop_num = *last_elem;
        *last_elem = *elem;
        *elem = dop_num;
        if (*last_elem == *elem)
        {
            break;
        }
        count_first--; count_last++;
    }
}


// void Tests()  // функция, которая выводит время
// {
//     const int mas[3] {1, 2, 0};
//     const int num = 3;

//     auto start_time = std::chrono::high_resolution_clock::now();
//     constexpr int result = minElement(mas, num); //хоть компилятор и жалуется, но max_time = 0.0000003, а min_time = 0.0000001. 
//                                                  //без constexpr ко всем числам прибавляется двойка(0.000005 то бишь)
//     std::chrono::duration<double> search_time = std::chrono::high_resolution_clock::now() - start_time;
//     std::cout << "time : " << std::fixed << std::setprecision(10) << search_time.count() << std::endl;
// }


int main()
{
    // {
    //     int mas[3] {1, 2, 0};
    //     int num = 3;

    //     int result = minElement(mas, num); 
    //     std::cout << result << std::endl;
    // }



    // {
    //     int mas[4] {1, 2, 0, -2};
    //     int *elem = &mas[3];
    //     int *fr = &mas[0];
    //     int result = minElement(fr, elem);
    //     std::cout << result << std::endl;
    // }





    // {
    //     int mas[4] {1, 2, 0, -2};
    //     int *elem = &mas[3];
    //     int *fr = &mas[0];
    //     rotate(fr, elem);
    //     // for (int&_elem : mas)
    //     // {
    //     //     std::cout << _elem << std::endl; 
    //     // }
    // }


\

}


