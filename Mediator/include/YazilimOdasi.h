/**
 * @file YazilimOdasi.h
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#ifndef MEDIATOR_YAZILIMODASI_H
#define MEDIATOR_YAZILIMODASI_H

#include <string>
#include "Oda.h"

// Soyut Mediator
class YazilimOdasi final : public Oda {
public:
    YazilimOdasi() : Oda()
    {
        // ...
    }
    void BroadcastMesajGonder(Katilimci *gonderen, const string &mesaj) override;
    void MesajGonder(Katilimci *gonderen, Katilimci *alan, const string &mesaj) override;
};

#endif //MEDIATOR_YAZILIMODASI_H
