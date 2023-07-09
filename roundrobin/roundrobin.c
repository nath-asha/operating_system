#include&lt;stdio.h&gt;  
#include&lt;conio.h&gt;  
   
void main()  
{  
// initlialize the variable name  
     int i, NOP, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];  
     float avg_wt, avg_tat;  
     printf(&quot; Total number of process in the system: &quot;);  
     scanf(&quot;%d&quot;, &amp;NOP);  
     y = NOP; // Assign the number of process to variable y  
   
// Use for loop to enter the details of the process like Arrival time and the Burst Time 

 for(i=0; i&lt;NOP; i++)  
 {  
 printf(&quot;\n Enter the Arrival and Burst time of the Process[%d]\n&quot;, i+1);  
 printf(&quot; Arrival time is: \t&quot;);  // Accept arrival time  
 scanf(&quot;%d&quot;, &amp;at[i]);  
 printf(&quot; \nBurst time is: \t&quot;); // Accept the Burst time  
 scanf(&quot;%d&quot;, &amp;bt[i]);  
 temp[i] = bt[i]; // store the burst time in temp array  
}  
 // Accept the Time qunat  
 printf(&quot;Enter the Time Quantum for the process: \t&quot;);  
 scanf(&quot;%d&quot;, &amp;quant);  
 // Display the process No, burst time, Turn Around Time and the waiting time  
 printf(&quot;\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time &quot;);  
 for(sum=0, i = 0; y!=0; )  
 {  
 if(temp[i] &lt;= quant &amp;&amp; temp[i] &gt; 0) // define the conditions   
 {  
     sum = sum + temp[i];  
     temp[i] = 0;  
     count=1;  
     }     
     else if(temp[i] &gt; 0)  
     {  
         temp[i] = temp[i] - quant;  
         sum = sum + quant;    
     }  
     if(temp[i]==0 &amp;&amp; count==1)  
     {  
         y--; //decrement the process no.  
         printf(&quot;\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d&quot;, i+1, bt[i], sum-at[i], sum-at[i]-bt[i]);  
         wt = wt+sum-at[i]-bt[i];  
         tat = tat+sum-at[i];  
         count =0;     
     }  
     if(i==NOP-1)  
     {  
         i=0;  
     }  
     else if(at[i+1]&lt;=sum)  
     {  
         i++;  
     }  
     else  
     {  
         i=0;  
     }  
}  
 // represents the average waiting time and Turn Around time  
 avg_wt = wt * 1.0/NOP;  
 avg_tat = tat * 1.0/NOP;  
 printf(&quot;\n Average Turn Around Time: \t%f&quot;, avg_wt);  
 printf(&quot;\n Average Waiting Time: \t%f&quot;, avg_tat);  
 getch();  
 }
