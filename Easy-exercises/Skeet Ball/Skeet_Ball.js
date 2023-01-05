const skeetBall = (point, ticket) => {
  let rate;
  rate = ticket * 12;
  rate > point ? console.log("Try again") : console.log("Buy it!");
};
skeetBall(
  parseInt(prompt("Enter number of points :")),
  parseInt(prompt("Enter number of tickets :"))
);
