
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

uint8_t x2 = UINT8_MAX;
static uint32_t x6 = 3U;
int32_t x10 = -6;
int16_t x14 = -35;
int64_t x16 = INT64_MAX;
static volatile int8_t x17 = INT8_MIN;
static int8_t x20 = -36;
static volatile int16_t x24 = -219;
int64_t t5 = -417846852403999LL;
int64_t x25 = INT64_MAX;
int16_t x28 = -1;
int32_t x29 = INT32_MAX;
int64_t x37 = INT64_MIN;
static uint64_t x41 = 18LLU;
volatile int64_t x52 = INT64_MIN;
volatile int8_t x53 = INT8_MIN;
int64_t x56 = -51639LL;
int16_t x61 = INT16_MAX;
uint8_t x62 = 7U;
uint64_t x63 = 6268144401644275LLU;
volatile uint64_t x64 = 16399368134468886LLU;
uint64_t t14 = 1LLU;
int16_t x84 = INT16_MIN;
uint8_t x85 = UINT8_MAX;
volatile int64_t x100 = -67200053480LL;
uint8_t x101 = 0U;
static int32_t x130 = INT32_MIN;
int8_t x134 = INT8_MAX;
int32_t x135 = INT32_MAX;
int8_t x138 = INT8_MIN;
int8_t x139 = INT8_MIN;
int64_t t27 = -232892333641LL;
uint32_t x146 = 2107985030U;
int64_t x150 = -1LL;
volatile uint64_t t31 = 90LLU;
uint8_t x157 = 15U;
uint64_t t32 = 414LLU;
volatile uint64_t x161 = 8558521811564307729LLU;
uint8_t x164 = 61U;
volatile int64_t x165 = -30907688LL;
static uint64_t t34 = 32575809408LLU;
static volatile uint8_t x169 = 127U;
int64_t x170 = INT64_MIN;
int32_t x171 = -594;
uint64_t x181 = 25896932360240LLU;
volatile uint64_t t38 = 96219LLU;
volatile uint64_t t40 = 10569957LLU;
int32_t x205 = -1;
uint64_t x206 = 2815717628LLU;
int8_t x208 = -63;
uint32_t x238 = UINT32_MAX;
int8_t x239 = 1;
uint64_t t44 = 4071072277401292LLU;
int64_t x246 = -1LL;
int16_t x249 = INT16_MIN;
static int8_t x252 = INT8_MAX;
int64_t x254 = -205LL;
int8_t x266 = -1;
int8_t x267 = INT8_MIN;
uint32_t x268 = 43478059U;
static uint16_t x277 = 6U;
int32_t x283 = INT32_MIN;
volatile uint64_t t55 = 42469546LLU;
static int16_t x290 = INT16_MIN;
int64_t x291 = INT64_MIN;
int64_t t56 = 217252632LL;
static int8_t x301 = -28;
static int16_t x307 = 3265;
uint32_t x309 = UINT32_MAX;
uint32_t x311 = UINT32_MAX;
int8_t x312 = INT8_MIN;
uint64_t t62 = 140135152616LLU;
volatile int64_t t65 = 14372223LL;
uint8_t x354 = 105U;
int16_t x356 = 1134;
int32_t x364 = 40;
volatile int32_t t67 = -7466;
static int64_t x368 = INT64_MIN;
static uint16_t x375 = UINT16_MAX;
uint64_t t72 = 251720435LLU;
static volatile int8_t x390 = INT8_MAX;
static uint64_t x400 = UINT64_MAX;
static int64_t x412 = INT64_MAX;
int64_t x413 = -1LL;
int32_t x429 = INT32_MAX;
static int32_t x430 = -1;
int64_t x438 = INT64_MIN;
volatile int64_t x439 = INT64_MIN;
static volatile int32_t x444 = INT32_MAX;
volatile uint8_t x448 = UINT8_MAX;
int64_t x451 = 240LL;
int64_t t87 = -3791951011803LL;
static uint32_t t88 = 0U;
static int32_t x466 = -603;
int64_t t89 = 31LL;
int64_t x481 = -1LL;
volatile int16_t x499 = INT16_MAX;
uint8_t x500 = UINT8_MAX;
static int8_t x501 = INT8_MIN;
int64_t x508 = INT64_MIN;
int8_t x513 = INT8_MIN;
volatile uint8_t x514 = UINT8_MAX;
uint64_t x515 = UINT64_MAX;
static int16_t x540 = -1;
static uint16_t x548 = UINT16_MAX;
volatile int8_t x552 = INT8_MAX;
volatile uint16_t x557 = UINT16_MAX;
int32_t x558 = -1;
uint8_t x564 = 110U;
volatile int16_t x565 = -5;
volatile int64_t x566 = -85165281203052LL;
uint8_t x567 = 2U;
int8_t x575 = 0;
int64_t x578 = INT64_MIN;
int64_t t112 = 76546505084LL;
volatile uint64_t t113 = 495433491LLU;
volatile uint64_t t115 = 3934LLU;
int8_t x594 = 61;
uint8_t x617 = 0U;
uint64_t x618 = UINT64_MAX;
int8_t x619 = INT8_MIN;
int8_t x624 = INT8_MAX;
int32_t x626 = 29;
volatile uint16_t x637 = 56U;
volatile uint64_t t125 = 2679453351LLU;
uint16_t x641 = 26U;
volatile uint32_t t127 = 43438730U;
volatile int16_t x652 = -11703;
static uint16_t x669 = 14372U;
int8_t x675 = INT8_MIN;
int64_t x676 = INT64_MIN;
int32_t x688 = -1;
int32_t t133 = 2;
int16_t x693 = -1;
int32_t x695 = -1;
uint16_t x696 = 7601U;
uint8_t x704 = 1U;
static volatile int32_t t139 = 7;
int64_t x727 = -1LL;
static int16_t x732 = -126;
volatile int16_t x742 = -26;
int32_t x744 = INT32_MIN;
volatile int32_t x751 = -1;
volatile int32_t t146 = -1463109;
uint64_t x759 = UINT64_MAX;
uint32_t x762 = UINT32_MAX;
static volatile int16_t x767 = INT16_MIN;
static uint8_t x774 = UINT8_MAX;
int32_t x783 = INT32_MAX;
static int8_t x785 = -23;
uint64_t x786 = 405322075LLU;
uint8_t x791 = 3U;
uint64_t x793 = UINT64_MAX;
static volatile uint64_t t156 = 288LLU;
volatile int8_t x799 = INT8_MIN;
static int16_t x802 = INT16_MAX;
int8_t x804 = 26;
uint32_t x811 = UINT32_MAX;
volatile uint64_t x813 = 15273663LLU;
uint32_t x814 = UINT32_MAX;
volatile uint16_t x820 = 52U;
static volatile int64_t t161 = 42831135336871LL;
static int16_t x825 = INT16_MAX;
int64_t t162 = -108228965LL;
int16_t x831 = INT16_MAX;
int8_t x832 = INT8_MIN;
volatile int64_t t163 = 19538561033LL;
int8_t x833 = 18;
int16_t x835 = -2218;
static uint8_t x847 = 66U;
uint32_t x856 = UINT32_MAX;
int32_t x863 = INT32_MIN;
uint64_t x865 = UINT64_MAX;
uint32_t x867 = 6695549U;
int64_t x868 = INT64_MIN;
uint64_t t172 = 103464651584LLU;
int64_t x874 = -1LL;
int16_t x876 = INT16_MIN;
int64_t t173 = 2992835LL;
uint8_t x880 = 4U;
uint8_t x883 = 0U;
static uint8_t x884 = 15U;
volatile uint32_t t175 = 1U;
int16_t x889 = 121;
int16_t x891 = INT16_MAX;
int8_t x894 = INT8_MAX;
int64_t t177 = 5452466015354191LL;
uint64_t t178 = 1428019LLU;
int16_t x905 = INT16_MIN;
static int64_t x907 = 27228440LL;
uint64_t x921 = 1LLU;
uint8_t x924 = 54U;
uint64_t t181 = 3162846LLU;
static int64_t t182 = 88215147460983LL;
uint64_t x930 = 197105635517013LLU;
volatile int64_t t186 = -121LL;
int32_t x948 = 41;
uint64_t t187 = 7165746LLU;
int32_t x957 = INT32_MAX;
uint8_t x962 = UINT8_MAX;
static uint64_t x965 = 6493329122474007LLU;
uint32_t x968 = 116U;
int32_t x977 = INT32_MAX;
static volatile int64_t t194 = 34136516003915LL;
int8_t x984 = -1;
static volatile int8_t x999 = 0;
int64_t x1001 = INT64_MIN;
int16_t x1012 = -26;


void f0(void) {
    	int64_t x1 = -2176697659651LL;
	static int64_t x3 = -240069272LL;
	int8_t x4 = -1;
	volatile int64_t t0 = 19713430442331458LL;

    t0 = ((x1-(x2-x3))/x4);

    if (t0 != 2176937729178LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MAX;
	volatile uint32_t x7 = 464U;
	int16_t x8 = -801;
	uint32_t t1 = 34228U;

    t1 = ((x5-(x6-x7))/x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 4259;
	volatile uint8_t x11 = 113U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 3LL;

    t2 = ((x9-(x10-x11))/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int64_t x15 = INT64_MIN;
	static volatile int64_t t3 = 1LL;

    t3 = ((x13-(x14-x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -35LL;
	static int32_t x19 = INT32_MIN;
	int64_t t4 = 3925368930738374LL;

    t4 = ((x17-(x18-x19))/x20);

    if (t4 != 59652326LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static volatile int8_t x22 = INT8_MIN;
	volatile int32_t x23 = -1;

    t5 = ((x21-(x22-x23))/x24);

    if (t5 != 42115854049565185LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -1;
	uint32_t x27 = 1016U;
	volatile int64_t t6 = -12298LL;

    t6 = ((x25-(x26-x27))/x28);

    if (t6 != -9223372032559809528LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 0U;
	static int64_t x32 = -1LL;
	uint64_t t7 = 1682LLU;

    t7 = ((x29-(x30-x31))/x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x38 = -38172140071LL;
	static int32_t x39 = -1;
	static int16_t x40 = INT16_MIN;
	static int64_t t8 = -123950995LL;

    t8 = ((x37-(x38-x39))/x40);

    if (t8 != 281474975545734LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = -1;
	int8_t x43 = -1;
	int16_t x44 = -1;
	uint64_t t9 = 255LLU;

    t9 = ((x41-(x42-x43))/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	static int32_t x51 = 3560;
	uint64_t t10 = 3658850278LLU;

    t10 = ((x49-(x50-x51))/x52);

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = -1;
	static volatile int8_t x55 = INT8_MIN;
	static int64_t t11 = 3765264491172LL;

    t11 = ((x53-(x54-x55))/x56);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = -1;
	uint64_t x58 = 303706460772LLU;
	static int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	static volatile uint64_t t12 = 0LLU;

    t12 = ((x57-(x58-x59))/x60);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t t13 = 2377351274475LLU;

    t13 = ((x61-(x62-x63))/x64);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = 14;
	volatile int64_t x66 = -1LL;
	volatile uint64_t x67 = 251323249LLU;
	static int32_t x68 = -1;

    t14 = ((x65-(x66-x67))/x68);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x73 = 1LLU;
	static int16_t x74 = INT16_MIN;
	int64_t x75 = -106620110LL;
	uint64_t x76 = 101148870186267LLU;
	uint64_t t15 = 1166416043241LLU;

    t15 = ((x73-(x74-x75))/x76);

    if (t15 != 182372LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x81 = 41U;
	int8_t x82 = -1;
	int64_t x83 = 11222625LL;
	int64_t t16 = -17365365226316LL;

    t16 = ((x81-(x82-x83))/x84);

    if (t16 != -342LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t17 = 1;

    t17 = ((x85-(x86-x87))/x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x97 = 35;
	uint8_t x98 = 0U;
	int16_t x99 = -1;
	volatile int64_t t18 = -645819281176013LL;

    t18 = ((x97-(x98-x99))/x100);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x102 = 0;
	int16_t x103 = INT16_MAX;
	volatile int16_t x104 = -1;
	int32_t t19 = -10;

    t19 = ((x101-(x102-x103))/x104);

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x105 = 71U;
	volatile int32_t x106 = 1812895;
	static int8_t x107 = -1;
	static int16_t x108 = INT16_MAX;
	int32_t t20 = -6162115;

    t20 = ((x105-(x106-x107))/x108);

    if (t20 != -55) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x109 = 100001512LLU;
	static int64_t x110 = 385769099908280786LL;
	int32_t x111 = INT32_MIN;
	int64_t x112 = -5LL;
	static uint64_t t21 = 22331338689LLU;

    t21 = ((x109-(x110-x111))/x112);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x117 = UINT32_MAX;
	int32_t x118 = -208969;
	static int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MIN;
	int64_t t22 = 1660419LL;

    t22 = ((x117-(x118-x119))/x120);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	int64_t x123 = -1LL;
	static int64_t x124 = 798LL;
	volatile int64_t t23 = 90LL;

    t23 = ((x121-(x122-x123))/x124);

    if (t23 != 2691082LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x125 = 5919;
	int8_t x126 = -1;
	volatile int64_t x127 = INT64_MIN;
	int64_t x128 = INT64_MAX;
	volatile int64_t t24 = -59749136LL;

    t24 = ((x125-(x126-x127))/x128);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x129 = -4047;
	int64_t x131 = -1LL;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t25 = 1876816783667LLU;

    t25 = ((x129-(x130-x131))/x132);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t26 = -14011597340869714LL;

    t26 = ((x133-(x134-x135))/x136);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x140 = -10;

    t27 = ((x137-(x138-x139))/x140);

    if (t27 != 922337203685477580LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x141 = 2U;
	uint8_t x142 = 0U;
	static int32_t x143 = -9175126;
	uint64_t x144 = 8693563983943772LLU;
	volatile uint64_t t28 = 1078901016229LLU;

    t28 = ((x141-(x142-x143))/x144);

    if (t28 != 2121LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x145 = INT16_MIN;
	uint64_t x147 = 762LLU;
	static int32_t x148 = 15869827;
	static volatile uint64_t t29 = 1781562LLU;

    t29 = ((x145-(x146-x147))/x148);

    if (t29 != 1162378397168LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x149 = UINT32_MAX;
	int8_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile int64_t t30 = 849381763569386309LL;

    t30 = ((x149-(x150-x151))/x152);

    if (t30 != -33554431LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x153 = INT16_MAX;
	int32_t x154 = -27;
	int32_t x155 = 57;
	volatile uint64_t x156 = 259061LLU;

    t31 = ((x153-(x154-x155))/x156);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x158 = UINT64_MAX;
	uint8_t x159 = 3U;
	int64_t x160 = INT64_MIN;

    t32 = ((x157-(x158-x159))/x160);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x162 = 115U;
	static int8_t x163 = INT8_MIN;
	uint64_t t33 = 190360975706LLU;

    t33 = ((x161-(x162-x163))/x164);

    if (t33 != 140303636255152581LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x166 = 2874211348LLU;
	volatile int16_t x167 = -4;
	static uint32_t x168 = 12842U;

    t34 = ((x165-(x166-x167))/x168);

    if (t34 != 1436438566485316LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x172 = 43508LLU;
	volatile uint64_t t35 = 5535096657612139LLU;

    t35 = ((x169-(x170-x171))/x172);

    if (t35 != 211992553940764LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x173 = 0;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 0U;
	volatile int8_t x176 = -1;
	volatile int32_t t36 = -11;

    t36 = ((x173-(x174-x175))/x176);

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x177 = 26U;
	static int8_t x178 = -4;
	volatile int8_t x179 = -59;
	int32_t x180 = 4127;
	int32_t t37 = -449972608;

    t37 = ((x177-(x178-x179))/x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x182 = 484443LLU;
	static int16_t x183 = -1;
	static int16_t x184 = -6;

    t38 = ((x181-(x182-x183))/x184);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x185 = 3U;
	static volatile int32_t x186 = 26038094;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t39 = -37515123;

    t39 = ((x185-(x186-x187))/x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = 19;
	static uint64_t x190 = 1391987407722LLU;
	uint64_t x191 = UINT64_MAX;
	uint32_t x192 = UINT32_MAX;

    t40 = ((x189-(x190-x191))/x192);

    if (t40 != 4294966972LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x193 = INT16_MIN;
	static uint32_t x194 = UINT32_MAX;
	int32_t x195 = -1;
	static int16_t x196 = -28;
	uint32_t t41 = 995500U;

    t41 = ((x193-(x194-x195))/x196);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x207 = UINT64_MAX;
	volatile uint64_t t42 = 1011284938769LLU;

    t42 = ((x205-(x206-x207))/x208);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MAX;
	int64_t x223 = -1LL;
	int16_t x224 = INT16_MIN;
	volatile int64_t t43 = 2569151636322LL;

    t43 = ((x221-(x222-x223))/x224);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	int8_t x240 = -1;

    t44 = ((x237-(x238-x239))/x240);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x241 = INT16_MIN;
	int8_t x242 = 7;
	int16_t x243 = -12991;
	static int16_t x244 = -1;
	volatile int32_t t45 = 1536867;

    t45 = ((x241-(x242-x243))/x244);

    if (t45 != 45766) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x245 = 2U;
	static volatile uint64_t x247 = 261590LLU;
	static int64_t x248 = -24361609LL;
	uint64_t t46 = 1109195180131051047LLU;

    t46 = ((x245-(x246-x247))/x248);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x250 = -1;
	int64_t x251 = -1LL;
	static int64_t t47 = 231434721LL;

    t47 = ((x249-(x250-x251))/x252);

    if (t47 != -258LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x253 = 325572468U;
	int8_t x255 = -32;
	int64_t x256 = -126844LL;
	static int64_t t48 = -201116948902LL;

    t48 = ((x253-(x254-x255))/x256);

    if (t48 != -2566LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MAX;
	volatile uint64_t x259 = 1731LLU;
	int16_t x260 = -1;
	volatile uint64_t t49 = 35937LLU;

    t49 = ((x257-(x258-x259))/x260);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x261 = -53;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t50 = 159215017425LLU;

    t50 = ((x261-(x262-x263))/x264);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x265 = 16;
	uint32_t t51 = 100790U;

    t51 = ((x265-(x266-x267))/x268);

    if (t51 != 98U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x273 = 37U;
	static int16_t x274 = -1;
	uint16_t x275 = 34U;
	uint16_t x276 = UINT16_MAX;
	int32_t t52 = 376;

    t52 = ((x273-(x274-x275))/x276);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x278 = -1LL;
	int16_t x279 = INT16_MIN;
	int8_t x280 = 3;
	volatile int64_t t53 = -7367LL;

    t53 = ((x277-(x278-x279))/x280);

    if (t53 != -10920LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int8_t x282 = INT8_MIN;
	uint8_t x284 = 18U;
	volatile uint32_t t54 = 42U;

    t54 = ((x281-(x282-x283))/x284);

    if (t54 != 119304654U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x285 = 158U;
	int16_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	static uint64_t x288 = 86877776LLU;

    t55 = ((x285-(x286-x287))/x288);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x289 = -1;
	int64_t x292 = INT64_MIN;

    t56 = ((x289-(x290-x291))/x292);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MAX;
	int8_t x300 = 3;
	static volatile int64_t t57 = -104LL;

    t57 = ((x297-(x298-x299))/x300);

    if (t57 != 3074457344186602837LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x302 = 1876U;
	int32_t x303 = -7824711;
	uint16_t x304 = 2U;
	uint32_t t58 = 66781U;

    t58 = ((x301-(x302-x303))/x304);

    if (t58 != 2143570340U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x305 = 14200LLU;
	static uint64_t x306 = UINT64_MAX;
	int16_t x308 = -31;
	uint64_t t59 = 111682601LLU;

    t59 = ((x305-(x306-x307))/x308);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x310 = -2031;
	static uint32_t t60 = 5557U;

    t60 = ((x309-(x310-x311))/x312);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x317 = INT8_MIN;
	static int16_t x318 = 1;
	static uint8_t x319 = 37U;
	static uint64_t x320 = 4755655686LLU;
	static uint64_t t61 = 3718915LLU;

    t61 = ((x317-(x318-x319))/x320);

    if (t61 != 3878906567LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x325 = 64375667U;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 19344LLU;
	uint64_t x328 = UINT64_MAX;

    t62 = ((x325-(x326-x327))/x328);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x329 = -1;
	uint8_t x330 = 26U;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MAX;
	static volatile int64_t t63 = 43387LL;

    t63 = ((x329-(x330-x331))/x332);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x337 = UINT64_MAX;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static int32_t x340 = INT32_MIN;
	static uint64_t t64 = 9LLU;

    t64 = ((x337-(x338-x339))/x340);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x341 = -386927;
	static uint16_t x342 = 180U;
	uint32_t x343 = 2058U;
	volatile int64_t x344 = INT64_MIN;

    t65 = ((x341-(x342-x343))/x344);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x353 = INT8_MAX;
	int32_t x355 = -1;
	volatile int32_t t66 = 1723928;

    t66 = ((x353-(x354-x355))/x356);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x361 = -1;
	static int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;

    t67 = ((x361-(x362-x363))/x364);

    if (t67 != 53687087) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x365 = -1LL;
	int64_t x366 = INT64_MIN;
	int64_t x367 = -11405592171202LL;
	int64_t t68 = -14208LL;

    t68 = ((x365-(x366-x367))/x368);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x369 = INT16_MIN;
	int64_t x370 = -398617LL;
	uint16_t x371 = 11U;
	uint64_t x372 = UINT64_MAX;
	uint64_t t69 = 17845LLU;

    t69 = ((x369-(x370-x371))/x372);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x373 = 2U;
	volatile int8_t x374 = INT8_MIN;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t70 = 85734165932760361LL;

    t70 = ((x373-(x374-x375))/x376);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x377 = INT32_MAX;
	static int64_t x378 = -25766517LL;
	uint8_t x379 = 3U;
	int8_t x380 = INT8_MAX;
	volatile int64_t t71 = -188953880009152433LL;

    t71 = ((x377-(x378-x379))/x380);

    if (t71 != 17112206LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x381 = INT32_MIN;
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = 474397LLU;
	int32_t x384 = 19934068;

    t72 = ((x381-(x382-x383))/x384);

    if (t72 != 925387837121LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x389 = 476209970U;
	static int64_t x391 = -321705LL;
	volatile int64_t x392 = INT64_MIN;
	int64_t t73 = 0LL;

    t73 = ((x389-(x390-x391))/x392);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = -16;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	uint64_t t74 = 5328698984073LLU;

    t74 = ((x397-(x398-x399))/x400);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	volatile uint16_t x402 = UINT16_MAX;
	static volatile int16_t x403 = 376;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t75 = 42671LL;

    t75 = ((x401-(x402-x403))/x404);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x409 = -2623;
	uint64_t x410 = 19074645LLU;
	static int16_t x411 = -1;
	volatile uint64_t t76 = 7378709640428095LLU;

    t76 = ((x409-(x410-x411))/x412);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x414 = UINT8_MAX;
	uint8_t x415 = UINT8_MAX;
	volatile int8_t x416 = -4;
	static int64_t t77 = -2558472217667401777LL;

    t77 = ((x413-(x414-x415))/x416);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	static int16_t x419 = -1;
	int8_t x420 = INT8_MIN;
	int64_t t78 = -1288752023398LL;

    t78 = ((x417-(x418-x419))/x420);

    if (t78 != 256LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x421 = INT32_MAX;
	static volatile int16_t x422 = -1;
	int32_t x423 = INT32_MIN;
	int64_t x424 = INT64_MAX;
	int64_t t79 = 0LL;

    t79 = ((x421-(x422-x423))/x424);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x425 = 1;
	int16_t x426 = -4615;
	volatile int8_t x427 = -1;
	static uint64_t x428 = 20907360070235877LLU;
	uint64_t t80 = 7438578720825757293LLU;

    t80 = ((x425-(x426-x427))/x428);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x431 = INT64_MIN;
	static int8_t x432 = -1;
	volatile int64_t t81 = -709LL;

    t81 = ((x429-(x430-x431))/x432);

    if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x433 = -1;
	int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	int32_t x436 = -53;
	int32_t t82 = -26778;

    t82 = ((x433-(x434-x435))/x436);

    if (t82 != 615) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x437 = 92LLU;
	uint64_t x440 = 41345866073101LLU;
	uint64_t t83 = 11534LLU;

    t83 = ((x437-(x438-x439))/x440);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x441 = 994;
	static int8_t x442 = INT8_MAX;
	int16_t x443 = INT16_MAX;
	volatile int32_t t84 = 2;

    t84 = ((x441-(x442-x443))/x444);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x445 = 2305U;
	int32_t x446 = INT32_MIN;
	static uint32_t x447 = 283U;
	volatile uint32_t t85 = 252U;

    t85 = ((x445-(x446-x447))/x448);

    if (t85 != 8421514U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x449 = -1;
	static uint8_t x450 = 0U;
	uint64_t x452 = 6129029714158414689LLU;
	static volatile uint64_t t86 = 2011196527LLU;

    t86 = ((x449-(x450-x451))/x452);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x453 = INT8_MAX;
	int64_t x454 = -1LL;
	int8_t x455 = INT8_MAX;
	int64_t x456 = INT64_MIN;

    t87 = ((x453-(x454-x455))/x456);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x461 = -1;
	uint32_t x462 = 1640583U;
	volatile int32_t x463 = 32601979;
	int8_t x464 = -1;

    t88 = ((x461-(x462-x463))/x464);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x465 = UINT8_MAX;
	int64_t x467 = INT64_MIN;
	volatile int64_t x468 = 19LL;

    t89 = ((x465-(x466-x467))/x468);

    if (t89 != -485440633518672365LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x469 = -1;
	int64_t x470 = 580057LL;
	int16_t x471 = -1;
	uint32_t x472 = 955U;
	volatile int64_t t90 = 402217861LL;

    t90 = ((x469-(x470-x471))/x472);

    if (t90 != -607LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x473 = UINT16_MAX;
	int32_t x474 = 13283048;
	int32_t x475 = -36;
	int32_t x476 = INT32_MIN;
	volatile int32_t t91 = 5441739;

    t91 = ((x473-(x474-x475))/x476);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x477 = INT8_MIN;
	uint32_t x478 = UINT32_MAX;
	volatile int64_t x479 = -7854LL;
	int16_t x480 = -21;
	int64_t t92 = 124978181847819783LL;

    t92 = ((x477-(x478-x479))/x480);

    if (t92 != 204522632LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x482 = -1;
	int64_t x483 = -13995348919579LL;
	static uint32_t x484 = 56295U;
	static int64_t t93 = -2948LL;

    t93 = ((x481-(x482-x483))/x484);

    if (t93 != -248607317LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x489 = -9;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	volatile int16_t x492 = INT16_MAX;
	int32_t t94 = 79736;

    t94 = ((x489-(x490-x491))/x492);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x493 = 200404LLU;
	int64_t x494 = INT64_MIN;
	uint64_t x495 = 2482163698513145378LLU;
	static int32_t x496 = -1;
	uint64_t t95 = 2071331106390LLU;

    t95 = ((x493-(x494-x495))/x496);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x497 = INT8_MIN;
	static int16_t x498 = INT16_MIN;
	int32_t t96 = -52;

    t96 = ((x497-(x498-x499))/x500);

    if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x502 = 1;
	uint8_t x503 = 7U;
	static uint8_t x504 = 9U;
	volatile int32_t t97 = -237;

    t97 = ((x501-(x502-x503))/x504);

    if (t97 != -13) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x505 = 34957096U;
	static int8_t x506 = INT8_MAX;
	static uint32_t x507 = 0U;
	static int64_t t98 = 1081336LL;

    t98 = ((x505-(x506-x507))/x508);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x509 = UINT32_MAX;
	static volatile uint64_t x510 = 1LLU;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = 11778868851975LLU;
	uint64_t t99 = 1711545315071LLU;

    t99 = ((x509-(x510-x511))/x512);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x516 = 7723232495000LLU;
	volatile uint64_t t100 = 3962664LLU;

    t100 = ((x513-(x514-x515))/x516);

    if (t100 != 2388474LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x521 = -1LL;
	volatile int32_t x522 = 0;
	uint8_t x523 = 13U;
	int16_t x524 = -1;
	static int64_t t101 = -6LL;

    t101 = ((x521-(x522-x523))/x524);

    if (t101 != -12LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x537 = -332746;
	int64_t x538 = INT64_MIN;
	volatile int32_t x539 = INT32_MIN;
	volatile int64_t t102 = -2264326285LL;

    t102 = ((x537-(x538-x539))/x540);

    if (t102 != -9223372034706959414LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MAX;
	volatile int64_t x543 = INT64_MAX;
	int32_t x544 = INT32_MAX;
	int64_t t103 = -8324001020849420LL;

    t103 = ((x541-(x542-x543))/x544);

    if (t103 != 4294967297LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x545 = INT8_MIN;
	volatile int8_t x546 = INT8_MAX;
	static uint32_t x547 = 681766U;
	uint32_t t104 = 43U;

    t104 = ((x545-(x546-x547))/x548);

    if (t104 != 10U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x549 = 117154LLU;
	uint32_t x550 = 297U;
	static int8_t x551 = INT8_MIN;
	uint64_t t105 = 10188577022LLU;

    t105 = ((x549-(x550-x551))/x552);

    if (t105 != 919LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x553 = INT32_MIN;
	int8_t x554 = -2;
	int8_t x555 = -1;
	static int64_t x556 = -1LL;
	int64_t t106 = -1LL;

    t106 = ((x553-(x554-x555))/x556);

    if (t106 != 2147483647LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x559 = INT16_MIN;
	static int16_t x560 = 434;
	volatile int32_t t107 = -117874580;

    t107 = ((x557-(x558-x559))/x560);

    if (t107 != 75) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x561 = -30;
	int64_t x562 = 3479313LL;
	int32_t x563 = INT32_MIN;
	volatile int64_t t108 = 719459921959515LL;

    t108 = ((x561-(x562-x563))/x564);

    if (t108 != -19554209LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x568 = 3U;
	volatile int64_t t109 = 2LL;

    t109 = ((x565-(x566-x567))/x568);

    if (t109 != 28388427067683LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x569 = INT32_MIN;
	volatile uint64_t x570 = 6842922812381495LLU;
	uint16_t x571 = 13607U;
	int8_t x572 = -2;
	volatile uint64_t t110 = 7LLU;

    t110 = ((x569-(x570-x571))/x572);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x573 = UINT32_MAX;
	static uint8_t x574 = 1U;
	int64_t x576 = -1LL;
	static int64_t t111 = 163768512150164LL;

    t111 = ((x573-(x574-x575))/x576);

    if (t111 != -4294967294LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x577 = -1;
	static int8_t x579 = INT8_MIN;
	uint32_t x580 = 44U;

    t112 = ((x577-(x578-x579))/x580);

    if (t112 != 209622091746699447LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x581 = -1LL;
	uint16_t x582 = 8U;
	int32_t x583 = -200;
	uint64_t x584 = UINT64_MAX;

    t113 = ((x581-(x582-x583))/x584);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x585 = UINT16_MAX;
	uint8_t x586 = UINT8_MAX;
	int16_t x587 = 216;
	uint16_t x588 = 2U;
	volatile int32_t t114 = -42960899;

    t114 = ((x585-(x586-x587))/x588);

    if (t114 != 32748) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x589 = UINT64_MAX;
	volatile int64_t x590 = -1922731275838LL;
	int8_t x591 = INT8_MAX;
	volatile uint32_t x592 = UINT32_MAX;

    t115 = ((x589-(x590-x591))/x592);

    if (t115 != 447LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x593 = INT8_MIN;
	volatile uint64_t x595 = 1200838777370519LLU;
	uint16_t x596 = 4541U;
	uint64_t t116 = 13996LLU;

    t116 = ((x593-(x594-x595))/x596);

    if (t116 != 264443685833LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x601 = INT8_MIN;
	volatile int16_t x602 = 2019;
	static int16_t x603 = INT16_MAX;
	int16_t x604 = INT16_MAX;
	volatile int32_t t117 = 6;

    t117 = ((x601-(x602-x603))/x604);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x605 = -1;
	int64_t x606 = -1LL;
	uint32_t x607 = 3066800U;
	int8_t x608 = INT8_MIN;
	volatile int64_t t118 = 685LL;

    t118 = ((x605-(x606-x607))/x608);

    if (t118 != -23959LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x609 = 9708844U;
	uint32_t x610 = 3043316U;
	static int16_t x611 = -1;
	int64_t x612 = -1LL;
	int64_t t119 = 29512569LL;

    t119 = ((x609-(x610-x611))/x612);

    if (t119 != -6665527LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x613 = -1LL;
	volatile int16_t x614 = INT16_MIN;
	volatile int16_t x615 = -1;
	int64_t x616 = -1LL;
	int64_t t120 = 1824797LL;

    t120 = ((x613-(x614-x615))/x616);

    if (t120 != -32766LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x620 = INT32_MAX;
	uint64_t t121 = 107354208LLU;

    t121 = ((x617-(x618-x619))/x620);

    if (t121 != 8589934595LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x621 = INT8_MAX;
	static int8_t x622 = -1;
	int16_t x623 = INT16_MAX;
	static int32_t t122 = 351000;

    t122 = ((x621-(x622-x623))/x624);

    if (t122 != 259) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x625 = INT16_MAX;
	volatile int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t123 = 509815757;

    t123 = ((x625-(x626-x627))/x628);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x633 = -1;
	int64_t x634 = 22516146LL;
	static volatile int32_t x635 = -21588;
	int32_t x636 = INT32_MAX;
	int64_t t124 = -994842449916915LL;

    t124 = ((x633-(x634-x635))/x636);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x638 = INT8_MIN;
	uint64_t x639 = 995228LLU;
	int32_t x640 = 1;

    t125 = ((x637-(x638-x639))/x640);

    if (t125 != 995412LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x642 = 227933800U;
	volatile int16_t x643 = 1;
	uint8_t x644 = UINT8_MAX;
	volatile uint32_t t126 = 4901U;

    t126 = ((x641-(x642-x643))/x644);

    if (t126 != 15949151U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x645 = INT8_MIN;
	uint16_t x646 = 79U;
	int32_t x647 = -1;
	uint32_t x648 = 686341451U;

    t127 = ((x645-(x646-x647))/x648);

    if (t127 != 6U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x649 = 73U;
	int8_t x650 = INT8_MIN;
	static int16_t x651 = INT16_MAX;
	volatile int32_t t128 = -412806597;

    t128 = ((x649-(x650-x651))/x652);

    if (t128 != -2) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x661 = 4;
	uint64_t x662 = 371306721874624LLU;
	int32_t x663 = -376;
	volatile uint32_t x664 = UINT32_MAX;
	uint64_t t129 = 55979583LLU;

    t129 = ((x661-(x662-x663))/x664);

    if (t129 != 4294880845LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x670 = INT8_MAX;
	uint8_t x671 = 9U;
	int16_t x672 = INT16_MIN;
	static int32_t t130 = -143846738;

    t130 = ((x669-(x670-x671))/x672);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x673 = UINT32_MAX;
	int16_t x674 = INT16_MAX;
	static int64_t t131 = 580312500193584511LL;

    t131 = ((x673-(x674-x675))/x676);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x677 = -4185527LL;
	static volatile int16_t x678 = -1;
	int32_t x679 = 28;
	uint16_t x680 = 683U;
	volatile int64_t t132 = 38045515768LL;

    t132 = ((x677-(x678-x679))/x680);

    if (t132 != -6128LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x685 = 68;
	volatile int16_t x686 = INT16_MAX;
	int32_t x687 = -8380;

    t133 = ((x685-(x686-x687))/x688);

    if (t133 != 41079) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x689 = -1;
	int8_t x690 = 7;
	static int64_t x691 = INT64_MAX;
	static int64_t x692 = 100673164009LL;
	volatile int64_t t134 = 3LL;

    t134 = ((x689-(x690-x691))/x692);

    if (t134 != 91616987LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x694 = 2220187U;
	static uint32_t t135 = 0U;

    t135 = ((x693-(x694-x695))/x696);

    if (t135 != 564760U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x701 = INT32_MIN;
	static int64_t x702 = -1LL;
	int32_t x703 = INT32_MIN;
	volatile int64_t t136 = -1LL;

    t136 = ((x701-(x702-x703))/x704);

    if (t136 != -4294967295LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x705 = -1476357;
	static int32_t x706 = -1;
	uint64_t x707 = 526195LLU;
	int32_t x708 = INT32_MAX;
	uint64_t t137 = 7805LLU;

    t137 = ((x705-(x706-x707))/x708);

    if (t137 != 8589934595LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x713 = -7777;
	int32_t x714 = -15;
	int32_t x715 = -1;
	volatile int32_t x716 = INT32_MIN;
	volatile int32_t t138 = -357418;

    t138 = ((x713-(x714-x715))/x716);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x721 = -1;
	uint16_t x722 = UINT16_MAX;
	int16_t x723 = -1;
	uint16_t x724 = UINT16_MAX;

    t139 = ((x721-(x722-x723))/x724);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x725 = INT8_MIN;
	volatile int16_t x726 = 27;
	static int32_t x728 = INT32_MIN;
	volatile int64_t t140 = -63LL;

    t140 = ((x725-(x726-x727))/x728);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x729 = UINT8_MAX;
	int64_t x730 = -14387199558420LL;
	int32_t x731 = INT32_MIN;
	volatile int64_t t141 = 257980381197LL;

    t141 = ((x729-(x730-x731))/x732);

    if (t141 != -114167079960LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x737 = INT16_MIN;
	uint8_t x738 = UINT8_MAX;
	uint64_t x739 = 994265924863174604LLU;
	uint16_t x740 = 5141U;
	uint64_t t142 = 68908972941050854LLU;

    t142 = ((x737-(x738-x739))/x740);

    if (t142 != 193399324034845LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x741 = 7U;
	int16_t x743 = INT16_MIN;
	volatile int32_t t143 = 719525;

    t143 = ((x741-(x742-x743))/x744);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x745 = 382U;
	uint64_t x746 = 24LLU;
	int8_t x747 = INT8_MAX;
	static int32_t x748 = INT32_MIN;
	uint64_t t144 = 2546LLU;

    t144 = ((x745-(x746-x747))/x748);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x749 = INT64_MIN;
	int64_t x750 = INT64_MIN;
	static uint16_t x752 = UINT16_MAX;
	static int64_t t145 = -164055971290657234LL;

    t145 = ((x749-(x750-x751))/x752);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x753 = UINT16_MAX;
	static int16_t x754 = 8031;
	uint16_t x755 = 489U;
	static uint16_t x756 = 1709U;

    t146 = ((x753-(x754-x755))/x756);

    if (t146 != 33) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x757 = INT8_MAX;
	volatile int32_t x758 = INT32_MAX;
	uint64_t x760 = 119760LLU;
	volatile uint64_t t147 = 1330LLU;

    t147 = ((x757-(x758-x759))/x760);

    if (t147 != 154030929121259LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x761 = -50;
	int64_t x763 = 104343LL;
	static uint32_t x764 = 84507U;
	int64_t t148 = 35367486416717685LL;

    t148 = ((x761-(x762-x763))/x764);

    if (t148 != -50822LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x765 = 3;
	uint8_t x766 = UINT8_MAX;
	volatile uint64_t x768 = UINT64_MAX;
	volatile uint64_t t149 = 10967095LLU;

    t149 = ((x765-(x766-x767))/x768);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x769 = UINT32_MAX;
	static uint32_t x770 = 263U;
	int32_t x771 = INT32_MIN;
	int8_t x772 = 30;
	uint32_t t150 = 166U;

    t150 = ((x769-(x770-x771))/x772);

    if (t150 != 71582779U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x773 = INT32_MIN;
	uint32_t x775 = UINT32_MAX;
	int32_t x776 = 134;
	uint32_t t151 = 0U;

    t151 = ((x773-(x774-x775))/x776);

    if (t151 != 16025995U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x777 = 913U;
	volatile uint32_t x778 = UINT32_MAX;
	uint64_t x779 = 3LLU;
	int16_t x780 = INT16_MIN;
	volatile uint64_t t152 = 1514494LLU;

    t152 = ((x777-(x778-x779))/x780);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x781 = 3U;
	uint8_t x782 = 6U;
	int64_t x784 = -79300956203LL;
	static volatile int64_t t153 = -331237396654343595LL;

    t153 = ((x781-(x782-x783))/x784);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x787 = -227;
	int64_t x788 = INT64_MIN;
	static volatile uint64_t t154 = 2082814389557088LLU;

    t154 = ((x785-(x786-x787))/x788);

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x789 = 37U;
	int32_t x790 = -1;
	int64_t x792 = -1LL;
	static volatile int64_t t155 = -6338179263084823LL;

    t155 = ((x789-(x790-x791))/x792);

    if (t155 != -41LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x794 = 2291681290146246LLU;
	volatile uint32_t x795 = 1563U;
	volatile int32_t x796 = INT32_MAX;

    t156 = ((x793-(x794-x795))/x796);

    if (t156 != 8588867448LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x797 = -1LL;
	static int32_t x798 = 116;
	int64_t x800 = -1LL;
	int64_t t157 = -4779LL;

    t157 = ((x797-(x798-x799))/x800);

    if (t157 != 245LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x801 = -1882;
	static volatile int64_t x803 = -847350735142170850LL;
	volatile int64_t t158 = -6528602588869149LL;

    t158 = ((x801-(x802-x803))/x804);

    if (t158 != -32590412890084826LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x809 = 74U;
	volatile int8_t x810 = INT8_MIN;
	int16_t x812 = INT16_MAX;
	static volatile uint32_t t159 = 28141U;

    t159 = ((x809-(x810-x811))/x812);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x815 = -1;
	int64_t x816 = -1LL;
	volatile uint64_t t160 = 182693LLU;

    t160 = ((x813-(x814-x815))/x816);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x817 = -1;
	static int16_t x818 = INT16_MAX;
	static int64_t x819 = -62LL;

    t161 = ((x817-(x818-x819))/x820);

    if (t161 != -631LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x826 = -1;
	static volatile int64_t x827 = INT64_MIN;
	int64_t x828 = 1089579812LL;

    t162 = ((x825-(x826-x827))/x828);

    if (t162 != -8465072439LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x829 = -1LL;
	volatile int64_t x830 = INT64_MAX;

    t163 = ((x829-(x830-x831))/x832);

    if (t163 != 72057594037927680LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x834 = 58642999;
	int16_t x836 = -1;
	volatile int32_t t164 = -388246;

    t164 = ((x833-(x834-x835))/x836);

    if (t164 != 58645199) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x837 = INT32_MIN;
	int64_t x838 = INT64_MIN;
	int64_t x839 = INT64_MIN;
	int32_t x840 = 1552;
	volatile int64_t t165 = -145222079033LL;

    t165 = ((x837-(x838-x839))/x840);

    if (t165 != -1383687LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x841 = 7274567926LL;
	volatile int16_t x842 = -822;
	uint16_t x843 = UINT16_MAX;
	int32_t x844 = -31233642;
	int64_t t166 = 638511031LL;

    t166 = ((x841-(x842-x843))/x844);

    if (t166 != -232LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x845 = UINT16_MAX;
	static uint32_t x846 = UINT32_MAX;
	volatile int16_t x848 = INT16_MAX;
	volatile uint32_t t167 = 943492682U;

    t167 = ((x845-(x846-x847))/x848);

    if (t167 != 2U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x849 = UINT8_MAX;
	uint64_t x850 = UINT64_MAX;
	int64_t x851 = INT64_MIN;
	int16_t x852 = -1;
	uint64_t t168 = 26070604LLU;

    t168 = ((x849-(x850-x851))/x852);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x853 = 189144975U;
	volatile int8_t x854 = -1;
	uint32_t x855 = UINT32_MAX;
	volatile uint32_t t169 = 17820U;

    t169 = ((x853-(x854-x855))/x856);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x857 = -1;
	static int8_t x858 = -24;
	int64_t x859 = INT64_MIN;
	int16_t x860 = -1;
	static volatile int64_t t170 = -14LL;

    t170 = ((x857-(x858-x859))/x860);

    if (t170 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x861 = 26;
	int16_t x862 = INT16_MIN;
	int32_t x864 = -831797617;
	int32_t t171 = -1;

    t171 = ((x861-(x862-x863))/x864);

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x866 = INT8_MAX;

    t172 = ((x865-(x866-x867))/x868);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x873 = UINT32_MAX;
	int16_t x875 = INT16_MIN;

    t173 = ((x873-(x874-x875))/x876);

    if (t173 != -131071LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x877 = 2689U;
	int16_t x878 = -10;
	static int32_t x879 = -1;
	int32_t t174 = -800979;

    t174 = ((x877-(x878-x879))/x880);

    if (t174 != 674) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x881 = 3U;
	int16_t x882 = -278;

    t175 = ((x881-(x882-x883))/x884);

    if (t175 != 18U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x890 = 28529U;
	volatile int8_t x892 = INT8_MAX;
	volatile uint32_t t176 = 1769171U;

    t176 = ((x889-(x890-x891))/x892);

    if (t176 != 34U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x893 = INT8_MIN;
	int64_t x895 = INT64_MAX;
	volatile int8_t x896 = 3;

    t177 = ((x893-(x894-x895))/x896);

    if (t177 != 3074457345618258517LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x901 = -8;
	volatile uint64_t x902 = 6311826278105LLU;
	int32_t x903 = INT32_MAX;
	uint8_t x904 = UINT8_MAX;

    t178 = ((x901-(x902-x903))/x904);

    if (t178 != 72340148094238263LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x906 = 47562410024598315LLU;
	int64_t x908 = INT64_MIN;
	volatile uint64_t t179 = 224LLU;

    t179 = ((x905-(x906-x907))/x908);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x917 = 71379925948079821LLU;
	uint8_t x918 = 2U;
	uint64_t x919 = 1613LLU;
	static volatile uint64_t x920 = 4301719148LLU;
	volatile uint64_t t180 = 32189428991LLU;

    t180 = ((x917-(x918-x919))/x920);

    if (t180 != 16593348LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x922 = 97624LL;
	int64_t x923 = -6662164923373201LL;

    t181 = ((x921-(x922-x923))/x924);

    if (t181 != 341482998310853348LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x925 = UINT32_MAX;
	static volatile int64_t x926 = -6932248114LL;
	uint32_t x927 = 23U;
	int32_t x928 = 128;

    t182 = ((x925-(x926-x927))/x928);

    if (t182 != 87712620LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x929 = 2177941LLU;
	int32_t x931 = INT32_MIN;
	uint8_t x932 = 60U;
	uint64_t t183 = 5482122189961402LLU;

    t183 = ((x929-(x930-x931))/x932);

    if (t183 != 307442449432145481LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x933 = UINT64_MAX;
	static int32_t x934 = INT32_MIN;
	int64_t x935 = INT64_MIN;
	uint64_t x936 = UINT64_MAX;
	volatile uint64_t t184 = 59LLU;

    t184 = ((x933-(x934-x935))/x936);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x937 = -1;
	uint64_t x938 = UINT64_MAX;
	volatile int32_t x939 = -18966283;
	static int32_t x940 = -1;
	uint64_t t185 = 66235613216234LLU;

    t185 = ((x937-(x938-x939))/x940);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x941 = -1;
	int64_t x942 = 99136LL;
	int32_t x943 = INT32_MIN;
	int8_t x944 = -1;

    t186 = ((x941-(x942-x943))/x944);

    if (t186 != 2147582785LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x945 = -84;
	static uint64_t x946 = UINT64_MAX;
	static volatile int16_t x947 = -1;

    t187 = ((x945-(x946-x947))/x948);

    if (t187 != 449920587163647598LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x949 = 9U;
	uint64_t x950 = 441354368827105LLU;
	int64_t x951 = 26567593355LL;
	uint8_t x952 = UINT8_MAX;
	uint64_t t188 = 26787409147373LLU;

    t188 = ((x949-(x950-x951))/x952);

    if (t188 != 72338442140816932LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x953 = INT8_MAX;
	int32_t x954 = 6;
	int32_t x955 = -27;
	static volatile int16_t x956 = 1;
	volatile int32_t t189 = 34;

    t189 = ((x953-(x954-x955))/x956);

    if (t189 != 94) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x958 = 3927U;
	static uint64_t x959 = 46777LLU;
	static volatile int8_t x960 = 30;
	volatile uint64_t t190 = 1054810427920263LLU;

    t190 = ((x957-(x958-x959))/x960);

    if (t190 != 71584216LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x961 = 15;
	static uint32_t x963 = 928871737U;
	uint32_t x964 = UINT32_MAX;
	uint32_t t191 = 858U;

    t191 = ((x961-(x962-x963))/x964);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x966 = INT8_MIN;
	int16_t x967 = INT16_MAX;
	uint64_t t192 = 21236265LLU;

    t192 = ((x965-(x966-x967))/x968);

    if (t192 != 55976975194025LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x969 = UINT32_MAX;
	static uint8_t x970 = 1U;
	int16_t x971 = INT16_MAX;
	static int64_t x972 = -62869715640LL;
	int64_t t193 = 2299246015757570394LL;

    t193 = ((x969-(x970-x971))/x972);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x978 = -1LL;
	int16_t x979 = -7;
	int16_t x980 = INT16_MIN;

    t194 = ((x977-(x978-x979))/x980);

    if (t194 != -65535LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x981 = UINT32_MAX;
	uint64_t x982 = 31040358892754230LLU;
	int64_t x983 = -52391343LL;
	volatile uint64_t t195 = 14742999633559641LLU;

    t195 = ((x981-(x982-x983))/x984);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x997 = -7185;
	int32_t x998 = -1;
	uint32_t x1000 = UINT32_MAX;
	uint32_t t196 = 3U;

    t196 = ((x997-(x998-x999))/x1000);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1002 = 2U;
	uint64_t x1003 = 335LLU;
	static int32_t x1004 = -429794663;
	uint64_t t197 = 218802842260258LLU;

    t197 = ((x1001-(x1002-x1003))/x1004);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x1009 = -54;
	volatile int16_t x1010 = INT16_MIN;
	int64_t x1011 = -1017214598339633823LL;
	static int64_t t198 = 13363673LL;

    t198 = ((x1009-(x1010-x1011))/x1012);

    if (t198 != 39123638397676965LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1013 = INT8_MAX;
	static int64_t x1014 = -2299103944080291367LL;
	int16_t x1015 = 109;
	volatile int16_t x1016 = INT16_MIN;
	int64_t t199 = 161520301987708LL;

    t199 = ((x1013-(x1014-x1015))/x1016);

    if (t199 != -70163084230965LL) { NG(); } else { ; }
	
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

