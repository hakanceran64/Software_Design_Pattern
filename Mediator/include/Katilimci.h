/**
 * @file Katilimci.h
 * @author Hakan CERAN
 * @date 06.12.2022
 * @brief
 * @note
 */

#ifndef MEDIATOR_KATILIMCI_H
#define MEDIATOR_KATILIMCI_H

#include <string>
#include <iomanip>

using namespace std;

// Soyut Colleague
class Katilimci {
private:
    string nick;

protected:
    explicit Katilimci(const string &nick);

public:
    [[nodiscard]] const string &getNick() const;
    void setNick(const string &value);
    virtual void MesajAl(Katilimci *gonderici, const string &mesaj) = 0;
};

#endif //MEDIATOR_KATILIMCI_H
