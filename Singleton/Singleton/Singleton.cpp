//
// Created by hakan on 03/12/2022.
//

#include "Singleton.h"

Singleton *Singleton::mp_Smp = nullptr;

Singleton::Singleton() {
    cout << "Singleton Constructor: " << m_object_count++ << endl;
}

Singleton *Singleton::CreateObject() {
    if (mp_Smp == nullptr) {
        mp_Smp = new Singleton();
    }

    return mp_Smp;
}

Singleton::~Singleton() {
    cout << "Singleton Destructor" << endl;
}

void Singleton::setData(int val) {
    m_data = val;
}

int Singleton::getData() const {
    return m_data;
}
