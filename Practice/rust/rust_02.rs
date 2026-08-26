// String Palindrome
use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let word = input.trim();
    let reversed: String = word.chars().rev().collect();
    if word == reversed {
        println!("Yes, It's Palindrome");
    }else{
        println!("No, It's not")
    }
}