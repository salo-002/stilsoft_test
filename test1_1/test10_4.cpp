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

 Функция для печати карты
void printCard(const Card& card) {
    std::string rankString;
    std::string suitString;

    Определяем строковое представление ранга
    switch (card.rank) {
        case CardRank::rank_2: rankString = "2"; break;
        case CardRank::rank_3: rankString = "3"; break;
        case CardRank::rank_4: rankString = "4"; break;
        case CardRank::rank_5: rankString = "5"; break;
        case CardRank::rank_6: rankString = "6"; break;
        case CardRank::rank_7: rankString = "7"; break;
        case CardRank::rank_8: rankString = "8"; break;
        case CardRank::rank_9: rankString = "9"; break;
        case CardRank::rank_10: rankString = "T"; break;
        case CardRank::rank_jack: rankString = "J"; break;
        case CardRank::rank_queen: rankString = "Q"; break;
        case CardRank::rank_king: rankString = "K"; break;
        case CardRank::rank_ace: rankString = "A"; break;
    }

   Определяем строковое представление масти
    switch (card.suit) {
        case CardSuit::suit_club: suitString = "C"; break;  трефы
        case CardSuit::suit_diamond: suitString = "D"; break;  бубны
        case CardSuit::suit_heart: suitString = "H"; break;  червы
        case CardSuit::suit_spade: suitString = "S"; break;  пики
    }

    std::cout << rankString << suitString << " ";
}

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

 Функция для печати колоды
void printDeck(const std::array<Card, 52>& deck) {
    for (const auto& card : deck) {
        printCard(card);
    }
    std::cout << std::endl;
}

// Функция для перетасовки колоды
void shuffleDeck(std::array<Card, 52>& deck) {
    static std::random_device rd;
    static std::mt19937 generator(rd());
    std::shuffle(deck.begin(), deck.end(), generator);
}

Функция для получения значения карты
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
        case CardRank::rank_10: return 10;
        case CardRank::rank_jack: return 10;
        case CardRank::rank_queen: return 10;
        case CardRank::rank_king: return 10;
        case CardRank::rank_ace: return 11;
        default: return 0;  Не должно возникать
    }
}

Основная функция
int main() {
    auto deck = createDeck();
    
    std::cout << "Исходная колода карт:" << std::endl;
    printDeck(deck);

    shuffleDeck(deck);

    std::cout << "Перетасованная колода карт:" << std::endl;
    printDeck(deck);

    return 0;
}
