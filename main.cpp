//
//  main.cpp
//  LABA_490
//
//  Created by Владимир Козлов on 16.04.16.
//  Copyright (c) 2016 Владимир Козлов. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    int k, n;
    
    cout<<"Введите строку: ";
    getline(cin, str);
    cout<<"Введите N: ";
    cin>>n;
    cout<<"Введите K: ";
    cin>>k;
    
    
    if(n<0){
        cout<<"Введите целое положительное число\n";
        cout<<"Введите N: ";
        cin>>n;}
    if(n>str.length() || (n+k)>str.length()){
        cout<<"Вы превысили длину строки!\n";
    }
    else{
        str.erase(n,k);
        cout<<str<<"\t";
    }
    
    
    return 0;
}
