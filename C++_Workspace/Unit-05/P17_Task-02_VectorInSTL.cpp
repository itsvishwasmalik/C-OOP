#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	for (int i = 1; i <= 5; i++)
  {
		v1.push_back(i);
  }

	vector<int>::iterator it;
  cout<<"Vector v1: ";
	for (it=v1.begin();it!=v1.end();it++)
  {
		cout << *it << " ";
  }

  cout << "\nSize : " << v1.size()<<endl;
  cout << "Capacity : " << v1.capacity()<<endl;
  cout << "Max_Size : " << v1.max_size()<<endl;

  // resizes the vector size to 4 and then printing its size
  v1.resize(4);
  cout << "Size after resizing vector v1 : " << v1.size();
 
  // checks if the vector is empty or not
  if (v1.empty() == false)
  {
    cout << "\nVector is not empty";
  }   
  else
  {
    cout << "\nVector is empty";
  }

	return 0;
}
