// Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.
// The first line contains an integer,n, the size of the array.The second line contains n space-separated integers that describe arr[n].

void plusMinus(int arr_count, int* arr) {
    
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    for(int i = 0; i < arr_count; i++){
        if(arr[i] < 0){
            negative++;
        }
        if(arr[i] == 0){
            zero++;
        }
        if(arr[i] > 0){
            positive++;
        }
    }
    float positive_ratio = 0;
    float negative_ratio = 0;
    float zero_ratio = 0;
    
    if(positive != 0){
        positive_ratio = (float)positive/arr_count;  
    }else{
        positive_ratio = 0;
    }
     if(negative != 0){
        negative_ratio = (float)negative/arr_count;  
    }else{
        negative_ratio = 0;
    }
     if(zero != 0){
        zero_ratio = (float)zero/arr_count;  
    }else{
        zero_ratio = 0;
    }
    printf("%f\n", positive_ratio);
    printf("%f\n", negative_ratio);
    printf("%f\n", zero_ratio);

}
