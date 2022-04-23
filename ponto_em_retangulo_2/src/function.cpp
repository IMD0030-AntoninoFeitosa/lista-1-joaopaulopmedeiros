#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
  location_t loc = location_t::BORDER;
  if(P.x < IE.x || P.x > SD.x || P.y < IE.y || P.y > SD.y){
    loc = location_t::OUTSIDE;
  } else if(P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y){
    loc = location_t::INSIDE;
  }
  return loc;
}