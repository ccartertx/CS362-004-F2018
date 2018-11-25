

import junit.framework.TestCase;

//You can use this as a skeleton for your 3 different test approach
//It is an optional to use this file, you can generate your own test file(s) to test the target function!
// Again, it is up to you to use this file or not!





public class UrlValidatorTest extends TestCase {

	
   public UrlValidatorTest(String testName) {
      super(testName);
   }

   
   
   public void testManualTest()
   {
//Call isValid method with both valid and invalid inputs
	   
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   
	   //Expected valid URLs
	   assertTrue(urlVal.isValid("http://www.google.com"));
	   assertTrue(urlVal.isValid("http://www.google.com/"));
	   //FAIL assertTrue(urlVal.isValid("ftp://foo.bar.com/"));
	   assertTrue(urlVal.isValid("http://go.au"));
	   assertTrue(urlVal.isValid("http://go.co.uk"));
	   //FAIL assertTrue(urlVal.isValid("https://commons.apache.org"));
	   assertTrue(urlVal.isValid("http://255.255.255.255"));
	   	   
	   
	   //Expected invalid URLs
	   assertFalse(urlVal.isValid(""));
	   assertFalse(urlVal.isValid("http/www.google.com"));
	   // FAIL assertFalse(urlVal.isValid("zzzhttp://www.google.com"));
	   // FAIL assertFalse(urlVal.isValid("http://256.256.256.256"));
   }
   
   
   public void testYourFirstPartition()
   {
	 //You can use this function to implement your First Partition testing	   

   }
   
   public void testYourSecondPartition(){
		 //You can use this function to implement your Second Partition testing	   

   }
   //You need to create more test cases for your Partitions if you need to 
   
   public void testIsValid()
   {
	   //You can use this function for programming based testing

   }
   


}
