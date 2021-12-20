
FINDFILES = find . -type f \( -name \*.exe -o -name \*.out \) 

create:
	# TODO(Gene): Add if else here if the txt files are already there
	@touch Input.txt Output.txt
	@mkdir Output
	@echo Successfully Added Input Output txt Files

clean:
	@$(FINDFILES) -delete
	@echo Successfully removed exe files!