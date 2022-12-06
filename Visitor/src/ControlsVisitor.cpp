//
// Created by hakan on 05/12/2022.
//

#include "../include/ControlsVisitor.h"

void ControlsVisitor::DropDownVisit(Control *c) {
    if(c != nullptr) {
        cout << "ControlsVisitor::DropDownVisit | Dropdown'a child eleman eklenemez." << endl;
    }
}

void ControlsVisitor::PanelVisit(Control *c) {
    if(c != nullptr) {
        cout << "ControlsVisitor::PanelVisit | Panel'e child eleman eklenebilir." << endl;
    }
}

void ControlsVisitor::TextBoxVisit(Control *c) {
    if(c != nullptr) {
        cout << "ControlsVisitor::TextBoxVisit | Textbox'a child eleman eklenemez." << endl;
    }
}
