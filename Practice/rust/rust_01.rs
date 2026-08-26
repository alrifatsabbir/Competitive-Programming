// String Reverse
use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let reversed: String = input.chars().rev().collect();
    println!{"{}", reversed};
}