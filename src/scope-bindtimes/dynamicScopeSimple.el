;; Author: Carter Roberts
;; Institution: Loyola University New Orleans
;; Instructor: Dr. Omar EL Khatib
;; Filename: dynamicScopeSimple.el
;; Description: Uses a "show x" function and two other functions which 
;; call it after redefining x to display dynamic scope in Emacs Lisp
;; Date Created (MM/DD/YYYY): 12/9/2025
;; Date Modified (MM/DD/YYYY): 12/9/2025

;; global definition for variable
(setq x 25)

;; function to display value of x
(defun show_x ()
	(message "in show_x(), x = %s" x))

;; function which changes x to 300 and prints it, works here b/c of call stack / dynamic scope
(defun dynamic1 ()
	;; binds a local x
	(let ((x 300))
		;; calls show_x() with it
		(show_x)))

;; function which changes x to 1 and prints it, works here b/c of call stack / dynamic scope
(defun dynamic2 ()
	;; binds a local x
	(let ((x 1))
		;; calls show_x() with it
		(show_x)))

;; calls both dynamic scope display functions
(dynamic1)
(dynamic2)