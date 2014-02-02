/* -*- c++ -*- */
/* 
 * Copyright 2013 Achilleas Anastasopoulos, Zhe Feng.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_CDMA_FLAG_GEN_IMPL_H
#define INCLUDED_CDMA_FLAG_GEN_IMPL_H

#include <cdma/flag_gen.h>

namespace gr {
  namespace cdma {

    class flag_gen_impl : public flag_gen
    {
     private:
       int d_period;
       int d_onoff;
       int d_counter;

     public:
      flag_gen_impl(int period, int onoff);
      ~flag_gen_impl();
      int get_period() const { return d_period; }
      int get_onoff() const { return d_onoff; }
      void set_onoff(int onoff);


      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace cdma
} // namespace gr

#endif /* INCLUDED_CDMA_FLAG_GEN_IMPL_H */

