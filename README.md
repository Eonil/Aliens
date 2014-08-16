README
======
2014/04/25
Hoon H.



Eonil's Aliens library.







This is a collection of small to medium sized external code. (large
code such as Bullet will be separated into a separated project)

The `Aliens` project is an aggregation library. You can use each component 
projects directly if you don't want all the features at once.

This library may contain a stub function or classes to make it easier to use
each features.











Included Libraries
------------------
See `CREDIT.md` file for details.


	
	
	
	
Packaging Style and Name Clash
------------------------------
This library contains many alien symbols. These symbol names are not designed, 
then they can be duplicated in static library package.

Make sure that you are not using duplicated symbols. Linker is known not to warn 
about duplicated symbols without special flags. (such as `-load_all`)

If you're not sure, then use dynamic library/framework package. Anyway I do not
provide dynamic framework packge for C++ project due to lack of ability to copy 
hierarchical header files in Xcode. Only C/Objective-C features will be provided. 
You need to package them yourself manually if you want. Otherwise, just link Xcode
project. In other words, you always need full project source code to link C++
library.


	




64-Bit Compatibility
--------------------
Many libraries are designed only for 32-bit systems.
Some of them really doesn't respect integer sizes. On 64-bit systems, the libraries gives me tons
of *implicit integer conversion* warning. This is bad, but I have no good way to deal with them, 
and currently, I am just ognoring them. So beware when you have sensitive logics with the implicity
conversion. 


	
	
	

Maintenance
-----------
`Eonil` directory is symlinked for easier header referencing.
External libraries may contains some compiler warnings. Do not make a fork to fix them.

-	Discount

	I followed this procedure to get source code.
	
	1.	Download master branch from [Github](https://github.com/Orc/discount)
	2.	`./configure.sh; make`.
	3.	Create a new Xcode project. (or erase all existing files)
	4.	Copy all `.h` and `.c` files.
	5.	Erase all `.c` files which contain `main` function.
	6	Adjust warning levels to suppress false warnings. (Refer [this discussion](https://github.com/Orc/discount/issues/105`))


-	PugiXML

	API seems well designed and so nice enough to be exposed to users directly.






License
-------
My portion of work is licensed under MIT License.
All other included libraries follow their own licensing models, see each subproject for details.
Do not forget to credit authors of each libraries.







