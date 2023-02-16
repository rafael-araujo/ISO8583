#include "MessageDefault.h"
#include <string>
#include <iostream>

using namespace std;

MessageDefault::MessageDefault(string m, string  p, string s, string f) :
    Message(m, p, s),
    fields(f) {}
