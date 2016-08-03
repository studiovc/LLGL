/*
 * GLFragmentShader.h
 * 
 * This file is part of the "LLGL" project (Copyright (c) 2015 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef __LLGL_GL_FRAGMENT_SHADER_H__
#define __LLGL_GL_FRAGMENT_SHADER_H__


#include <LLGL/FragmentShader.h>
#include "GLHardwareShader.h"


namespace LLGL
{


class GLFragmentShader : public FragmentShader
{

    public:

        GLFragmentShader();

        bool Compile(const std::string& shaderSource) override;

        std::string QueryInfoLog() override;

        GLHardwareShader hwShader;

};


} // /namespace LLGL


#endif



// ================================================================================
