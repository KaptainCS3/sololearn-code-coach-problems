 const Popsicle = (siblings, popsicle)=>{
    (popsicle % siblings != 0) ? console.log("eat them yourself") : console.log("give away");
 }
 Popsicle(parseInt(prompt("Enter number of siblings: ")), parseInt(prompt("Enter number of Popsicles: ")))