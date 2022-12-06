/**
 * @file Moderator.h
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#ifndef MEDIATOR_MODERATOR_H
#define MEDIATOR_MODERATOR_H

#include <string>
#include <iostream>
#include "Katilimci.h"

using namespace std;

// Somut Colleague-2
class Moderator final : public Katilimci {
public:
    explicit Moderator(const string &nick);
    void MesajAl(Katilimci *gonderici, const string &mesaj) override;
};

#endif //MEDIATOR_MODERATOR_H
