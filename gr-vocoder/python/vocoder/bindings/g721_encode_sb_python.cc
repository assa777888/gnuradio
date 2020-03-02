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

#include <gnuradio/vocoder/g721_encode_sb.h>

void bind_g721_encode_sb(py::module& m)
{
    using g721_encode_sb    = gr::vocoder::g721_encode_sb;


    py::class_<g721_encode_sb,gr::sync_block,
        std::shared_ptr<g721_encode_sb>>(m, "g721_encode_sb")

        .def(py::init(&g721_encode_sb::make)
        )
        

        .def("to_basic_block",[](std::shared_ptr<g721_encode_sb> p){
            return p->to_basic_block();
        })
        ;


} 
