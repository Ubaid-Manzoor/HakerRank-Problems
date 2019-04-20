int utopianTree(int n) {
    int result=1;
    for(int i = 0 ; i < n ;){
        result = 2*result;
        i++;
        if(i < n){
            result += 1;
            i++;
        }  
    }
    return result;
}
