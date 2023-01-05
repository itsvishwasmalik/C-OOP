//[STL]
/*
STL:
    The Standard Template Library(STL) is a set of C++ template classes.
    STL mainly divided into three sub libraries:
    a. Containers: It is a way that stored data is organized in memory[Elements of Array]
    b. Algorithms: Procedures that are applied on containers [search,sort]
    c. Iterators: Concepts of conatiners, which point to the elements in the container[find next elements]

Containers:
    1. Containers Library is a collection of classes.
    2. Containers are implemented as generic class templates.
    3. Common examples:
        
*/

#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main()
{
	list<int> list1;
    list1.push_front(3);
    list1.push_front(1);
    list1.push_front(5);
    list1.push_front(4);
    list1.push_front(2);

	cout << "list1 is : ";
	list<int>::iterator it;
	for (it=list1.begin();it!= list1.end();it++)
    {
		cout<<*it<<" ";
    }

	cout<<"\nSize of list 'list1' is "<<list1.size()<<endl;

    list1.sort();
    cout<<"List 'list1' after sorting is"<<endl;
    for (it=list1.begin();it!=list1.end();it++)
    {
		cout<<*it<<" ";
    }

    list1.reverse();
    cout<<"\nList 'list1' after reversing is"<<endl;
    for (it=list1.begin();it!=list1.end();it++)
    {
		cout<<*it<<" ";
    }

	return 0;
}
