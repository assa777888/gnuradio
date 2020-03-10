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

#include <gnuradio/blocks/burst_tagger.h>

void bind_burst_tagger(py::module& m)
{
    using burst_tagger    = gr::blocks::burst_tagger;


    py::class_<burst_tagger,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<burst_tagger>>(m, "burst_tagger")

        .def(py::init(&burst_tagger::make),
           py::arg("itemsize") 
        )
        

        .def("set_true_tag",&burst_tagger::set_true_tag,
            py::arg("key"), 
            py::arg("value") 
        )
        .def("set_false_tag",&burst_tagger::set_false_tag,
            py::arg("key"), 
            py::arg("value") 
        )
        ;


} 
