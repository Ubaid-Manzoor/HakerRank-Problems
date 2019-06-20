int designerPdfViewer(vector<int> h, string word) {
    int max_height;
    for(int i = 0 ; i < word.size() ; i++){
        int index = (int)word[i] % 97;
        if(i == 0){
            max_height = h[index];
        }else{
            if(max_height < h[index]){
                max_height = h[index];
            }
        }
    }
    return max_height * word.size();
}
