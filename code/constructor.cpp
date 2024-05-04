#include <iostream>
class storage{
    public:
        storage();
        virtual ~storage();
        void add(int in);
        void nix(storage inC);
    private:
        int* data;
        int size;
};//eine Klasse die Int Werte speichert, aehnlich wie ein array

// ---- End h File

storage::storage(){//Konstruktor
    data = nullptr;
    size = 0;
}



storage::~storage(){//Destruktor
    delete[] data;
    data = nullptr;
    size = 0;//Speicher der allokiert wurde sollte hier freigegeben werden
}
void storage::add(int in){
    //todo
}
void storage::nix(storage inC){
    //todo
}

// ---- End cpp File

int main(){

    storage* i1 = new storage;//default konstruktor
    storage i2;//default konstruktor
    i1->nix(i2);//Call-by-Value. Eine Kopie von i2 wird auf den Stack gelegt -> Copy-Konstruktor!
    
    delete i1;//destruktor von i1 wird explizit aufgerufen
    return;//destruktor von i2 wird implizit aufgerufen
}