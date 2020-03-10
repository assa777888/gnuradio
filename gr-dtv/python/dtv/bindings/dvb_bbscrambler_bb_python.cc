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

#include <gnuradio/dtv/dvb_bbscrambler_bb.h>

void bind_dvb_bbscrambler_bb(py::module& m)
{
    using dvb_bbscrambler_bb    = gr::dtv::dvb_bbscrambler_bb;


    py::class_<dvb_bbscrambler_bb,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<dvb_bbscrambler_bb>>(m, "dvb_bbscrambler_bb")

        .def(py::init(&dvb_bbscrambler_bb::make),
           py::arg("standard"), 
           py::arg("framesize"), 
           py::arg("rate") 
        )
        ;


} 
