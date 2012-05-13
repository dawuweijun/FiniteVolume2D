#include "ComputationalMoleculeImpl.h"


ComputationalMoleculeImpl::ComputationalMoleculeImpl(std::string const & name)
    :
    name_(name) {}

std::string const &
ComputationalMoleculeImpl::name() const {
    return name_;
}

void
ComputationalMoleculeImpl::add(ComputationalVariable const & cvar, double weight) {
    data_[cvar.id()] = weight;
}

boost::optional<double>
ComputationalMoleculeImpl::getWeight(ComputationalVariable const & cvar) const {
    auto it = data_.find(cvar.id());
    if (it == data_.end())
        return boost::optional<double>();
    return it->second;
}

ComputationalMoleculeImpl::size_type
ComputationalMoleculeImpl::size() const {
    return data_.size();
}
