import { compare, absolute } from './library.mjs'

const cons_$LEXEM1 = 1;
const cons_$LEXEM2 = "Hello, world";
const cons_$LEXEM4 = "Everything successfuly!";
const main$LEXEM5 = 5;
const main$LEXEM6 = "The result of function cons";
const main$LEXEM7 = "str1";
const main$LEXEM8 = "str";
const main$LEXEM9 = "The result of comparing two string";
const main$LEXEM13 = 0;
const main$LEXEM14 = 2;
const main$LEXEM15 = "The result modul number";
const main$LEXEM16 = 'G';
const main$LEXEM17 = "The result symbol type";
const main$LEXEM19 = 21;
const main$LEXEM20 = 3;
const main$LEXEM22 = "Output negative number";
const main$LEXEM25 = "The result mod two number";
const main$LEXEM26 = "The result of the modul return function";
const main$LEXEM27 = 28;
const main$LEXEM28 = 100;
const main$LEXEM29 = "Output integer number";
const main$LEXEM31 = "Output string";
const main$LEXEM32 = "This variable is false";
const main$LEXEM33 = 1;
const main$LEXEM34 = "Output result condition";
const main$LEXEM35 = "This variable is true";
const main$LEXEM41 = 8;
const main$LEXEM43 = "The result of shift left by 2";
const main$LEXEM44 = 127;
const main$LEXEM46 = "The result of shift right by 1";
const main$LEXEM49 = 0;

try {function cons(cons_b)
{
while((cons_b>cons_$LEXEM1))
{
console.log(cons_$LEXEM2);
cons_b=cons_b-cons_$LEXEM1;
}
;
return cons_$LEXEM4;
}
;
function main()
{
let mainres = "";
mainres=cons(main$LEXEM5);
console.log(main$LEXEM6);
console.log(mainres);
let mainresultComp = 0;
mainresultComp=compare(main$LEXEM7, main$LEXEM8);
console.log(main$LEXEM9);
console.log(mainresultComp);
let maincomparemen = 0;
maincomparemen=compare(main$LEXEM8, main$LEXEM7);
console.log(main$LEXEM9);
console.log(maincomparemen);
let mainabs = 0;
mainabs=main$LEXEM13-main$LEXEM14;
let maindo = 0;
maindo=absolute(mainabs);
console.log(main$LEXEM15);
console.log(maindo);
let maincr1 = 0;
maincr1=main$LEXEM16;
console.log(main$LEXEM17);
console.log(maincr1);
let mainabsolutly = 0;
mainabsolutly=cons_$LEXEM1-main$LEXEM19*main$LEXEM20/main$LEXEM20+absolute(mainabs);
if(mainabsolutly=== Infinity) { throw new Error('you cant divide by zero');}
console.log(main$LEXEM22);
console.log(mainabsolutly);
let mainmod = 0;
mainmod=main$LEXEM5%main$LEXEM14;
console.log(main$LEXEM25);
console.log(mainmod);
let mainabsol = 0;
mainabsol=absolute(mainabsolutly);
console.log(main$LEXEM26);
console.log(mainabsol);
let mainvar = 0;
mainvar=main$LEXEM27;
let maingg = 0;
maingg=main$LEXEM28;
console.log(main$LEXEM29);
console.log(maingg);
let mainvar1 = "";
mainvar1=cons_$LEXEM2;
console.log(main$LEXEM31);
console.log(mainvar1);
let mainvar4 = 0;
if((mainvar4))
{
console.log(main$LEXEM32);
}
;
mainvar4=main$LEXEM33;
console.log(main$LEXEM34);
if((mainvar4))
{
console.log(main$LEXEM35);
}
;
let mainvar5 = 0;
mainvar5=cons_$LEXEM1|main$LEXEM14&main$LEXEM20;
console.log(mainvar5);
let mainvar6 = 0;
mainvar6=cons_$LEXEM1&cons_$LEXEM1;
console.log(mainvar6);
let mainvar7 = 0;
mainvar7=main$LEXEM41>>main$LEXEM14;
console.log(main$LEXEM43);
console.log(mainvar7);
let mainvar8 = 0;
mainvar8=main$LEXEM44<<cons_$LEXEM1;
console.log(main$LEXEM46);
console.log(mainvar8);
let mainzero = 0;
let mainname = 0;
mainname=main$LEXEM14;
mainzero=cons_$LEXEM1/(mainname-mainname);
if(mainzero=== Infinity) { throw new Error('you cant divide by zero');}
console.log(mainzero);
return main$LEXEM49;
}
main();
} 
catch (e) { 
console.log(e.message);
 }