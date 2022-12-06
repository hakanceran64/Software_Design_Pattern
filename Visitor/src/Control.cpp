//
// Created by hakan on 05/12/2022.
//

#include "../include/Control.h"

const string &Control::getText() const {
    return text;
}

void Control::setText(const string &value) {
    text = value;
}

const string &Control::getID() const {
    return id;
}

void Control::setID(const string &value) {
    id = value;
}

void Panel::Accept(IVisitor *v) {
    v->PanelVisit(this);
}

void Textbox::Accept(IVisitor *v) {
    v->TextBoxVisit(this);
}

void DropDownList::Accept(IVisitor *v) {
    v->DropDownVisit(this);
}
