#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
int64_t x10 = INT64_MAX;
volatile int64_t t2 = 8370163603110LL;
static uint64_t t5 = 4915691640639050LLU;
int32_t x35 = INT32_MIN;
volatile int32_t t6 = -429841948;
int64_t x41 = -1LL;
static uint8_t x42 = 1U;
static volatile uint32_t x53 = UINT32_MAX;
int32_t x60 = 510;
int64_t t13 = 0LL;
volatile uint32_t x69 = 1390278U;
static volatile uint64_t t14 = 1LLU;
uint32_t x74 = 3U;
uint16_t x76 = 1365U;
static int64_t x77 = -1LL;
volatile int64_t x80 = -109LL;
static int64_t x88 = -307596604568861LL;
int16_t x99 = INT16_MAX;
int64_t x101 = INT64_MAX;
uint64_t x106 = UINT64_MAX;
static int8_t x107 = INT8_MIN;
int32_t x133 = -1;
int32_t x143 = INT32_MIN;
volatile int64_t x144 = INT64_MIN;
volatile int32_t x163 = 2007065;
int32_t x173 = INT32_MIN;
static int8_t x174 = -18;
int64_t x175 = 170646LL;
static int8_t x182 = INT8_MAX;
volatile int8_t x195 = -4;
int8_t x197 = -1;
static uint32_t t37 = 7U;
uint32_t x201 = 1236209914U;
uint32_t t39 = UINT32_MAX;
uint64_t x212 = 1211140355LLU;
int8_t x216 = 0;
static volatile int32_t x217 = 21;
int16_t x218 = -1;
uint64_t x235 = 4936925106756LLU;
int8_t x238 = -1;
volatile int32_t t44 = 0;
uint32_t x244 = 2U;
static volatile uint16_t x247 = 420U;
static int32_t x258 = -1;
int32_t x259 = INT32_MIN;
volatile int32_t x260 = INT32_MIN;
static volatile int32_t x270 = 11;
int64_t x276 = INT64_MIN;
volatile int16_t x277 = INT16_MIN;
static int32_t t52 = -2;
uint16_t x286 = 2U;
static int32_t x301 = 25658479;
uint64_t x303 = UINT64_MAX;
static uint64_t t56 = 76762791360090LLU;
uint16_t x308 = UINT16_MAX;
volatile int64_t t58 = -886116LL;
int16_t x314 = INT16_MIN;
volatile uint16_t x316 = UINT16_MAX;
volatile int64_t t60 = 936355520928032002LL;
static uint32_t x321 = 1976U;
static int16_t x324 = -20;
int32_t t62 = 12928542;
int8_t x330 = INT8_MAX;
static int32_t x337 = 3;
uint16_t x341 = UINT16_MAX;
int64_t x342 = INT64_MIN;
volatile int64_t x343 = INT64_MAX;
int64_t x344 = -213LL;
uint32_t x348 = 592U;
volatile int32_t x349 = 20624;
static int64_t x351 = INT64_MIN;
volatile uint64_t x372 = 1311LLU;
uint64_t t69 = 15159LLU;
uint8_t x374 = UINT8_MAX;
static uint64_t t71 = 14073520800771220LLU;
int8_t x383 = INT8_MIN;
int64_t x391 = INT64_MIN;
volatile int64_t x394 = INT64_MIN;
int64_t x396 = INT64_MAX;
int64_t x404 = INT64_MAX;
int64_t x419 = -1531478556807LL;
uint64_t t80 = 233849835LLU;
volatile uint8_t x429 = 7U;
int32_t x432 = -1;
int32_t x448 = 459;
uint32_t t83 = 4237566U;
int32_t x454 = INT32_MAX;
volatile int64_t x463 = 34336415509LL;
volatile int64_t t85 = -99LL;
int8_t x474 = 3;
int32_t x476 = -1;
volatile int64_t x481 = 1162797LL;
int8_t x484 = -1;
volatile uint64_t x488 = UINT64_MAX;
volatile uint64_t t91 = 118415958740LLU;
volatile int64_t x501 = INT64_MIN;
int16_t x512 = INT16_MIN;
int32_t t94 = 43091;
uint16_t x517 = UINT16_MAX;
int8_t x519 = INT8_MAX;
volatile int32_t t95 = 0;
int64_t x526 = -1LL;
int64_t x531 = INT64_MIN;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	static int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MAX;
	int64_t t0 = -114958072386375LL;

	t0 = ((x1%(x2%x3))+x4);

	if (t0 != 126LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int16_t x6 = -1;
	static uint8_t x7 = 5U;
	int8_t x8 = -11;
	volatile int32_t t1 = 21453646;

	t1 = ((x5%(x6%x7))+x8);

	if (t1 != -11) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static uint16_t x11 = 210U;
	int32_t x12 = -1;

	t2 = ((x9%(x10%x11))+x12);

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = INT8_MIN;
	int16_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MAX;
	int64_t t3 = INT64_MAX;

	t3 = ((x17%(x18%x19))+x20);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int32_t x22 = INT32_MIN;
	static volatile uint32_t x23 = 25U;
	volatile int64_t x24 = -1LL;
	int64_t t4 = 85LL;

	t4 = ((x21%(x22%x23))+x24);

	if (t4 != 7LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MIN;
	static volatile uint32_t x31 = UINT32_MAX;
	static volatile uint64_t x32 = 15463366449192LLU;

	t5 = ((x29%(x30%x31))+x32);

	if (t5 != 15463366449192LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 57U;
	uint16_t x34 = UINT16_MAX;
	int16_t x36 = INT16_MIN;

	t6 = ((x33%(x34%x35))+x36);

	if (t6 != -32711) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	static int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MAX;
	int64_t x40 = -1LL;
	static int64_t t7 = 16LL;

	t7 = ((x37%(x38%x39))+x40);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x43 = 142656753306790LLU;
	static int16_t x44 = INT16_MIN;
	uint64_t t8 = 3181355581986LLU;

	t8 = ((x41%(x42%x43))+x44);

	if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x46 = INT8_MAX;
	uint64_t x47 = 25215729513733LLU;
	static int8_t x48 = INT8_MIN;
	uint64_t t9 = 10889194LLU;

	t9 = ((x45%(x46%x47))+x48);

	if (t9 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = 52032559658380895LL;
	volatile uint8_t x50 = UINT8_MAX;
	uint16_t x51 = 23230U;
	uint8_t x52 = 2U;
	static int64_t t10 = 10263LL;

	t10 = ((x49%(x50%x51))+x52);

	if (t10 != 7LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = 105U;
	uint16_t x55 = UINT16_MAX;
	static int64_t x56 = INT64_MIN;
	volatile int64_t t11 = 8535141011882LL;

	t11 = ((x53%(x54%x55))+x56);

	if (t11 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	static volatile uint8_t x58 = 79U;
	int8_t x59 = INT8_MAX;
	int32_t t12 = -32;

	t12 = ((x57%(x58%x59))+x60);

	if (t12 != 571) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = 4365U;
	uint8_t x62 = 12U;
	int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MIN;

	t13 = ((x61%(x62%x63))+x64);

	if (t13 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x70 = UINT32_MAX;
	volatile uint64_t x71 = 8711780LLU;
	uint32_t x72 = 5U;

	t14 = ((x69%(x70%x71))+x72);

	if (t14 != 15918LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	static int64_t x75 = -1736757888873419843LL;
	volatile int64_t t15 = -603428LL;

	t15 = ((x73%(x74%x75))+x76);

	if (t15 != 1364LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 60716LLU;
	static int8_t x79 = -6;
	volatile uint64_t t16 = 116450458294630064LLU;

	t16 = ((x77%(x78%x79))+x80);

	if (t16 != 23022LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = -1952;
	int64_t t17 = 3527251465561003LL;

	t17 = ((x85%(x86%x87))+x88);

	if (t17 != -307596604568989LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MAX;
	volatile int32_t x91 = 543;
	static int8_t x92 = -9;
	static volatile int32_t t18 = -145377129;

	t18 = ((x89%(x90%x91))+x92);

	if (t18 != 69) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -2LL;
	static int8_t x98 = INT8_MIN;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t19 = 956661134LL;

	t19 = ((x97%(x98%x99))+x100);

	if (t19 != 253LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x102 = -1;
	int8_t x103 = 57;
	static volatile int64_t x104 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = ((x101%(x102%x103))+x104);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 3U;
	int32_t x108 = INT32_MIN;
	static volatile uint64_t t21 = 1279LLU;

	t21 = ((x105%(x106%x107))+x108);

	if (t21 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 1U;
	int8_t x110 = -1;
	uint16_t x111 = 22U;
	uint16_t x112 = 202U;
	int32_t t22 = -14859;

	t22 = ((x109%(x110%x111))+x112);

	if (t22 != 202) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x118 = -1;
	uint64_t x119 = 10762009LLU;
	int64_t x120 = -15918LL;
	uint64_t t23 = 3907517593972182LLU;

	t23 = ((x117%(x118%x119))+x120);

	if (t23 != 49617LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = 5LL;
	static int32_t x127 = INT32_MAX;
	int32_t x128 = -1;
	int64_t t24 = -11LL;

	t24 = ((x125%(x126%x127))+x128);

	if (t24 != -4LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x129 = 0;
	int8_t x130 = -1;
	int32_t x131 = -65903;
	int64_t x132 = INT64_MIN;
	int64_t t25 = INT64_MIN;

	t25 = ((x129%(x130%x131))+x132);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = INT32_MIN;
	volatile int32_t x136 = INT32_MAX;
	volatile int32_t t26 = 12158;

	t26 = ((x133%(x134%x135))+x136);

	if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = -6;
	volatile uint32_t x142 = 3U;
	int64_t t27 = 13029LL;

	t27 = ((x141%(x142%x143))+x144);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x150 = UINT16_MAX;
	uint8_t x151 = 96U;
	int32_t x152 = -231684;
	volatile int32_t t28 = 7969;

	t28 = ((x149%(x150%x151))+x152);

	if (t28 != -231692) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MAX;
	volatile uint16_t x155 = 3301U;
	uint64_t x156 = UINT64_MAX;
	uint64_t t29 = 647816723880533031LLU;

	t29 = ((x153%(x154%x155))+x156);

	if (t29 != 18446744073709550387LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x157 = 16529U;
	static volatile int16_t x158 = -9058;
	uint16_t x159 = 63U;
	int64_t x160 = 1LL;
	int64_t t30 = -77698299LL;

	t30 = ((x157%(x158%x159))+x160);

	if (t30 != 17LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x161 = 895U;
	static int32_t x162 = INT32_MAX;
	int64_t x164 = 467898042198LL;
	volatile int64_t t31 = 361334LL;

	t31 = ((x161%(x162%x163))+x164);

	if (t31 != 467898043093LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x169 = INT16_MIN;
	uint8_t x170 = 53U;
	static int8_t x171 = 13;
	int64_t x172 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = ((x169%(x170%x171))+x172);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x176 = INT16_MIN;
	volatile int64_t t33 = 1900LL;

	t33 = ((x173%(x174%x175))+x176);

	if (t33 != -32770LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	static uint64_t x184 = UINT64_MAX;
	volatile uint64_t t34 = 17LLU;

	t34 = ((x181%(x182%x183))+x184);

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x189 = 3U;
	volatile int16_t x190 = INT16_MIN;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 82U;
	uint64_t t35 = 116672632011199647LLU;

	t35 = ((x189%(x190%x191))+x192);

	if (t35 != 85LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x193 = 6U;
	int64_t x194 = INT64_MAX;
	volatile uint8_t x196 = 86U;
	volatile int64_t t36 = -108851683967LL;

	t36 = ((x193%(x194%x195))+x196);

	if (t36 != 86LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x198 = -1;
	uint8_t x199 = 4U;
	uint32_t x200 = 1750921U;

	t37 = ((x197%(x198%x199))+x200);

	if (t37 != 1750921U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x202 = 87304U;
	uint16_t x203 = 3U;
	uint64_t x204 = 38526056LLU;
	volatile uint64_t t38 = 221LLU;

	t38 = ((x201%(x202%x203))+x204);

	if (t38 != 38526056LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x205 = INT32_MIN;
	volatile int8_t x206 = INT8_MAX;
	static int16_t x207 = -2;
	uint32_t x208 = UINT32_MAX;

	t39 = ((x205%(x206%x207))+x208);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x209 = 162U;
	volatile uint64_t x210 = 147149616006816LLU;
	uint8_t x211 = 5U;
	uint64_t t40 = 8193748283177LLU;

	t40 = ((x209%(x210%x211))+x212);

	if (t40 != 1211140355LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x213 = 5424U;
	static int16_t x214 = INT16_MAX;
	int64_t x215 = INT64_MIN;
	int64_t t41 = 99898338152972LL;

	t41 = ((x213%(x214%x215))+x216);

	if (t41 != 5424LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = 318;
	volatile int32_t t42 = 4;

	t42 = ((x217%(x218%x219))+x220);

	if (t42 != 318) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x233 = 534211193;
	int32_t x234 = INT32_MAX;
	uint8_t x236 = 1U;
	uint64_t t43 = 72LLU;

	t43 = ((x233%(x234%x235))+x236);

	if (t43 != 534211194LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x237 = -1;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;

	t44 = ((x237%(x238%x239))+x240);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = -8;
	volatile int32_t x242 = -2;
	static volatile uint16_t x243 = 899U;
	static uint32_t t45 = 97945165U;

	t45 = ((x241%(x242%x243))+x244);

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = -1;
	uint16_t x248 = 14754U;
	uint64_t t46 = 25910LLU;

	t46 = ((x245%(x246%x247))+x248);

	if (t46 != 14754LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x253 = 25;
	int64_t x254 = -359LL;
	uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 228355870720608818LLU;
	static uint64_t t47 = 395436LLU;

	t47 = ((x253%(x254%x255))+x256);

	if (t47 != 228355870720608843LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x257 = UINT8_MAX;
	int32_t t48 = INT32_MIN;

	t48 = ((x257%(x258%x259))+x260);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = 15491321;
	int8_t x263 = INT8_MAX;
	int16_t x264 = -1;
	volatile int32_t t49 = 124867;

	t49 = ((x261%(x262%x263))+x264);

	if (t49 != -99) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = INT8_MIN;
	int8_t x271 = INT8_MAX;
	int32_t x272 = -1;
	volatile int32_t t50 = 486;

	t50 = ((x269%(x270%x271))+x272);

	if (t50 != -8) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = -1;
	int64_t x275 = INT64_MIN;
	static int64_t t51 = INT64_MIN;

	t51 = ((x273%(x274%x275))+x276);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x278 = -26126643;
	static volatile uint16_t x279 = 814U;
	static volatile int32_t x280 = 33647827;

	t52 = ((x277%(x278%x279))+x280);

	if (t52 != 33647494) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x281 = 89U;
	volatile int32_t x282 = INT32_MIN;
	static int64_t x283 = INT64_MIN;
	static int8_t x284 = INT8_MIN;
	static volatile int64_t t53 = -126LL;

	t53 = ((x281%(x282%x283))+x284);

	if (t53 != -39LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x285 = 627771LLU;
	int64_t x287 = 6470777996350LL;
	int16_t x288 = INT16_MIN;
	uint64_t t54 = 584970647772683LLU;

	t54 = ((x285%(x286%x287))+x288);

	if (t54 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = UINT8_MAX;
	uint8_t x298 = UINT8_MAX;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = UINT32_MAX;
	uint64_t t55 = 109437LLU;

	t55 = ((x297%(x298%x299))+x300);

	if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x302 = 7056U;
	int64_t x304 = INT64_MIN;

	t56 = ((x301%(x302%x303))+x304);

	if (t56 != 9223372036854778671LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x305 = 0U;
	int8_t x306 = -55;
	int64_t x307 = -866LL;
	static volatile int64_t t57 = 2200826990050398LL;

	t57 = ((x305%(x306%x307))+x308);

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	uint16_t x311 = UINT16_MAX;
	uint8_t x312 = UINT8_MAX;

	t58 = ((x309%(x310%x311))+x312);

	if (t58 != 254LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x313 = INT16_MIN;
	static uint16_t x315 = 10391U;
	static volatile int32_t t59 = 102;

	t59 = ((x313%(x314%x315))+x316);

	if (t59 != 64667) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MAX;
	uint16_t x319 = 3U;
	int64_t x320 = 9505790348296LL;

	t60 = ((x317%(x318%x319))+x320);

	if (t60 != 9505790348296LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	uint32_t t61 = 1039132U;

	t61 = ((x321%(x322%x323))+x324);

	if (t61 != 1956U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x325 = UINT16_MAX;
	volatile int32_t x326 = 6022691;
	int8_t x327 = INT8_MAX;
	volatile int16_t x328 = INT16_MIN;

	t62 = ((x325%(x326%x327))+x328);

	if (t62 != -32708) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x329 = 424LLU;
	int32_t x331 = INT32_MAX;
	static uint16_t x332 = UINT16_MAX;
	uint64_t t63 = 21682752333805687LLU;

	t63 = ((x329%(x330%x331))+x332);

	if (t63 != 65578LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x333 = 16188U;
	int8_t x334 = -1;
	int16_t x335 = -4049;
	int32_t x336 = 85069;
	static volatile uint32_t t64 = 314U;

	t64 = ((x333%(x334%x335))+x336);

	if (t64 != 101257U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x338 = 278;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 43U;
	volatile int32_t t65 = -331799470;

	t65 = ((x337%(x338%x339))+x340);

	if (t65 != 46) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t t66 = 1LL;

	t66 = ((x341%(x342%x343))+x344);

	if (t66 != -213LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x345 = 54;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	uint64_t t67 = 19544703LLU;

	t67 = ((x345%(x346%x347))+x348);

	if (t67 != 646LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x350 = INT8_MIN;
	int8_t x352 = 1;
	static volatile int64_t t68 = 10993190LL;

	t68 = ((x349%(x350%x351))+x352);

	if (t68 != 17LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x369 = 1U;
	int16_t x370 = INT16_MIN;
	volatile uint32_t x371 = 230543689U;

	t69 = ((x369%(x370%x371))+x372);

	if (t69 != 1312LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x373 = 32973875U;
	volatile int64_t x375 = 126911724354599528LL;
	volatile int64_t x376 = -3227944431084LL;
	volatile int64_t t70 = 9808441639LL;

	t70 = ((x373%(x374%x375))+x376);

	if (t70 != -3227944431004LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x377 = 902919170487559LLU;
	int16_t x378 = INT16_MIN;
	int8_t x379 = -3;
	static int16_t x380 = 786;

	t71 = ((x377%(x378%x379))+x380);

	if (t71 != 902919170488345LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x381 = INT32_MAX;
	int32_t x382 = -1;
	static uint16_t x384 = 3141U;
	int32_t t72 = -204908;

	t72 = ((x381%(x382%x383))+x384);

	if (t72 != 3141) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MAX;
	uint8_t x387 = 14U;
	int16_t x388 = 86;
	int64_t t73 = 746374373LL;

	t73 = ((x385%(x386%x387))+x388);

	if (t73 != 85LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = 1716846332LL;
	uint8_t x392 = 0U;
	static volatile int64_t t74 = 668448LL;

	t74 = ((x389%(x390%x391))+x392);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x393 = INT16_MIN;
	volatile uint32_t x395 = 51U;
	static int64_t t75 = 3051147223860029LL;

	t75 = ((x393%(x394%x395))+x396);

	if (t75 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = 305704215LLU;
	volatile uint16_t x398 = UINT16_MAX;
	static int64_t x399 = -901182LL;
	volatile int16_t x400 = 9282;
	volatile uint64_t t76 = 2516406759208325229LLU;

	t76 = ((x397%(x398%x399))+x400);

	if (t76 != 58257LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x401 = INT32_MIN;
	static int8_t x402 = INT8_MIN;
	static uint16_t x403 = UINT16_MAX;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x401%(x402%x403))+x404);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x413 = -1LL;
	volatile uint64_t x414 = 6754304336305262LLU;
	static uint32_t x415 = UINT32_MAX;
	int32_t x416 = -972375843;
	uint64_t t78 = 514108941LLU;

	t78 = ((x413%(x414%x415))+x416);

	if (t78 != 18446744072847891743LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x417 = INT64_MIN;
	uint16_t x418 = 25U;
	uint64_t x420 = UINT64_MAX;
	uint64_t t79 = 4044200744LLU;

	t79 = ((x417%(x418%x419))+x420);

	if (t79 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x421 = 189U;
	static uint64_t x422 = 917950133LLU;
	volatile int64_t x423 = INT64_MAX;
	uint32_t x424 = 884U;

	t80 = ((x421%(x422%x423))+x424);

	if (t80 != 1073LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x430 = 6045LL;
	volatile uint32_t x431 = 4U;
	static int64_t t81 = 278749456846826LL;

	t81 = ((x429%(x430%x431))+x432);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x437 = UINT16_MAX;
	uint8_t x438 = UINT8_MAX;
	volatile int64_t x439 = INT64_MIN;
	uint8_t x440 = 0U;
	int64_t t82 = -345536364678383253LL;

	t82 = ((x437%(x438%x439))+x440);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x445 = 2U;
	int16_t x446 = -179;
	uint32_t x447 = UINT32_MAX;

	t83 = ((x445%(x446%x447))+x448);

	if (t83 != 461U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x453 = INT32_MIN;
	static uint16_t x455 = 103U;
	uint16_t x456 = 115U;
	volatile int32_t t84 = -3;

	t84 = ((x453%(x454%x455))+x456);

	if (t84 != 35) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	int32_t x464 = -1;

	t85 = ((x461%(x462%x463))+x464);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x469 = INT16_MIN;
	int16_t x470 = -1;
	volatile uint16_t x471 = UINT16_MAX;
	static int16_t x472 = INT16_MIN;
	volatile int32_t t86 = 769209132;

	t86 = ((x469%(x470%x471))+x472);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x473 = -1;
	int64_t x475 = 25LL;
	int64_t t87 = 60578139842142LL;

	t87 = ((x473%(x474%x475))+x476);

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x482 = -1;
	static volatile uint8_t x483 = UINT8_MAX;
	volatile int64_t t88 = -8LL;

	t88 = ((x481%(x482%x483))+x484);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MIN;
	int32_t x487 = INT32_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = ((x485%(x486%x487))+x488);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x489 = INT32_MIN;
	int8_t x490 = INT8_MIN;
	int32_t x491 = INT32_MIN;
	int16_t x492 = INT16_MIN;
	volatile int32_t t90 = -726;

	t90 = ((x489%(x490%x491))+x492);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x493 = INT16_MIN;
	uint64_t x494 = UINT64_MAX;
	uint64_t x495 = 177020LLU;
	uint16_t x496 = UINT16_MAX;

	t91 = ((x493%(x494%x495))+x496);

	if (t91 != 84673LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x497 = -1;
	static int8_t x498 = -1;
	int16_t x499 = INT16_MIN;
	volatile int8_t x500 = INT8_MAX;
	int32_t t92 = 38136731;

	t92 = ((x497%(x498%x499))+x500);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x502 = 840;
	int8_t x503 = INT8_MAX;
	int8_t x504 = INT8_MAX;
	volatile int64_t t93 = -22LL;

	t93 = ((x501%(x502%x503))+x504);

	if (t93 != 119LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x509 = 12;
	int16_t x510 = 231;
	static int8_t x511 = INT8_MIN;

	t94 = ((x509%(x510%x511))+x512);

	if (t94 != -32756) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x518 = -1;
	int32_t x520 = -18890;

	t95 = ((x517%(x518%x519))+x520);

	if (t95 != -18890) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x521 = UINT64_MAX;
	int64_t x522 = -33LL;
	uint16_t x523 = 3715U;
	int64_t x524 = INT64_MIN;
	uint64_t t96 = 37746131LLU;

	t96 = ((x521%(x522%x523))+x524);

	if (t96 != 9223372036854775840LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x525 = INT16_MAX;
	static volatile uint8_t x527 = UINT8_MAX;
	static int64_t x528 = -1LL;
	int64_t t97 = -39598178737931532LL;

	t97 = ((x525%(x526%x527))+x528);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x529 = 1U;
	uint16_t x530 = UINT16_MAX;
	volatile int64_t x532 = INT64_MIN;
	int64_t t98 = 19968LL;

	t98 = ((x529%(x530%x531))+x532);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MAX;
	uint16_t x535 = 3U;
	volatile int16_t x536 = -1;
	int64_t t99 = 7LL;

	t99 = ((x533%(x534%x535))+x536);

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

