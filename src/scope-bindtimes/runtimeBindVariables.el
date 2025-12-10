;; Author: Carter Roberts
;; Institution: Loyola University New Orleans
;; Instructor: Dr. Omar EL Khatib
;; Filename: runtimeBindVariables.el
;; Description: Tests changing a variable's type without casting to show how runtime
;; variable binding allows fluid type redefinition for variables
;; Date Created (MM/DD/YYYY): 12/9/2025
;; Date Modified (MM/DD/YYYY): 12/9/2025

(setq x 25)
(message "X as an integer = %s" x)

;; this & below doesn't cause a compiling error due to runtime variable binding
(setq x nil)
;; nil here just means false, in emacs anything but nil treated as true and nil false
(message "X as a bool = %s" x)

;; isn't just numeric-to-bool, can also become a string
(setq x "Good Afternoon, Madame!")
(message "X as a string = %s" x)

;; create function to turn x into an instance of
(defun add2 (numx)
	(+ numx 2))

;; You can turn variables into instances of functions, too!
(setq x #'add2)
;; should print 32
(message "X as a function of add2(30) = %s" (funcall x 30))
