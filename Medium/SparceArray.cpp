vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result(queries.size(),0);
    for(int i = 0 ; i < queries.size() ; i++){
        for(int j = 0 ; j < strings.size() ; j++){
            if(queries[i] == strings[j]){
                result[i] += 1;
            }
        }
    }
    return result;
}
