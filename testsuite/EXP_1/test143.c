#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 244U;
uint8_t x11 = 0U;
volatile int64_t t4 = 880813015872505LL;
uint32_t x23 = UINT32_MAX;
uint8_t x27 = 30U;
volatile int16_t x30 = INT16_MIN;
int8_t x35 = 4;
int16_t x47 = 4094;
int8_t x52 = INT8_MAX;
volatile int64_t x53 = -67516291LL;
volatile int16_t x58 = -1;
int16_t x59 = INT16_MIN;
uint16_t x61 = 529U;
int32_t x63 = 455200;
int8_t x66 = -3;
int64_t x67 = -1LL;
static int32_t x71 = INT32_MAX;
int8_t x72 = -1;
uint8_t x80 = UINT8_MAX;
int32_t x87 = -1;
int32_t x94 = -4833;
volatile int16_t x95 = INT16_MIN;
int64_t x120 = -1LL;
static uint16_t x127 = 0U;
int32_t x129 = 23;
static uint32_t x137 = 224U;
static int16_t x145 = INT16_MIN;
int64_t x147 = -7695646446LL;
int64_t t31 = -3170673164LL;
static int32_t x149 = -19;
static volatile int64_t t32 = -814LL;
static volatile uint16_t x154 = 2U;
int64_t x157 = -46797972548129673LL;
static int64_t t36 = 15493LL;
volatile int8_t x174 = INT8_MIN;
uint32_t t38 = 3U;
int64_t x177 = 493LL;
int8_t x178 = -1;
uint8_t x182 = 1U;
int32_t x183 = 3303;
int64_t t40 = -3930908425LL;
int8_t x187 = INT8_MIN;
int64_t t41 = -7LL;
uint32_t x196 = UINT32_MAX;
uint64_t x204 = UINT64_MAX;
volatile uint64_t t45 = 735300191333561819LLU;
static uint8_t x212 = 61U;
int8_t x219 = 1;
int16_t x227 = INT16_MIN;
volatile int16_t x231 = 2;
volatile uint64_t t52 = 1283946973711LLU;
int32_t x250 = 916;
int32_t t54 = 37350;
volatile int8_t x258 = INT8_MIN;
volatile uint64_t x267 = UINT64_MAX;
volatile int8_t x268 = INT8_MIN;
volatile uint16_t x269 = 965U;
uint32_t x285 = 50019261U;
int32_t x291 = INT32_MAX;
volatile int16_t x300 = INT16_MAX;
uint64_t x310 = 636901466313LLU;
static int32_t x312 = INT32_MAX;
static uint64_t t65 = 4678402806227LLU;
int8_t x315 = -7;
int32_t t66 = 15;
int8_t x325 = -7;
int32_t t68 = -979307;
uint32_t x333 = 33U;
int16_t x334 = INT16_MIN;
volatile uint64_t t73 = 5925903905LLU;
static volatile int32_t t74 = -66482798;
int64_t x353 = -4365868755476LL;
uint8_t x354 = UINT8_MAX;
uint16_t x373 = 108U;
int32_t x381 = INT32_MAX;
volatile int64_t x383 = -1LL;
int32_t x384 = INT32_MIN;
int16_t x385 = -1;
int32_t x387 = INT32_MAX;
int32_t t82 = -184;
uint64_t x390 = 115584727727LLU;
volatile uint8_t x393 = 96U;
static volatile int16_t x394 = INT16_MIN;
static volatile int32_t t84 = -343174581;
int16_t x397 = INT16_MIN;
int8_t x399 = -1;
static int8_t x401 = 13;
volatile int8_t x403 = 4;
volatile int64_t x413 = INT64_MIN;
int16_t x420 = INT16_MIN;
int64_t x421 = -53289LL;
uint16_t x423 = UINT16_MAX;
int32_t x436 = INT32_MAX;
volatile uint64_t t93 = 1643051235987052132LLU;
static uint8_t x437 = 7U;
int64_t x454 = -1LL;
int16_t x459 = INT16_MIN;
volatile uint64_t t98 = 2058714884842LLU;
uint64_t x462 = UINT64_MAX;
volatile uint64_t t99 = 308LLU;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = 1;
	int16_t x3 = -3851;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (((x1+x2)&x3)^x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint32_t x6 = 105204028U;
	int8_t x7 = -1;
	volatile uint16_t x8 = UINT16_MAX;

	t1 = (((x5+x6)&x7)^x8);

	if (t1 != 105231812U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 10607U;
	int64_t x10 = -1LL;
	volatile uint8_t x12 = 18U;
	volatile int64_t t2 = 1259372LL;

	t2 = (((x9+x10)&x11)^x12);

	if (t2 != 18LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = 5U;
	uint8_t x16 = 4U;
	uint32_t t3 = 0U;

	t3 = (((x13+x14)&x15)^x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 226035LL;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 31742U;

	t4 = (((x17+x18)&x19)^x20);

	if (t4 != 228350LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 48735990;
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x24 = 66;
	volatile uint32_t t5 = 628259U;

	t5 = (((x21+x22)&x23)^x24);

	if (t5 != 48801463U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 217;
	volatile int8_t x26 = INT8_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 326017545;

	t6 = (((x25+x26)&x27)^x28);

	if (t6 != 32743) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 182660931060510519LLU;
	static int8_t x31 = INT8_MAX;
	int64_t x32 = -1636581528LL;
	uint64_t t7 = 503146474LLU;

	t7 = (((x29+x30)&x31)^x32);

	if (t7 != 18446744072072970079LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 7917LL;
	volatile uint8_t x34 = 121U;
	static uint8_t x36 = 4U;
	static volatile int64_t t8 = -5687975260LL;

	t8 = (((x33+x34)&x35)^x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int16_t x42 = INT16_MAX;
	volatile int16_t x43 = INT16_MIN;
	static int16_t x44 = INT16_MAX;
	volatile uint64_t t9 = 824417875338204LLU;

	t9 = (((x41+x42)&x43)^x44);

	if (t9 != 32767LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 26268640824475417LLU;
	volatile int64_t x46 = INT64_MIN;
	int16_t x48 = -11821;
	volatile uint64_t t10 = 379867212LLU;

	t10 = (((x45+x46)&x47)^x48);

	if (t10 != 18446744073709543115LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int16_t x50 = 857;
	int64_t x51 = -1LL;
	static volatile uint64_t t11 = 61885864394078740LLU;

	t11 = (((x49+x50)&x51)^x52);

	if (t11 != 807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = -1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = 780116236488LL;

	t12 = (((x53+x54)&x55)^x56);

	if (t12 != 9223372036787226749LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t13 = 11LLU;

	t13 = (((x57+x58)&x59)^x60);

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x62 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	uint64_t t14 = 237689301788794LLU;

	t14 = (((x61+x62)&x63)^x64);

	if (t14 != 18446744071562068480LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 155417957LL;
	uint64_t x68 = 5LLU;
	uint64_t t15 = 53953966249LLU;

	t15 = (((x65+x66)&x67)^x68);

	if (t15 != 155417959LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 453039U;
	int32_t x70 = 75604;
	volatile uint32_t t16 = 452360U;

	t16 = (((x69+x70)&x71)^x72);

	if (t16 != 4294438652U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	static int32_t t17 = 4476764;

	t17 = (((x77+x78)&x79)^x80);

	if (t17 != -65281) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 25;
	int16_t x86 = -1;
	int64_t x88 = INT64_MIN;
	int64_t t18 = -211LL;

	t18 = (((x85+x86)&x87)^x88);

	if (t18 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MAX;
	int32_t x90 = INT32_MIN;
	int32_t x91 = 2429;
	volatile int16_t x92 = 5728;
	volatile int64_t t19 = 5328390125566734LL;

	t19 = (((x89+x90)&x91)^x92);

	if (t19 != 7965LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 24578807607238181LLU;
	volatile uint8_t x96 = 46U;
	volatile uint64_t t20 = 88972646550418LLU;

	t20 = (((x93+x94)&x95)^x96);

	if (t20 != 24578807607230510LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 0;
	int16_t x98 = INT16_MIN;
	int8_t x99 = 7;
	int16_t x100 = INT16_MIN;
	volatile int32_t t21 = -9479643;

	t21 = (((x97+x98)&x99)^x100);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = 1414759;
	int8_t x102 = INT8_MAX;
	int8_t x103 = 6;
	uint8_t x104 = 0U;
	int32_t t22 = 49892908;

	t22 = (((x101+x102)&x103)^x104);

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 89U;
	uint8_t x106 = UINT8_MAX;
	static volatile int8_t x107 = INT8_MIN;
	static int64_t x108 = INT64_MAX;
	volatile int64_t t23 = 379881879960603244LL;

	t23 = (((x105+x106)&x107)^x108);

	if (t23 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = -1;
	volatile uint64_t x110 = 546708290926938LLU;
	int32_t x111 = -1;
	uint32_t x112 = 71367716U;
	uint64_t t24 = 96LLU;

	t24 = (((x109+x110)&x111)^x112);

	if (t24 != 546708353779069LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -60;
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	static int32_t x116 = INT32_MIN;
	int32_t t25 = INT32_MIN;

	t25 = (((x113+x114)&x115)^x116);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 2013012801LLU;
	volatile int16_t x118 = -1;
	volatile int8_t x119 = 0;
	static uint64_t t26 = UINT64_MAX;

	t26 = (((x117+x118)&x119)^x120);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = -1LL;
	uint16_t x122 = 135U;
	int32_t x123 = -1;
	uint16_t x124 = 12U;
	int64_t t27 = 13321556030141LL;

	t27 = (((x121+x122)&x123)^x124);

	if (t27 != 138LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x125 = UINT32_MAX;
	static int8_t x126 = INT8_MAX;
	int8_t x128 = -6;
	volatile uint32_t t28 = 581507U;

	t28 = (((x125+x126)&x127)^x128);

	if (t28 != 4294967290U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = 372;
	static volatile int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	int64_t t29 = -1261196579937995LL;

	t29 = (((x129+x130)&x131)^x132);

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = 133933;
	static volatile uint8_t x139 = 0U;
	static int8_t x140 = -13;
	uint32_t t30 = 72938U;

	t30 = (((x137+x138)&x139)^x140);

	if (t30 != 4294967283U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x146 = -2;
	volatile int16_t x148 = INT16_MIN;

	t31 = (((x145+x146)&x147)^x148);

	if (t31 != 7695679762LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	int16_t x152 = -1;

	t32 = (((x149+x150)&x151)^x152);

	if (t32 != -9223372036854775662LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 229U;
	int64_t x155 = INT64_MAX;
	static int8_t x156 = INT8_MIN;
	volatile int64_t t33 = 4079398708724LL;

	t33 = (((x153+x154)&x155)^x156);

	if (t33 != -153LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x158 = INT8_MIN;
	uint64_t x159 = UINT64_MAX;
	static uint16_t x160 = UINT16_MAX;
	static uint64_t t34 = 11891647679947183LLU;

	t34 = (((x157+x158)&x159)^x160);

	if (t34 != 18399946101161432072LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x161 = 16U;
	static int16_t x162 = 0;
	volatile int64_t x163 = INT64_MAX;
	static volatile uint8_t x164 = 17U;
	volatile int64_t t35 = -1553720LL;

	t35 = (((x161+x162)&x163)^x164);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x165 = -1;
	volatile uint8_t x166 = 0U;
	static int64_t x167 = -1LL;
	int16_t x168 = INT16_MAX;

	t36 = (((x165+x166)&x167)^x168);

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x169 = 5981655253LLU;
	int32_t x170 = 337;
	int64_t x171 = -19805809549LL;
	int64_t x172 = -869334044416739LL;
	volatile uint64_t t37 = 31375LLU;

	t37 = (((x169+x170)&x171)^x172);

	if (t37 != 18445874742350001471LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x173 = 122;
	uint32_t x175 = UINT32_MAX;
	int8_t x176 = 2;

	t38 = (((x173+x174)&x175)^x176);

	if (t38 != 4294967288U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x179 = -1;
	static int8_t x180 = 5;
	int64_t t39 = -187364038803923LL;

	t39 = (((x177+x178)&x179)^x180);

	if (t39 != 489LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x184 = -2;

	t40 = (((x181+x182)&x183)^x184);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = -53;
	volatile int8_t x186 = INT8_MIN;
	volatile int64_t x188 = INT64_MIN;

	t41 = (((x185+x186)&x187)^x188);

	if (t41 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x189 = 1;
	uint64_t x190 = 2862272LLU;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = 540796412345LL;
	volatile uint64_t t42 = 1260401220199LLU;

	t42 = (((x189+x190)&x191)^x192);

	if (t42 != 540796412345LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x193 = INT64_MAX;
	int8_t x194 = INT8_MIN;
	int8_t x195 = 5;
	volatile int64_t t43 = -88160540LL;

	t43 = (((x193+x194)&x195)^x196);

	if (t43 != 4294967290LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x197 = INT32_MIN;
	uint32_t x198 = UINT32_MAX;
	volatile int32_t x199 = -1;
	int8_t x200 = INT8_MIN;
	volatile uint32_t t44 = 478692U;

	t44 = (((x197+x198)&x199)^x200);

	if (t44 != 2147483775U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	volatile int64_t x202 = INT64_MAX;
	static int32_t x203 = INT32_MIN;

	t45 = (((x201+x202)&x203)^x204);

	if (t45 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	static volatile uint8_t x210 = UINT8_MAX;
	uint8_t x211 = 7U;
	volatile int32_t t46 = -106630;

	t46 = (((x209+x210)&x211)^x212);

	if (t46 != 59) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x217 = 2201;
	int8_t x218 = INT8_MAX;
	static uint32_t x220 = 13614114U;
	volatile uint32_t t47 = 1005U;

	t47 = (((x217+x218)&x219)^x220);

	if (t47 != 13614114U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = 413U;
	int64_t t48 = 6042LL;

	t48 = (((x221+x222)&x223)^x224);

	if (t48 != 413LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x225 = -1LL;
	int32_t x226 = -7859070;
	uint32_t x228 = 7U;
	int64_t t49 = -54LL;

	t49 = (((x225+x226)&x227)^x228);

	if (t49 != -7864313LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x229 = 39U;
	int64_t x230 = 8488560LL;
	int8_t x232 = INT8_MAX;
	volatile int64_t t50 = -3829751257583611323LL;

	t50 = (((x229+x230)&x231)^x232);

	if (t50 != 125LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x233 = INT16_MIN;
	uint8_t x234 = UINT8_MAX;
	static int64_t x235 = -1743LL;
	int64_t x236 = 3LL;
	int64_t t51 = 5845865LL;

	t51 = (((x233+x234)&x235)^x236);

	if (t51 != -32718LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 22U;
	int8_t x242 = 45;
	static uint64_t x243 = UINT64_MAX;
	int64_t x244 = -1LL;

	t52 = (((x241+x242)&x243)^x244);

	if (t52 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t53 = -38678;

	t53 = (((x249+x250)&x251)^x252);

	if (t53 != -66560) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	int8_t x255 = -1;
	volatile int8_t x256 = INT8_MIN;

	t54 = (((x253+x254)&x255)^x256);

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x257 = 184U;
	static int64_t x259 = -30167245643792LL;
	int8_t x260 = -1;
	static int64_t t55 = 278542166482947LL;

	t55 = (((x257+x258)&x259)^x260);

	if (t55 != -49LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	static int16_t x262 = -1;
	volatile uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 342365788LLU;
	static volatile uint64_t t56 = 551162721494864LLU;

	t56 = (((x261+x262)&x263)^x264);

	if (t56 != 342419874LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = 321977009357LLU;
	static int32_t x266 = -123286449;
	uint64_t t57 = 45568857463LLU;

	t57 = (((x265+x266)&x267)^x268);

	if (t57 != 18446743751855828636LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MAX;
	int8_t x272 = -2;
	int64_t t58 = -764928LL;

	t58 = (((x269+x270)&x271)^x272);

	if (t58 != -966LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = -1;
	static int32_t x282 = 2087374;
	static int64_t x283 = INT64_MIN;
	uint8_t x284 = 2U;
	volatile int64_t t59 = -8LL;

	t59 = (((x281+x282)&x283)^x284);

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x286 = -18;
	static int8_t x287 = INT8_MIN;
	static int8_t x288 = INT8_MIN;
	static uint32_t t60 = 0U;

	t60 = (((x285+x286)&x287)^x288);

	if (t60 != 4244947968U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = 1278486;
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = INT64_MIN;
	uint64_t t61 = 3538LLU;

	t61 = (((x289+x290)&x291)^x292);

	if (t61 != 9223372036856054293LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x293 = UINT8_MAX;
	static uint16_t x294 = UINT16_MAX;
	static int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	static volatile int64_t t62 = -10733451LL;

	t62 = (((x293+x294)&x295)^x296);

	if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 10312353600483LLU;
	uint32_t x299 = 205838578U;
	static uint64_t t63 = 1409915572994LLU;

	t63 = (((x297+x298)&x299)^x300);

	if (t63 != 134491933LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = -1738176538660LL;
	static volatile uint64_t x302 = 59156LLU;
	uint64_t x303 = 27113909LLU;
	uint32_t x304 = 1768834U;
	uint64_t t64 = 36183503574719LLU;

	t64 = (((x301+x302)&x303)^x304);

	if (t64 != 8602930LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x309 = 11;
	volatile int64_t x311 = -1LL;

	t65 = (((x309+x310)&x311)^x312);

	if (t65 != 636556336939LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x313 = UINT16_MAX;
	static int16_t x314 = -1;
	static volatile uint16_t x316 = UINT16_MAX;

	t66 = (((x313+x314)&x315)^x316);

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = -85529310LL;
	static int16_t x322 = INT16_MIN;
	static int16_t x323 = -1;
	static volatile int64_t x324 = -6224468114LL;
	volatile int64_t t67 = -719LL;

	t67 = (((x321+x322)&x323)^x324);

	if (t67 != 6276270668LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x326 = UINT16_MAX;
	static volatile int16_t x327 = INT16_MIN;
	static int32_t x328 = -212154345;

	t68 = (((x325+x326)&x327)^x328);

	if (t68 != -212187113) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x329 = 14U;
	int8_t x330 = 5;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MIN;
	int64_t t69 = 1485LL;

	t69 = (((x329+x330)&x331)^x332);

	if (t69 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x335 = INT8_MAX;
	uint16_t x336 = 2006U;
	volatile uint32_t t70 = 194U;

	t70 = (((x333+x334)&x335)^x336);

	if (t70 != 2039U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MAX;
	uint64_t x340 = 734440091732152941LLU;
	volatile uint64_t t71 = 6372130545423006LLU;

	t71 = (((x337+x338)&x339)^x340);

	if (t71 != 734440091732176274LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x341 = INT16_MIN;
	volatile int16_t x342 = 2608;
	volatile int64_t x343 = INT64_MAX;
	int16_t x344 = -1;
	int64_t t72 = 124670317000973101LL;

	t72 = (((x341+x342)&x343)^x344);

	if (t72 != -9223372036854745649LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = -1;
	int16_t x348 = INT16_MIN;

	t73 = (((x345+x346)&x347)^x348);

	if (t73 != 32766LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = 319;
	volatile int8_t x350 = -19;
	uint8_t x351 = 3U;
	uint8_t x352 = 25U;

	t74 = (((x349+x350)&x351)^x352);

	if (t74 != 25) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x355 = -1;
	volatile uint32_t x356 = 2115552847U;
	volatile int64_t t75 = -69671019LL;

	t75 = (((x353+x354)&x355)^x356);

	if (t75 != -4367916117852LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x357 = 57564870U;
	int8_t x358 = 2;
	volatile uint16_t x359 = 10U;
	volatile int8_t x360 = -1;
	volatile uint32_t t76 = 447428139U;

	t76 = (((x357+x358)&x359)^x360);

	if (t76 != 4294967287U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = -1;
	static volatile uint8_t x362 = UINT8_MAX;
	static uint64_t x363 = 285716616655343733LLU;
	uint16_t x364 = 1296U;
	uint64_t t77 = 57868LLU;

	t77 = (((x361+x362)&x363)^x364);

	if (t77 != 1380LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = -1;
	volatile int64_t x367 = INT64_MAX;
	static int8_t x368 = -4;
	volatile int64_t t78 = 1053684152526520LL;

	t78 = (((x365+x366)&x367)^x368);

	if (t78 != -254LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 2050846639U;
	static int16_t x376 = INT16_MIN;
	volatile uint32_t t79 = 7424858U;

	t79 = (((x373+x374)&x375)^x376);

	if (t79 != 2244116524U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = UINT32_MAX;
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = INT64_MIN;
	int32_t x380 = -1;
	volatile int64_t t80 = -2849LL;

	t80 = (((x377+x378)&x379)^x380);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x382 = UINT64_MAX;
	uint64_t t81 = 34785624738133LLU;

	t81 = (((x381+x382)&x383)^x384);

	if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x386 = INT16_MAX;
	uint8_t x388 = UINT8_MAX;

	t82 = (((x385+x386)&x387)^x388);

	if (t82 != 32513) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x389 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	static int64_t x392 = 3263250LL;
	volatile uint64_t t83 = 34148044383003847LLU;

	t83 = (((x389+x390)&x391)^x392);

	if (t83 != 113819896594LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x395 = INT16_MAX;
	int32_t x396 = -1;

	t84 = (((x393+x394)&x395)^x396);

	if (t84 != -97) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x398 = 112;
	int16_t x400 = INT16_MAX;
	volatile int32_t t85 = 22;

	t85 = (((x397+x398)&x399)^x400);

	if (t85 != -113) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x402 = 3707U;
	static int64_t x404 = INT64_MIN;
	static int64_t t86 = INT64_MIN;

	t86 = (((x401+x402)&x403)^x404);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MAX;
	uint16_t x406 = 63U;
	uint8_t x407 = 1U;
	int32_t x408 = INT32_MIN;
	static int32_t t87 = INT32_MIN;

	t87 = (((x405+x406)&x407)^x408);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = 96;
	int8_t x410 = INT8_MAX;
	volatile uint32_t x411 = 11207915U;
	uint32_t x412 = 184370U;
	uint32_t t88 = 3U;

	t88 = (((x409+x410)&x411)^x412);

	if (t88 != 184569U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x414 = 23698419;
	uint64_t x415 = 7824399LLU;
	int8_t x416 = INT8_MAX;
	static volatile uint64_t t89 = 273976449048LLU;

	t89 = (((x413+x414)&x415)^x416);

	if (t89 != 6357116LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = INT64_MIN;
	int64_t x418 = 4LL;
	uint16_t x419 = UINT16_MAX;
	volatile int64_t t90 = -1006LL;

	t90 = (((x417+x418)&x419)^x420);

	if (t90 != -32764LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x422 = 1U;
	int8_t x424 = 2;
	int64_t t91 = -238010786012249LL;

	t91 = (((x421+x422)&x423)^x424);

	if (t91 != 12250LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x429 = UINT8_MAX;
	uint8_t x430 = 4U;
	volatile int8_t x431 = INT8_MIN;
	int32_t x432 = 267653;
	int32_t t92 = -1644145;

	t92 = (((x429+x430)&x431)^x432);

	if (t92 != 267397) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MIN;
	uint64_t x434 = UINT64_MAX;
	uint16_t x435 = 4669U;

	t93 = (((x433+x434)&x435)^x436);

	if (t93 != 2147478978LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x438 = 779087775LL;
	static int8_t x439 = INT8_MIN;
	volatile int16_t x440 = 5;
	int64_t t94 = 11548LL;

	t94 = (((x437+x438)&x439)^x440);

	if (t94 != 779087749LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -1;
	int64_t x442 = INT64_MAX;
	static int16_t x443 = INT16_MAX;
	static int32_t x444 = INT32_MAX;
	volatile int64_t t95 = -917005415201042485LL;

	t95 = (((x441+x442)&x443)^x444);

	if (t95 != 2147450881LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = 1U;
	static int32_t x450 = -16732736;
	volatile int8_t x451 = 0;
	int8_t x452 = 0;
	static volatile int32_t t96 = -759603116;

	t96 = (((x449+x450)&x451)^x452);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x453 = 1067697197081038LLU;
	int16_t x455 = INT16_MAX;
	volatile int8_t x456 = 28;
	volatile uint64_t t97 = 751617104LLU;

	t97 = (((x453+x454)&x455)^x456);

	if (t97 != 25041LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = 0;
	int8_t x458 = 54;
	static uint64_t x460 = 52259LLU;

	t98 = (((x457+x458)&x459)^x460);

	if (t98 != 52259LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = -2030216512038503683LL;
	uint64_t x463 = 6039864449LLU;
	volatile int8_t x464 = 1;

	t99 = (((x461+x462)&x463)^x464);

	if (t99 != 671154305LLU) { NG(); } else { ; }
	
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

