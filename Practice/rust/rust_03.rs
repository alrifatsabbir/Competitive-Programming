// Exchange value in two variable without using third variable
use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut iter = input.split_whitespace();
    let mut a: i32 = iter.next().unwrap().parse().unwrap();
    let mut b: i32 = iter.next().unwrap().parse().unwrap();

    println!("Before Swap: A = {} and B = {}", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    println!("After Swap: A = {} and B = {}", a, b);
}