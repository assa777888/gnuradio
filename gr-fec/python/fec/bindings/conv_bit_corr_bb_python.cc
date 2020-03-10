/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/conv_bit_corr_bb.h>

void bind_conv_bit_corr_bb(py::module& m)
{
    using conv_bit_corr_bb    = gr::fec::conv_bit_corr_bb;


    py::class_<conv_bit_corr_bb,gr::block, gr::basic_block,
        std::shared_ptr<conv_bit_corr_bb>>(m, "conv_bit_corr_bb")

        .def(py::init(&conv_bit_corr_bb::make),
           py::arg("correlator"), 
           py::arg("corr_sym"), 
           py::arg("corr_len"), 
           py::arg("cut"), 
           py::arg("flush"), 
           py::arg("thresh") 
        )
        

        .def("data_garble_rate",&conv_bit_corr_bb::data_garble_rate,
            py::arg("taps"), 
            py::arg("syn_density") 
        )
        ;


} 
