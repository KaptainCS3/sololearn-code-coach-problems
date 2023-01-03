const hoverCraft = (customer) => {
  const amt_in = 21000000;
  let new_amt;
  new_amt =
    3000000 * customer(new_amt > amt_in)
      ? console.log("Profit")
      : new_amt === amt_in
      ? console.log("Broke Even")
      : console.log("Loss");
};
