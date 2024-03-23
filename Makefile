CCOPTION = Wall std=gnu++11 D__USE_MINGW_ANSI_STDIO=1
FLAGS = $(addprefix -,$(CCOPTION))
CC = g++
OBJ = 3Sum.o Ez_ Find_the_Index_of_the_Firs_ Occurrence_in_a_String.o Ez_ Search_Insert_Position.o Ez_Dau_ngoac_hop_le.o Ez_Length_of_Last_Word.o Ez_Merge_Two_Sorted_Lists.o Ez_Palindrome_Number.o Ez_Remove_Duplicates_from_Sorted_Array.o Ez_Remove_Element.o Ez_Roman_to_Integer.o Ez_Tien_To_Dai_Nhat.o test.o 
SRC_DIR = E:\c++\luyencode.net\leetcode

output.exe: $(OBJ) 
	 $(CC) $(FLAGS) $(OBJ) -o output.exe 

3Sum.o: $(SRC_DIR)\3Sum.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\3Sum.cpp -o 3Sum.o 

Ez_ Find_the_Index_of_the_Firs_ Occurrence_in_a_String.o: $(SRC_DIR)\Ez_ Find_the_Index_of_the_Firs_ Occurrence_in_a_String.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_ Find_the_Index_of_the_Firs_ Occurrence_in_a_String.cpp -o Ez_ Find_the_Index_of_the_Firs_ Occurrence_in_a_String.o 

Ez_ Search_Insert_Position.o: $(SRC_DIR)\Ez_ Search_Insert_Position.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_ Search_Insert_Position.cpp -o Ez_ Search_Insert_Position.o 

Ez_Dau_ngoac_hop_le.o: $(SRC_DIR)\Ez_Dau_ngoac_hop_le.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Dau_ngoac_hop_le.cpp -o Ez_Dau_ngoac_hop_le.o 

Ez_Length_of_Last_Word.o: $(SRC_DIR)\Ez_Length_of_Last_Word.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Length_of_Last_Word.cpp -o Ez_Length_of_Last_Word.o 

Ez_Merge_Two_Sorted_Lists.o: $(SRC_DIR)\Ez_Merge_Two_Sorted_Lists.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Merge_Two_Sorted_Lists.cpp -o Ez_Merge_Two_Sorted_Lists.o 

Ez_Palindrome_Number.o: $(SRC_DIR)\Ez_Palindrome_Number.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Palindrome_Number.cpp -o Ez_Palindrome_Number.o 

Ez_Remove_Duplicates_from_Sorted_Array.o: $(SRC_DIR)\Ez_Remove_Duplicates_from_Sorted_Array.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Remove_Duplicates_from_Sorted_Array.cpp -o Ez_Remove_Duplicates_from_Sorted_Array.o 

Ez_Remove_Element.o: $(SRC_DIR)\Ez_Remove_Element.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Remove_Element.cpp -o Ez_Remove_Element.o 

Ez_Roman_to_Integer.o: $(SRC_DIR)\Ez_Roman_to_Integer.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Roman_to_Integer.cpp -o Ez_Roman_to_Integer.o 

Ez_Tien_To_Dai_Nhat.o: $(SRC_DIR)\Ez_Tien_To_Dai_Nhat.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Ez_Tien_To_Dai_Nhat.cpp -o Ez_Tien_To_Dai_Nhat.o 

test.o: $(SRC_DIR)\test.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\test.cpp -o test.o 


clean: 
	del /Q $(OBJ_DIR)\*.o
	del /Q $(BUILD_DIR)\*.exe
