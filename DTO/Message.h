#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>

using namespace std;

class Message {

    protected:
    
        string mti;
        string primaryBitmap;
        string secundaryBitmap;
    
    public:

    Message(string mti, string primaryBitmap, string secundaryBitmap);

    string getMti();
    void setMti(string m);

    string getPrimaryBitmap();
    void setPrimaryBitmap(string p);

    string getSecundaryBitmap();
    void setSecundaryBitmap(string s);
    
};

#endif