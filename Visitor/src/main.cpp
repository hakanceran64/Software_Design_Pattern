/**
 * @file main.cpp
 * @author Hakan CERAN
 * @date 05.12.2022
 * @brief Visitor Design Pattern
 * @note Good
 */

#include "../include/Control.h"
#include "../include/ControlsVisitor.h"
#include "../include/StatefullVisitor.h"

int main() {
    auto *pnl = new Panel();
    auto *cbo = new DropDownList();
    auto *txt = new Textbox();

    cout << endl << "Controls Visitor" << endl;

    auto *cv = new ControlsVisitor();
    cv->DropDownVisit(cbo);
    cv->TextBoxVisit(txt);
    cv->PanelVisit(pnl);

    cout << endl << "Statefull Visitor" << endl;

    auto *sv = new StatefullVisitor();
    sv->DropDownVisit(cbo);
    sv->TextBoxVisit(txt);
    sv->PanelVisit(pnl);

    delete pnl;
    delete cbo;
    delete txt;

    delete cv;
    delete sv;

    return 0;
}
