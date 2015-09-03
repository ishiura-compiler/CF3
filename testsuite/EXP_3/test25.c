#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
static uint8_t x9 = 4U;
int16_t x10 = -7;
static int32_t t1 = -496;
uint32_t x13 = 1849376014U;
uint8_t x20 = 1U;
static volatile uint64_t t3 = 8635590496902LLU;
volatile uint16_t x21 = UINT16_MAX;
int32_t t4 = -12028824;
static volatile int16_t x25 = INT16_MIN;
static uint8_t x28 = 4U;
volatile uint32_t x32 = 128770868U;
int16_t x36 = INT16_MAX;
int8_t x44 = -1;
int8_t x48 = INT8_MIN;
static int32_t x51 = INT32_MIN;
uint8_t x63 = 0U;
uint64_t x64 = 8359571549LLU;
volatile uint64_t t14 = 1367817348328911918LLU;
volatile uint32_t x69 = 11173U;
int32_t x70 = INT32_MIN;
uint32_t x73 = 108866U;
volatile int16_t x78 = 6;
int16_t x82 = INT16_MIN;
volatile int64_t x86 = -1LL;
int64_t x89 = -1LL;
int8_t x92 = -1;
static volatile uint8_t x95 = 14U;
uint64_t t21 = UINT64_MAX;
volatile int32_t t25 = 0;
uint16_t x117 = UINT16_MAX;
static int8_t x125 = INT8_MAX;
int16_t x129 = 0;
int64_t x136 = INT64_MAX;
uint16_t x141 = 28U;
int64_t x147 = -1LL;
uint16_t x151 = UINT16_MAX;
static uint16_t x154 = UINT16_MAX;
uint64_t t35 = 1715415LLU;
int32_t x161 = INT32_MIN;
int32_t x164 = -106260;
int16_t x165 = INT16_MIN;
int64_t x171 = -3LL;
uint64_t t38 = 3075304LLU;
uint64_t x176 = 22566LLU;
int8_t x178 = -44;
uint8_t x199 = 13U;
uint64_t x204 = 463852672LLU;
static uint64_t t44 = 2504036571613LLU;
uint64_t t46 = 405LLU;
volatile int8_t x224 = INT8_MIN;
int64_t x225 = -1LL;
int8_t x226 = INT8_MIN;
int64_t t48 = -500252082925642LL;
uint64_t x232 = 26LLU;
int64_t t50 = 9LL;
static volatile int32_t t51 = -3;
int8_t x248 = INT8_MIN;
uint64_t t52 = UINT64_MAX;
int16_t x249 = INT16_MAX;
int16_t x255 = INT16_MAX;
uint32_t x264 = 1612U;
static uint32_t x265 = UINT32_MAX;
static volatile int16_t x269 = 220;
int32_t x270 = -1;
uint16_t x278 = UINT16_MAX;
int32_t t60 = -964;
volatile int64_t t62 = 1096464056475LL;
int8_t x289 = -1;
int8_t x291 = INT8_MIN;
uint8_t x298 = 16U;
static uint16_t x307 = 1018U;
int32_t x313 = INT32_MIN;
int8_t x331 = INT8_MIN;
uint16_t x332 = UINT16_MAX;
static int32_t t72 = 13883;
static int64_t x338 = 33135LL;
int16_t x339 = 821;
volatile uint8_t x355 = 27U;
int16_t x357 = INT16_MIN;
int8_t x360 = INT8_MIN;
int32_t t78 = 781133783;
int32_t t80 = 57620;
uint32_t x371 = 894667426U;
volatile uint32_t t81 = 62571U;
uint8_t x382 = UINT8_MAX;
int32_t x391 = INT32_MAX;
volatile uint64_t t85 = 32983201846LLU;
int16_t x395 = INT16_MIN;
uint32_t x396 = 1273781743U;
volatile int16_t x402 = INT16_MIN;
int8_t x404 = INT8_MIN;
volatile int32_t t87 = -19704;
uint32_t x409 = 574712U;
uint16_t x416 = 0U;
static int64_t x420 = -1LL;
int32_t x422 = -1;
int32_t t93 = 679835240;
uint8_t x436 = 28U;
volatile int32_t t94 = -1889;
int16_t x437 = -1;
int64_t x438 = -1LL;
uint64_t x444 = 243LLU;
uint64_t t96 = 105339171LLU;
uint64_t x451 = 17626709LLU;
uint8_t x455 = 1U;
int64_t x456 = -437208998706739246LL;


void f0(void) {
	uint32_t x5 = 1U;
	int8_t x7 = INT8_MIN;
	int16_t x8 = -1;
	uint32_t t0 = 219436U;

	t0 = ((x5-x6)|(x7+x8));

	if (t0 != 4294967167U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x11 = INT16_MAX;
	int16_t x12 = 28;

	t1 = ((x9-x10)|(x11+x12));

	if (t1 != 32795) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = UINT8_MAX;
	volatile uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 4U;
	uint64_t t2 = 1470156993594588148LLU;

	t2 = ((x13-x14)|(x15+x16));

	if (t2 != 1849375759LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = INT32_MAX;
	uint32_t x18 = 488U;
	volatile uint64_t x19 = 11517755551623LLU;

	t3 = ((x17-x18)|(x19+x20));

	if (t3 != 11519102287775LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -1;
	int16_t x23 = 245;
	int16_t x24 = -2;

	t4 = ((x21-x22)|(x23+x24));

	if (t4 != 65779) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -441013399;
	int32_t x27 = INT32_MIN;
	int32_t t5 = -37358176;

	t5 = ((x25-x26)|(x27+x28));

	if (t5 != -1706503017) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint8_t x30 = UINT8_MAX;
	uint16_t x31 = 12U;
	uint64_t t6 = 502749025136399LLU;

	t6 = ((x29-x30)|(x31+x32));

	if (t6 != 18446744073709551424LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -39;
	uint32_t x34 = 2858U;
	uint8_t x35 = 36U;
	uint32_t t7 = 158777U;

	t7 = ((x33-x34)|(x35+x36));

	if (t7 != 4294964399U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = -1;
	volatile int8_t x43 = -1;
	volatile int32_t t8 = -1;

	t8 = ((x41-x42)|(x43+x44));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	uint16_t x46 = UINT16_MAX;
	uint8_t x47 = 2U;
	volatile int64_t t9 = 474542117114LL;

	t9 = ((x45-x46)|(x47+x48));

	if (t9 != -126LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = 21;
	static int8_t x50 = -1;
	static int64_t x52 = INT64_MAX;
	static volatile int64_t t10 = 34LL;

	t10 = ((x49-x50)|(x51+x52));

	if (t10 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -12599;
	static int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t11 = -15497904;

	t11 = ((x53-x54)|(x55+x56));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 62U;
	int32_t x58 = 2;
	uint32_t x59 = 1237U;
	int32_t x60 = 186266;
	uint32_t t12 = 12U;

	t12 = ((x57-x58)|(x59+x60));

	if (t12 != 187519U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 1LLU;
	static uint8_t x62 = 1U;
	volatile uint64_t t13 = 13649281LLU;

	t13 = ((x61-x62)|(x63+x64));

	if (t13 != 8359571549LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 419U;
	static volatile int16_t x66 = -1;
	static uint64_t x67 = 332LLU;
	static int8_t x68 = INT8_MAX;

	t14 = ((x65-x66)|(x67+x68));

	if (t14 != 495LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x71 = 10933663;
	static int32_t x72 = INT32_MIN;
	volatile uint32_t t15 = 50U;

	t15 = ((x69-x70)|(x71+x72));

	if (t15 != 2158428095U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x74 = INT16_MIN;
	volatile int8_t x75 = 1;
	int64_t x76 = INT64_MIN;
	volatile int64_t t16 = -1669341375LL;

	t16 = ((x73-x74)|(x75+x76));

	if (t16 != -9223372036854634173LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	volatile int32_t x79 = INT32_MAX;
	static volatile int64_t x80 = INT64_MIN;
	volatile int64_t t17 = -188666511LL;

	t17 = ((x77-x78)|(x79+x80));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x81 = UINT32_MAX;
	static uint16_t x83 = 208U;
	uint8_t x84 = UINT8_MAX;
	static volatile uint32_t t18 = 138203U;

	t18 = ((x81-x82)|(x83+x84));

	if (t18 != 32767U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = INT64_MIN;
	uint64_t t19 = 21180962677218LLU;

	t19 = ((x85-x86)|(x87+x88));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x90 = 4234;
	uint32_t x91 = 0U;
	volatile int64_t t20 = 22287339911LL;

	t20 = ((x89-x90)|(x91+x92));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x93 = 1;
	uint64_t x94 = 44LLU;
	uint8_t x96 = 28U;

	t21 = ((x93-x94)|(x95+x96));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = -1;
	int16_t x99 = 15748;
	int8_t x100 = -1;
	static int32_t t22 = -7201349;

	t22 = ((x97-x98)|(x99+x100));

	if (t22 != -17021) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 11079U;
	volatile int16_t x102 = -1;
	int32_t x103 = 10;
	int16_t x104 = -1;
	volatile uint32_t t23 = 229172644U;

	t23 = ((x101-x102)|(x103+x104));

	if (t23 != 11081U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = UINT8_MAX;
	uint16_t x110 = 59U;
	volatile uint16_t x111 = 187U;
	int8_t x112 = INT8_MIN;
	int32_t t24 = 5759;

	t24 = ((x109-x110)|(x111+x112));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	static int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 70U;

	t25 = ((x113-x114)|(x115+x116));

	if (t25 != -57) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = 1647191;
	uint32_t x119 = 0U;
	int32_t x120 = -1;
	static volatile uint32_t t26 = UINT32_MAX;

	t26 = ((x117-x118)|(x119+x120));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 2;
	static volatile uint8_t x122 = 2U;
	volatile uint16_t x123 = UINT16_MAX;
	uint32_t x124 = 1169256541U;
	volatile uint32_t t27 = 79895U;

	t27 = ((x121-x122)|(x123+x124));

	if (t27 != 1169322076U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = INT64_MAX;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = -1;
	static uint64_t t28 = 9LLU;

	t28 = ((x125-x126)|(x127+x128));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x130 = UINT16_MAX;
	int32_t x131 = -1;
	static int64_t x132 = 609539483520452LL;
	static volatile int64_t t29 = 127853421485118971LL;

	t29 = ((x129-x130)|(x131+x132));

	if (t29 != -45629LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	uint64_t x134 = UINT64_MAX;
	static int8_t x135 = -2;
	volatile uint64_t t30 = 0LLU;

	t30 = ((x133-x134)|(x135+x136));

	if (t30 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x142 = 13620702U;
	int16_t x143 = INT16_MAX;
	uint16_t x144 = UINT16_MAX;
	uint32_t t31 = 969136153U;

	t31 = ((x141-x142)|(x143+x144));

	if (t31 != 4281434110U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 0;
	uint32_t x146 = UINT32_MAX;
	volatile uint16_t x148 = 15141U;
	int64_t t32 = 58284LL;

	t32 = ((x145-x146)|(x147+x148));

	if (t32 != 15141LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x149 = 22430U;
	uint32_t x150 = UINT32_MAX;
	int16_t x152 = INT16_MAX;
	uint32_t t33 = 3727U;

	t33 = ((x149-x150)|(x151+x152));

	if (t33 != 98303U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = 2248;
	static uint64_t x155 = UINT64_MAX;
	int64_t x156 = -1LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = ((x153-x154)|(x155+x156));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = INT8_MAX;
	volatile int64_t x158 = 121172546453132LL;
	uint64_t x159 = 431LLU;
	volatile int64_t x160 = INT64_MIN;

	t35 = ((x157-x158)|(x159+x160));

	if (t35 != 18446622901163098623LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = INT16_MIN;
	int32_t x163 = -17353434;
	int32_t t36 = -14468;

	t36 = ((x161-x162)|(x163+x164));

	if (t36 != -17459694) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = 1;
	static uint8_t x167 = UINT8_MAX;
	uint64_t x168 = 45543348036LLU;
	static volatile uint64_t t37 = 557313281714242652LLU;

	t37 = ((x165-x166)|(x167+x168));

	if (t37 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	uint64_t x170 = UINT64_MAX;
	int32_t x172 = INT32_MIN;

	t38 = ((x169-x170)|(x171+x172));

	if (t38 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	int16_t x174 = -6284;
	int16_t x175 = INT16_MAX;
	uint64_t t39 = 3744919250LLU;

	t39 = ((x173-x174)|(x175+x176));

	if (t39 != 55471LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 12;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MAX;
	uint32_t t40 = 484989U;

	t40 = ((x177-x178)|(x179+x180));

	if (t40 != 32766U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -1;
	volatile int16_t x182 = -1;
	int32_t x183 = -1;
	volatile int64_t x184 = -232688174356938LL;
	static int64_t t41 = 12LL;

	t41 = ((x181-x182)|(x183+x184));

	if (t41 != -232688174356939LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = -19718;
	int64_t x194 = -29759611LL;
	int16_t x195 = INT16_MIN;
	volatile int16_t x196 = -1;
	int64_t t42 = -965405500LL;

	t42 = ((x193-x194)|(x195+x196));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 4U;
	int16_t x198 = INT16_MIN;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t43 = -842;

	t43 = ((x197-x198)|(x199+x200));

	if (t43 != 98316) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	volatile uint8_t x202 = UINT8_MAX;
	volatile int32_t x203 = -1;

	t44 = ((x201-x202)|(x203+x204));

	if (t44 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = INT8_MAX;
	uint64_t x206 = 126869549246880LLU;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 1LLU;
	volatile uint64_t t45 = 2LLU;

	t45 = ((x205-x206)|(x207+x208));

	if (t45 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = -43;
	int16_t x212 = INT16_MAX;

	t46 = ((x209-x210)|(x211+x212));

	if (t46 != 9223372036854808533LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile uint32_t t47 = 17U;

	t47 = ((x221-x222)|(x223+x224));

	if (t47 != 4294967167U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x227 = 5038LL;
	static uint32_t x228 = 1857510074U;

	t48 = ((x225-x226)|(x227+x228));

	if (t48 != 1857515135LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 21U;
	int16_t x230 = INT16_MAX;
	volatile int64_t x231 = -540883386544LL;
	uint64_t t49 = 621082644380LLU;

	t49 = ((x229-x230)|(x231+x232));

	if (t49 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = -1;
	int64_t x239 = INT64_MIN;
	static volatile int8_t x240 = INT8_MAX;

	t50 = ((x237-x238)|(x239+x240));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	volatile int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = INT8_MIN;

	t51 = ((x241-x242)|(x243+x244));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x245 = 81325569036270LLU;
	static uint32_t x246 = 52U;
	int64_t x247 = -1LL;

	t52 = ((x245-x246)|(x247+x248));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x250 = INT8_MIN;
	static uint64_t x251 = 6705LLU;
	uint8_t x252 = UINT8_MAX;
	uint64_t t53 = 19LLU;

	t53 = ((x249-x250)|(x251+x252));

	if (t53 != 39807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = 6394U;
	int64_t x254 = INT64_MAX;
	static uint32_t x256 = 15116916U;
	volatile int64_t t54 = -4228842794152LL;

	t54 = ((x253-x254)|(x255+x256));

	if (t54 != -9223372036839621893LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x257 = -18LL;
	int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MAX;
	int32_t x260 = -1;
	int64_t t55 = 47386742940807502LL;

	t55 = ((x257-x258)|(x259+x260));

	if (t55 != -129LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x261 = UINT16_MAX;
	uint8_t x262 = 12U;
	int16_t x263 = 7252;
	uint32_t t56 = 92765043U;

	t56 = ((x261-x262)|(x263+x264));

	if (t56 != 65523U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x266 = UINT8_MAX;
	static volatile uint64_t x267 = 1098LLU;
	uint64_t x268 = 711146476977LLU;
	volatile uint64_t t57 = 21625125664170LLU;

	t57 = ((x265-x266)|(x267+x268));

	if (t57 != 712964571131LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x271 = -138966LL;
	int64_t x272 = 2040LL;
	volatile int64_t t58 = -2498LL;

	t58 = ((x269-x270)|(x271+x272));

	if (t58 != -136705LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x273 = 111662310716031LLU;
	int16_t x274 = INT16_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile uint64_t x276 = 33LLU;
	uint64_t t59 = 217732589257768LLU;

	t59 = ((x273-x274)|(x275+x276));

	if (t59 != 111662310683552LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MAX;
	uint16_t x279 = 2U;
	uint16_t x280 = UINT16_MAX;

	t60 = ((x277-x278)|(x279+x280));

	if (t60 != 2147418113) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x281 = 1280684856LLU;
	uint8_t x282 = 11U;
	volatile int8_t x283 = INT8_MIN;
	static volatile uint16_t x284 = 3202U;
	uint64_t t61 = 183188580903441597LLU;

	t61 = ((x281-x282)|(x283+x284));

	if (t61 != 1280687919LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x285 = 0U;
	uint32_t x286 = 8194189U;
	volatile int64_t x287 = -12129490LL;
	static volatile int32_t x288 = INT32_MIN;

	t62 = ((x285-x286)|(x287+x288));

	if (t62 != -3735681LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x290 = -1;
	int16_t x292 = -1;
	volatile int32_t t63 = 1658;

	t63 = ((x289-x290)|(x291+x292));

	if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x293 = 30;
	static int32_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int64_t x296 = -1LL;
	static volatile int64_t t64 = 5950808537025LL;

	t64 = ((x293-x294)|(x295+x296));

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x297 = INT8_MAX;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = 0;
	uint32_t t65 = UINT32_MAX;

	t65 = ((x297-x298)|(x299+x300));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x305 = INT16_MAX;
	int64_t x306 = 709119498180LL;
	int16_t x308 = -126;
	int64_t t66 = 1917352LL;

	t66 = ((x305-x306)|(x307+x308));

	if (t66 != -709119464577LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = -1;
	volatile uint16_t x310 = UINT16_MAX;
	int32_t x311 = -1;
	static int64_t x312 = -1LL;
	volatile int64_t t67 = 51519LL;

	t67 = ((x309-x310)|(x311+x312));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MIN;
	static uint32_t x316 = UINT32_MAX;
	uint32_t t68 = 4952870U;

	t68 = ((x313-x314)|(x315+x316));

	if (t68 != 4294934527U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 70U;
	volatile int64_t x322 = -1LL;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t69 = 480LLU;

	t69 = ((x321-x322)|(x323+x324));

	if (t69 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x325 = -1;
	int64_t x326 = INT64_MIN;
	volatile int8_t x327 = INT8_MAX;
	static int16_t x328 = INT16_MIN;
	int64_t t70 = -261126LL;

	t70 = ((x325-x326)|(x327+x328));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = 79;
	uint32_t x330 = 8683351U;
	volatile uint32_t t71 = 4131764U;

	t71 = ((x329-x330)|(x331+x332));

	if (t71 != 4286316543U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = -1;
	volatile int8_t x334 = INT8_MAX;
	static int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MIN;

	t72 = ((x333-x334)|(x335+x336));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	int64_t t73 = -274LL;

	t73 = ((x337-x338)|(x339+x340));

	if (t73 != -75LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = -1LL;
	static int8_t x342 = -1;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 1224377619774304LLU;
	volatile uint64_t t74 = 312289508146LLU;

	t74 = ((x341-x342)|(x343+x344));

	if (t74 != 1224377619774176LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x345 = 4;
	static uint16_t x346 = 16136U;
	uint32_t x347 = 4U;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t75 = 246431438084101561LLU;

	t75 = ((x345-x346)|(x347+x348));

	if (t75 != 18446744073709535487LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x349 = INT32_MIN;
	int16_t x350 = -1;
	int32_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t76 = 24724;

	t76 = ((x349-x350)|(x351+x352));

	if (t76 != -2147418113) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static volatile uint32_t x356 = UINT32_MAX;
	int64_t t77 = INT64_MAX;

	t77 = ((x353-x354)|(x355+x356));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x358 = 2;
	static int16_t x359 = -1;

	t78 = ((x357-x358)|(x359+x360));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -15948;
	int32_t t79 = -2587;

	t79 = ((x361-x362)|(x363+x364));

	if (t79 != -16001) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x365 = 108U;
	int8_t x366 = -1;
	static volatile int8_t x367 = INT8_MAX;
	static volatile int8_t x368 = INT8_MIN;

	t80 = ((x365-x366)|(x367+x368));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x369 = -11;
	uint32_t x370 = 16U;
	uint16_t x372 = 4U;

	t81 = ((x369-x370)|(x371+x372));

	if (t81 != 4294967271U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x373 = 0U;
	static int32_t x374 = -18877553;
	int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t82 = 365367;

	t82 = ((x373-x374)|(x375+x376));

	if (t82 != -143) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = -1;
	uint16_t x383 = 10882U;
	volatile int32_t x384 = 485247;
	int32_t t83 = 105;

	t83 = ((x381-x382)|(x383+x384));

	if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x385 = 19252975466141809LLU;
	int16_t x386 = -47;
	int16_t x387 = -29;
	volatile uint8_t x388 = UINT8_MAX;
	uint64_t t84 = 2866582LLU;

	t84 = ((x385-x386)|(x387+x388));

	if (t84 != 19252975466141922LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = -81;
	static volatile int64_t x390 = INT64_MIN;
	uint64_t x392 = UINT64_MAX;

	t85 = ((x389-x390)|(x391+x392));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = 1LL;
	static volatile int64_t x394 = -39874302496LL;
	volatile int64_t t86 = 2755754092944211340LL;

	t86 = ((x393-x394)|(x395+x396));

	if (t86 != 39929503727LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x401 = -1;
	static volatile int8_t x403 = -41;

	t87 = ((x401-x402)|(x403+x404));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x410 = INT64_MAX;
	uint8_t x411 = 0U;
	int16_t x412 = -409;
	static int64_t t88 = 43772602008336343LL;

	t88 = ((x409-x410)|(x411+x412));

	if (t88 != -257LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x413 = UINT8_MAX;
	int16_t x414 = -1;
	int64_t x415 = -760684707757224LL;
	int64_t t89 = 0LL;

	t89 = ((x413-x414)|(x415+x416));

	if (t89 != -760684707757224LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = INT16_MAX;
	volatile int32_t x418 = -1;
	static int16_t x419 = 9429;
	volatile int64_t t90 = 125946693687LL;

	t90 = ((x417-x418)|(x419+x420));

	if (t90 != 42196LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x421 = -1;
	int32_t x423 = -1;
	int32_t x424 = -748742603;
	static int32_t t91 = -9962;

	t91 = ((x421-x422)|(x423+x424));

	if (t91 != -748742604) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = 17LL;
	int16_t x426 = INT16_MAX;
	uint16_t x427 = UINT16_MAX;
	int8_t x428 = INT8_MAX;
	static int64_t t92 = -665045114142946LL;

	t92 = ((x425-x426)|(x427+x428));

	if (t92 != -32642LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = 2;
	uint8_t x430 = 2U;
	static int32_t x431 = 42773888;
	int8_t x432 = -1;

	t93 = ((x429-x430)|(x431+x432));

	if (t93 != 42773887) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = -1;
	int16_t x434 = 3603;
	static uint8_t x435 = 0U;

	t94 = ((x433-x434)|(x435+x436));

	if (t94 != -3588) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = -1;
	int64_t t95 = -399LL;

	t95 = ((x437-x438)|(x439+x440));

	if (t95 != 65534LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 5791264378LLU;
	int8_t x442 = INT8_MAX;
	uint8_t x443 = 115U;

	t96 = ((x441-x442)|(x443+x444));

	if (t96 != 5791264255LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = INT16_MIN;
	uint32_t x446 = 57364U;
	int32_t x447 = -1;
	int8_t x448 = -1;
	uint32_t t97 = 1679722216U;

	t97 = ((x445-x446)|(x447+x448));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -2;
	volatile int64_t x450 = 1068553443475026LL;
	volatile uint16_t x452 = 23U;
	volatile uint64_t t98 = 67370724472548LLU;

	t98 = ((x449-x450)|(x451+x452));

	if (t98 != 18445675520266663916LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x453 = INT32_MIN;
	static volatile uint32_t x454 = 20U;
	int64_t t99 = 1462760615493LL;

	t99 = ((x453-x454)|(x455+x456));

	if (t99 != -437208998362480641LL) { NG(); } else { ; }
	
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


    return 0;
}

