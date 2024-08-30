public class Bhaskara { 
   private int a, b, c; 
   
   Bhaskara(int a, int b, int c) { 
      this.a = a; 
      this.b = b; 
      this.c = c; 
    } 

   public double calculaX1() {  
      double delta = (b*b)-4*(a)*(c); 
      return -b + Math.sqrt(delta) / 2*a; 
   } 

   public double calculaX2() { 
     double delta = (b*b)-4*(a)*(c); 
     return -b - Math.sqrt(delta) / 2*a; 
   } 

   public static void main (String args[ ]) { 
      Bhaskara bascara = new Bhaskara(3,-7,2); 
      System.out.println(bascara.calculaX1()); 
      System.out.println(bascara.calculaX2()); 
  } 
} 
