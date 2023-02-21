#include <iostream>
#include<array>
using namespace std;
int main() {
    int arr[10]={1,2,3,4};  //conventional way to define array
  
  //now we see the STL vector
  //array<datatype,size> name of array={1,2,3,4};
  
  array<int,4> a={1,2,3,4};
  
  int size=a.size();
  
  for(int i=0;i<size;i++)
    {
      cout<<a[i]<<endl;
    }
  cout<<"element at 2nd index:"<<a.at(2)<<endl;

  //empty function return value in boolean eother 0()false or 1(true);
  cout<<"Empty or not:"<<a.empty()<<endl;

  cout<<"First Element:"<<a.front()<<endl;
  cout<<"Last Element:"<<a.back()<<endl;
  
}