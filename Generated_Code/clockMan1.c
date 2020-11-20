/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : clockMan1.c
**     Project     : freertos_mpc5744p
**     Processor   : MPC5744P_144
**     Component   : clock_manager
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-11-18, 16:40, # CodeGen: 0
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file clockMan1.c
** @version 01.00
*/
/*!
**  @addtogroup clockMan1_module clockMan1 module documentation
**  @{
*/

/* clockMan1. */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files, with the same initialized values.
 */

#include "clockMan1.h"
/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 9.4, Duplicate initialization of object element.
 * It's the only way to initialize an array that is member of struct.
 *
 */
/* *************************************************************************
 * Configuration structure for peripheral clock configuration 0
 * ************************************************************************* */
/*! @brief peripheral clock configuration 0 */
mc_me_peripheral_clock_config_t peripheralClockMcMeConfig0[] = {
    {
        .clockName                      = ADC0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ADC1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = CRC0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = DMA0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = DMAMUX0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ENET0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = FLEXCAN0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = FLEXCAN1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = FLEXCAN2_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = FLEXRAY0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = LIN0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = LIN1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = MEMU0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = PITRTI0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SPI0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SPI1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SPI2_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SPI3_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SIUL0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_2,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = WKPU0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ADC2_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ADC3_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SENT0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SENT1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SGEN0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ENET0_TIME_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = LFAST0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = FLEXPWM0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = FLEXPWM1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ETIMER0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ETIMER1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = ETIMER2_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = CTU0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = CTU1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = SIPI0_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_1,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
    {
        .clockName                      = DMAMUX1_CLK,
        .mc_me_RunPeriphConfig          = MC_ME_PERIPH_CONFIG_2,
        .mc_me_LowPowerPeriphConfig     = MC_ME_PERIPH_CONFIG_1,
    },
};

/* *************************************************************************
 * Configuration structure for Clock Configuration 0
 * ************************************************************************* */
/*! @brief User Configuration structure clock_managerCfg_0 */
clock_manager_user_config_t clockMan1_InitConfig0 = {

    /*! @brief Configuration of MC_ME */
    .mcmeConfig =
    {
        .run0 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .run1 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .run2 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .run3 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .drun =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = true,
                .pll0          = true,
                .pll1          = true,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_PLL0_PHI0,
        },

        .stop0 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },


        .safe =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .reset =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .test =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .halt0 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },




        .periphRunConfig =
        {
            {
                /* MC_ME_PERIPH_CONFIG_0 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_1 */
                .reset              = false,
                .safe               = true,
                .test               = true,
                .drun               = true,
                .run0               = true,
                .run1               = true,
                .run2               = true,
                .run3               = true,
            },
            {
                /* MC_ME_PERIPH_CONFIG_2 */
                .reset              = false,
                .safe               = true,
                .test               = true,
                .drun               = false,
                .run0               = true,
                .run1               = true,
                .run2               = true,
                .run3               = true,
            },
            {
                /* MC_ME_PERIPH_CONFIG_3 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_4 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_5 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_6 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_7 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
        },
        .periphLowPowerConfig =
        {
            {
                /* MC_ME_PERIPH_CONFIG_0 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_1 */
                .halt0               = true,
                .standby0            = false,
                .stop0               = true,
            },
            {
                /* MC_ME_PERIPH_CONFIG_2 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_3 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_4 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_5 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_6 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_7 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
        },
        .count                    = 36,
        .peripherals              = peripheralClockMcMeConfig0,
    },

    .cgmConfig =
    {
        .sc_dc0              = CGM_CLOCK_DIV_BY_2,

        .ac0_sc              = CGM_ADCx_SOURCE_IRCOSC,
        .ac0_dc0             = CGM_CLOCK_DIV_BY_2,
        .ac0_dc1             = CGM_CLOCK_DIV_BY_1,                   /*!< SGEN divider */
        .ac0_dc2             = CGM_CLOCK_DIV_BY_1,                   /*!< ADC divider */

        .ac1_sc              = CGM_FLEXRAYx_SOURCE_PLL0_PHI0,
        .ac1_dc0             = CGM_CLOCK_DIV_BY_1,                   /*!< FLEXRAY divider */
        .ac1_dc1             = CGM_CLOCK_DIV_BY_1,                   /*!< SENT divider */

        .ac2_dc0             = CGM_CLOCK_DIV_BY_1,                   /*!< FLEXCAN divider */

        .ac3_sc              = CGM_PLL_REFERENCE_XOSC,

        .ac4_sc              = CGM_PLL_REFERENCE_PLL0_PHI1,

        .ac5_sc              = CGM_LFASTx_SOURCE_XOSC,
        .ac5_dc0             = CGM_CLOCK_DIV_BY_1,                   /*!< LFAST divider */

        .ac6_sc              = CGM_CLOCKOUT0_SRC_IRCOSC,
        .ac6_dc0             = CGM_CLOCK_DIV_BY_1,

        .ac10_sc              = CGM_ENETx_SOURCE_IRCOSC,
        .ac10_dc0             = CGM_CLOCK_DIV_BY_1,                  /*!< ENET divider */

        .ac11_sc              = CGM_ENETx_SOURCE_IRCOSC,
        .ac11_dc0             = CGM_CLOCK_DIV_BY_1,                  /*!< ENET0_TIM divider */

    },

    .cgmcsConfig =
    {
        .irc0Config =
        {
            .trimmingValue = IRC_CLOCK_NO_TRIMMING,
        },
        .xosc0Config =
        {
            .freq               = 40000000,
            .startupDelay       = 1,
            .bypassOption       = XOSC_USE_CRYSTAL,
            .mode               = XOSC_FULL_SWING_PIERCE_MODE,
        },
        .pll0Config =
        {
            .predivider         = PLLDIG_CLOCK_PREDIV_BY_2,
            .mulFactorDiv       = 20,
            .phi0Divider        = PLLDIG_PHI_DIV_BY_2,
            .phi1Divider        = PLLDIG_PHI_DIV_BY_4,
        },
        .pll1Config =
        {
            .mulFactorDiv       = 10,
            .fracDivider        = true,
            .fracDividerValue   = 0,
            .phi0Divider        = PLLDIG_PHI_DIV_BY_5,
            .modulation         = false,
            .modulationType     = CENTRE_SPREAD_MODULATION,
            .modulationPeriod   = 0,
            .incrementStep      = 0,
        },
    },

};

/*! @brief Array of pointers to User configuration structures */
clock_manager_user_config_t const * g_clockManConfigsArr[] = {
    &clockMan1_InitConfig0
};
/*! @brief Array of pointers to User defined Callbacks configuration structures */
clock_manager_callback_user_config_t * g_clockManCallbacksArr[] = {(void*)0};
/* END clockMan1. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/