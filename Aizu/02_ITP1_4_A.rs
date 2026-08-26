/*
    Problem Code: ITP1_4_A
    Problem Name: A/B Problem
    Problem Link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
    Description: Write a program which reads two integers a and b, and calculates the following values:
    a ÷ b: d (in integer)
    remainder of a ÷ b: r (in integer)
    a ÷ b: f (in real number)
*/

use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    
    let a: i64 = iter.next().unwrap().parse().unwrap();
    let b: i64 = iter.next().unwrap().parse().unwrap();
    
    let d = a / b;
    let r = a % b;
    let f = (a as f64) / (b as f64);
    
    println!("{} {} {:.5}", d, r, f);
}
