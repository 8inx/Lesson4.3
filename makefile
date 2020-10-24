
discount: compile1
	@clear
	@./output/output1
	@echo "\n\n\n"

bonus: compile2
	@clear
	@./output/output2
	@echo "\n\n\n"
	
cashv: compile3
	@clear
	@./output/output3
	@echo "\n\n\n"
	
compile1:	./01_discount/01_discount.cpp
	@g++ -o ./output/output1 ./01_discount/01_discount.cpp

compile2:	./02_annualBonus/02_annualBonus.cpp
	@g++ -o ./output/output2 ./02_annualBonus/02_annualBonus.cpp

compile3:	./03_cashValue/03_cashValue.cpp
	@g++ -o ./output/output3 ./03_cashValue/03_cashValue.cpp


