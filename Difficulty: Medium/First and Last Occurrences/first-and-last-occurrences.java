
class GFG {
    ArrayList<Integer> find(int arr[], int x) {
        int first=-1,last=-1,n=arr.length;
        int l=0,h=n-1;
        while(l<=h) {
            int m=l+(h-l)/2;
            if(arr[m]==x) {
                first=m;
                h=m-1;
            } else if(arr[m]>x)
                h=m-1;
            else
                l=m+1;
        }
        l=0;h=n-1;
        while(l<=h) {
            int m=l+(h-l)/2;
            if(arr[m]==x) {
                last=m;
                l=m+1;
            } else if(arr[m]>x)
                h=m-1;
            else
                l=m+1;
        }
        ArrayList<Integer> al=new ArrayList<>();
        al.add(first);
        al.add(last);
        return al;
    }
}