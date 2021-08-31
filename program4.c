 //  Accept number from users and display all the number till that number.
 //  Input:8
 //  Output: 1 2 3 4 5 6 7 8

 
 //  Input:  -6
 //  Output: 1  2  3  4  5  6
 
 /*
	START
			Accept one number as no
			If number is negative then convert it to positive
			Create one counter as Cnt and set it to 1
			
			Iterate til the counter is lessthan or equal to the number
				print the value of counter on screen
				Increament the value of counter by 1
			continue
	END
*/
  #include<stdio.h>
 
    void Display(int iNo)  //5
	{
		
		int iCnt=0;
		if(iNo==0)
		{
			return;
		}
		
		
		if(iNo<0)   //Input updater
		{
			iNo= -iNo;
		}
	   
	   
	   // 1  2  3  4  5
 	   // start   1
 	   // end    5
	   //Diffrence
	   
	/*
	    printf("1");
		printf("2");
	    printf("3");
	    printf("4"); 
		printf("5");
	*/
	 // 1=Initialization
    // 2=Condition
	//  3=Increament or Decreament Factor
	//  4=loop body
	
	//        1               2                 3
	for(iCnt=1; iCnt <=iNo ;  iCnt++)
		{
			printf(" %d\n",iCnt);        //4
		}
	     // 1          (2  4  3)    (2  4  3)     (2  4  3)     (2  4  3)     (2  4  3)   2      STOP
		//
		// output:   1                 2                3                   4                5
	}

   int main()                  //Entry point Function
 {
 
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
   
    Display(iValue);
    return 0;
 }