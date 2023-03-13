import java.util.Arrays;
import java.lang.*;

public class sort012 {
    
    static void sort12(int arr[],int len){
int low=0;
int high=len-1;
int mid=0,temp=0;

while(mid<=high){
    switch(arr[mid]){
        case 0:
        temp=arr[low];
        arr[low]=arr[mid];
        arr[mid]=temp;
         low++;
         mid++;
          break;
          case 1:
          mid++;
           break ;
           case 2:
            temp =arr[mid];
             arr[mid]= arr[high];
              arr[high]= temp;
               high--;
                break ;
    }       
    }
    }
static void printArray(int arr[] ,int len){
System.out.print("Sorted Arrays:");
for(int i=0;i<len;i++){
    System.out.print("  "+arr[i]);
}

}
    
    public static void main(String[] args) {
        
        int arr[]={1,0,2,1,0,2,2};
int len= arr.length;
    sort12(arr,len);  
    printArray(arr,len);  
    }
}
