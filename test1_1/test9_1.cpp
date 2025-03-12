#include <iostream>
#include <string>

enum class MonsterType {
    Ogre,
    Dragon,
    Orc,
    GiantSpider,
    Slime
};

struct Monster {
    MonsterType type;
    std::string name;
    int health;
};

void printMonster(const Monster& monster) {
    std::string typeName;
    
    switch (monster.type) {
        case MonsterType::Ogre:
            typeName = "Ogre";
            break;
        case MonsterType::Dragon:
            typeName = "Dragon";
            break;
        case MonsterType::Orc:
            typeName = "Orc";
            break;
        case MonsterType::GiantSpider:
            typeName = "Giant Spider";
            break;
        case MonsterType::Slime:
            typeName = "Slime";
            break;
    }

    std::cout << "This " << typeName << " is named " << monster.name 
              << " and has " << monster.health << " health." << std::endl;
}

int main() {
    Monster ogre = {MonsterType::Ogre, "Torg", 145};
    Monster slime = {MonsterType::Slime, "Blurp", 23};

    printMonster(ogre);
    printMonster(slime);

    return 0;
}
