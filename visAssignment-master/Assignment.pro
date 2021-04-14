QT += gui widgets opengl

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    glslprogram.cpp \
    glutils.cpp \
    main.cpp \
    mainview.cpp \
    mainwindow.cpp \
    scenebasic.cpp \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    C:/glew-2.1.0/include/GL/eglew.h \
    C:/glew-2.1.0/include/GL/glew.h \
    C:/glew-2.1.0/include/GL/glxew.h \
    C:/glew-2.1.0/include/GL/wglew.h \
    C:/glm/glm/common.hpp \
    C:/glm/glm/detail/_features.hpp \
    C:/glm/glm/detail/_fixes.hpp \
    C:/glm/glm/detail/_noise.hpp \
    C:/glm/glm/detail/_swizzle.hpp \
    C:/glm/glm/detail/_swizzle_func.hpp \
    C:/glm/glm/detail/_vectorize.hpp \
    C:/glm/glm/detail/compute_common.hpp \
    C:/glm/glm/detail/compute_vector_relational.hpp \
    C:/glm/glm/detail/qualifier.hpp \
    C:/glm/glm/detail/setup.hpp \
    C:/glm/glm/detail/type_float.hpp \
    C:/glm/glm/detail/type_half.hpp \
    C:/glm/glm/detail/type_mat2x2.hpp \
    C:/glm/glm/detail/type_mat2x3.hpp \
    C:/glm/glm/detail/type_mat2x4.hpp \
    C:/glm/glm/detail/type_mat3x2.hpp \
    C:/glm/glm/detail/type_mat3x3.hpp \
    C:/glm/glm/detail/type_mat3x4.hpp \
    C:/glm/glm/detail/type_mat4x2.hpp \
    C:/glm/glm/detail/type_mat4x3.hpp \
    C:/glm/glm/detail/type_mat4x4.hpp \
    C:/glm/glm/detail/type_quat.hpp \
    C:/glm/glm/detail/type_vec1.hpp \
    C:/glm/glm/detail/type_vec2.hpp \
    C:/glm/glm/detail/type_vec3.hpp \
    C:/glm/glm/detail/type_vec4.hpp \
    C:/glm/glm/exponential.hpp \
    C:/glm/glm/ext.hpp \
    C:/glm/glm/ext/matrix_clip_space.hpp \
    C:/glm/glm/ext/matrix_common.hpp \
    C:/glm/glm/ext/matrix_double2x2.hpp \
    C:/glm/glm/ext/matrix_double2x2_precision.hpp \
    C:/glm/glm/ext/matrix_double2x3.hpp \
    C:/glm/glm/ext/matrix_double2x3_precision.hpp \
    C:/glm/glm/ext/matrix_double2x4.hpp \
    C:/glm/glm/ext/matrix_double2x4_precision.hpp \
    C:/glm/glm/ext/matrix_double3x2.hpp \
    C:/glm/glm/ext/matrix_double3x2_precision.hpp \
    C:/glm/glm/ext/matrix_double3x3.hpp \
    C:/glm/glm/ext/matrix_double3x3_precision.hpp \
    C:/glm/glm/ext/matrix_double3x4.hpp \
    C:/glm/glm/ext/matrix_double3x4_precision.hpp \
    C:/glm/glm/ext/matrix_double4x2.hpp \
    C:/glm/glm/ext/matrix_double4x2_precision.hpp \
    C:/glm/glm/ext/matrix_double4x3.hpp \
    C:/glm/glm/ext/matrix_double4x3_precision.hpp \
    C:/glm/glm/ext/matrix_double4x4.hpp \
    C:/glm/glm/ext/matrix_double4x4_precision.hpp \
    C:/glm/glm/ext/matrix_float2x2.hpp \
    C:/glm/glm/ext/matrix_float2x2_precision.hpp \
    C:/glm/glm/ext/matrix_float2x3.hpp \
    C:/glm/glm/ext/matrix_float2x3_precision.hpp \
    C:/glm/glm/ext/matrix_float2x4.hpp \
    C:/glm/glm/ext/matrix_float2x4_precision.hpp \
    C:/glm/glm/ext/matrix_float3x2.hpp \
    C:/glm/glm/ext/matrix_float3x2_precision.hpp \
    C:/glm/glm/ext/matrix_float3x3.hpp \
    C:/glm/glm/ext/matrix_float3x3_precision.hpp \
    C:/glm/glm/ext/matrix_float3x4.hpp \
    C:/glm/glm/ext/matrix_float3x4_precision.hpp \
    C:/glm/glm/ext/matrix_float4x2.hpp \
    C:/glm/glm/ext/matrix_float4x2_precision.hpp \
    C:/glm/glm/ext/matrix_float4x3.hpp \
    C:/glm/glm/ext/matrix_float4x3_precision.hpp \
    C:/glm/glm/ext/matrix_float4x4.hpp \
    C:/glm/glm/ext/matrix_float4x4_precision.hpp \
    C:/glm/glm/ext/matrix_projection.hpp \
    C:/glm/glm/ext/matrix_relational.hpp \
    C:/glm/glm/ext/matrix_transform.hpp \
    C:/glm/glm/ext/quaternion_common.hpp \
    C:/glm/glm/ext/quaternion_double.hpp \
    C:/glm/glm/ext/quaternion_double_precision.hpp \
    C:/glm/glm/ext/quaternion_exponential.hpp \
    C:/glm/glm/ext/quaternion_float.hpp \
    C:/glm/glm/ext/quaternion_float_precision.hpp \
    C:/glm/glm/ext/quaternion_geometric.hpp \
    C:/glm/glm/ext/quaternion_relational.hpp \
    C:/glm/glm/ext/quaternion_transform.hpp \
    C:/glm/glm/ext/quaternion_trigonometric.hpp \
    C:/glm/glm/ext/scalar_common.hpp \
    C:/glm/glm/ext/scalar_constants.hpp \
    C:/glm/glm/ext/scalar_int_sized.hpp \
    C:/glm/glm/ext/scalar_integer.hpp \
    C:/glm/glm/ext/scalar_relational.hpp \
    C:/glm/glm/ext/scalar_uint_sized.hpp \
    C:/glm/glm/ext/scalar_ulp.hpp \
    C:/glm/glm/ext/vector_bool1.hpp \
    C:/glm/glm/ext/vector_bool1_precision.hpp \
    C:/glm/glm/ext/vector_bool2.hpp \
    C:/glm/glm/ext/vector_bool2_precision.hpp \
    C:/glm/glm/ext/vector_bool3.hpp \
    C:/glm/glm/ext/vector_bool3_precision.hpp \
    C:/glm/glm/ext/vector_bool4.hpp \
    C:/glm/glm/ext/vector_bool4_precision.hpp \
    C:/glm/glm/ext/vector_common.hpp \
    C:/glm/glm/ext/vector_double1.hpp \
    C:/glm/glm/ext/vector_double1_precision.hpp \
    C:/glm/glm/ext/vector_double2.hpp \
    C:/glm/glm/ext/vector_double2_precision.hpp \
    C:/glm/glm/ext/vector_double3.hpp \
    C:/glm/glm/ext/vector_double3_precision.hpp \
    C:/glm/glm/ext/vector_double4.hpp \
    C:/glm/glm/ext/vector_double4_precision.hpp \
    C:/glm/glm/ext/vector_float1.hpp \
    C:/glm/glm/ext/vector_float1_precision.hpp \
    C:/glm/glm/ext/vector_float2.hpp \
    C:/glm/glm/ext/vector_float2_precision.hpp \
    C:/glm/glm/ext/vector_float3.hpp \
    C:/glm/glm/ext/vector_float3_precision.hpp \
    C:/glm/glm/ext/vector_float4.hpp \
    C:/glm/glm/ext/vector_float4_precision.hpp \
    C:/glm/glm/ext/vector_int1.hpp \
    C:/glm/glm/ext/vector_int1_precision.hpp \
    C:/glm/glm/ext/vector_int2.hpp \
    C:/glm/glm/ext/vector_int2_precision.hpp \
    C:/glm/glm/ext/vector_int3.hpp \
    C:/glm/glm/ext/vector_int3_precision.hpp \
    C:/glm/glm/ext/vector_int4.hpp \
    C:/glm/glm/ext/vector_int4_precision.hpp \
    C:/glm/glm/ext/vector_integer.hpp \
    C:/glm/glm/ext/vector_relational.hpp \
    C:/glm/glm/ext/vector_uint1.hpp \
    C:/glm/glm/ext/vector_uint1_precision.hpp \
    C:/glm/glm/ext/vector_uint2.hpp \
    C:/glm/glm/ext/vector_uint2_precision.hpp \
    C:/glm/glm/ext/vector_uint3.hpp \
    C:/glm/glm/ext/vector_uint3_precision.hpp \
    C:/glm/glm/ext/vector_uint4.hpp \
    C:/glm/glm/ext/vector_uint4_precision.hpp \
    C:/glm/glm/ext/vector_ulp.hpp \
    C:/glm/glm/fwd.hpp \
    C:/glm/glm/geometric.hpp \
    C:/glm/glm/glm.hpp \
    C:/glm/glm/gtc/bitfield.hpp \
    C:/glm/glm/gtc/color_space.hpp \
    C:/glm/glm/gtc/constants.hpp \
    C:/glm/glm/gtc/epsilon.hpp \
    C:/glm/glm/gtc/integer.hpp \
    C:/glm/glm/gtc/matrix_access.hpp \
    C:/glm/glm/gtc/matrix_integer.hpp \
    C:/glm/glm/gtc/matrix_inverse.hpp \
    C:/glm/glm/gtc/matrix_transform.hpp \
    C:/glm/glm/gtc/noise.hpp \
    C:/glm/glm/gtc/packing.hpp \
    C:/glm/glm/gtc/quaternion.hpp \
    C:/glm/glm/gtc/random.hpp \
    C:/glm/glm/gtc/reciprocal.hpp \
    C:/glm/glm/gtc/round.hpp \
    C:/glm/glm/gtc/type_aligned.hpp \
    C:/glm/glm/gtc/type_precision.hpp \
    C:/glm/glm/gtc/type_ptr.hpp \
    C:/glm/glm/gtc/ulp.hpp \
    C:/glm/glm/gtc/vec1.hpp \
    C:/glm/glm/gtx/associated_min_max.hpp \
    C:/glm/glm/gtx/bit.hpp \
    C:/glm/glm/gtx/closest_point.hpp \
    C:/glm/glm/gtx/color_encoding.hpp \
    C:/glm/glm/gtx/color_space.hpp \
    C:/glm/glm/gtx/color_space_YCoCg.hpp \
    C:/glm/glm/gtx/common.hpp \
    C:/glm/glm/gtx/compatibility.hpp \
    C:/glm/glm/gtx/component_wise.hpp \
    C:/glm/glm/gtx/dual_quaternion.hpp \
    C:/glm/glm/gtx/easing.hpp \
    C:/glm/glm/gtx/euler_angles.hpp \
    C:/glm/glm/gtx/extend.hpp \
    C:/glm/glm/gtx/extended_min_max.hpp \
    C:/glm/glm/gtx/exterior_product.hpp \
    C:/glm/glm/gtx/fast_exponential.hpp \
    C:/glm/glm/gtx/fast_square_root.hpp \
    C:/glm/glm/gtx/fast_trigonometry.hpp \
    C:/glm/glm/gtx/functions.hpp \
    C:/glm/glm/gtx/gradient_paint.hpp \
    C:/glm/glm/gtx/handed_coordinate_space.hpp \
    C:/glm/glm/gtx/hash.hpp \
    C:/glm/glm/gtx/integer.hpp \
    C:/glm/glm/gtx/intersect.hpp \
    C:/glm/glm/gtx/io.hpp \
    C:/glm/glm/gtx/log_base.hpp \
    C:/glm/glm/gtx/matrix_cross_product.hpp \
    C:/glm/glm/gtx/matrix_decompose.hpp \
    C:/glm/glm/gtx/matrix_factorisation.hpp \
    C:/glm/glm/gtx/matrix_interpolation.hpp \
    C:/glm/glm/gtx/matrix_major_storage.hpp \
    C:/glm/glm/gtx/matrix_operation.hpp \
    C:/glm/glm/gtx/matrix_query.hpp \
    C:/glm/glm/gtx/matrix_transform_2d.hpp \
    C:/glm/glm/gtx/mixed_product.hpp \
    C:/glm/glm/gtx/norm.hpp \
    C:/glm/glm/gtx/normal.hpp \
    C:/glm/glm/gtx/normalize_dot.hpp \
    C:/glm/glm/gtx/number_precision.hpp \
    C:/glm/glm/gtx/optimum_pow.hpp \
    C:/glm/glm/gtx/orthonormalize.hpp \
    C:/glm/glm/gtx/perpendicular.hpp \
    C:/glm/glm/gtx/polar_coordinates.hpp \
    C:/glm/glm/gtx/projection.hpp \
    C:/glm/glm/gtx/quaternion.hpp \
    C:/glm/glm/gtx/range.hpp \
    C:/glm/glm/gtx/raw_data.hpp \
    C:/glm/glm/gtx/rotate_normalized_axis.hpp \
    C:/glm/glm/gtx/rotate_vector.hpp \
    C:/glm/glm/gtx/scalar_multiplication.hpp \
    C:/glm/glm/gtx/scalar_relational.hpp \
    C:/glm/glm/gtx/spline.hpp \
    C:/glm/glm/gtx/std_based_type.hpp \
    C:/glm/glm/gtx/string_cast.hpp \
    C:/glm/glm/gtx/texture.hpp \
    C:/glm/glm/gtx/transform.hpp \
    C:/glm/glm/gtx/transform2.hpp \
    C:/glm/glm/gtx/type_aligned.hpp \
    C:/glm/glm/gtx/type_trait.hpp \
    C:/glm/glm/gtx/vec_swizzle.hpp \
    C:/glm/glm/gtx/vector_angle.hpp \
    C:/glm/glm/gtx/vector_query.hpp \
    C:/glm/glm/gtx/wrap.hpp \
    C:/glm/glm/integer.hpp \
    C:/glm/glm/mat2x2.hpp \
    C:/glm/glm/mat2x3.hpp \
    C:/glm/glm/mat2x4.hpp \
    C:/glm/glm/mat3x2.hpp \
    C:/glm/glm/mat3x3.hpp \
    C:/glm/glm/mat3x4.hpp \
    C:/glm/glm/mat4x2.hpp \
    C:/glm/glm/mat4x3.hpp \
    C:/glm/glm/mat4x4.hpp \
    C:/glm/glm/matrix.hpp \
    C:/glm/glm/packing.hpp \
    C:/glm/glm/simd/common.h \
    C:/glm/glm/simd/exponential.h \
    C:/glm/glm/simd/geometric.h \
    C:/glm/glm/simd/integer.h \
    C:/glm/glm/simd/matrix.h \
    C:/glm/glm/simd/neon.h \
    C:/glm/glm/simd/packing.h \
    C:/glm/glm/simd/platform.h \
    C:/glm/glm/simd/trigonometric.h \
    C:/glm/glm/simd/vector_relational.h \
    C:/glm/glm/trigonometric.hpp \
    C:/glm/glm/vec2.hpp \
    C:/glm/glm/vec3.hpp \
    C:/glm/glm/vec4.hpp \
    C:/glm/glm/vector_relational.hpp \
    glslprogram.h \
    glutils.h \
    mainview.h \
    mainwindow.h \
    scene.h \
    scenebasic.h \



INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

win32: LIBS += -LC:/glew-2.1.0/lib/ -lglew32  -lopengl32 -lglu32

INCLUDEPATH += C:/glew-2.1.0/include
DEPENDPATH += C:/glew-2.1.0/include

FORMS += \
    mainwindow.ui

DISTFILES += \
    josh_sutcliffe_s346658_visualisation_class_diagram.qmodel \
    shader/lineshader.vert



