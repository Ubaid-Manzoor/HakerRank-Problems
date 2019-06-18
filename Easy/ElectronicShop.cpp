int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max_till=-1;
    for(int i = 0 ; i < keyboards.size() ; i++ ){
        for(int j = 0 ; j < drives.size() ; j ++){
          if ( ((keyboards[i] + drives[j]) <= b) && (keyboards[i] + drives[j]) > max_till) {
            max_till = (keyboards[i] + drives[j]);
          }
        }
    }
    return max_till;
}
