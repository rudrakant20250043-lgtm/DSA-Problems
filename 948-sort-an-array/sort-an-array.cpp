class Solution {
public:

int partition(vector<int>&arr,int low,int high){ 
     int pivotIndex = low + rand() % (high - low + 1);

        swap(arr[pivotIndex], arr[high]);
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high;j++){
        if(arr[j]<pivot){
            i++;
             swap(arr[i],arr[j]);
        } 
       
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
    void quicksort(vector<int>&arr,int low,int high) {
        if(low>=high)
        return;
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    } 
    vector<int> sortArray(vector<int>&nums){
        quicksort(nums,0,nums.size()-1);
        return nums;
    }
};