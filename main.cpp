#include <iostream>
#include <string>
using namespace std;
int minElement_1(int* array, int size)
{
  int minNum = *array;
  for (int i = 0; i < size; i++)
  {
    if (minNum > *(array + i))
    {
      minNum = *(array + i);
    }
  }
  return minNum;
}

int minElement_2(int* first_elem, int* last_elem)
{
  int minNum = *first_elem;
  while (first_elem != last_elem + 1)
  {
    if (minNum > *(first_elem))
    {
      minNum = *(first_elem);
    }
    first_elem++;
  }
  return minNum;
}

void rotate(int* first_elem, int* last_elem)
{
  int* timeA = first_elem;
  int* timeB = last_elem;
  while (timeA != last_elem & timeB != first_elem & first_elem != last_elem)
  {
    int temp = *first_elem;
    *first_elem = *last_elem;
    *last_elem = temp;

    timeA = first_elem;
    timeB = last_elem;
    first_elem++;
    last_elem--;
  }
}
int main()
{
  int arr[6] = { 1, 2, 3, 4, 5 };
  int array[6] = { 7, 5, 8, 1, -5, 0 };
  // std::cout << minElement_1(array, 6) << std::endl;
  // std::cout << minElement_2(array, &array[5]) << std::endl;
  rotate(arr, &arr[4]);
  for (int i = 0; i < 5; i++)
  {
    std::cout << arr[i] << std::endl;
  }
}
