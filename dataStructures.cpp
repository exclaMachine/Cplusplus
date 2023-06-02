
#include <iostream>

#include <array>

template <typename T, size_t S> class Array {
public:
  // Array(int size)
  //{
  // m_Data = (int*)alloca(size); //dynamically allocate an array size
  //}
  constexpr int Size() const { return S; }

  T &operator[](size_t index) {
    return m_Data[index];
  } // w/out & T is being returned by value
  const T &operator[](size_t index) const { return m_Data[index]; }

  T *Data() { return m_Data; }
  const T *Data() const { return m_Data; }

private:
  // int* m_Data;
  T m_Data[S];
}


int main()
{
  // int array[5];  //stack allocated array

  // int size = 5;
  // int* heapArray = new int[size];  //size does not need to be known at
  // compile time delete[] heapArray;

  // std::array<int, 10> collection;

  // collection.size();

  // for (int i : collection)
  // {

  // }
  Array<int, 5> data;

  static_assert(data.Size() < 10, "Size is too large!");
}
