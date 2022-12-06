/**
 * @file Katilimci.cpp
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#include "../include/Katilimci.h"

Katilimci::Katilimci(const string &nick) {
    this->nick = nick;
}

const string &Katilimci::getNick() const {
    return nick;
}

void Katilimci::setNick(const string &value) {
    nick = value;
}
