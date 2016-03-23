
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

int32_t x1 = -1;
static int16_t x2 = -1;
static int32_t x3 = -1;
uint16_t x4 = UINT16_MAX;
int16_t x7 = 28;
uint64_t t1 = 452909328015046LLU;
uint8_t x16 = 8U;
uint16_t x19 = 20U;
uint64_t x20 = 3LLU;
uint32_t t4 = 0U;
int32_t x27 = -1;
int64_t t5 = 35882LL;
volatile uint8_t x43 = 126U;
int64_t x51 = -1LL;
int8_t x53 = 0;
int64_t x54 = INT64_MIN;
static uint32_t x55 = 1680308U;
int16_t x65 = -12;
uint32_t x77 = UINT32_MAX;
int32_t x80 = -1;
int32_t x85 = INT32_MAX;
volatile uint32_t x95 = UINT32_MAX;
volatile int64_t t19 = 10857445241LL;
int64_t x103 = 14994038272118LL;
int32_t x105 = -1;
int16_t x106 = -304;
static uint64_t x107 = 57700724590LLU;
static int32_t x109 = INT32_MAX;
volatile int8_t x112 = -1;
static uint16_t x131 = 752U;
int64_t x135 = 1LL;
int64_t x141 = INT64_MIN;
int8_t x146 = INT8_MIN;
static int64_t t31 = 3996184939931884LL;
int16_t x157 = INT16_MAX;
uint32_t t34 = 13U;
static uint32_t x169 = 42245U;
int32_t x171 = -1;
int32_t x173 = 66;
int8_t x175 = INT8_MIN;
volatile int32_t x181 = 5;
int64_t x182 = INT64_MIN;
static int32_t x183 = 3380;
static int64_t x185 = -17188944733LL;
uint64_t x187 = 3796304LLU;
uint64_t t40 = 17573575LLU;
int8_t x192 = INT8_MIN;
static volatile uint64_t t41 = 13411LLU;
int16_t x202 = -16256;
volatile uint32_t x208 = 2U;
static int8_t x209 = 0;
static int8_t x215 = INT8_MAX;
uint8_t x225 = UINT8_MAX;
volatile int8_t x226 = INT8_MAX;
int32_t x229 = 399994367;
static volatile int64_t t49 = 5760642LL;
int8_t x239 = INT8_MIN;
volatile int64_t t51 = 9467480657365LL;
int64_t x258 = -1LL;
int8_t x260 = 1;
int32_t x271 = -1;
int8_t x272 = INT8_MIN;
static int64_t x273 = INT64_MIN;
uint32_t x286 = 32137068U;
static int16_t x288 = INT16_MAX;
volatile uint32_t x296 = UINT32_MAX;
uint8_t x298 = 22U;
int64_t x310 = -46625657065268513LL;
uint32_t x324 = 328U;
volatile uint64_t t66 = 176162LLU;
uint64_t x325 = 47828795392LLU;
volatile uint64_t t67 = 4599820LLU;
volatile int64_t x330 = -1LL;
static int16_t x343 = INT16_MIN;
int32_t x350 = INT32_MAX;
int64_t t72 = 1724389066LL;
int32_t x358 = 703;
uint16_t x375 = UINT16_MAX;
static volatile uint64_t t75 = 1395LLU;
volatile int8_t x389 = INT8_MIN;
uint16_t x402 = 9U;
uint32_t t81 = 187160934U;
int16_t x420 = -1;
static int32_t x424 = -21422;
int8_t x425 = INT8_MIN;
volatile int16_t x426 = INT16_MAX;
volatile uint16_t x441 = 1U;
uint16_t x443 = UINT16_MAX;
int8_t x445 = INT8_MAX;
int64_t x450 = 14268617335412140LL;
volatile int8_t x456 = -1;
int32_t x468 = INT32_MAX;
volatile int8_t x469 = INT8_MIN;
uint32_t x474 = 0U;
static uint32_t t95 = UINT32_MAX;
uint8_t x497 = 76U;
static int8_t x499 = INT8_MIN;
int64_t t99 = 3488031152230LL;
int32_t x517 = 354;
volatile uint16_t x518 = UINT16_MAX;
uint32_t x536 = 61952182U;
volatile int16_t x538 = INT16_MIN;
int16_t x551 = INT16_MIN;
int64_t x558 = INT64_MIN;
volatile int8_t x569 = INT8_MIN;
volatile int64_t x571 = -1LL;
volatile int64_t t114 = -257504305504281LL;
uint64_t x607 = UINT64_MAX;
static int32_t x611 = -1;
static volatile int16_t x628 = 199;
volatile int16_t x632 = -1;
int64_t x637 = INT64_MIN;
int16_t x644 = INT16_MAX;
int64_t t125 = -371361476724670LL;
uint32_t x646 = 108U;
uint64_t t126 = 34142917533LLU;
int16_t x649 = INT16_MIN;
int32_t x651 = -43;
static uint64_t t127 = 2316968618348949988LLU;
static int64_t x658 = -231LL;
int8_t x660 = -1;
static volatile int32_t t131 = -1333942;
uint16_t x683 = 2370U;
uint64_t x685 = 38055919579LLU;
static int8_t x698 = INT8_MIN;
static uint16_t x704 = 23999U;
int16_t x706 = INT16_MIN;
volatile int16_t x707 = INT16_MAX;
static int32_t x711 = INT32_MIN;
static int16_t x716 = 288;
static volatile uint64_t t143 = 68975LLU;
uint16_t x759 = 72U;
int16_t x771 = INT16_MAX;
uint8_t x772 = 18U;
volatile int32_t t148 = 0;
int64_t x777 = -435528670881352662LL;
uint8_t x780 = 15U;
volatile int8_t x781 = 1;
int32_t x796 = INT32_MAX;
static int32_t t152 = 71072;
static int8_t x797 = -1;
int16_t x801 = INT16_MAX;
int32_t x802 = -1;
uint32_t t155 = 469878U;
int8_t x810 = 1;
static uint8_t x820 = 7U;
uint32_t x826 = UINT32_MAX;
volatile int16_t x830 = 0;
int64_t x835 = -1LL;
int8_t x836 = -1;
uint32_t x850 = 1U;
uint64_t x852 = 1489LLU;
uint64_t x853 = UINT64_MAX;
volatile int8_t x866 = -31;
volatile int32_t t168 = 852812;
static int16_t x869 = -1;
int32_t t169 = -68328721;
int64_t t170 = 3156545LL;
int16_t x878 = INT16_MIN;
int8_t x884 = -1;
volatile int32_t x886 = -1;
int8_t x888 = INT8_MIN;
static uint64_t t174 = 30LLU;
int8_t x893 = INT8_MIN;
int8_t x895 = 1;
static uint64_t x907 = 1609268577LLU;
uint64_t x908 = 19446012297076LLU;
volatile uint64_t t178 = 94024LLU;
uint32_t x914 = 1U;
int8_t x916 = INT8_MIN;
volatile uint64_t t180 = 27LLU;
static uint16_t x917 = 454U;
volatile uint64_t x918 = 688LLU;
uint64_t x922 = 6631791539228537LLU;
int64_t x930 = INT64_MIN;
volatile int64_t t184 = -129LL;
uint32_t x939 = 3U;
static uint64_t x940 = 489712LLU;
int8_t x944 = INT8_MIN;
volatile uint64_t t188 = 10415285LLU;
volatile int8_t x976 = INT8_MIN;
uint8_t x980 = 44U;
int16_t x981 = -1;
uint32_t t195 = 24734255U;
volatile uint16_t x987 = 125U;
int16_t x998 = INT16_MAX;
int8_t x1001 = -2;
volatile int8_t x1004 = INT8_MAX;


void f0(void) {
    	int32_t t0 = 623208524;

    t0 = ((x1+x2)^(x3-x4));

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 25368343514675602LLU;
	int32_t x6 = -254500369;
	int16_t x8 = 105;

    t1 = ((x5+x6)^(x7-x8));

    if (t1 != 18421375730449376306LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	uint32_t x14 = 220U;
	uint64_t x15 = 13521987981587951LLU;
	volatile uint64_t t2 = 24525LLU;

    t2 = ((x13+x14)^(x15-x16));

    if (t2 != 9236894024836363579LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x17 = -21859233787LL;
	int16_t x18 = -1425;
	volatile uint64_t t3 = 70693767937633363LLU;

    t3 = ((x17+x18)^(x19-x20));

    if (t3 != 18446744051850316389LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 0;
	volatile int16_t x22 = INT16_MAX;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t x24 = UINT32_MAX;

    t4 = ((x21+x22)^(x23-x24));

    if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 614U;
	static uint16_t x26 = UINT16_MAX;
	static int64_t x28 = -1LL;

    t5 = ((x25+x26)^(x27-x28));

    if (t5 != 66149LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = 1LL;
	int8_t x34 = INT8_MIN;
	int16_t x35 = 228;
	int8_t x36 = -1;
	volatile int64_t t6 = 7846500LL;

    t6 = ((x33+x34)^(x35-x36));

    if (t6 != -156LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MIN;
	int64_t x44 = -916688LL;
	volatile int64_t t7 = -313580461198417789LL;

    t7 = ((x41+x42)^(x43-x44));

    if (t7 != 916785LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = 7463;
	int16_t x46 = -1;
	uint8_t x47 = 0U;
	int32_t x48 = -1;
	static volatile int32_t t8 = -643131;

    t8 = ((x45+x46)^(x47-x48));

    if (t8 != 7463) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = 3256053871166670LL;
	int16_t x50 = INT16_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile int64_t t9 = 124627922078920LL;

    t9 = ((x49+x50)^(x51-x52));

    if (t9 != -3256057147439922LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x56 = INT8_MIN;
	int64_t t10 = 3363752355LL;

    t10 = ((x53+x54)^(x55-x56));

    if (t10 != -9223372036853095372LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x57 = UINT32_MAX;
	volatile int8_t x58 = 29;
	int16_t x59 = -2022;
	uint64_t x60 = 199835932LLU;
	volatile uint64_t t11 = 264080708270857LLU;

    t11 = ((x57+x58)^(x59-x60));

    if (t11 != 18446744073509713634LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x61 = 1U;
	static int32_t x62 = -38;
	int8_t x63 = INT8_MIN;
	static uint64_t x64 = UINT64_MAX;
	uint64_t t12 = 522082253755001272LLU;

    t12 = ((x61+x62)^(x63-x64));

    if (t12 != 90LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x66 = 344177822900535650LLU;
	int8_t x67 = 4;
	static volatile uint64_t x68 = 30LLU;
	static volatile uint64_t t13 = 1071405999348789423LLU;

    t13 = ((x65+x66)^(x67-x68));

    if (t13 != 18102566250809015984LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = INT8_MIN;
	volatile uint8_t x74 = 23U;
	static int32_t x75 = -25;
	int8_t x76 = 5;
	int32_t t14 = -19342;

    t14 = ((x73+x74)^(x75-x76));

    if (t14 != 117) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x78 = 58U;
	uint32_t x79 = UINT32_MAX;
	static volatile uint32_t t15 = 22111439U;

    t15 = ((x77+x78)^(x79-x80));

    if (t15 != 57U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x81 = 947U;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = 46U;
	uint8_t x84 = UINT8_MAX;
	int64_t t16 = -5LL;

    t16 = ((x81+x82)^(x83-x84));

    if (t16 != 9223372036854774940LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x86 = INT64_MIN;
	int8_t x87 = -15;
	static uint32_t x88 = 1141654U;
	volatile int64_t t17 = 8174LL;

    t17 = ((x85+x86)^(x87-x88));

    if (t17 != -9223372034706150492LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 1U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t18 = -516987773;

    t18 = ((x89+x90)^(x91-x92));

    if (t18 != -32642) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = UINT32_MAX;
	int64_t x96 = -1LL;

    t19 = ((x93+x94)^(x95-x96));

    if (t19 != 6442450943LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x97 = -25485107LL;
	int16_t x98 = INT16_MIN;
	volatile int8_t x99 = INT8_MIN;
	uint16_t x100 = 345U;
	int64_t t20 = -1567240LL;

    t20 = ((x97+x98)^(x99-x100));

    if (t20 != 25517802LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x101 = UINT32_MAX;
	volatile int8_t x102 = -1;
	uint16_t x104 = UINT16_MAX;
	static volatile int64_t t21 = 6811LL;

    t21 = ((x101+x102)^(x103-x104));

    if (t21 != 14997718421385LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x108 = INT32_MIN;
	uint64_t t22 = 1LLU;

    t22 = ((x105+x106)^(x107-x108));

    if (t22 != 18446744013861343649LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x110 = -1;
	volatile int64_t x111 = -17LL;
	static int64_t t23 = 61237LL;

    t23 = ((x109+x110)^(x111-x112));

    if (t23 != -2147483634LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x113 = 3196556;
	uint32_t x114 = 1492984U;
	uint8_t x115 = UINT8_MAX;
	volatile int64_t x116 = -164992LL;
	int64_t t24 = 1033645686926780027LL;

    t24 = ((x113+x114)^(x115-x116));

    if (t24 != 4525051LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = INT8_MIN;
	int64_t x118 = 366LL;
	volatile int16_t x119 = INT16_MIN;
	uint8_t x120 = 0U;
	int64_t t25 = 5191071087766LL;

    t25 = ((x117+x118)^(x119-x120));

    if (t25 != -32530LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = 15551272;
	uint64_t x124 = 103550265035LLU;
	uint64_t t26 = 412255477859627190LLU;

    t26 = ((x121+x122)^(x123-x124));

    if (t26 != 18446743970174837923LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x129 = UINT16_MAX;
	uint16_t x130 = UINT16_MAX;
	volatile int8_t x132 = -1;
	int32_t t27 = 1;

    t27 = ((x129+x130)^(x131-x132));

    if (t27 != 130319) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MAX;
	int8_t x136 = -61;
	volatile int64_t t28 = 127747LL;

    t28 = ((x133+x134)^(x135-x136));

    if (t28 != 192LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x137 = -1;
	uint64_t x138 = 11LLU;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = -1;
	volatile uint64_t t29 = 176406182LLU;

    t29 = ((x137+x138)^(x139-x140));

    if (t29 != 65546LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x142 = 69695LLU;
	static uint32_t x143 = UINT32_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile uint64_t t30 = 2012356640103897LLU;

    t30 = ((x141+x142)^(x143-x144));

    if (t30 != 9223372036854845503LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = -1LL;
	static uint8_t x147 = 1U;
	uint8_t x148 = UINT8_MAX;

    t31 = ((x145+x146)^(x147-x148));

    if (t31 != 125LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = 51;
	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t32 = 93060628;

    t32 = ((x149+x150)^(x151-x152));

    if (t32 != -98125) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = INT8_MIN;
	static int64_t x154 = -1102604578398LL;
	uint16_t x155 = 2381U;
	static uint64_t x156 = 1941403834LLU;
	uint64_t t33 = 94173952480992722LLU;

    t33 = ((x153+x154)^(x155-x156));

    if (t33 != 1102932984241LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x158 = 0U;
	uint32_t x159 = 34300U;
	int8_t x160 = INT8_MIN;

    t34 = ((x157+x158)^(x159-x160));

    if (t34 != 63875U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	volatile int32_t t35 = 0;

    t35 = ((x161+x162)^(x163-x164));

    if (t35 != -2147450753) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x170 = INT8_MAX;
	uint8_t x172 = 91U;
	uint32_t t36 = 32766U;

    t36 = ((x169+x170)^(x171-x172));

    if (t36 != 4294924832U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x174 = 99U;
	int16_t x176 = INT16_MIN;
	uint32_t t37 = 2602445U;

    t37 = ((x173+x174)^(x175-x176));

    if (t37 != 32549U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = 6;
	int8_t x178 = 2;
	uint32_t x179 = 218552873U;
	int16_t x180 = INT16_MIN;
	uint32_t t38 = 32657U;

    t38 = ((x177+x178)^(x179-x180));

    if (t38 != 218585633U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x184 = 315U;
	int64_t t39 = -1050LL;

    t39 = ((x181+x182)^(x183-x184));

    if (t39 != -9223372036854772740LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x186 = 939U;
	uint8_t x188 = UINT8_MAX;

    t40 = ((x185+x186)^(x187-x188));

    if (t40 != 18446744056517911583LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x189 = 14827379LLU;
	int64_t x190 = 9043084LL;
	uint8_t x191 = UINT8_MAX;

    t41 = ((x189+x190)^(x191-x192));

    if (t41 != 23870080LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x197 = 5156U;
	int32_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	uint8_t x200 = 4U;
	volatile uint32_t t42 = 5427205U;

    t42 = ((x197+x198)^(x199-x200));

    if (t42 != 4294962136U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x201 = 29634U;
	volatile uint32_t x203 = 2608U;
	uint64_t x204 = 15365LLU;
	uint64_t t43 = 482794399LLU;

    t43 = ((x201+x202)^(x203-x204));

    if (t43 != 18446744073709550185LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x205 = UINT64_MAX;
	volatile uint16_t x206 = 3U;
	static volatile int8_t x207 = INT8_MIN;
	uint64_t t44 = 105062704607322LLU;

    t44 = ((x205+x206)^(x207-x208));

    if (t44 != 4294967164LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MAX;
	volatile int16_t x212 = INT16_MAX;
	int32_t t45 = 0;

    t45 = ((x209+x210)^(x211-x212));

    if (t45 != -32641) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	int64_t x216 = INT64_MAX;
	static volatile int64_t t46 = -3596LL;

    t46 = ((x213+x214)^(x215-x216));

    if (t46 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x221 = 3U;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	int64_t x224 = 0LL;
	volatile int64_t t47 = -609776233LL;

    t47 = ((x221+x222)^(x223-x224));

    if (t47 != -2147483773LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int64_t t48 = 20101025085234LL;

    t48 = ((x225+x226)^(x227-x228));

    if (t48 != 9223372036854775425LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x230 = -6095846225422LL;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;

    t49 = ((x229+x230)^(x231-x232));

    if (t49 != 6095446226801LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = -1;
	static int16_t x240 = -1;
	volatile int32_t t50 = -1;

    t50 = ((x237+x238)^(x239-x240));

    if (t50 != -65409) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x241 = INT64_MIN;
	uint32_t x242 = 130603067U;
	int8_t x243 = INT8_MIN;
	static int64_t x244 = -1LL;

    t51 = ((x241+x242)^(x243-x244));

    if (t51 != 9223372036724172730LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x249 = -1;
	static int8_t x250 = 4;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	volatile int64_t t52 = -283953LL;

    t52 = ((x249+x250)^(x251-x252));

    if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x253 = -1;
	uint16_t x254 = UINT16_MAX;
	volatile int8_t x255 = -62;
	volatile uint8_t x256 = 111U;
	int32_t t53 = 11558247;

    t53 = ((x253+x254)^(x255-x256));

    if (t53 != -65363) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x257 = INT8_MIN;
	int64_t x259 = 79698404374259LL;
	int64_t t54 = 2277163206212616052LL;

    t54 = ((x257+x258)^(x259-x260));

    if (t54 != -79698404374131LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x261 = -1;
	volatile int8_t x262 = -1;
	uint32_t x263 = 1985U;
	uint64_t x264 = 8587712416317922601LLU;
	uint64_t t55 = 78634882578197615LLU;

    t55 = ((x261+x262)^(x263-x264));

    if (t55 != 8587712416317920614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = -120628;
	volatile int32_t x266 = -2;
	int16_t x267 = -1;
	static volatile int16_t x268 = -33;
	int32_t t56 = 758028409;

    t56 = ((x265+x266)^(x267-x268));

    if (t56 != -120598) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x269 = 26289792U;
	static int8_t x270 = 0;
	volatile uint32_t t57 = 158158U;

    t57 = ((x269+x270)^(x271-x272));

    if (t57 != 26289919U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x274 = 2140U;
	int8_t x275 = -6;
	static uint8_t x276 = 14U;
	int64_t t58 = 8282LL;

    t58 = ((x273+x274)^(x275-x276));

    if (t58 != 9223372036854773680LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x285 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	uint32_t t59 = 1U;

    t59 = ((x285+x286)^(x287-x288));

    if (t59 != 4262748010U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = -167347LL;
	static uint8_t x294 = 1U;
	static volatile int16_t x295 = -100;
	volatile int64_t t60 = 6LL;

    t60 = ((x293+x294)^(x295-x296));

    if (t60 != -4294799917LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x297 = INT64_MIN;
	volatile int32_t x299 = INT32_MIN;
	uint32_t x300 = 8934958U;
	volatile int64_t t61 = 7896538646LL;

    t61 = ((x297+x298)^(x299-x300));

    if (t61 != -9223372034716227132LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x301 = 377;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = 3951;
	int64_t x304 = INT64_MAX;
	volatile int64_t t62 = 384504986LL;

    t62 = ((x301+x302)^(x303-x304));

    if (t62 != -9223372036854772216LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x309 = -1;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = 1624863672687542389LLU;
	volatile uint64_t t63 = 8690396LLU;

    t63 = ((x309+x310)^(x311-x312));

    if (t63 != 1596817642431292757LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x313 = INT8_MIN;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	uint32_t t64 = 98U;

    t64 = ((x313+x314)^(x315-x316));

    if (t64 != 32638U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x317 = UINT8_MAX;
	static uint16_t x318 = 562U;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 65871487LLU;
	uint64_t t65 = 102375704LLU;

    t65 = ((x317+x318)^(x319-x320));

    if (t65 != 18446744071496196784LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x321 = 1790LLU;
	uint32_t x322 = 11270531U;
	int8_t x323 = INT8_MAX;

    t66 = ((x321+x322)^(x323-x324));

    if (t66 != 4283695030LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x326 = -115341LL;
	uint64_t x327 = 3LLU;
	static int64_t x328 = INT64_MAX;

    t67 = ((x325+x326)^(x327-x328));

    if (t67 != 9223372084683455863LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x329 = 192U;
	int64_t x331 = INT64_MAX;
	volatile uint8_t x332 = 23U;
	volatile int64_t t68 = 385974921139LL;

    t68 = ((x329+x330)^(x331-x332));

    if (t68 != 9223372036854775639LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x341 = 803364344;
	static uint16_t x342 = UINT16_MAX;
	int16_t x344 = -1;
	volatile int32_t t69 = -48007;

    t69 = ((x341+x342)^(x343-x344));

    if (t69 != -803414538) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x345 = -1;
	static uint64_t x346 = 29367724LLU;
	static int32_t x347 = -1;
	int32_t x348 = -304185837;
	volatile uint64_t t70 = 10935830342506LLU;

    t70 = ((x345+x346)^(x347-x348));

    if (t70 != 333552711LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x349 = -9751595463LL;
	uint32_t x351 = 112690U;
	int16_t x352 = -20;
	static int64_t t71 = 210820549414LL;

    t71 = ((x349+x350)^(x351-x352));

    if (t71 != -7604023682LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x353 = 1U;
	uint8_t x354 = UINT8_MAX;
	volatile int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;

    t72 = ((x353+x354)^(x355-x356));

    if (t72 != -9223372036854742784LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	static int16_t x359 = -1;
	int16_t x360 = INT16_MAX;
	static volatile int32_t t73 = -18;

    t73 = ((x357+x358)^(x359-x360));

    if (t73 != -97602) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x365 = 415LL;
	uint16_t x366 = 5U;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	static volatile uint64_t t74 = 11747661935201851LLU;

    t74 = ((x365+x366)^(x367-x368));

    if (t74 != 475LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x373 = -1;
	static int16_t x374 = -1;
	uint64_t x376 = UINT64_MAX;

    t75 = ((x373+x374)^(x375-x376));

    if (t75 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = -1;
	uint64_t x379 = 878606867LLU;
	static int64_t x380 = -2370816919176211954LL;
	volatile uint64_t t76 = 3LLU;

    t76 = ((x377+x378)^(x379-x380));

    if (t76 != 16075927153654732666LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x385 = 1;
	uint8_t x386 = UINT8_MAX;
	uint64_t x387 = UINT64_MAX;
	static int64_t x388 = 12453294894038024LL;
	static uint64_t t77 = 541639498790825466LLU;

    t77 = ((x385+x386)^(x387-x388));

    if (t77 != 18434290778815513335LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x390 = 1479471;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t78 = 7;

    t78 = ((x389+x390)^(x391-x392));

    if (t78 != 1568080) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x393 = 28615569U;
	volatile uint32_t x394 = 180U;
	int8_t x395 = -1;
	volatile int8_t x396 = 0;
	uint32_t t79 = 9U;

    t79 = ((x393+x394)^(x395-x396));

    if (t79 != 4266351546U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	int8_t x398 = 11;
	int8_t x399 = INT8_MAX;
	int32_t x400 = 5435943;
	static int32_t t80 = -142;

    t80 = ((x397+x398)^(x399-x400));

    if (t80 != -5501358) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x401 = UINT8_MAX;
	uint32_t x403 = 2796194U;
	int32_t x404 = -2509609;

    t81 = ((x401+x402)^(x403-x404));

    if (t81 != 5305539U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x409 = UINT32_MAX;
	int64_t x410 = -1LL;
	uint8_t x411 = UINT8_MAX;
	volatile int64_t x412 = -1LL;
	int64_t t82 = -1269450863646929442LL;

    t82 = ((x409+x410)^(x411-x412));

    if (t82 != 4294967038LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x417 = -1;
	int32_t x418 = -1;
	volatile int32_t x419 = INT32_MIN;
	int32_t t83 = INT32_MAX;

    t83 = ((x417+x418)^(x419-x420));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x421 = -2;
	static uint8_t x422 = UINT8_MAX;
	int64_t x423 = 192974943759003LL;
	static volatile int64_t t84 = 65277382958LL;

    t84 = ((x421+x422)^(x423-x424));

    if (t84 != 192974943780532LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x427 = -58;
	int32_t x428 = INT32_MIN;
	int32_t t85 = -73918197;

    t85 = ((x425+x426)^(x427-x428));

    if (t85 != 2147451065) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x429 = 376U;
	int32_t x430 = -29011803;
	static int32_t x431 = INT32_MAX;
	int64_t x432 = INT64_MAX;
	int64_t t86 = -48031171849LL;

    t86 = ((x429+x430)^(x431-x432));

    if (t86 != -9223372034736303587LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x433 = INT32_MAX;
	static volatile int16_t x434 = 0;
	int8_t x435 = 0;
	static volatile int64_t x436 = -64892LL;
	int64_t t87 = -28574LL;

    t87 = ((x433+x434)^(x435-x436));

    if (t87 != 2147418755LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x442 = 1100275264942409LL;
	int64_t x444 = -1752LL;
	int64_t t88 = 79LL;

    t88 = ((x441+x442)^(x443-x444));

    if (t88 != 1100275265009565LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x446 = -1LL;
	volatile int64_t x447 = -3136187001697153049LL;
	static int64_t x448 = -788869799670565249LL;
	int64_t t89 = 73LL;

    t89 = ((x445+x446)^(x447-x448));

    if (t89 != -2347317202026587882LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x449 = 17U;
	int8_t x451 = INT8_MAX;
	int64_t x452 = 15837204554245LL;
	int64_t t90 = 37386LL;

    t90 = ((x449+x450)^(x451-x452));

    if (t90 != -14284151654265913LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = -28;
	int16_t x455 = -6782;
	static volatile int32_t t91 = 0;

    t91 = ((x453+x454)^(x455-x456));

    if (t91 != 6887) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x457 = -1LL;
	int32_t x458 = INT32_MAX;
	int8_t x459 = INT8_MIN;
	int16_t x460 = 0;
	volatile int64_t t92 = -1563191417LL;

    t92 = ((x457+x458)^(x459-x460));

    if (t92 != -2147483522LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x465 = -584;
	volatile uint8_t x466 = 1U;
	int16_t x467 = INT16_MAX;
	static volatile int32_t t93 = 62535818;

    t93 = ((x465+x466)^(x467-x468));

    if (t93 != 2147450297) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x470 = 1443560047U;
	int32_t x471 = INT32_MIN;
	int8_t x472 = INT8_MIN;
	static uint32_t t94 = 5U;

    t94 = ((x469+x470)^(x471-x472));

    if (t94 != 3591043439U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x473 = INT8_MAX;
	int8_t x475 = INT8_MIN;
	static uint16_t x476 = 0U;

    t95 = ((x473+x474)^(x475-x476));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x477 = -1;
	static volatile uint64_t x478 = 116602090572LLU;
	uint32_t x479 = 1085758132U;
	static volatile int32_t x480 = 6646;
	uint64_t t96 = 7833971334986481261LLU;

    t96 = ((x477+x478)^(x479-x480));

    if (t96 != 117687055605LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x485 = 2;
	uint16_t x486 = UINT16_MAX;
	int16_t x487 = INT16_MAX;
	volatile int8_t x488 = INT8_MIN;
	int32_t t97 = 13;

    t97 = ((x485+x486)^(x487-x488));

    if (t97 != 98430) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x489 = 38652U;
	static uint64_t x490 = 147LLU;
	int64_t x491 = 1221924555747885LL;
	int16_t x492 = -22;
	volatile uint64_t t98 = 136620183044LLU;

    t98 = ((x489+x490)^(x491-x492));

    if (t98 != 1221924555777484LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x498 = INT16_MIN;
	static int64_t x500 = INT64_MIN;

    t99 = ((x497+x498)^(x499-x500));

    if (t99 != -9223372036854743092LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x501 = UINT32_MAX;
	uint64_t x502 = 21LLU;
	int16_t x503 = INT16_MIN;
	volatile int8_t x504 = INT8_MAX;
	uint64_t t100 = 162656729804LLU;

    t100 = ((x501+x502)^(x503-x504));

    if (t100 != 18446744069414551445LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x509 = 1;
	int16_t x510 = INT16_MAX;
	uint8_t x511 = UINT8_MAX;
	uint8_t x512 = 60U;
	static volatile int32_t t101 = -772;

    t101 = ((x509+x510)^(x511-x512));

    if (t101 != 32963) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x513 = -1;
	static uint64_t x514 = 2310056477468726023LLU;
	uint8_t x515 = UINT8_MAX;
	int32_t x516 = -59;
	volatile uint64_t t102 = 6749588427935583LLU;

    t102 = ((x513+x514)^(x515-x516));

    if (t102 != 2310056477468725820LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x519 = 1;
	int16_t x520 = 3568;
	int32_t t103 = 15344482;

    t103 = ((x517+x518)^(x519-x520));

    if (t103 != -68752) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x525 = UINT32_MAX;
	volatile int8_t x526 = INT8_MIN;
	volatile uint16_t x527 = UINT16_MAX;
	int64_t x528 = -1LL;
	volatile int64_t t104 = -1LL;

    t104 = ((x525+x526)^(x527-x528));

    if (t104 != 4294901631LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x529 = -523226121068598LL;
	int32_t x530 = INT32_MIN;
	int32_t x531 = -14608;
	int16_t x532 = 0;
	volatile int64_t t105 = 0LL;

    t105 = ((x529+x530)^(x531-x532));

    if (t105 != 523228268550458LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x533 = INT32_MAX;
	int32_t x534 = INT32_MIN;
	int8_t x535 = -6;
	uint32_t t106 = 4753U;

    t106 = ((x533+x534)^(x535-x536));

    if (t106 != 61952187U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x537 = 18;
	static volatile int32_t x539 = -1;
	volatile int16_t x540 = 11;
	static int32_t t107 = -19;

    t107 = ((x537+x538)^(x539-x540));

    if (t107 != 32742) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x541 = -6137967011719LL;
	int16_t x542 = -10877;
	int16_t x543 = 228;
	static uint8_t x544 = UINT8_MAX;
	int64_t t108 = -70124782097375LL;

    t108 = ((x541+x542)^(x543-x544));

    if (t108 != 6137967022617LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x545 = INT64_MIN;
	volatile int32_t x546 = 89554;
	volatile uint32_t x547 = 1131825370U;
	static int16_t x548 = INT16_MAX;
	int64_t t109 = -2116527020864LL;

    t109 = ((x545+x546)^(x547-x548));

    if (t109 != -9223372035723062007LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x549 = 1U;
	int8_t x550 = -27;
	uint64_t x552 = 8335976231762271019LLU;
	uint64_t t110 = 3662891330LLU;

    t110 = ((x549+x550)^(x551-x552));

    if (t110 != 8335976231762303795LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x557 = UINT64_MAX;
	int64_t x559 = 28056LL;
	int64_t x560 = INT64_MAX;
	uint64_t t111 = 115LLU;

    t111 = ((x557+x558)^(x559-x560));

    if (t111 != 18446744073709523558LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x570 = INT16_MAX;
	int32_t x572 = INT32_MAX;
	int64_t t112 = -24558962LL;

    t112 = ((x569+x570)^(x571-x572));

    if (t112 != -2147451009LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x573 = UINT16_MAX;
	static volatile uint8_t x574 = 123U;
	static int64_t x575 = -3721861274740094LL;
	int32_t x576 = INT32_MIN;
	volatile int64_t t113 = -26536187823LL;

    t113 = ((x573+x574)^(x575-x576));

    if (t113 != -3721859127190792LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x577 = -1LL;
	uint32_t x578 = 0U;
	static int8_t x579 = -32;
	int8_t x580 = INT8_MIN;

    t114 = ((x577+x578)^(x579-x580));

    if (t114 != -97LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x581 = 10;
	int16_t x582 = -1;
	static int8_t x583 = 31;
	volatile int16_t x584 = 11158;
	volatile int32_t t115 = -24472;

    t115 = ((x581+x582)^(x583-x584));

    if (t115 != -11136) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x589 = 101438U;
	static uint32_t x590 = 6U;
	int8_t x591 = INT8_MAX;
	uint16_t x592 = UINT16_MAX;
	static uint32_t t116 = 1457550U;

    t116 = ((x589+x590)^(x591-x592));

    if (t116 != 4294872260U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x597 = 23819352789502LL;
	volatile uint16_t x598 = 20245U;
	int64_t x599 = 1LL;
	volatile int8_t x600 = 1;
	static volatile int64_t t117 = 22839638962010896LL;

    t117 = ((x597+x598)^(x599-x600));

    if (t117 != 23819352809747LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x605 = UINT8_MAX;
	int64_t x606 = 106267472085LL;
	volatile int64_t x608 = INT64_MIN;
	static volatile uint64_t t118 = 208174415858287LLU;

    t118 = ((x605+x606)^(x607-x608));

    if (t118 != 9223371930587303467LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile uint64_t x610 = 152LLU;
	static volatile int16_t x612 = 0;
	uint64_t t119 = 545439LLU;

    t119 = ((x609+x610)^(x611-x612));

    if (t119 != 18446744073709485928LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x621 = INT64_MAX;
	volatile int8_t x622 = INT8_MIN;
	int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MIN;
	static int64_t t120 = 55162971873233LL;

    t120 = ((x621+x622)^(x623-x624));

    if (t120 != -32897LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x625 = 57785475U;
	int16_t x626 = -1292;
	int16_t x627 = -89;
	static uint32_t t121 = 1U;

    t121 = ((x625+x626)^(x627-x628));

    if (t121 != 4237183383U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x629 = 280U;
	volatile uint8_t x630 = 7U;
	static uint8_t x631 = 16U;
	volatile int32_t t122 = -10927;

    t122 = ((x629+x630)^(x631-x632));

    if (t122 != 270) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x633 = 13U;
	int32_t x634 = INT32_MIN;
	int8_t x635 = INT8_MIN;
	uint32_t x636 = 7147407U;
	static uint32_t t123 = 15572957U;

    t123 = ((x633+x634)^(x635-x636));

    if (t123 != 2140336124U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x638 = 13;
	volatile int16_t x639 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile int64_t t124 = -24LL;

    t124 = ((x637+x638)^(x639-x640));

    if (t124 != 9223372036854743053LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x641 = INT16_MIN;
	int64_t x642 = 24531195713973LL;
	volatile uint8_t x643 = 58U;

    t125 = ((x641+x642)^(x643-x644));

    if (t125 != -24531195668082LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x645 = -1;
	volatile uint64_t x647 = 6307878438297LLU;
	volatile int8_t x648 = INT8_MIN;

    t126 = ((x645+x646)^(x647-x648));

    if (t126 != 6307878438514LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x650 = 22304053062677948LLU;
	int8_t x652 = INT8_MAX;

    t127 = ((x649+x650)^(x651-x652));

    if (t127 != 18424440020646906602LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x653 = INT64_MAX;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = UINT64_MAX;
	volatile int32_t x656 = -15;
	volatile uint64_t t128 = 8375852540511LLU;

    t128 = ((x653+x654)^(x655-x656));

    if (t128 != 9223372036854775665LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x657 = 0;
	int64_t x659 = 51220665565215009LL;
	volatile int64_t t129 = -101588903974213LL;

    t129 = ((x657+x658)^(x659-x660));

    if (t129 != -51220665565215173LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x665 = 48U;
	volatile int64_t x666 = INT64_MIN;
	uint8_t x667 = 10U;
	int64_t x668 = 46164393LL;
	int64_t t130 = -23400058LL;

    t130 = ((x665+x666)^(x667-x668));

    if (t130 != 9223372036808611409LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x669 = INT32_MAX;
	volatile int32_t x670 = -54369095;
	volatile uint16_t x671 = 1200U;
	int8_t x672 = INT8_MIN;

    t131 = ((x669+x670)^(x671-x672));

    if (t131 != 2093113736) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x673 = UINT16_MAX;
	int8_t x674 = -25;
	uint8_t x675 = UINT8_MAX;
	int32_t x676 = 0;
	int32_t t132 = -59;

    t132 = ((x673+x674)^(x675-x676));

    if (t132 != 65305) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x681 = 3U;
	static int32_t x682 = INT32_MIN;
	uint64_t x684 = UINT64_MAX;
	static uint64_t t133 = 265158833516684LLU;

    t133 = ((x681+x682)^(x683-x684));

    if (t133 != 18446744071562070336LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x686 = INT8_MIN;
	static uint16_t x687 = UINT16_MAX;
	int64_t x688 = INT64_MAX;
	static volatile uint64_t t134 = 3501150126996LLU;

    t134 = ((x685+x686)^(x687-x688));

    if (t134 != 9223372074910629723LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x689 = INT8_MAX;
	int8_t x690 = INT8_MAX;
	int32_t x691 = -1;
	static volatile int16_t x692 = INT16_MIN;
	volatile int32_t t135 = 40134;

    t135 = ((x689+x690)^(x691-x692));

    if (t135 != 32513) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x697 = 5U;
	volatile uint8_t x699 = 7U;
	uint8_t x700 = 73U;
	int32_t t136 = 3;

    t136 = ((x697+x698)^(x699-x700));

    if (t136 != 59) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x701 = -1LL;
	int32_t x702 = INT32_MIN;
	static int16_t x703 = INT16_MIN;
	volatile int64_t t137 = -60863LL;

    t137 = ((x701+x702)^(x703-x704));

    if (t137 != 2147540414LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x708 = UINT8_MAX;
	int32_t t138 = -387933;

    t138 = ((x705+x706)^(x707-x708));

    if (t138 != -65408) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x709 = -426084802LL;
	int16_t x710 = INT16_MAX;
	int64_t x712 = INT64_MIN;
	volatile int64_t t139 = 13265649863598258LL;

    t139 = ((x709+x710)^(x711-x712));

    if (t139 != -9223372035133344195LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x713 = INT32_MAX;
	static int64_t x714 = INT64_MIN;
	int64_t x715 = 1LL;
	int64_t t140 = -394168145LL;

    t140 = ((x713+x714)^(x715-x716));

    if (t140 != 9223372034707292446LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x721 = INT16_MIN;
	static uint64_t x722 = UINT64_MAX;
	volatile int32_t x723 = INT32_MAX;
	int16_t x724 = 0;
	volatile uint64_t t141 = 104187LLU;

    t141 = ((x721+x722)^(x723-x724));

    if (t141 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x729 = UINT8_MAX;
	static int32_t x730 = INT32_MIN;
	uint16_t x731 = 0U;
	volatile uint8_t x732 = 79U;
	static int32_t t142 = 24;

    t142 = ((x729+x730)^(x731-x732));

    if (t142 != 2147483470) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x741 = UINT32_MAX;
	volatile int16_t x742 = -1;
	uint32_t x743 = UINT32_MAX;
	uint64_t x744 = UINT64_MAX;

    t143 = ((x741+x742)^(x743-x744));

    if (t143 != 8589934590LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x753 = 462344U;
	int16_t x754 = 6;
	static int32_t x755 = -14504381;
	int32_t x756 = INT32_MIN;
	volatile uint32_t t144 = 1816174U;

    t144 = ((x753+x754)^(x755-x756));

    if (t144 != 2133172301U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	static int32_t x758 = -1;
	int8_t x760 = INT8_MIN;
	static int32_t t145 = -95787;

    t145 = ((x757+x758)^(x759-x760));

    if (t145 != 54) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MIN;
	uint32_t x763 = 311U;
	int32_t x764 = INT32_MAX;
	static uint32_t t146 = 55073U;

    t146 = ((x761+x762)^(x763-x764));

    if (t146 != 2147450552U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x769 = -1;
	static volatile uint16_t x770 = UINT16_MAX;
	volatile int32_t t147 = -3905;

    t147 = ((x769+x770)^(x771-x772));

    if (t147 != 32787) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x773 = INT8_MIN;
	uint16_t x774 = 4U;
	volatile int16_t x775 = -9809;
	int16_t x776 = -1;

    t148 = ((x773+x774)^(x775-x776));

    if (t148 != 9780) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x778 = -36;
	volatile int32_t x779 = -1;
	int64_t t149 = 20961LL;

    t149 = ((x777+x778)^(x779-x780));

    if (t149 != 435528670881352694LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x782 = UINT8_MAX;
	uint32_t x783 = UINT32_MAX;
	static int16_t x784 = INT16_MIN;
	static uint32_t t150 = 899047071U;

    t150 = ((x781+x782)^(x783-x784));

    if (t150 != 32511U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x789 = INT32_MIN;
	static int16_t x790 = INT16_MAX;
	int32_t x791 = -1;
	int64_t x792 = INT64_MIN;
	volatile int64_t t151 = -2754649688889LL;

    t151 = ((x789+x790)^(x791-x792));

    if (t151 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x793 = INT8_MAX;
	int8_t x794 = INT8_MAX;
	uint16_t x795 = 55U;

    t152 = ((x793+x794)^(x795-x796));

    if (t152 != -2147483450) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x798 = 5U;
	int16_t x799 = 2;
	int16_t x800 = INT16_MAX;
	static volatile int32_t t153 = -6373;

    t153 = ((x797+x798)^(x799-x800));

    if (t153 != -32761) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x803 = INT32_MAX;
	int64_t x804 = INT64_MAX;
	static volatile int64_t t154 = -10630997029667LL;

    t154 = ((x801+x802)^(x803-x804));

    if (t154 != -9223372034707259394LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x805 = 1;
	static volatile uint16_t x806 = 2U;
	volatile uint32_t x807 = UINT32_MAX;
	static int16_t x808 = 217;

    t155 = ((x805+x806)^(x807-x808));

    if (t155 != 4294967077U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x809 = 53U;
	int16_t x811 = INT16_MIN;
	uint64_t x812 = UINT64_MAX;
	volatile uint64_t t156 = 178419688LLU;

    t156 = ((x809+x810)^(x811-x812));

    if (t156 != 18446744073709518903LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x813 = 15;
	uint64_t x814 = 999394085521429729LLU;
	volatile uint16_t x815 = 13U;
	volatile int64_t x816 = 318LL;
	uint64_t t157 = 60371038LLU;

    t157 = ((x813+x814)^(x815-x816));

    if (t157 != 17447349988188121663LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x817 = 2LLU;
	uint8_t x818 = 21U;
	int16_t x819 = -1;
	static volatile uint64_t t158 = 12159278LLU;

    t158 = ((x817+x818)^(x819-x820));

    if (t158 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x821 = -1;
	static uint64_t x822 = 12416307194234LLU;
	static int32_t x823 = -1;
	int8_t x824 = INT8_MIN;
	uint64_t t159 = 107103169740LLU;

    t159 = ((x821+x822)^(x823-x824));

    if (t159 != 12416307194118LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x825 = INT16_MIN;
	int32_t x827 = 144028;
	int64_t x828 = -1LL;
	int64_t t160 = -257LL;

    t160 = ((x825+x826)^(x827-x828));

    if (t160 != 4294790498LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x829 = 43U;
	volatile int8_t x831 = INT8_MIN;
	static uint32_t x832 = UINT32_MAX;
	uint32_t t161 = 1726405U;

    t161 = ((x829+x830)^(x831-x832));

    if (t161 != 4294967210U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x833 = INT16_MAX;
	int64_t x834 = INT64_MIN;
	static int64_t t162 = 16578817648153LL;

    t162 = ((x833+x834)^(x835-x836));

    if (t162 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x837 = -20;
	static uint16_t x838 = UINT16_MAX;
	uint16_t x839 = UINT16_MAX;
	int16_t x840 = INT16_MIN;
	volatile int32_t t163 = 504845526;

    t163 = ((x837+x838)^(x839-x840));

    if (t163 != 98324) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x841 = UINT8_MAX;
	int64_t x842 = -1LL;
	static uint16_t x843 = 1U;
	volatile uint16_t x844 = 486U;
	volatile int64_t t164 = 47667903153LL;

    t164 = ((x841+x842)^(x843-x844));

    if (t164 != -283LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x849 = -361;
	uint8_t x851 = 96U;
	uint64_t t165 = 11546533LLU;

    t165 = ((x849+x850)^(x851-x852));

    if (t165 != 18446744069414585367LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x854 = -1869108088036223810LL;
	uint16_t x855 = 30U;
	int16_t x856 = INT16_MIN;
	uint64_t t166 = 1942237400945LLU;

    t166 = ((x853+x854)^(x855-x856));

    if (t166 != 16577635985673295011LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x861 = INT16_MAX;
	static int16_t x862 = 0;
	int16_t x863 = 4524;
	volatile uint16_t x864 = UINT16_MAX;
	static volatile int32_t t167 = -174299;

    t167 = ((x861+x862)^(x863-x864));

    if (t167 != -37294) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x865 = 15402U;
	volatile int16_t x867 = -1;
	static volatile int32_t x868 = INT32_MIN;

    t168 = ((x865+x866)^(x867-x868));

    if (t168 != 2147468276) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x870 = 6U;
	int16_t x871 = INT16_MIN;
	volatile uint16_t x872 = 851U;

    t169 = ((x869+x870)^(x871-x872));

    if (t169 != -33624) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x873 = INT32_MIN;
	volatile uint8_t x874 = 30U;
	static int8_t x875 = -7;
	int64_t x876 = 12897981490990126LL;

    t170 = ((x873+x874)^(x875-x876));

    if (t170 != 12897980783326165LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x877 = 28U;
	static int8_t x879 = -3;
	static int32_t x880 = 11;
	int32_t t171 = -4787;

    t171 = ((x877+x878)^(x879-x880));

    if (t171 != 32750) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x881 = 101U;
	volatile int8_t x882 = -23;
	static int32_t x883 = -7;
	static int32_t t172 = 1;

    t172 = ((x881+x882)^(x883-x884));

    if (t172 != -76) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x885 = -1;
	volatile uint32_t x887 = UINT32_MAX;
	uint32_t t173 = 244440794U;

    t173 = ((x885+x886)^(x887-x888));

    if (t173 != 4294967169U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x889 = -1;
	uint16_t x890 = UINT16_MAX;
	static uint64_t x891 = 301357973660LLU;
	uint16_t x892 = 0U;

    t174 = ((x889+x890)^(x891-x892));

    if (t174 != 301357940578LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x894 = INT8_MIN;
	int32_t x896 = 46;
	volatile int32_t t175 = -268291932;

    t175 = ((x893+x894)^(x895-x896));

    if (t175 != 211) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x897 = INT8_MIN;
	int64_t x898 = -70140279767926LL;
	static volatile uint64_t x899 = 43120924509380281LLU;
	int8_t x900 = INT8_MIN;
	volatile uint64_t t176 = 93LLU;

    t176 = ((x897+x898)^(x899-x900));

    if (t176 != 18403663514478486323LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x901 = INT32_MIN;
	uint16_t x902 = 13U;
	int32_t x903 = INT32_MAX;
	uint16_t x904 = UINT16_MAX;
	static int32_t t177 = -41;

    t177 = ((x901+x902)^(x903-x904));

    if (t177 != -65523) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x905 = -149LL;
	int64_t x906 = -73602646260LL;

    t178 = ((x905+x906)^(x907-x908));

    if (t178 != 19509414134682LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x909 = -1LL;
	int16_t x910 = -55;
	int32_t x911 = -345835;
	uint8_t x912 = UINT8_MAX;
	static int64_t t179 = 11674843LL;

    t179 = ((x909+x910)^(x911-x912));

    if (t179 != 346078LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x913 = -1068929955380927LL;
	static volatile uint64_t x915 = 846954580961713975LLU;

    t180 = ((x913+x914)^(x915-x916));

    if (t180 != 17599169473915690741LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x919 = 40049614LLU;
	uint8_t x920 = UINT8_MAX;
	volatile uint64_t t181 = 89817206729LLU;

    t181 = ((x917+x918)^(x919-x920));

    if (t181 != 40050361LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x921 = INT32_MAX;
	int32_t x923 = INT32_MIN;
	uint64_t x924 = 1577742618735LLU;
	volatile uint64_t t182 = 248682LLU;

    t182 = ((x921+x922)^(x923-x924));

    if (t182 != 18440112940253028585LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x925 = INT32_MIN;
	uint32_t x926 = 157334U;
	volatile uint8_t x927 = 19U;
	static int32_t x928 = 417;
	uint32_t t183 = 1478271361U;

    t183 = ((x925+x926)^(x927-x928));

    if (t183 != 2147326180U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x929 = INT8_MAX;
	static int16_t x931 = INT16_MAX;
	int16_t x932 = 32;

    t184 = ((x929+x930)^(x931-x932));

    if (t184 != -9223372036854743136LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x933 = -1;
	volatile int8_t x934 = INT8_MIN;
	int32_t x935 = INT32_MAX;
	volatile uint64_t x936 = 972LLU;
	volatile uint64_t t185 = 907265148542LLU;

    t185 = ((x933+x934)^(x935-x936));

    if (t185 != 18446744071562068812LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x937 = -1LL;
	int8_t x938 = -1;
	volatile uint64_t t186 = 2822LLU;

    t186 = ((x937+x938)^(x939-x940));

    if (t186 != 489709LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x941 = 604;
	static int8_t x942 = INT8_MIN;
	int32_t x943 = INT32_MIN;
	int32_t t187 = 110;

    t187 = ((x941+x942)^(x943-x944));

    if (t187 != -2147483300) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x945 = INT32_MIN;
	int64_t x946 = -1LL;
	static int32_t x947 = -1;
	uint64_t x948 = 163500LLU;

    t188 = ((x945+x946)^(x947-x948));

    if (t188 != 2147647148LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x949 = -21166LL;
	volatile uint32_t x950 = 14767666U;
	volatile int32_t x951 = 16150;
	static uint64_t x952 = 126761LLU;
	static uint64_t t189 = 26LLU;

    t189 = ((x949+x950)^(x951-x952));

    if (t189 != 18446744073694825577LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x953 = -1;
	int8_t x954 = 5;
	static uint16_t x955 = UINT16_MAX;
	uint32_t x956 = 73782215U;
	volatile uint32_t t190 = 150541007U;

    t190 = ((x953+x954)^(x955-x956));

    if (t190 != 4221250620U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x965 = 66U;
	int16_t x966 = -1;
	uint16_t x967 = UINT16_MAX;
	int64_t x968 = -1LL;
	volatile int64_t t191 = 190005LL;

    t191 = ((x965+x966)^(x967-x968));

    if (t191 != 65601LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x969 = INT64_MAX;
	int64_t x970 = INT64_MIN;
	int32_t x971 = -1;
	int32_t x972 = INT32_MAX;
	volatile int64_t t192 = -252598748520393634LL;

    t192 = ((x969+x970)^(x971-x972));

    if (t192 != 2147483647LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x973 = INT8_MIN;
	uint64_t x974 = 648702232185298LLU;
	int32_t x975 = -7570;
	static volatile uint64_t t193 = 1770595899681LLU;

    t193 = ((x973+x974)^(x975-x976));

    if (t193 != 18446095371477363644LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x977 = -1028;
	int32_t x978 = -5677;
	uint64_t x979 = 13764141193932LLU;
	volatile uint64_t t194 = 8848LLU;

    t194 = ((x977+x978)^(x979-x980));

    if (t194 != 18446730309568364399LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x982 = INT16_MIN;
	uint8_t x983 = UINT8_MAX;
	uint32_t x984 = 30224U;

    t195 = ((x981+x982)^(x983-x984));

    if (t195 != 62736U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x985 = 184;
	uint16_t x986 = 54U;
	static volatile uint16_t x988 = 327U;
	static volatile int32_t t196 = -6954;

    t196 = ((x985+x986)^(x987-x988));

    if (t196 != -40) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x993 = 761654776433LLU;
	int16_t x994 = INT16_MIN;
	int64_t x995 = -27LL;
	uint8_t x996 = UINT8_MAX;
	static volatile uint64_t t197 = 705685LLU;

    t197 = ((x993+x994)^(x995-x996));

    if (t197 != 18446743312054807703LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x997 = INT8_MIN;
	static int64_t x999 = 1024156875903LL;
	int16_t x1000 = INT16_MIN;
	volatile int64_t t198 = -245439961523799103LL;

    t198 = ((x997+x998)^(x999-x1000));

    if (t198 != 1024156910336LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1002 = INT16_MAX;
	uint8_t x1003 = 1U;
	int32_t t199 = -113778203;

    t199 = ((x1001+x1002)^(x1003-x1004));

    if (t199 != -32641) { NG(); } else { ; }
	
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

