// Program to verify voter eligibility

#include <iostream>

using namespace std;
int main(){
    int age;
    cout <<"enter your age"<<endl;
    cin>>age;
    
    if(age>=18){
        cout<<"you are legible to vote"<<endl;
    }
    else{
        cout<<"not legible" <<endl;
    }
    return 0;
}