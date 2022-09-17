
import java.util.Arrays;

public class Solution {

    public int matchPlayersAndTrainers(int[] players, int[] trainers) {

        Arrays.sort(players);
        Arrays.sort(trainers);

        int indexPlayers = 0;
        int indexTrainers = 0;
        int totalMatchesPlayersAndTrainers = 0;

        while (indexPlayers < players.length && indexTrainers < trainers.length) {
            if (players[indexPlayers] <= trainers[indexTrainers++]) {
                ++totalMatchesPlayersAndTrainers;
                ++indexPlayers;
            }
        }
        return totalMatchesPlayersAndTrainers;
    }
}
