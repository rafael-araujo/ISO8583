#include <iostream>
#include "DTO/Message.h"
#include "DTO/MessageDefault.h"

using namespace std;

int main(int argc, char * argv[]) {

    string entry(argv[1]);

    string mti = entry.substr(0, 4);
    string primary = entry.substr(4, 16);
    string secundary = entry.substr(20, 16);

    MessageDefault msg(mti, primary, secundary, "88888"); 

    cout << msg.getMti() << endl;
    return 0;
} 