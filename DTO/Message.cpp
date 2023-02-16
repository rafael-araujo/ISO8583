#include "Message.h"
#include <string>
#include <iostream>

using namespace std;

// Message::Message(string m, string  p, string s)
//     : mti(m), primaryBitmap(p), secundaryBitmap(s) {}

string Message::getMti(){
    return mti;
}

void Message::setMti(string p){
    mti = p; 
}


string Message::getPrimaryBitmap(){
    return primaryBitmap;
}

void Message::setPrimaryBitmap(string p){
    primaryBitmap = p;
}

string Message::getSecundaryBitmap(){
    return secundaryBitmap;
}

void Message::setSecundaryBitmap(string s){
    secundaryBitmap = s;
}