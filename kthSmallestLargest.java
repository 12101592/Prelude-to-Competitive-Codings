import java.util.Arrays;

public class KthSmallest {
   static int kthsmall(Integer[] arr,int len){

        Arrays.sort(arr);

         return arr[0];
       
    }
    public static void main(String[] args) {

        Integer arr[]= new Integer[]{10,20,30,40,50,60,90};
    int len= arr.length;
    System.out.println(len);
       int res= kthsmall(arr,len);
         System.out.println("Kth Smallest:"+res);
         System.out.println("Kth Largest :"+arr[len-1]);
    }
    
}
