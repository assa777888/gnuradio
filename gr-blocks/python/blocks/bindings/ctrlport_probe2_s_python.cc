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

#include <gnuradio/blocks/ctrlport_probe2_s.h>

void bind_ctrlport_probe2_s(py::module& m)
{
    using ctrlport_probe2_s    = gr::blocks::ctrlport_probe2_s;


    py::class_<ctrlport_probe2_s,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<ctrlport_probe2_s>>(m, "ctrlport_probe2_s")

        .def(py::init(&ctrlport_probe2_s::make),
           py::arg("id"), 
           py::arg("desc"), 
           py::arg("len"), 
           py::arg("disp_mask") 
        )
        

        .def("get",&ctrlport_probe2_s::get)
        .def("set_length",&ctrlport_probe2_s::set_length,
            py::arg("len") 
        )
        ;


} 
