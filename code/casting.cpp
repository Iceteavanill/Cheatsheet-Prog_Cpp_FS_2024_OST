int i = 10; // set I to 10
const int& iRef = i; 
const_cast<int&>(iRef) = 12;// iRef is now 12

Oberklasse* a = new Unterklasse;
Unterklasse* b = static_cast<Unterklasse*>(a);
//dynamic_cast<Unterklasse*>(a) fuer Polymorphe klassen

int32_t a = reinterpret_cast<int64_t>(10.0);
//reinterprets float as a int32 

