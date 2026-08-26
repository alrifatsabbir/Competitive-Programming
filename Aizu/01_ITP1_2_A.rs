/*
    Problem Code: ITP1_2_A
    Problem Name: Small, Large, or Equal
    Problem Link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_A
    Description: Write a program which prints small/large/equal relation of given two integers a and b.
*/

use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    
    let a: i32 = iter.next().unwrap().parse().unwrap();
    let b: i32 = iter.next().unwrap().parse().unwrap();
    
    if a < b {
        println!("a < b");
    } else if a > b {
        println!("a > b");
    } else {
        println!("a == b");
    }
}
