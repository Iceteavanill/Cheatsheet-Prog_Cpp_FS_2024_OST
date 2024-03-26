void func(int a = 0, int b = 0, int c = 0){}
func();
func(0);
func(0, 0);
func(0, 0, 0);
//Alle Funktionsaufrufe valide

void func2(int a, int b = 0, int c = 0);//korrekte Reihenfolge