/*
 * @Author:
 * @Date:
 * @Content: Singleton tasar�m deseni:
 *           bir s�n�f�n somutla�t�r�lmas�n� tek bir nesneyle s�n�rlamak i�in kullan�lan bir yaz�l�m tasar�m ilkesidir.
 */

#include <iostream>

using namespace std;

class Singleton {
	private:
		static Singleton *instance;
		int data;
		
		// private constructor so that no object can be created
		Singleton(){
			data = 0;
		}

	public:
		static Singleton *getInstance() {
			if(!instance) {
				instance = new Singleton;
			}
			
			return instance;
		}
		
		int getData() {
			return this -> data;
		}
		
		void setData(int data) {
			this -> data = data;
		}
};

// Initialize pointer to zero so that it can be initialized in first call to getInstance.
Singleton *Singleton::instance = 0;

int main(){
	
	Singleton *s = s -> getInstance();
	
	cout << s -> getData() << endl;
	
	s -> setData(100);
	
	cout << s -> getData() << endl;
	
	return 0;
}
