

// Sasha decided to give his girlfriend the best handbag, but unfortunately for Sasha, it is very expensive. Therefore, Sasha wants to earn it. After looking at earning tips on the internet, he decided to go to the casino.

// Sasha knows that the casino operates under the following rules. If Sasha places a bet of 𝑦 coins (where 𝑦 is a positive integer), then in case of winning, he will receive 𝑦⋅𝑘 coins (i.e., his number of coins will increase by 𝑦⋅(𝑘−1)). And in case of losing, he will lose the entire bet amount (i.e., his number of coins will decrease by 𝑦).

// Note that the bet amount must always be a positive (>0) integer and cannot exceed Sasha's current number of coins.

// Sasha also knows that there is a promotion at the casino: he cannot lose more than 𝑥 times in a row.

// Initially, Sasha has 𝑎 coins. He wonders whether he can place bets such that he is guaranteed to win any number of coins. In other words, is it true that for any integer 𝑛, Sasha can make bets so that for any outcome that does not contradict the rules described above, at some moment of time he will have at least 𝑛 coins.

// Input
// Each test consists of multiple test cases. The first line contains a single integer 𝑡 (1≤𝑡≤1000) — the number of test cases. The description of the test cases follows.

// The single line of each test case contains three integers 𝑘,𝑥 and 𝑎 (2≤𝑘≤30, 1≤𝑥≤100, 1≤𝑎≤109) — the number of times the bet is increased in case of a win, the maximum number of consecutive losses, and the initial number of coins Sasha has.

// Output
// For each test case, output "YES" (without quotes) if Sasha can achieve it and "NO" (without quotes) otherwise.

// You can output "YES" and "NO" in any case (for example, the strings "yEs", "yes" and "Yes" will be recognized as a positive answer).


#include <iostream>
#define ll long long
#define YES std::cout << "Yes" << std::endl
#define NO std::cout << "No" << std::endl

void fastio() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

// void solve() {
//     ll k, x, a;
//     std::cin >> k >> x >> a;
//     ll bet = 1;
//     for(int i = 0; i < x; i++) {
//         bet += (bet / (k - 1)) + 1;
//         if(bet > a) {
//             NO;
//             return;
//         }
//     }
//     YES;
// }

int main() {
    fastio();
    ll t = 1;
    std::cin >> t;
    for(int i = 1; i <= t; i++) {
        ll k, x, a;
        std::cin >> k >> x >> a;
        ll bet = 1;
        for(int i = 0; i < x; i++) {
            bet += (bet / (k - 1)) + 1;
            if(bet > a) {
                NO;
                return 0;
            }
        }
        YES;
    }
    return 0;
}
