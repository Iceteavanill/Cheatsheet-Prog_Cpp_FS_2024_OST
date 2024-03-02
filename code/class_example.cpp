 #include <String>//Stl Strings
class Student {

    public:
        int IDNumber;
        void doStuff(int time = 0);
    private:

        std::string name;//String
        float bierkonsum;
        long int investedTimeInET;
};
//implementierung der doStuff Funktion
void Student::doStuff(int time = 0) {
    //ToDo
}

int main(){
    //instanz erzeugen
    Student typETStudent;
    //Attribute veraendern
    typETStudent.IDNumber = 1;
    //Methode rufen
    typETStudent.doStuff();
    return 0;
}