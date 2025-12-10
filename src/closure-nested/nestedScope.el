;; Author: Carter Roberts
;; Institution: Loyola University New Orleans
;; Instructor: Dr. Omar EL Khatib
;; Filename: nestedScope.el
;; Description: Uses functions and variables to see what function space can access what in Emacs Lisp
;; Date Created (MM/DD/YYYY): 12/9/2025 
;; Date Modified (MM/DD/YYYY): 12/10/2025

;; global space; can access anything instantiated within itself
;; global variable definition
(setq worldwide 25)

;; outer function; can access anything instantiated globally or within itself
(defun outer ()
	;; variable from outer function
	(setq outside 1998)
	;; all are accessible except inside, since there is no *specific instance* of inside within outer()
	(message "Access tests from within the outer function:")
	;; (message "Inside: %s" inside) ;; uncommenting this line should cause a running error
	(message "Outside: %s" outside)
	(message "Worldwide: %s" worldwide)
	;; outer function has to call inner function for it to do its job in reality
	(inner))

;; inner function; can access anything instantiated globally, within outer, or within itself
(defun inner ()
	;; variable from inner function
	(setq inside 0.0006)
	;; all are accessible, since the inner function can access instances of all of these
	(message "Access tests from within the inner function:")
	(message "Inside: %s" inside) 
	(message "Outside: %s" outside)
	(message "Worldwide: %s" worldwide))

;; global space has to call outer function for it to do its job in reality
(outer)
;; all of these are accessible because of dynamic scoping and the fact the instances were already put on
;; the call stack a line above in code
(message "Access tests from within global space:")
(message "Inside: %s" inside) 
(message "Outside: %s" outside) 
(message "Worldwide: %s" worldwide)
