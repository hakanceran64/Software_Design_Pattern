//
// Created by hakan on 03/12/2022.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H

#include <iostream>

using namespace std;

class Singleton {
private:
    static Singleton *mp_Smp;
    int m_object_count{};
    int m_data{};

protected:
    Singleton();

public:
    static Singleton *CreateObject();
    ~Singleton();
    void setData(int val);
    int getData() const;

};


#endif //SINGLETON_SINGLETON_H
