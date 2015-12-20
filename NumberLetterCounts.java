public class NumberLetterCounts {

 static String unitdo[] = {"", "One", "Two", "Three", "Four", "Five",
          "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
          "Thirteen", "Fourteen", "Fifteen",  "Sixteen", "Seventeen",
          "Eighteen", "Nineteen"};

 static String tens[] =  {"","Ten","Twenty", "Thirty", "Forty", "Fifty",
          "Sixty", "Seventy", "Eighty","Ninety"};

 public static int digit_counter(int a)
 {
  int digit_count = 0 ;
  while(a>0)
  {
   a=a/10;
   digit_count++;

  }

  return digit_count++;

 }

 public static String wordGen(int a)
 {
  String numWord = "";

  int digits = digit_counter(a);

  while(digits >0)
  {
  switch(digits)
  {
  case 1:
  case 2:

   if(a < 20)
   {
    numWord+=unitdo[a];

    digits = 0;
   }
   else
   if(a >=20 )
   {


    numWord+= tens[a/10];
    a=a%10;
    if(a ==0)
    digits = 0;
    else
    digits--;
   }
   break;
  case 3:

   numWord+=unitdo[a/100];
   a=a%100;
   if(a%100 == 0)
    {
    numWord+="Hundred";

    digits = 0;
    }
   else
   {
    numWord+="HundredAnd";
   digits--;
   }
    break;
  case 4:

   numWord+=unitdo[a/1000];
   a=a%1000;
   numWord+="thousand";
   if(a%1000 ==0)
   digits = 0;
   else
   digits--;
   break;



  }

  }

  return numWord;

 }
 public static void main(String[] args) {
  int sum = 0;

  String a = "";
  for(int i =1 ; i<=1000; i++)
  {
   a = wordGen(i);
   System.out.println(a);
   sum= sum+a.length();

  }
System.out.println(sum);
 }

}
