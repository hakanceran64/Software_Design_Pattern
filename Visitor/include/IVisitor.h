//
// Created by hakan on 05/12/2022.
//

#ifndef VISITOR_IVISITOR_H
#define VISITOR_IVISITOR_H

#include <iostream>

using namespace std;

class Control;
class DropDownList;
class Panel;
class Textbox;

class IVisitor {
public:
    virtual void DropDownVisit(Control *c) = 0;
    virtual void PanelVisit(Control *c) = 0;
    virtual void TextBoxVisit(Control *c) = 0;
};

#endif //VISITOR_IVISITOR_H
