#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
  {
		g1.push_back(i);
  }
  
	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";
    cout<<endl;

    cout << "Size : " << g1.size()<<endl;
    cout << "\nCapacity : " << g1.capacity()<<endl;
    cout << "\nMax_Size : " << g1.max_size()<<endl;

    // resizes the vector size to 4
    g1.resize(4);
 
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
 
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
    
    cout<<"\nOutput after resizing."<<endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";
	return 0;
}
