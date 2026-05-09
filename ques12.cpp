#include<iostream>
using namespace std;
int main() {
    int x,y,z;

    cout << "enter value of side x:"<<endl;
    cin >> x;

    cout << "enter value of side y:"<<endl;
    cin >> y;

    cout<<"enter value of side z:"<<endl;
    cin >> z;

    if(x==y && y==z) {
        cout << "it is a equilateral traingle";
    }
    else if((x==y) && (y=!z) || (x==z) && (y=!z)) {
        cout << "it is a isoceles traingle";
    }
    else{
        cout << "it is a scaelen traingle";
    }
}
