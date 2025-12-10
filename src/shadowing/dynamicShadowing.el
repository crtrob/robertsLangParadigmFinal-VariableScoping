;; Author: Carter Roberts
;; Institution: Loyola University New Orleans
;; Instructor: Dr. Omar EL Khatib
;; Filename: dynamicShadowing.el
;; Description: Displays shadowing of global variable inside function
;; Date Created (MM/DD/YYYY): 12/9/2025
;; Date Modified (MM/DD/YYYY): 12/9/2025

;; global definition for variable
(setq x 25)

;; locality for shadowed x
(let ((x 95))
	(message "Local, shadowing x: %s" x))

;; show global x
(message "Global, shadowed x: %s" x)