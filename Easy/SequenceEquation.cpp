vector<int> permutationEquation(vector<int> p) {
    unordered_map<int,int> value_index;
    vector<int> result;
    int i = 1;
    for(auto x:p){
        value_index[x] = i;
        i++;
    }

    for(int i=1 ; i <= p.size() ; i++){
        int index = value_index[i];
        int result_value = value_index[index];
        result.push_back(result_value);
    }
    return result;
}
