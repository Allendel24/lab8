#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int age;
    float h;
    long long int b;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> h;
        if(h < 100){s = "Chopper";}
        else if(h < 180){s = "Usopp";}
        else{
            cout << "Enter your bounty: ";
            cin >> b;
            if(b > 1100000000){s = "Zoro";}
            else{s = "Sanji";}
        }
    }
    else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> b;
        if(b > 500000000){s = "Jinbe";}
        else{s = "Franky";}
    }
    else{s = "Brook";}
    
    cout << "Your character = " << s;
    
    return 0;
}