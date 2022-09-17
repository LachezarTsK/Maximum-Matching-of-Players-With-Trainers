
/**
 * @param {number[]} players
 * @param {number[]} trainers
 * @return {number}
 */
var matchPlayersAndTrainers = function (players, trainers) {

    players.sort((x, y) => x - y);
    trainers.sort((x, y) => x - y);

    let indexPlayers = 0;
    let indexTrainers = 0;
    let totalMatchesPlayersAndTrainers = 0;

    while (indexPlayers < players.length && indexTrainers < trainers.length) {
        if (players[indexPlayers] <= trainers[indexTrainers++]) {
            ++totalMatchesPlayersAndTrainers;
            ++indexPlayers;
        }
    }
    return totalMatchesPlayersAndTrainers;
};
