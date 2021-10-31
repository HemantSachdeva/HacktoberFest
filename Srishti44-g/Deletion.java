import java.util.List;
import java.util.ArrayList;
  
public class Deletion{
    public  static void main(String[] args)
    {
    List<Integer> hello = new ArrayList<>();
    hello.add(100);
    hello.add(200);
    hello.add(300);
    hello.add(400);
    hello.add(500); 
    
    hello.remove(1);
   
    hello.remove(1);
    System.out.println("The Modified ArrayList is :" + hello);      
    }
}