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

#include <gnuradio/blocks/check_lfsr_32k_s.h>

void bind_check_lfsr_32k_s(py::module& m)
{
    using check_lfsr_32k_s    = gr::blocks::check_lfsr_32k_s;


    py::class_<check_lfsr_32k_s,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<check_lfsr_32k_s>>(m, "check_lfsr_32k_s")

        .def(py::init(&check_lfsr_32k_s::make)
        )
        

        .def("ntotal",&check_lfsr_32k_s::ntotal)
        .def("nright",&check_lfsr_32k_s::nright)
        .def("runlength",&check_lfsr_32k_s::runlength)
        ;


} 
