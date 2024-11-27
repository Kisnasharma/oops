// Implement overloading of operator+ to allow operations such as string1 = string2 + string3
#include<iostream>
#include<string>
using namespace std;
class str{
    string s1; 
public:
    str(){
        s1 = "";
    }
    str(string s1){
        this->s1 = s1;
    }
    string getString(){
        return s1;
    }
    string operator+(str s2){
        string ans = s1.append(s2.getString());
        return ans;
    }

};

int main(){
    // str is class
    str string1("kisna ");
    str string2("sharma");
    str string3;
    string3 = string1 + string2;
    cout<<string3.getString();
    return 0;

}