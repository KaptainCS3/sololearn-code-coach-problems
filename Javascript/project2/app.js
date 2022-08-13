const main = () =>{
    let depth = parseInt(readLin(), 10)
    let remainDay = depth % 5
    let day = Math.floor(depth / 5)
    if(remainDay >= 3)
    console.log(day++)
    else
    console.log(day)
}
main();