/*
 * Name  : FluxComputationalMolecule
 * Path  : ComputationalMoleculeImpl
 * Use   : Computational molecules for comp. faces
 * Author: Sven Schmidt
 * Date  : 04/21/2012
 */
#pragma once

#include "ComputationalMoleculeImpl.h"

#include <memory>


class ComputationalCell;


class FluxComputationalMolecule : public ComputationalMoleculeImpl {
public:
    FluxComputationalMolecule();
    explicit FluxComputationalMolecule(std::string const & name);

    void setCell(std::shared_ptr<ComputationalCell> const & ccell);

private:
    /* Flux through non-boundary faces involves two cells.
     * The flux has the negative sign for the other cell
     * involved. In order to avoid a 2nd computation, we
     * store the cell the face flux was evaluated with
     * here.
     */
    std::shared_ptr<ComputationalCell> ccell_;
};
