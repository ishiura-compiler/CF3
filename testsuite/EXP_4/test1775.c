
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

static uint64_t x21 = UINT64_MAX;
int16_t x121 = INT16_MAX;
int32_t x123 = 1;
int32_t x159 = -1;
uint8_t x160 = 7U;
uint64_t x229 = UINT64_MAX;
uint64_t x230 = UINT64_MAX;
static volatile int32_t x302 = -1;
volatile int32_t x305 = INT32_MAX;
int32_t x449 = INT32_MAX;
static volatile int16_t x451 = INT16_MIN;
uint16_t x495 = 168U;
static volatile uint64_t t10 = 81344960201LLU;
volatile int8_t x499 = INT8_MIN;
static uint8_t x585 = UINT8_MAX;
int32_t t13 = -1;
uint16_t x589 = UINT16_MAX;
volatile int32_t t16 = 853;
int16_t x686 = -1;
int8_t x706 = 11;
int32_t x715 = INT32_MAX;
volatile uint8_t x725 = UINT8_MAX;
static volatile uint16_t x764 = UINT16_MAX;
uint64_t x787 = 288903083104007LLU;
int64_t x857 = INT64_MAX;
int64_t x860 = 2897962LL;
static volatile int64_t t27 = INT64_MAX;
int32_t x892 = -3;
uint32_t x985 = 2706U;
volatile int8_t x986 = 2;
int32_t x987 = 17142712;
int32_t x1014 = 5;
static int64_t t33 = 4LL;
static int32_t t34 = -31312;
int8_t x1142 = 2;
int16_t x1155 = 58;
static int32_t t38 = 135;
int16_t x1276 = INT16_MAX;
volatile int64_t t39 = 2028576106LL;
volatile int8_t x1344 = INT8_MIN;
int8_t x1358 = -1;
uint8_t x1365 = UINT8_MAX;
int64_t t43 = -2562955051LL;
int32_t t44 = -6520011;
uint64_t x1405 = 17898024344007LLU;
static volatile uint64_t t45 = 54137LLU;
volatile int32_t t47 = 1;
int16_t x1446 = -1;
int64_t x1451 = -1LL;
int16_t x1490 = -1;
int8_t x1491 = 10;
uint32_t x1513 = UINT32_MAX;
int64_t x1559 = INT64_MIN;
static volatile uint32_t t55 = UINT32_MAX;
static uint64_t t56 = 4842810947LLU;
int32_t t57 = 146642;
int16_t x1654 = -1;
int64_t x1695 = INT64_MAX;
volatile int16_t x1743 = INT16_MIN;
int8_t x1795 = -1;
uint64_t t62 = 103053360183LLU;
static volatile int16_t x1868 = INT16_MAX;
int16_t x1950 = 22;
static volatile uint64_t t67 = 4105LLU;
volatile int8_t x1955 = INT8_MIN;
uint16_t x1965 = UINT16_MAX;
int8_t x2102 = -1;
int8_t x2125 = 1;
int64_t x2128 = INT64_MAX;
static int64_t x2223 = -8250761261LL;
volatile int16_t x2345 = 42;
volatile int32_t t76 = 29;
uint64_t x2349 = 814255176890LLU;
int8_t x2607 = INT8_MIN;
uint8_t x2608 = 0U;
volatile int32_t t81 = INT32_MAX;
int16_t x2615 = INT16_MAX;
int8_t x2648 = INT8_MIN;
volatile int8_t x2711 = 0;
int8_t x2747 = INT8_MAX;
int32_t x2806 = -1;
uint16_t x2830 = 15U;
uint64_t x2831 = 10703614329752922LLU;
int32_t x2883 = INT32_MIN;
uint64_t x2892 = UINT64_MAX;
int32_t t90 = 2902;
int16_t x3011 = INT16_MIN;
uint64_t x3186 = UINT64_MAX;
static int32_t t96 = -1;
volatile int64_t x3287 = -13146LL;
static volatile int32_t t97 = -327;
volatile int32_t x3304 = INT32_MAX;
int8_t x3306 = 0;
volatile uint8_t x3351 = UINT8_MAX;
volatile uint32_t t100 = 6295209U;
int8_t x3364 = -1;
int32_t x3387 = INT32_MIN;
uint32_t x3420 = UINT32_MAX;
volatile uint8_t x3440 = 32U;
int64_t x3456 = -1137740928LL;
int16_t x3487 = -1;
int64_t x3503 = INT64_MAX;
int64_t x3504 = INT64_MIN;
int32_t t108 = -10973;
volatile int64_t x3578 = -1LL;
static volatile uint64_t x3579 = 239479509205LLU;
int8_t x3580 = INT8_MIN;
volatile int32_t t110 = -11;
int32_t x3595 = INT32_MIN;
volatile int32_t t112 = 16511;
volatile int32_t t114 = -443238084;
static int64_t x3744 = INT64_MAX;
volatile uint64_t t115 = 708849LLU;
int16_t x3787 = INT16_MIN;
uint16_t x3824 = UINT16_MAX;
int8_t x3826 = 5;
uint16_t x3909 = 13U;
int16_t x3944 = 5099;
static volatile int32_t t122 = -126;
uint8_t x4013 = 19U;
uint8_t x4014 = 0U;
volatile uint32_t x4029 = 0U;
static volatile uint32_t t125 = 978U;
uint8_t x4049 = 0U;
uint64_t x4080 = 755959467280LLU;
uint64_t x4082 = UINT64_MAX;
int32_t x4083 = -1;
uint8_t x4094 = 1U;
volatile int32_t x4156 = -1;
uint32_t t132 = 68U;
int64_t x4356 = 302LL;
static int32_t t134 = -53347;
volatile int16_t x4415 = INT16_MIN;
int8_t x4416 = -1;
int32_t t135 = 1477209;
int64_t x4545 = 2803662424653644958LL;
volatile uint32_t x4579 = 286470314U;
volatile int32_t t141 = 2522070;
static volatile uint16_t x4597 = UINT16_MAX;
int32_t x4640 = INT32_MIN;
int32_t x4645 = INT32_MAX;
int8_t x4655 = INT8_MIN;
int32_t t145 = 288;
int64_t x4753 = 3682LL;
int64_t x4755 = -1LL;
static int64_t x4756 = -3LL;
uint8_t x4805 = 72U;
int32_t t147 = -286241553;
static volatile uint8_t x4855 = 3U;
uint64_t x4869 = 4479683019457LLU;
int8_t x4870 = 1;
volatile int16_t x4872 = INT16_MAX;
volatile int32_t t152 = -3321;
volatile uint32_t x5138 = UINT32_MAX;
static volatile int16_t x5178 = 2;
int32_t t155 = 4538;
uint16_t x5203 = UINT16_MAX;
int64_t x5227 = -1LL;
volatile uint8_t x5258 = 3U;
static uint64_t x5260 = UINT64_MAX;
volatile int32_t t159 = -1929;
static uint64_t x5418 = UINT64_MAX;
int64_t x5559 = INT64_MIN;
static int32_t t166 = -1;
uint64_t x5638 = UINT64_MAX;
int32_t x5640 = 167073435;
int8_t x5670 = -1;
int16_t x5700 = INT16_MAX;
volatile int32_t t172 = -1;
volatile uint32_t x5729 = 850815U;
int16_t x5839 = -25;
uint64_t x5905 = UINT64_MAX;
volatile uint64_t x5910 = 6LLU;
int8_t x5911 = 0;
static uint8_t x5971 = 1U;
int16_t x6007 = INT16_MIN;
uint32_t x6008 = UINT32_MAX;
volatile int32_t t180 = -175326;
uint64_t t183 = 7313629LLU;
int64_t x6142 = 14LL;
uint32_t x6162 = UINT32_MAX;
static int8_t x6164 = -1;
uint32_t x6271 = 5036562U;
int32_t t188 = 90103068;
int16_t x6286 = 26;
volatile int64_t t190 = -178LL;
int8_t x6387 = INT8_MIN;
static volatile int16_t x6460 = INT16_MIN;
volatile int32_t t194 = -6674398;
int32_t t195 = 2035272;
uint8_t x6578 = 4U;
volatile uint8_t x6616 = UINT8_MAX;
volatile int64_t x6623 = -27713LL;


void f0(void) {
    	uint16_t x22 = 0U;
	static volatile int8_t x23 = 0;
	uint64_t x24 = 30821958376972155LLU;
	volatile uint64_t t0 = 7751512082LLU;

    t0 = (x21>>(x22+(x23<=x24)));

    if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x77 = 0;
	uint64_t x78 = UINT64_MAX;
	int8_t x79 = -22;
	static uint8_t x80 = 4U;
	int32_t t1 = -145431;

    t1 = (x77>>(x78+(x79<=x80)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x122 = 8;
	int16_t x124 = -1;
	volatile int32_t t2 = 31998261;

    t2 = (x121>>(x122+(x123<=x124)));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x157 = UINT16_MAX;
	int16_t x158 = 0;
	int32_t t3 = 90169;

    t3 = (x157>>(x158+(x159<=x160)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x231 = 4167105LLU;
	static volatile uint64_t x232 = 5877854651LLU;
	static volatile uint64_t t4 = UINT64_MAX;

    t4 = (x229>>(x230+(x231<=x232)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x233 = UINT8_MAX;
	static uint64_t x234 = UINT64_MAX;
	uint64_t x235 = 1020667LLU;
	static int16_t x236 = INT16_MIN;
	int32_t t5 = -9;

    t5 = (x233>>(x234+(x235<=x236)));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x301 = UINT64_MAX;
	uint16_t x303 = 4903U;
	volatile uint64_t x304 = 15614598LLU;
	uint64_t t6 = UINT64_MAX;

    t6 = (x301>>(x302+(x303<=x304)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x306 = 0U;
	int16_t x307 = -317;
	static int64_t x308 = -2006957613LL;
	static volatile int32_t t7 = INT32_MAX;

    t7 = (x305>>(x306+(x307<=x308)));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x441 = INT32_MAX;
	static uint32_t x442 = 8U;
	int64_t x443 = INT64_MIN;
	volatile int64_t x444 = INT64_MIN;
	int32_t t8 = -499534118;

    t8 = (x441>>(x442+(x443<=x444)));

    if (t8 != 4194303) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x450 = -1;
	static uint16_t x452 = 247U;
	static int32_t t9 = INT32_MAX;

    t9 = (x449>>(x450+(x451<=x452)));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x493 = 7548796822LLU;
	uint8_t x494 = 5U;
	static uint8_t x496 = 5U;

    t10 = (x493>>(x494+(x495<=x496)));

    if (t10 != 235899900LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x497 = UINT64_MAX;
	uint16_t x498 = 4U;
	int8_t x500 = -1;
	volatile uint64_t t11 = 85517246765538LLU;

    t11 = (x497>>(x498+(x499<=x500)));

    if (t11 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x533 = 2766LLU;
	uint8_t x534 = 11U;
	static int64_t x535 = INT64_MIN;
	int64_t x536 = 1111474553LL;
	volatile uint64_t t12 = 50327836108949765LLU;

    t12 = (x533>>(x534+(x535<=x536)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x586 = -1;
	static int8_t x587 = INT8_MIN;
	int32_t x588 = INT32_MAX;

    t13 = (x585>>(x586+(x587<=x588)));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x590 = 2U;
	uint64_t x591 = 7951LLU;
	uint32_t x592 = 8814U;
	volatile int32_t t14 = 1;

    t14 = (x589>>(x590+(x591<=x592)));

    if (t14 != 8191) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x597 = INT16_MAX;
	uint8_t x598 = 2U;
	uint16_t x599 = 1642U;
	int64_t x600 = -311LL;
	int32_t t15 = 1;

    t15 = (x597>>(x598+(x599<=x600)));

    if (t15 != 8191) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x605 = UINT8_MAX;
	volatile uint16_t x606 = 15U;
	int8_t x607 = INT8_MIN;
	int32_t x608 = INT32_MAX;

    t16 = (x605>>(x606+(x607<=x608)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x637 = 240703454768548LLU;
	uint8_t x638 = 3U;
	static uint8_t x639 = 0U;
	int8_t x640 = INT8_MIN;
	volatile uint64_t t17 = 705406593763232LLU;

    t17 = (x637>>(x638+(x639<=x640)));

    if (t17 != 30087931846068LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x685 = 31378261LL;
	int64_t x687 = -13463112LL;
	int32_t x688 = 23595901;
	int64_t t18 = -4175457552LL;

    t18 = (x685>>(x686+(x687<=x688)));

    if (t18 != 31378261LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x705 = INT8_MAX;
	uint64_t x707 = 1094050LLU;
	int64_t x708 = -1LL;
	int32_t t19 = 482229897;

    t19 = (x705>>(x706+(x707<=x708)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x713 = 15981U;
	int8_t x714 = 17;
	uint16_t x716 = UINT16_MAX;
	volatile uint32_t t20 = 2123U;

    t20 = (x713>>(x714+(x715<=x716)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x721 = 1LLU;
	uint64_t x722 = 3LLU;
	int64_t x723 = INT64_MAX;
	uint32_t x724 = 6234869U;
	volatile uint64_t t21 = 10918380LLU;

    t21 = (x721>>(x722+(x723<=x724)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x726 = 0;
	volatile int32_t x727 = 15461;
	volatile uint8_t x728 = UINT8_MAX;
	volatile int32_t t22 = -318200;

    t22 = (x725>>(x726+(x727<=x728)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x741 = 9U;
	int8_t x742 = 1;
	static volatile int64_t x743 = -215803423618408929LL;
	int16_t x744 = INT16_MIN;
	volatile uint32_t t23 = 114840U;

    t23 = (x741>>(x742+(x743<=x744)));

    if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	uint32_t x762 = UINT32_MAX;
	int16_t x763 = 551;
	uint32_t t24 = UINT32_MAX;

    t24 = (x761>>(x762+(x763<=x764)));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x785 = 58U;
	int64_t x786 = -1LL;
	int32_t x788 = INT32_MIN;
	volatile int32_t t25 = 226055;

    t25 = (x785>>(x786+(x787<=x788)));

    if (t25 != 58) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x837 = 1U;
	static uint16_t x838 = 10U;
	static uint32_t x839 = 85353262U;
	uint16_t x840 = 1961U;
	int32_t t26 = -1;

    t26 = (x837>>(x838+(x839<=x840)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x858 = -1;
	int16_t x859 = 2;

    t27 = (x857>>(x858+(x859<=x860)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x889 = UINT16_MAX;
	volatile uint8_t x890 = 4U;
	static int64_t x891 = INT64_MIN;
	volatile int32_t t28 = -467592;

    t28 = (x889>>(x890+(x891<=x892)));

    if (t28 != 2047) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x988 = 18;
	uint32_t t29 = 33912793U;

    t29 = (x985>>(x986+(x987<=x988)));

    if (t29 != 676U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x993 = 22U;
	int8_t x994 = 0;
	uint16_t x995 = 3038U;
	uint8_t x996 = UINT8_MAX;
	int32_t t30 = -21294;

    t30 = (x993>>(x994+(x995<=x996)));

    if (t30 != 22) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1009 = INT8_MAX;
	int16_t x1010 = -1;
	static volatile int64_t x1011 = INT64_MIN;
	static int32_t x1012 = INT32_MIN;
	int32_t t31 = 45;

    t31 = (x1009>>(x1010+(x1011<=x1012)));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1013 = 2573U;
	volatile int64_t x1015 = -29136427911937LL;
	volatile int32_t x1016 = INT32_MIN;
	int32_t t32 = -1943;

    t32 = (x1013>>(x1014+(x1015<=x1016)));

    if (t32 != 40) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1029 = 160615635LL;
	uint32_t x1030 = UINT32_MAX;
	uint64_t x1031 = 1LLU;
	int64_t x1032 = -100853425922LL;

    t33 = (x1029>>(x1030+(x1031<=x1032)));

    if (t33 != 160615635LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1037 = 17U;
	uint8_t x1038 = 0U;
	volatile int16_t x1039 = INT16_MIN;
	int8_t x1040 = -6;

    t34 = (x1037>>(x1038+(x1039<=x1040)));

    if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1081 = INT8_MAX;
	uint32_t x1082 = UINT32_MAX;
	static int64_t x1083 = INT64_MIN;
	uint32_t x1084 = 8U;
	static int32_t t35 = 128310;

    t35 = (x1081>>(x1082+(x1083<=x1084)));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1125 = UINT16_MAX;
	static uint16_t x1126 = 0U;
	uint32_t x1127 = UINT32_MAX;
	volatile uint64_t x1128 = 195813170039LLU;
	volatile int32_t t36 = 5285890;

    t36 = (x1125>>(x1126+(x1127<=x1128)));

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x1141 = 209314049338LLU;
	uint64_t x1143 = 4335429LLU;
	volatile int64_t x1144 = INT64_MIN;
	static volatile uint64_t t37 = 419389512LLU;

    t37 = (x1141>>(x1142+(x1143<=x1144)));

    if (t37 != 26164256167LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x1153 = 0U;
	static uint64_t x1154 = UINT64_MAX;
	int16_t x1156 = INT16_MAX;

    t38 = (x1153>>(x1154+(x1155<=x1156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1273 = INT64_MAX;
	int16_t x1274 = 1;
	static int8_t x1275 = INT8_MIN;

    t39 = (x1273>>(x1274+(x1275<=x1276)));

    if (t39 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x1341 = 407;
	volatile int16_t x1342 = 11;
	uint64_t x1343 = 33881235715LLU;
	volatile int32_t t40 = 1412526;

    t40 = (x1341>>(x1342+(x1343<=x1344)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1357 = INT8_MAX;
	uint16_t x1359 = 1014U;
	uint32_t x1360 = UINT32_MAX;
	int32_t t41 = 13699783;

    t41 = (x1357>>(x1358+(x1359<=x1360)));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1366 = -1;
	int64_t x1367 = INT64_MIN;
	uint8_t x1368 = UINT8_MAX;
	int32_t t42 = -915506;

    t42 = (x1365>>(x1366+(x1367<=x1368)));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x1381 = 1190LL;
	int8_t x1382 = 0;
	static int8_t x1383 = -1;
	int8_t x1384 = INT8_MAX;

    t43 = (x1381>>(x1382+(x1383<=x1384)));

    if (t43 != 595LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x1393 = 1U;
	uint16_t x1394 = 0U;
	volatile int16_t x1395 = INT16_MIN;
	static volatile uint8_t x1396 = UINT8_MAX;

    t44 = (x1393>>(x1394+(x1395<=x1396)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1406 = 1;
	static int8_t x1407 = INT8_MIN;
	int16_t x1408 = INT16_MIN;

    t45 = (x1405>>(x1406+(x1407<=x1408)));

    if (t45 != 8949012172003LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x1421 = 25268U;
	uint64_t x1422 = UINT64_MAX;
	uint32_t x1423 = 307U;
	uint16_t x1424 = UINT16_MAX;
	volatile int32_t t46 = 88;

    t46 = (x1421>>(x1422+(x1423<=x1424)));

    if (t46 != 25268) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x1429 = 0U;
	int16_t x1430 = -1;
	int32_t x1431 = -1;
	int64_t x1432 = INT64_MAX;

    t47 = (x1429>>(x1430+(x1431<=x1432)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1445 = 2268;
	int32_t x1447 = INT32_MIN;
	int64_t x1448 = 2795339282609LL;
	volatile int32_t t48 = -3738;

    t48 = (x1445>>(x1446+(x1447<=x1448)));

    if (t48 != 2268) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x1449 = 109U;
	volatile int16_t x1450 = -1;
	volatile uint16_t x1452 = 10U;
	volatile int32_t t49 = -97700267;

    t49 = (x1449>>(x1450+(x1451<=x1452)));

    if (t49 != 109) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1465 = UINT16_MAX;
	uint8_t x1466 = 29U;
	int64_t x1467 = INT64_MAX;
	int32_t x1468 = INT32_MAX;
	volatile int32_t t50 = -3695;

    t50 = (x1465>>(x1466+(x1467<=x1468)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1489 = INT16_MAX;
	int8_t x1492 = INT8_MAX;
	volatile int32_t t51 = -1;

    t51 = (x1489>>(x1490+(x1491<=x1492)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x1514 = 27U;
	int16_t x1515 = -1;
	uint64_t x1516 = 10353593221880LLU;
	volatile uint32_t t52 = 18U;

    t52 = (x1513>>(x1514+(x1515<=x1516)));

    if (t52 != 31U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x1517 = INT32_MAX;
	uint32_t x1518 = 1U;
	uint64_t x1519 = 6425130321252912LLU;
	int32_t x1520 = -73;
	int32_t t53 = 7292;

    t53 = (x1517>>(x1518+(x1519<=x1520)));

    if (t53 != 536870911) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x1529 = UINT32_MAX;
	int32_t x1530 = -1;
	volatile int64_t x1531 = -1LL;
	int32_t x1532 = INT32_MAX;
	volatile uint32_t t54 = UINT32_MAX;

    t54 = (x1529>>(x1530+(x1531<=x1532)));

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x1557 = UINT32_MAX;
	static uint32_t x1558 = UINT32_MAX;
	static volatile int64_t x1560 = INT64_MIN;

    t55 = (x1557>>(x1558+(x1559<=x1560)));

    if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x1593 = 6184774372733083LLU;
	static int32_t x1594 = 0;
	uint64_t x1595 = 4281334LLU;
	static volatile uint32_t x1596 = 53846U;

    t56 = (x1593>>(x1594+(x1595<=x1596)));

    if (t56 != 6184774372733083LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x1625 = INT32_MAX;
	int16_t x1626 = 2;
	uint64_t x1627 = 23245071046271LLU;
	int32_t x1628 = -1;

    t57 = (x1625>>(x1626+(x1627<=x1628)));

    if (t57 != 268435455) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x1645 = 8654026539067028LLU;
	int8_t x1646 = -1;
	int16_t x1647 = INT16_MIN;
	volatile int16_t x1648 = INT16_MAX;
	uint64_t t58 = 1236774LLU;

    t58 = (x1645>>(x1646+(x1647<=x1648)));

    if (t58 != 8654026539067028LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1653 = INT16_MAX;
	int16_t x1655 = -1;
	volatile uint64_t x1656 = UINT64_MAX;
	int32_t t59 = 2;

    t59 = (x1653>>(x1654+(x1655<=x1656)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x1693 = 5343U;
	uint16_t x1694 = 2U;
	static int32_t x1696 = -1;
	static volatile uint32_t t60 = 4216912U;

    t60 = (x1693>>(x1694+(x1695<=x1696)));

    if (t60 != 1335U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x1741 = 989474932LL;
	int16_t x1742 = 40;
	volatile int64_t x1744 = INT64_MIN;
	volatile int64_t t61 = 13800474831LL;

    t61 = (x1741>>(x1742+(x1743<=x1744)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x1793 = UINT64_MAX;
	static int8_t x1794 = 6;
	volatile int32_t x1796 = -1;

    t62 = (x1793>>(x1794+(x1795<=x1796)));

    if (t62 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x1797 = INT64_MAX;
	static volatile int32_t x1798 = -1;
	int16_t x1799 = -1;
	uint16_t x1800 = UINT16_MAX;
	static volatile int64_t t63 = INT64_MAX;

    t63 = (x1797>>(x1798+(x1799<=x1800)));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x1865 = 7313082;
	int64_t x1866 = -1LL;
	static uint8_t x1867 = UINT8_MAX;
	volatile int32_t t64 = -1078996;

    t64 = (x1865>>(x1866+(x1867<=x1868)));

    if (t64 != 7313082) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x1889 = 80;
	int16_t x1890 = 0;
	int16_t x1891 = -1;
	volatile uint32_t x1892 = 440274U;
	static volatile int32_t t65 = 263014992;

    t65 = (x1889>>(x1890+(x1891<=x1892)));

    if (t65 != 80) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x1921 = 0LL;
	uint8_t x1922 = 1U;
	volatile uint32_t x1923 = 166U;
	int64_t x1924 = -14942409LL;
	static int64_t t66 = 44LL;

    t66 = (x1921>>(x1922+(x1923<=x1924)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x1949 = UINT64_MAX;
	volatile uint64_t x1951 = 3088982203769971LLU;
	volatile int64_t x1952 = 92LL;

    t67 = (x1949>>(x1950+(x1951<=x1952)));

    if (t67 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x1953 = 3956;
	uint16_t x1954 = 1U;
	int8_t x1956 = 0;
	volatile int32_t t68 = 119;

    t68 = (x1953>>(x1954+(x1955<=x1956)));

    if (t68 != 989) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x1966 = -1LL;
	static uint16_t x1967 = 3U;
	uint32_t x1968 = UINT32_MAX;
	static int32_t t69 = -3165256;

    t69 = (x1965>>(x1966+(x1967<=x1968)));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2001 = 10459580LLU;
	uint8_t x2002 = 42U;
	volatile uint8_t x2003 = 5U;
	int32_t x2004 = INT32_MAX;
	static volatile uint64_t t70 = 3439071786LLU;

    t70 = (x2001>>(x2002+(x2003<=x2004)));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x2101 = 10U;
	int8_t x2103 = -1;
	volatile uint16_t x2104 = UINT16_MAX;
	int32_t t71 = -1748;

    t71 = (x2101>>(x2102+(x2103<=x2104)));

    if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2126 = 2;
	int32_t x2127 = -1;
	int32_t t72 = 4;

    t72 = (x2125>>(x2126+(x2127<=x2128)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x2169 = 1LL;
	uint8_t x2170 = 26U;
	volatile int64_t x2171 = INT64_MIN;
	volatile int16_t x2172 = -42;
	int64_t t73 = 17LL;

    t73 = (x2169>>(x2170+(x2171<=x2172)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x2221 = UINT8_MAX;
	uint8_t x2222 = 1U;
	static int8_t x2224 = -1;
	int32_t t74 = -1760127;

    t74 = (x2221>>(x2222+(x2223<=x2224)));

    if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x2297 = 1U;
	static uint64_t x2298 = UINT64_MAX;
	int16_t x2299 = -473;
	static int32_t x2300 = 1494;
	volatile int32_t t75 = -5;

    t75 = (x2297>>(x2298+(x2299<=x2300)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x2346 = 7U;
	int8_t x2347 = -1;
	int16_t x2348 = -1;

    t76 = (x2345>>(x2346+(x2347<=x2348)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2350 = 31;
	int64_t x2351 = -8203LL;
	uint32_t x2352 = 626169U;
	static volatile uint64_t t77 = 2163LLU;

    t77 = (x2349>>(x2350+(x2351<=x2352)));

    if (t77 != 189LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x2525 = UINT64_MAX;
	int16_t x2526 = -1;
	volatile int64_t x2527 = INT64_MIN;
	uint64_t x2528 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

    t78 = (x2525>>(x2526+(x2527<=x2528)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2533 = UINT8_MAX;
	int8_t x2534 = 1;
	int16_t x2535 = 2644;
	int16_t x2536 = -1;
	int32_t t79 = 240473711;

    t79 = (x2533>>(x2534+(x2535<=x2536)));

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x2541 = 1;
	uint8_t x2542 = 5U;
	uint8_t x2543 = 36U;
	uint64_t x2544 = UINT64_MAX;
	int32_t t80 = -5908;

    t80 = (x2541>>(x2542+(x2543<=x2544)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2605 = INT32_MAX;
	int32_t x2606 = -1;

    t81 = (x2605>>(x2606+(x2607<=x2608)));

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x2613 = UINT8_MAX;
	int16_t x2614 = 0;
	uint32_t x2616 = UINT32_MAX;
	int32_t t82 = 5348398;

    t82 = (x2613>>(x2614+(x2615<=x2616)));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x2645 = 0U;
	static uint8_t x2646 = 0U;
	int32_t x2647 = INT32_MAX;
	volatile int32_t t83 = -204958287;

    t83 = (x2645>>(x2646+(x2647<=x2648)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2693 = INT8_MAX;
	uint8_t x2694 = 5U;
	int64_t x2695 = INT64_MIN;
	int32_t x2696 = INT32_MIN;
	int32_t t84 = -61;

    t84 = (x2693>>(x2694+(x2695<=x2696)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x2709 = INT32_MAX;
	uint64_t x2710 = 1LLU;
	uint8_t x2712 = 3U;
	static volatile int32_t t85 = -121645834;

    t85 = (x2709>>(x2710+(x2711<=x2712)));

    if (t85 != 536870911) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2745 = INT8_MAX;
	uint8_t x2746 = 1U;
	int8_t x2748 = INT8_MIN;
	volatile int32_t t86 = 0;

    t86 = (x2745>>(x2746+(x2747<=x2748)));

    if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x2805 = INT32_MAX;
	int32_t x2807 = INT32_MIN;
	int32_t x2808 = INT32_MAX;
	volatile int32_t t87 = INT32_MAX;

    t87 = (x2805>>(x2806+(x2807<=x2808)));

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x2829 = INT64_MAX;
	uint8_t x2832 = UINT8_MAX;
	volatile int64_t t88 = -469937LL;

    t88 = (x2829>>(x2830+(x2831<=x2832)));

    if (t88 != 281474976710655LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x2881 = 4U;
	int8_t x2882 = 13;
	uint8_t x2884 = 14U;
	int32_t t89 = -115;

    t89 = (x2881>>(x2882+(x2883<=x2884)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x2889 = UINT8_MAX;
	int8_t x2890 = -1;
	uint64_t x2891 = 1LLU;

    t90 = (x2889>>(x2890+(x2891<=x2892)));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x2913 = 15;
	uint32_t x2914 = 1U;
	uint16_t x2915 = 1U;
	volatile uint16_t x2916 = 7732U;
	int32_t t91 = -287069556;

    t91 = (x2913>>(x2914+(x2915<=x2916)));

    if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x3009 = 2007LLU;
	volatile uint8_t x3010 = 10U;
	uint64_t x3012 = 10LLU;
	uint64_t t92 = 731LLU;

    t92 = (x3009>>(x3010+(x3011<=x3012)));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x3017 = UINT64_MAX;
	static uint8_t x3018 = 10U;
	static int32_t x3019 = 172966;
	static int8_t x3020 = INT8_MAX;
	volatile uint64_t t93 = 69849817915090468LLU;

    t93 = (x3017>>(x3018+(x3019<=x3020)));

    if (t93 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x3153 = 47840749483296LL;
	uint32_t x3154 = UINT32_MAX;
	uint32_t x3155 = UINT32_MAX;
	uint64_t x3156 = 996625136203181LLU;
	volatile int64_t t94 = -4243471254154738LL;

    t94 = (x3153>>(x3154+(x3155<=x3156)));

    if (t94 != 47840749483296LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x3185 = 521094U;
	int16_t x3187 = INT16_MAX;
	uint64_t x3188 = 293929560317927208LLU;
	volatile uint32_t t95 = 51172U;

    t95 = (x3185>>(x3186+(x3187<=x3188)));

    if (t95 != 521094U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x3193 = 2245;
	int16_t x3194 = 18;
	volatile uint64_t x3195 = 1694008LLU;
	int32_t x3196 = 1173717;

    t96 = (x3193>>(x3194+(x3195<=x3196)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x3285 = 995;
	volatile uint32_t x3286 = 5U;
	uint32_t x3288 = 10634U;

    t97 = (x3285>>(x3286+(x3287<=x3288)));

    if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x3301 = 280449U;
	volatile int64_t x3302 = 0LL;
	int64_t x3303 = -1LL;
	volatile uint32_t t98 = 1834U;

    t98 = (x3301>>(x3302+(x3303<=x3304)));

    if (t98 != 140224U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x3305 = 6976U;
	int8_t x3307 = 1;
	uint64_t x3308 = 62225471LLU;
	int32_t t99 = 4023;

    t99 = (x3305>>(x3306+(x3307<=x3308)));

    if (t99 != 3488) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x3349 = 7U;
	int8_t x3350 = -1;
	static uint16_t x3352 = 26360U;

    t100 = (x3349>>(x3350+(x3351<=x3352)));

    if (t100 != 7U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x3361 = UINT8_MAX;
	int16_t x3362 = 0;
	static int8_t x3363 = INT8_MIN;
	int32_t t101 = 4;

    t101 = (x3361>>(x3362+(x3363<=x3364)));

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x3385 = INT8_MAX;
	uint8_t x3386 = 3U;
	volatile int8_t x3388 = INT8_MIN;
	static volatile int32_t t102 = -1330427;

    t102 = (x3385>>(x3386+(x3387<=x3388)));

    if (t102 != 7) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x3417 = 2477311U;
	int32_t x3418 = -1;
	static uint16_t x3419 = 12U;
	volatile uint32_t t103 = 2815U;

    t103 = (x3417>>(x3418+(x3419<=x3420)));

    if (t103 != 2477311U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x3437 = 36893LLU;
	volatile int64_t x3438 = -1LL;
	int32_t x3439 = 1;
	volatile uint64_t t104 = 910081335LLU;

    t104 = (x3437>>(x3438+(x3439<=x3440)));

    if (t104 != 36893LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x3453 = UINT64_MAX;
	uint8_t x3454 = 0U;
	int16_t x3455 = INT16_MAX;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (x3453>>(x3454+(x3455<=x3456)));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x3485 = UINT64_MAX;
	uint8_t x3486 = 1U;
	static int16_t x3488 = -1;
	uint64_t t106 = 51411171LLU;

    t106 = (x3485>>(x3486+(x3487<=x3488)));

    if (t106 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x3497 = INT64_MAX;
	uint16_t x3498 = 1U;
	uint16_t x3499 = UINT16_MAX;
	volatile int64_t x3500 = -132647167LL;
	static int64_t t107 = -50851727695LL;

    t107 = (x3497>>(x3498+(x3499<=x3500)));

    if (t107 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x3501 = 6U;
	uint16_t x3502 = 2U;

    t108 = (x3501>>(x3502+(x3503<=x3504)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x3557 = 4U;
	uint8_t x3558 = 2U;
	int64_t x3559 = INT64_MIN;
	volatile int8_t x3560 = INT8_MIN;
	uint32_t t109 = 48U;

    t109 = (x3557>>(x3558+(x3559<=x3560)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x3577 = 299303412;

    t110 = (x3577>>(x3578+(x3579<=x3580)));

    if (t110 != 299303412) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x3593 = 285LL;
	static uint8_t x3594 = 6U;
	volatile uint32_t x3596 = 231283354U;
	int64_t t111 = -18532191LL;

    t111 = (x3593>>(x3594+(x3595<=x3596)));

    if (t111 != 4LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x3613 = 5U;
	uint8_t x3614 = 0U;
	int64_t x3615 = INT64_MIN;
	int64_t x3616 = 269015LL;

    t112 = (x3613>>(x3614+(x3615<=x3616)));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3649 = 2692;
	uint16_t x3650 = 1U;
	uint32_t x3651 = 484379U;
	int8_t x3652 = INT8_MAX;
	volatile int32_t t113 = -223561494;

    t113 = (x3649>>(x3650+(x3651<=x3652)));

    if (t113 != 1346) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3685 = 0U;
	uint32_t x3686 = UINT32_MAX;
	volatile int32_t x3687 = INT32_MIN;
	volatile int32_t x3688 = -500;

    t114 = (x3685>>(x3686+(x3687<=x3688)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x3741 = 30885496585271132LLU;
	volatile int8_t x3742 = -1;
	int32_t x3743 = INT32_MAX;

    t115 = (x3741>>(x3742+(x3743<=x3744)));

    if (t115 != 30885496585271132LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x3785 = INT32_MAX;
	uint16_t x3786 = 0U;
	static int8_t x3788 = -1;
	volatile int32_t t116 = -155172273;

    t116 = (x3785>>(x3786+(x3787<=x3788)));

    if (t116 != 1073741823) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x3821 = UINT64_MAX;
	int8_t x3822 = -1;
	static volatile int16_t x3823 = -1;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = (x3821>>(x3822+(x3823<=x3824)));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x3825 = UINT8_MAX;
	volatile uint16_t x3827 = 13211U;
	uint8_t x3828 = 0U;
	int32_t t118 = -192255617;

    t118 = (x3825>>(x3826+(x3827<=x3828)));

    if (t118 != 7) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x3877 = 136722990845LL;
	uint32_t x3878 = UINT32_MAX;
	uint64_t x3879 = UINT64_MAX;
	int16_t x3880 = -1;
	volatile int64_t t119 = 2844621626LL;

    t119 = (x3877>>(x3878+(x3879<=x3880)));

    if (t119 != 136722990845LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x3881 = UINT8_MAX;
	volatile int16_t x3882 = -1;
	volatile int8_t x3883 = INT8_MIN;
	volatile uint16_t x3884 = 3465U;
	int32_t t120 = 0;

    t120 = (x3881>>(x3882+(x3883<=x3884)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x3910 = -1;
	int32_t x3911 = INT32_MIN;
	static int64_t x3912 = -412183LL;
	static int32_t t121 = -18964957;

    t121 = (x3909>>(x3910+(x3911<=x3912)));

    if (t121 != 13) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x3941 = 14505;
	volatile int8_t x3942 = 4;
	int8_t x3943 = INT8_MIN;

    t122 = (x3941>>(x3942+(x3943<=x3944)));

    if (t122 != 453) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x3997 = 75255379251114LLU;
	uint32_t x3998 = UINT32_MAX;
	static int16_t x3999 = INT16_MIN;
	int16_t x4000 = 957;
	uint64_t t123 = 882575838001659386LLU;

    t123 = (x3997>>(x3998+(x3999<=x4000)));

    if (t123 != 75255379251114LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x4015 = UINT64_MAX;
	int32_t x4016 = -15208645;
	volatile int32_t t124 = -228517;

    t124 = (x4013>>(x4014+(x4015<=x4016)));

    if (t124 != 19) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x4030 = UINT32_MAX;
	static uint8_t x4031 = 3U;
	volatile int64_t x4032 = INT64_MAX;

    t125 = (x4029>>(x4030+(x4031<=x4032)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x4050 = 6U;
	volatile uint64_t x4051 = 7242795LLU;
	volatile int32_t x4052 = -1;
	static int32_t t126 = -14;

    t126 = (x4049>>(x4050+(x4051<=x4052)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x4077 = 0;
	int8_t x4078 = -1;
	int8_t x4079 = 3;
	int32_t t127 = -12;

    t127 = (x4077>>(x4078+(x4079<=x4080)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x4081 = 24U;
	static volatile uint16_t x4084 = 21U;
	static volatile int32_t t128 = 58973;

    t128 = (x4081>>(x4082+(x4083<=x4084)));

    if (t128 != 24) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x4093 = INT16_MAX;
	int32_t x4095 = INT32_MAX;
	volatile uint32_t x4096 = 248254U;
	volatile int32_t t129 = 1946322;

    t129 = (x4093>>(x4094+(x4095<=x4096)));

    if (t129 != 16383) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x4153 = UINT8_MAX;
	int64_t x4154 = -1LL;
	volatile int32_t x4155 = -1;
	int32_t t130 = 1599;

    t130 = (x4153>>(x4154+(x4155<=x4156)));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x4185 = UINT32_MAX;
	int8_t x4186 = -1;
	int32_t x4187 = -1;
	volatile int16_t x4188 = 17;
	uint32_t t131 = UINT32_MAX;

    t131 = (x4185>>(x4186+(x4187<=x4188)));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x4217 = 8069U;
	int16_t x4218 = -1;
	int64_t x4219 = INT64_MIN;
	int16_t x4220 = -135;

    t132 = (x4217>>(x4218+(x4219<=x4220)));

    if (t132 != 8069U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x4353 = 6630U;
	int16_t x4354 = -1;
	uint8_t x4355 = 5U;
	int32_t t133 = -218;

    t133 = (x4353>>(x4354+(x4355<=x4356)));

    if (t133 != 6630) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x4369 = 1U;
	static volatile int64_t x4370 = -1LL;
	int16_t x4371 = -1;
	volatile int16_t x4372 = INT16_MAX;

    t134 = (x4369>>(x4370+(x4371<=x4372)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x4413 = UINT16_MAX;
	int8_t x4414 = -1;

    t135 = (x4413>>(x4414+(x4415<=x4416)));

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4433 = 30237942650LL;
	int8_t x4434 = 2;
	volatile int32_t x4435 = -1;
	int64_t x4436 = -1LL;
	int64_t t136 = 12043LL;

    t136 = (x4433>>(x4434+(x4435<=x4436)));

    if (t136 != 3779742831LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x4493 = 11U;
	int16_t x4494 = -1;
	static uint32_t x4495 = 5U;
	int8_t x4496 = INT8_MAX;
	volatile uint32_t t137 = 2U;

    t137 = (x4493>>(x4494+(x4495<=x4496)));

    if (t137 != 11U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4529 = 0;
	int16_t x4530 = -1;
	static volatile uint32_t x4531 = 2U;
	volatile uint16_t x4532 = 144U;
	int32_t t138 = -82;

    t138 = (x4529>>(x4530+(x4531<=x4532)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x4537 = INT32_MAX;
	static uint32_t x4538 = UINT32_MAX;
	int8_t x4539 = -1;
	static int64_t x4540 = 819151438110LL;
	volatile int32_t t139 = INT32_MAX;

    t139 = (x4537>>(x4538+(x4539<=x4540)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4546 = -1;
	uint64_t x4547 = 367683573283LLU;
	static int8_t x4548 = -2;
	int64_t t140 = -4931LL;

    t140 = (x4545>>(x4546+(x4547<=x4548)));

    if (t140 != 2803662424653644958LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x4577 = INT16_MAX;
	uint8_t x4578 = 29U;
	volatile uint8_t x4580 = 0U;

    t141 = (x4577>>(x4578+(x4579<=x4580)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x4598 = 2;
	static volatile int32_t x4599 = INT32_MIN;
	uint8_t x4600 = UINT8_MAX;
	volatile int32_t t142 = -239167;

    t142 = (x4597>>(x4598+(x4599<=x4600)));

    if (t142 != 8191) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x4637 = INT32_MAX;
	int8_t x4638 = 1;
	uint64_t x4639 = UINT64_MAX;
	static int32_t t143 = -5;

    t143 = (x4637>>(x4638+(x4639<=x4640)));

    if (t143 != 1073741823) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x4646 = 0U;
	volatile uint32_t x4647 = 465652U;
	uint16_t x4648 = 11U;
	static int32_t t144 = INT32_MAX;

    t144 = (x4645>>(x4646+(x4647<=x4648)));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x4653 = 0U;
	int8_t x4654 = -1;
	int64_t x4656 = 35423969LL;

    t145 = (x4653>>(x4654+(x4655<=x4656)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x4754 = 1U;
	volatile int64_t t146 = -672LL;

    t146 = (x4753>>(x4754+(x4755<=x4756)));

    if (t146 != 1841LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x4806 = 28U;
	int32_t x4807 = -41;
	uint8_t x4808 = 0U;

    t147 = (x4805>>(x4806+(x4807<=x4808)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x4837 = 7U;
	uint32_t x4838 = UINT32_MAX;
	static uint64_t x4839 = 430LLU;
	volatile int16_t x4840 = INT16_MIN;
	int32_t t148 = 1;

    t148 = (x4837>>(x4838+(x4839<=x4840)));

    if (t148 != 7) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x4853 = 2LL;
	uint8_t x4854 = 29U;
	static int32_t x4856 = INT32_MIN;
	volatile int64_t t149 = -6029523797316241LL;

    t149 = (x4853>>(x4854+(x4855<=x4856)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x4857 = 1944U;
	int32_t x4858 = 1;
	int8_t x4859 = INT8_MIN;
	volatile int64_t x4860 = -127952408731118888LL;
	uint32_t t150 = 2U;

    t150 = (x4857>>(x4858+(x4859<=x4860)));

    if (t150 != 972U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x4871 = INT32_MIN;
	uint64_t t151 = 501789531228LLU;

    t151 = (x4869>>(x4870+(x4871<=x4872)));

    if (t151 != 1119920754864LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x4985 = INT8_MAX;
	static uint64_t x4986 = UINT64_MAX;
	uint8_t x4987 = 1U;
	static uint16_t x4988 = 183U;

    t152 = (x4985>>(x4986+(x4987<=x4988)));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x5137 = UINT8_MAX;
	static int8_t x5139 = -15;
	uint8_t x5140 = 63U;
	volatile int32_t t153 = -2495202;

    t153 = (x5137>>(x5138+(x5139<=x5140)));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x5161 = 102U;
	uint8_t x5162 = 7U;
	volatile int32_t x5163 = INT32_MIN;
	static int8_t x5164 = -7;
	int32_t t154 = 43254;

    t154 = (x5161>>(x5162+(x5163<=x5164)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x5177 = 5U;
	int8_t x5179 = INT8_MAX;
	uint64_t x5180 = 1463LLU;

    t155 = (x5177>>(x5178+(x5179<=x5180)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x5201 = INT8_MAX;
	uint32_t x5202 = UINT32_MAX;
	uint32_t x5204 = 485270U;
	volatile int32_t t156 = -13273;

    t156 = (x5201>>(x5202+(x5203<=x5204)));

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x5225 = INT8_MAX;
	volatile uint32_t x5226 = 10U;
	uint64_t x5228 = 2LLU;
	volatile int32_t t157 = 97;

    t157 = (x5225>>(x5226+(x5227<=x5228)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x5253 = 2LLU;
	static uint8_t x5254 = 3U;
	int8_t x5255 = 0;
	int32_t x5256 = INT32_MIN;
	uint64_t t158 = 60599168444674LLU;

    t158 = (x5253>>(x5254+(x5255<=x5256)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x5257 = INT16_MAX;
	int64_t x5259 = -1120650686709472446LL;

    t159 = (x5257>>(x5258+(x5259<=x5260)));

    if (t159 != 2047) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x5301 = UINT16_MAX;
	uint32_t x5302 = UINT32_MAX;
	uint16_t x5303 = 113U;
	volatile int16_t x5304 = 5814;
	static int32_t t160 = -66001989;

    t160 = (x5301>>(x5302+(x5303<=x5304)));

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x5369 = 327U;
	volatile int8_t x5370 = 10;
	int32_t x5371 = -1;
	int8_t x5372 = INT8_MIN;
	volatile uint32_t t161 = 3U;

    t161 = (x5369>>(x5370+(x5371<=x5372)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x5417 = 3558084U;
	int8_t x5419 = -1;
	int16_t x5420 = 0;
	volatile uint32_t t162 = 31350207U;

    t162 = (x5417>>(x5418+(x5419<=x5420)));

    if (t162 != 3558084U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x5489 = 71776322170LL;
	static uint16_t x5490 = 15U;
	uint32_t x5491 = UINT32_MAX;
	volatile int8_t x5492 = -1;
	int64_t t163 = 61516643467LL;

    t163 = (x5489>>(x5490+(x5491<=x5492)));

    if (t163 != 1095219LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x5513 = INT16_MAX;
	volatile int32_t x5514 = 4;
	static int64_t x5515 = INT64_MAX;
	int64_t x5516 = -1LL;
	static volatile int32_t t164 = 317783066;

    t164 = (x5513>>(x5514+(x5515<=x5516)));

    if (t164 != 2047) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x5557 = 10U;
	int8_t x5558 = -1;
	int8_t x5560 = INT8_MIN;
	uint32_t t165 = 2584350U;

    t165 = (x5557>>(x5558+(x5559<=x5560)));

    if (t165 != 10U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x5581 = INT8_MAX;
	int8_t x5582 = -1;
	static volatile uint8_t x5583 = 82U;
	static uint64_t x5584 = 25752480129LLU;

    t166 = (x5581>>(x5582+(x5583<=x5584)));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x5613 = INT8_MAX;
	uint16_t x5614 = 2U;
	int16_t x5615 = INT16_MIN;
	static uint16_t x5616 = UINT16_MAX;
	static volatile int32_t t167 = 483471;

    t167 = (x5613>>(x5614+(x5615<=x5616)));

    if (t167 != 15) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x5621 = 33419U;
	volatile int16_t x5622 = -1;
	static uint64_t x5623 = 28308535184379LLU;
	volatile int64_t x5624 = INT64_MAX;
	volatile uint32_t t168 = 117U;

    t168 = (x5621>>(x5622+(x5623<=x5624)));

    if (t168 != 33419U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x5637 = UINT16_MAX;
	int8_t x5639 = INT8_MAX;
	int32_t t169 = -6362;

    t169 = (x5637>>(x5638+(x5639<=x5640)));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x5669 = 2U;
	uint64_t x5671 = 98346937729762831LLU;
	int64_t x5672 = INT64_MAX;
	volatile int32_t t170 = -359754936;

    t170 = (x5669>>(x5670+(x5671<=x5672)));

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x5685 = INT32_MAX;
	int8_t x5686 = 0;
	static int64_t x5687 = -12033632LL;
	int8_t x5688 = INT8_MIN;
	int32_t t171 = -7135;

    t171 = (x5685>>(x5686+(x5687<=x5688)));

    if (t171 != 1073741823) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x5697 = UINT16_MAX;
	volatile int8_t x5698 = -1;
	int64_t x5699 = -1LL;

    t172 = (x5697>>(x5698+(x5699<=x5700)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x5730 = -1;
	int32_t x5731 = INT32_MIN;
	int8_t x5732 = 1;
	volatile uint32_t t173 = 2U;

    t173 = (x5729>>(x5730+(x5731<=x5732)));

    if (t173 != 850815U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x5793 = 48;
	int32_t x5794 = 21;
	int32_t x5795 = INT32_MIN;
	volatile int16_t x5796 = INT16_MIN;
	int32_t t174 = -2;

    t174 = (x5793>>(x5794+(x5795<=x5796)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x5837 = 17011597826336LLU;
	int8_t x5838 = -1;
	int16_t x5840 = -1;
	uint64_t t175 = 17LLU;

    t175 = (x5837>>(x5838+(x5839<=x5840)));

    if (t175 != 17011597826336LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x5906 = UINT64_MAX;
	volatile int8_t x5907 = INT8_MIN;
	int8_t x5908 = 10;
	static volatile uint64_t t176 = UINT64_MAX;

    t176 = (x5905>>(x5906+(x5907<=x5908)));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x5909 = 78313605113463373LL;
	volatile uint64_t x5912 = UINT64_MAX;
	int64_t t177 = 2612116291360992935LL;

    t177 = (x5909>>(x5910+(x5911<=x5912)));

    if (t177 != 611825039948932LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x5965 = 35LLU;
	volatile int32_t x5966 = 31;
	volatile int8_t x5967 = -59;
	int32_t x5968 = -1;
	volatile uint64_t t178 = 96739370LLU;

    t178 = (x5965>>(x5966+(x5967<=x5968)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x5969 = 2561827140LLU;
	volatile int8_t x5970 = -1;
	volatile uint16_t x5972 = 417U;
	uint64_t t179 = 6930LLU;

    t179 = (x5969>>(x5970+(x5971<=x5972)));

    if (t179 != 2561827140LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x6005 = UINT16_MAX;
	uint16_t x6006 = 0U;

    t180 = (x6005>>(x6006+(x6007<=x6008)));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x6049 = 0;
	volatile int32_t x6050 = -1;
	int16_t x6051 = -1;
	volatile int8_t x6052 = -1;
	int32_t t181 = 589610;

    t181 = (x6049>>(x6050+(x6051<=x6052)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x6085 = 4587LLU;
	static int32_t x6086 = 42;
	int8_t x6087 = -6;
	static uint16_t x6088 = 15798U;
	uint64_t t182 = 123283729774246236LLU;

    t182 = (x6085>>(x6086+(x6087<=x6088)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x6133 = UINT64_MAX;
	int32_t x6134 = 0;
	uint32_t x6135 = 1726U;
	int32_t x6136 = -392;

    t183 = (x6133>>(x6134+(x6135<=x6136)));

    if (t183 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x6141 = 3U;
	int16_t x6143 = INT16_MAX;
	static int16_t x6144 = -38;
	static volatile int32_t t184 = -694697025;

    t184 = (x6141>>(x6142+(x6143<=x6144)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x6161 = 0U;
	uint32_t x6163 = 20U;
	int32_t t185 = -407;

    t185 = (x6161>>(x6162+(x6163<=x6164)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x6241 = 1472872LL;
	volatile int8_t x6242 = 1;
	int64_t x6243 = INT64_MIN;
	int8_t x6244 = -1;
	static int64_t t186 = 17201952385804LL;

    t186 = (x6241>>(x6242+(x6243<=x6244)));

    if (t186 != 368218LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x6269 = 2144070673124LLU;
	volatile uint8_t x6270 = 6U;
	static int16_t x6272 = -785;
	uint64_t t187 = 13LLU;

    t187 = (x6269>>(x6270+(x6271<=x6272)));

    if (t187 != 16750552133LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x6277 = UINT8_MAX;
	int8_t x6278 = 0;
	int16_t x6279 = INT16_MAX;
	int8_t x6280 = 0;

    t188 = (x6277>>(x6278+(x6279<=x6280)));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x6285 = UINT16_MAX;
	int16_t x6287 = INT16_MAX;
	uint16_t x6288 = 61U;
	volatile int32_t t189 = -730300952;

    t189 = (x6285>>(x6286+(x6287<=x6288)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x6377 = INT64_MAX;
	volatile int8_t x6378 = 1;
	int64_t x6379 = 3550711858410536270LL;
	int16_t x6380 = -1;

    t190 = (x6377>>(x6378+(x6379<=x6380)));

    if (t190 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x6385 = UINT16_MAX;
	uint64_t x6386 = UINT64_MAX;
	static int64_t x6388 = INT64_MAX;
	static volatile int32_t t191 = -85102;

    t191 = (x6385>>(x6386+(x6387<=x6388)));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x6405 = 12;
	uint64_t x6406 = UINT64_MAX;
	uint32_t x6407 = 64138767U;
	int32_t x6408 = -4;
	volatile int32_t t192 = -24075;

    t192 = (x6405>>(x6406+(x6407<=x6408)));

    if (t192 != 12) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x6441 = UINT64_MAX;
	uint32_t x6442 = UINT32_MAX;
	volatile int32_t x6443 = INT32_MIN;
	int8_t x6444 = 2;
	uint64_t t193 = UINT64_MAX;

    t193 = (x6441>>(x6442+(x6443<=x6444)));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x6457 = UINT8_MAX;
	uint8_t x6458 = 29U;
	uint64_t x6459 = 362432205LLU;

    t194 = (x6457>>(x6458+(x6459<=x6460)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x6569 = UINT16_MAX;
	volatile int32_t x6570 = -1;
	int64_t x6571 = -376855LL;
	volatile uint32_t x6572 = 12780209U;

    t195 = (x6569>>(x6570+(x6571<=x6572)));

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x6577 = UINT8_MAX;
	int8_t x6579 = INT8_MIN;
	int64_t x6580 = -22122823381521719LL;
	volatile int32_t t196 = -486359018;

    t196 = (x6577>>(x6578+(x6579<=x6580)));

    if (t196 != 15) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x6581 = INT8_MAX;
	static int32_t x6582 = -1;
	int16_t x6583 = INT16_MIN;
	static int8_t x6584 = -1;
	int32_t t197 = -126741255;

    t197 = (x6581>>(x6582+(x6583<=x6584)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x6613 = INT64_MAX;
	static int16_t x6614 = -1;
	static int16_t x6615 = INT16_MIN;
	static volatile int64_t t198 = INT64_MAX;

    t198 = (x6613>>(x6614+(x6615<=x6616)));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x6621 = 98415600U;
	uint8_t x6622 = 18U;
	uint32_t x6624 = 4983395U;
	volatile uint32_t t199 = 28935U;

    t199 = (x6621>>(x6622+(x6623<=x6624)));

    if (t199 != 187U) { NG(); } else { ; }
	
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

