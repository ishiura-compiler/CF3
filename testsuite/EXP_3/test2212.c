
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

static volatile int8_t x10 = -1;
static int32_t x18 = 64534376;
int8_t x24 = 1;
static int64_t t9 = 9083928956442651LL;
volatile uint16_t x42 = UINT16_MAX;
static int64_t x43 = -3639795706339971LL;
int64_t x50 = INT64_MAX;
int64_t x53 = 3464986717LL;
static uint64_t x57 = UINT64_MAX;
uint8_t x58 = UINT8_MAX;
uint32_t x67 = 129131033U;
int16_t x69 = -3;
static uint64_t x73 = UINT64_MAX;
uint64_t x74 = 205374LLU;
int64_t x80 = INT64_MAX;
int64_t x89 = 13LL;
int16_t x91 = 4;
volatile uint64_t t23 = UINT64_MAX;
volatile int64_t x99 = INT64_MAX;
static int8_t x102 = INT8_MAX;
static int16_t x103 = INT16_MIN;
volatile int16_t x104 = INT16_MIN;
volatile int32_t t26 = -94577;
int32_t x111 = INT32_MAX;
static volatile int32_t t27 = -19918502;
uint32_t x113 = 7U;
volatile int8_t x118 = INT8_MAX;
uint64_t x124 = 32328LLU;
static volatile uint16_t x131 = 12U;
int32_t x138 = INT32_MAX;
static uint16_t x140 = 0U;
int32_t x144 = 6;
uint32_t x149 = 388158861U;
volatile int32_t x151 = -62874;
int32_t x152 = INT32_MIN;
int64_t x153 = 246610010LL;
int64_t x154 = INT64_MAX;
int64_t t38 = 303658439415201LL;
int8_t x162 = -10;
int8_t x164 = INT8_MIN;
int64_t x167 = -1LL;
uint8_t x168 = UINT8_MAX;
volatile int16_t x172 = INT16_MIN;
int8_t x179 = INT8_MIN;
static volatile int64_t t45 = 1LL;
static uint64_t x191 = 894749LLU;
int8_t x192 = -1;
uint32_t x194 = UINT32_MAX;
int32_t x201 = 16;
int8_t x204 = INT8_MIN;
int16_t x210 = 13269;
uint8_t x212 = 91U;
int64_t x216 = INT64_MAX;
int64_t x223 = INT64_MIN;
int8_t x228 = INT8_MIN;
int64_t x229 = -689115LL;
int16_t x233 = INT16_MIN;
int64_t x236 = INT64_MAX;
uint16_t x245 = UINT16_MAX;
volatile uint8_t x246 = UINT8_MAX;
static int64_t x249 = INT64_MAX;
uint64_t x255 = UINT64_MAX;
volatile uint32_t x259 = 4U;
int16_t x262 = INT16_MIN;
int32_t x263 = 0;
uint16_t x265 = UINT16_MAX;
int64_t x276 = -1LL;
uint64_t t67 = 3551194658865LLU;
static int16_t x277 = INT16_MAX;
uint8_t x280 = UINT8_MAX;
volatile int32_t t68 = -34039936;
uint64_t x282 = UINT64_MAX;
volatile uint8_t x295 = UINT8_MAX;
int16_t x316 = INT16_MAX;
volatile uint64_t t78 = UINT64_MAX;
static uint16_t x324 = 14U;
uint64_t t79 = 4055867LLU;
volatile int16_t x327 = INT16_MAX;
uint64_t x334 = UINT64_MAX;
int8_t x336 = 25;
uint8_t x337 = UINT8_MAX;
uint32_t x340 = 968U;
volatile int32_t x341 = INT32_MAX;
int32_t x345 = -886;
int8_t x347 = INT8_MAX;
uint32_t t85 = 18U;
int64_t x354 = INT64_MAX;
volatile uint64_t t90 = 5069530LLU;
static uint16_t x369 = 1875U;
int16_t x370 = -1;
static uint32_t x380 = UINT32_MAX;
volatile int64_t x383 = INT64_MIN;
int64_t t93 = -7078597437405134LL;
uint64_t x391 = 572138293LLU;
uint64_t x396 = 150639895151137LLU;
int8_t x401 = -1;
static volatile uint32_t t97 = 633200U;
volatile int32_t t101 = -45646;
int64_t x424 = -1LL;
uint8_t x436 = UINT8_MAX;
uint64_t x437 = 1072547187574529063LLU;
int8_t x439 = 1;
static uint64_t t106 = 1LLU;
int8_t x441 = INT8_MAX;
int8_t x444 = INT8_MIN;
uint8_t x449 = 1U;
int64_t x460 = INT64_MIN;
int8_t x465 = INT8_MIN;
int64_t x466 = -1LL;
uint16_t x471 = UINT16_MAX;
int16_t x472 = INT16_MAX;
volatile uint64_t x476 = 5LLU;
int64_t x487 = -308LL;
volatile uint64_t x488 = 4460297274236855715LLU;
volatile uint64_t t118 = 170388121830152955LLU;
uint16_t x495 = UINT16_MAX;
int16_t x503 = INT16_MIN;
static volatile int32_t t122 = -2;
int8_t x508 = INT8_MIN;
uint8_t x517 = 2U;
static uint32_t t128 = 2065170U;
int8_t x540 = -3;
int64_t t132 = 847021LL;
int16_t x549 = -339;
uint64_t t135 = 718648766LLU;
int16_t x558 = -1;
uint64_t x559 = UINT64_MAX;
volatile uint64_t t136 = 15333277360LLU;
int16_t x565 = 0;
static uint32_t x569 = 430224823U;
int32_t x571 = INT32_MAX;
int64_t t139 = -4287143352113LL;
int32_t x574 = INT32_MIN;
uint64_t x575 = UINT64_MAX;
static uint8_t x577 = 17U;
static int64_t x578 = -1LL;
int8_t x579 = -1;
volatile int64_t t141 = 8055LL;
volatile int32_t x591 = INT32_MIN;
int16_t x597 = -3;
static int32_t x599 = 68;
int64_t t147 = -201001283256LL;
static int8_t x607 = 4;
int64_t x613 = -1LL;
static uint64_t t150 = 239761040LLU;
int64_t t151 = -1347631105811190LL;
static uint16_t x629 = UINT16_MAX;
uint8_t x632 = 0U;
volatile uint32_t t156 = 1177U;
uint32_t t157 = 204488648U;
uint64_t x650 = UINT64_MAX;
int64_t x651 = 6017527LL;
volatile uint64_t t159 = 1081736LLU;
uint64_t x663 = 113873220959447LLU;
uint64_t t162 = 3323775208533304LLU;
uint16_t x665 = 19U;
static int16_t x682 = INT16_MAX;
int32_t x688 = -27;
uint32_t x692 = UINT32_MAX;
uint16_t x693 = 148U;
int32_t x704 = INT32_MIN;
static uint8_t x714 = 6U;
int32_t x715 = 31565;
int32_t x716 = INT32_MIN;
volatile int32_t x718 = -1;
static uint64_t t177 = 0LLU;
volatile uint64_t t178 = 16048684442411LLU;
static int64_t x730 = -1LL;
volatile uint64_t t181 = 382LLU;
static volatile uint32_t t182 = 1649988U;
uint16_t x745 = 3U;
static int64_t x746 = INT64_MIN;
int16_t x755 = -909;
int64_t t184 = 18614081422587LL;
int8_t x758 = 4;
int64_t x767 = -1LL;
int32_t x770 = -4027505;
volatile uint64_t t187 = UINT64_MAX;
int8_t x779 = -26;
int8_t x783 = INT8_MAX;
int32_t x791 = INT32_MAX;
uint16_t x793 = 1U;
int32_t x801 = -209;
uint8_t x803 = 0U;
uint8_t x804 = UINT8_MAX;
uint16_t x807 = 7U;
uint16_t x813 = 213U;
static int8_t x814 = INT8_MIN;
uint16_t x816 = 3U;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	uint64_t x2 = 1703030646LLU;
	int8_t x3 = -6;
	int64_t x4 = INT64_MAX;
	uint64_t t0 = 52967083913LLU;

    t0 = ((x1/x2)^(x3&x4));

    if (t0 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = UINT16_MAX;
	volatile uint64_t x6 = 937368164162LLU;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = UINT32_MAX;
	static uint64_t t1 = 4LLU;

    t1 = ((x5/x6)^(x7&x8));

    if (t1 != 4294934528LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	static uint64_t x11 = UINT64_MAX;
	uint64_t x12 = 47288156LLU;
	static volatile uint64_t t2 = 14998178162273LLU;

    t2 = ((x9/x10)^(x11&x12));

    if (t2 != 18446744073662263517LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x13 = 71786LLU;
	volatile uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	static int8_t x16 = INT8_MAX;
	uint64_t t3 = 25034341365750320LLU;

    t3 = ((x13/x14)^(x15&x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 697U;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = INT32_MIN;

    t4 = ((x17/x18)^(x19&x20));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int64_t x22 = -10390508LL;
	static uint8_t x23 = 61U;
	int64_t t5 = -29930273673LL;

    t5 = ((x21/x22)^(x23&x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 25732;
	int8_t x26 = INT8_MIN;
	static volatile uint64_t x27 = UINT64_MAX;
	volatile int64_t x28 = -3LL;
	static uint64_t t6 = 482968144501160LLU;

    t6 = ((x25/x26)^(x27&x28));

    if (t6 != 202LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -5629926497LL;
	volatile int8_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	static int64_t t7 = -17058070LL;

    t7 = ((x29/x30)^(x31&x32));

    if (t7 != -9223372031224849311LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	int8_t x34 = -1;
	int32_t x35 = 8;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -3251782;

    t8 = ((x33/x34)^(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = 8137;
	int64_t x39 = INT64_MIN;
	int32_t x40 = 50335;

    t9 = ((x37/x38)^(x39&x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	uint8_t x44 = UINT8_MAX;
	int64_t t10 = 20265LL;

    t10 = ((x41/x42)^(x43&x44));

    if (t10 != 124LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	uint64_t x46 = 142LLU;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 5603132804LLU;

    t11 = ((x45/x46)^(x47&x48));

    if (t11 != 306LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	volatile int16_t x51 = -1;
	int64_t x52 = -1LL;
	static int64_t t12 = -66796508LL;

    t12 = ((x49/x50)^(x51&x52));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x54 = INT64_MIN;
	volatile int16_t x55 = 53;
	int64_t x56 = -9457606526437LL;
	volatile int64_t t13 = -461480694933LL;

    t13 = ((x53/x54)^(x55&x56));

    if (t13 != 17LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x59 = INT32_MAX;
	int64_t x60 = -1LL;
	volatile uint64_t t14 = 316LLU;

    t14 = ((x57/x58)^(x59&x60));

    if (t14 != 72340174951874302LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int64_t x62 = 63665066LL;
	volatile int32_t x63 = INT32_MIN;
	int64_t x64 = -1LL;
	int64_t t15 = 55835088LL;

    t15 = ((x61/x62)^(x63&x64));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 1U;
	int8_t x66 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	uint32_t t16 = 288U;

    t16 = ((x65/x66)^(x67&x68));

    if (t16 != 129105920U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -616;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = 1;
	volatile int32_t t17 = -16118;

    t17 = ((x69/x70)^(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MAX;
	uint64_t t18 = 218LLU;

    t18 = ((x73/x74)^(x75&x76));

    if (t18 != 89820250307201LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	int32_t x79 = 291421337;
	static volatile int64_t t19 = -8102417LL;

    t19 = ((x77/x78)^(x79&x80));

    if (t19 != 291421337LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	int32_t x82 = 648;
	int16_t x83 = INT16_MAX;
	volatile int32_t x84 = -49;
	static volatile int32_t t20 = -31;

    t20 = ((x81/x82)^(x83&x84));

    if (t20 != -3337904) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	static volatile int32_t x86 = -13337;
	int32_t x87 = INT32_MIN;
	int16_t x88 = -1;
	static int32_t t21 = -15807;

    t21 = ((x85/x86)^(x87&x88));

    if (t21 != 2147483644) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x90 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	volatile int64_t t22 = 528992736129656LL;

    t22 = ((x89/x90)^(x91&x92));

    if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 0U;
	int32_t x94 = 3;
	static int16_t x95 = -1;
	static uint64_t x96 = UINT64_MAX;

    t23 = ((x93/x94)^(x95&x96));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	uint8_t x98 = 3U;
	static int32_t x100 = INT32_MIN;
	static int64_t t24 = -394497802357LL;

    t24 = ((x97/x98)^(x99&x100));

    if (t24 != -9223372034707292202LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 562U;
	int32_t t25 = -734939;

    t25 = ((x101/x102)^(x103&x104));

    if (t25 != -32764) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = 3125U;
	int8_t x107 = INT8_MAX;
	static uint8_t x108 = UINT8_MAX;

    t26 = ((x105/x106)^(x107&x108));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = -1054;
	int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MIN;

    t27 = ((x109/x110)^(x111&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = -87651LL;
	volatile int64_t x115 = INT64_MAX;
	static int32_t x116 = 3;
	int64_t t28 = -314262424477253LL;

    t28 = ((x113/x114)^(x115&x116));

    if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	uint64_t t29 = 13LLU;

    t29 = ((x117/x118)^(x119&x120));

    if (t29 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MIN;
	static volatile int64_t x123 = INT64_MIN;
	static volatile uint64_t t30 = 105455592842LLU;

    t30 = ((x121/x122)^(x123&x124));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MIN;
	static uint16_t x128 = 1U;
	volatile int64_t t31 = 2467639119804203LL;

    t31 = ((x125/x126)^(x127&x128));

    if (t31 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = 160;
	uint8_t x130 = 85U;
	int64_t x132 = INT64_MIN;
	int64_t t32 = -94525977LL;

    t32 = ((x129/x130)^(x131&x132));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	static volatile uint64_t x136 = 1794LLU;
	volatile uint64_t t33 = 28566487732562LLU;

    t33 = ((x133/x134)^(x135&x136));

    if (t33 != 1794LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	int32_t x139 = -1;
	int32_t t34 = -23;

    t34 = ((x137/x138)^(x139&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MIN;
	int64_t x142 = -989480799921428LL;
	static uint8_t x143 = 1U;
	int64_t t35 = 124123401110LL;

    t35 = ((x141/x142)^(x143&x144));

    if (t35 != 9321LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MAX;
	volatile uint32_t x148 = UINT32_MAX;
	static volatile int64_t t36 = 26808206439469510LL;

    t36 = ((x145/x146)^(x147&x148));

    if (t36 != 4278124286LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = INT16_MAX;
	uint32_t t37 = 100454U;

    t37 = ((x149/x150)^(x151&x152));

    if (t37 != 2147495494U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x155 = INT64_MAX;
	volatile int16_t x156 = INT16_MAX;

    t38 = ((x153/x154)^(x155&x156));

    if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	int32_t x158 = 80800;
	int16_t x159 = -167;
	static int32_t x160 = INT32_MAX;
	static volatile int32_t t39 = 4631;

    t39 = ((x157/x158)^(x159&x160));

    if (t39 != -2147457162) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 691658233795096LL;
	static volatile int64_t x163 = -41612483572357LL;
	int64_t t40 = -9031LL;

    t40 = ((x161/x162)^(x163&x164));

    if (t40 != 29958556121803LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 50445486U;
	int8_t x166 = 49;
	static volatile int64_t t41 = -66067724245240587LL;

    t41 = ((x165/x166)^(x167&x168));

    if (t41 != 1029508LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	int64_t t42 = 78478LL;

    t42 = ((x169/x170)^(x171&x172));

    if (t42 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MAX;
	int64_t x174 = -128449781LL;
	static int16_t x175 = INT16_MIN;
	volatile int64_t x176 = INT64_MAX;
	static volatile int64_t t43 = -298639360246211LL;

    t43 = ((x173/x174)^(x175&x176));

    if (t43 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	int64_t x178 = 1160009295470930LL;
	int64_t x180 = -787LL;
	int64_t t44 = -61LL;

    t44 = ((x177/x178)^(x179&x180));

    if (t44 != -896LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -3486LL;
	volatile int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -1;

    t45 = ((x181/x182)^(x183&x184));

    if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = 0U;
	static uint32_t x186 = 5U;
	uint8_t x187 = 4U;
	uint16_t x188 = UINT16_MAX;
	volatile uint32_t t46 = 15U;

    t46 = ((x185/x186)^(x187&x188));

    if (t46 != 4U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 494U;
	int64_t x190 = -1LL;
	uint64_t t47 = 16379746033304816LLU;

    t47 = ((x189/x190)^(x191&x192));

    if (t47 != 18446744073708656911LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	uint32_t x195 = 2962U;
	volatile int64_t x196 = INT64_MIN;
	static int64_t t48 = -1043107723425051656LL;

    t48 = ((x193/x194)^(x195&x196));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 44;
	static uint8_t x198 = UINT8_MAX;
	int32_t x199 = 30228;
	volatile int8_t x200 = INT8_MIN;
	static volatile int32_t t49 = 737202755;

    t49 = ((x197/x198)^(x199&x200));

    if (t49 != 30208) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 47U;
	uint64_t x203 = 106124338254LLU;
	uint64_t t50 = 91419353938058LLU;

    t50 = ((x201/x202)^(x203&x204));

    if (t50 != 106124338176LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	uint8_t x206 = 9U;
	uint32_t x207 = 6U;
	uint8_t x208 = 25U;
	volatile int64_t t51 = 1580430770153LL;

    t51 = ((x205/x206)^(x207&x208));

    if (t51 != -1024819115206086200LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int8_t x211 = INT8_MAX;
	int32_t t52 = 202;

    t52 = ((x209/x210)^(x211&x212));

    if (t52 != 91) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -14;
	volatile int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	static int64_t t53 = 4864530429LL;

    t53 = ((x213/x214)^(x215&x216));

    if (t53 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 154LLU;
	static int32_t x218 = INT32_MIN;
	volatile int64_t x219 = INT64_MIN;
	static int32_t x220 = INT32_MIN;
	volatile uint64_t t54 = 16506253421264429LLU;

    t54 = ((x217/x218)^(x219&x220));

    if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 50U;
	uint16_t x222 = UINT16_MAX;
	int16_t x224 = 81;
	volatile int64_t t55 = -1218410760865698LL;

    t55 = ((x221/x222)^(x223&x224));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	static int16_t x226 = -1;
	int64_t x227 = 10702LL;
	int64_t t56 = 1406555825035LL;

    t56 = ((x225/x226)^(x227&x228));

    if (t56 != 10625LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x230 = UINT64_MAX;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = -138580904655407880LL;
	volatile uint64_t t57 = 130845772857464380LLU;

    t57 = ((x229/x230)^(x231&x232));

    if (t57 != 18308163169054143616LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MIN;
	int16_t x235 = 2670;
	volatile int64_t t58 = -558721589380342LL;

    t58 = ((x233/x234)^(x235&x236));

    if (t58 != 2670LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	static int32_t x238 = -1;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 1112434;

    t59 = ((x237/x238)^(x239&x240));

    if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 0LLU;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = -39;
	int32_t x244 = INT32_MIN;
	uint64_t t60 = 215250306935LLU;

    t60 = ((x241/x242)^(x243&x244));

    if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x247 = INT64_MAX;
	uint16_t x248 = 0U;
	volatile int64_t t61 = -306698707810433LL;

    t61 = ((x245/x246)^(x247&x248));

    if (t61 != 257LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -517;
	uint8_t x251 = UINT8_MAX;
	static int8_t x252 = INT8_MIN;
	volatile int64_t t62 = 712080LL;

    t62 = ((x249/x250)^(x251&x252));

    if (t62 != -17840178020995825LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MIN;
	volatile int32_t x254 = -2350;
	int32_t x256 = -1549145;
	volatile uint64_t t63 = 38865594218684LLU;

    t63 = ((x253/x254)^(x255&x256));

    if (t63 != 18442819234546152842LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = UINT8_MAX;
	static int64_t x258 = -1LL;
	uint64_t x260 = 137LLU;
	static volatile uint64_t t64 = 5127974594894247LLU;

    t64 = ((x257/x258)^(x259&x260));

    if (t64 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	uint16_t x264 = UINT16_MAX;
	int32_t t65 = -61928;

    t65 = ((x261/x262)^(x263&x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x266 = -176;
	uint8_t x267 = 10U;
	volatile int8_t x268 = INT8_MIN;
	int32_t t66 = -3868;

    t66 = ((x265/x266)^(x267&x268));

    if (t66 != -372) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x273 = 64548LLU;
	int16_t x274 = INT16_MIN;
	static int16_t x275 = INT16_MIN;

    t67 = ((x273/x274)^(x275&x276));

    if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;

    t68 = ((x277/x278)^(x279&x280));

    if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x281 = 731542305545767LLU;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = 2463869730258556LL;
	uint64_t t69 = 104875693LLU;

    t69 = ((x281/x282)^(x283&x284));

    if (t69 != 2463869730258556LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x285 = INT8_MAX;
	volatile int16_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t x288 = -36;
	static int32_t t70 = -68756;

    t70 = ((x285/x286)^(x287&x288));

    if (t70 != -65443) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x289 = 28694LLU;
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = 1164934789LLU;
	volatile uint64_t t71 = 4255813056459228LLU;

    t71 = ((x289/x290)^(x291&x292));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x293 = 3570471957LL;
	int32_t x294 = -28941661;
	volatile int32_t x296 = INT32_MIN;
	int64_t t72 = 3605244LL;

    t72 = ((x293/x294)^(x295&x296));

    if (t72 != -123LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x297 = 26;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = 82U;
	static volatile int8_t x300 = -1;
	volatile uint32_t t73 = 66599737U;

    t73 = ((x297/x298)^(x299&x300));

    if (t73 != 82U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MIN;
	int32_t x303 = -1;
	volatile int32_t x304 = -84320272;
	uint32_t t74 = 15696059U;

    t74 = ((x301/x302)^(x303&x304));

    if (t74 != 4210647025U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x305 = -75433698;
	uint8_t x306 = 12U;
	uint32_t x307 = 4U;
	volatile int16_t x308 = -22;
	volatile uint32_t t75 = 113586094U;

    t75 = ((x305/x306)^(x307&x308));

    if (t75 != 4288681155U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x309 = 7;
	static uint8_t x310 = 20U;
	int64_t x311 = -1LL;
	static int16_t x312 = 0;
	int64_t t76 = -1236946LL;

    t76 = ((x309/x310)^(x311&x312));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = INT32_MAX;
	uint16_t x314 = 1U;
	int64_t x315 = INT64_MIN;
	int64_t t77 = -35570937196696441LL;

    t77 = ((x313/x314)^(x315&x316));

    if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x317 = 0LLU;
	int32_t x318 = INT32_MIN;
	int64_t x319 = -1LL;
	static int8_t x320 = -1;

    t78 = ((x317/x318)^(x319&x320));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x321 = INT8_MAX;
	volatile uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;

    t79 = ((x321/x322)^(x323&x324));

    if (t79 != 14LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = INT16_MIN;
	int64_t x328 = INT64_MAX;
	int64_t t80 = 9171LL;

    t80 = ((x325/x326)^(x327&x328));

    if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MAX;
	uint8_t x331 = 6U;
	int8_t x332 = INT8_MAX;
	int32_t t81 = -210829097;

    t81 = ((x329/x330)^(x331&x332));

    if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x333 = UINT64_MAX;
	int32_t x335 = INT32_MIN;
	volatile uint64_t t82 = 216562183554357LLU;

    t82 = ((x333/x334)^(x335&x336));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x338 = 894224;
	static uint8_t x339 = UINT8_MAX;
	static volatile uint32_t t83 = 949604U;

    t83 = ((x337/x338)^(x339&x340));

    if (t83 != 200U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x342 = -1;
	uint8_t x343 = 1U;
	volatile int32_t x344 = -1;
	static int32_t t84 = INT32_MIN;

    t84 = ((x341/x342)^(x343&x344));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x346 = UINT32_MAX;
	int8_t x348 = INT8_MIN;

    t85 = ((x345/x346)^(x347&x348));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x349 = 0;
	uint32_t x350 = 20673922U;
	uint8_t x351 = 5U;
	static int32_t x352 = INT32_MIN;
	static uint32_t t86 = 32359366U;

    t86 = ((x349/x350)^(x351&x352));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MAX;
	int8_t x355 = 54;
	volatile uint8_t x356 = UINT8_MAX;
	int64_t t87 = -122066LL;

    t87 = ((x353/x354)^(x355&x356));

    if (t87 != 54LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = 0;
	uint64_t x358 = 79975LLU;
	int16_t x359 = -731;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t88 = 28582297LLU;

    t88 = ((x357/x358)^(x359&x360));

    if (t88 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = INT16_MIN;
	static uint32_t x362 = 2995452U;
	uint8_t x363 = 63U;
	uint8_t x364 = UINT8_MAX;
	static uint32_t t89 = 1175657U;

    t89 = ((x361/x362)^(x363&x364));

    if (t89 != 1446U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	volatile int32_t x366 = 4169547;
	static volatile int32_t x367 = 0;
	uint64_t x368 = 33835934635821700LLU;

    t90 = ((x365/x366)^(x367&x368));

    if (t90 != 18446744073709551101LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x371 = INT16_MAX;
	int64_t x372 = INT64_MIN;
	volatile int64_t t91 = -39LL;

    t91 = ((x369/x370)^(x371&x372));

    if (t91 != -1875LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x377 = 905LLU;
	uint8_t x378 = 9U;
	int64_t x379 = INT64_MIN;
	volatile uint64_t t92 = 29412LLU;

    t92 = ((x377/x378)^(x379&x380));

    if (t92 != 100LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = INT32_MAX;
	volatile int8_t x382 = -58;
	int8_t x384 = INT8_MIN;

    t93 = ((x381/x382)^(x383&x384));

    if (t93 != 9223372036817750228LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x389 = 7070320U;
	int16_t x390 = -1;
	volatile int64_t x392 = -1LL;
	volatile uint64_t t94 = 2805760894674006300LLU;

    t94 = ((x389/x390)^(x391&x392));

    if (t94 != 572138293LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	volatile int32_t x395 = 138698;
	uint64_t t95 = 59998044214102LLU;

    t95 = ((x393/x394)^(x395&x396));

    if (t95 != 18446744073709551105LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x397 = UINT16_MAX;
	int8_t x398 = INT8_MIN;
	static int8_t x399 = -17;
	int16_t x400 = INT16_MAX;
	volatile int32_t t96 = -44773562;

    t96 = ((x397/x398)^(x399&x400));

    if (t96 != -32274) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x402 = UINT8_MAX;
	int32_t x403 = 500974469;
	uint32_t x404 = UINT32_MAX;

    t97 = ((x401/x402)^(x403&x404));

    if (t97 != 500974469U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x405 = UINT64_MAX;
	static uint32_t x406 = UINT32_MAX;
	int64_t x407 = -1LL;
	uint32_t x408 = 43642U;
	volatile uint64_t t98 = 32901690444766308LLU;

    t98 = ((x405/x406)^(x407&x408));

    if (t98 != 4295010939LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	static int16_t x412 = -1;
	volatile int32_t t99 = 821450;

    t99 = ((x409/x410)^(x411&x412));

    if (t99 != -384) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = UINT32_MAX;
	uint16_t x414 = UINT16_MAX;
	static int16_t x415 = 1;
	volatile uint8_t x416 = 0U;
	volatile uint32_t t100 = 772031909U;

    t100 = ((x413/x414)^(x415&x416));

    if (t100 != 65537U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MAX;
	int8_t x419 = -13;
	uint8_t x420 = UINT8_MAX;

    t101 = ((x417/x418)^(x419&x420));

    if (t101 != 243) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MIN;
	uint64_t x422 = 26753362229623LLU;
	int8_t x423 = 0;
	volatile uint64_t t102 = 466294186038641740LLU;

    t102 = ((x421/x422)^(x423&x424));

    if (t102 != 689511LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x425 = 985U;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = 109600687U;
	volatile uint32_t t103 = 59588U;

    t103 = ((x425/x426)^(x427&x428));

    if (t103 != 109576192U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x429 = 0;
	static uint16_t x430 = UINT16_MAX;
	int64_t x431 = INT64_MAX;
	static int32_t x432 = -6;
	volatile int64_t t104 = -870086LL;

    t104 = ((x429/x430)^(x431&x432));

    if (t104 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 160594U;
	static volatile int8_t x434 = INT8_MAX;
	int64_t x435 = -1LL;
	volatile int64_t t105 = 917164LL;

    t105 = ((x433/x434)^(x435&x436));

    if (t105 != 1039LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x438 = 839;
	static volatile uint16_t x440 = UINT16_MAX;

    t106 = ((x437/x438)^(x439&x440));

    if (t106 != 1278363751578698LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x442 = INT32_MAX;
	int64_t x443 = 74627365460010995LL;
	static int64_t t107 = -41251425389380LL;

    t107 = ((x441/x442)^(x443&x444));

    if (t107 != 74627365460010880LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = 3;
	int64_t x446 = INT64_MIN;
	volatile int64_t x447 = -1LL;
	volatile int64_t x448 = INT64_MAX;
	static volatile int64_t t108 = INT64_MAX;

    t108 = ((x445/x446)^(x447&x448));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x450 = 702287564;
	int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t109 = INT32_MIN;

    t109 = ((x449/x450)^(x451&x452));

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -1049LL;
	uint16_t x454 = UINT16_MAX;
	static int8_t x455 = INT8_MAX;
	int64_t x456 = 1331809262993046LL;
	static int64_t t110 = 943289LL;

    t110 = ((x453/x454)^(x455&x456));

    if (t110 != 22LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	uint64_t x459 = UINT64_MAX;
	volatile uint64_t t111 = 637069917326991LLU;

    t111 = ((x457/x458)^(x459&x460));

    if (t111 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x461 = 6U;
	uint32_t x462 = 218229663U;
	int8_t x463 = INT8_MAX;
	volatile int8_t x464 = -1;
	uint32_t t112 = 83482U;

    t112 = ((x461/x462)^(x463&x464));

    if (t112 != 127U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x467 = UINT64_MAX;
	uint64_t x468 = UINT64_MAX;
	static volatile uint64_t t113 = 234648LLU;

    t113 = ((x465/x466)^(x467&x468));

    if (t113 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x469 = INT16_MIN;
	static int16_t x470 = 164;
	int32_t t114 = -1125781;

    t114 = ((x469/x470)^(x471&x472));

    if (t114 != -32570) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = INT8_MIN;
	uint8_t x474 = 1U;
	int8_t x475 = -5;
	uint64_t t115 = 156892717634LLU;

    t115 = ((x473/x474)^(x475&x476));

    if (t115 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 12U;
	int16_t x478 = INT16_MAX;
	volatile int64_t x479 = -1549LL;
	int16_t x480 = -1;
	static int64_t t116 = -14817LL;

    t116 = ((x477/x478)^(x479&x480));

    if (t116 != -1549LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x481 = -1;
	int32_t x482 = INT32_MIN;
	int16_t x483 = -1;
	int16_t x484 = INT16_MIN;
	int32_t t117 = -13;

    t117 = ((x481/x482)^(x483&x484));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x485 = 8059U;
	int64_t x486 = INT64_MIN;

    t118 = ((x485/x486)^(x487&x488));

    if (t118 != 4460297274236855424LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = INT16_MIN;
	static int8_t x490 = INT8_MIN;
	uint8_t x491 = 59U;
	int16_t x492 = -1;
	volatile int32_t t119 = -767692;

    t119 = ((x489/x490)^(x491&x492));

    if (t119 != 315) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x493 = INT16_MIN;
	volatile uint32_t x494 = 1529847992U;
	uint16_t x496 = 76U;
	uint32_t t120 = 455063162U;

    t120 = ((x493/x494)^(x495&x496));

    if (t120 != 78U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = INT32_MIN;
	uint8_t x498 = 42U;
	int32_t x499 = 11672;
	static int16_t x500 = -1;
	int32_t t121 = -16;

    t121 = ((x497/x498)^(x499&x500));

    if (t121 != -51125595) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MIN;
	uint8_t x504 = UINT8_MAX;

    t122 = ((x501/x502)^(x503&x504));

    if (t122 != 16777216) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x505 = UINT32_MAX;
	volatile int16_t x506 = 212;
	int64_t x507 = INT64_MAX;
	int64_t t123 = 435872LL;

    t123 = ((x505/x506)^(x507&x508));

    if (t123 != 9223372036834516559LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = INT8_MIN;
	int8_t x510 = 26;
	int16_t x511 = INT16_MIN;
	int8_t x512 = 10;
	volatile int32_t t124 = 170;

    t124 = ((x509/x510)^(x511&x512));

    if (t124 != -4) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = -1LL;
	static uint8_t x514 = 2U;
	int16_t x515 = 0;
	int8_t x516 = -2;
	static int64_t t125 = 2690LL;

    t125 = ((x513/x514)^(x515&x516));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x518 = 31U;
	int8_t x519 = INT8_MAX;
	static uint64_t x520 = 1LLU;
	volatile uint64_t t126 = 1906159733751236LLU;

    t126 = ((x517/x518)^(x519&x520));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = INT64_MIN;
	int32_t x522 = INT32_MAX;
	static int64_t x523 = -1LL;
	int32_t x524 = INT32_MIN;
	volatile int64_t t127 = -5LL;

    t127 = ((x521/x522)^(x523&x524));

    if (t127 != 6442450942LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x525 = INT32_MIN;
	static int16_t x526 = 1044;
	uint32_t x527 = 26279130U;
	int8_t x528 = -1;

    t128 = ((x525/x526)^(x527&x528));

    if (t128 != 4268777514U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x529 = 1U;
	int32_t x530 = 887945518;
	volatile int8_t x531 = INT8_MIN;
	int8_t x532 = -1;
	int32_t t129 = -450898377;

    t129 = ((x529/x530)^(x531&x532));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x533 = -1;
	int16_t x534 = 3582;
	uint8_t x535 = 7U;
	uint32_t x536 = 1647072U;
	volatile uint32_t t130 = 2U;

    t130 = ((x533/x534)^(x535&x536));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x537 = INT32_MIN;
	uint8_t x538 = 84U;
	uint8_t x539 = UINT8_MAX;
	static int32_t t131 = 265388;

    t131 = ((x537/x538)^(x539&x540));

    if (t131 != -25565342) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = UINT8_MAX;
	int64_t x542 = -150035065LL;
	uint8_t x543 = UINT8_MAX;
	volatile int8_t x544 = 6;

    t132 = ((x541/x542)^(x543&x544));

    if (t132 != 6LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = 956;
	int64_t x546 = -1LL;
	int8_t x547 = INT8_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	uint64_t t133 = 17304405054272163LLU;

    t133 = ((x545/x546)^(x547&x548));

    if (t133 != 964LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x550 = -1;
	volatile int16_t x551 = 11455;
	int64_t x552 = -5346949999396LL;
	int64_t t134 = -6205103907153129LL;

    t134 = ((x549/x550)^(x551&x552));

    if (t134 != 1487LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x553 = 32;
	int8_t x554 = -1;
	uint32_t x555 = 6398U;
	uint64_t x556 = 270572LLU;

    t135 = ((x553/x554)^(x555&x556));

    if (t135 != 18446744073709551372LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = -1;
	int16_t x560 = INT16_MIN;

    t136 = ((x557/x558)^(x559&x560));

    if (t136 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = 0;
	int16_t x562 = INT16_MIN;
	uint16_t x563 = 6671U;
	uint32_t x564 = 3919475U;
	uint32_t t137 = 27171073U;

    t137 = ((x561/x562)^(x563&x564));

    if (t137 != 2563U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x566 = -375;
	int16_t x567 = 11907;
	static int16_t x568 = INT16_MIN;
	static int32_t t138 = -17;

    t138 = ((x565/x566)^(x567&x568));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x570 = UINT16_MAX;
	int64_t x572 = INT64_MAX;

    t139 = ((x569/x570)^(x571&x572));

    if (t139 != 2147477083LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = UINT16_MAX;
	uint64_t x576 = 22724332679261504LLU;
	volatile uint64_t t140 = 174641743880LLU;

    t140 = ((x573/x574)^(x575&x576));

    if (t140 != 22724332679261504LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x580 = INT16_MIN;

    t141 = ((x577/x578)^(x579&x580));

    if (t141 != 32751LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x581 = INT16_MAX;
	static uint64_t x582 = UINT64_MAX;
	static uint64_t x583 = 2LLU;
	static uint8_t x584 = 2U;
	static uint64_t t142 = 1865229LLU;

    t142 = ((x581/x582)^(x583&x584));

    if (t142 != 2LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x585 = INT8_MIN;
	volatile int32_t x586 = -49;
	volatile int8_t x587 = 0;
	uint16_t x588 = 2U;
	int32_t t143 = -661538;

    t143 = ((x585/x586)^(x587&x588));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = INT32_MIN;
	static int64_t x590 = -1LL;
	volatile int8_t x592 = INT8_MAX;
	volatile int64_t t144 = -761856283LL;

    t144 = ((x589/x590)^(x591&x592));

    if (t144 != 2147483648LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x593 = INT16_MIN;
	volatile int64_t x594 = 37494LL;
	volatile int32_t x595 = INT32_MIN;
	static uint64_t x596 = 110144638658514449LLU;
	uint64_t t145 = 8083671967988848603LLU;

    t145 = ((x593/x594)^(x595&x596));

    if (t145 != 110144638169382912LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x598 = 1U;
	static int32_t x600 = INT32_MIN;
	int32_t t146 = -5568;

    t146 = ((x597/x598)^(x599&x600));

    if (t146 != -3) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = 14U;
	int64_t x602 = -1LL;
	uint32_t x603 = 13695409U;
	uint8_t x604 = UINT8_MAX;

    t147 = ((x601/x602)^(x603&x604));

    if (t147 != -189LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x605 = UINT8_MAX;
	volatile int8_t x606 = INT8_MIN;
	int32_t x608 = INT32_MIN;
	int32_t t148 = -45798;

    t148 = ((x605/x606)^(x607&x608));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x609 = 0;
	uint32_t x610 = UINT32_MAX;
	volatile int64_t x611 = INT64_MAX;
	int64_t x612 = 699840933221702073LL;
	static volatile int64_t t149 = 536LL;

    t149 = ((x609/x610)^(x611&x612));

    if (t149 != 699840933221702073LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x614 = -180901LL;
	uint64_t x615 = UINT64_MAX;
	int32_t x616 = INT32_MIN;

    t150 = ((x613/x614)^(x615&x616));

    if (t150 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x617 = INT16_MIN;
	static int64_t x618 = -1LL;
	int16_t x619 = 6;
	int64_t x620 = -1LL;

    t151 = ((x617/x618)^(x619&x620));

    if (t151 != 32774LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x621 = INT16_MAX;
	uint32_t x622 = 479U;
	int32_t x623 = INT32_MAX;
	uint32_t x624 = 2674427U;
	uint32_t t152 = 252U;

    t152 = ((x621/x622)^(x623&x624));

    if (t152 != 2674367U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x625 = UINT64_MAX;
	int32_t x626 = INT32_MIN;
	static int64_t x627 = INT64_MIN;
	int16_t x628 = -56;
	volatile uint64_t t153 = 1311149326LLU;

    t153 = ((x625/x626)^(x627&x628));

    if (t153 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x630 = 1215131830107LLU;
	int64_t x631 = -41309804LL;
	volatile uint64_t t154 = 30804110LLU;

    t154 = ((x629/x630)^(x631&x632));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x633 = INT64_MIN;
	uint16_t x634 = 538U;
	volatile uint64_t x635 = 27933LLU;
	uint32_t x636 = 24328U;
	uint64_t t155 = 53346LLU;

    t155 = ((x633/x634)^(x635&x636));

    if (t155 != 18429600259514635056LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x637 = -1;
	uint32_t x638 = 14741915U;
	volatile uint16_t x639 = UINT16_MAX;
	volatile int16_t x640 = -1;

    t156 = ((x637/x638)^(x639&x640));

    if (t156 != 65244U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x641 = -15;
	int8_t x642 = INT8_MAX;
	uint32_t x643 = 7192493U;
	int16_t x644 = INT16_MAX;

    t157 = ((x641/x642)^(x643&x644));

    if (t157 != 16301U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x645 = 0;
	int32_t x646 = -1;
	int16_t x647 = INT16_MIN;
	int8_t x648 = 3;
	int32_t t158 = 9980;

    t158 = ((x645/x646)^(x647&x648));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x649 = -1LL;
	int64_t x652 = -325251805796LL;

    t159 = ((x649/x650)^(x651&x652));

    if (t159 != 5980565LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x653 = UINT16_MAX;
	int32_t x654 = -1;
	int16_t x655 = 183;
	int8_t x656 = INT8_MIN;
	int32_t t160 = -7578;

    t160 = ((x653/x654)^(x655&x656));

    if (t160 != -65407) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x657 = 51U;
	static int16_t x658 = 10712;
	volatile uint8_t x659 = 7U;
	int32_t x660 = INT32_MAX;
	volatile int32_t t161 = -45573876;

    t161 = ((x657/x658)^(x659&x660));

    if (t161 != 7) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x661 = 1U;
	uint16_t x662 = 60U;
	int16_t x664 = INT16_MIN;

    t162 = ((x661/x662)^(x663&x664));

    if (t162 != 113873220927488LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x666 = 1997631061867204133LLU;
	int8_t x667 = INT8_MIN;
	int8_t x668 = 10;
	volatile uint64_t t163 = 6501107557LLU;

    t163 = ((x665/x666)^(x667&x668));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x669 = 59U;
	int32_t x670 = INT32_MIN;
	int64_t x671 = INT64_MIN;
	volatile uint8_t x672 = 2U;
	volatile int64_t t164 = 18827509656LL;

    t164 = ((x669/x670)^(x671&x672));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	int16_t x674 = INT16_MAX;
	int32_t x675 = -1;
	int16_t x676 = 0;
	uint32_t t165 = 2U;

    t165 = ((x673/x674)^(x675&x676));

    if (t165 != 131076U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x677 = INT32_MIN;
	int8_t x678 = INT8_MIN;
	static volatile uint64_t x679 = UINT64_MAX;
	int8_t x680 = INT8_MIN;
	uint64_t t166 = 39LLU;

    t166 = ((x677/x678)^(x679&x680));

    if (t166 != 18446744073692774272LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x681 = 0;
	int64_t x683 = INT64_MAX;
	static int64_t x684 = INT64_MIN;
	volatile int64_t t167 = 616375187LL;

    t167 = ((x681/x682)^(x683&x684));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x685 = 1;
	int8_t x686 = INT8_MIN;
	volatile uint64_t x687 = UINT64_MAX;
	uint64_t t168 = 1875185LLU;

    t168 = ((x685/x686)^(x687&x688));

    if (t168 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint32_t x689 = UINT32_MAX;
	int64_t x690 = -333203LL;
	static int16_t x691 = INT16_MIN;
	static int64_t t169 = -3257868246093563590LL;

    t169 = ((x689/x690)^(x691&x692));

    if (t169 != -4294947417LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x694 = 56U;
	uint32_t x695 = 210827U;
	uint16_t x696 = 77U;
	volatile uint32_t t170 = 1793534U;

    t170 = ((x693/x694)^(x695&x696));

    if (t170 != 11U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x697 = 10;
	volatile int64_t x698 = 8273496LL;
	static volatile int16_t x699 = -451;
	volatile int8_t x700 = INT8_MAX;
	static int64_t t171 = -29660713000616LL;

    t171 = ((x697/x698)^(x699&x700));

    if (t171 != 61LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x701 = INT8_MIN;
	uint32_t x702 = UINT32_MAX;
	int32_t x703 = INT32_MAX;
	static volatile uint32_t t172 = 954U;

    t172 = ((x701/x702)^(x703&x704));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x705 = 1446372LL;
	uint32_t x706 = UINT32_MAX;
	static int8_t x707 = 1;
	static int64_t x708 = 4410309033LL;
	int64_t t173 = -118154LL;

    t173 = ((x705/x706)^(x707&x708));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x709 = INT64_MIN;
	uint16_t x710 = 23574U;
	volatile int32_t x711 = 2905;
	int16_t x712 = -1;
	int64_t t174 = -710211465LL;

    t174 = ((x709/x710)^(x711&x712));

    if (t174 != -391251889234522LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x713 = -1;
	static int32_t t175 = 16;

    t175 = ((x713/x714)^(x715&x716));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x717 = -1;
	static int16_t x719 = 1;
	uint16_t x720 = 1U;
	int32_t t176 = 1497;

    t176 = ((x717/x718)^(x719&x720));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x721 = UINT64_MAX;
	volatile int32_t x722 = 899;
	volatile int8_t x723 = INT8_MAX;
	int8_t x724 = -1;

    t177 = ((x721/x722)^(x723&x724));

    if (t177 != 20519181394560003LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x725 = INT8_MIN;
	static volatile uint64_t x726 = 408029748085149147LLU;
	uint8_t x727 = UINT8_MAX;
	int64_t x728 = INT64_MIN;

    t178 = ((x725/x726)^(x727&x728));

    if (t178 != 45LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = INT16_MIN;
	int32_t x731 = -35909662;
	volatile int8_t x732 = INT8_MIN;
	volatile int64_t t179 = 20211084997407LL;

    t179 = ((x729/x730)^(x731&x732));

    if (t179 != -35876992LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x733 = UINT64_MAX;
	uint32_t x734 = UINT32_MAX;
	uint32_t x735 = 4222U;
	int32_t x736 = -2417146;
	volatile uint64_t t180 = 52643LLU;

    t180 = ((x733/x734)^(x735&x736));

    if (t180 != 4294971399LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x738 = 2099137752099679670LLU;
	uint32_t x739 = UINT32_MAX;
	volatile uint8_t x740 = UINT8_MAX;

    t181 = ((x737/x738)^(x739&x740));

    if (t181 != 251LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x741 = INT8_MIN;
	static uint32_t x742 = UINT32_MAX;
	uint16_t x743 = 132U;
	static int32_t x744 = INT32_MIN;

    t182 = ((x741/x742)^(x743&x744));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x747 = INT64_MIN;
	uint64_t x748 = 7149LLU;
	static volatile uint64_t t183 = 1589757821135LLU;

    t183 = ((x745/x746)^(x747&x748));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x753 = UINT16_MAX;
	static int64_t x754 = 3394649655884LL;
	static int16_t x756 = INT16_MAX;

    t184 = ((x753/x754)^(x755&x756));

    if (t184 != 31859LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x757 = 96;
	uint16_t x759 = 2U;
	int8_t x760 = INT8_MIN;
	int32_t t185 = -17653927;

    t185 = ((x757/x758)^(x759&x760));

    if (t185 != 24) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x765 = 116702937LLU;
	volatile int16_t x766 = INT16_MIN;
	int8_t x768 = -1;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = ((x765/x766)^(x767&x768));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x769 = 6U;
	uint64_t x771 = UINT64_MAX;
	int64_t x772 = -1LL;

    t187 = ((x769/x770)^(x771&x772));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x773 = UINT32_MAX;
	int8_t x774 = INT8_MAX;
	uint64_t x775 = UINT64_MAX;
	int32_t x776 = 474201905;
	volatile uint64_t t188 = 326866062LLU;

    t188 = ((x773/x774)^(x775&x776));

    if (t188 != 508016417LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x777 = 7023LLU;
	volatile uint64_t x778 = UINT64_MAX;
	static volatile int16_t x780 = INT16_MAX;
	uint64_t t189 = 7462834070852LLU;

    t189 = ((x777/x778)^(x779&x780));

    if (t189 != 32742LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x781 = INT8_MAX;
	static volatile int16_t x782 = INT16_MAX;
	uint8_t x784 = 14U;
	int32_t t190 = -8202;

    t190 = ((x781/x782)^(x783&x784));

    if (t190 != 14) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x785 = INT8_MIN;
	int32_t x786 = INT32_MAX;
	int64_t x787 = -1LL;
	int64_t x788 = INT64_MIN;
	static int64_t t191 = INT64_MIN;

    t191 = ((x785/x786)^(x787&x788));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x789 = 28U;
	uint32_t x790 = 1640U;
	int64_t x792 = INT64_MAX;
	static volatile int64_t t192 = 1724225679897LL;

    t192 = ((x789/x790)^(x791&x792));

    if (t192 != 2147483647LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x794 = -1;
	static uint8_t x795 = UINT8_MAX;
	uint16_t x796 = UINT16_MAX;
	int32_t t193 = 31;

    t193 = ((x793/x794)^(x795&x796));

    if (t193 != -256) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x797 = 804214676069751LLU;
	uint8_t x798 = UINT8_MAX;
	uint16_t x799 = 823U;
	uint64_t x800 = 469097820191254078LLU;
	volatile uint64_t t194 = 14524LLU;

    t194 = ((x797/x798)^(x799&x800));

    if (t194 != 3153783043940LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x802 = INT64_MIN;
	volatile int64_t t195 = 1931408873755477LL;

    t195 = ((x801/x802)^(x803&x804));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x805 = 1U;
	int32_t x806 = 11082;
	int16_t x808 = -1;
	static int32_t t196 = 33;

    t196 = ((x805/x806)^(x807&x808));

    if (t196 != 7) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = 405912LL;
	volatile uint64_t x810 = 14191976533LLU;
	int32_t x811 = -113;
	static int8_t x812 = -1;
	uint64_t t197 = 201452LLU;

    t197 = ((x809/x810)^(x811&x812));

    if (t197 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x815 = INT8_MIN;
	int32_t t198 = 0;

    t198 = ((x813/x814)^(x815&x816));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x817 = 102683U;
	volatile int32_t x818 = INT32_MAX;
	int32_t x819 = -4183805;
	int16_t x820 = -1;
	static uint32_t t199 = 5239219U;

    t199 = ((x817/x818)^(x819&x820));

    if (t199 != 4290783491U) { NG(); } else { ; }
	
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

