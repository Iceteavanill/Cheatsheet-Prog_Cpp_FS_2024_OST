int main() {
    Subclass p;         // Klassenerstellung
    p.print();          // print von Subclass, ok
    Subclass* sPtr = &p;// Subclass Pointer
    sPtr->print();      // print von Subclass, ok
    Topclass* tPtr = &p;// !! Topclass Pointer !! 
    pPtr->print();      // print von Topclass!!!!!!
    Subclass& sRef = p; // Subclass ref
    sRef.print();       // print von Subclass, ok
    Topclass& tRef = p; // !! Topclass ref !!
    pRef.print();       // print von Topclass!!!!!!
}