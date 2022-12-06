//
// Created by hakan on 05/12/2022.
//

#ifndef VISITOR_CONTROLSVISITOR_H
#define VISITOR_CONTROLSVISITOR_H

#include "IVisitor.h"

class ControlsVisitor : public IVisitor {
public:
    void DropDownVisit(Control *c) override;
    void PanelVisit(Control *c) override;
    void TextBoxVisit(Control *c) override;
};

#endif //VISITOR_CONTROLSVISITOR_H
