#ifndef COMPAS_RECONSTRUCTION_H
#define COMPAS_RECONSTRUCTION_H

#include <compas.h>

std::tuple<compas::RowMatrixXd, compas::RowMatrixXi>
poisson_surface_reconstruction(
    Eigen::Ref<const compas::RowMatrixXd> &P,
    Eigen::Ref<const compas::RowMatrixXd> &N);

std::tuple<compas::RowMatrixXd, compas::RowMatrixXi>
advancing_front_surface_reconstruction(
    Eigen::Ref<const compas::RowMatrixXd> &P);

compas::RowMatrixXd
pointset_outlier_removal(
    Eigen::Ref<const compas::RowMatrixXd> &P,
    int nnnbrs,
    double radius);

compas::RowMatrixXd
pointset_reduction(
    Eigen::Ref<const compas::RowMatrixXd> &P,
    double spacing = 2.0);

compas::RowMatrixXd
pointset_smoothing(
    Eigen::Ref<const compas::RowMatrixXd> &P,
    int neighbors = 8,
    int iterations = 1);

std::tuple<compas::RowMatrixXd, compas::RowMatrixXd>
pointset_normal_estimation(
    Eigen::Ref<const compas::RowMatrixXd> &P,
    int neighbors=8,
    bool erase=true);

#endif /* COMPAS_RECONSTRUCTION_H */
