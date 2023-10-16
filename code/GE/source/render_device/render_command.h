﻿//
// Created by captainchen on 2022/3/3.
//

#ifndef UNTITLED_RENDER_COMMAND_H
#define UNTITLED_RENDER_COMMAND_H

/// 渲染命令
enum RenderCommand {
    NONE,
    UPDATE_SCREEN_SIZE,//更新游戏画面尺寸
    SET_VIEW_PORT_SIZE,//设置视口大小
    COMPILE_SHADER,//编译着色器
    CONNECT_UNIFORM_BLOCK_INSTANCE_AND_BINDING_POINT,//串联uniform block实例与binding point。
    USE_SHADER_PROGRAM,//使用着色器程序
    CREATE_VAO,//创建VAO
    UPDATE_VBO_SUB_DATA,//更新VBO数据
    CREATE_UBO,//创建UBO
    UPDATE_UBO_SUB_DATA,//更新UBO数据
    CREATE_COMPRESSED_TEX_IMAGE2D,//创建压缩纹理
    CREATE_TEX_IMAGE2D,//创建纹理
    DELETE_TEXTURES,//删除纹理
    UPDATE_TEXTURE_SUB_IMAGE2D,//局部更新Texture
    SET_ENABLE_STATE,//设置状态,开启或关闭
    SET_BLENDER_FUNC,//设置混合函数
    SET_UNIFORM_MATRIX_4FV,//上传4x4矩阵
    ACTIVE_AND_BIND_TEXTURE,//激活并绑定纹理
    SET_UNIFORM_1I,//上传1个int值
    SET_UNIFORM_1F,//上传1个float值
    SET_UNIFORM_3F,//上传1个vec3
    BIND_VAO_AND_DRAW_ELEMENTS,//绑定VAO并绘制
    SET_CLEAR_FLAG_AND_CLEAR_COLOR_BUFFER,//设置clear_flag并且清除颜色缓冲
    SET_STENCIL_FUNC,//设置模板测试函数
    SET_STENCIL_OP,//设置模板操作
    SET_STENCIL_BUFFER_CLEAR_VALUE,//设置清除模板缓冲值
    CREATE_FBO,//创建帧缓冲区对象(FBO)
    BIND_FBO,//绑定使用帧缓冲区对象(FBO)
    UNBIND_FBO,//取消使用帧缓冲区对象(FBO)
    DELETE_FBO,//删除帧缓冲区对象(FBO)
    CREATE_RBO,//创建RBO
    DELETE_RBO,//删除RBO
    FBO_ATTACH_RBO,//FBO附着点指定RBO
    FBO_ATTACH_TEXTURE,//FBO附着点指定Texture
    BLIT_FRAME_BUFFER,//将像素块从读取的帧缓冲区(GL_READ_FRAMEBUFFER)复制到绘制帧缓冲区(GL_DRAW_FRAMEBUFFER)
    END_FRAME,//帧结束
};

#endif //UNTITLED_RENDER_COMMAND_H
