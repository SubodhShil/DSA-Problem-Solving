> # ```Working with Express.js```
>
> ### ```Study date: April 21, 2023```

Express.js is a framework for Node.js that is used to create backend servers with ease.

## <p align="center"><b>Create Express.js Project</b></p>

To create an Express.js project, follow these steps:

1. Run the command to initialize the Node Package Manager(NPM):  
            ```npm init -y```  
    **(1.1)** This command creats an package.json file into the directory you've initialized the project.

2. Install express js package and nodemon package together by running this command:  
    ```npm install express nodemon```  
    An alternative command is:  
    ```npm i express nodemon```  
    **(2.1)** instead of 'install' keyword we can use 'i'  
    **(2.2)** nodemon is a package that let us track change and show new changes realtime without restarting the server again and again  
    **(2.3)** to install multiple package you have to write the package name after 'npm install' or 'npm i' that you want to install.

3. **Use .gitignore to exclude node_modules.**  
     Node modules are libraries that are hefty size. So, it is not a good idea to add those node modules to your github repository. To not include node_modules into your github repo,  
    **(3.1)** <ins>first of all create a file with name ```.gitignore```</ins>  
    **(3.2)** In the .gitignore file write the directory you want to exclude, in the case we have to exclude node_modules folder. So, we will write ```node_modules/```  
4. The basic command to run an express project using nodemon package is: ```nodemon index.js```  
But, you can change the long command by do the following:  
    **(4.1)** Go to package.json file  
    **(4.2)** You'll see this object:  

    ```
    "scripts": {
        "test": "echo \"Error: no test specified\" && exit 1"
    }
    ```

    **(4.3)** Replace above code with this:

    ```
    "scripts": {
        "test": "echo \"Error: no test specified\" && exit 1",
        "start": "nodemon index.js"
    },
    ```

    The line "start": "nodemon index.js" will let you replace long command **nodemon index.js** with  
    ```npm start```

## **🤔 What is Port?**

👉 Port is is endpoint (URL of a server) or more specificly a number where your express application should run or listen to. **The default port of epxress is ***port 3000***.** You access the server at <http://localhost:3000> in your web browser.

We can change our port as our preference by specifying the port number as an argument to the listen() method.

```
/// require express to use it
const express = require('express');
const app = express();

/// Your application will serve at http://localhost:PORT
const PORT = 4000;

app.listen(PORT, () => {
    console.log(`Server is running on ${PORT}`);
});
```

To execute the aforementioned application, carry out step 4 of **Create Express.js Project**.

> ## **Error**

<ins>Error message:</ins> **..\nodemon.ps1 cannot be loaded because running scripts is disabled on this system.**  

Operating system: Windows 11

**Fix: <https://stackoverflow.com/questions/63423584/how-to-fix-error-nodemon-ps1-cannot-be-loaded-because-running-scripts-is-disabl>**

Other Notes:

1. How to update a package: ```npm update <your_package_name>```
2. The **index.js** file should be simple and clean, it should mainly contain server listen methods.
