/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(core_algorithms.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(abbd5f62bc12799fc994388e855fe792)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/trellis/core_algorithms.h>
// pydoc.h is automatically generated in the build directory
#include <core_algorithms_pydoc.h>

void bind_core_algorithms(py::module& m)
{


    m.def("min", &::gr::trellis::min, py::arg("a"), py::arg("b"), D(min));


    m.def("min_star", &::gr::trellis::min_star, py::arg("a"), py::arg("b"), D(min_star));


    m.def("siso_algorithm",
          &::gr::trellis::siso_algorithm,
          py::arg("I"),
          py::arg("S"),
          py::arg("O"),
          py::arg("NS"),
          py::arg("OS"),
          py::arg("PS"),
          py::arg("PI"),
          py::arg("K"),
          py::arg("S0"),
          py::arg("SK"),
          py::arg("POSTI"),
          py::arg("POSTO"),
          py::arg("p2mymin"),
          py::arg("priori"),
          py::arg("prioro"),
          py::arg("post"),
          D(siso_algorithm));
}
