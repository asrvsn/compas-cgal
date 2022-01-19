import numpy as np
from compas_cgal._cgal import measure
from compas.plugins import plugin


@plugin(category='trimesh', pluggable_name='trimesh_volume')
def volume(mesh):
    """Compute the volume of a closed triangle mesh.

    Parameters
    ----------
    mesh : tuple[sequence[[float, float, float] | :class:`compas.geometry.Point`], sequence[[int, int, int]]]
        The mesh.

    Returns
    -------
    float
        The volume of the mesh.

    """
    V, F = mesh
    V = np.asarray(V, dtype=np.float64)
    F = np.asarray(F, dtype=np.int32)
    return measure.volume(V, F)
