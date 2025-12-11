Hello, this is Carter Roberts, the student at Loyola University New Orleans under Dr. Omar EL Khatib who
produced this project for the COSC-A361-001: Languages & Paradigms course. In this file, I intend to both
explain some of the outlined intents and focuses of this project as well as how to navigate the file
structure I created for it.

SO WHAT IS THIS PROJECT?
This project is entitled "Variable Binding and Scope Analysis", and it primarily involves investigating and
displaying, through code snippets, scope chain diagrams, and written analysis/tables, the technical disparities
in creation and execution of programs between languages that are dynamically scoped and statically scoped. 
The code snippets attempt to do identical things within four different languages: C++, JavaScript, Python, and
Emacs Lisp. The firstmost is statically scoped with the most uptight variable binding, while JavaScript and 
Python are statically scoped but with either hybrid or run-time variable binding, and Emacs Lisp is fully
dynamically scoped. The project requirements & deliverables are listed on Canvas as follows:

REQUIREMENTS:
- Implement examples in C++, JavaScript, and Python (I added Emacs Lisp since all three of these use static
scoping, just with different variable binding rules due to how they manage compilation in general)
- Show static vs. dynamic scoping
- Demonstrate variable shadowing
- Test edge cases (nested scopes, closures)
- Compare binding times (compile-time vs. runtime)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
DELIVERABLES:
- Code snippets for each language
- Comparison table of scoping rules
- Analysis of design trade-offs
- Visual diagrams of scope chains
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~

HOW DO I GET TO ALL THE DELIVERABLES?
All source code snippets are found in the "src" directory, each filed into subdirectories for their topics.
There is an extremely small .txt in "src" that will tell you why there is no closure snippet for Emacs Lisp.
The "docs" directory will show scope diagrams, filed into identical subdirectories as "src", as they cover the 
code snippets. There you may also read a one-and-a-half page brief summative analysis of the pros and cons of
static vs. dynamic scoping, as well as compile-time vs. run-time variable binding. A short table comparing the
rules and details of the two modes of scoping is also available from "docs". Besides that, the base directory has
this file and a final reflection upon my work and, by proxy, the contents of the course.

WHAT DO I NEED TO RUN THESE SNIPPETS?
All you'll need is a way to run Emacs Lisp, C++, JavaScript, and Python files. I would recommend, for Emacs Lisp,
I would recommend finding a GNU mirror or alternative OS download from the Emacs website here: 
https://www.gnu.org/software/emacs/download.html

Thank you, and I hope you enjoy my work.