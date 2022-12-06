/**
 * @file Oda.cpp
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#include "../include/Oda.h"

Oda::Oda() {
    katilimcilar = vector<Katilimci *>();
}

void Oda::KatilimciEkle(Katilimci *k) {
    katilimcilar.push_back(k);
}
