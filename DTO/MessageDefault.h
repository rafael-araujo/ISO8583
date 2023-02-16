#ifndef MESSAGE_DEFAULT_H
#define MESSAGE_DEFAULT_H
#include "Message.h"
#include <string>

using namespace std;

class MessageDefault : public Message {

    private:
    
        string fields;
    
    public:

    MessageDefault(string mti, string primaryBitmap, string secundaryBitmap, string fields);
    
};

#endif