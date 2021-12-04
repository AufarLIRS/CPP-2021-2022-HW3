#include <array>
#include <iostream>
#include <string>

int minElement(int* array, int size)
{
    int min = 6;
    for (auto i = 0; i < size; i++)
    {
      if (min > array[i])
        min = array[i];
    }
    std::cout << min << std::endl;
}

int minElement(int* first_elem, int* last_elem)
{
    int min = *first_elem;
    for (auto i = 0; i < *last_elem; i++)
    {
       if (min > *(first_elem + i))
       {
          min = *(first_elem + i);
       }
    }
    std::cout << min << std::endl;
}

void rotate(int* first_elem, int* last_elem)
{
    int temp;
    int x1 = *first_elem;
    int x2 = *last_elem;
    for (auto i = 0; first_elem + i < last_elem - i; i++)
    {
      temp = *(first_elem + i);
      *(first_elem + i) = *(last_elem - i);
      *(last_elem - i) = temp;
    }
    for (auto i = 0; i < 5; i++)
    {
      std::cout << *(first_elem + i) << " ";
    }
}

int main()
{
    int size = 5;
    int array[size] = { 1, 2, 3, 4, 5 };
    minElement(array, size);

    int* a = array;
    int* b = a + 4;
    minElement(a, b);

    rotate(a, b);
}
