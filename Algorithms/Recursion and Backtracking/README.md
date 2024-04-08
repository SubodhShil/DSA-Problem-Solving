# **```Recursion```**

<ins>**Definition**</ins>: When a function calls itself until a specific condition is met to terminate the function call process, is called recursion. The way recursion accomplish it's task is 'synchoronous'. If a recursive function encounters a multiple recursive calls within the function body, recursion will done this on top to bottom approach. That means it will take recursive function calls from very top, complete that particular recursive call and proceeds to the following recursive call later on.

1. Recursion is like imposing your next task to the simplier or smaller version of yourself, and beleive it will do your task and return you value of the work after the accomplishment. During the work imposed by the current function, the current function got stuck or freezed in the stack memory and waits till the next function done his work.
2. Every recursive problem can be solved using iterations or loops.

&nbsp;

> ## <p align="center">**```Steps to solve any problem in recursive way```**</p>

### Always start off thinking a recursive solution from the perspective of smallest possible input or least sub-problem, which also has a known value.

1. **Construct the base condition**: Figure out the smallest sub-problem with a known result. The known result will be returned when the least sub-problem appears. Hence, we have to define the case where it will return the known value and we can have multiple such cases. But, the case responsible to terminate the endless recursive loop is namely **base case**.
2. Having **leap of faith**, trust the recursive process. Do a simple task and let the recursion do the rest of the work. 
3. Build the recurrence relation.
4. Depict the recursive tree.

&nbsp;

## **```Why Recursion?```**

1. It help solving bigger and complex problems into smaller and simpler way.

2. **Auxiliary space complexity of recursion can never be O(1) or constant**, because the stack memory in use to store the recursive function calls.

&nbsp;

## **```Function call stack```**

1. Until a function call finishes it's work it stays in the stack memory.

2. When a function, finishes it execution it is removed from stack, and the flow of the program restored where the function was called.

3. In recursive function call, each function has the same body and they do a similar kind of task. Only the parameter vary in each function call.

&nbsp;

## **```Stack overflow or segmentation fault```**

    (1) Due to conditional check fails it could cause infinite recursive call.
    In the process, the internal stack filled up with a large amount of function calls which will eventually exceeds the limit of internal stack space.

    (2) Stack overflow causes segmentation fault.

&nbsp;

## **```Base Condition```**

 The condition that checks for whether the recursive call should be stopped. A base condition is a special case in a recursive function that tells the function to stop calling itself. This prevents the function from calling itself infinitely, which can use up all of the available stack space and cause the program to crash.

### **Types of base cases**

1. **Implicit base case**: Base condition doesn't impose to specificly handle recursive call termination.

```cpp
int summationOfN(int n)
{
    /// implicit base case
    if (n >= 1)
    {
        return n + summationOfN(n - 1);
    }

    return 0;
}
```

2. **Explicit base case**: A base condition is clearly mentioned to handle continuous recursive calls to stop.

```cpp
int summationOfN(int n)
{
    /// explicit base case
    if (n <= 1)
        return n;

    else
        return n + summationOfN(n - 1);
}
```

&nbsp;

## **```Recursive Tree```**

Visual representation of recursive calls in a tree like diagram.

Recursive algorithm can lead to performance problems because it can create multiple copies of the same sub-trees. These redundant sub-trees can result in increased computational overhead. However, this issue can be mitigate by using the optimization algorithm **dynamic programming**, which caches the result by storing the results of sub-tree problem so that they do not need to be recalculated.

&nbsp;

## **```Recurrence relation```**

When a recursion problem can defined in a formulae, described the sequence of sub-problems in the recursive tree.

**Types of recurrence relation:**

1. **<ins>Linear recurrence relation</ins>**: A linear recurrence relation is a type of recurrence relation where the number of recursive calls in a recursive function increases linearly with the input size. Linear recurrence relations can lead to multiple redundant sub-trees.
2. **<ins>Divide and conquer recurrence relation</ins>**: A divide-and-conquer recurrence relation is a mathematical equation that describes the recursive steps of a divide-and-conquer algorithm. On a basis of condition the search space is divided, thus computation also decreased.

&nbsp;

## **```Backtracking```**

It is an algorithm that tries to find a solution to a given parameter. It builds the subproblems recursively and abandons those which can't fulfill the condition.

**Insights:**

1. Try to build all possible solutions incrementally (one by one).
2. Remove those solutions that fail to satisfy the constraints of the problem.


&nbsp;

## **```Types of recursion```**

1. Direct recursion
2. Indirect recursion
3. Tail recursion
4. Non-tail recursion

### <p align="center">**Tail recursion**</p>

A recursive function is said to be tail recursive if the recursive call is the last thing done by the function. There is no need to keep record of the previous state.

&nbsp;

## **```Leap of faith```**

The **leap of faith** in recursion is the act of assuming that a recursive function will work correctly, even though you haven't yet written the code for the recursive calls. This is because recursion works by breaking down a problem into smaller and smaller subproblems, until the subproblems are so small that they can be solved directly. The recursive function then uses the solutions to the subproblems to solve the original problem.

The leap of faith is necessary because you can't write the code for the recursive calls until you know how the function will work. But you can't know how the function will work until you've written the code for the recursive calls. So you have to take a leap of faith and assume that the recursive calls will work correctly.

The leap of faith is justified by the fact that recursion is a sound mathematical technique. If you correctly define the base cases and the recursive step, then the recursive function will always terminate and produce the correct answer.

Here's an example of the leap of faith in recursion. Let's say we want to write a recursive function to print the Fibonacci sequence. The Fibonacci sequence is a sequence of numbers where each number is the sum of the two previous numbers. The first two numbers in the sequence are 0 and 1, and the rest of the sequence is generated by adding the previous two numbers together.

The recursive function to print the Fibonacci sequence would look something like this:

```python
def fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
```

The base cases of this function are n == 0 and n == 1. In these cases, the function simply returns n. The recursive step of the function is to call itself twice, with n - 1 and n - 2 as the arguments. The function then returns the sum of the results of these two recursive calls.

&nbsp;

## **```How to construct a recursive function```**

Variables:

1. **Argument list of the function:** The variables that are required for the next recursive function call should be included in the recursive function argument list.

2. **Function body variables:** Variables declared in the body of a function are local to that function, meaning they cannot be accessed by other functions in the same call stack or upcoming function in the recursive tree. One should choose function body variables on the following basis:

    - **Variables that can be calculated and only needed within the function.** These variables should be declared as local variables, because there is no need to keep them around after the function has finished executing.

    - **Variables that will have no significance for the producing upcoming function calls or does not require to be in the argument list.** These variables can also be declared as local variables, because they do not need to be shared with other functions.

3. **Return type:**
