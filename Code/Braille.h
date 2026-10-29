#define Braille_h

#include <Arduino.h>

class Braille{
  public:
  Braille();
  void Begin(int bauds);
  std::array<int, 6> Get_Character(char Character);
  private:
  std::array<int, 6> a = { 1, 0,    
                           0, 0,   
                           0, 0 };

  std::array<int, 6> b[6] = {   1, 0,    
                                1, 0,   
                               0, 0 };

  std::array<int, 6> c[6] = { 1, 1,    
                              0, 0,   
                              0, 0 };

  std::array<int, 6> d[6] = { 1, 1,    
                              0, 1,   
                              0, 0 };

  std::array<int, 6> e[6] = {  1, 0,    
                               0, 1,   
                               0, 0 };
  
  std::array<int, 6> f[6] = {  1, 1,        
                               1, 0,   
                               0, 0 };
  
  std::array<int, 6> g[6] = {  1, 1,        
                               1, 1,   
                               0, 0 };
  
  std::array<int, 6> h[6] = {  1, 0,        
                               1, 1,   
                               0, 0 };
  
  std::array<int, 6> i[6] = {  0, 1,        
                               1, 0,   
                               0, 0 };
  
  std::array<int, 6> j[6] = {  0, 1,        
                               1, 1,   
                               0, 0 };
  
  std::array<int, 6> k[6] = {  1, 0,        
                               0, 0,        
                               1, 0 };
  
  std::array<int, 6> l[6] = {  1, 0,        
                               1, 0,   
                               1, 0 };
  
  std::array<int, 6> m[6] = {  1, 1,        
                               0, 0,   
                               1, 0 };
  
  std::array<int, 6> n[6] = {  1, 1,        
                               0, 1,   
                               1, 0 };
  
  std::array<int, 6> o[6] = {  1, 0,        
                               0, 1,   
                               1, 0 };
  
  std::array<int, 6> p[6] = {  1, 1,        
                               1, 0,   
                               1, 0 };
  
  std::array<int, 6> q[6] = {  1, 1,        
                               1, 1,   
                               1, 0 };
  
  std::array<int, 6> r[6] = {  1, 0,        
                               1, 1,   
                               1, 0 };
  
  std::array<int, 6> s[6] = {  0, 1,        
                               1, 0,   
                               1, 0 };
  
  std::array<int, 6> t[6] = {  0, 1,        
                               1, 1,   
                               1, 0 };
  
  std::array<int, 6> u[6] = {  1, 0,        
                               0, 0,   
                               1, 1 };
  
  std::array<int, 6> v[6] = {  1, 0,        
                               1, 0,   
                               1, 1 };
  
  std::array<int, 6> w[6] = {  0, 1,        
                               1, 1,   
                               0, 1 };
  
  std::array<int, 6> x[6] = {  1, 1,        
                               0, 0,   
                               1, 1 };
  
  std::array<int, 6> y[6] = {  1, 1,        
                               0, 1,   
                               1, 1 };
  
  std::array<int, 6> z[6] = {  1, 0,        
                               0, 1,   
                               1, 1 };

};