/*
 * @Author: your name
 * @Date: 2021-06-04 17:42:14
 * @LastEditTime: 2021-06-04 18:27:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /binocular_sgm_project/SemiGlobalMatching.cpp
 */
#include "stdafx.h"
#include "SemiGlobalMatching.h"

SemiGlobalMatching::SemiGlobalMatching()
{
    
}

SemiGlobalMatching::~SemiGlobalMatching()
{
    
}

bool SemiGlobalMatching::Initialize(const sint32& width, const sint32& height, const SGMOption& option)
{
    /**赋值**/

    //影像尺寸
    width_=width;
    height_=height_;
    //SGM参数
    option_=option;

    if(width==0||height==0){
        return false;
    }

    /**开辟内存空间**/
    //census 值
    census_left_=new uint32[width*height]();
    census_right_=new uint32[width*height]();

    //匹配代价（初始/聚合）
    const sint32 disp_range=option.max_disparity-option.min_disparity;
    if(disp_range<=0){
        return false;
    }
    cost_init_=new uint8[width*height*disp_range]();
    cost_aggr_=new uint16[width*height*disp_range]();

    //视差图
    disp_left_=new float32[width*height]();

    is_initialized_=census_left_&&census_right_&&cost_init_&&cost_aggr_&&disp_left_;

    return is_initialized_;
    
}