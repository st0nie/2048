;;; Directory Local Variables            -*- no-byte-compile: t -*-
;;; For more information see (info "(emacs) Directory Variables")

((nil . ((projectile-project-compile-cmd . "make")
		 (projectile-project-run-cmd . "make run")
		 (projectile-run-use-comint-mode . t)))
 (c-mode . ((eval . (c-add-style "llvm.org"
								 '("gnu"
								   (fill-column . 80)
								   (c++-indent-level . 2)
								   (c-basic-offset . 2)
								   (indent-tabs-mode)
								   (c-offsets-alist
									(arglist-intro . ++)
									(innamespace . 0)
									(member-init-intro . ++)))))
			(c-file-style . "llvm.org"))))
