#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x11 = 3U;
static int64_t x14 = -1LL;
int8_t x33 = INT8_MIN;
static uint16_t x37 = 2511U;
uint16_t x43 = UINT16_MAX;
int64_t x48 = INT64_MIN;
static uint8_t x49 = 19U;
uint16_t x51 = 7657U;
volatile uint64_t x53 = UINT64_MAX;
int32_t x55 = INT32_MIN;
int16_t x57 = INT16_MIN;
volatile uint64_t t9 = 362026728028859LLU;
static int32_t x68 = -1;
int64_t t11 = -12348074510439LL;
int32_t x74 = INT32_MAX;
uint64_t t12 = 15627527851720LLU;
int8_t x78 = INT8_MIN;
uint32_t t13 = 204260652U;
uint64_t x82 = 396946496178LLU;
static volatile uint64_t t14 = 3628375813658060499LLU;
uint64_t x86 = UINT64_MAX;
int64_t x87 = INT64_MIN;
uint8_t x88 = 3U;
volatile uint16_t x92 = 6435U;
static int8_t x113 = -1;
static volatile int8_t x114 = INT8_MIN;
uint32_t x115 = 12U;
uint64_t t22 = 3948378784186813LLU;
int16_t x130 = -1;
volatile int32_t t23 = 1100069;
static int32_t x140 = INT32_MIN;
static int8_t x142 = INT8_MIN;
int8_t x149 = -63;
int64_t t27 = -6131798188327086LL;
int16_t x153 = 11;
static volatile uint32_t x166 = 8406U;
volatile uint8_t x168 = 88U;
static volatile uint64_t t30 = 34614306702287LLU;
int16_t x169 = -1;
int32_t x171 = INT32_MIN;
int32_t t31 = INT32_MIN;
static uint16_t x174 = 7U;
int32_t x179 = INT32_MIN;
static uint16_t x183 = UINT16_MAX;
volatile uint32_t t34 = 41010418U;
uint32_t x187 = 84903832U;
uint8_t x188 = UINT8_MAX;
int32_t x212 = INT32_MAX;
uint32_t x236 = UINT32_MAX;
uint64_t x238 = UINT64_MAX;
int16_t x254 = INT16_MIN;
static int16_t x255 = INT16_MAX;
uint64_t x257 = 1LLU;
int32_t x260 = INT32_MAX;
volatile int64_t t50 = 1321LL;
static volatile int32_t x269 = -1;
uint32_t t52 = 2U;
int64_t x273 = 349016051LL;
int64_t x278 = 21LL;
static volatile int16_t x279 = INT16_MIN;
int16_t x289 = -1;
uint8_t x292 = 1U;
volatile int64_t t57 = -21183613334LL;
volatile int64_t x294 = -59805477LL;
uint32_t x321 = 1500758U;
int8_t x327 = INT8_MIN;
static uint32_t x347 = UINT32_MAX;
int64_t x351 = INT64_MIN;
static volatile int8_t x354 = INT8_MAX;
int64_t x355 = INT64_MIN;
static uint16_t x367 = 8U;
uint64_t x369 = 470169632083151LLU;
uint64_t t68 = 939176910492011LLU;
int32_t x380 = INT32_MIN;
int32_t t69 = INT32_MIN;
int32_t x383 = INT32_MIN;
volatile int16_t x389 = INT16_MAX;
volatile int64_t x394 = -1LL;
int16_t x410 = INT16_MAX;
static int16_t x412 = -1;
volatile int64_t t75 = INT64_MIN;
int64_t x415 = INT64_MIN;
int64_t t76 = 119497738LL;
uint64_t x422 = UINT64_MAX;
volatile int32_t x431 = INT32_MIN;
uint64_t t79 = 1313141994382LLU;
volatile int32_t t80 = 10913;
uint8_t x442 = UINT8_MAX;
int64_t x444 = INT64_MIN;
uint16_t x446 = 0U;
int64_t x455 = -1LL;
int16_t x469 = -1;
int32_t x483 = 636;
int32_t x487 = 6331491;
int32_t x491 = INT32_MIN;
int64_t x493 = -2931438733LL;
int8_t x494 = 7;
static int64_t t93 = INT64_MIN;
int32_t x509 = 1581609;
int16_t x511 = INT16_MAX;
volatile uint8_t x514 = UINT8_MAX;
int16_t x515 = INT16_MIN;
volatile int32_t x516 = INT32_MIN;
uint32_t x521 = UINT32_MAX;
static int16_t x525 = INT16_MAX;


void f0(void) {
	static uint32_t x9 = 3559U;
	int8_t x10 = 1;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t0 = 2501012626LLU;

	t0 = (((x9*x10)&x11)&x12);

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 8503242U;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = -1;
	volatile int64_t t1 = 78449127LL;

	t1 = (((x13*x14)&x15)&x16);

	if (t1 != -8503296LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = 4146475800286LLU;
	volatile int64_t x26 = -67400530103364130LL;
	uint64_t x27 = UINT64_MAX;
	volatile int64_t x28 = INT64_MIN;
	static volatile uint64_t t2 = 43220043LLU;

	t2 = (((x25*x26)&x27)&x28);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x34 = INT16_MAX;
	volatile int64_t x35 = 3427155161LL;
	volatile int32_t x36 = INT32_MIN;
	volatile int64_t t3 = -798LL;

	t3 = (((x33*x34)&x35)&x36);

	if (t3 != 2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x38 = UINT16_MAX;
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = UINT8_MAX;
	uint32_t t4 = 3826U;

	t4 = (((x37*x38)&x39)&x40);

	if (t4 != 49U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x41 = 3610U;
	int16_t x42 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t5 = 36;

	t5 = (((x41*x42)&x43)&x44);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MIN;
	static uint64_t x46 = 1106067723152LLU;
	static volatile int32_t x47 = INT32_MIN;
	uint64_t t6 = 1703315382047873588LLU;

	t6 = (((x45*x46)&x47)&x48);

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x50 = 108621479;
	volatile uint16_t x52 = 2U;
	int32_t t7 = -5966657;

	t7 = (((x49*x50)&x51)&x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = INT64_MAX;
	static int8_t x56 = 10;
	uint64_t t8 = 109407953840919110LLU;

	t8 = (((x53*x54)&x55)&x56);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 16U;
	uint64_t x60 = 8914294203959LLU;

	t9 = (((x57*x58)&x59)&x60);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -1LL;
	static int32_t x62 = INT32_MIN;
	int16_t x63 = 6257;
	uint16_t x64 = 227U;
	volatile int64_t t10 = -138567169490806LL;

	t10 = (((x61*x62)&x63)&x64);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x65 = -1;
	int64_t x66 = 59LL;
	uint16_t x67 = 3U;

	t11 = (((x65*x66)&x67)&x68);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 86390894LLU;
	uint64_t x75 = UINT64_MAX;
	static uint16_t x76 = UINT16_MAX;

	t12 = (((x73*x74)&x75)&x76);

	if (t12 != 51090LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = INT8_MAX;
	static volatile uint16_t x79 = 236U;
	uint32_t x80 = 19U;

	t13 = (((x77*x78)&x79)&x80);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = INT8_MIN;
	int64_t x83 = -3941722363869LL;
	uint64_t x84 = UINT64_MAX;

	t14 = (((x81*x82)&x83)&x84);

	if (t14 != 18446691615281029120LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x85 = INT16_MIN;
	uint64_t t15 = 4914834600533939LLU;

	t15 = (((x85*x86)&x87)&x88);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile uint64_t t16 = 6396156203694LLU;

	t16 = (((x89*x90)&x91)&x92);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = 1274888668964LL;
	uint32_t x98 = 31397U;
	static int32_t x99 = -1;
	int16_t x100 = 0;
	int64_t t17 = -18804470195498964LL;

	t17 = (((x97*x98)&x99)&x100);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x105 = -62;
	static uint32_t x106 = 1593U;
	uint32_t x107 = UINT32_MAX;
	static volatile uint16_t x108 = 203U;
	volatile uint32_t t18 = 579U;

	t18 = (((x105*x106)&x107)&x108);

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = INT32_MIN;
	static uint32_t x110 = 25910U;
	volatile int16_t x111 = 32;
	int16_t x112 = -48;
	volatile uint32_t t19 = 4756U;

	t19 = (((x109*x110)&x111)&x112);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x116 = INT64_MIN;
	int64_t t20 = -56446LL;

	t20 = (((x113*x114)&x115)&x116);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MIN;
	volatile int16_t x118 = -1;
	int32_t x119 = 467;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t21 = 59665;

	t21 = (((x117*x118)&x119)&x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = -1;
	uint64_t x126 = 101741053442249LLU;
	volatile int16_t x127 = -17;
	int8_t x128 = -33;

	t22 = (((x125*x126)&x127)&x128);

	if (t22 != 18446642332656109319LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	static int8_t x132 = INT8_MAX;

	t23 = (((x129*x130)&x131)&x132);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x133 = 174U;
	int64_t x134 = -1LL;
	uint16_t x135 = 13610U;
	int8_t x136 = INT8_MIN;
	volatile int64_t t24 = 267901483212913LL;

	t24 = (((x133*x134)&x135)&x136);

	if (t24 != 13568LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x137 = INT16_MIN;
	uint32_t x138 = 238059U;
	int16_t x139 = -1;
	static uint32_t t25 = 57259U;

	t25 = (((x137*x138)&x139)&x140);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x141 = 101U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = 7;
	static volatile int32_t t26 = -259;

	t26 = (((x141*x142)&x143)&x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	volatile int8_t x152 = 0;

	t27 = (((x149*x150)&x151)&x152);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x154 = 692254LLU;
	uint32_t x155 = 145U;
	static int64_t x156 = INT64_MAX;
	volatile uint64_t t28 = 1582977762946547591LLU;

	t28 = (((x153*x154)&x155)&x156);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x161 = 124LLU;
	static int64_t x162 = -4351617235422606LL;
	uint64_t x163 = 215619412674LLU;
	int64_t x164 = -1945278334043LL;
	volatile uint64_t t29 = 520LLU;

	t29 = (((x161*x162)&x163)&x164);

	if (t29 != 146297332224LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x165 = 380LLU;
	volatile int8_t x167 = -1;

	t30 = (((x165*x166)&x167)&x168);

	if (t30 != 8LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x170 = 117;
	static int8_t x172 = -1;

	t31 = (((x169*x170)&x171)&x172);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 5978U;
	uint64_t x175 = 31586967248624LLU;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t32 = 370508315925586LLU;

	t32 = (((x173*x174)&x175)&x176);

	if (t32 != 624LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = UINT8_MAX;
	uint8_t x178 = 0U;
	uint8_t x180 = 84U;
	int32_t t33 = -64621;

	t33 = (((x177*x178)&x179)&x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x181 = UINT32_MAX;
	int32_t x182 = -1;
	volatile int16_t x184 = INT16_MIN;

	t34 = (((x181*x182)&x183)&x184);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = 89;
	int8_t x186 = 8;
	volatile uint32_t t35 = 2U;

	t35 = (((x185*x186)&x187)&x188);

	if (t35 != 136U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x189 = UINT64_MAX;
	uint8_t x190 = 1U;
	volatile uint32_t x191 = 37266705U;
	static int32_t x192 = INT32_MAX;
	volatile uint64_t t36 = 1019LLU;

	t36 = (((x189*x190)&x191)&x192);

	if (t36 != 37266705LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int8_t x195 = -1;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t37 = 4868212LL;

	t37 = (((x193*x194)&x195)&x196);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = 8899;
	uint8_t x199 = 0U;
	int16_t x200 = -1;
	volatile int32_t t38 = -305918;

	t38 = (((x197*x198)&x199)&x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x201 = INT32_MIN;
	uint64_t x202 = UINT64_MAX;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t39 = 3LLU;

	t39 = (((x201*x202)&x203)&x204);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = INT32_MAX;
	uint64_t x206 = UINT64_MAX;
	static int16_t x207 = INT16_MAX;
	uint16_t x208 = 60U;
	uint64_t t40 = 3492668210028LLU;

	t40 = (((x205*x206)&x207)&x208);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x209 = 895;
	int8_t x210 = INT8_MIN;
	volatile int32_t x211 = -1;
	int32_t t41 = -1052373237;

	t41 = (((x209*x210)&x211)&x212);

	if (t41 != 2147369088) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = 196;
	static volatile int8_t x226 = INT8_MIN;
	static int16_t x227 = -239;
	int32_t x228 = -1;
	static int32_t t42 = 10;

	t42 = (((x225*x226)&x227)&x228);

	if (t42 != -25088) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	int64_t x232 = 8285LL;
	volatile int64_t t43 = -35181075082921846LL;

	t43 = (((x229*x230)&x231)&x232);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -1;
	static volatile int64_t x234 = -1LL;
	uint8_t x235 = 53U;
	volatile int64_t t44 = 1LL;

	t44 = (((x233*x234)&x235)&x236);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x237 = INT16_MIN;
	static volatile uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MAX;
	uint64_t t45 = 1775LLU;

	t45 = (((x237*x238)&x239)&x240);

	if (t45 != 32768LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 263707868496612LLU;
	static int16_t x242 = 1;
	int16_t x243 = INT16_MIN;
	volatile int8_t x244 = 1;
	uint64_t t46 = 759194LLU;

	t46 = (((x241*x242)&x243)&x244);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile uint32_t x250 = 73693148U;
	int64_t x251 = 595677395926LL;
	volatile int64_t x252 = INT64_MIN;
	int64_t t47 = 8422775LL;

	t47 = (((x249*x250)&x251)&x252);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = -1;
	int16_t x256 = INT16_MIN;
	int32_t t48 = 10821;

	t48 = (((x253*x254)&x255)&x256);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	volatile uint64_t t49 = 22056LLU;

	t49 = (((x257*x258)&x259)&x260);

	if (t49 != 32640LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = -43;
	volatile int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = -13664719LL;

	t50 = (((x261*x262)&x263)&x264);

	if (t50 != -13697024LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x265 = -1;
	uint16_t x266 = 643U;
	uint32_t x267 = 97U;
	volatile int16_t x268 = INT16_MAX;
	uint32_t t51 = 165554U;

	t51 = (((x265*x266)&x267)&x268);

	if (t51 != 97U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x270 = INT16_MAX;
	int16_t x271 = -638;
	uint32_t x272 = UINT32_MAX;

	t52 = (((x269*x270)&x271)&x272);

	if (t52 != 4294934528U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x274 = 1780;
	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;
	volatile int64_t t53 = -197115297815740116LL;

	t53 = (((x273*x274)&x275)&x276);

	if (t53 != 621248544768LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x277 = 203997189218214818LLU;
	static int64_t x280 = INT64_MAX;
	uint64_t t54 = 106849874421354LLU;

	t54 = (((x277*x278)&x279)&x280);

	if (t54 != 4283940973582483456LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = 43;
	static int32_t x282 = -321515;
	int32_t x283 = 7;
	int32_t x284 = INT32_MIN;
	volatile int32_t t55 = -91316346;

	t55 = (((x281*x282)&x283)&x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x285 = -1LL;
	volatile uint8_t x286 = UINT8_MAX;
	static uint32_t x287 = 966224715U;
	uint64_t x288 = 1687656162707696LLU;
	volatile uint64_t t56 = 1970431680148LLU;

	t56 = (((x285*x286)&x287)&x288);

	if (t56 != 269764608LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x290 = -3486787530925LL;
	static uint16_t x291 = UINT16_MAX;

	t57 = (((x289*x290)&x291)&x292);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x293 = -1;
	static uint8_t x295 = 31U;
	int16_t x296 = INT16_MIN;
	volatile int64_t t58 = 772301896864427713LL;

	t58 = (((x293*x294)&x295)&x296);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x305 = -1;
	uint16_t x306 = 16577U;
	volatile uint16_t x307 = 0U;
	int32_t x308 = -66032573;
	volatile int32_t t59 = -54447;

	t59 = (((x305*x306)&x307)&x308);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x322 = 6U;
	uint64_t x323 = 47479LLU;
	int32_t x324 = -1;
	volatile uint64_t t60 = 1008LLU;

	t60 = (((x321*x322)&x323)&x324);

	if (t60 != 8196LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x325 = 3U;
	uint32_t x326 = 329267105U;
	int16_t x328 = INT16_MIN;
	uint32_t t61 = 231U;

	t61 = (((x325*x326)&x327)&x328);

	if (t61 != 987791360U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x329 = 26U;
	int32_t x330 = -1;
	int32_t x331 = -1;
	volatile uint8_t x332 = UINT8_MAX;
	uint32_t t62 = 28U;

	t62 = (((x329*x330)&x331)&x332);

	if (t62 != 230U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	uint64_t x348 = 500201LLU;
	volatile uint64_t t63 = 1159072508899LLU;

	t63 = (((x345*x346)&x347)&x348);

	if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = -1LL;
	int16_t x352 = INT16_MAX;
	volatile int64_t t64 = 3575383LL;

	t64 = (((x349*x350)&x351)&x352);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x353 = -1;
	static uint16_t x356 = 90U;
	int64_t t65 = 80LL;

	t65 = (((x353*x354)&x355)&x356);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x357 = 3;
	static int16_t x358 = -1;
	int16_t x359 = -1;
	uint32_t x360 = 2477U;
	static volatile uint32_t t66 = 7532772U;

	t66 = (((x357*x358)&x359)&x360);

	if (t66 != 2477U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x365 = 6067;
	volatile uint8_t x366 = 11U;
	volatile uint64_t x368 = UINT64_MAX;
	static uint64_t t67 = 411649155132162365LLU;

	t67 = (((x365*x366)&x367)&x368);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x370 = 11271779U;
	uint8_t x371 = 2U;
	static int16_t x372 = 13401;

	t68 = (((x369*x370)&x371)&x372);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = -55;
	int8_t x379 = INT8_MIN;

	t69 = (((x377*x378)&x379)&x380);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x381 = 0U;
	int16_t x382 = INT16_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	static int32_t t70 = 947783;

	t70 = (((x381*x382)&x383)&x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x385 = -1;
	uint8_t x386 = 3U;
	int16_t x387 = -1;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t71 = -2;

	t71 = (((x385*x386)&x387)&x388);

	if (t71 != 253) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x390 = -1;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int64_t t72 = -858802443072LL;

	t72 = (((x389*x390)&x391)&x392);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x393 = 13U;
	int8_t x395 = INT8_MAX;
	int64_t x396 = 19211868403673365LL;
	volatile int64_t t73 = 408972215LL;

	t73 = (((x393*x394)&x395)&x396);

	if (t73 != 17LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x397 = 130LLU;
	int16_t x398 = INT16_MAX;
	int64_t x399 = 14106410424330091LL;
	static volatile int8_t x400 = INT8_MIN;
	uint64_t t74 = 39294541460LLU;

	t74 = (((x397*x398)&x399)&x400);

	if (t74 != 4253440LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x409 = -1;
	volatile int64_t x411 = INT64_MIN;

	t75 = (((x409*x410)&x411)&x412);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x413 = 1U;
	uint32_t x414 = 8160484U;
	int8_t x416 = -39;

	t76 = (((x413*x414)&x415)&x416);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = -1;
	int16_t x419 = -1;
	static int64_t x420 = 5LL;
	int64_t t77 = -15340866LL;

	t77 = (((x417*x418)&x419)&x420);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int32_t x423 = -56251049;
	static volatile int8_t x424 = INT8_MIN;
	static uint64_t t78 = 1118344248101897LLU;

	t78 = (((x421*x422)&x423)&x424);

	if (t78 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x429 = 56U;
	uint32_t x430 = 144960689U;
	uint64_t x432 = 102667LLU;

	t79 = (((x429*x430)&x431)&x432);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x433 = -1;
	int32_t x434 = 0;
	static int32_t x435 = -1;
	uint16_t x436 = 919U;

	t80 = (((x433*x434)&x435)&x436);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = -1;
	int32_t x438 = -1;
	int8_t x439 = -2;
	int8_t x440 = INT8_MIN;
	volatile int32_t t81 = 0;

	t81 = (((x437*x438)&x439)&x440);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x441 = 2428209672410LLU;
	static volatile int32_t x443 = 5;
	static volatile uint64_t t82 = 26477046LLU;

	t82 = (((x441*x442)&x443)&x444);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x445 = INT32_MIN;
	int8_t x447 = INT8_MIN;
	int8_t x448 = 1;
	int32_t t83 = 0;

	t83 = (((x445*x446)&x447)&x448);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = -11;
	int64_t x450 = 131624086432LL;
	int64_t x451 = INT64_MAX;
	volatile int32_t x452 = -1;
	int64_t t84 = -1397261848344073319LL;

	t84 = (((x449*x450)&x451)&x452);

	if (t84 != 9223370588989825056LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x453 = UINT16_MAX;
	uint8_t x454 = UINT8_MAX;
	uint32_t x456 = 399612435U;
	int64_t t85 = -27LL;

	t85 = (((x453*x454)&x455)&x456);

	if (t85 != 13670913LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x457 = -219;
	static int64_t x458 = -1LL;
	static uint8_t x459 = UINT8_MAX;
	volatile int8_t x460 = INT8_MIN;
	volatile int64_t t86 = 23804042905778507LL;

	t86 = (((x457*x458)&x459)&x460);

	if (t86 != 128LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x470 = 0;
	uint64_t x471 = 1984989220554900LLU;
	volatile int8_t x472 = INT8_MIN;
	volatile uint64_t t87 = 53191LLU;

	t87 = (((x469*x470)&x471)&x472);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x477 = -13212002;
	int8_t x478 = INT8_MIN;
	int32_t x479 = 836951298;
	int16_t x480 = 5594;
	int32_t t88 = 1849658;

	t88 = (((x477*x478)&x479)&x480);

	if (t88 != 4352) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = -1;
	uint64_t x482 = 1LLU;
	volatile int64_t x484 = INT64_MIN;
	uint64_t t89 = 811377312947897LLU;

	t89 = (((x481*x482)&x483)&x484);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x485 = UINT16_MAX;
	volatile int16_t x486 = -1;
	static volatile int64_t x488 = 452714271LL;
	int64_t t90 = 789769LL;

	t90 = (((x485*x486)&x487)&x488);

	if (t90 != 6291457LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x489 = INT16_MIN;
	int8_t x490 = -1;
	int8_t x492 = -1;
	static volatile int32_t t91 = 896121515;

	t91 = (((x489*x490)&x491)&x492);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x495 = 97162077LLU;
	int16_t x496 = INT16_MIN;
	uint64_t t92 = 2LLU;

	t92 = (((x493*x494)&x495)&x496);

	if (t92 != 13139968LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x501 = INT64_MIN;
	uint8_t x502 = 1U;
	static volatile int64_t x503 = -55131582379029LL;
	int64_t x504 = INT64_MIN;

	t93 = (((x501*x502)&x503)&x504);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = -14643;
	int8_t x507 = INT8_MAX;
	int16_t x508 = INT16_MIN;
	int32_t t94 = -5347;

	t94 = (((x505*x506)&x507)&x508);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x510 = 0U;
	static volatile int64_t x512 = INT64_MIN;
	volatile int64_t t95 = -1281LL;

	t95 = (((x509*x510)&x511)&x512);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x513 = -1;
	volatile int32_t t96 = INT32_MIN;

	t96 = (((x513*x514)&x515)&x516);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x522 = 75U;
	volatile int32_t x523 = INT32_MAX;
	static int64_t x524 = 381960060005189LL;
	int64_t t97 = -3062088815423259466LL;

	t97 = (((x521*x522)&x523)&x524);

	if (t97 != 28437253LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x526 = -1;
	uint16_t x527 = 5U;
	int16_t x528 = -15796;
	static volatile int32_t t98 = 23;

	t98 = (((x525*x526)&x527)&x528);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x529 = 8;
	static uint16_t x530 = 0U;
	int32_t x531 = INT32_MAX;
	int32_t x532 = -1;
	volatile int32_t t99 = 0;

	t99 = (((x529*x530)&x531)&x532);

	if (t99 != 0) { NG(); } else { ; }
	
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

