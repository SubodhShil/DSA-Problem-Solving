> # ```Module 06```

## <p align="center"><b>Increment and Decrement Operator</b></p>

1. Increment by one:
    - i = i + 1
    - i += 1
    - i++ (**Post increment**: value to add in next statement). Guess the output:

        ```
            int i = 10;
            int x = i++;
            cout << x << endl;
            cout << i << endl;
        ```

        <details>
                <summary>See the result</summary>

               10
               11
        </details>

        <details>
                <summary>Explanation</summary>
                Here the variable 'i' is initially set as value '10'. In the variable 'x' it was initialized with pre-incremented 'i'. That means, the 'i' will be update it's value by 1 in the next statement when again 'i' will appeared. So, still it's value is '10'. That is why variable 'x' will have value '10' and in the next statement 'i' appears once again so it was updated by '11'.
        </details>
    - ++i (**Pre increment**: value is add instantly)

&nbsp;

2. Decrement by one
    - i = i - 1
    - i -= 1
    - i-- (**Post-decrement**: value to decrease in the next statement)
    - --i (**Pre-decrement**: value to decrease instantly)
