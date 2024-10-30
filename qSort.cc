#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

// 快排算法确定邵兵位置
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

// 快速排序
void qSort(int arr[], int left, int right)
{
  if(left < right)
  {
    int partIndex = PartionIndex(arr, left, right);
    qSort(arr, left, partIndex-1);
    qSort(arr, partIndex+1, right);
  }
}

// 具体的执行函数
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

// 11主函数,main()函数入口
int main()
{
  int a = 11;
  test();
  int c = 20;
  cout << a << "\t" << b << endl;

  return 0;
}
