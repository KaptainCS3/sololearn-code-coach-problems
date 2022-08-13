const main = () =>{
    let amount = parseFloat(readLine(), 10)
    let rate = parseFloat(readLine(), 10)
        const convert = (amount, rate) =>{
            return amount * rate
        }
        console.log(convert(amount, rate));
}
main()