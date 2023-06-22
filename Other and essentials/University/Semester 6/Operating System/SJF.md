> # ```SJF```

**Shortest Job First (SJF)** is a scheduling algorithm in which processes are scheduled based on their burst time. The algorithm selects the process with the shortest burst time to execute first. The burst time is the time required for a process to complete its execution, typically measured in milliseconds. Processes with shorter burst times are given priority by the SJF algorithm and are executed before processes with longer burst times. This algorithm aims to minimize the average waiting time and turnaround time of the processes.

Priority: Burst time  
**Processes are arranged in ascending order burst time.**  
**Mode**: Non-preemptive. Once a process is picked, all other process halted until the current process is finished.

If there are more than one processes with same burst time, SJF algorithm will pick the process with minimum arrival time.

Even if, both arrival time and burst time are similar, the process with lower id will be choosed.
