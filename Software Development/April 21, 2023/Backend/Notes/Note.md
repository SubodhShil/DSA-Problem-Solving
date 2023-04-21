> # ```Working with Express.js```

Express js is a framework for Node.js which is used to create backend server with ease.

To create an express js project do follow the steps:

1. Run the commnad to initialize node package manager:
            npm init -y
    (1.1) This command creats an package.json file into the directory you've initialized the project.

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
