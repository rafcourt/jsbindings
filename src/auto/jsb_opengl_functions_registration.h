/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_jsb.py -c opengl_jsb.ini" on 2013-02-20
* Script version: v0.6
*/
#include "jsb_config.h"
#if JSB_INCLUDE_OPENGL

#include "jsb_opengl_manual.h"
JS_DefineFunction(_cx, opengl, "activeTexture", JSB_glActiveTexture, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_attachShader", JSB_glAttachShader, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_bindAttribLocation", JSB_glBindAttribLocation, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_bindBuffer", JSB_glBindBuffer, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_bindFramebuffer", JSB_glBindFramebuffer, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_bindRenderbuffer", JSB_glBindRenderbuffer, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_bindTexture", JSB_glBindTexture, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "blendColor", JSB_glBlendColor, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "blendEquation", JSB_glBlendEquation, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "blendEquationSeparate", JSB_glBlendEquationSeparate, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "blendFunc", JSB_glBlendFunc, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "blendFuncSeparate", JSB_glBlendFuncSeparate, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "bufferData", JSB_glBufferData, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "bufferSubData", JSB_glBufferSubData, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "checkFramebufferStatus", JSB_glCheckFramebufferStatus, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "clear", JSB_glClear, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "clearColor", JSB_glClearColor, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "clearDepthf", JSB_glClearDepthf, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "clearStencil", JSB_glClearStencil, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "colorMask", JSB_glColorMask, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_compileShader", JSB_glCompileShader, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "compressedTexImage2D", JSB_glCompressedTexImage2D, 8, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "compressedTexSubImage2D", JSB_glCompressedTexSubImage2D, 9, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "copyTexImage2D", JSB_glCopyTexImage2D, 8, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "copyTexSubImage2D", JSB_glCopyTexSubImage2D, 8, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_createProgram", JSB_glCreateProgram, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_createShader", JSB_glCreateShader, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "cullFace", JSB_glCullFace, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_deleteBuffer", JSB_glDeleteBuffers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_deleteFramebuffer", JSB_glDeleteFramebuffers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_deleteProgram", JSB_glDeleteProgram, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_deleteRenderbuffer", JSB_glDeleteRenderbuffers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_deleteShader", JSB_glDeleteShader, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_deleteTexture", JSB_glDeleteTextures, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "depthFunc", JSB_glDepthFunc, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "depthMask", JSB_glDepthMask, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "depthRangef", JSB_glDepthRangef, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "detachShader", JSB_glDetachShader, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "disable", JSB_glDisable, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "disableVertexAttribArray", JSB_glDisableVertexAttribArray, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "drawArrays", JSB_glDrawArrays, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "drawElements", JSB_glDrawElements, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "enable", JSB_glEnable, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "enableVertexAttribArray", JSB_glEnableVertexAttribArray, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "finish", JSB_glFinish, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "flush", JSB_glFlush, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "framebufferRenderbuffer", JSB_glFramebufferRenderbuffer, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "framebufferTexture2D", JSB_glFramebufferTexture2D, 5, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "frontFace", JSB_glFrontFace, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_createBuffer", JSB_glGenBuffers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_createFramebuffer", JSB_glGenFramebuffers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_createRenderbuffer", JSB_glGenRenderbuffers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_createTexture", JSB_glGenTextures, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "generateMipmap", JSB_glGenerateMipmap, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getActiveAttrib", JSB_glGetActiveAttrib, 7, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getActiveUniform", JSB_glGetActiveUniform, 7, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getAttachedShaders", JSB_glGetAttachedShaders, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getAttribLocation", JSB_glGetAttribLocation, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "getError", JSB_glGetError, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getProgramInfoLog", JSB_glGetProgramInfoLog, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getProgramParameter", JSB_glGetProgramiv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getShaderInfoLog", JSB_glGetShaderInfoLog, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getShaderSource", JSB_glGetShaderSource, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getShaderParameter", JSB_glGetShaderiv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_getUniformLocation", JSB_glGetUniformLocation, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "hint", JSB_glHint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isBuffer", JSB_glIsBuffer, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isEnabled", JSB_glIsEnabled, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isFramebuffer", JSB_glIsFramebuffer, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isProgram", JSB_glIsProgram, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isRenderbuffer", JSB_glIsRenderbuffer, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isShader", JSB_glIsShader, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "isTexture", JSB_glIsTexture, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "lineWidth", JSB_glLineWidth, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_linkProgram", JSB_glLinkProgram, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "pixelStorei", JSB_glPixelStorei, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "polygonOffset", JSB_glPolygonOffset, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "readPixels", JSB_glReadPixels, 7, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "releaseShaderCompiler", JSB_glReleaseShaderCompiler, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "renderbufferStorage", JSB_glRenderbufferStorage, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "sampleCoverage", JSB_glSampleCoverage, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "scissor", JSB_glScissor, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_shaderSource", JSB_glShaderSource, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "stencilFunc", JSB_glStencilFunc, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "stencilFuncSeparate", JSB_glStencilFuncSeparate, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "stencilMask", JSB_glStencilMask, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "stencilMaskSeparate", JSB_glStencilMaskSeparate, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "stencilOp", JSB_glStencilOp, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "stencilOpSeparate", JSB_glStencilOpSeparate, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_texImage2D", JSB_glTexImage2D, 9, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "texParameterf", JSB_glTexParameterf, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "texParameteri", JSB_glTexParameteri, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_texSubImage2D", JSB_glTexSubImage2D, 9, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform1f", JSB_glUniform1f, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform1fv", JSB_glUniform1fv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform1i", JSB_glUniform1i, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform1iv", JSB_glUniform1iv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform2f", JSB_glUniform2f, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform2fv", JSB_glUniform2fv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform2i", JSB_glUniform2i, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform2iv", JSB_glUniform2iv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform3f", JSB_glUniform3f, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform3fv", JSB_glUniform3fv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform3i", JSB_glUniform3i, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform3iv", JSB_glUniform3iv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform4f", JSB_glUniform4f, 5, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform4fv", JSB_glUniform4fv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform4i", JSB_glUniform4i, 5, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniform4iv", JSB_glUniform4iv, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniformMatrix2fv", JSB_glUniformMatrix2fv, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniformMatrix3fv", JSB_glUniformMatrix3fv, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "uniformMatrix4fv", JSB_glUniformMatrix4fv, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_useProgram", JSB_glUseProgram, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "_validateProgram", JSB_glValidateProgram, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib1f", JSB_glVertexAttrib1f, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib1fv", JSB_glVertexAttrib1fv, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib2f", JSB_glVertexAttrib2f, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib2fv", JSB_glVertexAttrib2fv, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib3f", JSB_glVertexAttrib3f, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib3fv", JSB_glVertexAttrib3fv, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib4f", JSB_glVertexAttrib4f, 5, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttrib4fv", JSB_glVertexAttrib4fv, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "vertexAttribPointer", JSB_glVertexAttribPointer, 6, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
JS_DefineFunction(_cx, opengl, "viewport", JSB_glViewport, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );


#endif // JSB_INCLUDE_OPENGL
