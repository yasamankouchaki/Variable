//Take variable , specify its positive or negetive & average.
#include <iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    int positive=0,negetive=0;
    cout << "pleas Enter a1 a2 a3 :";
    cin>>a1>>a2>>a3;
    if(a1>0){
        positive++;
    }else{
        negetive++;
    }
    if(a2>0){
        positive++;
    }else{
        negetive++;
    }
    if(a3>0){
        positive++;
    }else{
        negetive++;
    }
    cout<<"Number of positive:"<<positive<<"\n";
    cout<<"Number of negetive:"<<negetive<<"\n";
    cout<<"Average:"<<(a1+a2+a3)/3.0;
    return 0;
}
