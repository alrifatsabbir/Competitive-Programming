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