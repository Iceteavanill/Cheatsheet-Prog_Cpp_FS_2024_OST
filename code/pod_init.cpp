// Zuweisung fuer POD:

int i; // Speicher fuer Instanz wird alloziert, Wert ist noch uninitialisiert
i = 5; // Wert (der an anderer Stelle im Speicher stehen muss) wird zugewiesen

// Initialisierung fuer POD:

int i = 5; // Instanz wird mit Wert 5 in den Speicher gelegt (C-Style)
int i(5); // Instanz wird mit Wert 5 in den Speicher gelegt (C++-Style bis C++11)
int i{5}; // Instanz wird mit Wert 5 in den Speicher gelegt (neuer C++-Style)
// Aus Effizienzgruenden bevorzugen wir (fast) immer die (direkte) Initialisierung!
