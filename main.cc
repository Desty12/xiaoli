#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int PartionIndex(int arr[], int left, int right)
{
   int partIndex = arr[left];
   while(left <= right)
   {
      while(left <= right && partIndex <arr[right]) right--;
      //arr[right]=arr[left];
      while(left <= right && partIndex > arr[left]) left++;
      //arr[left]=arr[right];

      swap(arr[left], arr[right]);
   }
   swap(arr[right], partIndex);
   return right;
}

void qSort(int arr[], int left, int right)
{
  if(left < right)
  {
    int partIndex = PartionIndex(arr, left, right);
    qSort(arr, left, partIndex-1);
    qSort(arr, partIndex+1, right);
  }
}


void test()
{
  int arr[10] = {5,7,1,3,4,8,9,2,6,11};
  
  cout << "prinyt arr before sort:" << endl;
  for(auto per : arr)
  {
     cout << per << " ";
  }
  cout << endl;

  qSort(arr, 0, 9);
  
  cout << "prinyt arr after sort:" << endl;
  for(auto per : arr)
  {
     cout << per << " ";
  }
  cout << endl;
}

int main()
{
  test();

  return 0;
}
