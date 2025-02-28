//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
//Then print the respective minimum and maximum values as a single line of two space-separated long integers.
//Input: A single line of five space-separated integers.

void miniMaxSum(int arr_count, int* arr) {    
    
    long long max = 0;
    long long min = 0;
    
    max = arr[0];
    min = arr[0];

    for(int i = 0; i < arr_count; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    long long minsum = 0;
    long long maxsum = 0;
    
    for(int i = 0; i < arr_count; i++){
        minsum += arr[i];
    }
    maxsum = minsum;    
    minsum -= max;
    maxsum -= min;
    
    printf("%lld ", minsum);
    printf("%lld", maxsum);


}
