import java.util.Scanner;
import java.util.Arrays;
class Main{
    public static void main(String[] args) {

    Scanner sc=new Scanner(System.in);  
    int t=sc.nextInt();
    while(t--!=0){
        int n,k;
        n=sc.nextInt();
        k=sc.nextInt();
        int v=n-k;
        int ar[]=new int [n];
        for(int i=0;i<n;i++){
            ar[i]=sc.nextInt();
        }
        Arrays.sort(ar);
        int sum=1;
        for(int i=0;i<n-1;i++){
            if(ar[i]!=ar[i+1]){
                sum++;
            }
        }
        if(sum<=v){
            System.out.println(sum);
        }
        else{
            System.out.println(v);
        }
    }
    }
}
