* class _HScroll and _VScroll
** background
#DEFINE _ScrollBars_Style_Transparent 0
#DEFINE _ScrollBars_Style_Opaque      1 && (default)



* class  _PreScroll, _HScroll97 and _VScroll97
#DEFINE _ScB_Orientation_Horizontal 1 && (default)
#DEFINE _ScB_Orientation_Vertical   2 

** background
#DEFINE _ScB_Style_Transparent 0 
#DEFINE _ScB_Style_Opaque      1 && (default)

** style ext
#DEFINE _ScB_StyleEx_Normal    0 && (default)
#DEFINE _ScB_StyleEx_Office97  1

#DEFINE _ScB_AMT_Small_Minus 0 
#DEFINE _ScB_AMT_Small_Plus  1 
#DEFINE _ScB_AMT_Large_Minus 2 
#DEFINE _ScB_AMT_Large_Plus  3 

** Resources
#DEFINE _ScB_Resource_Up     1 
#DEFINE _ScB_Resource_Down   2 
#DEFINE _ScB_Resource_Left   3
#DEFINE _ScB_Resource_Right  4 
#DEFINE _ScB_Resource_DUp    5 
#DEFINE _ScB_Resource_DDown  6 
#DEFINE _ScB_Resource_DLeft  7
#DEFINE _ScB_Resource_DRight 8 


* class _ViewPort
** background
#DEFINE _VP_ScrollBars_Style_Transparent _ScB_Style_Transparent 
#DEFINE _VP_ScrollBars_Style_Opaque      _ScB_Style_Opaque       &&  (default)


** Scrollbars
#DEFINE _VP_ScrollBars_None       0
#DEFINE _VP_ScrollBars_Horizontal 1
#DEFINE _VP_ScrollBars_Vertical   2
#DEFINE _VP_ScrollBars_Both       3

#DEFINE _VP_ScrollBars_Horizontal_b 0
#DEFINE _VP_ScrollBars_Vertical_b   1

** Resources
#DEFINE _VP_Resource_Scroll     1 
#DEFINE _VP_Resource_ScrollG    2 
#DEFINE _VP_Resource_ScrollW    3
#DEFINE _VP_Resource_ScrollN    4 
#DEFINE _VP_Resource_ScrollE    5 
#DEFINE _VP_Resource_ScrollS    6 
#DEFINE _VP_Resource_ScrollNW   7
#DEFINE _VP_Resource_ScrollNE   8 
#DEFINE _VP_Resource_ScrollSW   9
#DEFINE _VP_Resource_ScrollSE  10 
