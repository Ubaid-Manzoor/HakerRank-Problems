vector<int> closestNumbers(vector<int> arr){
    sort(arr.begin() , arr.end());
    vector<int> result;
    int min_diff;
    for(int i = 0 ; i < arr.size()-1 ; i++){
        int current_diff = abs(arr[i] - arr[i+1]);
        if(i == 0 ){
            min_diff = current_diff;
            result.push_back(arr[i]);
            result.push_back(arr[i+1]);
        }else{
            if(current_diff < min_diff){
                min_diff = current_diff;
                result.clear();
                result.push_back(arr[i]);
                result.push_back(arr[i+1]);
            }else if(current_diff == min_diff){
                result.push_back(arr[i]);
                result.push_back(arr[i+1]);
            }
        }
    }
    return result;
}

