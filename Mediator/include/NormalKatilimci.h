/**
 * @file NormalKatilimci.h
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#ifndef MEDIATOR_NORMALKATILIMCI_H
#define MEDIATOR_NORMALKATILIMCI_H

#include <string>
#include "Katilimci.h"

// Somut Colleague-1
class NormalKatilimci final : public Katilimci {
public:
    explicit NormalKatilimci(const string &nick);
    void MesajAl(Katilimci *gonderici, const string &mesaj) override;
};

#endif //MEDIATOR_NORMALKATILIMCI_H
