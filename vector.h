#ifndef __M_VECTOR__
#define __M_VECTOR__

template<class T = int, int N = 10>
class Vector {
	
	private:
		T* items;
		int size;
		
	public:
		Vector(int size): size(size) {
			items = new T[size];
		}
		
		Vector(): size(N) {
			items = new T[N];
		}
		
		~Vector() {
			delete[] items;
		}
	
};

#endif