> # ```Blockchain```

## Solidity Programming Language

There are different blockchain networks for create blockchain based application. One of them is Solidity backed by Ethereum blockchain network.

> Hello world in Solidity

```
//SPDX-License-Identifier: MIT
pragma solidity ^0.8.16;

contract firstContract {
    string public sayHello = "Hello World!!";
}
```

* Data types
  * Value type  
    * boolean
    * integer: both positive and negative integer
    * usigned integer: positive integer
    * address: stores account address
    * bytes32:

  * Reference type

**There is no concept of null in solidity. So, it must filled up with some values in any variable**
