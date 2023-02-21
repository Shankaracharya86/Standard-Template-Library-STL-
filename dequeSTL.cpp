#include <iostream>
#include<deque>
using namespace std;

int main()
{
  //create a deque
  deque<int> d;
  //insert element in the queue
  d.push_front(1);
  d.push_back(2);

  //cout<<"Before pop: ";
  for(int i:d){
       cout<<i<<" ";
    }cout<<endl;
  
  //to delete an element from front of a queue;
  /*d.pop_front();
  cout<<"After pop:";
  for(int i:d){
       cout<<i<<" ";
    }cout<<endl;*/

  //access element from an index
  cout<<"Element at 0 index:"<<d.at(0)<<endl;

  cout<<"First Element in the queue: "<<d.front()<<endl;
  cout<<"Last Element in the queue: "<<d.back()<<endl;
  cout<<"Queue is empty or not: "<<d.empty()<<endl;
  cout<<"Size of the queue: "<<d.size()<<endl;
  
  //Erase a range 
    d.erase(d.begin(), d.begin()+1);
  
  cout<<"Size of the queue after erase: "<<d.size()<<endl;
  return 0;
}