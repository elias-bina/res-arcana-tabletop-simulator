


$(BIN)/%.o:%.cpp
	mkdir -p $(dir $@)
	gcc -o $@ -c $^ 

$(BIN)/%-make-exe:
	mkdir -p $(dir $@)
	g++ -o $(patsubst %-make-exe,%,$@)  $^ 


.PHONY:clean
clean:
	rm -rf $(BIN)