class Add {
  constructor(...words) {
    this.words = words;
    this.print = function print() {
      const mapData = words.map((el) => {
        return el[0].replace("", "$") + el.slice(1);
      });
      const data = mapData.toString();
    };
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
