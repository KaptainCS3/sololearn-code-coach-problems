const main = () =>{
    let distance = parseInt(readLine(), 10);
    let time, hours, average;
    average = 40;
    hours = distance / average;
    time = hours * 60;
    console.log(time);
}
main();