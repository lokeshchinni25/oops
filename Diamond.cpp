#include<iostream> 
using namespace std; 
class ClassA 
{ 
public: 
    void aClass() 
    { 
        cout<<"I am kohli\n"; 
    } 
}; 
class ClassB: public ClassA 
{ 
public: 
    void bClass() 
    { 
        cout<<"I am dhoni\n"; 
    } 
}; 
class ClassC: public ClassA 
{ 
public: 
    void cClass()
    { 
        cout<<"I am yuzi\n"; 
    } 
}; 
class ClassD: public ClassC,public ClassB 
{ 
public: 
    void dClass() 
    { 
       cout<<"I am abd\n"; 
    } 
}; 
int main() 
{ 
ClassD obj1; 
    obj1.bClass(); 
    obj1.cClass(); 
    obj1.dClass(); 
    return 0;
}
