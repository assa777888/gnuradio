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

#include <gnuradio/blocks/bin_statistics_f.h>

void bind_bin_statistics_f(py::module& m)
{
    using bin_statistics_f    = gr::blocks::bin_statistics_f;


    py::class_<bin_statistics_f,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<bin_statistics_f>>(m, "bin_statistics_f")

        .def(py::init(&bin_statistics_f::make),
           py::arg("vlen"), 
           py::arg("msgq"), 
           py::arg("tune"), 
           py::arg("tune_delay"), 
           py::arg("dwell_delay") 
        )
        ;


} 
