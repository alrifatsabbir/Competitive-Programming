/*
    Problem Code- ERROR404
    Problem Name- 404 Not Found
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ERROR404
    Description- Chef's website has a specific response mechanism based on the HTTP status code received: If the response code is 404, the 
    website will return NOT FOUND. For any other response code different from 404, the website will return FOUND. Given the response code as X, 
    determine the website response.
*/
process.stdin.setEncoding("utf-8");

const status = (httpStatusCode) => {
    (httpStatusCode === 404) ? console.log("NOT FOUND"): console.log("FOUND");
};

process.stdin.on("data", (input) => {
    const httpStatusCode = Number(input.trim());
    status(httpStatusCode);
});