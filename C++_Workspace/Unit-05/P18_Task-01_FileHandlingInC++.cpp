#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream write_data; //Write to file
    ifstream read_data;  //Read from file

    write_data.open("new_file_write.txt",ios::out);
    write_data<<"Graphic Era Hill University,\nDehradun"<<endl;
    write_data.close();

    read_data.open("new_file_read.txt",ios::in);
    if(!read_data)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        string str;
        while(!read_data.eof())
        {
            getline(read_data,str);
            cout<<str<<endl;
        }
        read_data.close();
    }
    return 0;
}