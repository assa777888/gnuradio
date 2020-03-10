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

#include <gnuradio/blocks/delay.h>

void bind_delay(py::module& m)
{
    using delay    = gr::blocks::delay;


    py::class_<delay,gr::block, gr::basic_block,
        std::shared_ptr<delay>>(m, "delay")

        .def(py::init(&delay::make),
           py::arg("itemsize"), 
           py::arg("delay") 
        )
        

        .def("dly",&delay::dly)
        .def("set_dly",&delay::set_dly,
            py::arg("d") 
        )
        ;


} 
