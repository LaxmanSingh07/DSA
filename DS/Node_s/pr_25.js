// // you generally use that module which you are importing 

// //you either can add your file or any core module 

// //gererally we look for the global module 
// // const { appendFile } = require('fs');
// const http = require('http');
// const fs=require('fs'); //fs is stand for file stystem
// const { parse } = require('path');
// // const { exitCode } = require('process');

// // requestListener will take two arguments


// //it is one way 
// // function rqListener(req,res){

// // }
// // http.createServer(rqListener); //The requestListener is a function which is automatically added to the 'request' event
// //this is another way 

// // http.createServer(function(req,res){

// // });

// const server = http.createServer((req,res) => {
//     // console.log(req.url,req.method,req.headers);
//     // process.exit();
//     const url=req.url;
//     const method=req.method; // parsing of the method 

//     if(url==='/'){
//       res.write('<html>');
//       res.write('<head><title> My first Page </title></head>');
//       res.write('<body><form action="/message" method="POST"><input type="text" name="message"><button type="submit">Send</button></form></body>');
//       res.write('</html>');
    
//       //we always Q2 call end to the node 
//       return res.end();// nodejs will seneded back to the client 
      
//     }
//     if(url==='/message' && method ==='POST'){
//       const body=[];
//       req.on('data',(chunk)=>{
//           console.log(chunk)
//           body.push(chunk);
//       }); //on allow us to listen the certain event   
//       req.on('end',()=>{
//         const parseBody=Buffer.concat(body).toString;
//         // console.log(parseBody);
//         const message=parseBody.split('=')[1];

//       });
//       fs.writeFileSync('message.txt',
//         'Dummy56465'); 
//         res.statusCode=302;
//         res.setHeader('Location','/');
//         return res.end();
//   }

//     res.setHeader('Content-Type','text/html'); //Content-Type is by default 
//     res.write('<html>');
//     res.write('<head><title> My first Page </title></head>');
//     res.write('<body><h1>Hello from my Node js Server</h1></body>');
//     res.write('</html>');
  
//     //we always should call end to the node 
//     res.end();// nodejs will seneded back to the client 

// });


// //listen will started a process 

// // Start a server listening for connections. A net.Server can be a TCP or an IPC server depending on what it listens to.

// // Possible signatures:
// //port : 3000
// server.listen(3000); // we will be on going listening process 



// // node avvvv/v1/pp.js -----> Start Script
// //              ParseCode,Register


// // event loop

// //understanding request 
 
// //headers are meta data


