## Transpiler

### About

This repo contains source code of the Transpiler to convert convert code in "super-stack" to "IITK-Traveller" which I along with Rishi Agarwal [210849] wrote in 4 days, with help of Akhil Agrawal [200076] during General Championship at IITK.

IITK - Traveller is an esoteric language designed by Programming Club,IIT Kanpur. Started as a fun winter project, the construct of the language is partially inspired by esolangs 3var and Taxi, and its major goal is to introduce IITK peeps to esolangs and provide them with a relatable, challenging and creative construct, in case they have been bored using the similar language constructs like C/C++,Java,Python etc.

### Important Note

The function of the `inputascii` works but will not work same as that in super-stack. I debugged the code but lost it somewhere. 
As of now I don't have time to debug it. Will remove this note once updated code is added.

Also the transpiler can be optimized further a lot. Once I get time, I'll update the code with updated new pointer approach for more efficient conversion.

### Instructions to Run

1. `g++ my_compiler.cpp bitwise.cpp -o bin`
2. `.\bin input.superstk`
> Assuming the source code (SuperStack Code) that has to transpiled is present in the file "input.superstk"

The above commands when executed produces the target code (IITK Traveller Code) in the file `output.iitktv`

The output file can be run on online IDE at `traveller.pclub.in`. But since it can't run code longer than ~560 lines, using offline compiler for IITK-Traveller will be preferred.

3. `.\windows_iitk_traveller.exe .\output.iitktvlr`