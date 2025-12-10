;; Author: Carter Roberts
;; Institution: Loyola University New Orleans
;; Instructor: Dr. Omar EL Khatib
;; Filename: implicitPointers.el
;; Description: Shows how pointers are implicit & underground using cons cells (pairs of two that make up 
;; lists like a linked list in Emacs Lisp) in languages with run-time binding like Emacs Lisp
;; Date Created (MM/DD/YYYY): 12/9/2025
;; Date Modified (MM/DD/YYYY): 12/9/2025

;; create object (list) variables designed to be pointed to
(setq x '(25 35 45))
(setq y '(100 200 300))

;; define pointers to connect to object variables in pairs called cons cells, which make up all lists
(setq xptr x)
(setq yptr y)

;; append 55 into end of both x and xptr through x, which is the actual throughpoint in emacs
(nconc x (list 55))
;; remove 200 from both y and yptr through y, which is the actual throughpoint in emacs
(setq y (delete 200 y))

;; show new values
(message "x is now %s" x)
(message "xptr is now %s" xptr)
(message "y is now %s" y)
(message "yptr is now %s" yptr)