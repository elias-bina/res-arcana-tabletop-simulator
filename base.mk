


%.o:%.cpp
	gcc -o $@ -c $^ 

%-make-exe:
	mkdir -p ${BIN}
	g++ -o ${BIN}/$(patsubst %-make-exe,%,$@)  $^ 


.PHONY:clean
clean:
	rm -f src/*.o
	rm -rf ${BIN}