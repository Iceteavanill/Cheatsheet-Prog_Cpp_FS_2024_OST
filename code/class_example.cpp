#include <string>//Stl Strings
class Student {
    public:
        int IDNumber;
        void doStuff(int time = 0);
    private:
        std::string name;//String
        float bierkonsum;
        unsigned long long int investedHoursInET;
};

// ------ start cpp ------
//implementierung der doStuff Funktion
void Student::doStuff(int time = 0) {  
    //ToDo
} 

int main(){
    Student typETStudent;//instanz erzeugen
    typETStudent.IDNumber = 1;//Attribute veraendern
    typETStudent.doStuff();//Methode rufen
    return 0;
}