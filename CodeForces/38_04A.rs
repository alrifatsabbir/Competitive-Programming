/*
    Problem Code- 4A
    Problem Name- Watermelon
    Problem Link- https://codeforces.com/problemset/problem/4/A
    Description- One hot summer day, Petya and his friend Vasya decided to buy a watermelon. They chose the largest and ripest one, in their opinion.
    After a quick weighing, the scale showed w kilograms. Rushing home, thirsty, the boys began dividing the berry they'd bought, but they faced a difficult task. 
    Petya and Vasya are big fans of even numbers, so they want to divide the watermelon so that each person's share weighs an even number of kilograms, 
    although the shares don't necessarily have to be equal in size. The boys are very tired and eager to start eating, so you need to help them decide whether 
    they can divide the watermelon according to their wishes. Of course, each person should get a piece of positive weight.
*/

use std::io;

fn main(){
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Error");
    let num:i32 = input.trim().parse().expect("Error in first int");
    if num % 2 == 0 && num > 2{
        println!("YES");
    }else{
        println!("NO");
    }
}