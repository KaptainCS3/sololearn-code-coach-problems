const contact = (name, number) =>{
    this.name = name
    this.number = number
    this.print = () =>{
        console.log(`${this.name}:${this.number}`)
    } 
}

let david = new contact('David', 12345) 
let amy = new contact('Amy', 987654321)

david.print()
amy.print()