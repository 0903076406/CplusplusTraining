#include<iostream>

using namespace std;

class Empty {
public:
    Empty() {cout<<"Defaul Constructor"<<endl;}
    
    Empty (const Empty &rhs) {cout <<"default copy constructor"<<endl;}
    ~Empty() {cout <<"Default deconstructor"<<endl;}

    Empty & operator=(const Empty &rhs) {cout << "copy assignment operator"<<endl;}

};

void foo(Empty e)
{
    cout <<"Empty foo"<<endl;
}
int main(void)
{
    cout <<"Empty e1" << endl;
    Empty e1;
    cout <<"Empty e2(e1)" <<endl;
    Empty e2(e1);
    cout << "EMpty e3 = e1"<<endl;
    Empty e3 = e1;
    cout << "Empty e2 = e1"<< endl;
    e2 = e1;
    cout << "foo get called"<< endl;
    foo(e1);
    cout << "Exit ..." << endl;
    return 0;
}
