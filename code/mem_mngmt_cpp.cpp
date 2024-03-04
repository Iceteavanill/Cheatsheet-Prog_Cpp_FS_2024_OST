
int main(){
    int* intPtr = new int;
    //Allokiert fuer den intPtr ein speicherbereich eines Ints
    int* intArrayPtr = new int[10];
    //Allokiert fuer den intPtr ein speicherbereich eines Int Array der groesse 10
    if(intPtr == nullptr) return-1;//Nullpointercheck
    delete intPtr;
    //Gibt intPtr wieder frei
    delete[] intArrayPtr;
    //Gibt intArrayPtr wieder frei
}
