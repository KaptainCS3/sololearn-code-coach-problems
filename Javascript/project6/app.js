class Add {
  constructor(...words) {
    this.words = words;
  }
  print(){
    this.words.unshift("");
    this.words.push("");
    console.log(this.words.join("$"));
  }
}

var x = new Add("hehe", "hoho", "haha", "hihi", "huhu");
var y = new Add("this", "is", "awesome");
var z = new Add(
  "lorem",
  "ipsum",
  "dolor",
  "sit",
  "amet",
  "consectetur",
  "adipiscing",
  "elit"
);
x.print();
y.print();
z.print();
