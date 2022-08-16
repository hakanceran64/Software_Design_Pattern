/*
 * @Author: Hakan CERAN
 * @Date: 17.08.2022
 * @Content Singleton Example
 */

#include <iostream>

using namespace std;

class Sample{
	private:
		static Sample *mp_Smp;
		int m_Data;
	
	protected:
		Sample(void);
	
	public:
		// Singleton nesne yaratıcı fonksiyon
		static Sample* CreateObject(void);
		void SetData(int val);
		int GetData(void);
};

Sample::Sample(void){
	// Default constructor
}

Sample* Sample::mp_Smp = 0;

Sample* Sample::CreateObject(void){
	if(mp_Smp == 0){
		mp_Smp = new Sample();
	}
	
	return mp_Smp;
}

void Sample::SetData(int val){
	m_Data = val;
}

int Sample::GetData(void){
	return m_Data;
}

// Test
int main(int argc, char *argv[]){
	
	Sample *obj1 = Sample::CreateObject();
	Sample *obj2 = Sample::CreateObject();
	Sample *obj3 = Sample::CreateObject();
	
	obj1 -> SetData(7877);
	
	cout << "obj1 Data: " << obj1 -> GetData() << endl;
	cout << "obj2 Data: " << obj2 -> GetData() << endl;
	cout << "obj3 Data: " << obj3 -> GetData() << endl;
	cout << endl << endl;
	
	obj2 -> SetData(1999);
	
	cout << "obj1 Data: " << obj1 -> GetData() << endl;
	cout << "obj2 Data: " << obj2 -> GetData() << endl;
	cout << "obj3 Data: " << obj3 -> GetData() << endl;
	
	return 0;
}

