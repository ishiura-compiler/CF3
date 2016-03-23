
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

int32_t x1 = INT32_MIN;
int8_t x3 = INT8_MAX;
int16_t x4 = -1;
int64_t x10 = -1LL;
uint16_t x12 = 2032U;
uint64_t x21 = 2LLU;
uint32_t x44 = 6895780U;
int64_t t7 = 1715LL;
int8_t x46 = -1;
int16_t x59 = INT16_MIN;
uint32_t x60 = 373506617U;
volatile uint8_t x71 = 57U;
volatile int32_t x74 = INT32_MIN;
static int32_t x76 = 17563;
int16_t x81 = -1;
static volatile int8_t x82 = 56;
uint32_t t14 = 60U;
volatile int64_t x89 = INT64_MIN;
uint64_t x103 = 467337663804086863LLU;
int32_t x104 = 152038685;
uint64_t x106 = UINT64_MAX;
volatile uint16_t x116 = UINT16_MAX;
uint64_t x129 = 16186401805734461LLU;
volatile int8_t x136 = -27;
uint8_t x139 = 0U;
int32_t x141 = -14782173;
static int8_t x146 = -31;
volatile uint64_t x157 = 515095639336800585LLU;
int64_t x158 = -1LL;
uint16_t x162 = 919U;
int32_t x165 = INT32_MAX;
static uint32_t x167 = UINT32_MAX;
uint8_t x180 = 120U;
int16_t x181 = INT16_MAX;
uint32_t x186 = 923419172U;
int32_t x193 = INT32_MAX;
static int64_t x197 = -1514290521652LL;
volatile uint64_t x201 = 1948058263800882LLU;
volatile int32_t x202 = -72497;
uint64_t t37 = 299017718484LLU;
uint8_t x233 = 7U;
int16_t x236 = 0;
int32_t t42 = 0;
static volatile uint64_t x245 = UINT64_MAX;
uint32_t x248 = 84U;
static uint8_t x271 = 0U;
static uint16_t x289 = UINT16_MAX;
volatile int32_t x291 = 57;
static uint16_t x292 = 660U;
volatile int8_t x297 = 38;
int16_t x298 = INT16_MAX;
int32_t x305 = INT32_MIN;
int32_t x317 = INT32_MIN;
uint64_t t54 = 370884LLU;
static int64_t x328 = -222135LL;
volatile int32_t t56 = -142990314;
int8_t x339 = INT8_MAX;
volatile int16_t x340 = INT16_MIN;
uint32_t t58 = 146488U;
volatile int64_t x355 = -26950887LL;
uint16_t x363 = 1559U;
int64_t x366 = INT64_MIN;
uint32_t x373 = UINT32_MAX;
static int8_t x374 = INT8_MAX;
volatile uint64_t t64 = 1LLU;
int64_t x380 = -1LL;
int64_t x385 = INT64_MAX;
uint16_t x403 = 4U;
int8_t x407 = -1;
static int64_t x408 = 6LL;
int16_t x409 = -1;
volatile int64_t t72 = 433149046667LL;
int16_t x433 = -1;
int32_t x435 = -1;
int32_t x439 = 40;
uint16_t x444 = UINT16_MAX;
static int32_t x446 = 613590352;
volatile int64_t t77 = -40287439LL;
int16_t x474 = INT16_MIN;
int8_t x475 = INT8_MAX;
static volatile int16_t x488 = INT16_MIN;
int64_t x489 = INT64_MIN;
int8_t x490 = INT8_MIN;
static int16_t x496 = INT16_MIN;
volatile int32_t t84 = -188;
int16_t x499 = -1;
int64_t x505 = 34752159712699832LL;
int16_t x516 = INT16_MIN;
int16_t x521 = INT16_MIN;
volatile uint32_t x524 = 9004U;
uint16_t x525 = 3490U;
uint64_t x526 = UINT64_MAX;
int64_t x529 = -949518836364LL;
int16_t x532 = INT16_MIN;
int16_t x545 = INT16_MIN;
int16_t x550 = -1;
uint32_t t96 = 5645865U;
int64_t x561 = 233332LL;
int8_t x573 = INT8_MIN;
uint32_t x576 = 1822855U;
uint64_t x586 = 533758LLU;
volatile uint32_t x587 = 18563617U;
uint8_t x591 = 4U;
static uint32_t x593 = 585985979U;
int16_t x604 = INT16_MIN;
int64_t x606 = 9304143624LL;
volatile int64_t t107 = 6111384LL;
uint16_t x618 = UINT16_MAX;
volatile uint32_t t109 = 50U;
volatile int32_t t112 = 0;
int16_t x646 = -391;
int16_t x658 = INT16_MIN;
static uint32_t t114 = 390U;
uint16_t x673 = UINT16_MAX;
static uint8_t x674 = 5U;
volatile int8_t x675 = 17;
uint64_t x679 = UINT64_MAX;
uint64_t x681 = UINT64_MAX;
uint32_t x682 = UINT32_MAX;
volatile int16_t x683 = 1;
int16_t x708 = -190;
int64_t x717 = -1LL;
volatile uint64_t t123 = 3200LLU;
volatile int32_t x732 = 1412;
volatile uint64_t t125 = 60395497600LLU;
int16_t x734 = 2113;
int32_t t126 = 19;
volatile int64_t x741 = -826929030072797LL;
uint8_t x744 = 14U;
int16_t x750 = -7;
int32_t t130 = -97540600;
uint16_t x758 = UINT16_MAX;
volatile int32_t t132 = -3203529;
int8_t x769 = INT8_MIN;
int64_t x773 = INT64_MAX;
volatile uint64_t x777 = 7107821LLU;
uint64_t t137 = 163814652244149LLU;
int64_t x783 = -1LL;
volatile int64_t t138 = 45924927772LL;
int32_t x789 = -693;
int16_t x792 = -1;
uint16_t x793 = UINT16_MAX;
int64_t x811 = -22436790LL;
static volatile int64_t t144 = -37LL;
int16_t x824 = INT16_MIN;
static uint16_t x826 = UINT16_MAX;
uint32_t t147 = 68450U;
uint32_t x830 = 170903U;
uint64_t t148 = 117287124139195292LLU;
int64_t x838 = INT64_MIN;
int64_t x843 = 600269LL;
volatile int32_t t153 = -7606343;
volatile int32_t x859 = INT32_MIN;
int8_t x871 = INT8_MIN;
static uint16_t x873 = 13U;
int16_t x874 = -1;
int64_t x878 = -2102785LL;
static int16_t x895 = INT16_MAX;
int32_t x899 = INT32_MAX;
static int16_t x900 = -1;
int16_t x914 = -1;
volatile uint32_t x915 = 1U;
volatile uint32_t t164 = 448479827U;
uint64_t x923 = 291023512LLU;
static int16_t x924 = INT16_MIN;
uint64_t x936 = 32551617088742LLU;
uint16_t x937 = 22U;
int16_t x940 = INT16_MIN;
int8_t x941 = 1;
static volatile uint64_t x944 = 16928443824743873LLU;
uint64_t t170 = 2033913LLU;
int16_t x951 = -1199;
int32_t x953 = -25276198;
uint16_t x955 = UINT16_MAX;
int32_t x965 = -1;
static volatile int8_t x967 = INT8_MAX;
uint8_t x969 = UINT8_MAX;
int32_t x971 = -22;
uint32_t x977 = 12U;
int64_t x990 = -45116072072769LL;
int8_t x996 = INT8_MIN;
int8_t x1004 = -8;
static int32_t x1014 = INT32_MIN;
uint32_t x1020 = 227732U;
volatile int64_t x1021 = -55734664675409LL;
int16_t x1029 = INT16_MAX;
uint64_t x1032 = UINT64_MAX;
static int64_t x1037 = 46043245275LL;
volatile int64_t t189 = -491695LL;
volatile int64_t t190 = 53LL;
uint64_t x1050 = UINT64_MAX;
volatile int64_t x1053 = 3228147070983387LL;
int8_t x1055 = INT8_MAX;
int16_t x1058 = INT16_MAX;
uint32_t t193 = 1022758323U;
static uint64_t t194 = 1957LLU;
int32_t x1070 = -1;
int16_t x1072 = INT16_MAX;
int64_t x1086 = INT64_MIN;
int16_t x1089 = INT16_MAX;
uint32_t t199 = 1939128853U;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	int32_t t0 = -15847;

    t0 = (x1-(x2|(x3*x4)));

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = INT64_MAX;
	volatile int16_t x6 = 3367;
	static int32_t x7 = INT32_MIN;
	uint32_t x8 = 61124U;
	int64_t t1 = 32503640LL;

    t1 = (x5-(x6|(x7*x8)));

    if (t1 != 9223372036854772440LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	uint8_t x11 = UINT8_MAX;
	volatile int64_t t2 = 59429LL;

    t2 = (x9-(x10|(x11*x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x22 = 16506387;
	static volatile int64_t x23 = -1LL;
	static int64_t x24 = INT64_MAX;
	uint64_t t3 = 5981LLU;

    t3 = (x21-(x22|(x23*x24)));

    if (t3 != 9223372036838269423LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = 36U;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int64_t x31 = -1LL;
	int16_t x32 = INT16_MIN;
	static volatile int64_t t4 = 3529882LL;

    t4 = (x29-(x30|(x31*x32)));

    if (t4 != -65499LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x33 = UINT16_MAX;
	static int8_t x34 = INT8_MIN;
	static volatile uint32_t x35 = 977252577U;
	int32_t x36 = -1;
	uint32_t t5 = 1062U;

    t5 = (x33-(x34|(x35*x36)));

    if (t5 != 65632U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x37 = -127436703;
	volatile uint64_t x38 = 1343992730489672LLU;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	static volatile uint64_t t6 = 6819798352LLU;

    t6 = (x37-(x38|(x39*x40)));

    if (t6 != 18445400080851625241LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x41 = -125918LL;
	static volatile uint32_t x42 = 41U;
	uint8_t x43 = 22U;

    t7 = (x41-(x42|(x43*x44)));

    if (t7 != -151833111LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = 460879458;
	static volatile uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MAX;
	static uint32_t t8 = 9910145U;

    t8 = (x45-(x46|(x47*x48)));

    if (t8 != 460879459U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MIN;
	int8_t x50 = -30;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 7093U;
	int32_t t9 = -227;

    t9 = (x49-(x50|(x51*x52)));

    if (t9 != -32738) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x57 = UINT32_MAX;
	volatile int8_t x58 = 35;
	volatile uint32_t t10 = 1392973U;

    t10 = (x57-(x58|(x59*x60)));

    if (t10 != 2702999516U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x65 = -1LL;
	int16_t x66 = INT16_MAX;
	uint8_t x67 = 6U;
	volatile uint64_t x68 = 1480819937856113113LLU;
	uint64_t t11 = 198LLU;

    t11 = (x65-(x66|(x67*x68)));

    if (t11 != 9561824446572855296LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x69 = INT64_MIN;
	int16_t x70 = -1;
	int8_t x72 = -1;
	int64_t t12 = 828LL;

    t12 = (x69-(x70|(x71*x72)));

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x73 = 39300U;
	int32_t x75 = -1;
	volatile uint32_t t13 = 11255463U;

    t13 = (x73-(x74|(x75*x76)));

    if (t13 != 56863U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x83 = 3U;
	volatile uint32_t x84 = UINT32_MAX;

    t14 = (x81-(x82|(x83*x84)));

    if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = INT32_MAX;
	int8_t x87 = 0;
	int32_t x88 = -12829738;
	static volatile uint64_t t15 = 2482LLU;

    t15 = (x85-(x86|(x87*x88)));

    if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x90 = 7LL;
	uint16_t x91 = 97U;
	static uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t16 = 1LLU;

    t16 = (x89-(x90|(x91*x92)));

    if (t16 != 9223372036854775905LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x97 = UINT16_MAX;
	uint8_t x98 = 13U;
	volatile int32_t x99 = 111865;
	volatile int8_t x100 = -1;
	static int32_t t17 = -1782782;

    t17 = (x97-(x98|(x99*x100)));

    if (t17 != 177392) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x101 = -54;
	volatile int64_t x102 = -8963398LL;
	static volatile uint64_t t18 = 160712LLU;

    t18 = (x101-(x102|(x103*x104)));

    if (t18 != 573391LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x105 = 13U;
	uint8_t x107 = 5U;
	uint32_t x108 = 13U;
	static uint64_t t19 = 338218770795901916LLU;

    t19 = (x105-(x106|(x107*x108)));

    if (t19 != 14LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x113 = INT8_MAX;
	int16_t x114 = -12;
	volatile int64_t x115 = -294274660LL;
	static int64_t t20 = 1LL;

    t20 = (x113-(x114|(x115*x116)));

    if (t20 != 139LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x117 = INT64_MIN;
	static uint32_t x118 = 50U;
	volatile int64_t x119 = INT64_MAX;
	int8_t x120 = -1;
	volatile int64_t t21 = 2486446924715449638LL;

    t21 = (x117-(x118|(x119*x120)));

    if (t21 != -51LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	static uint64_t t22 = 105697LLU;

    t22 = (x129-(x130|(x131*x132)));

    if (t22 != 16186397510767166LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x133 = 876464U;
	uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile uint64_t t23 = 422554648LLU;

    t23 = (x133-(x134|(x135*x136)));

    if (t23 != 810929LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x137 = -1;
	volatile uint32_t x138 = UINT32_MAX;
	int16_t x140 = INT16_MAX;
	static uint32_t t24 = 1290U;

    t24 = (x137-(x138|(x139*x140)));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x142 = INT16_MIN;
	int32_t x143 = 22436722;
	int8_t x144 = 1;
	static int32_t t25 = 385;

    t25 = (x141-(x142|(x143*x144)));

    if (t25 != -14772815) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x145 = INT32_MIN;
	static volatile uint64_t x147 = UINT64_MAX;
	static uint32_t x148 = 10U;
	volatile uint64_t t26 = 139LLU;

    t26 = (x145-(x146|(x147*x148)));

    if (t26 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x159 = UINT8_MAX;
	uint32_t x160 = UINT32_MAX;
	static volatile uint64_t t27 = 6082937469255LLU;

    t27 = (x157-(x158|(x159*x160)));

    if (t27 != 515095639336800586LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x161 = -7;
	uint16_t x163 = 1284U;
	int64_t x164 = 14LL;
	int64_t t28 = 8840242LL;

    t28 = (x161-(x162|(x163*x164)));

    if (t28 != -18374LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x166 = 1LL;
	volatile uint8_t x168 = 20U;
	int64_t t29 = 29628034LL;

    t29 = (x165-(x166|(x167*x168)));

    if (t29 != -2147483630LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	volatile int64_t t30 = -62398860537959LL;

    t30 = (x169-(x170|(x171*x172)));

    if (t30 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = -50;
	volatile int8_t x178 = INT8_MIN;
	uint64_t x179 = 1198006729268280LLU;
	uint64_t t31 = 7707670598LLU;

    t31 = (x177-(x178|(x179*x180)));

    if (t31 != 14LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x182 = UINT64_MAX;
	int64_t x183 = 14LL;
	int8_t x184 = INT8_MIN;
	static uint64_t t32 = 107587LLU;

    t32 = (x181-(x182|(x183*x184)));

    if (t32 != 32768LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x185 = 20U;
	uint16_t x187 = UINT16_MAX;
	int8_t x188 = -11;
	static volatile uint32_t t33 = 10U;

    t33 = (x185-(x186|(x187*x188)));

    if (t33 != 48613U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x189 = 217LLU;
	uint32_t x190 = UINT32_MAX;
	uint32_t x191 = 6571574U;
	int32_t x192 = -1;
	uint64_t t34 = 151LLU;

    t34 = (x189-(x190|(x191*x192)));

    if (t34 != 18446744069414584538LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x194 = 24063U;
	uint8_t x195 = 3U;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t35 = -1;

    t35 = (x193-(x194|(x195*x196)));

    if (t35 != 2147287040) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x198 = 1;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = UINT64_MAX;
	static uint64_t t36 = 1590405283491009277LLU;

    t36 = (x197-(x198|(x199*x200)));

    if (t36 != 18446742559419029835LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x203 = INT8_MAX;
	int32_t x204 = -1;

    t37 = (x201-(x202|(x203*x204)));

    if (t37 != 1948058263800931LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x205 = 45;
	static uint8_t x206 = UINT8_MAX;
	volatile uint32_t x207 = 30U;
	volatile int16_t x208 = -1;
	uint32_t t38 = 670728937U;

    t38 = (x205-(x206|(x207*x208)));

    if (t38 != 46U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	static uint16_t x215 = 1188U;
	int8_t x216 = INT8_MAX;
	static volatile int32_t t39 = -336946281;

    t39 = (x213-(x214|(x215*x216)));

    if (t39 != -229375) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x221 = 3;
	uint8_t x222 = 8U;
	int8_t x223 = 1;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t40 = 243386;

    t40 = (x221-(x222|(x223*x224)));

    if (t40 != 32763) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x229 = -66;
	int32_t x230 = -690411;
	uint8_t x231 = 113U;
	static volatile int16_t x232 = 0;
	int32_t t41 = -965008;

    t41 = (x229-(x230|(x231*x232)));

    if (t41 != 690345) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x234 = 193U;
	int8_t x235 = 7;

    t42 = (x233-(x234|(x235*x236)));

    if (t42 != -186) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x237 = 8867U;
	uint16_t x238 = UINT16_MAX;
	uint16_t x239 = 1U;
	volatile uint16_t x240 = UINT16_MAX;
	static int32_t t43 = 11975;

    t43 = (x237-(x238|(x239*x240)));

    if (t43 != -56668) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	volatile uint32_t x243 = 7508007U;
	uint8_t x244 = 55U;
	volatile uint32_t t44 = 195037207U;

    t44 = (x241-(x242|(x243*x244)));

    if (t44 != 3882026752U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x246 = 348;
	static uint8_t x247 = 4U;
	uint64_t t45 = 477779478733413LLU;

    t45 = (x245-(x246|(x247*x248)));

    if (t45 != 18446744073709551267LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	uint8_t x267 = 10U;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t46 = 2;

    t46 = (x265-(x266|(x267*x268)));

    if (t46 != 262145) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MAX;
	static volatile uint16_t x272 = 1U;
	int64_t t47 = 456485760930LL;

    t47 = (x269-(x270|(x271*x272)));

    if (t47 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x281 = -132;
	int8_t x282 = 29;
	uint8_t x283 = 2U;
	static uint8_t x284 = 0U;
	int32_t t48 = -170874733;

    t48 = (x281-(x282|(x283*x284)));

    if (t48 != -161) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x290 = INT16_MIN;
	static volatile int32_t t49 = 62702;

    t49 = (x289-(x290|(x291*x292)));

    if (t49 != 93451) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x299 = INT32_MIN;
	static uint32_t x300 = 20430U;
	uint32_t t50 = 7348262U;

    t50 = (x297-(x298|(x299*x300)));

    if (t50 != 4294934567U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 3154U;
	static uint64_t x308 = 5382047633LLU;
	static uint64_t t51 = 39585307LLU;

    t51 = (x305-(x306|(x307*x308)));

    if (t51 != 18446727093556346881LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	uint8_t x311 = 20U;
	uint8_t x312 = 41U;
	volatile uint64_t t52 = 7799LLU;

    t52 = (x309-(x310|(x311*x312)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x318 = 39LLU;
	static int64_t x319 = -1LL;
	int64_t x320 = -656227648951440925LL;
	static volatile uint64_t t53 = 116670851175247LLU;

    t53 = (x317-(x318|(x319*x320)));

    if (t53 != 17790516422610627009LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x321 = -6;
	uint64_t x322 = UINT64_MAX;
	static int32_t x323 = -358085089;
	int16_t x324 = -1;

    t54 = (x321-(x322|(x323*x324)));

    if (t54 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 4U;
	int64_t t55 = 102LL;

    t55 = (x325-(x326|(x327*x328)));

    if (t55 != 3803LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x329 = INT8_MIN;
	uint8_t x330 = 6U;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;

    t56 = (x329-(x330|(x331*x332)));

    if (t56 != -4194438) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x337 = 31U;
	int16_t x338 = 736;
	volatile int32_t t57 = -2664370;

    t57 = (x337-(x338|(x339*x340)));

    if (t57 != 4160831) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -79397;
	uint32_t x344 = 2835119U;

    t58 = (x341-(x342|(x343*x344)));

    if (t58 != 1761611083U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MAX;
	static int32_t x347 = INT32_MAX;
	static uint32_t x348 = UINT32_MAX;
	volatile uint32_t t59 = 17341U;

    t59 = (x345-(x346|(x347*x348)));

    if (t59 != 4294967169U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x349 = 199U;
	uint32_t x350 = 4853U;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = 983369U;
	static volatile uint32_t t60 = 3412577U;

    t60 = (x349-(x350|(x351*x352)));

    if (t60 != 2148467152U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = UINT8_MAX;
	int8_t x356 = -11;
	int64_t t61 = 59929188011LL;

    t61 = (x353-(x354|(x355*x356)));

    if (t61 != -296492543LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t62 = 11118;

    t62 = (x361-(x362|(x363*x364)));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x365 = -1;
	int8_t x367 = -3;
	static int64_t x368 = 7425846336653154LL;
	int64_t t63 = -37407230266210531LL;

    t63 = (x365-(x366|(x367*x368)));

    if (t63 != 22277539009959461LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x375 = INT64_MIN;
	uint64_t x376 = UINT64_MAX;

    t64 = (x373-(x374|(x375*x376)));

    if (t64 != 9223372041149742976LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x377 = 1321;
	volatile int64_t x378 = -1LL;
	volatile int64_t x379 = 11166978LL;
	static volatile int64_t t65 = -753788245076LL;

    t65 = (x377-(x378|(x379*x380)));

    if (t65 != 1322LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x381 = 199;
	volatile uint32_t x382 = 16904U;
	int64_t x383 = -1LL;
	static int32_t x384 = INT32_MIN;
	volatile int64_t t66 = -104687933526589195LL;

    t66 = (x381-(x382|(x383*x384)));

    if (t66 != -2147500353LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x386 = INT8_MAX;
	int64_t x387 = -1LL;
	int16_t x388 = -2124;
	volatile int64_t t67 = -89020120041195209LL;

    t67 = (x385-(x386|(x387*x388)));

    if (t67 != 9223372036854773632LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x389 = 59U;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = 13711;
	uint64_t x392 = 7150082LLU;
	uint64_t t68 = 5334453096505710LLU;

    t68 = (x389-(x390|(x391*x392)));

    if (t68 != 18446743975674777148LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x393 = 6408469491LLU;
	static int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 124U;
	volatile uint64_t t69 = 407606549775316LLU;

    t69 = (x393-(x394|(x395*x396)));

    if (t69 != 2113502323LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x401 = 2U;
	uint64_t x402 = UINT64_MAX;
	int64_t x404 = -1597923842808302026LL;
	static volatile uint64_t t70 = 914465LLU;

    t70 = (x401-(x402|(x403*x404)));

    if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x405 = -1;
	int64_t x406 = INT64_MIN;
	volatile int64_t t71 = -42LL;

    t71 = (x405-(x406|(x407*x408)));

    if (t71 != 5LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x410 = INT16_MAX;
	static int64_t x411 = -1LL;
	int64_t x412 = INT64_MAX;

    t72 = (x409-(x410|(x411*x412)));

    if (t72 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x425 = -10;
	int32_t x426 = -36469692;
	static int32_t x427 = -1;
	static int8_t x428 = -1;
	static int32_t t73 = 24;

    t73 = (x425-(x426|(x427*x428)));

    if (t73 != 36469681) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x434 = 28;
	int8_t x436 = 0;
	volatile int32_t t74 = -139;

    t74 = (x433-(x434|(x435*x436)));

    if (t74 != -29) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x437 = -63;
	uint64_t x438 = 152200701403236LLU;
	uint32_t x440 = 977589U;
	volatile uint64_t t75 = 3488952028258415LLU;

    t75 = (x437-(x438|(x439*x440)));

    if (t75 != 18446591872970396501LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x441 = 11U;
	static uint32_t x442 = UINT32_MAX;
	uint64_t x443 = 2LLU;
	uint64_t t76 = 45622517718430LLU;

    t76 = (x441-(x442|(x443*x444)));

    if (t76 != 18446744069414584332LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x445 = INT8_MIN;
	static uint16_t x447 = 47U;
	int64_t x448 = -1LL;

    t77 = (x445-(x446|(x447*x448)));

    if (t77 != -81LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int8_t x454 = INT8_MAX;
	uint16_t x455 = 23988U;
	uint8_t x456 = 2U;
	uint64_t t78 = 1740410247138LLU;

    t78 = (x453-(x454|(x455*x456)));

    if (t78 != 18446744073709503616LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x457 = -3015;
	int8_t x458 = INT8_MAX;
	volatile int8_t x459 = INT8_MAX;
	int8_t x460 = INT8_MIN;
	static int32_t t79 = -44;

    t79 = (x457-(x458|(x459*x460)));

    if (t79 != 13114) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x465 = -683297;
	int16_t x466 = -1;
	volatile int64_t x467 = INT64_MAX;
	static int8_t x468 = -1;
	int64_t t80 = -466633LL;

    t80 = (x465-(x466|(x467*x468)));

    if (t80 != -683296LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x473 = INT32_MIN;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t81 = 26669231LLU;

    t81 = (x473-(x474|(x475*x476)));

    if (t81 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	static int32_t x486 = -1;
	uint32_t x487 = 167739226U;
	volatile uint32_t t82 = 3864924U;

    t82 = (x485-(x486|(x487*x488)));

    if (t82 != 256U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x491 = -9417;
	volatile uint64_t x492 = 8622572191616533702LLU;
	static volatile uint64_t t83 = 954569LLU;

    t83 = (x489-(x490|(x491*x492)));

    if (t83 != 9223372036854775926LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x493 = -1;
	uint8_t x494 = 80U;
	static int32_t x495 = -1;

    t84 = (x493-(x494|(x495*x496)));

    if (t84 != -32849) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x497 = 6937LL;
	uint16_t x498 = 28U;
	int32_t x500 = INT32_MAX;
	volatile int64_t t85 = 806386LL;

    t85 = (x497-(x498|(x499*x500)));

    if (t85 != 2147490556LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x506 = 325883513394127LLU;
	uint64_t x507 = 4LLU;
	int8_t x508 = INT8_MIN;
	uint64_t t86 = 366660416LLU;

    t86 = (x505-(x506|(x507*x508)));

    if (t86 != 34752159712699881LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x509 = -1;
	int16_t x510 = 147;
	int8_t x511 = INT8_MAX;
	uint8_t x512 = UINT8_MAX;
	int32_t t87 = 105;

    t87 = (x509-(x510|(x511*x512)));

    if (t87 != -32404) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x513 = -2;
	int64_t x514 = -5047783752LL;
	static volatile int64_t x515 = 26033226090LL;
	volatile int64_t t88 = -80452353132725652LL;

    t88 = (x513-(x514|(x515*x516)));

    if (t88 != 4304671046LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x517 = -11988LL;
	int8_t x518 = -1;
	static volatile uint8_t x519 = 1U;
	uint16_t x520 = 33U;
	volatile int64_t t89 = 6327LL;

    t89 = (x517-(x518|(x519*x520)));

    if (t89 != -11987LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x522 = INT16_MIN;
	volatile int16_t x523 = -1;
	uint32_t t90 = 54U;

    t90 = (x521-(x522|(x523*x524)));

    if (t90 != 4294943532U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x527 = -1LL;
	static uint32_t x528 = 731565099U;
	static volatile uint64_t t91 = 1769858018LLU;

    t91 = (x525-(x526|(x527*x528)));

    if (t91 != 3491LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x530 = INT16_MAX;
	static int64_t x531 = -1LL;
	int64_t t92 = -4807741318LL;

    t92 = (x529-(x530|(x531*x532)));

    if (t92 != -949518901899LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x537 = INT32_MAX;
	static uint8_t x538 = UINT8_MAX;
	int8_t x539 = 37;
	uint16_t x540 = 4U;
	int32_t t93 = 21630;

    t93 = (x537-(x538|(x539*x540)));

    if (t93 != 2147483392) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x541 = 56;
	uint32_t x542 = 82182598U;
	int8_t x543 = 60;
	int8_t x544 = INT8_MIN;
	uint32_t t94 = 7U;

    t94 = (x541-(x542|(x543*x544)));

    if (t94 != 7282U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x546 = -1;
	uint16_t x547 = 2875U;
	uint8_t x548 = 20U;
	int32_t t95 = -2190912;

    t95 = (x545-(x546|(x547*x548)));

    if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x549 = 63107U;
	int16_t x551 = -443;
	int16_t x552 = -1;

    t96 = (x549-(x550|(x551*x552)));

    if (t96 != 63108U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x553 = INT64_MAX;
	uint16_t x554 = 44U;
	int16_t x555 = INT16_MIN;
	int8_t x556 = INT8_MIN;
	volatile int64_t t97 = 98910LL;

    t97 = (x553-(x554|(x555*x556)));

    if (t97 != 9223372036850581459LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x557 = -1;
	int64_t x558 = 363530LL;
	volatile int16_t x559 = -1;
	static volatile int64_t x560 = INT64_MAX;
	volatile int64_t t98 = -467073LL;

    t98 = (x557-(x558|(x559*x560)));

    if (t98 != 9223372036854412276LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x562 = 227U;
	uint64_t x563 = 165627LLU;
	volatile uint16_t x564 = 4354U;
	uint64_t t99 = 30056246547583LLU;

    t99 = (x561-(x562|(x563*x564)));

    if (t99 != 18446744072988644989LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x574 = INT32_MIN;
	int8_t x575 = -10;
	volatile uint32_t t100 = 452U;

    t100 = (x573-(x574|(x575*x576)));

    if (t100 != 18228422U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x581 = 446606904690LLU;
	volatile int8_t x582 = -1;
	static int8_t x583 = INT8_MAX;
	volatile int64_t x584 = -1LL;
	volatile uint64_t t101 = 23878903620965LLU;

    t101 = (x581-(x582|(x583*x584)));

    if (t101 != 446606904691LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x585 = INT64_MIN;
	int8_t x588 = 2;
	uint64_t t102 = 1LLU;

    t102 = (x585-(x586|(x587*x588)));

    if (t102 != 9223372036817115906LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x589 = -1;
	int16_t x590 = -1;
	int16_t x592 = INT16_MIN;
	static volatile int32_t t103 = 3281;

    t103 = (x589-(x590|(x591*x592)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x594 = INT8_MAX;
	int8_t x595 = INT8_MAX;
	static uint8_t x596 = 19U;
	static uint32_t t104 = 90939U;

    t104 = (x593-(x594|(x595*x596)));

    if (t104 != 585983548U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x597 = 1U;
	int32_t x598 = INT32_MAX;
	int16_t x599 = INT16_MAX;
	static int16_t x600 = INT16_MIN;
	volatile int32_t t105 = 1;

    t105 = (x597-(x598|(x599*x600)));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x601 = -1;
	int64_t x602 = -1LL;
	static int8_t x603 = INT8_MIN;
	volatile int64_t t106 = -3LL;

    t106 = (x601-(x602|(x603*x604)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x605 = 1U;
	static int32_t x607 = -995;
	int64_t x608 = -7056306975LL;

    t107 = (x605-(x606|(x607*x608)));

    if (t107 != -7021193328508LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x613 = INT16_MAX;
	uint64_t x614 = 36LLU;
	int64_t x615 = 53797031LL;
	int16_t x616 = -1;
	uint64_t t108 = 120682961688LLU;

    t108 = (x613-(x614|(x615*x616)));

    if (t108 != 53829762LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x617 = INT16_MAX;
	uint32_t x619 = 49863226U;
	uint16_t x620 = 3U;

    t109 = (x617-(x618|(x619*x620)));

    if (t109 != 4145381376U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x621 = 7U;
	int32_t x622 = INT32_MIN;
	static int64_t x623 = INT64_MIN;
	int8_t x624 = 0;
	static int64_t t110 = -1LL;

    t110 = (x621-(x622|(x623*x624)));

    if (t110 != 2147483655LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x637 = 48251480823925812LLU;
	int8_t x638 = INT8_MAX;
	volatile int8_t x639 = -1;
	static int32_t x640 = -1;
	uint64_t t111 = 490LLU;

    t111 = (x637-(x638|(x639*x640)));

    if (t111 != 48251480823925685LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x641 = 5;
	static int8_t x642 = INT8_MIN;
	static uint16_t x643 = UINT16_MAX;
	volatile uint8_t x644 = 1U;

    t112 = (x641-(x642|(x643*x644)));

    if (t112 != 6) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x645 = 29834U;
	static int16_t x647 = INT16_MAX;
	int32_t x648 = 46;
	int32_t t113 = -1;

    t113 = (x645-(x646|(x647*x648)));

    if (t113 != 29839) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x657 = 2U;
	int16_t x659 = INT16_MIN;
	volatile uint32_t x660 = 969U;

    t114 = (x657-(x658|(x659*x660)));

    if (t114 != 32770U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x669 = -1;
	volatile uint32_t x670 = 2697U;
	int16_t x671 = INT16_MAX;
	volatile uint16_t x672 = UINT16_MAX;
	volatile uint32_t t115 = 19045394U;

    t115 = (x669-(x670|(x671*x672)));

    if (t115 != 2147579254U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x676 = 2;
	volatile int32_t t116 = -213772;

    t116 = (x673-(x674|(x675*x676)));

    if (t116 != 65496) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x677 = INT8_MAX;
	volatile int16_t x678 = -1;
	int8_t x680 = 6;
	uint64_t t117 = 0LLU;

    t117 = (x677-(x678|(x679*x680)));

    if (t117 != 128LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x684 = 11U;
	uint64_t t118 = 135979024140669LLU;

    t118 = (x681-(x682|(x683*x684)));

    if (t118 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x697 = -17116351685LL;
	static int32_t x698 = INT32_MIN;
	int8_t x699 = 4;
	volatile int8_t x700 = INT8_MAX;
	volatile int64_t t119 = -242864862LL;

    t119 = (x697-(x698|(x699*x700)));

    if (t119 != -14968868545LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x705 = INT64_MIN;
	volatile int64_t x706 = -1LL;
	static int8_t x707 = -5;
	int64_t t120 = -27298478572279LL;

    t120 = (x705-(x706|(x707*x708)));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = -1;
	uint16_t x711 = 1U;
	int8_t x712 = 1;
	int32_t t121 = 479;

    t121 = (x709-(x710|(x711*x712)));

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x718 = INT64_MAX;
	uint8_t x719 = 29U;
	uint16_t x720 = UINT16_MAX;
	static volatile int64_t t122 = INT64_MIN;

    t122 = (x717-(x718|(x719*x720)));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x721 = UINT64_MAX;
	static int64_t x722 = INT64_MAX;
	int32_t x723 = 0;
	int16_t x724 = -1;

    t123 = (x721-(x722|(x723*x724)));

    if (t123 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x725 = 282092U;
	int32_t x726 = -3;
	int8_t x727 = 9;
	uint16_t x728 = UINT16_MAX;
	volatile uint32_t t124 = 834372U;

    t124 = (x725-(x726|(x727*x728)));

    if (t124 != 282093U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x729 = INT32_MIN;
	int16_t x730 = INT16_MAX;
	uint64_t x731 = 5223912637LLU;

    t125 = (x729-(x730|(x731*x732)));

    if (t125 != 18446736695397416961LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x733 = -2597;
	int8_t x735 = INT8_MAX;
	static volatile uint8_t x736 = 1U;

    t126 = (x733-(x734|(x735*x736)));

    if (t126 != -4772) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x737 = UINT64_MAX;
	uint64_t x738 = 847675584LLU;
	uint16_t x739 = 0U;
	volatile int8_t x740 = -1;
	static uint64_t t127 = 612938304679LLU;

    t127 = (x737-(x738|(x739*x740)));

    if (t127 != 18446744072861876031LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x742 = 6688605LLU;
	uint64_t x743 = 87808605178514053LLU;
	volatile uint64_t t128 = 1152346776140LLU;

    t128 = (x741-(x742|(x743*x744)));

    if (t128 != 17216596672180278980LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x745 = -833933141453244658LL;
	static int16_t x746 = -1;
	static uint16_t x747 = UINT16_MAX;
	int8_t x748 = INT8_MIN;
	volatile int64_t t129 = 3111182436966LL;

    t129 = (x745-(x746|(x747*x748)));

    if (t129 != -833933141453244657LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x749 = 784U;
	int8_t x751 = 0;
	uint16_t x752 = UINT16_MAX;

    t130 = (x749-(x750|(x751*x752)));

    if (t130 != 791) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x753 = INT16_MIN;
	int32_t x754 = -65726483;
	volatile int32_t x755 = -1444;
	int16_t x756 = INT16_MIN;
	volatile int32_t t131 = -1763296;

    t131 = (x753-(x754|(x755*x756)));

    if (t131 != 19425299) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x757 = UINT16_MAX;
	uint8_t x759 = 2U;
	static int32_t x760 = 312302317;

    t132 = (x757-(x758|(x759*x760)));

    if (t132 != -624558080) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x761 = 153U;
	uint8_t x762 = 0U;
	int64_t x763 = INT64_MIN;
	uint64_t x764 = UINT64_MAX;
	uint64_t t133 = 338764126280296LLU;

    t133 = (x761-(x762|(x763*x764)));

    if (t133 != 9223372036854775961LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x765 = UINT16_MAX;
	uint16_t x766 = UINT16_MAX;
	static volatile int64_t x767 = 188971891956LL;
	uint16_t x768 = 3765U;
	volatile int64_t t134 = 54033438548LL;

    t134 = (x765-(x766|(x767*x768)));

    if (t134 != -711479173185536LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x770 = 8846LL;
	int64_t x771 = -4886954261LL;
	int64_t x772 = -1LL;
	volatile int64_t t135 = -89739LL;

    t135 = (x769-(x770|(x771*x772)));

    if (t135 != -4886963231LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x774 = INT32_MAX;
	static volatile uint32_t x775 = UINT32_MAX;
	static int32_t x776 = INT32_MIN;
	int64_t t136 = 1777277985300LL;

    t136 = (x773-(x774|(x775*x776)));

    if (t136 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x778 = INT32_MAX;
	uint32_t x779 = 78102U;
	static uint16_t x780 = 3U;

    t137 = (x777-(x778|(x779*x780)));

    if (t137 != 18446744071569175790LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x781 = INT64_MIN;
	static volatile int64_t x782 = -1LL;
	uint8_t x784 = UINT8_MAX;

    t138 = (x781-(x782|(x783*x784)));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x790 = 12404130;
	int64_t x791 = 2081876944978LL;
	volatile int64_t t139 = -71479562156969095LL;

    t139 = (x789-(x790|(x791*x792)));

    if (t139 != 2081867965853LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x794 = INT16_MIN;
	static uint32_t x795 = 6091U;
	static uint64_t x796 = UINT64_MAX;
	uint64_t t140 = 138743661325051979LLU;

    t140 = (x793-(x794|(x795*x796)));

    if (t140 != 71626LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x797 = INT64_MAX;
	volatile int8_t x798 = -1;
	volatile uint64_t x799 = UINT64_MAX;
	uint32_t x800 = 4U;
	volatile uint64_t t141 = 52322692995LLU;

    t141 = (x797-(x798|(x799*x800)));

    if (t141 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MIN;
	uint16_t x803 = 7917U;
	static uint16_t x804 = 1U;
	int32_t t142 = -590719;

    t142 = (x801-(x802|(x803*x804)));

    if (t142 != -7917) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x805 = -1;
	int64_t x806 = INT64_MAX;
	int64_t x807 = INT64_MIN;
	uint8_t x808 = 0U;
	static volatile int64_t t143 = INT64_MIN;

    t143 = (x805-(x806|(x807*x808)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x809 = INT8_MIN;
	int32_t x810 = 0;
	int8_t x812 = INT8_MIN;

    t144 = (x809-(x810|(x811*x812)));

    if (t144 != -2871909248LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x817 = INT32_MIN;
	volatile int8_t x818 = -25;
	uint32_t x819 = UINT32_MAX;
	uint8_t x820 = 87U;
	volatile uint32_t t145 = 2U;

    t145 = (x817-(x818|(x819*x820)));

    if (t145 != 2147483665U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x821 = 9LLU;
	volatile uint32_t x822 = 123U;
	static uint8_t x823 = 73U;
	uint64_t t146 = 3638139598585689876LLU;

    t146 = (x821-(x822|(x823*x824)));

    if (t146 != 18446744069416976270LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x825 = UINT16_MAX;
	int32_t x827 = 0;
	uint32_t x828 = 51851U;

    t147 = (x825-(x826|(x827*x828)));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x829 = 15LLU;
	uint16_t x831 = UINT16_MAX;
	int16_t x832 = INT16_MAX;

    t148 = (x829-(x830|(x831*x832)));

    if (t148 != 18446744071562159224LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x833 = INT16_MAX;
	uint32_t x834 = 43655U;
	static int32_t x835 = -1;
	uint8_t x836 = UINT8_MAX;
	uint32_t t149 = 2125920034U;

    t149 = (x833-(x834|(x835*x836)));

    if (t149 != 32888U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x837 = INT16_MIN;
	static volatile int8_t x839 = INT8_MIN;
	volatile uint8_t x840 = UINT8_MAX;
	static int64_t t150 = 19548649497LL;

    t150 = (x837-(x838|(x839*x840)));

    if (t150 != -128LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x841 = UINT16_MAX;
	int32_t x842 = -3356749;
	int16_t x844 = INT16_MIN;
	int64_t t151 = -1760849181595LL;

    t151 = (x841-(x842|(x843*x844)));

    if (t151 != 2308172LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x849 = INT16_MIN;
	uint16_t x850 = 2U;
	static int64_t x851 = 831LL;
	volatile int16_t x852 = INT16_MIN;
	volatile int64_t t152 = -1923436LL;

    t152 = (x849-(x850|(x851*x852)));

    if (t152 != 27197438LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x853 = -1;
	int32_t x854 = 568321542;
	volatile int8_t x855 = -4;
	uint16_t x856 = 15014U;

    t153 = (x853-(x854|(x855*x856)));

    if (t153 != 2193) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x857 = 9470;
	int8_t x858 = INT8_MIN;
	static int64_t x860 = -21167LL;
	int64_t t154 = 2887127389LL;

    t154 = (x857-(x858|(x859*x860)));

    if (t154 != 9598LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x865 = 18U;
	static volatile int64_t x866 = -1LL;
	int32_t x867 = -13;
	int16_t x868 = -9680;
	volatile int64_t t155 = -891LL;

    t155 = (x865-(x866|(x867*x868)));

    if (t155 != 19LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x869 = UINT16_MAX;
	uint16_t x870 = 8U;
	uint8_t x872 = 3U;
	static int32_t t156 = 2;

    t156 = (x869-(x870|(x871*x872)));

    if (t156 != 65911) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x875 = UINT16_MAX;
	int16_t x876 = INT16_MIN;
	int32_t t157 = 63;

    t157 = (x873-(x874|(x875*x876)));

    if (t157 != 14) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x877 = INT64_MIN;
	static volatile int16_t x879 = -5;
	uint16_t x880 = 10841U;
	static int64_t t158 = 5061759982776109LL;

    t158 = (x877-(x878|(x879*x880)));

    if (t158 != -9223372036854771199LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x885 = 19;
	uint32_t x886 = 804193101U;
	uint8_t x887 = 111U;
	static int8_t x888 = INT8_MIN;
	static volatile uint32_t t159 = 784U;

    t159 = (x885-(x886|(x887*x888)));

    if (t159 != 13382U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x893 = 62613271;
	uint32_t x894 = 605U;
	volatile uint16_t x896 = 32U;
	static uint32_t t160 = 8263U;

    t160 = (x893-(x894|(x895*x896)));

    if (t160 != 61564698U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x897 = 1113LL;
	volatile int16_t x898 = 0;
	int64_t t161 = 26815635287366LL;

    t161 = (x897-(x898|(x899*x900)));

    if (t161 != 2147484760LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x901 = 23U;
	int16_t x902 = -1;
	int8_t x903 = -3;
	int8_t x904 = 36;
	int32_t t162 = 233289913;

    t162 = (x901-(x902|(x903*x904)));

    if (t162 != 24) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x909 = -11;
	int16_t x910 = 762;
	int32_t x911 = INT32_MIN;
	int64_t x912 = -29LL;
	volatile int64_t t163 = 2782234220LL;

    t163 = (x909-(x910|(x911*x912)));

    if (t163 != -62277026565LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x913 = INT16_MAX;
	uint32_t x916 = UINT32_MAX;

    t164 = (x913-(x914|(x915*x916)));

    if (t164 != 32768U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x917 = -1LL;
	int16_t x918 = INT16_MIN;
	static int64_t x919 = 2822439214466941445LL;
	uint64_t x920 = 4572LLU;
	uint64_t t165 = 1566LLU;

    t165 = (x917-(x918|(x919*x920)));

    if (t165 != 28339LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x921 = UINT32_MAX;
	int16_t x922 = 2;
	volatile uint64_t t166 = 50969378439445LLU;

    t166 = (x921-(x922|(x923*x924)));

    if (t166 != 9540553408509LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x925 = 0;
	int64_t x926 = INT64_MAX;
	static uint16_t x927 = 3012U;
	volatile int8_t x928 = -1;
	int64_t t167 = 5802325678293435LL;

    t167 = (x925-(x926|(x927*x928)));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x933 = 6U;
	int64_t x934 = 27055LL;
	static int64_t x935 = 397050LL;
	uint64_t t168 = 1241108831106LLU;

    t168 = (x933-(x934|(x935*x936)));

    if (t168 != 5522124508624523847LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x938 = -1;
	static int32_t x939 = -32;
	int32_t t169 = 7733;

    t169 = (x937-(x938|(x939*x940)));

    if (t169 != 23) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x942 = INT8_MIN;
	uint8_t x943 = UINT8_MAX;

    t170 = (x941-(x942|(x943*x944)));

    if (t170 != 66LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x945 = 15204880154LLU;
	int8_t x946 = 3;
	static uint32_t x947 = 99585934U;
	static int8_t x948 = INT8_MAX;
	volatile uint64_t t171 = 13280LLU;

    t171 = (x945-(x946|(x947*x948)));

    if (t171 != 11147401127LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x949 = 0LLU;
	volatile int64_t x950 = INT64_MIN;
	volatile uint64_t x952 = UINT64_MAX;
	volatile uint64_t t172 = 8350LLU;

    t172 = (x949-(x950|(x951*x952)));

    if (t172 != 9223372036854774609LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x954 = -6910;
	volatile int64_t x956 = 1850LL;
	volatile int64_t t173 = 35170LL;

    t173 = (x953-(x954|(x955*x956)));

    if (t173 != -25275628LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x957 = 22653U;
	volatile int64_t x958 = INT64_MAX;
	static int32_t x959 = 1066;
	volatile int16_t x960 = 0;
	static volatile int64_t t174 = -3944288LL;

    t174 = (x957-(x958|(x959*x960)));

    if (t174 != -9223372036854753154LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x961 = INT16_MAX;
	int16_t x962 = -1;
	static int8_t x963 = INT8_MAX;
	volatile int8_t x964 = -1;
	static int32_t t175 = 989531818;

    t175 = (x961-(x962|(x963*x964)));

    if (t175 != 32768) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x966 = INT16_MAX;
	int16_t x968 = INT16_MIN;
	int32_t t176 = 1259;

    t176 = (x965-(x966|(x967*x968)));

    if (t176 != 4128768) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x970 = -1;
	uint32_t x972 = 246531191U;
	uint32_t t177 = 13402145U;

    t177 = (x969-(x970|(x971*x972)));

    if (t177 != 256U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x978 = -1LL;
	int8_t x979 = -1;
	static int16_t x980 = INT16_MAX;
	static int64_t t178 = -4705181LL;

    t178 = (x977-(x978|(x979*x980)));

    if (t178 != 13LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x981 = 162U;
	static int32_t x982 = INT32_MAX;
	uint16_t x983 = UINT16_MAX;
	static uint64_t x984 = 2831271LLU;
	static volatile uint64_t t179 = 5986959655LLU;

    t179 = (x981-(x982|(x983*x984)));

    if (t179 != 18446743886878474403LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x985 = 16;
	volatile int8_t x986 = INT8_MIN;
	static int16_t x987 = 3;
	int32_t x988 = -1;
	int32_t t180 = 9;

    t180 = (x985-(x986|(x987*x988)));

    if (t180 != 19) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x989 = INT16_MIN;
	int8_t x991 = INT8_MAX;
	static volatile uint16_t x992 = 0U;
	static volatile int64_t t181 = -370LL;

    t181 = (x989-(x990|(x991*x992)));

    if (t181 != 45116072040001LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x993 = INT16_MAX;
	int16_t x994 = 0;
	int8_t x995 = 46;
	int32_t t182 = 1144199;

    t182 = (x993-(x994|(x995*x996)));

    if (t182 != 38655) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x997 = UINT8_MAX;
	uint32_t x998 = UINT32_MAX;
	uint8_t x999 = 52U;
	int16_t x1000 = -1;
	volatile uint32_t t183 = 263592134U;

    t183 = (x997-(x998|(x999*x1000)));

    if (t183 != 256U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1001 = INT16_MIN;
	uint8_t x1002 = 3U;
	uint64_t x1003 = 295463338877LLU;
	volatile uint64_t t184 = 2471867661198390948LLU;

    t184 = (x1001-(x1002|(x1003*x1004)));

    if (t184 != 2363706678245LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1013 = -315;
	int16_t x1015 = -5;
	static int64_t x1016 = -1LL;
	int64_t t185 = 12977LL;

    t185 = (x1013-(x1014|(x1015*x1016)));

    if (t185 != 2147483328LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1017 = 2U;
	int8_t x1018 = 1;
	uint64_t x1019 = 55840456LLU;
	static uint64_t t186 = 911773LLU;

    t186 = (x1017-(x1018|(x1019*x1020)));

    if (t186 != 18446731357050825825LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1022 = INT32_MAX;
	int32_t x1023 = -1;
	volatile uint16_t x1024 = 1230U;
	volatile int64_t t187 = -9LL;

    t187 = (x1021-(x1022|(x1023*x1024)));

    if (t187 != -55734664675408LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1030 = INT16_MIN;
	static uint8_t x1031 = 62U;
	uint64_t t188 = 2930552725LLU;

    t188 = (x1029-(x1030|(x1031*x1032)));

    if (t188 != 32829LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1038 = INT32_MIN;
	static uint8_t x1039 = 1U;
	int64_t x1040 = INT64_MIN;

    t189 = (x1037-(x1038|(x1039*x1040)));

    if (t189 != 48190728923LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1045 = INT32_MIN;
	int16_t x1046 = -1;
	uint16_t x1047 = 1240U;
	int64_t x1048 = 96LL;

    t190 = (x1045-(x1046|(x1047*x1048)));

    if (t190 != -2147483647LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1049 = UINT32_MAX;
	uint16_t x1051 = 18U;
	volatile uint16_t x1052 = 602U;
	volatile uint64_t t191 = 55234851797003LLU;

    t191 = (x1049-(x1050|(x1051*x1052)));

    if (t191 != 4294967296LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x1054 = 18604637LLU;
	uint16_t x1056 = UINT16_MAX;
	uint64_t t192 = 6826724270369453LLU;

    t192 = (x1053-(x1054|(x1055*x1056)));

    if (t192 != 3228147045817598LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1057 = 18U;
	uint32_t x1059 = 92974392U;
	int16_t x1060 = INT16_MIN;

    t193 = (x1057-(x1058|(x1059*x1060)));

    if (t193 != 1453031443U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1061 = UINT64_MAX;
	static volatile int32_t x1062 = -1;
	uint64_t x1063 = 45461243157834LLU;
	uint64_t x1064 = UINT64_MAX;

    t194 = (x1061-(x1062|(x1063*x1064)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1069 = INT32_MAX;
	int64_t x1071 = -1439324422840LL;
	int64_t t195 = -1146LL;

    t195 = (x1069-(x1070|(x1071*x1072)));

    if (t195 != 2147483648LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1077 = 538U;
	static uint8_t x1078 = 4U;
	static int16_t x1079 = -1;
	uint32_t x1080 = UINT32_MAX;
	volatile uint32_t t196 = 26319090U;

    t196 = (x1077-(x1078|(x1079*x1080)));

    if (t196 != 533U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1085 = -1;
	int16_t x1087 = INT16_MIN;
	static uint64_t x1088 = UINT64_MAX;
	uint64_t t197 = 138285508864LLU;

    t197 = (x1085-(x1086|(x1087*x1088)));

    if (t197 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1090 = 9122808U;
	int8_t x1091 = 3;
	uint64_t x1092 = UINT64_MAX;
	static uint64_t t198 = 235734773058155LLU;

    t198 = (x1089-(x1090|(x1091*x1092)));

    if (t198 != 32770LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x1093 = INT8_MIN;
	uint16_t x1094 = UINT16_MAX;
	static int32_t x1095 = -31561589;
	uint32_t x1096 = 2U;

    t199 = (x1093-(x1094|(x1095*x1096)));

    if (t199 != 63111041U) { NG(); } else { ; }
	
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

