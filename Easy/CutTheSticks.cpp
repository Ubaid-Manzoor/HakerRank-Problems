void removeAll(vector<int>& a , int valueToRemove){
    vector<int>::iterator it_end;
    it_end = remove(a.begin() , a.end() , valueToRemove);
    while(it_end != a.end()){
        a.pop_back();
    }
}

vector<int> cutTheSticks(vector<int> sticks) {
    vector<int> answer;

    while(!sticks.empty()){
        vector<int>::iterator it_min;
        it_min = min_element(sticks.begin() , sticks.end());
        int min_value = *it_min;

        answer.push_back(sticks.size());
        removeAll(sticks , *it_min);

        for(vector<int>::iterator it = sticks.begin() ; it < sticks.end() ; it++){
            *it -= min_value;
        }
    }
     return answer;
}
