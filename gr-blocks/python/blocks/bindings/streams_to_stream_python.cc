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

#include <gnuradio/blocks/streams_to_stream.h>

void bind_streams_to_stream(py::module& m)
{
    using streams_to_stream    = gr::blocks::streams_to_stream;


    py::class_<streams_to_stream,gr::sync_interpolator, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<streams_to_stream>>(m, "streams_to_stream")

        .def(py::init(&streams_to_stream::make),
           py::arg("itemsize"), 
           py::arg("nstreams") 
        )
        ;


} 
