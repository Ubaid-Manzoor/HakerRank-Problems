int max_ele(vector<int> v){
    int max = v[0];

    for(auto x:v){
        if(max < x){
            max = x;
        }
    }
    return max;
}
// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {
    int max = max_ele(height);
    if(k >= max){
        return 0;
    }
    return max-k;

}
