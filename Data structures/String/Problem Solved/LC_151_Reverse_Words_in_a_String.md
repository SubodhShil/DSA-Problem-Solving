1. We test cases can have two type of edge cases:
    - Test case can have **trailing or leading** space characters.

    ```
    "   A baby is crying     "
    ```

    - The could have **multiple space characters between words**

    ```
    "You are         what you believe in. You become that           which you           believe you can become.  –           Bhagavad Gita"
    ```

## <ins>Optimal solution algorithm</ins>

1. First loop: We will take two index pointer as **'i'** and **'j'**. The index 'i' will be start traversing from left (0th index) toward right until it get any non-space character. The loop will be immedietly terminated if it gets a non-space character. Thus, **'i' will be contain the index from where non-space characters or word has started.**

2. Now, after the first loop is finished, an index pointer namely 'j' will be start 
