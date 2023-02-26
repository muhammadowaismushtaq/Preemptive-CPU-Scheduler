/********************************************************************	
* 	Project Name: Preemptive Scheduler								*
*	Team Members: Muhammad Owais Mushtaq [18k-1177]					*
*				  Faiq Nadeem [18k-1194]							*
*				  Syed Haris [18k-1162]      						*
* 	Starting Date: May 11, 2020                  					*   
*********************************************************************/

#include<iostream>
#include<string.h>
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include <algorithm>
#include <string.h>
using namespace std;

// this is global variable
COORD coord= {0,0}; 
int FileCount=0;

//Prototypes
void BoxFill();
void Preemptive_Priority_Scheduling() ;
void Shortest_Remaing_Time_First_Scheduling();
void Round_Robin_Scheduling();

//This Function is used for delay purpose which has used in this project several times
void delay(){

    int i;
    for(i=0;i<4500000;i++);

}

/*Instead of looping delay() function, i also modified delay()'s 
updated version which delay 25 times more than delay()*/
void SecDelay(){
	
    int i;
    for(i=0;i<25;i++){
        delay();
    }
}

//This Function Gives Bold line of Full consoul size,used in title or logo of project
void BoldLine(){
	
	cout<<"\n\t\t";
	for(int i=0;i<129;i++){
		cout<<"\xDB";
	}
	cout<<"\t\t";
}

//This Function return Our Project's Logo or Title
void MainScreen(){
	
	string note="\n\n\n\n\tCaution! \n\tBefore Starting Project, Please make sure that console is in Full Screen.\n\n\t";
	string upperline="\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb";
	string lowerline="\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";
	string author="\n\t\t\xba\t\t* Muhammad Owais Mushtaq [18k-1177]\t* Faiq Nadeem [18k-1194]\t* Syed Haris Ahmed[18k-1162]\t\t \xba\n";
	
	for(int i=0; i<note.size();i++){
		cout<<note[i];
		delay();
	}
		system("pause");
	
	
	char s=1;
	system("cls");
	cout<<endl<<endl;
	cout<<"\n\n\n\n\n\n\n";
	BoldLine();	
	
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\tPREEMPTIVE SCHEDULER\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	BoldLine();	
	cout<<endl<<endl<<endl;
	cout<<"\t\tTeam Members: \n";
		for(int i=0; i<upperline.size();i++){
		cout<<upperline[i];
		delay();
	}
		for(int i=0; i<author.size();i++){
		cout<<author[i];
		delay();
	}
		for(int i=0; i<lowerline.size();i++){
		cout<<lowerline[i];
		delay();
	}
	cout<<"\n\t\t";
	int i=0;
	while(i<1){
		
		//The following code is used to cause color-realted effects on the intro
		
        system("color 9");
        SecDelay();
        system("color 1");
        SecDelay();
        system("color 9");
        SecDelay();
        system("color A");
        SecDelay();
        system("color 2");
        SecDelay();
        system("color A");
        SecDelay();
        system("color B");
        SecDelay();
        system("color 3");
        SecDelay();
        system("color B");
        SecDelay();
        system("color C");
        SecDelay();
        system("color 4");
        SecDelay();
        system("color C");
        SecDelay();
        system("color D");
        SecDelay();
        system("color 5");
        SecDelay();
        system("color D");
        SecDelay();
        system("color E");
        SecDelay();
        system("color 6");
        SecDelay();
        system("color E");
        SecDelay();
        system("color F");
       	i++;
    }
  
}

//This Function is used for finding cordinates at console
void gotoxy(int x,int y){
    
	coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    
}

//This Function returns MainMenu's Frame
void Box(int a,int b,int c,int d){
    int i;
    system("cls");
    gotoxy(20,10);

    for (i=a; i<=b; i++)
    {
        gotoxy(i,3);
        printf("\xcd");
        gotoxy(i,5);
        printf("\xcd");
        gotoxy(i,c);
        printf("\xcd");
        gotoxy(i,d);
        printf("\xcd");
    }

    gotoxy(a,3);
    printf("\xc9");
    gotoxy(a,4);
    printf("\xba");
    gotoxy(a,5);
    printf("\xc8");
    gotoxy(b,3);
    printf("\xbb");
    gotoxy(b,4);
    printf("\xba");
    gotoxy(b,5);
    printf("\xbc");

    for(i=c; i<=d; i++)
    {
        gotoxy(a,i);
        printf("\xba");
        gotoxy(b,i);
        printf("\xba");
    }
    
    gotoxy(a,c);
    printf("\xc9");
    gotoxy(a,d);
    printf("\xc8");
    gotoxy(b,c);
    printf("\xbb");
    gotoxy(b,d);
    printf("\xbc");

}

//This one return title box for all option of MAINMENU
void HeadingBox(){
		
	 int a=40,b=115;
	 
	for (int i=a; i<=b; i++)
    {
    	
    	//40,115,8,40
        gotoxy(i,3);
        printf("\xcd");
        gotoxy(i,5);
        printf("\xcd");

    }
   
    
    gotoxy(a,3);
    printf("\xc9");
    gotoxy(a,4);
    printf("\xba");
    gotoxy(a,5);
    printf("\xc8");
    gotoxy(b,3);
    printf("\xbb");
    gotoxy(b,4);
    printf("\xba");
    gotoxy(b,5);
    printf("\xbc");

}

/*This Function highlights the curser movement by (->)*/
void highlight(int no,int count){
	
	 if (no==4){
      
        gotoxy(52,15);
		cout<<"        * Preemptive Priority Scheduling";
		gotoxy(52,18);
		cout<<"        * Shortest Remaining Time First Scheduling";
		gotoxy(52,21);
		cout<<"        * Round Robin Scheduling";
		gotoxy(52,24);
		cout<<"        * Exit";
       
        switch (count){
        
		case 1:{
			
            gotoxy(52,15);
			cout<<"->      * Preemptive Priority Scheduling";
            break;
			}
        case 2:{
		
           	gotoxy(52,18);
			cout<<"->      * Shortest Remaining Time First Scheduling";
            break;
			}
        case 3:{
            gotoxy(52,21);
			cout<<"->      * Round Robin Scheduling";
            break;
        	}
    	case 4:{
		
    		gotoxy(52,24);
    		cout<<"->      * Exit";
    		break;
    		}
		}
		
    
	}else if(no==2){
    
		gotoxy(120,33);
    	cout<<"             * Main Menu";
		gotoxy(120,36);
		cout<<"             * Exit";
		
		
    	switch (count){
    		
        case 1:{
			
            gotoxy(120,33);
			cout<<"->           * Main Menu";
            break;
			}
        case 2:{
		
           	gotoxy(120,36);
			cout<<"->           * Exit";
            break;
			}
		}
}
}

/*This function used for cursor movement*/
void curser(int no){
    
	int count=1;
    char ch='0';
    gotoxy(85,15);
    while(1){
        
		switch(ch){
        
		case 80:
            count++;
            if (count==no+1) count=1;
            break;
            
        case 72:
            count--;
            if(count==0) count=no;
            break;
        
		}
        
		highlight(no,count);
        ch=getch();
        if(ch=='\r'){
           
        	if(no==4){	
        	
				switch(count){
				
				
				case 1: Preemptive_Priority_Scheduling();
						break;
				case 2: Shortest_Remaing_Time_First_Scheduling();
						break;
				case 3: Round_Robin_Scheduling();
				break;
				default:
						for(int i=0;i<16; i++){
						cout<<endl;
					}
					exit(0);
					break;
				
				}

                
            }else if(no==2){
            	if(count==1)BoxFill();
            	else{
				
            		for(int i=0;i<16; i++){
						cout<<endl;
					}
            		exit(0);
				}
			}
            
        }
    }
}

/*This Funtion controls the starting and ending of our project */
void BoxFill(){
		
	system("cls");
	Box(40,115,8,40);
	  gotoxy(70,4);
	cout<<"Preemptive Scheduler";
		gotoxy(52,15);
		cout<<"        * Preemptive Priority Scheduling";
		gotoxy(52,18);
		cout<<"        * Shortest Remaining Time First Scheduling";
		gotoxy(52,21);
		cout<<"        * Round Robin Scheduling";
		gotoxy(52,24);
		cout<<"        * Exit";

		curser(4);
		
	
}

/*A structure has been created to store all of the relevant variables for each process used in this algorithm*/
typedef struct pps_process{
	
	string process_id;
	int arrival_t, burst_t, compl_t;
	
	int  turnar_t, wait_t;
	int  burst_t2, priority;
	
	/* The following table lists the meaning of each variable:
	arrival_t = Arrival time,
	burst_t = Burst time,
	compl_t = Completion time,
	turnar_t = Turn around time,
	wait_t = Waiting time
	priority = priority
	burst_t2 = burst_t2
	*/
	
	
}pps_process;

/*The follwoing functions are used to compare 2 different processes according to their arrival time or priority*/
bool comp_func1(pps_process x, pps_process y){

	return x.arrival_t < y.arrival_t;
	
}

bool comp_func2(pps_process x, pps_process y){

	return x.priority > y.priority;
	
}


/* The function for the Preemptive Priority Scheduler */
void Preemptive_Priority_Scheduling(){
	
	system("cls");
	HeadingBox();
	gotoxy(65,4);
	cout<<"Preemptive Priority Scheduling";
	  

	  int proc_numb; //this stores the total number of processes given by the user
	  int i, j;
	  int comp_proc = 0; // this stores the total number of completed processes
	  
	  	  
	  	cout << "\n\n\t\t\t\t\t\tEnter Total Number of Processes: ";
		cin>>proc_numb;
		
		pps_process proc[proc_numb];
		
	  
	  	for( i=0; i < proc_numb ; i++)
	{	
		cout<<"\n\n\t\t\t\t\t\tFor Process #"<<i+1<<": ";
	
		cout<<"\n\n\t\t\t\t\t\t	Process ID: ";
	 		cin>>proc[i].process_id; // process id 
		
		cout<<"\n\n\t\t\t\t\t\t\t Arrival Time: ";
			cin>>proc[i].arrival_t; // arrival time
		
		cout<<"\n\n\t\t\t\t\t\t\t Burst Time: ";
			cin>>proc[i].burst_t; // burst time
			proc[i].burst_t2 = proc[i].burst_t; //storing original burst time to print later
		
		cout<<"\n\n\t\t\t\t\t\t\t Priority(1-Lowest): ";
			cin>>proc[i].priority; // priority
	
	}
	
	//The following function is used to arrange the processes in ascending order according to their arrival time 
			sort(proc, proc + proc_numb, comp_func1);
			
				i = 0; //initalising to zero before scheduling begins
				
				while( comp_proc < proc_numb ){ 
	/*while the total number fo completed processes is less than the total given # of processes, we will look at wheter
	the current process' arrival time is greater than i, in shich case we will stop the execution adn move on  */ 
				
				for( j =0; j < proc_numb; j++){
					
					if( proc[j].arrival_t > i ){
						
						break;
						
					}
					}
					
	//The following function is used to arrange the processes in ascending order according to their priority 
					sort(proc, proc+j, comp_func2);
					
				
				if( j > 0){
					
					
					
					for( j = 0; j < proc_numb; j++)
						{
	/*The following code is used to determine if the current process has been completed (this will happen if the 
	burst time = 0). I fit has not, we will break and move on to decrease it's burst time */
							if( proc[j].burst_t != 0){ 
							
							break;			
							
							}
						}
						
						
	// here, if the current process' arrival time is greater than i, we will reassign i as the current process' arrival time 
						if( proc[j].arrival_t > i ){
							
						i = i + proc[j].arrival_t - i;
						
						}
						
	//with every 'cycle' the process' completion time will increase until it is completed
						proc[j].compl_t = i + 1;
						
							proc[j].burst_t--;
					
				}
				
					i++;
					
					comp_proc = 0; 	/*we finally wish to check if the current process has been comleted, therefore,
									 we first assume that no process ahs been completed yet */
					
	// Here, we check if current process' burst time = 0, in which case we will consider it 'completed' 
					for( j = 0; j < proc_numb; j++)
					{
						if( proc[j].burst_t == 0){
						
						comp_proc++;
						}
					}
				
				
				
				}
			system("cls");
	
	//The following code is used to print the output in a table after the processes have been scheduled	
		cout<<"\n\n\t\tRESULTS:\n\n"<<"\t\tID\t"<<"Arrival Time\t"<<"BTT\t"<<"Completion Time\t"<<"  Turn Around Time\t"<<"Waiting Time\t"<<"Priority\n";
	  
	  for( i = 0; i < proc_numb; i++){ 
		
	/*Here, we first calcualte the turnaround time for each process using the completion time + arrival time, 
	and then we calculate the waiting time using it and the original burst time*/
	
		proc[i].turnar_t = proc[i].compl_t - proc[i].arrival_t;
		
		proc[i].wait_t = proc[i].turnar_t - proc[i].burst_t2;
		
		
		cout<<"\t\t"<<proc[i].process_id<<"\t\t"<<proc[i].arrival_t<<"\t"<<proc[i].burst_t2<<"\t"<<proc[i].compl_t<<"\t\t\t"<<proc[i].turnar_t<<"\t\t"<<proc[i].wait_t<<"\t\t"<<proc[i].priority;
		
		cout<<"\n\n";
		
	}
	  
	
		gotoxy(120,33);
		cout<<"             * Main Menu";
        gotoxy(120,36);
		cout<<"             * Exit";
		curser(2);
};

/* The function for the Shortest_Remaing_Time_First_Scheduler */
void findWaitingTime(pps_process proc[], int n){ 
  
    int rt[n]; 
  
    // Copy the burst time into rt[] 
    for (int i = 0; i < n; i++) {
	
        rt[i] = proc[i].burst_t; 
}

    int complete = 0; 
	int t = 0;
	int minm = INT_MAX; 
	
    int shortest = 0; 
	int finish_time; 
    bool check = false; 
  
    // Process until all processes gets 
    // completed 
    while (complete != n) { 
  
        // Find process with minimum 
        // remaining time among the 
        // processes that arrives till the 
        // current time` 
        for (int j = 0; j < n; j++) { 
            if ((proc[j].arrival_t <= t) && 
            (rt[j] < minm) && rt[j] > 0) { 

                minm = rt[j]; 
                shortest = j; 

                check = true; 

	            } 
        } 
  
        if (check == false) { 
            t++; 
            continue; 
        } 
  
        // Reduce remaining time by one 
        rt[shortest]--; 
  
        // Update minimum 
        minm = rt[shortest]; 
        if (minm == 0) 
            minm = INT_MAX; 
  
        // If a process gets completely 
        // executed 
        if (rt[shortest] == 0) { 
  
            // Increment complete 
            complete++; 
            check = false; 
  
            // Find finish time of current 
            // process 
            finish_time = t + 1; 
  
            // Calculate waiting time 
            proc[shortest].wait_t = finish_time - 
                        proc[shortest].burst_t - 
                        proc[shortest].arrival_t; 
  
            if (proc[shortest].wait_t < 0) 
                proc[shortest].wait_t = 0; 
        } 
        // Increment time 
        t++; 
    } 
} 
  
// Function to calculate turn around time 
void findTurnAroundTime(pps_process proc[], int n){ 
    
	// calculating turnaround time by adding 
    // proc[i].burst_t + proc[i].wait_t; 
    for (int i = 0; i < n; i++) 
        proc[i].turnar_t = proc[i].burst_t + proc[i].wait_t; 
} 
  
// Function to calculate average time 
void findavgTime(pps_process proc[], int n){ 
   
    int total_wt = 0,total_tat = 0; 
  
    // Function to find waiting time of all 
    // processes 
    findWaitingTime(proc,n); 
  
    // Function to find turn around time for 
    // all processes 
    findTurnAroundTime(proc, n); 
  
    // Display processes along with all 
    // details 
    cout << "\n\n\n\n\t\t\tProcesses "
        << "\tBurst time "
        << "\tWaiting time "
        << "\tTurn around time\n"; 
  
    // Calculate total waiting time and 
    // total turnaround time 
    for (int i = 0; i < n; i++) { 
        total_wt = total_wt + proc[i].wait_t; 
        total_tat = total_tat + proc[i].turnar_t; 
        cout << "\t\t\t" << proc[i].process_id << "\t\t"
            << proc[i].burst_t << "\t\t " << proc[i].wait_t 
            << "\t\t " << proc[i].turnar_t << "\n"; 
    } 
  
    cout << "\n\n\n\t\t\tAverage waiting time = "
        << (float)total_wt / (float)n; 
    cout << "\n\t\t\tAverage turn around time = "
        << (float)total_tat / (float)n; 
} 

/* The fuction for the Shortest_Remaing_Time_First_Scheduler  */
void Shortest_Remaing_Time_First_Scheduling(){
	
	system("cls");
	HeadingBox();
	gotoxy(60,4);
	cout<<"Shortest Remaining Time First Scheduling";
	
	 int proc_numb; //this stores the total number of processes given by the user
	  int i, j;
	  int comp_proc = 0; // this stores the total number of completed processes
	  
	  	  
	  	cout << "\n\n\t\t\t\t\t\tEnter Total Number of Processes: ";
		cin>>proc_numb;
		
		pps_process proc[proc_numb];
	  
	  	for( i=0; i < proc_numb ; i++)
	{	
		cout<<"\n\n\t\t\t\t\t\tFor Process #"<<i+1<<": ";
	
		cout<<"\n\n\t\t\t\t\t\t	Process ID: ";
	 		cin>>proc[i].process_id; // process id 
		
		cout<<"\n\n\t\t\t\t\t\t\t Arrival Time: ";
			cin>>proc[i].arrival_t; // arrival time
		
		cout<<"\n\n\t\t\t\t\t\t\t Burst Time: ";
			cin>>proc[i].burst_t; // burst time
			proc[i].burst_t2 = proc[i].burst_t; //storing original burst time to print later
	
	}
	
	system("cls");
	
	findavgTime(proc,proc_numb); 
	
	
		gotoxy(120,33);
		cout<<"             * Main Menu";
        gotoxy(120,36);
		cout<<"             * Exit";
		curser(2);
};

/* The code for the Round Robin Scheduling Algorithm starts here */
void calc_wait_t_func(int np,int quantum,int wait_t[],int burst_time[]){
	bool comp_proc;
	int curr_time = 0;
	
	/* The follwoing code is used to initialize the remaining burst times for each process, which is equal to its burst time for now */
	
	int burst_time_left[np];
	
	for(int i =0; i < np; i++){
		
		burst_time_left[i] = burst_time[i];
		
	}
	
	//Here, the scheduler will keep on running until all process have been completed, therefore we use while(1)
	while(1){
		
		 comp_proc = true; // we initially assume that the process is complete
		
		for(int i =0; i < np; i++){
		
		if( burst_time_left[i] > 0 ){ // if there is burst time left, then the process is not complete yet, therefore 
			comp_proc = false;
			
			if( burst_time_left[i] > quantum){ //this means that the process has exceeded it's allocated time quantum
				
				curr_time += quantum; //the time taken by current process increases
				
				burst_time_left[i] -= quantum; //we decease the remaining burst time as the process nears completion
				
			} else{
				
	/*If the burst time is less than/ equal to the quantum, then the process enters its last 'cycle' and then is completed*/
				
				curr_time = curr_time + burst_time_left[i];
				
				wait_t[i] = curr_time - burst_time_left[i]; //here, we calcuate the waiting time for the current process
				
				burst_time_left[i] = 0; //Now, the process is complete, therefore, it's remaining burst time = 0;
			}
			
		}
		
		
		
		
		}
		
		//all processes have been completed, so we end the loop
		if(comp_proc == true){ 
			break;
		}
			
	}
	
}

/* The following function is used to perform the round robin scheduling and also calculate average waiting time & avg turn around time*/
void rr_scheduling_func(int np,int burst_time[],int quantum){
	
	int  turnar_t[np], wait_t[np];
	int wait_tTotal = 0;
	int turnar_tTotal = 0; 
	
	/* The following table lists the meaning of each variable:
	
	turnar_t = Turn around time,
	wait_t = Waiting time

	wait_tTotal = total Waiting time
	
    turnar_tTotal = total Turn around time,	

	*/	

	// The follwoing function is used to calculate the waiting time for each given process
 
    calc_wait_t_func( np, quantum, wait_t, burst_time); 
  
    // The follwoing code is used to calculate the turn around time for each given process
    
	for (int i = 0; i < np ; i++){
		
	       turnar_t[i] = wait_t[i] + burst_time[i]; 
	       
	}
	
	/*Now, we will print the results in the form of a tble*/
	
	system("cls");
	
	cout<<"\n\n\n\n\t\t\tRESULT:";
	
	cout << "\n\n\t\t\tProcesses \t"<< " Burst time \t" << " Waiting time \t" << " Turn around time\n"; 
	
	for(int i = 0; i < np; i++){
		
		wait_tTotal = wait_tTotal + wait_t[i]; // we calculate total waiting time
		
		turnar_tTotal = turnar_tTotal + turnar_t[i];
		
		// now, printing values into table
		
		cout<<"\n\t\t\t"<<i+1<<" \t\t "<< burst_time[i] << " \t\t "<<wait_t[i] << " \t\t "<<turnar_t[i];
		
		
	}
	
	cout<<"\n\n\n\t\t\tAverage Waiting Time: "<< (float)wait_tTotal / (float)np;  
	
	cout<<"\n\n\t\t\tAverage Turn Around Time: "<< (float)turnar_tTotal / (float)np;  
	
	
}


/* The Fuction for the Round Robin Scheduling Algorithm */
void Round_Robin_Scheduling(){
	
	system("cls");
	HeadingBox();
	gotoxy(65,4);
	cout<<"Round Robin Scheduling";
	
	int np; // this variable stores the total number of processes
	int quantum;
	
	cout << "\n\n\n\t\t\t\t\t\tTotal Number of Processes: ";
	cin>>np;
	
	cout << "\n\n\n\t\t\t\t\t\tEnter Quantum Value: ";
	cin>>quantum;
	
	int burst_time[np];
	
	
	cout<<"\n";
	
	/*Here, we store the burst times for each process from the user*/
	for(int i =0; i < np ; i++){
		
		cout<<"\n\t\t\t\t\t\tBurst Time For Process #"<<i+1<<": ";
		cin>>burst_time[i];
	//	cout<<"\n\nburst_time["<<i+1<<"]: "<<burst_time[i];
	}
	
	rr_scheduling_func(np, burst_time, quantum);
	
	
		gotoxy(120,33);
		cout<<"             * Main Menu";
        gotoxy(120,36);
		cout<<"             * Exit";
		curser(2);
};

/* The code for the ROund Robin Scheduling Algorithm ends here*/

//Driver Function
int main(){
	


	MainScreen();
	system("pause");
	BoxFill();
	

	
}




