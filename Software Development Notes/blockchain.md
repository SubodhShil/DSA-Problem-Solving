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

> # ```Project: Decentralized Drive```

**File system**  
Root  
  **⇢** **Frontend** (📁 client) [React js]  
  **⇢** **Smart contract/backend** (📁 smart_contract) [Solidity]  

Tools:

1. **IPFS (InterPlanetary File System)**: A network for decentralized data sharing and storing.
2. **Pinata**: Pinata is a service for easily store, manage and distribute files on IPFS network.

<p align="center" style="font-size: 20px"> <b>Algorithm</b> </p>

User will upload data or files in the IPFS network through our frontend application

Receiver can receive that data or files if user gives permission (access) to him.



