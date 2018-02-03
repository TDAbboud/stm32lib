/**
  ******************************************************************************
  * @file    stm32f4xx_hal_ltdc.c
  * @author  MCD Application Team
  * @brief   LTDC HAL module driver.
  *          This file provides firmware functions to manage the following
  *          functionalities of the LTDC peripheral:
  *           + Initialization and de-initialization functions
  *           + IO operation functions
  *           + Peripheral Control functions
  *           + Peripheral State and Errors functions
  *
  @verbatim
  ==============================================================================
                        ##### How to use this driver #####
  ==============================================================================
    [..]
     (#) Program the required configuration through the following parameters:
         the LTDC timing, the horizontal and vertical polarity,
         the pixel clock polarity, Data Enable polarity and the LTDC background color value
         using HAL_LTDC_Init() function

     (#) Program the required configuration through the following parameters:
         the pixel format, the blending factors, input alpha value, the window size
         and the image size using HAL_LTDC_ConfigLayer() function for foreground
         or/and background layer.

     (#) Optionally, configure and enable the CLUT using HAL_LTDC_ConfigCLUT() and
         HAL_LTDC_EnableCLUT functions.

     (#) Optionally, enable the Dither using HAL_LTDC_EnableDither().

     (#) Optionally, configure and enable the Color keying using HAL_LTDC_ConfigColorKeying()
         and HAL_LTDC_EnableColorKeying functions.

     (#) Optionally, configure LineInterrupt using HAL_LTDC_ProgramLineEvent()
         function

     (#) If needed, reconfigure and change the pixel format value, the alpha value
         value, the window size, the window position and the layer start address
         for foreground or/and background layer using respectively the following
         functions: HAL_LTDC_SetPixelFormat(), HAL_LTDC_SetAlpha(), HAL_LTDC_SetWindowSize(),
         HAL_LTDC_SetWindowPosition(), HAL_LTDC_SetAddress.

     (#) Variant functions with 