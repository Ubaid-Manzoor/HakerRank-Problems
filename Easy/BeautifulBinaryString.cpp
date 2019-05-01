int beautifulBinaryString(string givenString){
    int TotalChanges = 0;
    for(int i = 0 ; i < givenString.size() ; i++){
        //Three Position To Check
        if(givenString[i] == '0' && givenString[i+1] == '1' && givenString[i+2] == '0'){
            givenString[i+2] = '1';
            i = i + 2;
            TotalChanges++;
        }
    }
    return TotalChanges;
}

