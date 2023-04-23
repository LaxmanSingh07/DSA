import java.util.*;
import java.io.*;

public class MarksOfPcm
{
    public static class Marks implements Comparable<Marks> {
        int phy,chem,math;
        Marks()
        {

        }
        Marks(int phy,int chem,int math)
        {
            this.phy=phy;
            this.chem=chem;
            this.math=math;
        }
        public int compareTo(Marks o){
            if(this.phy!=o.phy){
                return this.phy-o.phy;
            }
            else if(this.chem!=o.chem){
                return o.chem-this.chem;
            }
            else{
                return this.math-o.math;
            }
        }
    }

    public static void customSort(int []phy,int []chem,int []math)
    {
        int n=phy.length;
        Marks[]arr=new Marks[n];
        //fill this marks array

        for(int i=0;i<n;i++){
            arr[i]=new Marks(phy[i],chem[i],math[i]);
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            phy[i]=arr[i].phy;
            chem[i]=arr[i].chem;
            math[i]=arr[i].math;
        }
    }

}



