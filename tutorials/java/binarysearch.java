
public class binarysearch {
  public int iterativeBinarySearch(int[] arr, int low, int upp, int target) { 
    int mid; 
    while (low < upp) { 
      mid = low + (upp - low) / 2;
      if (target == arr[mid]) 
        return mid; 
      else if (target < arr[mid])
        upp = mid - 1;
      else 
        low = mid + 1; 
    }
    return -1; 
  }
  
  public int recursiveBinarySearch(int[] arr, int low, int upp, int target) { 
    int mid = low + (upp - low) / 2; 
    if (arr[mid] == target)
      return target; 
    else if (target > arr[mid])
      return recursiveBinarySearch(arr, mid + 1, upp, target);
    else 
      return recursiveBinarySearch(arr, low, mid - 1, target);
  }
  
  public void run() {
    int[] arr = {-1, 0, 1, 2, 3, 4, 10, 19};
    System.out.println(iterativeBinarySearch(arr, 0, arr.length - 1, 4));
    System.out.println(34);
  }
  
  public static void main(String args) { 
    new binarysearch().run(); 
  }
}
