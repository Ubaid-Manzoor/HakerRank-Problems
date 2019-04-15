int countingValleys(int n, string s) {
    int Valleys = 0;
    int height = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'U'){
            if(height == -1){
                Valleys++;
            }
            height++;
        }else{
            height--;
        }
    }
    return Valleys;
}
