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

#include <gnuradio/blocks/stretch_ff.h>

void bind_stretch_ff(py::module& m)
{
    using stretch_ff    = gr::blocks::stretch_ff;


    py::class_<stretch_ff,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<stretch_ff>>(m, "stretch_ff")

        .def(py::init(&stretch_ff::make),
           py::arg("lo"), 
           py::arg("vlen") = 1 
        )
        

        .def("lo",&stretch_ff::lo)
        .def("set_lo",&stretch_ff::set_lo,
            py::arg("lo") 
        )
        .def("vlen",&stretch_ff::vlen)
        ;


} 
