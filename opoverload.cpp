#include <iostream>
using namespace std;
class OpOl{
    public:
#include<iostream>
using namespace std;
class add{
    public:
        int a=122;
    add() : a(122){}
    void operator ++(){
        ++a;
    }
    void display(){
        cout<<"count is " << a <<endl;
    }
};
int main(){
    add obj;
    ++obj;
    obj.display();
    return 0;
}
