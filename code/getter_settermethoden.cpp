#include <string>
class Stuff{
    public:
    const std::string& getName() const;
    protected://erlaubt schreibenden Zugriff von Unterklassen
    void setName(const std::string& in);
    private:
    std::string name;//privates Attribut
};
const std::string& Stuff::getName() const{
    return name;
}
void Stuff::setName(const std::string& in){
    name = in;
}


