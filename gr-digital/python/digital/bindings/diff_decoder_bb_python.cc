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

#include <gnuradio/digital/diff_decoder_bb.h>

void bind_diff_decoder_bb(py::module& m)
{
    using diff_decoder_bb    = gr::digital::diff_decoder_bb;


    py::class_<diff_decoder_bb,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<diff_decoder_bb>>(m, "diff_decoder_bb")

        .def(py::init(&diff_decoder_bb::make),
           py::arg("modulus") 
        )
        ;


} 
