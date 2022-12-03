#include "Singleton.h"

int main() {

    Singleton *test = Singleton::CreateObject();
    Singleton *test1 = Singleton::CreateObject();
    Singleton *test2 = Singleton::CreateObject();

    cout << "Test Get Data: " << test->getData() << endl;

    test->setData(12);

    cout << "Test 1: " << test1->getData() << endl;

    delete test;

    // Error: Null Address - Random Value
    cout << "Test 2: " << test2->getData() << endl;

    return 0;
}
