/**
 * @file YazilimOdasi.cpp
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#include "../include/YazilimOdasi.h"

void YazilimOdasi::BroadcastMesajGonder(Katilimci *gonderen, const string &mesaj) {
    for(auto k : this->katilimcilar) {
        k->MesajAl(gonderen, mesaj);
    }
}

void YazilimOdasi::MesajGonder(Katilimci *gonderen, Katilimci *alan, const string &mesaj) {
    alan->MesajAl(gonderen, mesaj);
}
