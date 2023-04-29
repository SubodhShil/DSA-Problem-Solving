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

```
  Root
  ├──📁 Frontend [client-side]
  │   └── Framework: React js
  └──📁 Smart contract [Backend]
      └── Language: Solidity
```

Tools:

1. **IPFS (InterPlanetary File System)**: A network for decentralized data sharing and storing.
2. **Pinata**: Pinata is a service for easily store, manage and distribute files on IPFS network.

<h2 align="center"> <b>Algorithm</b> </h2>

User will upload data or files in the IPFS network through our frontend application

Receiver can receive that data or files if user gives permission (access) to him.

### **2D Mapping**

```
mapping(address => mapping(address=>bool))ownership;
```

The ownership mapping is a two-dimensional mapping that maps an address to another mapping that maps an address to a boolean value. It seems like hashmap or JavaScript object.

Here's a diagram to help visualize the structure of the mapping:

```
           ownership
             /   \
            /     \
address =>      address => bool
            \     /
             \   /

```

The outer address key is used to look up the inner mapping that maps an address to a bool value.

Here's an example to help understand how this mapping works:

Let's say we have a smart contract that represents ownership of digital tokens. The ownership mapping keeps track of whether or not a token owner has granted ownership of a token to another Ethereum address.

Suppose we have the following mapping:

```
ownership = {
  0x123: {
    0x456: true,
    0x789: false
  },
  0xabc: {
    0xdef: true
  }
}
```

<details>
  <summary style="font-size: 35px;"><strong>Note</strong></summary>
You can add more addresses to the ownership mapping by adding additional key-value pairs to the inner mapping that corresponds to a specific address. In your example, you can add additional addresses to the mapping for 0x123 like this:

  ```
  ownership = {
    0x123: {
      0x456: true,
      0x789: false, 
      0x555: true,
      0x888: false
    }
  }
  ```

This will add the addresses 0x555 and 0x888 to the mapping for 0x123, with the corresponding boolean values of true and false, respectively.

So, you can have an unlimited number of addresses mapped to a specific address key, as long as you have enough storage space available in your contract to store the mapping data.

</details>
In this example, the owner at address 0x123 has granted ownership of a token to two different addresses (0x456 and 0x789). The owner at address 0xabc has granted ownership of a token to address 0xdef.

We can use the ownership mapping to check if a particular owner has granted ownership of a token to a particular address. For example, we can check if the owner at address 0x123 has granted ownership of a token to address 0x456:

```
bool isOwner = ownership[0x123][0x456];
```

This will return true because the owner at address 0x123 has granted ownership of a token to address 0x456.

### Functions

function add(address_user, string memory url)
