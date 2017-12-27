#ifndef TEXT_H
#define TEXT_H

#include "language.h"

class text
{
public:
    text();
    text(string translation, language lang);
private:
    string translation;
    language lang;
};

#endif // TEXT_H
