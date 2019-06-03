long long int taumBday(long long int b,long long int w,long long int bc,long long int wc,long long int z) {
    long long int cost;
    if(bc==wc){
         cost = b*bc + w*wc;
    }else{
        if(abs(bc - wc) > z){//Use Conversion
            if(bc > wc){
               cost = (wc*w) + (b * (wc+z));
            }else{
                cost = (bc*b) + (w * (bc+z));
            }
        }else{//Dont Use Conversion
            cost = b*bc + w*wc;
        }

    }
    return cost;
}
