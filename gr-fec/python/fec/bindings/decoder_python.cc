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

#include <gnuradio/fec/decoder.h>

void bind_decoder(py::module& m)
{
    using decoder    = gr::fec::decoder;


    py::class_<decoder,gr::block, gr::basic_block,
        std::shared_ptr<decoder>>(m, "decoder")

        .def(py::init(&decoder::make),
           py::arg("my_decoder"), 
           py::arg("input_item_size"), 
           py::arg("output_item_size") 
        )
        

        .def("general_work",&decoder::general_work,
            py::arg("noutput_items"), 
            py::arg("ninput_items"), 
            py::arg("input_items"), 
            py::arg("output_items") 
        )
        .def("fixed_rate_ninput_to_noutput",&decoder::fixed_rate_ninput_to_noutput,
            py::arg("ninput") 
        )
        .def("fixed_rate_noutput_to_ninput",&decoder::fixed_rate_noutput_to_ninput,
            py::arg("noutput") 
        )
        .def("forecast",&decoder::forecast,
            py::arg("noutput_items"), 
            py::arg("ninput_items_required") 
        )
        ;


} 
