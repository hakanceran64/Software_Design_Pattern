/**
 * @file Moderator.cpp
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#include "../include/Moderator.h"

Moderator::Moderator(const string &nick) : Katilimci(nick) {

}

void Moderator::MesajAl(Katilimci *gonderici, const string &mesaj) {
    cout << left << setfill(' ') << setw(28) << "Moderator::MesajAl";
    cout << left << setfill(' ') << setw(15) << gonderici->getNick();
    cout << left << setfill(' ') << setw(4) << "->";
    cout << left << setfill(' ') << setw(15) << this->getNick();
    cout << " : " << mesaj << endl;
}
