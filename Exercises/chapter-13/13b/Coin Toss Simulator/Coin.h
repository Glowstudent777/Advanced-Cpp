#ifndef COIN_H
#define COIN_H

#include <cstdint>
#include <chrono>

enum Sides
{
    HEADS = 0,
    TAILS = 1
};

class Coin
{
private:
    Sides side;

    uint64_t state;
    uint64_t inc;

    // Using random stuff from pcg-random.org
    uint32_t pcg32_random()
    {
        uint64_t oldstate = state;
        state = oldstate * 6364136223846793005ULL + (inc | 1);
        uint32_t xorshifted = ((oldstate >> 18u) ^ oldstate) >> 27u;
        uint32_t rot = oldstate >> 59u;
        return (xorshifted >> rot) | (xorshifted << ((-rot) & 31));
    }

    // Seed for the random number generator
    static uint64_t time_seed()
    {
        return static_cast<uint64_t>(
            std::chrono::high_resolution_clock::now().time_since_epoch().count());
    }

public:
    Coin()
    {
        uint64_t seed = time_seed();
        state = seed;
        inc = seed ^ 0xda3e39cb94b95bdbULL;

        toss();
    };

    const char *getSideUp() const
    {
        static const char *sides[] = {"Heads", "Tails"};
        return sides[side];
    };

    void toss()
    {
        side = (pcg32_random() % 2 == 0) ? HEADS : TAILS;
    };
};

#endif