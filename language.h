#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <string>

using namespace std;

class language
{
public:
    language();
    language(string full_name, string short_name);
private:
    string full_name;
    string short_name;

};

#endif // LANGUAGE_H
