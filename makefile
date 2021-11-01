
FINDFILES = find ./ -type f \( -name \*.exe -o -name \*.out \)
# NOTE:	
# 	-type f 	->	only search for files (not directories)
#   \( & \)		->	are needed for the -type f to apply to all arguments
# 	-o			->	logical OR operator
# 	-name 		->	but the match is case insensitive

clean:
	@$(FINDFILES) -delete
	@echo Successfully removed exe files!