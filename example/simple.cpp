#include <parser-spef.hpp>

int main(int argc, char* argv[]){

  if(argc != 2){
    std::cout << "Usage: ./simple [SPEF file]";
    return 1;
  }

  if(not std::experimental::filesystem::exists(argv[1])){
    std::cout << "Cannot found " <<  argv[1] << '\n';
    return 1;
  }

  // Create a SPEF parser
  spef::Spef parser;

  // Invoke the read function and check the return value
  if(parser.read(argv[1])){
    // Call dump function to see the content
    std::cout << parser.dump() << '\n';
  }
}
