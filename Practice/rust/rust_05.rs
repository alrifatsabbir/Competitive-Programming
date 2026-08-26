// Concat string 
use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut iter = input.split_whitespace();

    let s = iter.next().unwrap();
    let n = iter.next().unwrap();

    println!("{}{}", s, n);
}