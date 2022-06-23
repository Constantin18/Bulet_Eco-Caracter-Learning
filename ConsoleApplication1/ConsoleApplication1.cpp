#include <iostream>

using std::string;

class Bulet_Eco {
private :

    string Name;
    int HP;
    int Armor;
    string Wapon;
    string Abiliti1;
    string Abiliti2;
    int Damage;

public:
   
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setHP(int hp) {
        HP = hp;
    }
    int getHP() {
        return HP;
    }

    void setArmor(int armor) {
        Armor = armor;
    }
    int getArmor() {
        return Armor;
    }

    void setWapon(string wapon) {
        Wapon = wapon;
    }
    string getWapon() {
        return Wapon;
    }

    void setAbiliti1(string abiliti1) {
        Abiliti1 = abiliti1;
    }
    string getAbiliti1() {
        return Abiliti1;
    }

    void setAbiliti2(string abiliti2) {
        Abiliti2 = abiliti2;
    }
    string getAbiliti2() {
        return Abiliti2;
    }

    void setDamage(int damage) {
        Damage = damage;
    }
    int getDamage() {
        return Damage;
    }


    Bulet_Eco (string name, int hp, int armor, string wapon, string abiliti1, string abiliti2, int damage) {

        Name = name;
        HP = hp;
        Armor = armor;
        Wapon = wapon;
        Abiliti1 = abiliti1;
        Abiliti2 = abiliti2;
        Damage = damage;

    }
    
    void caracter() {

        std::cout << "Caracter name : " << Name << std::endl;
        std::cout << "Caracter stats : " << std::endl;
        std::cout << "His HP is : " << HP << std::endl;
        std::cout << "His Damage is : " << Damage << std::endl;
        std::cout << "His armor is :" << Armor << std::endl;
        std::cout << "His wapon is : " << Wapon << std::endl;
        std::cout << "His first abiliti is : " << Abiliti1 << std::endl;
        std::cout << "His second abiliti is : " << Abiliti2 << std::endl;

    }
   
};

 int main() {

    string alegere;
    std::cout << "What caracter do you like to learn about? " << std::endl;
    std::cin >> alegere;
    Bulet_Eco Bastion = Bastion;
    Bastion.setName("Bastion");
    Bastion.setWapon("Submachine gun");
    Bastion.setDamage(120);
    Bastion.setAbiliti1("Shield");
    Bastion.setAbiliti2("Bandage");
    Bastion.setHP(2000);
    Bastion.setArmor(3000);

    Bulet_Eco Raven = Raven;
    Raven.setName("Raven");
    Raven.setWapon("SMG");
    Raven.setDamage(150);
    Raven.setAbiliti1("Scan");
    Raven.setHP(300);
    Raven.setArmor(250);
    Raven.setAbiliti2("Seringe");

    Bulet_Eco Blot = Blot;


    if (alegere == "Raven") {
        Raven.caracter();
    }
    if (alegere == "Bastion") {
        Bastion.caracter();
    }
    else {
        std::cout << "You write caracter's name wrong! Try again.";
    }
    return 0;

}