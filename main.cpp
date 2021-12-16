#include <limits>
#include <iostream>

int minElement(int* array, int size)
{
  int min{ std::numeric_limits<int>::max() };
  int i{ 0 };
  do
    min = min > *(array + i) ? *(array + i) : min;
  while (++i != size);
  return min;
}
int minElement(int* first_elem, int* last_elem)
{
  int min{ std::numeric_limits<int>::max() };
  do
    min = min > *first_elem ? *first_elem : min;
  while (first_elem++ - last_elem != 0);
  return min;
}
void swap(int& a, int& b)
{
  int temp = b;
  b = a;
  a = temp;
}
void rotate(int* first_elem, int* last_elem)
{
  do
    swap(*first_elem, *last_elem);
  while ((--last_elem - ++first_elem) / 2 != 0);
}

int main()
{
  int array[7]{ 1, 2, 3, 4, -5, 3, 3 };

  // std::cout << minElement(array, 5) << std::endl;
  // std::cout << minElement(&array[0], &array[4]) << std::endl;
  // rotate(&array[0], &array[6]);

  for (int i = 0; i < 7; i++)
  {
    std::cout << array[i] << std::endl;
  }

  return 0;
}