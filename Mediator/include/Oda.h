/**
 * @file Oda.h
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#ifndef MEDIATOR_ODA_H
#define MEDIATOR_ODA_H

#include <iostream>
#include <string>
#include <vector>
#include "Katilimci.h"

using namespace std;

class Oda {
protected:
    vector<Katilimci *> katilimcilar{};
    Oda();

public:
    void KatilimciEkle(Katilimci *k);
    virtual void MesajGonder(Katilimci *gonderen, Katilimci *alan, const string &mesaj) = 0;
    virtual void BroadcastMesajGonder(Katilimci *gonderen, const string &mesaj) = 0;
};

#endif //MEDIATOR_ODA_H
