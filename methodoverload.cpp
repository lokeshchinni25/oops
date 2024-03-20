#include<iostream>
using namespace std;
class hello{
    public:
        int add(int a,int b){
            int value=a+b;
            return value;
        }
        int add(float a,float b)
        {
            float value=a+b;
            return value;
        }
        int add(int a,float b,int c){
            float value=a+b+c;
            return value;
        }
};
int main()
{
    hello obj;
    cout<<"Int addition is "<<obj.add(2,4)<<endl;
    cout<<"Float addition is "<<obj.add(5.7f,6.9f)<<endl;
    cout<<"Three parameter addition is "<<obj.add(19,6.63f,56)<<endl;
}
