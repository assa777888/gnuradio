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

#include <gnuradio/fec/async_encoder.h>

void bind_async_encoder(py::module& m)
{
    using async_encoder    = gr::fec::async_encoder;


    py::class_<async_encoder,gr::block, gr::basic_block,
        std::shared_ptr<async_encoder>>(m, "async_encoder")

        .def(py::init(&async_encoder::make),
           py::arg("my_encoder"), 
           py::arg("packed") = false, 
           py::arg("rev_unpack") = true, 
           py::arg("rev_pack") = true, 
           py::arg("mtu") = 1500 
        )
        

        .def("general_work",&async_encoder::general_work,
            py::arg("noutput_items"), 
            py::arg("ninput_items"), 
            py::arg("input_items"), 
            py::arg("output_items") 
        )
        ;


} 
