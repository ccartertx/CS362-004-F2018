

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
   
   public void testIsValid() {
	    
	    int numTests = 10;    //specify number of tests for loop

	    String[] invalidUrls = new String[numTests]; //hold the invalid urls
	    int c = 0;	//counter for invalid urls
	
	    //valid url parts
	    String[] scheme = {"http://", ""}; //2
	    String[] authority = {"www.google.com", "go.com", "go.au", "0.0.0.0"}; //4
	    String[] port = {":80", ":65535", ""}; //3
	    String[] path = {"/test1", "/test1/file", "/$23", ""}; //4
	    String[] query = {"?action=view", "?action=edit&mode=up", ""}; //3


	    //loop based on number of tests defined above
	    //use random part selection from each of the arrays
	    for(int i = 0; i < numTests; i++) {
	      int schemeRand = (int) (Math.random() * 2);
	      int authorityRand = (int) (Math.random() * 4);
	      int portRand = (int) (Math.random() * 3);
	      int pathRand = (int) (Math.random() * 4);
	      int queryRand = (int) (Math.random() *3);

	      //url builder
	      String testUrl = scheme[schemeRand] + authority[authorityRand] + port[portRand] + path[pathRand] + query[queryRand];
	      UrlValidator validator = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);

	      //check if url returned valid
	      boolean valid = validator.isValid(testUrl);

	      //if url is invalid, log the url
	      if(valid == false) {
	        invalidUrls[c] = testUrl;
	        c++;
	      }
	    }
	    //print logged invalid urls
	    System.out.println("Results for Invalid URLs:\n");
	    for (int j = 0; j < invalidUrls.length; j++) {
	      if(invalidUrls[j] != null){
	    	System.out.println(invalidUrls[j]);
	      }
	    } 
	  }
}
