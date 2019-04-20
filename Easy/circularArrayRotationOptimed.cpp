vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    if(k > a.size()){
        k = k - a.size()*(k/a.size()); 
    }
    for(int i = 0 ; i < queries.size() ; i++){
        queries[i] = a[((queries[i]-k)+a.size())%a.size()];
    }
    return queries;
}
