
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x64 = 2;
uint8_t x77 = 25U;
int32_t t3 = -2587;
static int32_t x89 = 250;
int32_t x90 = -1;
volatile int16_t x94 = INT16_MIN;
uint32_t x98 = 1571361215U;
int64_t x110 = -1LL;
int32_t t7 = 372103750;
uint16_t x116 = 25U;
static int16_t x136 = 13;
int32_t t10 = -101160083;
int8_t x256 = 21;
int8_t x293 = -1;
volatile int32_t x305 = INT32_MIN;
static uint32_t x306 = 8359U;
static volatile int32_t x309 = INT32_MAX;
volatile int8_t x311 = INT8_MAX;
uint16_t x312 = 1U;
uint64_t x357 = UINT64_MAX;
int32_t t18 = 106148414;
int8_t x378 = -3;
int64_t x393 = INT64_MAX;
static int32_t x477 = -13863783;
int32_t x479 = 7004;
int32_t x541 = INT32_MAX;
uint8_t x548 = 6U;
volatile int32_t t23 = -197541570;
uint16_t x660 = 8U;
volatile int64_t x1007 = INT64_MAX;
int64_t x1009 = -1725LL;
int64_t x1010 = INT64_MIN;
int32_t t35 = -149631797;
uint8_t x1049 = 26U;
int8_t x1050 = -1;
int32_t t36 = 1441870;
int32_t t37 = 690358;
uint16_t x1106 = UINT16_MAX;
volatile int8_t x1108 = 1;
volatile int64_t x1275 = -1530005363391LL;
static int8_t x1317 = INT8_MIN;
volatile int32_t x1442 = 1;
int32_t t45 = -7322753;
int32_t t46 = -1;
volatile int32_t x1485 = INT32_MIN;
volatile int64_t x1487 = INT64_MIN;
static uint8_t x1542 = 30U;
static uint8_t x1568 = 1U;
volatile int8_t x1591 = INT8_MAX;
int8_t x1609 = INT8_MIN;
volatile int32_t x1611 = -1;
int32_t t55 = -364529126;
static int8_t x1645 = INT8_MIN;
int64_t x1670 = INT64_MAX;
volatile uint8_t x1672 = 8U;
volatile int32_t t58 = 876;
static int32_t x1677 = 16847659;
volatile int8_t x1680 = 23;
static volatile int32_t t59 = 1;
static int64_t x1753 = -1LL;
volatile uint32_t x1790 = 184304946U;
static uint64_t x1851 = UINT64_MAX;
int16_t x1865 = INT16_MIN;
static int32_t t64 = 1023547678;
int64_t x1874 = 1LL;
int64_t x1894 = -388LL;
uint32_t x1975 = 3998896U;
int32_t t71 = -55;
static volatile int32_t t72 = 186;
volatile int8_t x2055 = INT8_MAX;
int64_t x2195 = INT64_MIN;
int8_t x2316 = 7;
static int8_t x2343 = -1;
int8_t x2405 = INT8_MIN;
static uint8_t x2407 = 6U;
uint8_t x2408 = 3U;
volatile int16_t x2420 = 1;
int32_t x2429 = -1;
static volatile int32_t t86 = -1550;
int32_t x2486 = -1;
volatile int32_t t87 = 0;
int16_t x2582 = -2695;
uint16_t x2614 = 0U;
static volatile int16_t x2615 = INT16_MIN;
static volatile int32_t t90 = -37662180;
uint8_t x2633 = UINT8_MAX;
static volatile int32_t t91 = 829;
int16_t x2759 = INT16_MIN;
int32_t x2760 = 1;
int64_t x2869 = -171LL;
static uint16_t x2872 = 1U;
int32_t t95 = 3;
int64_t x2927 = INT64_MIN;
uint64_t x2963 = 695378946808893LLU;
int8_t x2968 = 19;
int8_t x3051 = INT8_MAX;
int16_t x3069 = INT16_MAX;
int32_t x3130 = INT32_MAX;
int32_t t101 = -3;
int8_t x3153 = -1;
int64_t x3154 = -1LL;
uint16_t x3317 = UINT16_MAX;
static volatile uint32_t x3318 = UINT32_MAX;
volatile int16_t x3319 = -1;
int32_t x3410 = 346508;
uint64_t x3411 = UINT64_MAX;
int64_t x3458 = INT64_MAX;
volatile uint64_t x3470 = 299833LLU;
uint8_t x3505 = 1U;
static volatile uint16_t x3529 = UINT16_MAX;
static uint64_t x3531 = UINT64_MAX;
uint8_t x3532 = 2U;
volatile uint8_t x3560 = 0U;
static int32_t x3585 = -814414;
int32_t x3588 = 2;
int32_t t112 = -40017946;
static int64_t x3594 = INT64_MIN;
volatile int16_t x3641 = -1;
uint16_t x3643 = 7U;
int64_t x3672 = 15LL;
int64_t x3673 = INT64_MIN;
volatile uint32_t x3706 = UINT32_MAX;
static int64_t x3847 = INT64_MAX;
uint32_t x3855 = UINT32_MAX;
volatile uint16_t x3856 = 0U;
volatile uint16_t x3884 = 11U;
int8_t x4016 = 0;
static int64_t x4041 = 16313LL;
uint8_t x4044 = 0U;
int32_t x4071 = -679;
int8_t x4094 = INT8_MAX;
int64_t x4186 = -29147305133032460LL;
int64_t x4214 = INT64_MIN;
static volatile int32_t t129 = -6272101;
volatile int32_t t130 = 45060;
uint32_t x4249 = 5790U;
volatile int32_t x4259 = INT32_MIN;
static int8_t x4361 = INT8_MAX;
uint16_t x4366 = UINT16_MAX;
uint16_t x4368 = 15U;
volatile int32_t t136 = -33839639;
int32_t t137 = -13528169;
int32_t t138 = 957113994;
static uint32_t x4442 = 20675U;
int32_t t142 = 742994;
volatile uint8_t x4672 = 2U;
uint16_t x4681 = UINT16_MAX;
static int8_t x4827 = INT8_MAX;
int16_t x4839 = INT16_MIN;
volatile int64_t x4994 = -1LL;
int16_t x4995 = INT16_MIN;
int16_t x5124 = 10;
volatile int32_t t152 = 2978223;
int32_t x5230 = INT32_MIN;
static int8_t x5246 = -1;
volatile int64_t x5247 = -1LL;
uint32_t x5248 = 2U;
volatile int32_t t154 = 1;
volatile int64_t x5249 = 186LL;
volatile int32_t t156 = -2728;
static int32_t x5269 = INT32_MIN;
int16_t x5314 = -25;
static int32_t t160 = -11788319;
static volatile int8_t x5386 = 18;
int16_t x5585 = -1;
uint16_t x5610 = UINT16_MAX;
int32_t x5713 = INT32_MAX;
static int64_t x5714 = INT64_MIN;
volatile int32_t t170 = -4;
uint16_t x5758 = 1U;
uint64_t x5759 = 22LLU;
static int16_t x5791 = INT16_MIN;
static int32_t x5821 = -1;
int32_t x5831 = -84785680;
int32_t t174 = 1;
uint8_t x5996 = 1U;
volatile int32_t x6037 = INT32_MIN;
int32_t x6041 = -1;
uint8_t x6042 = 17U;
static int8_t x6069 = -6;
volatile int64_t x6072 = 3LL;
uint16_t x6149 = 169U;
uint16_t x6152 = 0U;
uint64_t x6173 = 72844791982708497LLU;
volatile uint64_t x6174 = 3019748LLU;
uint32_t x6190 = UINT32_MAX;
int16_t x6191 = -1;
uint16_t x6192 = 16U;
int64_t x6202 = INT64_MIN;
static int32_t t185 = -81;
static uint64_t x6206 = UINT64_MAX;
int8_t x6222 = 7;
int64_t x6266 = INT64_MIN;
int16_t x6271 = -1;
volatile uint8_t x6272 = 23U;
static volatile int32_t t190 = 1712980;
int16_t x6348 = 6;
uint8_t x6395 = 101U;
int8_t x6453 = -4;
static volatile int32_t t198 = 653;
int32_t x6623 = INT32_MIN;
int32_t t199 = -16345505;


void f0(void) {
    	static uint64_t x5 = 21096906LLU;
	uint32_t x6 = 8U;
	int8_t x7 = INT8_MAX;
	uint8_t x8 = 15U;
	int32_t t0 = -4735;

    t0 = ((x5>(x6%x7))>>x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x37 = 10U;
	static volatile int8_t x38 = -1;
	static volatile int32_t x39 = INT32_MIN;
	uint8_t x40 = 11U;
	int32_t t1 = -33182233;

    t1 = ((x37>(x38%x39))>>x40);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x61 = INT16_MIN;
	static volatile int64_t x62 = 4000958608936958321LL;
	volatile int8_t x63 = INT8_MAX;
	volatile int32_t t2 = -12010;

    t2 = ((x61>(x62%x63))>>x64);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x78 = -42;
	static volatile int16_t x79 = INT16_MIN;
	volatile uint16_t x80 = 2U;

    t3 = ((x77>(x78%x79))>>x80);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x91 = INT64_MIN;
	uint32_t x92 = 1U;
	static volatile int32_t t4 = -2046681;

    t4 = ((x89>(x90%x91))>>x92);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x93 = INT32_MIN;
	static uint32_t x95 = 58509414U;
	int8_t x96 = 3;
	volatile int32_t t5 = 330492350;

    t5 = ((x93>(x94%x95))>>x96);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x97 = 514988939859LLU;
	int64_t x99 = INT64_MIN;
	static uint8_t x100 = 2U;
	volatile int32_t t6 = 303;

    t6 = ((x97>(x98%x99))>>x100);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x109 = INT16_MIN;
	uint32_t x111 = 352U;
	uint8_t x112 = 1U;

    t7 = ((x109>(x110%x111))>>x112);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x113 = 177922582U;
	int64_t x114 = -1LL;
	int64_t x115 = -1295LL;
	volatile int32_t t8 = -3506;

    t8 = ((x113>(x114%x115))>>x116);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x133 = 233250323683LLU;
	int16_t x134 = INT16_MAX;
	int8_t x135 = -1;
	volatile int32_t t9 = 301406535;

    t9 = ((x133>(x134%x135))>>x136);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x145 = 0U;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 7684273LLU;
	uint8_t x148 = 21U;

    t10 = ((x145>(x146%x147))>>x148);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x161 = 1U;
	static uint32_t x162 = UINT32_MAX;
	volatile uint16_t x163 = 63U;
	uint16_t x164 = 10U;
	volatile int32_t t11 = 24806564;

    t11 = ((x161>(x162%x163))>>x164);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x253 = 0LL;
	uint64_t x254 = 11626393663LLU;
	int8_t x255 = -1;
	int32_t t12 = 313;

    t12 = ((x253>(x254%x255))>>x256);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x294 = -1;
	int64_t x295 = INT64_MAX;
	int8_t x296 = 1;
	int32_t t13 = -53524;

    t13 = ((x293>(x294%x295))>>x296);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x307 = INT8_MIN;
	uint32_t x308 = 4U;
	volatile int32_t t14 = 16172703;

    t14 = ((x305>(x306%x307))>>x308);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x310 = INT16_MIN;
	volatile int32_t t15 = -2231;

    t15 = ((x309>(x310%x311))>>x312);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x333 = INT16_MIN;
	static int64_t x334 = INT64_MIN;
	volatile int32_t x335 = -1;
	int64_t x336 = 0LL;
	int32_t t16 = 17143;

    t16 = ((x333>(x334%x335))>>x336);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x345 = UINT8_MAX;
	int64_t x346 = INT64_MIN;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = 0;
	static int32_t t17 = 5575;

    t17 = ((x345>(x346%x347))>>x348);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x358 = INT16_MIN;
	static uint64_t x359 = 2LLU;
	volatile uint16_t x360 = 0U;

    t18 = ((x357>(x358%x359))>>x360);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x377 = UINT8_MAX;
	uint64_t x379 = 2003LLU;
	uint16_t x380 = 13U;
	int32_t t19 = -6;

    t19 = ((x377>(x378%x379))>>x380);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x394 = INT64_MIN;
	static volatile uint16_t x395 = 3U;
	static int16_t x396 = 10;
	int32_t t20 = 5278;

    t20 = ((x393>(x394%x395))>>x396);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x478 = 142963878732525777LLU;
	volatile int8_t x480 = 1;
	static int32_t t21 = -15613;

    t21 = ((x477>(x478%x479))>>x480);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x542 = 738773076U;
	int8_t x543 = INT8_MAX;
	uint32_t x544 = 6U;
	static volatile int32_t t22 = 9415;

    t22 = ((x541>(x542%x543))>>x544);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x545 = 6U;
	uint8_t x546 = 120U;
	uint32_t x547 = 105U;

    t23 = ((x545>(x546%x547))>>x548);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x657 = 85042378U;
	static uint32_t x658 = 0U;
	int64_t x659 = -1LL;
	volatile int32_t t24 = -897;

    t24 = ((x657>(x658%x659))>>x660);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x781 = 94U;
	uint32_t x782 = 91681517U;
	static volatile int32_t x783 = INT32_MAX;
	uint16_t x784 = 1U;
	int32_t t25 = 1625979;

    t25 = ((x781>(x782%x783))>>x784);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x801 = INT16_MAX;
	static uint8_t x802 = 58U;
	uint8_t x803 = UINT8_MAX;
	volatile uint64_t x804 = 18LLU;
	static int32_t t26 = -5705;

    t26 = ((x801>(x802%x803))>>x804);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x833 = -1LL;
	uint32_t x834 = UINT32_MAX;
	static int16_t x835 = 546;
	volatile uint16_t x836 = 7U;
	static volatile int32_t t27 = 31910360;

    t27 = ((x833>(x834%x835))>>x836);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x845 = -4;
	volatile uint16_t x846 = UINT16_MAX;
	uint8_t x847 = 2U;
	int32_t x848 = 1;
	int32_t t28 = 13138;

    t28 = ((x845>(x846%x847))>>x848);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x881 = 508;
	volatile uint8_t x882 = UINT8_MAX;
	uint32_t x883 = 17U;
	uint8_t x884 = 1U;
	volatile int32_t t29 = -9;

    t29 = ((x881>(x882%x883))>>x884);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x945 = INT8_MAX;
	int16_t x946 = INT16_MIN;
	int32_t x947 = INT32_MIN;
	int32_t x948 = 0;
	volatile int32_t t30 = -1042069785;

    t30 = ((x945>(x946%x947))>>x948);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x961 = 296870065285135LLU;
	uint8_t x962 = 79U;
	int32_t x963 = INT32_MIN;
	volatile int16_t x964 = 3;
	int32_t t31 = -26252261;

    t31 = ((x961>(x962%x963))>>x964);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x993 = 159147LL;
	uint64_t x994 = UINT64_MAX;
	int8_t x995 = INT8_MIN;
	uint16_t x996 = 6U;
	volatile int32_t t32 = 12;

    t32 = ((x993>(x994%x995))>>x996);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1005 = -1LL;
	int8_t x1006 = -5;
	static uint16_t x1008 = 10U;
	int32_t t33 = -62;

    t33 = ((x1005>(x1006%x1007))>>x1008);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x1011 = 142623494732819LLU;
	uint8_t x1012 = 18U;
	int32_t t34 = 19;

    t34 = ((x1009>(x1010%x1011))>>x1012);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x1033 = 582785U;
	int32_t x1034 = INT32_MIN;
	int16_t x1035 = -42;
	uint8_t x1036 = 13U;

    t35 = ((x1033>(x1034%x1035))>>x1036);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x1051 = INT64_MAX;
	uint16_t x1052 = 5U;

    t36 = ((x1049>(x1050%x1051))>>x1052);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x1053 = 1435277;
	static uint64_t x1054 = UINT64_MAX;
	uint8_t x1055 = UINT8_MAX;
	volatile uint8_t x1056 = 4U;

    t37 = ((x1053>(x1054%x1055))>>x1056);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x1065 = -1LL;
	uint16_t x1066 = 21U;
	int8_t x1067 = INT8_MIN;
	static int16_t x1068 = 3;
	int32_t t38 = -11427781;

    t38 = ((x1065>(x1066%x1067))>>x1068);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x1069 = -1;
	uint16_t x1070 = 603U;
	static int8_t x1071 = 1;
	static uint8_t x1072 = 0U;
	int32_t t39 = 9499674;

    t39 = ((x1069>(x1070%x1071))>>x1072);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1089 = INT8_MAX;
	int16_t x1090 = INT16_MIN;
	volatile int8_t x1091 = -1;
	uint8_t x1092 = 1U;
	volatile int32_t t40 = -95704986;

    t40 = ((x1089>(x1090%x1091))>>x1092);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1105 = -1;
	static uint64_t x1107 = 5894LLU;
	int32_t t41 = -316;

    t41 = ((x1105>(x1106%x1107))>>x1108);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x1273 = 37LLU;
	static int16_t x1274 = INT16_MIN;
	static int8_t x1276 = 12;
	volatile int32_t t42 = 115;

    t42 = ((x1273>(x1274%x1275))>>x1276);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x1318 = INT32_MIN;
	int16_t x1319 = 70;
	uint8_t x1320 = 5U;
	int32_t t43 = 3623;

    t43 = ((x1317>(x1318%x1319))>>x1320);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x1441 = 149U;
	static volatile int16_t x1443 = -9;
	uint16_t x1444 = 7U;
	volatile int32_t t44 = -11238766;

    t44 = ((x1441>(x1442%x1443))>>x1444);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x1469 = 3432238U;
	static uint64_t x1470 = 7085303474829LLU;
	static int16_t x1471 = -21;
	uint64_t x1472 = 21LLU;

    t45 = ((x1469>(x1470%x1471))>>x1472);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x1473 = INT64_MIN;
	uint32_t x1474 = 716U;
	uint32_t x1475 = UINT32_MAX;
	uint8_t x1476 = 3U;

    t46 = ((x1473>(x1474%x1475))>>x1476);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x1477 = INT16_MIN;
	uint16_t x1478 = UINT16_MAX;
	int64_t x1479 = 973009752LL;
	volatile uint8_t x1480 = 0U;
	int32_t t47 = 151231;

    t47 = ((x1477>(x1478%x1479))>>x1480);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x1486 = 48252600445473131LL;
	int16_t x1488 = 10;
	static volatile int32_t t48 = 497;

    t48 = ((x1485>(x1486%x1487))>>x1488);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1521 = INT8_MIN;
	volatile uint32_t x1522 = UINT32_MAX;
	uint32_t x1523 = 33401U;
	volatile uint16_t x1524 = 1U;
	volatile int32_t t49 = -14691488;

    t49 = ((x1521>(x1522%x1523))>>x1524);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1541 = 9604948LL;
	int8_t x1543 = -13;
	int8_t x1544 = 2;
	volatile int32_t t50 = -1704;

    t50 = ((x1541>(x1542%x1543))>>x1544);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x1553 = 13U;
	int64_t x1554 = -76360608850409LL;
	static volatile int16_t x1555 = -1258;
	int16_t x1556 = 4;
	int32_t t51 = 52576;

    t51 = ((x1553>(x1554%x1555))>>x1556);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1565 = INT64_MIN;
	int32_t x1566 = 390184;
	static int8_t x1567 = INT8_MIN;
	volatile int32_t t52 = 74084;

    t52 = ((x1565>(x1566%x1567))>>x1568);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x1589 = INT64_MAX;
	int32_t x1590 = -26;
	volatile int16_t x1592 = 1;
	volatile int32_t t53 = -2627;

    t53 = ((x1589>(x1590%x1591))>>x1592);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x1593 = INT64_MAX;
	int16_t x1594 = INT16_MAX;
	int32_t x1595 = INT32_MIN;
	uint8_t x1596 = 2U;
	static int32_t t54 = 45014570;

    t54 = ((x1593>(x1594%x1595))>>x1596);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x1610 = INT16_MAX;
	uint16_t x1612 = 12U;

    t55 = ((x1609>(x1610%x1611))>>x1612);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x1646 = -1;
	volatile uint64_t x1647 = 13853309751106165LLU;
	static uint8_t x1648 = 1U;
	volatile int32_t t56 = -35345;

    t56 = ((x1645>(x1646%x1647))>>x1648);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1653 = 172LLU;
	uint16_t x1654 = 14U;
	int8_t x1655 = -56;
	uint32_t x1656 = 2U;
	volatile int32_t t57 = 6;

    t57 = ((x1653>(x1654%x1655))>>x1656);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x1669 = UINT32_MAX;
	int8_t x1671 = -1;

    t58 = ((x1669>(x1670%x1671))>>x1672);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x1678 = 4336160800773763LL;
	int16_t x1679 = -1;

    t59 = ((x1677>(x1678%x1679))>>x1680);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1709 = -1;
	volatile int8_t x1710 = -3;
	static int8_t x1711 = -1;
	uint8_t x1712 = 10U;
	int32_t t60 = 112;

    t60 = ((x1709>(x1710%x1711))>>x1712);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x1754 = -1;
	int8_t x1755 = -1;
	uint16_t x1756 = 3U;
	volatile int32_t t61 = -14882;

    t61 = ((x1753>(x1754%x1755))>>x1756);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x1789 = INT32_MAX;
	static int64_t x1791 = -41LL;
	static int8_t x1792 = 1;
	int32_t t62 = -31;

    t62 = ((x1789>(x1790%x1791))>>x1792);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x1849 = INT32_MIN;
	int8_t x1850 = INT8_MIN;
	volatile uint16_t x1852 = 18U;
	static int32_t t63 = -394259525;

    t63 = ((x1849>(x1850%x1851))>>x1852);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x1866 = 3593U;
	int8_t x1867 = 5;
	static int32_t x1868 = 29;

    t64 = ((x1865>(x1866%x1867))>>x1868);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x1873 = INT32_MIN;
	int32_t x1875 = -1;
	static uint16_t x1876 = 10U;
	int32_t t65 = 1;

    t65 = ((x1873>(x1874%x1875))>>x1876);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x1893 = INT32_MAX;
	int16_t x1895 = INT16_MIN;
	uint32_t x1896 = 1U;
	int32_t t66 = 481421;

    t66 = ((x1893>(x1894%x1895))>>x1896);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x1941 = -45;
	int16_t x1942 = -15;
	int32_t x1943 = INT32_MAX;
	int8_t x1944 = 12;
	static volatile int32_t t67 = -44857;

    t67 = ((x1941>(x1942%x1943))>>x1944);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x1949 = INT16_MIN;
	volatile uint32_t x1950 = UINT32_MAX;
	volatile int8_t x1951 = INT8_MIN;
	uint8_t x1952 = 1U;
	int32_t t68 = 20935925;

    t68 = ((x1949>(x1950%x1951))>>x1952);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x1973 = UINT16_MAX;
	volatile uint16_t x1974 = 28312U;
	uint16_t x1976 = 3U;
	volatile int32_t t69 = 47363;

    t69 = ((x1973>(x1974%x1975))>>x1976);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x1997 = INT64_MAX;
	int32_t x1998 = -1271200;
	static uint64_t x1999 = UINT64_MAX;
	static uint8_t x2000 = 3U;
	volatile int32_t t70 = 335;

    t70 = ((x1997>(x1998%x1999))>>x2000);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2025 = 45975LLU;
	static int8_t x2026 = -8;
	volatile int16_t x2027 = -3;
	int8_t x2028 = 0;

    t71 = ((x2025>(x2026%x2027))>>x2028);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x2049 = 1;
	int32_t x2050 = -1;
	uint16_t x2051 = UINT16_MAX;
	uint8_t x2052 = 24U;

    t72 = ((x2049>(x2050%x2051))>>x2052);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x2053 = -1;
	uint16_t x2054 = 6132U;
	volatile int16_t x2056 = 0;
	volatile int32_t t73 = -590821015;

    t73 = ((x2053>(x2054%x2055))>>x2056);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2193 = 25923163LLU;
	int16_t x2194 = -1;
	volatile int16_t x2196 = 3;
	static volatile int32_t t74 = 15896;

    t74 = ((x2193>(x2194%x2195))>>x2196);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x2197 = -19;
	static int32_t x2198 = INT32_MIN;
	volatile uint32_t x2199 = UINT32_MAX;
	uint8_t x2200 = 20U;
	static volatile int32_t t75 = 106189495;

    t75 = ((x2197>(x2198%x2199))>>x2200);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x2221 = INT8_MAX;
	volatile uint8_t x2222 = 68U;
	int32_t x2223 = INT32_MIN;
	uint16_t x2224 = 6U;
	static int32_t t76 = 415293072;

    t76 = ((x2221>(x2222%x2223))>>x2224);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x2229 = INT8_MAX;
	int32_t x2230 = INT32_MIN;
	static int16_t x2231 = -1780;
	int16_t x2232 = 1;
	static int32_t t77 = -179732951;

    t77 = ((x2229>(x2230%x2231))>>x2232);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x2269 = UINT16_MAX;
	int32_t x2270 = INT32_MAX;
	static int8_t x2271 = 29;
	int8_t x2272 = 0;
	volatile int32_t t78 = -59;

    t78 = ((x2269>(x2270%x2271))>>x2272);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x2277 = INT32_MAX;
	static int64_t x2278 = 81LL;
	uint64_t x2279 = 18944902LLU;
	static volatile uint8_t x2280 = 1U;
	volatile int32_t t79 = -492830792;

    t79 = ((x2277>(x2278%x2279))>>x2280);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x2313 = INT32_MIN;
	int8_t x2314 = INT8_MIN;
	int32_t x2315 = INT32_MIN;
	static int32_t t80 = 72916;

    t80 = ((x2313>(x2314%x2315))>>x2316);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x2341 = INT64_MIN;
	int64_t x2342 = -1LL;
	volatile uint8_t x2344 = 0U;
	volatile int32_t t81 = 5;

    t81 = ((x2341>(x2342%x2343))>>x2344);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2406 = INT64_MAX;
	int32_t t82 = 87902934;

    t82 = ((x2405>(x2406%x2407))>>x2408);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2417 = INT16_MIN;
	int32_t x2418 = INT32_MIN;
	uint32_t x2419 = 10U;
	volatile int32_t t83 = 0;

    t83 = ((x2417>(x2418%x2419))>>x2420);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2430 = INT16_MIN;
	static int8_t x2431 = 17;
	uint8_t x2432 = 23U;
	volatile int32_t t84 = 112;

    t84 = ((x2429>(x2430%x2431))>>x2432);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x2437 = UINT64_MAX;
	int8_t x2438 = -1;
	uint64_t x2439 = UINT64_MAX;
	uint32_t x2440 = 1U;
	static volatile int32_t t85 = -106708321;

    t85 = ((x2437>(x2438%x2439))>>x2440);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2465 = INT8_MAX;
	int16_t x2466 = -21;
	volatile int8_t x2467 = 12;
	int32_t x2468 = 14;

    t86 = ((x2465>(x2466%x2467))>>x2468);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x2485 = -1;
	volatile uint64_t x2487 = 17533461275623LLU;
	volatile uint8_t x2488 = 3U;

    t87 = ((x2485>(x2486%x2487))>>x2488);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x2529 = INT32_MAX;
	int64_t x2530 = INT64_MIN;
	uint64_t x2531 = 1981908639058969683LLU;
	uint16_t x2532 = 0U;
	volatile int32_t t88 = 0;

    t88 = ((x2529>(x2530%x2531))>>x2532);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x2581 = 18001532LL;
	int8_t x2583 = 21;
	int8_t x2584 = 1;
	volatile int32_t t89 = 1274;

    t89 = ((x2581>(x2582%x2583))>>x2584);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x2613 = 113LL;
	volatile uint8_t x2616 = 0U;

    t90 = ((x2613>(x2614%x2615))>>x2616);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x2634 = INT32_MIN;
	int64_t x2635 = INT64_MAX;
	uint64_t x2636 = 3LLU;

    t91 = ((x2633>(x2634%x2635))>>x2636);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x2757 = 13870;
	int16_t x2758 = INT16_MIN;
	int32_t t92 = 7;

    t92 = ((x2757>(x2758%x2759))>>x2760);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x2857 = INT64_MAX;
	int64_t x2858 = INT64_MIN;
	static int8_t x2859 = INT8_MIN;
	uint16_t x2860 = 3U;
	int32_t t93 = 0;

    t93 = ((x2857>(x2858%x2859))>>x2860);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x2870 = UINT16_MAX;
	static int8_t x2871 = INT8_MAX;
	volatile int32_t t94 = -17734;

    t94 = ((x2869>(x2870%x2871))>>x2872);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x2881 = INT32_MIN;
	uint8_t x2882 = 55U;
	int16_t x2883 = -1;
	uint64_t x2884 = 29LLU;

    t95 = ((x2881>(x2882%x2883))>>x2884);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x2925 = INT8_MIN;
	int16_t x2926 = INT16_MAX;
	int8_t x2928 = 1;
	volatile int32_t t96 = 42989805;

    t96 = ((x2925>(x2926%x2927))>>x2928);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x2961 = INT64_MIN;
	int8_t x2962 = INT8_MAX;
	uint8_t x2964 = 30U;
	volatile int32_t t97 = -215257;

    t97 = ((x2961>(x2962%x2963))>>x2964);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x2965 = 9271910U;
	volatile uint32_t x2966 = UINT32_MAX;
	volatile int64_t x2967 = -1LL;
	int32_t t98 = 439522750;

    t98 = ((x2965>(x2966%x2967))>>x2968);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x3049 = 157244078LLU;
	volatile int64_t x3050 = INT64_MIN;
	int8_t x3052 = 0;
	volatile int32_t t99 = -85;

    t99 = ((x3049>(x3050%x3051))>>x3052);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x3070 = INT64_MIN;
	static int8_t x3071 = -1;
	int8_t x3072 = 2;
	static volatile int32_t t100 = 3;

    t100 = ((x3069>(x3070%x3071))>>x3072);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x3129 = INT8_MAX;
	static int32_t x3131 = -2078614;
	uint32_t x3132 = 4U;

    t101 = ((x3129>(x3130%x3131))>>x3132);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x3155 = INT64_MAX;
	volatile int32_t x3156 = 5;
	int32_t t102 = 3;

    t102 = ((x3153>(x3154%x3155))>>x3156);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x3305 = 5;
	int8_t x3306 = 7;
	static int16_t x3307 = -1;
	int16_t x3308 = 1;
	volatile int32_t t103 = -44020;

    t103 = ((x3305>(x3306%x3307))>>x3308);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x3320 = 1U;
	static int32_t t104 = 65955;

    t104 = ((x3317>(x3318%x3319))>>x3320);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x3337 = 48;
	int32_t x3338 = INT32_MIN;
	int16_t x3339 = 13;
	uint8_t x3340 = 23U;
	int32_t t105 = 3;

    t105 = ((x3337>(x3338%x3339))>>x3340);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3409 = 214;
	volatile uint16_t x3412 = 2U;
	int32_t t106 = -1119367;

    t106 = ((x3409>(x3410%x3411))>>x3412);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x3457 = 5284676423561LLU;
	int16_t x3459 = -1;
	uint32_t x3460 = 1U;
	int32_t t107 = 16917549;

    t107 = ((x3457>(x3458%x3459))>>x3460);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x3469 = UINT64_MAX;
	int16_t x3471 = INT16_MIN;
	uint16_t x3472 = 26U;
	int32_t t108 = -165;

    t108 = ((x3469>(x3470%x3471))>>x3472);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x3506 = 735U;
	volatile int8_t x3507 = -14;
	volatile uint32_t x3508 = 1U;
	static volatile int32_t t109 = 54;

    t109 = ((x3505>(x3506%x3507))>>x3508);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3530 = -140;
	volatile int32_t t110 = -45755255;

    t110 = ((x3529>(x3530%x3531))>>x3532);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x3557 = -1;
	int32_t x3558 = INT32_MIN;
	uint8_t x3559 = 13U;
	int32_t t111 = -307639776;

    t111 = ((x3557>(x3558%x3559))>>x3560);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x3586 = -850932117LL;
	volatile int16_t x3587 = -3791;

    t112 = ((x3585>(x3586%x3587))>>x3588);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3593 = 9;
	int16_t x3595 = INT16_MIN;
	static uint16_t x3596 = 31U;
	int32_t t113 = 108552971;

    t113 = ((x3593>(x3594%x3595))>>x3596);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x3605 = -13525;
	static uint16_t x3606 = 74U;
	int32_t x3607 = -1079626;
	int8_t x3608 = 1;
	volatile int32_t t114 = 838483;

    t114 = ((x3605>(x3606%x3607))>>x3608);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x3642 = -1LL;
	int8_t x3644 = 0;
	int32_t t115 = 470;

    t115 = ((x3641>(x3642%x3643))>>x3644);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x3669 = UINT32_MAX;
	static int32_t x3670 = INT32_MIN;
	volatile int8_t x3671 = INT8_MIN;
	volatile int32_t t116 = -6;

    t116 = ((x3669>(x3670%x3671))>>x3672);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x3674 = INT64_MIN;
	uint32_t x3675 = 11U;
	static uint64_t x3676 = 7LLU;
	static int32_t t117 = -31;

    t117 = ((x3673>(x3674%x3675))>>x3676);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3705 = -18945LL;
	uint64_t x3707 = 30824320097993563LLU;
	uint8_t x3708 = 12U;
	static volatile int32_t t118 = 32;

    t118 = ((x3705>(x3706%x3707))>>x3708);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x3725 = 10U;
	int32_t x3726 = INT32_MIN;
	int8_t x3727 = INT8_MAX;
	uint16_t x3728 = 0U;
	static int32_t t119 = 9;

    t119 = ((x3725>(x3726%x3727))>>x3728);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x3845 = INT64_MIN;
	int8_t x3846 = -12;
	uint8_t x3848 = 0U;
	int32_t t120 = 113;

    t120 = ((x3845>(x3846%x3847))>>x3848);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x3853 = UINT64_MAX;
	int64_t x3854 = INT64_MAX;
	int32_t t121 = -101103662;

    t121 = ((x3853>(x3854%x3855))>>x3856);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x3857 = -308LL;
	int64_t x3858 = 2077323887357LL;
	uint16_t x3859 = 22856U;
	volatile int8_t x3860 = 4;
	int32_t t122 = 18255;

    t122 = ((x3857>(x3858%x3859))>>x3860);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x3881 = INT64_MIN;
	int16_t x3882 = 10;
	volatile int8_t x3883 = INT8_MIN;
	int32_t t123 = -745751765;

    t123 = ((x3881>(x3882%x3883))>>x3884);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x4013 = -30547149;
	int8_t x4014 = INT8_MIN;
	int16_t x4015 = INT16_MAX;
	int32_t t124 = -137;

    t124 = ((x4013>(x4014%x4015))>>x4016);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x4042 = INT8_MIN;
	static int8_t x4043 = 62;
	int32_t t125 = 0;

    t125 = ((x4041>(x4042%x4043))>>x4044);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x4069 = -101;
	volatile int64_t x4070 = 3330782LL;
	volatile uint8_t x4072 = 1U;
	static volatile int32_t t126 = 584047861;

    t126 = ((x4069>(x4070%x4071))>>x4072);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x4093 = 6823;
	int16_t x4095 = INT16_MAX;
	uint16_t x4096 = 1U;
	volatile int32_t t127 = -3448044;

    t127 = ((x4093>(x4094%x4095))>>x4096);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4185 = 214;
	uint64_t x4187 = 47585525069778LLU;
	static volatile uint8_t x4188 = 4U;
	volatile int32_t t128 = 389610;

    t128 = ((x4185>(x4186%x4187))>>x4188);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x4213 = -662444;
	int16_t x4215 = -2476;
	uint8_t x4216 = 0U;

    t129 = ((x4213>(x4214%x4215))>>x4216);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x4225 = INT64_MAX;
	uint16_t x4226 = UINT16_MAX;
	uint64_t x4227 = UINT64_MAX;
	int8_t x4228 = 0;

    t130 = ((x4225>(x4226%x4227))>>x4228);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x4250 = 23U;
	int16_t x4251 = INT16_MIN;
	volatile uint16_t x4252 = 5U;
	static volatile int32_t t131 = 40;

    t131 = ((x4249>(x4250%x4251))>>x4252);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x4253 = 28U;
	uint8_t x4254 = 0U;
	int8_t x4255 = INT8_MAX;
	int16_t x4256 = 6;
	volatile int32_t t132 = 722;

    t132 = ((x4253>(x4254%x4255))>>x4256);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x4257 = -1;
	int64_t x4258 = -396483046LL;
	static uint32_t x4260 = 13U;
	int32_t t133 = -297;

    t133 = ((x4257>(x4258%x4259))>>x4260);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x4353 = 1531223;
	uint32_t x4354 = 2052683U;
	static int32_t x4355 = INT32_MIN;
	volatile int8_t x4356 = 8;
	int32_t t134 = 299;

    t134 = ((x4353>(x4354%x4355))>>x4356);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x4362 = INT8_MIN;
	int16_t x4363 = -1;
	uint16_t x4364 = 0U;
	int32_t t135 = 31729717;

    t135 = ((x4361>(x4362%x4363))>>x4364);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4365 = -1;
	volatile int64_t x4367 = INT64_MAX;

    t136 = ((x4365>(x4366%x4367))>>x4368);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x4381 = -1;
	uint8_t x4382 = 10U;
	uint64_t x4383 = 10LLU;
	uint8_t x4384 = 6U;

    t137 = ((x4381>(x4382%x4383))>>x4384);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4413 = INT32_MIN;
	int32_t x4414 = 3;
	int64_t x4415 = INT64_MIN;
	static uint32_t x4416 = 1U;

    t138 = ((x4413>(x4414%x4415))>>x4416);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x4441 = 83337LL;
	static volatile int16_t x4443 = INT16_MIN;
	static int16_t x4444 = 1;
	int32_t t139 = 84;

    t139 = ((x4441>(x4442%x4443))>>x4444);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4529 = 29272877;
	int32_t x4530 = 78323403;
	int64_t x4531 = INT64_MAX;
	int8_t x4532 = 1;
	int32_t t140 = -4;

    t140 = ((x4529>(x4530%x4531))>>x4532);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x4533 = UINT64_MAX;
	int64_t x4534 = 52029604LL;
	volatile int16_t x4535 = INT16_MIN;
	static uint8_t x4536 = 7U;
	static volatile int32_t t141 = 819;

    t141 = ((x4533>(x4534%x4535))>>x4536);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4637 = INT64_MAX;
	static int16_t x4638 = INT16_MIN;
	uint8_t x4639 = UINT8_MAX;
	int8_t x4640 = 3;

    t142 = ((x4637>(x4638%x4639))>>x4640);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x4657 = -12LL;
	volatile int16_t x4658 = INT16_MIN;
	int16_t x4659 = INT16_MIN;
	volatile uint8_t x4660 = 9U;
	int32_t t143 = 148;

    t143 = ((x4657>(x4658%x4659))>>x4660);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x4669 = 1927;
	int8_t x4670 = INT8_MIN;
	uint64_t x4671 = 17574116931639LLU;
	volatile int32_t t144 = 2;

    t144 = ((x4669>(x4670%x4671))>>x4672);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x4682 = -4;
	uint8_t x4683 = UINT8_MAX;
	static volatile uint32_t x4684 = 25U;
	int32_t t145 = -1;

    t145 = ((x4681>(x4682%x4683))>>x4684);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x4793 = -7993;
	int8_t x4794 = INT8_MAX;
	uint64_t x4795 = 939654830LLU;
	static uint8_t x4796 = 26U;
	volatile int32_t t146 = -6214366;

    t146 = ((x4793>(x4794%x4795))>>x4796);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x4825 = INT8_MIN;
	volatile int64_t x4826 = INT64_MAX;
	int32_t x4828 = 30;
	volatile int32_t t147 = 2440059;

    t147 = ((x4825>(x4826%x4827))>>x4828);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x4837 = -1LL;
	int16_t x4838 = INT16_MIN;
	int8_t x4840 = 3;
	int32_t t148 = 5782955;

    t148 = ((x4837>(x4838%x4839))>>x4840);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4917 = INT8_MIN;
	volatile int32_t x4918 = INT32_MIN;
	volatile uint8_t x4919 = UINT8_MAX;
	static uint16_t x4920 = 1U;
	int32_t t149 = -480636801;

    t149 = ((x4917>(x4918%x4919))>>x4920);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x4993 = 13U;
	volatile int16_t x4996 = 0;
	volatile int32_t t150 = 111961;

    t150 = ((x4993>(x4994%x4995))>>x4996);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x5025 = INT32_MIN;
	int64_t x5026 = -1LL;
	static int16_t x5027 = -1;
	int16_t x5028 = 0;
	int32_t t151 = -1671214;

    t151 = ((x5025>(x5026%x5027))>>x5028);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x5121 = UINT8_MAX;
	static int32_t x5122 = INT32_MIN;
	int32_t x5123 = -17931;

    t152 = ((x5121>(x5122%x5123))>>x5124);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x5229 = UINT16_MAX;
	uint32_t x5231 = UINT32_MAX;
	volatile int16_t x5232 = 1;
	volatile int32_t t153 = 216730;

    t153 = ((x5229>(x5230%x5231))>>x5232);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x5245 = UINT32_MAX;

    t154 = ((x5245>(x5246%x5247))>>x5248);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x5250 = INT8_MIN;
	uint16_t x5251 = 105U;
	static volatile uint8_t x5252 = 0U;
	int32_t t155 = -16;

    t155 = ((x5249>(x5250%x5251))>>x5252);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x5257 = INT64_MIN;
	int32_t x5258 = INT32_MIN;
	int32_t x5259 = 7;
	uint16_t x5260 = 0U;

    t156 = ((x5257>(x5258%x5259))>>x5260);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x5270 = INT64_MIN;
	int32_t x5271 = INT32_MAX;
	int8_t x5272 = 0;
	volatile int32_t t157 = 37564347;

    t157 = ((x5269>(x5270%x5271))>>x5272);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x5285 = -1;
	static uint8_t x5286 = 15U;
	uint32_t x5287 = UINT32_MAX;
	uint64_t x5288 = 0LLU;
	volatile int32_t t158 = -10157;

    t158 = ((x5285>(x5286%x5287))>>x5288);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x5313 = -1;
	static uint32_t x5315 = 1888U;
	volatile int8_t x5316 = 0;
	static volatile int32_t t159 = 114;

    t159 = ((x5313>(x5314%x5315))>>x5316);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x5357 = INT8_MAX;
	int8_t x5358 = INT8_MIN;
	static int16_t x5359 = -1;
	static uint8_t x5360 = 6U;

    t160 = ((x5357>(x5358%x5359))>>x5360);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x5385 = INT64_MAX;
	int64_t x5387 = -1LL;
	uint8_t x5388 = 11U;
	static volatile int32_t t161 = 15109605;

    t161 = ((x5385>(x5386%x5387))>>x5388);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x5501 = INT32_MAX;
	uint16_t x5502 = 191U;
	uint16_t x5503 = 23463U;
	int8_t x5504 = 14;
	volatile int32_t t162 = -1999;

    t162 = ((x5501>(x5502%x5503))>>x5504);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x5525 = INT16_MIN;
	uint8_t x5526 = UINT8_MAX;
	int8_t x5527 = INT8_MIN;
	int32_t x5528 = 4;
	int32_t t163 = 168053154;

    t163 = ((x5525>(x5526%x5527))>>x5528);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x5586 = INT32_MAX;
	int64_t x5587 = 13LL;
	int8_t x5588 = 0;
	static int32_t t164 = 1;

    t164 = ((x5585>(x5586%x5587))>>x5588);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x5609 = -1;
	int32_t x5611 = 1012;
	volatile uint8_t x5612 = 28U;
	volatile int32_t t165 = -1;

    t165 = ((x5609>(x5610%x5611))>>x5612);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x5629 = INT8_MIN;
	volatile int8_t x5630 = -46;
	volatile int16_t x5631 = INT16_MIN;
	uint8_t x5632 = 7U;
	volatile int32_t t166 = 0;

    t166 = ((x5629>(x5630%x5631))>>x5632);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x5645 = UINT64_MAX;
	int32_t x5646 = INT32_MIN;
	uint32_t x5647 = 174406488U;
	volatile uint8_t x5648 = 6U;
	int32_t t167 = 237981814;

    t167 = ((x5645>(x5646%x5647))>>x5648);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x5649 = -2;
	uint16_t x5650 = 2U;
	volatile int8_t x5651 = INT8_MAX;
	static uint16_t x5652 = 0U;
	int32_t t168 = 1;

    t168 = ((x5649>(x5650%x5651))>>x5652);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x5665 = 6507832U;
	uint64_t x5666 = 36376LLU;
	uint32_t x5667 = 775119U;
	volatile int32_t x5668 = 29;
	int32_t t169 = -26378;

    t169 = ((x5665>(x5666%x5667))>>x5668);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5715 = 939;
	volatile uint16_t x5716 = 0U;

    t170 = ((x5713>(x5714%x5715))>>x5716);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x5757 = 0;
	static uint8_t x5760 = 2U;
	int32_t t171 = -103;

    t171 = ((x5757>(x5758%x5759))>>x5760);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x5789 = -14;
	int64_t x5790 = INT64_MAX;
	uint8_t x5792 = 0U;
	volatile int32_t t172 = -822665417;

    t172 = ((x5789>(x5790%x5791))>>x5792);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x5822 = UINT32_MAX;
	uint32_t x5823 = UINT32_MAX;
	uint16_t x5824 = 6U;
	int32_t t173 = 252160270;

    t173 = ((x5821>(x5822%x5823))>>x5824);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x5829 = 0;
	volatile uint64_t x5830 = 1353LLU;
	uint8_t x5832 = 3U;

    t174 = ((x5829>(x5830%x5831))>>x5832);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x5889 = INT16_MAX;
	int32_t x5890 = -1;
	static uint8_t x5891 = 101U;
	int16_t x5892 = 0;
	int32_t t175 = 711886;

    t175 = ((x5889>(x5890%x5891))>>x5892);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x5993 = INT32_MIN;
	int32_t x5994 = INT32_MIN;
	int32_t x5995 = INT32_MAX;
	volatile int32_t t176 = -930798470;

    t176 = ((x5993>(x5994%x5995))>>x5996);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x6038 = INT8_MIN;
	static int32_t x6039 = INT32_MAX;
	uint16_t x6040 = 2U;
	int32_t t177 = 1;

    t177 = ((x6037>(x6038%x6039))>>x6040);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x6043 = UINT16_MAX;
	volatile uint8_t x6044 = 11U;
	int32_t t178 = -12683;

    t178 = ((x6041>(x6042%x6043))>>x6044);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x6070 = UINT32_MAX;
	int64_t x6071 = INT64_MIN;
	volatile int32_t t179 = -77906;

    t179 = ((x6069>(x6070%x6071))>>x6072);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x6085 = INT8_MAX;
	volatile int32_t x6086 = -1;
	uint32_t x6087 = 182560U;
	volatile int16_t x6088 = 0;
	static int32_t t180 = -13643660;

    t180 = ((x6085>(x6086%x6087))>>x6088);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x6150 = 34078387147LL;
	uint8_t x6151 = 14U;
	int32_t t181 = -580850333;

    t181 = ((x6149>(x6150%x6151))>>x6152);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x6175 = INT16_MIN;
	uint16_t x6176 = 0U;
	volatile int32_t t182 = -48779257;

    t182 = ((x6173>(x6174%x6175))>>x6176);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x6189 = -1;
	int32_t t183 = 12928;

    t183 = ((x6189>(x6190%x6191))>>x6192);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x6197 = 123U;
	int8_t x6198 = INT8_MAX;
	uint32_t x6199 = 1U;
	static volatile uint32_t x6200 = 17U;
	volatile int32_t t184 = 2226;

    t184 = ((x6197>(x6198%x6199))>>x6200);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x6201 = 6U;
	static uint64_t x6203 = 3388599330LLU;
	volatile uint8_t x6204 = 3U;

    t185 = ((x6201>(x6202%x6203))>>x6204);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x6205 = 220886375057905LLU;
	static volatile int64_t x6207 = -61609LL;
	int8_t x6208 = 28;
	int32_t t186 = -15;

    t186 = ((x6205>(x6206%x6207))>>x6208);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x6221 = INT64_MIN;
	int16_t x6223 = INT16_MAX;
	uint8_t x6224 = 3U;
	volatile int32_t t187 = 134348860;

    t187 = ((x6221>(x6222%x6223))>>x6224);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x6229 = 17U;
	int64_t x6230 = -374670531LL;
	static uint32_t x6231 = 76U;
	static volatile uint32_t x6232 = 2U;
	static volatile int32_t t188 = 2722;

    t188 = ((x6229>(x6230%x6231))>>x6232);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x6265 = INT8_MIN;
	uint8_t x6267 = UINT8_MAX;
	volatile uint8_t x6268 = 0U;
	volatile int32_t t189 = -2807;

    t189 = ((x6265>(x6266%x6267))>>x6268);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x6269 = UINT64_MAX;
	uint32_t x6270 = 21377499U;

    t190 = ((x6269>(x6270%x6271))>>x6272);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x6289 = INT32_MIN;
	int64_t x6290 = INT64_MIN;
	static volatile int64_t x6291 = -31LL;
	int16_t x6292 = 0;
	volatile int32_t t191 = -4459;

    t191 = ((x6289>(x6290%x6291))>>x6292);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x6329 = 22U;
	uint32_t x6330 = 97580318U;
	uint16_t x6331 = 416U;
	int16_t x6332 = 3;
	int32_t t192 = 3;

    t192 = ((x6329>(x6330%x6331))>>x6332);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x6345 = 1880738158854242LLU;
	int8_t x6346 = 50;
	int32_t x6347 = -38825;
	int32_t t193 = -8;

    t193 = ((x6345>(x6346%x6347))>>x6348);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x6393 = 2065148508U;
	int32_t x6394 = -250216;
	static uint16_t x6396 = 10U;
	int32_t t194 = 96;

    t194 = ((x6393>(x6394%x6395))>>x6396);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x6409 = INT16_MIN;
	int8_t x6410 = INT8_MIN;
	static int8_t x6411 = INT8_MIN;
	uint16_t x6412 = 24U;
	static volatile int32_t t195 = 0;

    t195 = ((x6409>(x6410%x6411))>>x6412);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x6454 = -5;
	static int64_t x6455 = 217922510328LL;
	int8_t x6456 = 3;
	int32_t t196 = -3571784;

    t196 = ((x6453>(x6454%x6455))>>x6456);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x6461 = -96;
	int64_t x6462 = 2204891740997LL;
	volatile int8_t x6463 = INT8_MAX;
	int8_t x6464 = 1;
	int32_t t197 = -1025;

    t197 = ((x6461>(x6462%x6463))>>x6464);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x6501 = INT64_MIN;
	int64_t x6502 = INT64_MAX;
	volatile int16_t x6503 = INT16_MAX;
	int8_t x6504 = 3;

    t198 = ((x6501>(x6502%x6503))>>x6504);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x6621 = UINT8_MAX;
	int64_t x6622 = INT64_MIN;
	volatile int8_t x6624 = 28;

    t199 = ((x6621>(x6622%x6623))>>x6624);

    if (t199 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

