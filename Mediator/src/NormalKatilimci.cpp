/**
 * @file NormalKatilimci.cpp
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#include "../include/NormalKatilimci.h"
#include <iostream>

using namespace std;

NormalKatilimci::NormalKatilimci(const string &nick) : Katilimci(nick) {

}

void NormalKatilimci::MesajAl(Katilimci *gonderici, const string &mesaj) {
    cout << left << setfill(' ') << setw(28) << "NormalKatilimci::MesajAl";
    cout << left << setfill(' ') << setw(15) << gonderici->getNick();
    cout << left << setfill(' ') << setw(4) << "->";
    cout << left << setfill(' ') << setw(15) << this->getNick();
    cout << " : " << mesaj << endl;
}
