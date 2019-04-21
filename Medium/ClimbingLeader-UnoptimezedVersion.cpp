int getPosition(vector<int> scores , int currentScore , int StartingPostion){
    if (currentScore < scores[scores.size()-1]){
        return scores.size();
    }
    for (int i = StartingPostion; i >= 0; i--) {
        if (currentScore < scores[i]) {
            return i + 1;
        } else if (currentScore == scores[i]) {
            return i;
        }
    }
    return 0; // Will Never Reach Here
}

void setRanking(vector<int> scores ,unordered_map<int , int>& RankingMap ){
    int previousScore = scores[0];
    RankingMap[0] = 1;
    for(int i = 0 ; i < scores.size() ; i++){
        if(i != 0){
            if(scores[i] < previousScore){
                RankingMap[i] = RankingMap[i-1]+1;
                previousScore = scores[i];
            }else{
                RankingMap[i] = RankingMap[i-1];
            }
        }
    }
}

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    vector<int> PositionVec;
    unordered_map<int , int> RankingMap;
    setRanking(scores , RankingMap);
    int currentPosition = scores.size()-1;
    for(int i = 0 ; i < alice.size() ; i++){
        int position = getPosition(scores , alice[i] , currentPosition);
        if(position != scores.size()){
          currentPosition = position;
          PositionVec.push_back(RankingMap[position]);
        }else{
          PositionVec.push_back(RankingMap[position-1]+1);
        }
    }
    return PositionVec;
}
