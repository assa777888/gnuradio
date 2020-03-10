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

#include <gnuradio/filter/dc_blocker_ff.h>

void bind_dc_blocker_ff(py::module& m)
{
    using dc_blocker_ff    = gr::filter::dc_blocker_ff;


    py::class_<dc_blocker_ff,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<dc_blocker_ff>>(m, "dc_blocker_ff")

        .def(py::init(&dc_blocker_ff::make),
           py::arg("D"), 
           py::arg("long_form") = true 
        )
        

        .def("group_delay",&dc_blocker_ff::group_delay)
        ;


} 
