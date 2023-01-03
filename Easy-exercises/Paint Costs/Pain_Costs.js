const painCosts = (paint) => {
  const canvas_brushes = 40.0;
  let res, tax, total;
  res = paint * 5.0 + canvas_brushes;
  tax = Math.ceil((res * 10) / 100);
  total = Math.ceil(tax + res);
  console.log(`Total cost for project is : ${total}`);
};
painCosts(parseInt(prompt("Enter the number of colors: ")));
