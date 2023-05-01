#include<iostream>
using namespace std;

class Area{

    private:
    // data members
    int length;
    int breadth;
    public:
    // member functon
    void getDimensions(){
        cout<<"Enter lenght: ";
        cin>>length;
        cout<<"Enter lenght: ";
        cin>>length;
    }
    
    void Area_squre(){
        int area = length * breadth;
        cout<<"Area of squre is: "<<area;
    }
}a2;

int main(){
    Area a1;
    a1.getDimensions();
    a1.Area_squre();

    return 0;
}

