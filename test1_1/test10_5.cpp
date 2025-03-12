#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <random>

 Перечисления для мастей и рангов карт
enum class CardSuit {
    suit_club,
    suit_diamond,
    suit_heart,
    suit_spade,
    max_suits
};

enum class CardRank {
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_jack,
    rank_queen,
    rank_king,
    rank_ace,
    max_ranks
};

Структура для карты
struct Card {
    CardRank rank;
    CardSuit suit;
};

 Функция для создания колоды карт
std::array<Card, 52> createDeck() {
    std::array<Card, 52> deck;
    int index = 0;

    for (int suit = 0; suit < static_cast<int>(CardSuit::max_suits); ++suit) {
        for (int rank = 0; rank < static_cast<int>(CardRank::max_ranks); ++rank) {
            deck[index].rank = static_cast<CardRank>(rank);
            deck[index].suit = static_cast<CardSuit>(suit);
            index++;
        }
    }

    return deck;
}

Функция для получения стоимости карты
int getCardValue(const Card& card) {
    switch (card.rank) {
        case CardRank::rank_2: return 2;
        case CardRank::rank_3: return 3;
        case CardRank::rank_4: return 4;
        case CardRank::rank_5: return 5;
        case CardRank::rank_6: return 6;
        case CardRank::rank_7: return 7;
        case CardRank::rank_8: return 8;
        case CardRank::rank_9: return 9;
        case CardRank::rank_10:
        case CardRank::rank_jack:
        case CardRank::rank_queen:
        case CardRank::rank_king: return 10;
        case CardRank::rank_ace: return 11; Туз считается 11 для упрощения
        default: return 0;
    }
}

Функция для перетасовки колоды
void shuffleDeck(std::array<Card, 52>& deck) {
    static std::random_device rd;
    static std::mt19937 generator(rd());
    std::shuffle(deck.begin(), deck.end(), generator);
}

Функция для игры в блэкджек
bool playBlackjack(std::array<Card, 52>& deck) {
    int playerScore = 0;
    int dealerScore = 0;
    int cardIndex = 0;

   Дилер получает одну карту
    dealerScore += getCardValue(deck[cardIndex]);
    cardIndex++;

   Игрок получает две карты
    playerScore += getCardValue(deck[cardIndex]);
    cardIndex++;
    playerScore += getCardValue(deck[cardIndex]);
    cardIndex++;

    std::string action;
    while (true) {
        std::cout << "Ваш счет: " << playerScore << ". Введите 'hit' для получения карты, или 'stand' для завершения: ";
        std::cin >> action;

        if (action == "hit") {
            playerScore += getCardValue(deck[cardIndex]);
            cardIndex++;
            if (playerScore > 21) {
                std::cout << "Вы превысили 21. Вы проиграли!" << std::endl;
                return false;
            }
        } else if (action == "stand") {
            break;
        } else {
            std::cout << "Некорректный ввод. Пожалуйста, введите 'hit' или 'stand'." << std::endl;
        }
    }

    Дилер игнорирует карты, пока не наберет 17 или более
    while (dealerScore < 17) {
        dealerScore += getCardValue(deck[cardIndex]);
        cardIndex++;
    }

    std::cout << "Дилерский счет: " << dealerScore << std::endl;

    if (dealerScore > 21) {
        std::cout << "Дилер превысил 21. Вы выиграли!" << std::endl;
        return true;
    }

    if (playerScore > dealerScore) {
        std::cout << "Вы выиграли!" << std::endl;
        return true;
    } else {
        std::cout << "Вы проиграли!" << std::endl;
        return false;
    }
}

Основная функция
int main() {
    auto deck = createDeck();
    shuffleDeck(deck);

    std::cout << "Начинаем игру в блэкджек!" << std::endl;
    playBlackjack(deck);

    return 0;
}
