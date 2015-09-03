#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 6U;
int64_t x8 = INT64_MIN;
static uint16_t x12 = 13U;
int32_t t2 = 117;
int16_t x18 = INT16_MAX;
int64_t t4 = 66233668092767691LL;
int64_t x23 = INT64_MIN;
uint32_t x26 = UINT32_MAX;
int8_t x32 = INT8_MIN;
volatile int32_t x33 = INT32_MAX;
static uint64_t x34 = UINT64_MAX;
uint16_t x36 = 5829U;
int64_t x37 = INT64_MAX;
int32_t x41 = 1294;
uint32_t x43 = 8261330U;
static int8_t x55 = -1;
volatile int32_t x60 = INT32_MIN;
uint64_t t14 = 3067957LLU;
int32_t x62 = INT32_MAX;
static int8_t x75 = 0;
int16_t x85 = -1;
int16_t x87 = -13737;
int8_t x91 = INT8_MIN;
volatile uint64_t t22 = 1561941752104LLU;
volatile int64_t x98 = INT64_MIN;
static uint32_t t25 = 1161U;
volatile uint64_t t26 = 298629627671LLU;
volatile int32_t t27 = 23409481;
int32_t x132 = INT32_MIN;
int64_t x133 = -1LL;
int32_t x138 = -1;
int64_t x145 = -1LL;
uint16_t x157 = UINT16_MAX;
int64_t x163 = INT64_MAX;
static volatile int64_t t36 = 1049130272133LL;
uint32_t x170 = 12835982U;
int16_t x171 = INT16_MAX;
int64_t x172 = INT64_MAX;
int64_t t38 = INT64_MAX;
int8_t x175 = INT8_MAX;
int16_t x176 = INT16_MAX;
int8_t x179 = 3;
uint32_t t40 = 63533U;
uint16_t x187 = 22U;
static uint32_t t42 = 255416U;
static int16_t x193 = -12;
volatile int16_t x195 = INT16_MIN;
int32_t x196 = -1;
uint64_t x205 = 2674633878795618LLU;
uint64_t x211 = UINT64_MAX;
int16_t x217 = INT16_MAX;
static uint64_t t48 = 13484285507LLU;
uint64_t x221 = 165258LLU;
int32_t x222 = 1275549;
uint64_t t50 = 2482544LLU;
uint16_t x235 = UINT16_MAX;
volatile uint8_t x238 = UINT8_MAX;
static uint64_t x241 = 23LLU;
uint64_t t53 = 1857683986797913115LLU;
static uint32_t x254 = UINT32_MAX;
volatile int32_t t56 = 4604;
int64_t x261 = INT64_MIN;
uint32_t x264 = UINT32_MAX;
int64_t t57 = -8154607906954LL;
uint64_t t58 = UINT64_MAX;
int64_t x269 = -1LL;
int64_t x271 = -1LL;
int64_t t60 = -1089LL;
int64_t t61 = 59LL;
int32_t x281 = -184294382;
int16_t x283 = -1;
int32_t x286 = INT32_MIN;
int64_t x290 = INT64_MIN;
static int16_t x295 = -1;
int64_t x296 = -1LL;
volatile int8_t x299 = INT8_MIN;
uint16_t x309 = 3U;
volatile uint32_t t68 = UINT32_MAX;
static int64_t x313 = INT64_MIN;
uint16_t x322 = UINT16_MAX;
static int64_t x323 = -100262668856975LL;
uint64_t t70 = 3298011LLU;
int32_t x338 = 108878845;
static int32_t x357 = INT32_MIN;
int64_t x361 = -1LL;
static int64_t x363 = INT64_MAX;
int16_t x365 = INT16_MIN;
volatile uint64_t x368 = 63000LLU;
int32_t x373 = -17169365;
int64_t x375 = -1LL;
int8_t x376 = -1;
volatile int64_t x379 = INT64_MAX;
static int32_t x386 = -23874;
volatile int32_t x396 = INT32_MIN;
volatile int8_t x399 = -1;
uint32_t x405 = UINT32_MAX;
volatile int64_t t88 = 879LL;
uint8_t x412 = UINT8_MAX;
uint16_t x423 = UINT16_MAX;
int32_t t92 = -1421448;
int16_t x425 = INT16_MIN;
static uint8_t x438 = 7U;
static int8_t x449 = INT8_MIN;
static volatile int16_t x458 = INT16_MIN;
int32_t t98 = INT32_MIN;


void f0(void) {
	int64_t x2 = -1LL;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = -14295866LL;

	t0 = (((x1/x2)*x3)^x4);

	if (t0 != -9223372036854775040LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1023010192;
	static int64_t x6 = INT64_MIN;
	volatile uint32_t x7 = UINT32_MAX;
	volatile int64_t t1 = INT64_MIN;

	t1 = (((x5/x6)*x7)^x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 7U;
	int32_t x10 = -1;
	int8_t x11 = 1;

	t2 = (((x9/x10)*x11)^x12);

	if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = -7;
	int8_t x15 = -3;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 32978537;

	t3 = (((x13/x14)*x15)^x16);

	if (t3 != -920350155) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 11U;
	uint16_t x19 = 0U;
	int64_t x20 = 773015137021LL;

	t4 = (((x17/x18)*x19)^x20);

	if (t4 != 773015137021LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	int64_t x24 = INT64_MIN;
	int64_t t5 = INT64_MIN;

	t5 = (((x21/x22)*x23)^x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int8_t x27 = INT8_MIN;
	volatile int64_t x28 = INT64_MAX;
	int64_t t6 = 98933714LL;

	t6 = (((x25/x26)*x27)^x28);

	if (t6 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -7;
	volatile int8_t x30 = -1;
	int16_t x31 = 40;
	static int32_t t7 = 174885347;

	t7 = (((x29/x30)*x31)^x32);

	if (t7 != -360) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x35 = 13125U;
	static uint64_t t8 = 2190940904125987951LLU;

	t8 = (((x33/x34)*x35)^x36);

	if (t8 != 5829LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	int64_t t9 = 123756452466893868LL;

	t9 = (((x37/x38)*x39)^x40);

	if (t9 != 70368744177536LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 1;
	static int8_t x44 = INT8_MAX;
	uint32_t t10 = 3U;

	t10 = (((x41/x42)*x43)^x44);

	if (t10 != 2100226307U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x46 = -1;
	static uint8_t x47 = UINT8_MAX;
	volatile int32_t x48 = -19;
	static volatile int32_t t11 = 0;

	t11 = (((x45/x46)*x47)^x48);

	if (t11 != -238) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = -1LL;
	int16_t x51 = 840;
	int32_t x52 = INT32_MIN;
	int64_t t12 = -1158261LL;

	t12 = (((x49/x50)*x51)^x52);

	if (t12 != -2119958528LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint64_t x54 = 67009439974LLU;
	int8_t x56 = INT8_MAX;
	uint64_t t13 = 98591LLU;

	t13 = (((x53/x54)*x55)^x56);

	if (t13 != 18446744073434265974LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MAX;
	int64_t x59 = 3562254970LL;

	t14 = (((x57/x58)*x59)^x60);

	if (t14 != 6293950941423913448LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile int32_t x63 = 7007609;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (((x61/x62)*x63)^x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 7503096493763LLU;
	static volatile uint64_t x67 = UINT64_MAX;
	int8_t x68 = INT8_MIN;
	uint64_t t16 = 200791430888990LLU;

	t16 = (((x65/x66)*x67)^x68);

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MAX;
	static int32_t x70 = INT32_MAX;
	static int64_t x71 = INT64_MIN;
	uint16_t x72 = 8438U;
	int64_t t17 = 30366886148LL;

	t17 = (((x69/x70)*x71)^x72);

	if (t17 != 8438LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	volatile uint8_t x74 = UINT8_MAX;
	volatile int32_t x76 = INT32_MAX;
	int32_t t18 = INT32_MAX;

	t18 = (((x73/x74)*x75)^x76);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 10U;
	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MIN;
	volatile uint16_t x80 = 367U;
	int64_t t19 = -64206050LL;

	t19 = (((x77/x78)*x79)^x80);

	if (t19 != 367LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1U;
	static int64_t x82 = -11344124412LL;
	uint32_t x83 = 109U;
	int8_t x84 = 24;
	static int64_t t20 = -357508852LL;

	t20 = (((x81/x82)*x83)^x84);

	if (t20 != 24LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = INT32_MIN;
	int64_t x88 = -1LL;
	volatile int64_t t21 = 32964026607565343LL;

	t21 = (((x85/x86)*x87)^x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 8U;
	int16_t x90 = INT16_MIN;
	uint64_t x92 = 3766947975LLU;

	t22 = (((x89/x90)*x91)^x92);

	if (t22 != 3766947975LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -306;
	static int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	int8_t x96 = -48;
	static int64_t t23 = 3024157688999663LL;

	t23 = (((x93/x94)*x95)^x96);

	if (t23 != -48LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	static int32_t x99 = INT32_MIN;
	uint32_t x100 = 3U;
	volatile int64_t t24 = 4550953281435907889LL;

	t24 = (((x97/x98)*x99)^x100);

	if (t24 != 3LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 156U;
	static int16_t x108 = INT16_MIN;

	t25 = (((x105/x106)*x107)^x108);

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = INT32_MAX;
	uint64_t x110 = 89076845813056499LLU;
	uint32_t x111 = 1465795054U;
	uint64_t x112 = 86645627450LLU;

	t26 = (((x109/x110)*x111)^x112);

	if (t26 != 86645627450LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MAX;
	int32_t x119 = -1;
	static int8_t x120 = INT8_MAX;

	t27 = (((x117/x118)*x119)^x120);

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	volatile int16_t x127 = INT16_MIN;
	int16_t x128 = -3;
	int32_t t28 = 231;

	t28 = (((x125/x126)*x127)^x128);

	if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 1943U;
	int64_t x130 = 398968LL;
	int64_t x131 = -25763329546903LL;
	static int64_t t29 = 404196919LL;

	t29 = (((x129/x130)*x131)^x132);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x134 = INT8_MIN;
	int8_t x135 = -1;
	uint64_t x136 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x133/x134)*x135)^x136);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = 4803;
	int16_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;
	static int64_t t31 = 6204216344438LL;

	t31 = (((x137/x138)*x139)^x140);

	if (t31 != -9223372036854771005LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -1;
	int16_t x142 = -4;
	uint64_t x143 = 968719862LLU;
	uint16_t x144 = 1U;
	static volatile uint64_t t32 = 1002LLU;

	t32 = (((x141/x142)*x143)^x144);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x146 = 1;
	static uint8_t x147 = 56U;
	volatile int32_t x148 = INT32_MIN;
	volatile int64_t t33 = -2854419306LL;

	t33 = (((x145/x146)*x147)^x148);

	if (t33 != 2147483592LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = 25;
	static volatile uint16_t x156 = 16360U;
	int64_t t34 = 209871LL;

	t34 = (((x153/x154)*x155)^x156);

	if (t34 != 16369LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = -1;
	volatile int32_t x159 = -19364;
	static int16_t x160 = 45;
	volatile int32_t t35 = 51140388;

	t35 = (((x157/x158)*x159)^x160);

	if (t35 != 1269019761) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = -1;
	volatile int8_t x162 = INT8_MIN;
	int64_t x164 = -1LL;

	t36 = (((x161/x162)*x163)^x164);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -1;
	uint8_t x166 = UINT8_MAX;
	static int64_t x167 = INT64_MAX;
	uint64_t x168 = 31601795147781LLU;
	volatile uint64_t t37 = 182248153LLU;

	t37 = (((x165/x166)*x167)^x168);

	if (t37 != 31601795147781LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x169 = 11803;

	t38 = (((x169/x170)*x171)^x172);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t x174 = INT64_MIN;
	int64_t t39 = -563736397LL;

	t39 = (((x173/x174)*x175)^x176);

	if (t39 != 32640LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = -1;
	static volatile int8_t x178 = -1;
	static volatile uint32_t x180 = 2976U;

	t40 = (((x177/x178)*x179)^x180);

	if (t40 != 2979U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MAX;
	int16_t x183 = -1;
	int64_t x184 = -38LL;
	volatile int64_t t41 = 639555006059661970LL;

	t41 = (((x181/x182)*x183)^x184);

	if (t41 != -37LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 441466516U;
	volatile int32_t x186 = INT32_MAX;
	int8_t x188 = INT8_MAX;

	t42 = (((x185/x186)*x187)^x188);

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x194 = 94U;
	int32_t t43 = 46;

	t43 = (((x193/x194)*x195)^x196);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 2U;
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MAX;
	int64_t t44 = INT64_MAX;

	t44 = (((x201/x202)*x203)^x204);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x206 = -1800;
	static volatile int64_t x207 = INT64_MIN;
	static int64_t x208 = -1LL;
	static uint64_t t45 = UINT64_MAX;

	t45 = (((x205/x206)*x207)^x208);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x209 = 117U;
	static int64_t x210 = -1LL;
	int8_t x212 = INT8_MAX;
	uint64_t t46 = 85575617780LLU;

	t46 = (((x209/x210)*x211)^x212);

	if (t46 != 10LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = 5373248U;
	uint64_t x214 = 6LLU;
	volatile int32_t x215 = INT32_MAX;
	uint32_t x216 = 117U;
	volatile uint64_t t47 = 19984288LLU;

	t47 = (((x213/x214)*x215)^x216);

	if (t47 != 1923159652718014LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x218 = -1;
	int64_t x219 = -1LL;
	volatile uint64_t x220 = 6944610708924540333LLU;

	t48 = (((x217/x218)*x219)^x220);

	if (t48 != 6944610708924553810LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t49 = 3906027LLU;

	t49 = (((x221/x222)*x223)^x224);

	if (t49 != 255LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 29310195U;
	uint64_t x230 = 2512LLU;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 186U;

	t50 = (((x229/x230)*x231)^x232);

	if (t50 != 18446744073708058298LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -684440;
	int16_t x234 = INT16_MIN;
	volatile uint32_t x236 = 925100U;
	uint32_t t51 = 744176U;

	t51 = (((x233/x234)*x235)^x236);

	if (t51 != 1958464U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x237 = -1;
	volatile uint16_t x239 = UINT16_MAX;
	int8_t x240 = 1;
	volatile int32_t t52 = 586;

	t52 = (((x237/x238)*x239)^x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x242 = -1;
	static volatile int8_t x243 = INT8_MAX;
	static uint16_t x244 = UINT16_MAX;

	t53 = (((x241/x242)*x243)^x244);

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = UINT64_MAX;
	static int64_t x246 = -32673572513LL;
	int64_t x247 = 46972LL;
	uint64_t x248 = UINT64_MAX;
	uint64_t t54 = 4839289176574424227LLU;

	t54 = (((x245/x246)*x247)^x248);

	if (t54 != 18446744073709504643LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x253 = 31099636882882LL;
	int64_t x255 = -1LL;
	static int64_t x256 = INT64_MIN;
	int64_t t55 = -1203967196LL;

	t55 = (((x253/x254)*x255)^x256);

	if (t55 != 9223372036854768568LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MAX;
	uint16_t x259 = 239U;
	uint16_t x260 = 6542U;

	t56 = (((x257/x258)*x259)^x260);

	if (t56 != 129074) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x262 = -2;
	int8_t x263 = 1;

	t57 = (((x261/x262)*x263)^x264);

	if (t57 != 4611686022722355199LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x265 = 0LLU;
	volatile int16_t x266 = -12238;
	uint64_t x267 = 2479656663LLU;
	int32_t x268 = -1;

	t58 = (((x265/x266)*x267)^x268);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x270 = INT8_MIN;
	volatile int64_t x272 = -47537LL;
	volatile int64_t t59 = 1LL;

	t59 = (((x269/x270)*x271)^x272);

	if (t59 != -47537LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x273 = 65264559U;
	static int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = -1LL;

	t60 = (((x273/x274)*x275)^x276);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = 238914;
	static int64_t x278 = -1LL;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MAX;

	t61 = (((x277/x278)*x279)^x280);

	if (t61 != -9223372036793852739LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x282 = INT64_MIN;
	int32_t x284 = INT32_MAX;
	volatile int64_t t62 = 0LL;

	t62 = (((x281/x282)*x283)^x284);

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MIN;
	volatile uint64_t x287 = 6343310017LLU;
	static volatile int8_t x288 = 46;
	volatile uint64_t t63 = 40656853LLU;

	t63 = (((x285/x286)*x287)^x288);

	if (t63 != 6343310063LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	int8_t x291 = -1;
	volatile int16_t x292 = INT16_MIN;
	volatile int64_t t64 = 59021267352LL;

	t64 = (((x289/x290)*x291)^x292);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 37775703566LLU;
	uint64_t x294 = 584027536LLU;
	volatile uint64_t t65 = 37863LLU;

	t65 = (((x293/x294)*x295)^x296);

	if (t65 != 63LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 15450U;
	uint64_t x298 = 351535415638LLU;
	int16_t x300 = 0;
	volatile uint64_t t66 = 168991082905504742LLU;

	t66 = (((x297/x298)*x299)^x300);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = -476;
	int8_t x302 = INT8_MAX;
	int8_t x303 = -1;
	int64_t x304 = INT64_MAX;
	volatile int64_t t67 = 3LL;

	t67 = (((x301/x302)*x303)^x304);

	if (t67 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x310 = UINT8_MAX;
	static uint32_t x311 = 3U;
	volatile int16_t x312 = -1;

	t68 = (((x309/x310)*x311)^x312);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	static uint64_t x316 = UINT64_MAX;
	volatile uint64_t t69 = 1111312LLU;

	t69 = (((x313/x314)*x315)^x316);

	if (t69 != 13834987685464244223LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = 461281797232270119LLU;
	uint8_t x324 = 3U;

	t70 = (((x321/x322)*x323)^x324);

	if (t70 != 8695094917283911169LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = UINT64_MAX;
	volatile int64_t x330 = INT64_MAX;
	uint32_t x331 = UINT32_MAX;
	int32_t x332 = INT32_MAX;
	volatile uint64_t t71 = 621942235978LLU;

	t71 = (((x329/x330)*x331)^x332);

	if (t71 != 6442450945LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x333 = 6U;
	volatile int64_t x334 = -1LL;
	int8_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int64_t t72 = -350298360456374943LL;

	t72 = (((x333/x334)*x335)^x336);

	if (t72 != -2147483642LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MIN;
	static int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	int32_t t73 = INT32_MIN;

	t73 = (((x337/x338)*x339)^x340);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MAX;
	volatile uint32_t x343 = UINT32_MAX;
	volatile uint64_t x344 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (((x341/x342)*x343)^x344);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x345 = 1U;
	volatile int32_t x346 = -64206981;
	volatile uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MAX;
	int64_t t75 = INT64_MAX;

	t75 = (((x345/x346)*x347)^x348);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x353 = 0U;
	int16_t x354 = -1;
	uint8_t x355 = 3U;
	int64_t x356 = INT64_MIN;
	volatile int64_t t76 = INT64_MIN;

	t76 = (((x353/x354)*x355)^x356);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x358 = 2240U;
	int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile uint32_t t77 = 5316224U;

	t77 = (((x357/x358)*x359)^x360);

	if (t77 != 3496369942U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x362 = UINT16_MAX;
	int64_t x364 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = (((x361/x362)*x363)^x364);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x366 = 2308;
	uint32_t x367 = UINT32_MAX;
	volatile uint64_t t79 = 83LLU;

	t79 = (((x365/x366)*x367)^x368);

	if (t79 != 62998LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x369 = INT16_MIN;
	static int8_t x370 = -4;
	int16_t x371 = -321;
	static uint16_t x372 = UINT16_MAX;
	static int32_t t80 = 2326050;

	t80 = (((x369/x370)*x371)^x372);

	if (t80 != -2678785) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x374 = 64U;
	volatile int64_t t81 = -1012LL;

	t81 = (((x373/x374)*x375)^x376);

	if (t81 != -268272LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = INT64_MIN;
	static int8_t x380 = INT8_MIN;
	int64_t t82 = -1470LL;

	t82 = (((x377/x378)*x379)^x380);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = 3038;
	static uint8_t x382 = 9U;
	static int8_t x383 = -1;
	int8_t x384 = INT8_MAX;
	static volatile int32_t t83 = -245;

	t83 = (((x381/x382)*x383)^x384);

	if (t83 != -304) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x385 = -1;
	static int16_t x387 = 737;
	int64_t x388 = -1LL;
	int64_t t84 = -16LL;

	t84 = (((x385/x386)*x387)^x388);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = 528U;
	static uint32_t x390 = 28419U;
	int16_t x391 = -1;
	int64_t x392 = -1LL;
	int64_t t85 = -485LL;

	t85 = (((x389/x390)*x391)^x392);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MIN;
	static int8_t x394 = -1;
	volatile int64_t x395 = 0LL;
	int64_t t86 = 979LL;

	t86 = (((x393/x394)*x395)^x396);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = INT16_MAX;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t87 = 8217507589349212087LLU;

	t87 = (((x397/x398)*x399)^x400);

	if (t87 != 562969280249840LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x406 = 1U;
	int64_t x407 = -298702325LL;
	volatile uint8_t x408 = 3U;

	t88 = (((x405/x406)*x407)^x408);

	if (t88 != -1282916716815460874LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = INT32_MIN;
	uint64_t x410 = 253LLU;
	volatile int64_t x411 = -9604502925LL;
	volatile uint64_t t89 = 558364880395581LLU;

	t89 = (((x409/x410)*x411)^x412);

	if (t89 != 15684698598478895018LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = 0;
	uint8_t x414 = 1U;
	volatile uint8_t x415 = 6U;
	int64_t x416 = 1280974LL;
	int64_t t90 = -489112418376LL;

	t90 = (((x413/x414)*x415)^x416);

	if (t90 != 1280974LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = 824U;
	int16_t x418 = INT16_MAX;
	int32_t x419 = INT32_MIN;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = (((x417/x418)*x419)^x420);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = 4;
	volatile uint16_t x422 = UINT16_MAX;
	int32_t x424 = -1473142;

	t92 = (((x421/x422)*x423)^x424);

	if (t92 != -1473142) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = 53;
	static int8_t x427 = 1;
	volatile uint64_t x428 = UINT64_MAX;
	uint64_t t93 = 8432941654005LLU;

	t93 = (((x425/x426)*x427)^x428);

	if (t93 != 617LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = -1LL;
	volatile int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	volatile int8_t x436 = -35;
	int64_t t94 = -4800095120843428LL;

	t94 = (((x433/x434)*x435)^x436);

	if (t94 != -35LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x437 = UINT16_MAX;
	int8_t x439 = INT8_MAX;
	volatile int32_t x440 = -1;
	volatile int32_t t95 = -462;

	t95 = (((x437/x438)*x439)^x440);

	if (t95 != -1188975) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x450 = 1897;
	static int64_t x451 = INT64_MAX;
	uint64_t x452 = 31869489158937LLU;
	volatile uint64_t t96 = 8714569210403420LLU;

	t96 = (((x449/x450)*x451)^x452);

	if (t96 != 31869489158937LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = 1U;
	uint16_t x454 = 112U;
	int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MIN;
	volatile int32_t t97 = -1;

	t97 = (((x453/x454)*x455)^x456);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = -1;
	int8_t x459 = INT8_MIN;
	int32_t x460 = INT32_MIN;

	t98 = (((x457/x458)*x459)^x460);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x465 = 2U;
	volatile uint16_t x466 = 29U;
	int64_t x467 = INT64_MIN;
	static int32_t x468 = -1;
	int64_t t99 = 16345704108LL;

	t99 = (((x465/x466)*x467)^x468);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

