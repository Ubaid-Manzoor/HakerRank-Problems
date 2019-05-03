int beautifulTriplet(int gap , vector<int> arr){
    unordered_map<int , int> freq;
    int TotalTriplets = 0;
    for(auto x:arr){
        if(freq.find(x) == freq.end()){
            freq[x] = 1;
        }else{
            freq[x]++;
        }
    }

    for(auto pair:freq){
        int req_num1 = pair.first+gap;
        int req_num2 = req_num1 + gap;

        if(freq.find(req_num1) == freq.end() || freq.find(req_num2) == freq.end()){
            continue;
        }else{
            TotalTriplets += freq[pair.first] * freq[req_num1] * freq[req_num2];
        }
    }
    return TotalTriplets;
}
