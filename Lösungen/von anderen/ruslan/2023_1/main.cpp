#include "Concert.h"

int main()
{
    // Create a new concert
    // C = CatSong
    // D = DogSong
    // R = RoosterSong
    Concert concert = Concert("DDDDCR");

    // Let the band play
    int score = concert.play();

    // Print final score, value in parenthesis is the expected score
    std::cout << "The band reached a score of " << score << " (7) "<< std::endl;

    concert = Concert("DDD");
    score = concert.play();
    std::cout << "The band reached a score of " << score << " (3) "<< std::endl;

    concert = Concert("CCC");
    score = concert.play();
    std::cout << "The band reached a score of " << score << " (15) "<< std::endl;

    concert = Concert("R");
    score = concert.play();
    std::cout << "The band reached a score of " << score << " (3) "<< std::endl;

    concert = Concert("DRC");
    score = concert.play();
    std::cout << "The band reached a score of " << score << " (8) "<< std::endl;

    concert = Concert("RRR");
    score = concert.play();
    std::cout << "The band reached a score of " << score << " (0) "<< std::endl;

    concert = Concert("CDC");
    score = concert.play();
    std::cout << "The band reached a score of " << score << " (8) "<< std::endl;

    return 0;
}
