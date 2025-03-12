#include <iostream>
#include <array>

enum class ItemType {
    HealthPotion,
    Torch,
    Arrow,
    ItemCount Используется для определения размера массива
};

class Player {
public:
    Player() {
        items[static_cast<int>(ItemType::HealthPotion)] = 2;  2 зелья здоровья
        items[static_cast<int>(ItemType::Torch)] = 5;         5 факелов
        items[static_cast<int>(ItemType::Arrow)] = 10;        10 стрел
    }

    int countTotalItems() const {
        int total = 0;
        for (const auto& item : items) {
            total += item;
        }
        return total;
    }

    int countTorches() const {
        return items[static_cast<int>(ItemType::Torch)];
    }

private:
    std::array<int, static_cast<int>(ItemType::ItemCount)> items{};
};

int main() {
    Player player;
    int totalItems = player.countTotalItems();
    int totalTorches = player.countTorches();

    std::cout << "Total items: " << totalItems << std::endl;
    std::cout << "Total torches: " << totalTorches << std::endl;

    return 0;
}
