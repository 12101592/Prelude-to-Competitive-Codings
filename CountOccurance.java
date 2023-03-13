public class CountOccurance {

    static int occurance(int arr[], int occ){
        int count=0;
         for(int i=0;i<arr.length;i++){
             if(arr[i]==occ)
                      count++;
         }
         return count;
    }
    public static void main(String[] args) {
        int arr[]={2,3,4,2,6,2,9,2,2,3};
        int occ=3;
      int result=occurance(arr, occ);
      System.out.println("Occurance: "+result);

    }
}
