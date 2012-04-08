#include "ComputationalNode.h"

ComputationalNode::ComputationalNode(Node::Ptr const & geometric_node) : geometric_node_(geometric_node) {}

IGeometricEntity::Id_t
ComputationalNode::id() const {
    return geometric_node_->id();
}

IGeometricEntity::Id_t
ComputationalNode::meshId() const {
    // computational nodes have no mesh id
    return IGeometricEntity::undef();
}

bool
ComputationalNode::onBoundary() const {
    return geometric_node_->onBoundary();
}

double
ComputationalNode::x() const {
    return geometric_node_->x();
}

double
ComputationalNode::y() const {
    return geometric_node_->y();
}

Vector
ComputationalNode::vector() const {
    return geometric_node_->vector();
}
