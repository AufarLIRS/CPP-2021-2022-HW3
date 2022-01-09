#include <iostream>
#include <string>

int minElement(int* array, int size)
{
  int min_ = *array;
  for (int i = 0; i < size; i++)
  {
    if (min_ > *(array + i))
      min_ = *(array + i);
  }
  return min_;
}

int minElement2(int* first_elem, int* last_elem)
{
  int min_ = *first_elem;
  while (first_elem != last_elem + 1)
  {
    if (min_ > *(first_elem))
      min_ = *(first_elem);
    first_elem++;
  }
  return min_;
}

void rotate(int* first_elem, int* last_elem)
{
  int temp;
  for (int i = 0; first_elem + i < last_elem - i; i++)
  {
    temp = *(first_elem + i);
    *(first_elem + i) = *(last_elem - i);
    *(last_elem - i) = temp;
  }
}

int main()
{
  int arr[10] = { 5, 1, -755, 10, -5, -100, 123 };
  std::cout << "Минимальный элемент в массиве по заданию 1: " << minElement(arr, 6) << std::endl;
  std::cout << "Минимальный элемент в массиве по заданию 2: " << minElement2(arr, &arr[5]) << std::endl;

  int arr_[7] = { 12, 43, 123, 444, 56, 79 };
  rotate(arr_, &arr_[6]);
  for (int i = 0; i < 7; i++)
    std::cout << arr_[i] << " ";
  std::cout << std::endl;
}
