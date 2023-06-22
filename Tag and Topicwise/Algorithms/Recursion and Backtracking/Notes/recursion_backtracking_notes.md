# ```Recursion```

### <ins>**Definition**</ins>: When a function calls itself until a specific condition is met to terminate the function call process. The way recursion accomplish it's task is 'synchoronous'. If a recursive function encounters a multiple recursive calls within the function body, recursion will done this on top to bottom approach. That means it will take recursive function calls from very top, complete that particular recursive call and proceeds to the following recursive calls

&nbsp;

## **Stack overflow or segmentation fault**

    (1) Due to conditional check fails it could cause infinite recursive call.
    In the process, the internal stack filled up with a large amount of function calls which will eventually exceeds the limit of internal stack space.

    (2) Stack overflow causes segmentation fault.

## **Base Condition**

 The condition that checks for whether the recursive call should be stopped. &nbsp;

## **Recursive Tree**

Visual representation of recursive calls in a tree like diagram.

## **Backtracking**

The last function call executed first  
Print line must execute after the function call  
