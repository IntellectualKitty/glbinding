#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>
#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl14
{

#include <glbinding/gl/types.inl>
#include <glbinding/gl/boolean.inl>
#include <glbinding/gl/values.inl>

} // namespace gl14


#include <glbinding/glbinding.h>

namespace gl14
{

GLBINDING_API void glAccum(GLenum op, GLfloat value);
GLBINDING_API void glActiveTexture(GLenum texture);
GLBINDING_API void glAlphaFunc(GLenum func, GLfloat ref);
GLBINDING_API GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences);
GLBINDING_API void glArrayElement(GLint i);
GLBINDING_API void glBegin(GLenum mode);
GLBINDING_API void glBindTexture(GLenum target, GLuint texture);
GLBINDING_API void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
GLBINDING_API void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLBINDING_API void glBlendEquation(GLenum mode);
GLBINDING_API void glBlendFunc(GLenum sfactor, GLenum dfactor);
GLBINDING_API void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLBINDING_API void glCallList(GLuint list);
GLBINDING_API void glCallLists(GLsizei n, GLenum type, const void * lists);
GLBINDING_API void glClear(ClearBufferMask mask);
GLBINDING_API void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLBINDING_API void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLBINDING_API void glClearDepth(GLdouble depth);
GLBINDING_API void glClearIndex(GLfloat c);
GLBINDING_API void glClearStencil(GLint s);
GLBINDING_API void glClientActiveTexture(GLenum texture);
GLBINDING_API void glClipPlane(GLenum plane, const GLdouble * equation);
GLBINDING_API void glColor3b(GLbyte red, GLbyte green, GLbyte blue);
GLBINDING_API void glColor3bv(const GLbyte * v);
GLBINDING_API void glColor3d(GLdouble red, GLdouble green, GLdouble blue);
GLBINDING_API void glColor3dv(const GLdouble * v);
GLBINDING_API void glColor3f(GLfloat red, GLfloat green, GLfloat blue);
GLBINDING_API void glColor3fv(const GLfloat * v);
GLBINDING_API void glColor3i(GLint red, GLint green, GLint blue);
GLBINDING_API void glColor3iv(const GLint * v);
GLBINDING_API void glColor3s(GLshort red, GLshort green, GLshort blue);
GLBINDING_API void glColor3sv(const GLshort * v);
GLBINDING_API void glColor3ub(GLubyte red, GLubyte green, GLubyte blue);
GLBINDING_API void glColor3ubv(const GLubyte * v);
GLBINDING_API void glColor3ui(GLuint red, GLuint green, GLuint blue);
GLBINDING_API void glColor3uiv(const GLuint * v);
GLBINDING_API void glColor3us(GLushort red, GLushort green, GLushort blue);
GLBINDING_API void glColor3usv(const GLushort * v);
GLBINDING_API void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
GLBINDING_API void glColor4bv(const GLbyte * v);
GLBINDING_API void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
GLBINDING_API void glColor4dv(const GLdouble * v);
GLBINDING_API void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLBINDING_API void glColor4fv(const GLfloat * v);
GLBINDING_API void glColor4i(GLint red, GLint green, GLint blue, GLint alpha);
GLBINDING_API void glColor4iv(const GLint * v);
GLBINDING_API void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
GLBINDING_API void glColor4sv(const GLshort * v);
GLBINDING_API void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
GLBINDING_API void glColor4ubv(const GLubyte * v);
GLBINDING_API void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
GLBINDING_API void glColor4uiv(const GLuint * v);
GLBINDING_API void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
GLBINDING_API void glColor4usv(const GLushort * v);
GLBINDING_API void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLBINDING_API void glColorMaterial(GLenum face, GLenum mode);
GLBINDING_API void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
GLBINDING_API void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
GLBINDING_API void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
GLBINDING_API void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GLBINDING_API void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLBINDING_API void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glCullFace(GLenum mode);
GLBINDING_API void glDeleteLists(GLuint list, GLsizei range);
GLBINDING_API void glDeleteTextures(GLsizei n, const GLuint * textures);
GLBINDING_API void glDepthFunc(GLenum func);
GLBINDING_API void glDepthMask(GLboolean flag);
GLBINDING_API void glDepthRange(GLdouble near_, GLdouble far_);
GLBINDING_API void glDisable(GLenum cap);
GLBINDING_API void glDisableClientState(GLenum array);
GLBINDING_API void glDrawArrays(GLenum mode, GLint first, GLsizei count);
GLBINDING_API void glDrawBuffer(GLenum buf);
GLBINDING_API void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices);
GLBINDING_API void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
GLBINDING_API void glEdgeFlag(GLboolean flag);
GLBINDING_API void glEdgeFlagPointer(GLsizei stride, const void * pointer);
GLBINDING_API void glEdgeFlagv(const GLboolean * flag);
GLBINDING_API void glEnable(GLenum cap);
GLBINDING_API void glEnableClientState(GLenum array);
GLBINDING_API void glEnd();
GLBINDING_API void glEndList();
GLBINDING_API void glEvalCoord1d(GLdouble u);
GLBINDING_API void glEvalCoord1dv(const GLdouble * u);
GLBINDING_API void glEvalCoord1f(GLfloat u);
GLBINDING_API void glEvalCoord1fv(const GLfloat * u);
GLBINDING_API void glEvalCoord2d(GLdouble u, GLdouble v);
GLBINDING_API void glEvalCoord2dv(const GLdouble * u);
GLBINDING_API void glEvalCoord2f(GLfloat u, GLfloat v);
GLBINDING_API void glEvalCoord2fv(const GLfloat * u);
GLBINDING_API void glEvalMesh1(GLenum mode, GLint i1, GLint i2);
GLBINDING_API void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
GLBINDING_API void glEvalPoint1(GLint i);
GLBINDING_API void glEvalPoint2(GLint i, GLint j);
GLBINDING_API void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer);
GLBINDING_API void glFinish();
GLBINDING_API void glFlush();
GLBINDING_API void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glFogCoordd(GLdouble coord);
GLBINDING_API void glFogCoorddv(const GLdouble * coord);
GLBINDING_API void glFogCoordf(GLfloat coord);
GLBINDING_API void glFogCoordfv(const GLfloat * coord);
GLBINDING_API void glFogf(GLenum pname, GLfloat param);
GLBINDING_API void glFogfv(GLenum pname, const GLfloat * params);
GLBINDING_API void glFogi(GLenum pname, GLint param);
GLBINDING_API void glFogiv(GLenum pname, const GLint * params);
GLBINDING_API void glFrontFace(GLenum mode);
GLBINDING_API void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLBINDING_API GLuint glGenLists(GLsizei range);
GLBINDING_API void glGenTextures(GLsizei n, GLuint * textures);
GLBINDING_API void glGetBooleanv(GLenum pname, GLboolean * data);
GLBINDING_API void glGetClipPlane(GLenum plane, GLdouble * equation);
GLBINDING_API void glGetCompressedTexImage(GLenum target, GLint level, void * img);
GLBINDING_API void glGetDoublev(GLenum pname, GLdouble * data);
GLBINDING_API GLenum glGetError();
GLBINDING_API void glGetFloatv(GLenum pname, GLfloat * data);
GLBINDING_API void glGetIntegerv(GLenum pname, GLint * data);
GLBINDING_API void glGetLightfv(GLenum light, GLenum pname, GLfloat * params);
GLBINDING_API void glGetLightiv(GLenum light, GLenum pname, GLint * params);
GLBINDING_API void glGetMapdv(GLenum target, GLenum query, GLdouble * v);
GLBINDING_API void glGetMapfv(GLenum target, GLenum query, GLfloat * v);
GLBINDING_API void glGetMapiv(GLenum target, GLenum query, GLint * v);
GLBINDING_API void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params);
GLBINDING_API void glGetMaterialiv(GLenum face, GLenum pname, GLint * params);
GLBINDING_API void glGetPixelMapfv(GLenum map, GLfloat * values);
GLBINDING_API void glGetPixelMapuiv(GLenum map, GLuint * values);
GLBINDING_API void glGetPixelMapusv(GLenum map, GLushort * values);
GLBINDING_API void glGetPointerv(GLenum pname, void ** params);
GLBINDING_API void glGetPolygonStipple(GLubyte * mask);
GLBINDING_API const GLubyte * glGetString(GLenum name);
GLBINDING_API void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params);
GLBINDING_API void glGetTexEnviv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params);
GLBINDING_API void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params);
GLBINDING_API void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params);
GLBINDING_API void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
GLBINDING_API void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);
GLBINDING_API void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);
GLBINDING_API void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
GLBINDING_API void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glHint(GLenum target, GLenum mode);
GLBINDING_API void glIndexMask(GLuint mask);
GLBINDING_API void glIndexPointer(GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glIndexd(GLdouble c);
GLBINDING_API void glIndexdv(const GLdouble * c);
GLBINDING_API void glIndexf(GLfloat c);
GLBINDING_API void glIndexfv(const GLfloat * c);
GLBINDING_API void glIndexi(GLint c);
GLBINDING_API void glIndexiv(const GLint * c);
GLBINDING_API void glIndexs(GLshort c);
GLBINDING_API void glIndexsv(const GLshort * c);
GLBINDING_API void glIndexub(GLubyte c);
GLBINDING_API void glIndexubv(const GLubyte * c);
GLBINDING_API void glInitNames();
GLBINDING_API void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer);
GLBINDING_API GLboolean glIsEnabled(GLenum cap);
GLBINDING_API GLboolean glIsList(GLuint list);
GLBINDING_API GLboolean glIsTexture(GLuint texture);
GLBINDING_API void glLightModelf(GLenum pname, GLfloat param);
GLBINDING_API void glLightModelfv(GLenum pname, const GLfloat * params);
GLBINDING_API void glLightModeli(GLenum pname, GLint param);
GLBINDING_API void glLightModeliv(GLenum pname, const GLint * params);
GLBINDING_API void glLightf(GLenum light, GLenum pname, GLfloat param);
GLBINDING_API void glLightfv(GLenum light, GLenum pname, const GLfloat * params);
GLBINDING_API void glLighti(GLenum light, GLenum pname, GLint param);
GLBINDING_API void glLightiv(GLenum light, GLenum pname, const GLint * params);
GLBINDING_API void glLineStipple(GLint factor, GLushort pattern);
GLBINDING_API void glLineWidth(GLfloat width);
GLBINDING_API void glListBase(GLuint base);
GLBINDING_API void glLoadIdentity();
GLBINDING_API void glLoadMatrixd(const GLdouble * m);
GLBINDING_API void glLoadMatrixf(const GLfloat * m);
GLBINDING_API void glLoadName(GLuint name);
GLBINDING_API void glLoadTransposeMatrixd(const GLdouble * m);
GLBINDING_API void glLoadTransposeMatrixf(const GLfloat * m);
GLBINDING_API void glLogicOp(GLenum opcode);
GLBINDING_API void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
GLBINDING_API void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
GLBINDING_API void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
GLBINDING_API void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
GLBINDING_API void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);
GLBINDING_API void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);
GLBINDING_API void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
GLBINDING_API void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
GLBINDING_API void glMaterialf(GLenum face, GLenum pname, GLfloat param);
GLBINDING_API void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params);
GLBINDING_API void glMateriali(GLenum face, GLenum pname, GLint param);
GLBINDING_API void glMaterialiv(GLenum face, GLenum pname, const GLint * params);
GLBINDING_API void glMatrixMode(GLenum mode);
GLBINDING_API void glMultMatrixd(const GLdouble * m);
GLBINDING_API void glMultMatrixf(const GLfloat * m);
GLBINDING_API void glMultTransposeMatrixd(const GLdouble * m);
GLBINDING_API void glMultTransposeMatrixf(const GLfloat * m);
GLBINDING_API void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);
GLBINDING_API void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);
GLBINDING_API void glMultiTexCoord1d(GLenum target, GLdouble s);
GLBINDING_API void glMultiTexCoord1dv(GLenum target, const GLdouble * v);
GLBINDING_API void glMultiTexCoord1f(GLenum target, GLfloat s);
GLBINDING_API void glMultiTexCoord1fv(GLenum target, const GLfloat * v);
GLBINDING_API void glMultiTexCoord1i(GLenum target, GLint s);
GLBINDING_API void glMultiTexCoord1iv(GLenum target, const GLint * v);
GLBINDING_API void glMultiTexCoord1s(GLenum target, GLshort s);
GLBINDING_API void glMultiTexCoord1sv(GLenum target, const GLshort * v);
GLBINDING_API void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t);
GLBINDING_API void glMultiTexCoord2dv(GLenum target, const GLdouble * v);
GLBINDING_API void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t);
GLBINDING_API void glMultiTexCoord2fv(GLenum target, const GLfloat * v);
GLBINDING_API void glMultiTexCoord2i(GLenum target, GLint s, GLint t);
GLBINDING_API void glMultiTexCoord2iv(GLenum target, const GLint * v);
GLBINDING_API void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t);
GLBINDING_API void glMultiTexCoord2sv(GLenum target, const GLshort * v);
GLBINDING_API void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r);
GLBINDING_API void glMultiTexCoord3dv(GLenum target, const GLdouble * v);
GLBINDING_API void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r);
GLBINDING_API void glMultiTexCoord3fv(GLenum target, const GLfloat * v);
GLBINDING_API void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r);
GLBINDING_API void glMultiTexCoord3iv(GLenum target, const GLint * v);
GLBINDING_API void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r);
GLBINDING_API void glMultiTexCoord3sv(GLenum target, const GLshort * v);
GLBINDING_API void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
GLBINDING_API void glMultiTexCoord4dv(GLenum target, const GLdouble * v);
GLBINDING_API void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GLBINDING_API void glMultiTexCoord4fv(GLenum target, const GLfloat * v);
GLBINDING_API void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q);
GLBINDING_API void glMultiTexCoord4iv(GLenum target, const GLint * v);
GLBINDING_API void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
GLBINDING_API void glMultiTexCoord4sv(GLenum target, const GLshort * v);
GLBINDING_API void glNewList(GLuint list, GLenum mode);
GLBINDING_API void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz);
GLBINDING_API void glNormal3bv(const GLbyte * v);
GLBINDING_API void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);
GLBINDING_API void glNormal3dv(const GLdouble * v);
GLBINDING_API void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
GLBINDING_API void glNormal3fv(const GLfloat * v);
GLBINDING_API void glNormal3i(GLint nx, GLint ny, GLint nz);
GLBINDING_API void glNormal3iv(const GLint * v);
GLBINDING_API void glNormal3s(GLshort nx, GLshort ny, GLshort nz);
GLBINDING_API void glNormal3sv(const GLshort * v);
GLBINDING_API void glNormalPointer(GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLBINDING_API void glPassThrough(GLfloat token);
GLBINDING_API void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values);
GLBINDING_API void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values);
GLBINDING_API void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values);
GLBINDING_API void glPixelStoref(GLenum pname, GLfloat param);
GLBINDING_API void glPixelStorei(GLenum pname, GLint param);
GLBINDING_API void glPixelTransferf(GLenum pname, GLfloat param);
GLBINDING_API void glPixelTransferi(GLenum pname, GLint param);
GLBINDING_API void glPixelZoom(GLfloat xfactor, GLfloat yfactor);
GLBINDING_API void glPointParameterf(GLenum pname, GLfloat param);
GLBINDING_API void glPointParameterfv(GLenum pname, const GLfloat * params);
GLBINDING_API void glPointParameteri(GLenum pname, GLint param);
GLBINDING_API void glPointParameteriv(GLenum pname, const GLint * params);
GLBINDING_API void glPointSize(GLfloat size);
GLBINDING_API void glPolygonMode(GLenum face, GLenum mode);
GLBINDING_API void glPolygonOffset(GLfloat factor, GLfloat units);
GLBINDING_API void glPolygonStipple(const GLubyte * mask);
GLBINDING_API void glPopAttrib();
GLBINDING_API void glPopClientAttrib();
GLBINDING_API void glPopMatrix();
GLBINDING_API void glPopName();
GLBINDING_API void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities);
GLBINDING_API void glPushAttrib(AttribMask mask);
GLBINDING_API void glPushClientAttrib(ClientAttribMask mask);
GLBINDING_API void glPushMatrix();
GLBINDING_API void glPushName(GLuint name);
GLBINDING_API void glRasterPos2d(GLdouble x, GLdouble y);
GLBINDING_API void glRasterPos2dv(const GLdouble * v);
GLBINDING_API void glRasterPos2f(GLfloat x, GLfloat y);
GLBINDING_API void glRasterPos2fv(const GLfloat * v);
GLBINDING_API void glRasterPos2i(GLint x, GLint y);
GLBINDING_API void glRasterPos2iv(const GLint * v);
GLBINDING_API void glRasterPos2s(GLshort x, GLshort y);
GLBINDING_API void glRasterPos2sv(const GLshort * v);
GLBINDING_API void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glRasterPos3dv(const GLdouble * v);
GLBINDING_API void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glRasterPos3fv(const GLfloat * v);
GLBINDING_API void glRasterPos3i(GLint x, GLint y, GLint z);
GLBINDING_API void glRasterPos3iv(const GLint * v);
GLBINDING_API void glRasterPos3s(GLshort x, GLshort y, GLshort z);
GLBINDING_API void glRasterPos3sv(const GLshort * v);
GLBINDING_API void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLBINDING_API void glRasterPos4dv(const GLdouble * v);
GLBINDING_API void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLBINDING_API void glRasterPos4fv(const GLfloat * v);
GLBINDING_API void glRasterPos4i(GLint x, GLint y, GLint z, GLint w);
GLBINDING_API void glRasterPos4iv(const GLint * v);
GLBINDING_API void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
GLBINDING_API void glRasterPos4sv(const GLshort * v);
GLBINDING_API void glReadBuffer(GLenum src);
GLBINDING_API void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
GLBINDING_API void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
GLBINDING_API void glRectdv(const GLdouble * v1, const GLdouble * v2);
GLBINDING_API void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
GLBINDING_API void glRectfv(const GLfloat * v1, const GLfloat * v2);
GLBINDING_API void glRecti(GLint x1, GLint y1, GLint x2, GLint y2);
GLBINDING_API void glRectiv(const GLint * v1, const GLint * v2);
GLBINDING_API void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
GLBINDING_API void glRectsv(const GLshort * v1, const GLshort * v2);
GLBINDING_API GLint glRenderMode(GLenum mode);
GLBINDING_API void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glSampleCoverage(GLfloat value, GLboolean invert);
GLBINDING_API void glScaled(GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glScalef(GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue);
GLBINDING_API void glSecondaryColor3bv(const GLbyte * v);
GLBINDING_API void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue);
GLBINDING_API void glSecondaryColor3dv(const GLdouble * v);
GLBINDING_API void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue);
GLBINDING_API void glSecondaryColor3fv(const GLfloat * v);
GLBINDING_API void glSecondaryColor3i(GLint red, GLint green, GLint blue);
GLBINDING_API void glSecondaryColor3iv(const GLint * v);
GLBINDING_API void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue);
GLBINDING_API void glSecondaryColor3sv(const GLshort * v);
GLBINDING_API void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue);
GLBINDING_API void glSecondaryColor3ubv(const GLubyte * v);
GLBINDING_API void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue);
GLBINDING_API void glSecondaryColor3uiv(const GLuint * v);
GLBINDING_API void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue);
GLBINDING_API void glSecondaryColor3usv(const GLushort * v);
GLBINDING_API void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glSelectBuffer(GLsizei size, GLuint * buffer);
GLBINDING_API void glShadeModel(GLenum mode);
GLBINDING_API void glStencilFunc(GLenum func, GLint ref, GLuint mask);
GLBINDING_API void glStencilMask(GLuint mask);
GLBINDING_API void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
GLBINDING_API void glTexCoord1d(GLdouble s);
GLBINDING_API void glTexCoord1dv(const GLdouble * v);
GLBINDING_API void glTexCoord1f(GLfloat s);
GLBINDING_API void glTexCoord1fv(const GLfloat * v);
GLBINDING_API void glTexCoord1i(GLint s);
GLBINDING_API void glTexCoord1iv(const GLint * v);
GLBINDING_API void glTexCoord1s(GLshort s);
GLBINDING_API void glTexCoord1sv(const GLshort * v);
GLBINDING_API void glTexCoord2d(GLdouble s, GLdouble t);
GLBINDING_API void glTexCoord2dv(const GLdouble * v);
GLBINDING_API void glTexCoord2f(GLfloat s, GLfloat t);
GLBINDING_API void glTexCoord2fv(const GLfloat * v);
GLBINDING_API void glTexCoord2i(GLint s, GLint t);
GLBINDING_API void glTexCoord2iv(const GLint * v);
GLBINDING_API void glTexCoord2s(GLshort s, GLshort t);
GLBINDING_API void glTexCoord2sv(const GLshort * v);
GLBINDING_API void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);
GLBINDING_API void glTexCoord3dv(const GLdouble * v);
GLBINDING_API void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);
GLBINDING_API void glTexCoord3fv(const GLfloat * v);
GLBINDING_API void glTexCoord3i(GLint s, GLint t, GLint r);
GLBINDING_API void glTexCoord3iv(const GLint * v);
GLBINDING_API void glTexCoord3s(GLshort s, GLshort t, GLshort r);
GLBINDING_API void glTexCoord3sv(const GLshort * v);
GLBINDING_API void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
GLBINDING_API void glTexCoord4dv(const GLdouble * v);
GLBINDING_API void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GLBINDING_API void glTexCoord4fv(const GLfloat * v);
GLBINDING_API void glTexCoord4i(GLint s, GLint t, GLint r, GLint q);
GLBINDING_API void glTexCoord4iv(const GLint * v);
GLBINDING_API void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
GLBINDING_API void glTexCoord4sv(const GLshort * v);
GLBINDING_API void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glTexEnvf(GLenum target, GLenum pname, GLfloat param);
GLBINDING_API void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params);
GLBINDING_API void glTexEnvi(GLenum target, GLenum pname, GLint param);
GLBINDING_API void glTexEnviv(GLenum target, GLenum pname, const GLint * params);
GLBINDING_API void glTexGend(GLenum coord, GLenum pname, GLdouble param);
GLBINDING_API void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params);
GLBINDING_API void glTexGenf(GLenum coord, GLenum pname, GLfloat param);
GLBINDING_API void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params);
GLBINDING_API void glTexGeni(GLenum coord, GLenum pname, GLint param);
GLBINDING_API void glTexGeniv(GLenum coord, GLenum pname, const GLint * params);
GLBINDING_API void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
GLBINDING_API void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
GLBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLint param);
GLBINDING_API void glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
GLBINDING_API void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTranslated(GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glVertex2d(GLdouble x, GLdouble y);
GLBINDING_API void glVertex2dv(const GLdouble * v);
GLBINDING_API void glVertex2f(GLfloat x, GLfloat y);
GLBINDING_API void glVertex2fv(const GLfloat * v);
GLBINDING_API void glVertex2i(GLint x, GLint y);
GLBINDING_API void glVertex2iv(const GLint * v);
GLBINDING_API void glVertex2s(GLshort x, GLshort y);
GLBINDING_API void glVertex2sv(const GLshort * v);
GLBINDING_API void glVertex3d(GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glVertex3dv(const GLdouble * v);
GLBINDING_API void glVertex3f(GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glVertex3fv(const GLfloat * v);
GLBINDING_API void glVertex3i(GLint x, GLint y, GLint z);
GLBINDING_API void glVertex3iv(const GLint * v);
GLBINDING_API void glVertex3s(GLshort x, GLshort y, GLshort z);
GLBINDING_API void glVertex3sv(const GLshort * v);
GLBINDING_API void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLBINDING_API void glVertex4dv(const GLdouble * v);
GLBINDING_API void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLBINDING_API void glVertex4fv(const GLfloat * v);
GLBINDING_API void glVertex4i(GLint x, GLint y, GLint z, GLint w);
GLBINDING_API void glVertex4iv(const GLint * v);
GLBINDING_API void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
GLBINDING_API void glVertex4sv(const GLshort * v);
GLBINDING_API void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glWindowPos2d(GLdouble x, GLdouble y);
GLBINDING_API void glWindowPos2dv(const GLdouble * v);
GLBINDING_API void glWindowPos2f(GLfloat x, GLfloat y);
GLBINDING_API void glWindowPos2fv(const GLfloat * v);
GLBINDING_API void glWindowPos2i(GLint x, GLint y);
GLBINDING_API void glWindowPos2iv(const GLint * v);
GLBINDING_API void glWindowPos2s(GLshort x, GLshort y);
GLBINDING_API void glWindowPos2sv(const GLshort * v);
GLBINDING_API void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glWindowPos3dv(const GLdouble * v);
GLBINDING_API void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glWindowPos3fv(const GLfloat * v);
GLBINDING_API void glWindowPos3i(GLint x, GLint y, GLint z);
GLBINDING_API void glWindowPos3iv(const GLint * v);
GLBINDING_API void glWindowPos3s(GLshort x, GLshort y, GLshort z);
GLBINDING_API void glWindowPos3sv(const GLshort * v);

} // namespace gl14
