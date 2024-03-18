
// Mitarbeiter m;
// Vorsicht: Falls sizeof(Mitarbeiter) gross ist, muss hier viel kopiert werden:
m = stefan;

// Initialisierung fuer non-POD:
Mitarbeiter m = stefan; //Copy-Initialisierung (copy ctor)
Mitarbeiter m(stefan); //Copy-Initialisierung, C++-Schreibweise
Mitarbeiter m{stefan}; //Copy-Initialisierung, bevorzugte C++-Schreibweise seit c++11, aber: noch immer muss kopiert werden!

//Besser: direkte Initialisierung auch fuer non-PODs:
Mitarbeiter m("Stefan Melcher", 182.0, 23, 12, 2003); // (vor C++11)
Mitarbeiter m{"Stefan Melcher", 182.0, 23, 12, 2003}; // bevorzugte Schreibw. seit C++11
// Die Instanz wird ohne Umwege mit den gewuenschten Werten in den Speicher geschrieben, sofern ein geeigneter user-defined ctor vorhanden ist!