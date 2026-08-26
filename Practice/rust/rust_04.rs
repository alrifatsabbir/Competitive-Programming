// Largest/Smallest value in array
use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let n: usize = input.trim().parse().unwrap();

    let mut array = String::new();
    io::stdin().read_line(&mut array).unwrap();
    let arr: Vec<i32> = array
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .take(n)
        .collect();

    let max = arr.iter().max().unwrap();
    let min = arr.iter().min().unwrap();

    println!("{}", max);
    println!("{}", min);
}