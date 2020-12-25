//Dialog of the first example is given below.
/*Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/*/

#include <iostream>
#include <string>
using namespace std;

string UserIn ="", UserName = "?????", UserMovie ="", UserDate="";

int SttoNum(string s1){
    char ChNum[]={'0','1','2','3','4','5','6','7','8','9',};
    int i = 0, result = 0;
    while(i < 10){
        if(s1[0]==ChNum[i]){result += (i)*10;}
        if(s1[1]==ChNum[i]){result += i;}
        i++;
    }
    return result;
}

void CoutName(){
    cout << UserName <<": ";
}

int main(){

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" <<endl;
    CoutName();
    getline(cin, UserName);
    cout << "Fahsai: Wow!!! " << UserName << " is a really cool name." <<endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" <<endl;
    CoutName();
    getline(cin, UserIn);
    cout << "Fahsai: I think you may be GEAR " << SttoNum(UserIn)-12 << ". I have a free movie ticket for you." <<endl;
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?"<<endl;
    CoutName();
    getline(cin, UserMovie);
    cout << "Fahsai: So....which day are you free to go with me?" <<endl;
    CoutName();
    getline(cin, UserDate);
    cout << "Fahsai: " << UserDate << "....that is OK!!! I'm looking forward to watching " << UserMovie << " with you."<<endl;
    CoutName();
    getline(cin, UserIn);
    cout << "Fahsai: 555+ see you " << UserDate << ". Bye Bye \\(^ ^)/";

    return 0;
}