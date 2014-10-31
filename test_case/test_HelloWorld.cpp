#include "../code/HelloWorld.h"
#include <iostream>
#include <unistd.h>
int main()
{
    cout<<"test case 1: test HelloWorld class exsist?"<<endl;
    HelloWorld h;
    sleep(5);
    cout<<"test case 1 passed!"<<endl;
    
    cout<<"test case 2: test method say exsist?"<<endl;
    string str = h.say();
    sleep(5);
    cout<<"test case 2 passed!"<<endl;

    cout<<"test case 3: test method say return the right value?"<<endl;
    sleep(5);
    if(str.compare("Hello!") == 0){
        cout<<"test case 3 passed!"<<endl;
    }else{
        cout<<"test case 3 failed!"<<endl;
        return -1;
    }

    return 0;
}

