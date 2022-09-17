
#include <vector>
using namespace std;

class Solution {
    
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

        //C++20: std::ranges::sort(players); std::ranges::sort(trainers);
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int indexPlayers = 0;
        int indexTrainers = 0;
        int totalMatchesPlayersAndTrainers = 0;

        while (indexPlayers < players.size() && indexTrainers < trainers.size()) {
            if (players[indexPlayers] <= trainers[indexTrainers++]) {
                ++totalMatchesPlayersAndTrainers;
                ++indexPlayers;
            }
        }
        return totalMatchesPlayersAndTrainers;
    }
};
