
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

static uint8_t x1 = UINT8_MAX;
int64_t x10 = -48LL;
int8_t x19 = INT8_MIN;
volatile int8_t x20 = INT8_MIN;
int32_t x37 = 52;
volatile uint64_t t11 = 110913799796134317LLU;
volatile uint64_t t12 = 207488042543611537LLU;
int8_t x66 = INT8_MIN;
int64_t x70 = INT64_MIN;
uint32_t x72 = 17808U;
int16_t x78 = -1;
int64_t t15 = 3160875165150695LL;
uint64_t x81 = 250857LLU;
static int64_t x85 = 5216697LL;
volatile int64_t t17 = -94052LL;
volatile uint16_t x104 = 12U;
int16_t x117 = 777;
int8_t x130 = INT8_MAX;
int8_t x132 = INT8_MIN;
volatile int32_t t26 = 278;
static volatile int32_t t31 = -6109;
uint16_t x192 = 105U;
uint64_t x196 = UINT64_MAX;
int16_t x205 = 82;
static volatile uint64_t x211 = UINT64_MAX;
volatile int16_t x228 = -1;
int64_t x242 = -386345LL;
int16_t x244 = INT16_MIN;
volatile int8_t x245 = INT8_MIN;
int16_t x246 = INT16_MIN;
int8_t x259 = -19;
uint32_t x262 = 110778U;
volatile int64_t x263 = 393325652154083LL;
static int64_t x284 = 1LL;
uint32_t x289 = 1U;
int16_t x293 = -1;
volatile uint32_t t47 = 84321812U;
int32_t x298 = INT32_MIN;
static volatile int32_t x299 = INT32_MIN;
volatile uint32_t t48 = 1U;
int8_t x309 = -1;
uint8_t x318 = 0U;
int16_t x330 = 1;
int64_t x331 = -1LL;
int8_t x335 = INT8_MAX;
volatile uint64_t t55 = 3976130517434325562LLU;
static int8_t x351 = -15;
int8_t x352 = 2;
volatile uint8_t x354 = 2U;
uint8_t x367 = 60U;
static volatile uint64_t x373 = UINT64_MAX;
volatile uint16_t x379 = UINT16_MAX;
int16_t x381 = -1;
volatile int32_t x386 = -17993586;
uint16_t x389 = 29U;
uint64_t x390 = 47606820393870692LLU;
volatile int32_t x391 = INT32_MIN;
static int8_t x396 = -1;
uint32_t x398 = UINT32_MAX;
int16_t x453 = -1;
uint8_t x456 = 3U;
int32_t t76 = 437;
static uint64_t x469 = 17009LLU;
int16_t x476 = -1;
volatile uint32_t t80 = 27125448U;
int8_t x488 = 7;
uint16_t x492 = 116U;
static volatile uint16_t x493 = 2U;
uint16_t x503 = 3922U;
volatile int32_t t84 = -14575240;
static uint32_t x510 = UINT32_MAX;
uint32_t x517 = 6576712U;
int64_t t86 = -2013610125349889424LL;
volatile int64_t x527 = -1LL;
int8_t x529 = 0;
volatile uint64_t t88 = 14381935995036LLU;
static uint64_t x550 = 1081454646LLU;
uint8_t x558 = 25U;
int16_t x561 = INT16_MIN;
int64_t x562 = 264393694299202898LL;
volatile uint64_t t92 = 1722334LLU;
uint64_t t93 = 1771021LLU;
static int16_t x580 = INT16_MIN;
int64_t x583 = -85346420242490LL;
uint8_t x590 = 119U;
volatile uint64_t t98 = 136498249021764245LLU;
volatile int64_t t99 = -3045864780LL;
int64_t x610 = -22322231794114LL;
static int64_t x612 = -1LL;
uint64_t x617 = 111283996947776LLU;
volatile uint32_t t105 = 413292930U;
uint32_t x662 = 210U;
volatile uint8_t x665 = 65U;
int16_t x677 = -1;
int8_t x678 = INT8_MIN;
volatile uint64_t x679 = 18LLU;
uint64_t t111 = 3LLU;
static int32_t x691 = INT32_MIN;
volatile int64_t t113 = 0LL;
volatile int16_t x698 = -15530;
uint32_t x712 = UINT32_MAX;
uint32_t t116 = 4546U;
int16_t x725 = -1;
volatile uint64_t t118 = 89LLU;
volatile uint64_t x742 = UINT64_MAX;
int64_t x750 = INT64_MAX;
uint64_t t123 = 1806LLU;
static volatile int32_t t125 = -307909500;
volatile int16_t x777 = INT16_MIN;
int8_t x780 = INT8_MIN;
int32_t t127 = -437598795;
int64_t x781 = INT64_MIN;
int64_t t128 = 18781451584583999LL;
uint32_t x787 = 7U;
int8_t x792 = -22;
uint32_t t130 = 1U;
static int32_t t131 = -786256;
int64_t x801 = INT64_MAX;
int64_t x802 = INT64_MAX;
int64_t x810 = INT64_MAX;
uint64_t x812 = 5665378537767171LLU;
uint32_t x836 = UINT32_MAX;
uint16_t x837 = UINT16_MAX;
volatile int8_t x839 = 0;
int8_t x843 = -9;
static int16_t x858 = INT16_MAX;
static int16_t x865 = 246;
int32_t x868 = INT32_MIN;
int16_t x875 = 1229;
static int16_t x880 = INT16_MIN;
uint8_t x884 = UINT8_MAX;
int32_t t147 = -1105039;
int64_t x908 = INT64_MIN;
uint64_t x914 = 75LLU;
uint32_t x926 = 9960U;
uint8_t x930 = UINT8_MAX;
int32_t t154 = -44095126;
int8_t x939 = INT8_MAX;
static volatile int16_t x952 = INT16_MAX;
static int16_t x953 = INT16_MAX;
uint16_t x955 = 19U;
uint32_t x963 = 7U;
int16_t x974 = INT16_MIN;
volatile uint32_t t161 = 24064U;
int64_t x979 = -1LL;
uint64_t t162 = 501707LLU;
volatile int16_t x981 = INT16_MIN;
volatile int32_t t163 = -3;
volatile uint64_t x988 = UINT64_MAX;
volatile int8_t x992 = INT8_MIN;
volatile uint64_t x993 = 7804LLU;
static int32_t x994 = INT32_MAX;
static int16_t x1001 = 93;
int16_t x1002 = INT16_MIN;
int8_t x1004 = INT8_MIN;
int32_t x1007 = -1;
int32_t x1008 = -1;
int8_t x1010 = 29;
volatile int16_t x1025 = INT16_MIN;
volatile int64_t x1040 = INT64_MIN;
int16_t x1051 = INT16_MIN;
static int32_t x1052 = 8;
uint8_t x1056 = 2U;
volatile uint32_t x1067 = 353U;
static volatile int16_t x1069 = INT16_MAX;
uint64_t x1072 = 38247LLU;
uint32_t x1073 = UINT32_MAX;
uint64_t x1091 = 36723100LLU;
static volatile int32_t t182 = 1;
int8_t x1097 = INT8_MIN;
int64_t x1098 = -16873584484372026LL;
volatile uint64_t x1099 = 59686880200558336LLU;
int16_t x1100 = INT16_MIN;
volatile int8_t x1129 = INT8_MIN;
int16_t x1153 = -330;
volatile uint64_t x1154 = UINT64_MAX;
int64_t x1166 = INT64_MAX;
uint64_t t190 = 23999523459022LLU;
int8_t x1178 = INT8_MIN;
int64_t x1184 = -45422857997LL;
uint32_t x1186 = 24U;
static volatile uint64_t t193 = 134LLU;
uint64_t x1190 = 0LLU;
int16_t x1195 = 10;
int8_t x1205 = 0;
volatile uint16_t x1216 = UINT16_MAX;
uint32_t t197 = 15885U;
int64_t t199 = 8904799LL;


void f0(void) {
    	int32_t x2 = 22;
	int16_t x3 = -7120;
	static volatile int32_t x4 = 1973696;
	int32_t t0 = 1374;

    t0 = ((x1-x2)*(x3^x4));

    if (t0 != -458458256) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = -1LL;
	static int64_t x8 = -1157434LL;
	volatile int64_t t1 = 3723714139309LL;

    t1 = ((x5-x6)*(x7^x8));

    if (t1 != 2485568293004160LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 1;
	static uint16_t x11 = 220U;
	int8_t x12 = 1;
	int64_t t2 = 44302635LL;

    t2 = ((x9-x10)*(x11^x12));

    if (t2 != 10829LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	uint16_t x15 = 251U;
	int32_t x16 = -1;
	int32_t t3 = -522;

    t3 = ((x13-x14)*(x15^x16));

    if (t3 != -32004) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	volatile int16_t x18 = INT16_MIN;
	int32_t t4 = -123801612;

    t4 = ((x17-x18)*(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 63U;
	int16_t x24 = 3302;
	uint32_t t5 = 773963356U;

    t5 = ((x21-x22)*(x23^x24));

    if (t5 != 107770663U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MAX;
	volatile int32_t x30 = -2;
	int32_t x31 = 34;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -128809;

    t6 = ((x29-x30)*(x31^x32));

    if (t6 != -12126) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 93U;
	uint8_t x34 = 5U;
	volatile int8_t x35 = -18;
	uint32_t x36 = 448U;
	volatile uint32_t t7 = 16424323U;

    t7 = ((x33-x34)*(x35^x36));

    if (t7 != 4294926288U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x38 = -1;
	volatile int16_t x39 = -1;
	int32_t x40 = -9011630;
	volatile int32_t t8 = -29682;

    t8 = ((x37-x38)*(x39^x40));

    if (t8 != 477616337) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x41 = 19;
	static volatile uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 6072769LLU;
	volatile uint8_t x44 = 45U;
	uint64_t t9 = 3414494400121817LLU;

    t9 = ((x41-x42)*(x43^x44));

    if (t9 != 121456240LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	uint16_t x46 = 8U;
	volatile uint64_t x47 = 1918289LLU;
	uint8_t x48 = 0U;
	uint64_t t10 = 17LLU;

    t10 = ((x45-x46)*(x47^x48));

    if (t10 != 9223372036837511207LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MAX;
	int32_t x50 = 50299;
	uint8_t x51 = 7U;
	volatile uint64_t x52 = UINT64_MAX;

    t11 = ((x49-x50)*(x51^x52));

    if (t11 != 402400LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 79428379890LLU;
	int32_t x54 = INT32_MIN;
	static uint32_t x55 = 127431243U;
	volatile int32_t x56 = -1;

    t12 = ((x53-x54)*(x55^x56));

    if (t12 != 7928958940875342888LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = 4753;
	static uint16_t x67 = 113U;
	int32_t x68 = -1;
	volatile int32_t t13 = -121932443;

    t13 = ((x65-x66)*(x67^x68));

    if (t13 != -556434) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = -2;
	uint64_t x71 = UINT64_MAX;
	volatile uint64_t t14 = 492363229095273236LLU;

    t14 = ((x69-x70)*(x71^x72));

    if (t14 != 9223372036854811426LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x77 = -1LL;
	uint16_t x79 = 11279U;
	uint32_t x80 = 6567832U;

    t15 = ((x77-x78)*(x79^x80));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x82 = 1;
	uint32_t x83 = 24462093U;
	uint32_t x84 = 15U;
	uint64_t t16 = 76087515LLU;

    t16 = ((x81-x82)*(x83^x84));

    if (t16 != 6136460042192LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x86 = -1;
	int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MIN;

    t17 = ((x85-x86)*(x87^x88));

    if (t17 != -5216698LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	uint64_t x90 = UINT64_MAX;
	int8_t x91 = -1;
	int32_t x92 = INT32_MIN;
	uint64_t t18 = 126LLU;

    t18 = ((x89-x90)*(x91^x92));

    if (t18 != 13835058059577131007LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x93 = INT64_MIN;
	uint64_t x94 = UINT64_MAX;
	volatile uint64_t x95 = 935190170117616886LLU;
	volatile uint32_t x96 = 2393673U;
	uint64_t t19 = 800847LLU;

    t19 = ((x93-x94)*(x95^x96));

    if (t19 != 10158562206974259903LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = UINT64_MAX;
	static int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t20 = 1206184366LLU;

    t20 = ((x97-x98)*(x99^x100));

    if (t20 != 8355840LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = -1LL;
	uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	volatile uint64_t t21 = 3131659534LLU;

    t21 = ((x101-x102)*(x103^x104));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x105 = UINT8_MAX;
	volatile int8_t x106 = 0;
	static uint32_t x107 = 586U;
	int32_t x108 = INT32_MIN;
	uint32_t t22 = 29125U;

    t22 = ((x105-x106)*(x107^x108));

    if (t22 != 2147633078U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x118 = UINT32_MAX;
	static volatile uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MAX;
	uint32_t t23 = 5538U;

    t23 = ((x117-x118)*(x119^x120));

    if (t23 != 4269473792U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x129 = INT8_MAX;
	int16_t x131 = -25;
	volatile int32_t t24 = 1;

    t24 = ((x129-x130)*(x131^x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x133 = -1;
	static int64_t x134 = INT64_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t x136 = 23996611;
	volatile uint64_t t25 = 277587057050008LLU;

    t25 = ((x133-x134)*(x135^x136));

    if (t25 != 23996612LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x149 = -1530;
	int16_t x150 = INT16_MIN;
	int16_t x151 = -80;
	uint8_t x152 = 55U;

    t26 = ((x149-x150)*(x151^x152));

    if (t26 != -3779798) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x153 = INT16_MAX;
	uint8_t x154 = 13U;
	static uint64_t x155 = 2941976283823LLU;
	uint8_t x156 = 85U;
	uint64_t t27 = 191LLU;

    t27 = ((x153-x154)*(x155^x156));

    if (t27 != 96361491202795092LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x157 = UINT16_MAX;
	uint64_t x158 = 11184954104878925LLU;
	int32_t x159 = -959535;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t28 = 138520233658336526LLU;

    t28 = ((x157-x158)*(x159^x160));

    if (t28 != 10374694239476531026LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x169 = 58U;
	volatile uint16_t x170 = 2628U;
	static int32_t x171 = -81663;
	uint8_t x172 = 26U;
	int32_t t29 = -96089;

    t29 = ((x169-x170)*(x171^x172));

    if (t29 != 209807090) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = -101;
	int64_t x174 = 302LL;
	uint64_t x175 = UINT64_MAX;
	static int16_t x176 = INT16_MIN;
	volatile uint64_t t30 = 27458949LLU;

    t30 = ((x173-x174)*(x175^x176));

    if (t30 != 18446744073696346515LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x185 = -59931403;
	int16_t x186 = INT16_MIN;
	volatile int16_t x187 = -1;
	uint16_t x188 = 0U;

    t31 = ((x185-x186)*(x187^x188));

    if (t31 != 59898635) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x189 = -1;
	int16_t x190 = -1;
	int16_t x191 = -1;
	int32_t t32 = 40;

    t32 = ((x189-x190)*(x191^x192));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x193 = 39U;
	int32_t x194 = INT32_MAX;
	int8_t x195 = INT8_MIN;
	volatile uint64_t t33 = 5047365LLU;

    t33 = ((x193-x194)*(x195^x196));

    if (t33 != 18446743800979133400LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x197 = INT32_MIN;
	int16_t x198 = -6640;
	uint32_t x199 = UINT32_MAX;
	static uint16_t x200 = 2404U;
	static volatile uint32_t t34 = 86914031U;

    t34 = ((x197-x198)*(x199^x200));

    if (t34 != 2131514448U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x206 = 1;
	int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t35 = 1;

    t35 = ((x205-x206)*(x207^x208));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x209 = 0;
	static int16_t x210 = INT16_MIN;
	int64_t x212 = 24910LL;
	uint64_t t36 = 2LLU;

    t36 = ((x209-x210)*(x211^x212));

    if (t36 != 18446744072893267968LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = -1;
	uint64_t x216 = 1116LLU;
	uint64_t t37 = 7162632771LLU;

    t37 = ((x213-x214)*(x215^x216));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x225 = -1;
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = INT8_MIN;
	static int32_t t38 = 423700295;

    t38 = ((x225-x226)*(x227^x228));

    if (t38 != 16129) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = UINT64_MAX;
	volatile int16_t x236 = 346;
	static volatile uint64_t t39 = 7610027528846LLU;

    t39 = ((x233-x234)*(x235^x236));

    if (t39 != 9223372782031601664LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x241 = -33088796LL;
	static uint32_t x243 = UINT32_MAX;
	int64_t t40 = -29493442LL;

    t40 = ((x241-x242)*(x243^x244));

    if (t40 != -1071561211917LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x247 = -2;
	uint16_t x248 = 1600U;
	volatile int32_t t41 = 13012760;

    t41 = ((x245-x246)*(x247^x248));

    if (t41 != -52289280) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x249 = 2U;
	uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = -124727;
	int8_t x252 = -1;
	int32_t t42 = -6;

    t42 = ((x249-x250)*(x251^x252));

    if (t42 != -31555678) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x257 = 0;
	static int8_t x258 = INT8_MAX;
	int16_t x260 = -1;
	volatile int32_t t43 = 0;

    t43 = ((x257-x258)*(x259^x260));

    if (t43 != -2286) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x261 = UINT64_MAX;
	int16_t x264 = 1;
	static uint64_t t44 = 8182457689742LLU;

    t44 = ((x261-x262)*(x263^x264));

    if (t44 != 11768009801151604970LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x281 = 31059LLU;
	static volatile int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	volatile uint64_t t45 = 59627LLU;

    t45 = ((x281-x282)*(x283^x284));

    if (t45 != 18446744073705606996LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x290 = 36609U;
	static int8_t x291 = 1;
	int8_t x292 = INT8_MAX;
	static uint32_t t46 = 591U;

    t46 = ((x289-x290)*(x291^x292));

    if (t46 != 4290354688U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x294 = -11;
	uint32_t x295 = UINT32_MAX;
	int16_t x296 = -2;

    t47 = ((x293-x294)*(x295^x296));

    if (t47 != 10U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint32_t x297 = 665U;
	static int8_t x300 = INT8_MIN;

    t48 = ((x297-x298)*(x299^x300));

    if (t48 != 2147398528U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x301 = UINT64_MAX;
	static int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MAX;
	uint16_t x304 = UINT16_MAX;
	uint64_t t49 = 2LLU;

    t49 = ((x301-x302)*(x303^x304));

    if (t49 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x310 = 24739114263LLU;
	uint64_t x311 = 26526LLU;
	int16_t x312 = INT16_MIN;
	uint64_t t50 = 127LLU;

    t50 = ((x309-x310)*(x311^x312));

    if (t50 != 154421551235888LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x317 = -54;
	volatile uint8_t x319 = UINT8_MAX;
	int32_t x320 = -1;
	static int32_t t51 = -16306;

    t51 = ((x317-x318)*(x319^x320));

    if (t51 != 13824) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x321 = 3786U;
	static volatile uint64_t x322 = 3446786624694LLU;
	uint16_t x323 = 2U;
	static int32_t x324 = INT32_MIN;
	uint64_t t52 = 9196195051463LLU;

    t52 = ((x321-x322)*(x323^x324));

    if (t52 != 4773526094001472552LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x325 = 1;
	int8_t x326 = 2;
	uint8_t x327 = 2U;
	int64_t x328 = INT64_MAX;
	static int64_t t53 = -23608315LL;

    t53 = ((x325-x326)*(x327^x328));

    if (t53 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x329 = UINT8_MAX;
	int32_t x332 = INT32_MAX;
	volatile int64_t t54 = -639515565635243590LL;

    t54 = ((x329-x330)*(x331^x332));

    if (t54 != -545460846592LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x333 = INT64_MAX;
	static uint64_t x334 = 90226884LLU;
	volatile int32_t x336 = INT32_MIN;

    t55 = ((x333-x334)*(x335^x336));

    if (t55 != 9417132785543437893LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x337 = 1768415792U;
	uint32_t x338 = 2059715243U;
	int64_t x339 = 8000LL;
	static int8_t x340 = -1;
	static int64_t t56 = 14662984834LL;

    t56 = ((x337-x338)*(x339^x340));

    if (t56 != -32033346427845LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x341 = 13U;
	int8_t x342 = INT8_MAX;
	int8_t x343 = -1;
	static uint32_t x344 = UINT32_MAX;
	uint32_t t57 = 523417U;

    t57 = ((x341-x342)*(x343^x344));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x349 = INT16_MIN;
	volatile int8_t x350 = -1;
	int32_t t58 = 7821998;

    t58 = ((x349-x350)*(x351^x352));

    if (t58 != 425971) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x353 = 89258U;
	int64_t x355 = 2385926816689LL;
	uint32_t x356 = UINT32_MAX;
	int64_t t59 = 374183992409624LL;

    t59 = ((x353-x354)*(x355^x356));

    if (t59 != 212945344729160496LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 0U;
	static int64_t x359 = INT64_MIN;
	uint32_t x360 = 2527342U;
	volatile uint64_t t60 = 8LLU;

    t60 = ((x357-x358)*(x359^x360));

    if (t60 != 9223372036852248466LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x365 = 7U;
	volatile uint16_t x366 = 24U;
	int32_t x368 = INT32_MAX;
	volatile uint32_t t61 = 14U;

    t61 = ((x365-x366)*(x367^x368));

    if (t61 != 2147484685U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x369 = INT16_MIN;
	uint64_t x370 = 722044232425LLU;
	uint16_t x371 = 778U;
	static uint8_t x372 = UINT8_MAX;
	uint64_t t62 = 2225425122513112746LLU;

    t62 = ((x369-x370)*(x371^x372));

    if (t62 != 18446012642868911107LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x374 = 2561378985LLU;
	static int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	uint64_t t63 = 2437694959212721691LLU;

    t63 = ((x373-x374)*(x375^x376));

    if (t63 != 2561378986LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x377 = -102440817LL;
	uint64_t x378 = 55774LLU;
	volatile uint64_t x380 = 94246227LLU;
	volatile uint64_t t64 = 327LLU;

    t64 = ((x377-x378)*(x379^x380));

    if (t64 != 18437078558671128812LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x382 = 119U;
	int8_t x383 = -1;
	int8_t x384 = INT8_MIN;
	volatile int32_t t65 = -756644276;

    t65 = ((x381-x382)*(x383^x384));

    if (t65 != -15240) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x385 = 136585589667096251LLU;
	int32_t x387 = 13;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t66 = 160728LLU;

    t66 = ((x385-x386)*(x387^x388));

    if (t66 != 13210538995697942601LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x392 = -228863LL;
	volatile uint64_t t67 = 13122875798714LLU;

    t67 = ((x389-x390)*(x391^x392));

    if (t67 != 6007404495279459513LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x393 = INT16_MIN;
	static uint64_t x394 = 0LLU;
	static uint32_t x395 = UINT32_MAX;
	uint64_t t68 = 976441537941903097LLU;

    t68 = ((x393-x394)*(x395^x396));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x397 = -3;
	volatile uint8_t x399 = 35U;
	int32_t x400 = INT32_MAX;
	volatile uint32_t t69 = 631720U;

    t69 = ((x397-x398)*(x399^x400));

    if (t69 != 72U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x401 = 30U;
	volatile uint64_t x402 = 883911685504361551LLU;
	uint32_t x403 = 1206900277U;
	int64_t x404 = 1038322838918LL;
	static uint64_t t70 = 391LLU;

    t70 = ((x401-x402)*(x403^x404));

    if (t70 != 11981801843874031293LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x405 = -1LL;
	int64_t x406 = -1LL;
	static int8_t x407 = 6;
	int8_t x408 = INT8_MAX;
	static int64_t t71 = 612652254LL;

    t71 = ((x405-x406)*(x407^x408));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	volatile int64_t x426 = -1LL;
	int32_t x427 = 172;
	int16_t x428 = INT16_MIN;
	static int64_t t72 = -31177LL;

    t72 = ((x425-x426)*(x427^x428));

    if (t72 != -8344576LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x429 = -1;
	static uint16_t x430 = UINT16_MAX;
	volatile int32_t x431 = -1;
	int8_t x432 = INT8_MAX;
	int32_t t73 = 0;

    t73 = ((x429-x430)*(x431^x432));

    if (t73 != 8388608) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x441 = -1;
	int64_t x442 = -1LL;
	int16_t x443 = -58;
	int16_t x444 = INT16_MIN;
	static int64_t t74 = -3426570882170139955LL;

    t74 = ((x441-x442)*(x443^x444));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x445 = UINT8_MAX;
	int64_t x446 = -1158567670919590683LL;
	volatile uint64_t x447 = UINT64_MAX;
	int64_t x448 = INT64_MAX;
	uint64_t t75 = 1709379456LLU;

    t75 = ((x445-x446)*(x447^x448));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x454 = 75U;
	static int32_t x455 = 86;

    t76 = ((x453-x454)*(x455^x456));

    if (t76 != -6460) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	static int16_t x459 = INT16_MIN;
	volatile int16_t x460 = INT16_MAX;
	int32_t t77 = -136936;

    t77 = ((x457-x458)*(x459^x460));

    if (t77 != -2147450880) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x470 = INT16_MIN;
	uint32_t x471 = 7134U;
	int32_t x472 = INT32_MIN;
	uint64_t t78 = 2498401241618LLU;

    t78 = ((x469-x470)*(x471^x472));

    if (t78 != 106895648655614LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x473 = -1;
	uint8_t x474 = 40U;
	int64_t x475 = -1LL;
	volatile int64_t t79 = 5551843739LL;

    t79 = ((x473-x474)*(x475^x476));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x477 = -1;
	static int16_t x478 = INT16_MAX;
	static uint32_t x479 = 385U;
	int32_t x480 = -981;

    t80 = ((x477-x478)*(x479^x480));

    if (t80 != 19595264U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x485 = 5U;
	uint8_t x486 = 125U;
	int8_t x487 = INT8_MIN;
	static volatile int32_t t81 = 1153692;

    t81 = ((x485-x486)*(x487^x488));

    if (t81 != 14520) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x489 = 121U;
	volatile int8_t x490 = 24;
	int8_t x491 = INT8_MIN;
	int32_t t82 = 4726;

    t82 = ((x489-x490)*(x491^x492));

    if (t82 != -1164) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x494 = INT8_MAX;
	volatile uint32_t x495 = 239U;
	int64_t x496 = -1LL;
	volatile int64_t t83 = -1LL;

    t83 = ((x493-x494)*(x495^x496));

    if (t83 != 30000LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x501 = -1;
	static int16_t x502 = 194;
	volatile uint8_t x504 = UINT8_MAX;

    t84 = ((x501-x502)*(x503^x504));

    if (t84 != -782535) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x509 = 42697245352LLU;
	int32_t x511 = -14510940;
	int64_t x512 = 4499LL;
	uint64_t t85 = 442LLU;

    t85 = ((x509-x510)*(x511^x512));

    if (t85 != 17889339270365060943LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x518 = 66;
	static volatile int64_t x519 = -1LL;
	int8_t x520 = INT8_MIN;

    t86 = ((x517-x518)*(x519^x520));

    if (t86 != 835234042LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x525 = -1;
	uint8_t x526 = 0U;
	int8_t x528 = -1;
	volatile int64_t t87 = -10LL;

    t87 = ((x525-x526)*(x527^x528));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x530 = INT64_MAX;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 357178LLU;

    t88 = ((x529-x530)*(x531^x532));

    if (t88 != 18446744073709220666LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x549 = UINT32_MAX;
	int32_t x551 = INT32_MIN;
	volatile uint64_t x552 = UINT64_MAX;
	uint64_t t89 = 672548082957LLU;

    t89 = ((x549-x550)*(x551^x552));

    if (t89 != 6900965863155150903LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x553 = INT32_MAX;
	int32_t x554 = 3263;
	uint64_t x555 = UINT64_MAX;
	static volatile int64_t x556 = INT64_MIN;
	uint64_t t90 = 1598481175LLU;

    t90 = ((x553-x554)*(x555^x556));

    if (t90 != 18446744071562071232LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x557 = -1;
	uint64_t x559 = UINT64_MAX;
	static volatile int32_t x560 = -1;
	uint64_t t91 = 1128666959089767219LLU;

    t91 = ((x557-x558)*(x559^x560));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x563 = 8263652LLU;
	uint16_t x564 = 228U;

    t92 = ((x561-x562)*(x563^x564));

    if (t92 != 16722425118399767040LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x565 = 120734U;
	int32_t x566 = INT32_MAX;
	int8_t x567 = -6;
	static uint64_t x568 = 96LLU;

    t93 = ((x565-x566)*(x567^x568));

    if (t93 != 18446743854653904550LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x573 = UINT16_MAX;
	volatile int16_t x574 = -1;
	uint8_t x575 = 0U;
	uint8_t x576 = 4U;
	volatile int32_t t94 = -12286298;

    t94 = ((x573-x574)*(x575^x576));

    if (t94 != 262144) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x577 = UINT8_MAX;
	uint8_t x578 = UINT8_MAX;
	int32_t x579 = INT32_MIN;
	volatile int32_t t95 = 429;

    t95 = ((x577-x578)*(x579^x580));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x581 = -1;
	uint64_t x582 = 219803420333039LLU;
	uint32_t x584 = 124U;
	volatile uint64_t t96 = 503462221491LLU;

    t96 = ((x581-x582)*(x583^x584));

    if (t96 != 10172265570735879072LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x591 = INT8_MAX;
	int16_t x592 = INT16_MAX;
	static int32_t t97 = 53888;

    t97 = ((x589-x590)*(x591^x592));

    if (t97 != -1073431680) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x597 = INT8_MAX;
	uint64_t x598 = 217LLU;
	int64_t x599 = -1LL;
	static int64_t x600 = -1098446LL;

    t98 = ((x597-x598)*(x599^x600));

    if (t98 != 18446744073610691566LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x601 = 417957U;
	uint8_t x602 = 4U;
	static int16_t x603 = 0;
	int64_t x604 = -42LL;

    t99 = ((x601-x602)*(x603^x604));

    if (t99 != -17554026LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x605 = INT64_MAX;
	uint32_t x606 = 186648U;
	int32_t x607 = -1;
	uint32_t x608 = UINT32_MAX;
	volatile int64_t t100 = 459695LL;

    t100 = ((x605-x606)*(x607^x608));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x609 = -29127;
	static int32_t x611 = -1;
	int64_t t101 = 4144671380LL;

    t101 = ((x609-x610)*(x611^x612));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x613 = 3114LLU;
	static uint64_t x614 = 16486902624LLU;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -1LL;
	volatile uint64_t t102 = 345539369LLU;

    t102 = ((x613-x614)*(x615^x616));

    if (t102 != 18446203847473307446LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x618 = -12;
	volatile int32_t x619 = -1;
	static int32_t x620 = 3522064;
	uint64_t t103 = 118761157858713LLU;

    t103 = ((x617-x618)*(x619^x620));

    if (t103 != 13878898911699193332LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	uint32_t x622 = 344832242U;
	int8_t x623 = INT8_MIN;
	static int8_t x624 = INT8_MIN;
	volatile uint32_t t104 = 23320081U;

    t104 = ((x621-x622)*(x623^x624));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x633 = INT16_MIN;
	uint32_t x634 = UINT32_MAX;
	volatile uint16_t x635 = 3U;
	uint16_t x636 = UINT16_MAX;

    t105 = ((x633-x634)*(x635^x636));

    if (t105 != 2147680252U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x645 = -49;
	int16_t x646 = -1;
	volatile int32_t x647 = -386;
	int16_t x648 = 111;
	int32_t t106 = 7;

    t106 = ((x645-x646)*(x647^x648));

    if (t106 != 23760) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x649 = -1;
	volatile uint64_t x650 = UINT64_MAX;
	volatile uint32_t x651 = 63855U;
	uint64_t x652 = UINT64_MAX;
	uint64_t t107 = 4791018625664LLU;

    t107 = ((x649-x650)*(x651^x652));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x653 = -1757;
	uint16_t x654 = 14913U;
	uint8_t x655 = 21U;
	uint32_t x656 = UINT32_MAX;
	uint32_t t108 = 1637198023U;

    t108 = ((x653-x654)*(x655^x656));

    if (t108 != 366740U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x661 = 2U;
	static int16_t x663 = INT16_MIN;
	static int32_t x664 = -1;
	volatile uint32_t t109 = 3058U;

    t109 = ((x661-x662)*(x663^x664));

    if (t109 != 4288151760U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x666 = -103;
	static int8_t x667 = -1;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t110 = 1;

    t110 = ((x665-x666)*(x667^x668));

    if (t110 != -43008) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x680 = INT8_MAX;

    t111 = ((x677-x678)*(x679^x680));

    if (t111 != 13843LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x689 = 11418U;
	uint64_t x690 = 14942LLU;
	int64_t x692 = INT64_MIN;
	volatile uint64_t t112 = 32047196594636LLU;

    t112 = ((x689-x690)*(x691^x692));

    if (t112 != 7567732375552LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x693 = 47;
	volatile int8_t x694 = -1;
	int16_t x695 = -232;
	static int64_t x696 = 124292763679255135LL;

    t113 = ((x693-x694)*(x695^x696));

    if (t113 != -5966052656604250800LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x699 = UINT64_MAX;
	uint8_t x700 = 36U;
	uint64_t t114 = 25781619245LLU;

    t114 = ((x697-x698)*(x699^x700));

    if (t114 != 9223372036854201198LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x705 = -1LL;
	int16_t x706 = 3187;
	uint32_t x707 = UINT32_MAX;
	volatile uint64_t x708 = 28916751685981LLU;
	uint64_t t115 = 129899218942LLU;

    t115 = ((x705-x706)*(x707^x708));

    if (t115 != 18354563108050101912LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x709 = 11;
	uint32_t x710 = 3717U;
	int8_t x711 = 43;

    t116 = ((x709-x710)*(x711^x712));

    if (t116 != 163064U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x726 = -1;
	uint32_t x727 = UINT32_MAX;
	static int16_t x728 = -1;
	static volatile uint32_t t117 = 143U;

    t117 = ((x725-x726)*(x727^x728));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x729 = 21;
	uint64_t x730 = 278LLU;
	static int32_t x731 = 51688;
	int64_t x732 = 76216326430912440LL;

    t118 = ((x729-x730)*(x731^x732));

    if (t118 != 17305892254687857072LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x733 = INT16_MIN;
	uint32_t x734 = 3U;
	uint64_t x735 = UINT64_MAX;
	static int64_t x736 = INT64_MIN;
	volatile uint64_t t119 = 356970873163LLU;

    t119 = ((x733-x734)*(x735^x736));

    if (t119 != 9223372032559841283LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x737 = UINT16_MAX;
	static int8_t x738 = -1;
	volatile uint32_t x739 = 1U;
	static uint16_t x740 = 4U;
	volatile uint32_t t120 = 10038071U;

    t120 = ((x737-x738)*(x739^x740));

    if (t120 != 327680U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x741 = -1;
	int16_t x743 = 34;
	int8_t x744 = -1;
	uint64_t t121 = 48528616LLU;

    t121 = ((x741-x742)*(x743^x744));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x746 = 3259888LL;
	uint32_t x747 = UINT32_MAX;
	static int16_t x748 = -510;
	volatile int64_t t122 = -6760LL;

    t122 = ((x745-x746)*(x747^x748));

    if (t122 != -1094728459824LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x749 = 2LLU;
	static int8_t x751 = INT8_MIN;
	static int32_t x752 = INT32_MIN;

    t123 = ((x749-x750)*(x751^x752));

    if (t123 != 6442450560LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x753 = -4;
	volatile uint64_t x754 = UINT64_MAX;
	uint16_t x755 = 185U;
	int8_t x756 = 8;
	static volatile uint64_t t124 = 256379894381362LLU;

    t124 = ((x753-x754)*(x755^x756));

    if (t124 != 18446744073709551085LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x761 = INT8_MAX;
	int16_t x762 = INT16_MIN;
	int8_t x763 = -1;
	int32_t x764 = -1;

    t125 = ((x761-x762)*(x763^x764));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x773 = 43542172U;
	int16_t x774 = INT16_MIN;
	int64_t x775 = INT64_MIN;
	uint64_t x776 = 16408511267157LLU;
	uint64_t t126 = 122309203241467682LLU;

    t126 = ((x773-x774)*(x775^x776));

    if (t126 != 14023619154727284172LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x778 = -113;
	int16_t x779 = 7472;

    t127 = ((x777-x778)*(x779^x780));

    if (t127 != 245043120) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x782 = INT64_MIN;
	static int32_t x783 = INT32_MIN;
	int64_t x784 = -2082487779LL;

    t128 = ((x781-x782)*(x783^x784));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x785 = 1U;
	int64_t x786 = -1LL;
	static int16_t x788 = 65;
	volatile int64_t t129 = -6295506865746976LL;

    t129 = ((x785-x786)*(x787^x788));

    if (t129 != 140LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x789 = 262034834U;
	uint8_t x790 = UINT8_MAX;
	int16_t x791 = -17;

    t130 = ((x789-x790)*(x791^x792));

    if (t130 != 1310172895U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x793 = INT16_MIN;
	uint16_t x794 = 130U;
	volatile int32_t x795 = 54877;
	int8_t x796 = INT8_MIN;

    t131 = ((x793-x794)*(x795^x796));

    if (t131 != 1803435462) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x797 = -1;
	uint32_t x798 = UINT32_MAX;
	uint64_t x799 = 1110325855542606766LLU;
	uint64_t x800 = UINT64_MAX;
	static volatile uint64_t t132 = 88473LLU;

    t132 = ((x797-x798)*(x799^x800));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x803 = -23485;
	int32_t x804 = INT32_MAX;
	static int64_t t133 = 236LL;

    t133 = ((x801-x802)*(x803^x804));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x805 = 31;
	volatile uint32_t x806 = UINT32_MAX;
	uint8_t x807 = 56U;
	int16_t x808 = -1;
	uint32_t t134 = 646478U;

    t134 = ((x805-x806)*(x807^x808));

    if (t134 != 4294965472U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x809 = 1627293300LLU;
	volatile int16_t x811 = INT16_MAX;
	volatile uint64_t t135 = 2035979642110599434LLU;

    t135 = ((x809-x810)*(x811^x812));

    if (t135 != 11022751980288799020LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x829 = 6LLU;
	static int16_t x830 = 214;
	static uint8_t x831 = UINT8_MAX;
	static uint16_t x832 = 3713U;
	uint64_t t136 = 113532837517LLU;

    t136 = ((x829-x830)*(x831^x832));

    if (t136 != 18446744073708779936LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x833 = INT16_MIN;
	int8_t x834 = -31;
	uint16_t x835 = 13167U;
	static uint32_t t137 = 1426688193U;

    t137 = ((x833-x834)*(x835^x836));

    if (t137 != 431080816U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x838 = -40;
	uint16_t x840 = 2856U;
	int32_t t138 = 4410;

    t138 = ((x837-x838)*(x839^x840));

    if (t138 != 187282200) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x841 = 1883522778LLU;
	int32_t x842 = -52526;
	volatile int16_t x844 = INT16_MIN;
	volatile uint64_t t139 = 69LLU;

    t139 = ((x841-x842)*(x843^x844));

    if (t139 != 61704043383736LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x845 = UINT32_MAX;
	uint8_t x846 = 77U;
	uint16_t x847 = 671U;
	static int16_t x848 = INT16_MIN;
	static volatile uint32_t t140 = 106U;

    t140 = ((x845-x846)*(x847^x848));

    if (t140 != 2503566U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x849 = INT16_MIN;
	int32_t x850 = -29490;
	int32_t x851 = INT32_MIN;
	int64_t x852 = 1912733830686LL;
	volatile int64_t t141 = -38538878495871LL;

    t141 = ((x849-x850)*(x851^x852));

    if (t141 != 6267321443105756LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x857 = -154LL;
	int16_t x859 = 1;
	static uint32_t x860 = 41732U;
	volatile int64_t t142 = -351933558072570LL;

    t142 = ((x857-x858)*(x859^x860));

    if (t142 != -1373892093LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x861 = 1553LLU;
	static int16_t x862 = INT16_MIN;
	int64_t x863 = INT64_MIN;
	int64_t x864 = -26612011133860861LL;
	uint64_t t143 = 1077142849809LLU;

    t143 = ((x861-x862)*(x863^x864));

    if (t143 != 18209741597093746227LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x866 = 362196U;
	uint64_t x867 = 608LLU;
	static uint64_t t144 = 3953215605LLU;

    t144 = ((x865-x866)*(x867^x868));

    if (t144 != 9224151929681219776LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	uint32_t x874 = 1U;
	int32_t x876 = 9;
	uint64_t t145 = 6711152000LLU;

    t145 = ((x873-x874)*(x875^x876));

    if (t145 != 18446744073709549176LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x877 = UINT64_MAX;
	uint32_t x878 = 1324U;
	int32_t x879 = INT32_MIN;
	volatile uint64_t t146 = 1981803867LLU;

    t146 = ((x877-x878)*(x879^x880));

    if (t146 != 18446741228337135616LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x881 = 2U;
	int8_t x882 = -1;
	uint8_t x883 = 4U;

    t147 = ((x881-x882)*(x883^x884));

    if (t147 != 753) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x901 = UINT8_MAX;
	uint32_t x902 = 6U;
	uint8_t x903 = UINT8_MAX;
	static int32_t x904 = -1;
	volatile uint32_t t148 = 2060155760U;

    t148 = ((x901-x902)*(x903^x904));

    if (t148 != 4294903552U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x905 = 7509548428699846565LLU;
	uint32_t x906 = 71684625U;
	int64_t x907 = INT64_MIN;
	uint64_t t149 = 120868681008579LLU;

    t149 = ((x905-x906)*(x907^x908));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x909 = INT32_MIN;
	volatile int16_t x910 = INT16_MIN;
	int8_t x911 = INT8_MIN;
	int64_t x912 = 9LL;
	int64_t t150 = 48544961600838LL;

    t150 = ((x909-x910)*(x911^x912));

    if (t150 != 255546654720LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x913 = UINT64_MAX;
	int8_t x915 = INT8_MIN;
	int32_t x916 = INT32_MIN;
	volatile uint64_t t151 = 938LLU;

    t151 = ((x913-x914)*(x915^x916));

    if (t151 != 18446743910500804096LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x917 = UINT16_MAX;
	uint64_t x918 = UINT64_MAX;
	static uint64_t x919 = UINT64_MAX;
	int64_t x920 = 4248278798526532LL;
	uint64_t t152 = 42224159LLU;

    t152 = ((x917-x918)*(x919^x920));

    if (t152 != 16732705839117959168LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x925 = INT8_MIN;
	static int16_t x927 = INT16_MIN;
	volatile int8_t x928 = INT8_MAX;
	volatile uint32_t t153 = 77627502U;

    t153 = ((x925-x926)*(x927^x928));

    if (t153 != 329282408U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x929 = 34;
	int16_t x931 = 0;
	int8_t x932 = -14;

    t154 = ((x929-x930)*(x931^x932));

    if (t154 != 3094) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x933 = 974098796LL;
	static int32_t x934 = INT32_MAX;
	int64_t x935 = -1LL;
	uint32_t x936 = 2577563U;
	static volatile int64_t t155 = -2048LL;

    t155 = ((x933-x934)*(x935^x936));

    if (t155 != 3024474550082964LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x937 = -1LL;
	int16_t x938 = -6219;
	int16_t x940 = 3675;
	static int64_t t156 = -101725631LL;

    t156 = ((x937-x938)*(x939^x940));

    if (t156 != 22509160LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x949 = -1;
	uint64_t x950 = UINT64_MAX;
	int64_t x951 = 1LL;
	uint64_t t157 = 19LLU;

    t157 = ((x949-x950)*(x951^x952));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x954 = -1;
	static int16_t x956 = INT16_MAX;
	int32_t t158 = -175;

    t158 = ((x953-x954)*(x955^x956));

    if (t158 != 1073086464) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x957 = -1;
	int32_t x958 = 1125;
	int8_t x959 = INT8_MAX;
	static volatile uint16_t x960 = 18U;
	volatile int32_t t159 = 12996731;

    t159 = ((x957-x958)*(x959^x960));

    if (t159 != -122734) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x961 = -75526848;
	static int16_t x962 = INT16_MAX;
	int16_t x964 = 1;
	uint32_t t160 = 31268401U;

    t160 = ((x961-x962)*(x963^x964));

    if (t160 != 3841609606U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x973 = 967U;
	volatile uint32_t x975 = 4084842U;
	uint16_t x976 = 1U;

    t161 = ((x973-x974)*(x975^x976));

    if (t161 != 363225133U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x977 = UINT64_MAX;
	int16_t x978 = 2;
	int8_t x980 = INT8_MAX;

    t162 = ((x977-x978)*(x979^x980));

    if (t162 != 384LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x982 = INT8_MAX;
	int16_t x983 = INT16_MIN;
	int8_t x984 = INT8_MAX;

    t163 = ((x981-x982)*(x983^x984));

    if (t163 != 1073725695) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x985 = 23820718364756LLU;
	int8_t x986 = INT8_MAX;
	int16_t x987 = -1;
	static volatile uint64_t t164 = 653LLU;

    t164 = ((x985-x986)*(x987^x988));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x989 = 202;
	uint32_t x990 = UINT32_MAX;
	uint16_t x991 = 485U;
	uint32_t t165 = 3134U;

    t165 = ((x989-x990)*(x991^x992));

    if (t165 != 4294883863U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x995 = -1;
	uint8_t x996 = 56U;
	uint64_t t166 = 815808178LLU;

    t166 = ((x993-x994)*(x995^x996));

    if (t166 != 122406123051LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x997 = 49U;
	static int8_t x998 = -1;
	volatile uint64_t x999 = UINT64_MAX;
	static int64_t x1000 = INT64_MIN;
	volatile uint64_t t167 = 72515722634LLU;

    t167 = ((x997-x998)*(x999^x1000));

    if (t167 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x1003 = -894004715LL;
	int64_t t168 = 159233LL;

    t168 = ((x1001-x1002)*(x1003^x1004));

    if (t168 != 29377886113569LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1005 = 391596;
	int8_t x1006 = INT8_MAX;
	volatile int32_t t169 = 1;

    t169 = ((x1005-x1006)*(x1007^x1008));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x1009 = INT8_MIN;
	int8_t x1011 = 0;
	static volatile int8_t x1012 = INT8_MAX;
	int32_t t170 = 43644;

    t170 = ((x1009-x1010)*(x1011^x1012));

    if (t170 != -19939) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1021 = INT8_MIN;
	int64_t x1022 = -1LL;
	int64_t x1023 = -1LL;
	int32_t x1024 = -515;
	int64_t t171 = 63LL;

    t171 = ((x1021-x1022)*(x1023^x1024));

    if (t171 != -65278LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1026 = 36203923LL;
	volatile int32_t x1027 = -1;
	int16_t x1028 = -1;
	static volatile int64_t t172 = 3694LL;

    t172 = ((x1025-x1026)*(x1027^x1028));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1037 = 77639168U;
	int8_t x1038 = INT8_MIN;
	static uint64_t x1039 = 84293917LLU;
	static uint64_t t173 = 830776735773765655LLU;

    t173 = ((x1037-x1038)*(x1039^x1040));

    if (t173 != 6544520372962432LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1049 = 1322407;
	volatile int64_t x1050 = -1LL;
	int64_t t174 = 0LL;

    t174 = ((x1049-x1050)*(x1051^x1052));

    if (t174 != -43322086080LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1053 = INT32_MAX;
	int8_t x1054 = INT8_MAX;
	uint64_t x1055 = 8561986040884LLU;
	volatile uint64_t t175 = 86989314649LLU;

    t175 = ((x1053-x1054)*(x1055^x1056));

    if (t175 != 13766823858017789184LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1057 = 81565710LLU;
	uint32_t x1058 = 861U;
	static int16_t x1059 = INT16_MIN;
	static uint64_t x1060 = UINT64_MAX;
	uint64_t t176 = 533877492LLU;

    t176 = ((x1057-x1058)*(x1059^x1060));

    if (t176 != 2672635407183LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1061 = INT16_MAX;
	uint32_t x1062 = 93975339U;
	static int32_t x1063 = 1504;
	int16_t x1064 = -3;
	uint32_t t177 = 12U;

    t177 = ((x1061-x1062)*(x1063^x1064));

    if (t177 != 4132502532U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x1065 = INT8_MAX;
	uint16_t x1066 = UINT16_MAX;
	uint16_t x1068 = 0U;
	volatile uint32_t t178 = 1U;

    t178 = ((x1065-x1066)*(x1067^x1068));

    if (t178 != 4271878272U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1070 = 4241254023319863224LLU;
	int32_t x1071 = 54528;
	volatile uint64_t t179 = 159LLU;

    t179 = ((x1069-x1070)*(x1071^x1072));

    if (t179 != 6051700958865431697LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x1074 = 4062U;
	volatile uint32_t x1075 = UINT32_MAX;
	static volatile uint8_t x1076 = 4U;
	uint32_t t180 = 11638U;

    t180 = ((x1073-x1074)*(x1075^x1076));

    if (t180 != 20315U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1089 = -1;
	int16_t x1090 = INT16_MAX;
	static uint32_t x1092 = 1419347775U;
	volatile uint64_t t181 = 5608020559224LLU;

    t181 = ((x1089-x1090)*(x1091^x1092));

    if (t181 != 18446696429917208576LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1093 = 10;
	int32_t x1094 = -1;
	int16_t x1095 = INT16_MAX;
	uint16_t x1096 = 1U;

    t182 = ((x1093-x1094)*(x1095^x1096));

    if (t182 != 360426) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t t183 = 1610424196137LLU;

    t183 = ((x1097-x1098)*(x1099^x1100));

    if (t183 != 2601078818502678016LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1101 = -11;
	volatile uint16_t x1102 = 11239U;
	int16_t x1103 = INT16_MIN;
	int16_t x1104 = -1;
	volatile int32_t t184 = -1663;

    t184 = ((x1101-x1102)*(x1103^x1104));

    if (t184 != -368628750) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x1130 = UINT64_MAX;
	int64_t x1131 = INT64_MAX;
	int8_t x1132 = INT8_MIN;
	volatile uint64_t t185 = 15272153051LLU;

    t185 = ((x1129-x1130)*(x1131^x1132));

    if (t185 != 9223372036854759679LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1133 = 4889;
	int16_t x1134 = INT16_MIN;
	uint64_t x1135 = UINT64_MAX;
	int16_t x1136 = INT16_MIN;
	uint64_t t186 = 147187046LLU;

    t186 = ((x1133-x1134)*(x1135^x1136));

    if (t186 != 1233906919LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1137 = INT8_MIN;
	volatile int16_t x1138 = -191;
	int64_t x1139 = -4166089830020LL;
	static int32_t x1140 = 13;
	static int64_t t187 = -851817894729LL;

    t187 = ((x1137-x1138)*(x1139^x1140));

    if (t187 != -262463659291953LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1141 = -1;
	volatile int64_t x1142 = INT64_MIN;
	volatile int16_t x1143 = 1;
	static uint64_t x1144 = UINT64_MAX;
	uint64_t t188 = 11317428255209606LLU;

    t188 = ((x1141-x1142)*(x1143^x1144));

    if (t188 != 2LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x1155 = INT32_MIN;
	int32_t x1156 = -1;
	uint64_t t189 = 887080723LLU;

    t189 = ((x1153-x1154)*(x1155^x1156));

    if (t189 != 18446743367187431753LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1165 = INT8_MAX;
	int32_t x1167 = INT32_MIN;
	uint64_t x1168 = 3065797893LLU;

    t190 = ((x1165-x1166)*(x1167^x1168));

    if (t190 != 9223371604643185280LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1177 = UINT64_MAX;
	int32_t x1179 = INT32_MIN;
	volatile int32_t x1180 = INT32_MAX;
	static uint64_t t191 = 131012LLU;

    t191 = ((x1177-x1178)*(x1179^x1180));

    if (t191 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1181 = INT8_MIN;
	uint8_t x1182 = 0U;
	int16_t x1183 = INT16_MIN;
	static int64_t t192 = -5117816LL;

    t192 = ((x1181-x1182)*(x1183^x1184));

    if (t192 != -5814124837248LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1185 = 9;
	volatile uint16_t x1187 = 1090U;
	static uint64_t x1188 = 1547363321LLU;

    t193 = ((x1185-x1186)*(x1187^x1188));

    if (t193 != 6645878967273024523LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1189 = INT8_MIN;
	static uint32_t x1191 = UINT32_MAX;
	static int64_t x1192 = 1042769465747487144LL;
	static volatile uint64_t t194 = 179377819877LLU;

    t194 = ((x1189-x1190)*(x1191^x1192));

    if (t194 != 14099461405654439040LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1193 = INT16_MAX;
	uint8_t x1194 = 20U;
	static volatile uint8_t x1196 = UINT8_MAX;
	volatile int32_t t195 = 28677743;

    t195 = ((x1193-x1194)*(x1195^x1196));

    if (t195 != 8023015) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1206 = 17635064;
	uint16_t x1207 = UINT16_MAX;
	uint32_t x1208 = 4134U;
	static uint32_t t196 = 573U;

    t196 = ((x1205-x1206)*(x1207^x1208));

    if (t196 != 3816161224U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1213 = 3U;
	static int16_t x1214 = -1;
	volatile uint32_t x1215 = 177U;

    t197 = ((x1213-x1214)*(x1215^x1216));

    if (t197 != 261432U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1217 = -458160869LL;
	volatile int16_t x1218 = INT16_MIN;
	static uint64_t x1219 = 9073995760576571LLU;
	static int16_t x1220 = -13856;
	volatile uint64_t t198 = 87461801150LLU;

    t198 = ((x1217-x1218)*(x1219^x1220));

    if (t198 != 4882287069955692825LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1221 = -1LL;
	uint16_t x1222 = UINT16_MAX;
	int8_t x1223 = 14;
	int8_t x1224 = 11;

    t199 = ((x1221-x1222)*(x1223^x1224));

    if (t199 != -327680LL) { NG(); } else { ; }
	
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

