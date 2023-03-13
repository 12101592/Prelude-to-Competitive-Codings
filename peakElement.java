public class peakElement {
   static int Peak(int arr[], int len){
        if(len==1)
        return 0;
        if(arr[0]>=arr[1])
        return 0;
        if(arr[len-1]>=arr[len-2])
        return len-1;

        for(int i=1;i<len-1;i++){
        if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
        return i;
        }
        return 0;
    }
    public static void main(String[] args) {
        
int arr[]={1, 3, 20, 4, 1, 0};
int len= arr.length;
 int res=Peak(arr, len);
System.out.println("Peak Point: "+res);

    }
}
