#include <string>
#include <vector>
#include <unordered_set>

bool ECValidSudoku(const std::vector<std::vector<std::string>> &board) {
    // TODO: Validate the dimensions, symbols, rows, columns, and 3x3 boxes.
    (void)board;
    std::unordered_set<std::string> row[9];
    std::unordered_set<std::string> col[9];
    std::unordered_set<std::string> boxes[9];
    if(board.size()!=9){
        return false;
    }
    for(int i=0; i<9; i++){
        if(board[i].size()!=9){
            return false;
        }
        for(int j=0; j<9; j++){
            const std::string& cell = board[i][j];
            if(cell=="."){
                continue;
            }
            if(cell.size()!=1 || cell < "1" || cell > "9"){
                return false;
            }
            int box = 3*(i/3) + (j/3);
            if(row[i].count(cell)==1 || col[j].count(cell)==1 || boxes[box].count(cell)==1){
                return false;
            }
            row[i].insert(cell);
            col[j].insert(cell);
            boxes[box].insert(cell);
        }
    }
    return true;
    //return false;
}
