# Algorithm

DEFINE FUNCTION readFile(): VOID
        OPEN FILE "data.csv"
        IF file is open
            CREATE VARIABLE BOOL keepGoing ASSIGN true
            WHILELOOP keepGoing Equals true
                Split the line into variables int"num1", int"num2", str"word"
                FORLOOP INCREMENT i until (num1 + num2) - 1
                    PRINT word (No new line)

                PRINT Endline

                IF End of File
                    ASSIGN keepGoing to false
                    
DEFINE FUNCTION main(): INT
    
    CALL readFile()

    RETURN 0
