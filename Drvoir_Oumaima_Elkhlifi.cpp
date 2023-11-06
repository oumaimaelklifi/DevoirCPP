   
   Devoir c++
   Oumaima EL Khlifi
   
#include <iostream>
using namespace std;

class Stack{
    private:
     int *stack; 
     int dimension;
     int nombreElement ; 
    public: 
    
    Stack(int taille =20 ){
        dimension=taille; 
        nombreElement=0;
        stack=new[taille]; }
        
   void operator>>(int n){
       if (dimension<0)
       throw "le stack n existe pas "
       try {
       if(dimension> nombreElement){
          stack[nombreElement++] = n; }
        else cout<<"la pile est pleine rien ne se passe " ; }}
        catch( char * c){
            cerr<<"erreur "<<c;
        }
        
    bool isEmpty(){
        return nombreElement == 0;}
    
    void operator>>(int n) {
        if (!isEmpty()) {
            n = stack[--nombreElement];}
      
    void operator>>(int& n) {
        if (!isEmpty()) {
            n = stack[--nombreElement];}
       
    int operator++() {
         if( dimension==nombreElement=){
             return 1; }
            else return 0;}
            
    int operator--() {
        if (isEmpty()){
        return 1; }
        else return 0; 
    }     
     ~Stack() {
        delete[] stack;
    }
     

int main()
{
    

    return 0;
}

