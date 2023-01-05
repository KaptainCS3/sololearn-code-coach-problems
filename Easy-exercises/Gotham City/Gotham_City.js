const gothamCity = (criminals) => {
  criminals > 10
    ? console.log("Good Luck out there!")
    : criminals >= 5 && criminals < 10
    ? console.log("Help me Batman")
    : console.log("I got this!");
};
gothamCity(parseInt(prompt("Enter number of criminals")));
