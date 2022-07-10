import java.io.*;
import java.math.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        InputStreamReader r=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(r);
        String conversion_rate=in.readLine(); //read first line
        String conversion[]=conversion_rate.split(";"); //Separate string into array of string by ";"
        // one e.g. {"USD,JPY,109" , "USD,GBP,0.71"}
        String currency1=in.readLine();// read first currency
        String currency2=in.readLine();// read target currency
        if(currency2.equals(currency1)){ //if both currencies are same return 0;
            System.out.println(0);
            return;
        }
        Queue<String> queue=new LinkedList<>(); //to store graph and search on breadth first search
        ArrayList<String>visited=new ArrayList<>();//to keep check of visited currencies
        for(String temp:conversion){
            String conversion_one[]=temp.split(",");// seperate currencies and conversion rate
            // e.g. {"USD" , "JPY", 109}
            if(conversion_one[0].equals(currency1)){
                queue.add(conversion_one[1]); //add currency not visited yet
                queue.add(conversion_one[2]); //add rate
            }
            else if(conversion_one[1].equals(currency1)){
                double d=Double.parseDouble(conversion_one[2]);
                d= 1/d; // invert the conversion because conversion is given from 1st to 2nd
                //but we want 2nd to 1st.
                d=Math.round(d * 100.0) / 100.0; //round upto two decimal
                queue.add(conversion_one[0]); //add currency not visited
                queue.add(d+"");// add its rate
            }
        }
        visited.add(currency1); // currency1 already visited add in visited list
        double max=-1.0; // to calculate maximum conversion rate
        while(!queue.isEmpty()){ //iterate until queue is empty

            String currency=queue.poll(); // pop first element of queue i.e. currency
            double rate=Double.parseDouble(queue.poll()); //pop first element of queue i.e. rate

            if(currency.equals(currency2)){ //check whether it is target currency
                if(rate>max){ //update max
                    max=rate;
                }
            }
            else{ // if not target currency
                for(String temp:conversion){
                    String conversion_one[]=temp.split(",");
                    if(conversion_one[0].equals(currency) && !visited.contains(currency)){
                        //check new currency which is not visited earlier

                        double d=Double.parseDouble(conversion_one[2]);
                        d=d*rate; //multiply the rate of multiple currencies to achieve result
                        d=Math.round(d * 100.0) / 100.0; //round upto two decimal
                        queue.add(conversion_one[1]);//add currency
                        queue.add(d+""); //add to queue
                    }
                    else if(conversion_one[1].equals("currency") && !visited.contains(currency)) {
                        double d = Double.parseDouble(conversion_one[2]);
                        d = 1 / d;// invert the rate
                        d = d * rate;//multiply the rate of multiple currencies to achieve result
                        d=Math.round(d * 100.0) / 100.0;//round upto two decimal
                        queue.add(conversion_one[0]);// add currency
                        queue.add(d + "");//add its rate
                    }
                }
                visited.add(currency); // update visited list all the nodes of currency had been visited
            }
        }
        System.out.println(max);//print maximum currency conversion
    }
}