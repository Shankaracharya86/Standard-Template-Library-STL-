#include <iostream>
#include <vector> //library for vector array

using namespace std;
int main() {

  // to create a vector first write vector<data type> name of vector
  vector<int> v;

  // another way to create a vector first write vector<data type>
  // nameofvector(size,all indexes become whatever we write here)
  vector<int> a(5, 1);
  cout << "Print the indexes of vector a:";
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl;

  // capacity hm array ko kitna memory allocat hua h wo check krte hai
  cout << "capacity:" << v.capacity() << endl;

  // size se hm array ke under kitne element hai wo check krte hai
  cout << "Size:" << v.size() << endl;

  // vector me element add krna
  v.push_back(1);
  cout << "capacity:" << v.capacity() << endl;
  cout << "Size:" << v.size() << endl;

  v.push_back(2);
  cout << "capacity:" << v.capacity() << endl;
  cout << "Size:" << v.size() << endl;

  v.push_back(3);
  cout << "capacity:" << v.capacity() << endl;
  cout << "Size:" << v.size() << endl;

  // access element at any index;
  cout << "Element at 2 index:" << v.at(2) << endl;

  // first element
  cout << "First Element:" << v.front() << endl;

  // Last Element
  cout << "Last Element:" << v.back() << endl;

  cout << "Before pop:" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;
  // delete from the vecrtor
  v.pop_back();

  cout << "After pop:" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Before clear, the size is:" << v.size() << endl;
  v.clear();
  cout << "After clear, the size is:" << v.size() << endl;
  cout << "After clear, the capacity is:" << v.capacity();
}