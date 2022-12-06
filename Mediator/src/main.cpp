/**
 * @file main.cpp
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief Mediator Design Pattern
 * @note
 */

#include <iostream>
#include "../include/Katilimci.h"
#include "../include/NormalKatilimci.h"
#include "../include/Moderator.h"
#include "../include/YazilimOdasi.h"

using namespace std;

int main() {
    Katilimci *k1 = new NormalKatilimci("Hakan");
    Katilimci *k2 = new NormalKatilimci("Serdar");
    Katilimci *k3 = new NormalKatilimci("Aykut");
    Katilimci *k4 = new NormalKatilimci("Muhammed");
    Katilimci *k5 = new Moderator("Yunus Emre");
    Katilimci *moderator = new Moderator("Moderator");
    Katilimci *normalKatilimci = new NormalKatilimci("Normal");

    auto *oda1 = new YazilimOdasi();
    oda1->KatilimciEkle(k1);
    oda1->KatilimciEkle(k2);
    oda1->KatilimciEkle(k3);
    oda1->KatilimciEkle(k4);
    oda1->KatilimciEkle(k5);
    oda1->KatilimciEkle(moderator);
    oda1->KatilimciEkle(normalKatilimci);

    cout << endl << "Broadcast called." << endl;
    oda1->BroadcastMesajGonder(k5, "Herkese Merhaba");

    cout << endl << "MesajGonder called." << endl;
    oda1->MesajGonder(k1, k3, "K1'den K3'e");
    oda1->MesajGonder(k3, k1, "K3'den K1'e");
    oda1->MesajGonder(k2, k1, "K2'den K1'e");
    oda1->MesajGonder(k1, k2, "K1'den K2'e");
    oda1->MesajGonder(moderator, normalKatilimci, "Moderatorden Normal");
    oda1->MesajGonder(normalKatilimci, moderator, "Normal'den Moderator");

    delete k1;
    delete k2;
    delete k3;
    delete k4;
    delete k5;
    delete moderator;
    delete normalKatilimci;

    return 0;
}
