// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> pair_count;
    int total_count = 0;

    for(auto x:ar){
        if(pair_count.find(x) == pair_count.end()){
            pair_count[x] = 1;
        }else{
            pair_count[x] += 1;
        }
    }

    for(auto pair:pair_count){
        pair_count[pair.first] = pair_count[pair.first]/2;
    }

    for(auto pair:pair_count){
        total_count += pair.second;
    }
    return total_count;
}
