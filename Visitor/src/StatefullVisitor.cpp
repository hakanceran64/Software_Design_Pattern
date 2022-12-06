//
// Created by hakan on 05/12/2022.
//

#include "../include/StatefullVisitor.h"

void StatefullVisitor::DropDownVisit(Control *c) {
    if(c != nullptr) {
        cout << "Dropdown'da viewstate kullanilamaz." << endl;
    }
}

void StatefullVisitor::PanelVisit(Control *c) {
    if(c != nullptr) {
        cout << "Panel'da viewstate kullanilamaz." << endl;
    }
}

void StatefullVisitor::TextBoxVisit(Control *c) {
    if(c != nullptr) {
        cout << "Textbox'da viewstate kullanilamaz." << endl;
    }
}
