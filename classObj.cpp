#include <iostream>
using namespace std;

class Book{
    public: int price;
};

int main(){
    Book b1,b2,b3;

    b1.price=200;
    b2.price=300;
    b3.price=500;

    cout<< b1.price<<endl;
    cout<< b2.price<<endl;
    cout<<b3.price<<endl;

    return 0; 
}