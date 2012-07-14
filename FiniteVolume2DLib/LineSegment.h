/*
 * Name  : LineSegment
 * Path  : 
 * Use   : 
 * Author: Sven Schmidt
 * Date  : 07/14/2012
 */
#pragma once

#include "DeclSpec.h"

#include "Vertex.h"



class LineSegment {
public:
    explicit LineSegment(Vertex const & v0, Vertex const & v1);

    Vertex const & v0() const;
    Vertex const & v1() const;

private:
    Vertex v0_;
    Vertex v1_;
};
