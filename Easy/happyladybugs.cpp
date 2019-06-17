string happyLadybugs(string b) {
    string ishappy = "YES";
    unordered_map<string , int> remember;
    for(int i = 0 ; i < b.length() ; i++){
        string c(1,b[i]);
        cout<<c<<" ";
        if(remember.find(c) == remember.end()){
            remember[c] = 1;
        }else{
            remember[c] += 1;
        }
    }
    if(remember.find("_") == remember.end()){
        for(int i = 1 ; i < b.length() ; i++){
            if(!(b[i] == b[i-1] || b[i] == b[i+1]) ){
                ishappy = "NO";
                return ishappy;
            }
        }
    }
    for(auto value:remember){
        if(value.first != "_" && value.second == 1){
            ishappy = "NO";
            return ishappy;
        }
    }
    return ishappy;
}

