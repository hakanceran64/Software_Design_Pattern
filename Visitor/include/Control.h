//
// Created by hakan on 05/12/2022.
//

#ifndef VISITOR_CONTROL_H
#define VISITOR_CONTROL_H

#include <string>
#include "IVisitor.h"

class Control {
protected:
    string id, text;

public:
    const string &getText() const;
    void setText(const string &value);
    const string &getID() const;
    void setID(const string &value);

    virtual void Accept(IVisitor *v) = 0;
};

class Panel : public Control {
public:
    void Accept(IVisitor *v) override;
};

class Textbox : public Control {
public:
    void Accept(IVisitor *v) override;
};

class DropDownList : public Control {
public:
    void Accept(IVisitor *v) override;
};

#endif //VISITOR_CONTROL_H
