#ifndef WEKTOR_H_
#define WEKTOR_H_


#include <iostream>
using namespace std;

template<class T>
class wektor{
private:
    T * tab;
    int rozmiar;
    int capacity;
    void allocate();
public:
    wektor();//
    wektor(wektor&){};//
    ~wektor();//
    void insert(T, int);
    void pop_back();//
    void push_back(T );//
    void erase(int, int);
    bool empty();//
    int size();//
    int Capacity();//
    T front();//
    T back();//
    wektor sort();
    T operator[](int it){return tab[it-1];}


    class Iterator{
		wektor& Wektor;
		int index;
	public:
		Iterator(wektor& wek) : Wektor(wek), index(0){}
		Iterator(wektor& wek, bool) : Wektor(wek), index(Wektor.rozmiar){}
		T operator*() const { return Wektor.tab[index]; }
		T operator++(){ return Wektor.tab[++index]; }
		T operator++(int){ return Wektor.tab[index++]; }
		Iterator& operator+=(int amount){
			index += amount;
			return *this;
		}
		bool operator==(const Iterator& iter) const{
			return index == iter.index;
		}
		bool operator!=(const Iterator& iter) const{
			return index != iter.index;
		}
	};
	Iterator begin(){ return Iterator(*this); }
	Iterator end(){ return Iterator(*this, true); }



};

template<class T>
wektor<T>::wektor(){
    rozmiar = 0;
    capacity = 5;
    tab = new T[capacity];
}

template<class T>
wektor<T>::~wektor(){
    delete [] tab;
}

template<class T>
void wektor<T>::push_back(T obj){
    if (rozmiar >= capacity){
        allocate();
        tab[rozmiar] = obj;
        rozmiar++;
    }
    else{
        tab[rozmiar] = obj;
        rozmiar++;
    }
}

template<class T>
void wektor<T>::pop_back(){
    if (rozmiar == 0){}
    else{
        tab[rozmiar] = NULL;
        rozmiar--;
    }
}

template<class T>
int wektor<T>::size(){
    return rozmiar;
}

template<class T>
T wektor<T>::front(){
    if (rozmiar == 0){
        return NULL;
    }
    else{
        return tab[0];
    }
}

template<class T>
T wektor<T>::back(){
    if (rozmiar == 0){
        return NULL;
    }
    else{
        return tab[rozmiar-1];
    }
}

template<class T>
bool wektor<T>::empty(){
    if (rozmiar == 0){
        return true;
    }
    else{
        return false;
    }
}

template<class T>
int wektor<T>::Capacity(){
    return capacity;
}

template<class T>
void wektor<T>::allocate(){
    T * temp;
    capacity = 2 * capacity;
    temp = new T[capacity];
    for (int i = 0; i < rozmiar; i++){
        temp[i] = tab[i];
    }
    delete [] tab;
    tab = temp;
}

template<class T>
void wektor<T>::insert(T obj, int iter){
    if (iter >= rozmiar){
        push_back(obj);
    }
    else{
        T * temp = new T [capacity];

    }
}

#endif
