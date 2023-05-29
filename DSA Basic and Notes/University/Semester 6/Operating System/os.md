> # ```Operating System```

## **What is an operating system**?

An operating system is an interface between computer hardware and the end user. It is a medium to communicate with the computer and instruct the computer hardawares without knowing complex computer language.

<ins>**Operating system manages:**</ins>

1. Hardware resources of a computer.
2. Provides a place or platform to run various applications.

<ins>**Goals of an operating system:**</ins>

1. User friendly
2. Efficiency

<ins>**Characteristics of an OS:**</ins>

1. Process management
2. Memory management
3. File management
4. Security management
5. Error defection
6. User defection
7. User interface
8. Resource management

<ins>**Types of OS**</ins>:

1. Batch OS
2. Multi-programming OS
3. Multi-processing OS
4. Multi-tasking OS
5. Distributed OS
6. Embedded OS
7. Real time OS

&nbsp;

### **What is job**?

Job refers to complete unit of work or instructions that a computer receives and execute accordingly.

From a complete instruction to end of execution.

- A job consist of one or multiple processes, and it is managed by operating system's job scheduler. There are multiple job scheduler algorithms such as, FCFS, SJF, Round robin etc.

### **What is a process**?

- Single unit of work.
- Actively running software or computer code.
- Process consistently change over time.

A process can be in one of several states, including:

<ins>New</ins>: A new process is created when a user or another process requests it.  
<ins>Ready</ins>: A ready process is waiting to be scheduled for execution. Yet to execute and currently in the ready queue.  
<ins>Running</ins>: A running process is currently being executed by the CPU.  
<ins>Waiting</ins>: A waiting process is blocked waiting for some event to occur, such as an I/O operation to complete.  
<ins>Terminated</ins>: A terminated process has finished executing and its resources are released.  

At any given time, there is only one process that is running on the CPU. A process scheduler removes one process from the running state in the CPU and selects another process to run based on some scheduling algorithms in OS.

&nbsp;

## <ins>**CPU Scheduling Algorithms**</ins>

Operating system uses CPU scheduling algorithms to predict the sequence of processes to be executed. It decides which process will use CPU for execution and which processes to hold or remove from execution.

The best CPU scheduling algorithm for a particular system will depend on the specific needs of that system. For example, a system that needs to minimize the average wait time for all processes might use SJF scheduling, while a system that needs to give important processes more CPU time might use priority scheduling.

There are two types of CPU scheduling algorithms:

1. **Preemptive:** CPU can preempt the process after a certain time and run other processes. Some algorithms are: SRTF, Round Robin.
2. **Non-preemptive:** New process can't begin until the previous process fully finished. In non-preemptive scheduling, once the CPU cycle is allocated to process, the process holds it till it reaches a waiting state or terminated. Some algorithms are: FCFS, SJF, Priority, Multilevel queue.

<ins>**Context Switching:**</ins> Context switching is the process of temporarily suspending one process and resuming another.

&nbsp;

### <p align="center"><b>1. First Come First Serve (FCFS)</b></p>

This algorithm obeys **FIFO (First in First Out)** manner where any <ins>process that arrives first, will eventually get execute first.</ins>

<ins>**Priority**</ins>: Smallest arrival time (AT)

FCFS is a non-preemptive algorithm which halt all other processes until current priority process is not entirely finished.

### **Terms**

<ins>**Arrival time (AT):**</ins>  At which time a process enters to the ready queue.  

<ins>**Brust time (BT):**</ins> The amount of time it consumed by a process to accomplish.

<ins>**Gantt chart:**</ins> It is a visual representation of the execution schedule that displays the start and end time of each process.  

<ins>**Completion time (CT):**</ins> Completion Time is the moment when the process (in the gantt chart) was terminated.  

<ins>**Turn Around Time (TT):**</ins> Completion time - Arrival Time = **CT - AT**

<ins>**Waiting time (WT):**</ins> Turn Around Time - Burst Time = **TT - BT**

How the algorithm works:

1. It picks up the process which is arrived first, (arrival time will lesser). **If the arrival time is similar then pick the process which appears first in the table or ready queue**.
2. Create a gantt chart

### <p align="center"><b>2. Shortest Job First (SJF)</b></p>

<ins>**Priority**</ins>: Smallest burst time

### <p align="center"><b>3. Priority Scheduling</b></p>

### <p align="center"><b>4. Round Robing Scheduling</b></p>

## **Other Questions**

1. What is API?
    - API stands for Application Programming Interface. It creates a bridge between two different aspects of an application by sharing data.
