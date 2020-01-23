/* https://developer.mozilla.org/en-US/docs/Web/API/Headers/Headers

   Example: `var myHeaders = new Headers(); // Currently empty`
    */
type t;
// [@bs.module] [@bs.new] external headers: unit => t = "Headers";
[@bs.new] external headers: unit => t = "Headers";
[@bs.send] external append: (t, string, string, unit) => t = "append";
[@bs.send.pipe: t] external append1: (t, string, string, unit) => t = "append";
[@bs.send.pipe: t] external get: string => string = "get";
let myHeaders = headers();
let myHeaders1 = append(myHeaders, "Content-Type", "image/jpeg");
let myHeaders2 = append1(myHeaders, "Content-Type", "image/jpeg");

Js.log2("myHeaders1", myHeaders1());
Js.log2("myHeaders2", myHeaders2());
Js.log2("headers", headers());