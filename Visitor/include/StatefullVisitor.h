//
// Created by hakan on 05/12/2022.
//

#ifndef VISITOR_STATEFULLVISITOR_H
#define VISITOR_STATEFULLVISITOR_H

#include "IVisitor.h"

class StatefullVisitor : public IVisitor {
public:
    void DropDownVisit(Control *c) override;
    void PanelVisit(Control *c) override;
    void TextBoxVisit(Control *c) override;
};

#endif //VISITOR_STATEFULLVISITOR_H
