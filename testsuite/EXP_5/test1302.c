#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
volatile int64_t t0 = 206135303LL;
int32_t t1 = -343;
int32_t x14 = INT32_MIN;
static uint16_t x17 = 4U;
uint16_t x25 = 6965U;
int64_t x26 = INT64_MAX;
volatile int32_t t8 = -8764726;
static uint8_t x37 = 0U;
int64_t x40 = 16432LL;
static uint32_t x45 = 37573U;
uint16_t x49 = UINT16_MAX;
volatile uint16_t x54 = UINT16_MAX;
int8_t x57 = INT8_MAX;
int64_t x62 = -1LL;
static uint64_t x65 = 604530298LLU;
uint64_t t16 = 7699410650769LLU;
static int16_t x76 = -1;
uint8_t x77 = 1U;
uint8_t x80 = 0U;
int16_t x87 = -7648;
uint64_t x94 = 490688LLU;
int16_t x95 = -6;
volatile int32_t t22 = 13;
volatile int64_t x100 = INT64_MAX;
static int8_t x106 = -1;
static volatile int32_t t25 = 94318;
int16_t x113 = INT16_MIN;
int16_t x115 = -1;
volatile int32_t x116 = -1;
volatile int32_t t26 = -9;
volatile int16_t x118 = INT16_MIN;
volatile int64_t x119 = INT64_MAX;
volatile int32_t x121 = -412;
volatile int32_t t28 = 0;
uint8_t x126 = 0U;
int32_t t31 = 192085;
uint32_t x142 = 729U;
int32_t x143 = 11043896;
uint8_t x160 = UINT8_MAX;
static int64_t x170 = INT64_MIN;
int32_t x173 = -3687544;
volatile uint16_t x174 = 3U;
int64_t x176 = INT64_MIN;
volatile int32_t t40 = -202558643;
static uint32_t x178 = UINT32_MAX;
volatile int32_t t41 = -243264;
int16_t x185 = -1;
uint32_t x190 = UINT32_MAX;
int16_t x194 = INT16_MAX;
int32_t x196 = -422255802;
uint16_t x212 = 4U;
int32_t x218 = INT32_MAX;
volatile int64_t x222 = -56991272295697281LL;
static int8_t x223 = 29;
int8_t x226 = INT8_MIN;
static volatile int32_t t53 = INT32_MAX;
int64_t x232 = -4485466695122908LL;
int64_t t54 = INT64_MIN;
uint32_t x235 = 938916U;
static int32_t x238 = -484063;
volatile int8_t x251 = -58;
int16_t x253 = INT16_MIN;
int16_t x255 = 187;
uint16_t x261 = 432U;
int32_t t62 = 64242870;
int16_t x267 = INT16_MIN;
uint32_t x268 = UINT32_MAX;
volatile int16_t x272 = 1;
volatile uint8_t x275 = 0U;
volatile int8_t x276 = 0;
static volatile uint64_t x283 = 7005807792060623LLU;
static int16_t x284 = INT16_MIN;
uint32_t x285 = UINT32_MAX;
volatile int32_t t70 = 5947;
uint64_t x297 = 73462581280170618LLU;
static volatile int64_t x299 = -52200610403373LL;
static volatile int32_t x301 = 3;
int64_t x314 = INT64_MAX;
int32_t x319 = INT32_MIN;
int64_t x320 = 14369LL;
static volatile uint8_t x322 = 8U;
int32_t t76 = 265957186;
int8_t x334 = 1;
volatile int8_t x336 = 0;
uint16_t x340 = 21U;
volatile uint8_t x341 = 4U;
volatile int8_t x351 = INT8_MIN;
int32_t t84 = 25;
volatile int16_t x362 = INT16_MIN;
int16_t x374 = INT16_MIN;
int32_t x378 = INT32_MAX;
static int16_t x379 = -1;
volatile int8_t x381 = -4;
int32_t x383 = INT32_MIN;
static int32_t t90 = -6;
volatile int8_t x389 = INT8_MIN;
volatile int32_t x391 = INT32_MIN;
uint32_t x397 = 18U;
int8_t x401 = -1;
int64_t x402 = INT64_MIN;
static int16_t x404 = INT16_MIN;
volatile uint32_t t96 = 2656278U;
volatile int64_t x413 = 2191525361243015LL;
int64_t x420 = INT64_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int16_t x2 = 388;
	int16_t x4 = INT16_MAX;

	t0 = (x1-((x2==x3)<=x4));

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	volatile uint16_t x6 = 209U;
	uint32_t x7 = 121648U;
	volatile int64_t x8 = 14038650LL;

	t1 = (x5-((x6==x7)<=x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	static int64_t x10 = 553494385307LL;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 5;

	t2 = (x9-((x10==x11)<=x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 144U;
	int32_t x15 = INT32_MAX;
	int8_t x16 = -1;
	int32_t t3 = 1420;

	t3 = (x13-((x14==x15)<=x16));

	if (t3 != 144) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	uint8_t x20 = 7U;
	int32_t t4 = -13328;

	t4 = (x17-((x18==x19)<=x20));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x22 = -2217LL;
	static int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	static volatile int32_t t5 = -1;

	t5 = (x21-((x22==x23)<=x24));

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = -583;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -94565;

	t6 = (x25-((x26==x27)<=x28));

	if (t6 != 6964) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 479677491LLU;
	volatile uint32_t x30 = 9370U;
	static int64_t x31 = -1LL;
	int8_t x32 = -1;
	volatile uint64_t t7 = 56920714LLU;

	t7 = (x29-((x30==x31)<=x32));

	if (t7 != 479677491LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -36;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = -1;

	t8 = (x33-((x34==x35)<=x36));

	if (t8 != -36) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -104413;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t t9 = -2186;

	t9 = (x37-((x38==x39)<=x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = INT8_MAX;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -17905;

	t10 = (x41-((x42==x43)<=x44));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x46 = 33426249LLU;
	static int32_t x47 = INT32_MAX;
	int64_t x48 = INT64_MIN;
	volatile uint32_t t11 = 25U;

	t11 = (x45-((x46==x47)<=x48));

	if (t11 != 37573U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x50 = 698057U;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 0U;
	static int32_t t12 = -26144;

	t12 = (x49-((x50==x51)<=x52));

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = 6003LLU;
	volatile int32_t t13 = 0;

	t13 = (x53-((x54==x55)<=x56));

	if (t13 != -129) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 2413;

	t14 = (x57-((x58==x59)<=x60));

	if (t14 != 126) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 111U;
	int32_t x63 = 5832563;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 10990;

	t15 = (x61-((x62==x63)<=x64));

	if (t15 != 111) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 2U;
	volatile uint32_t x67 = 3312174U;
	static int16_t x68 = -1165;

	t16 = (x65-((x66==x67)<=x68));

	if (t16 != 604530298LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 1;
	static int16_t x70 = 2295;
	static int16_t x71 = INT16_MIN;
	static int64_t x72 = INT64_MIN;
	int32_t t17 = 1;

	t17 = (x69-((x70==x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int32_t x74 = 951411;
	volatile int32_t x75 = INT32_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (x73-((x74==x75)<=x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -311576;
	int64_t x79 = -2479111910864966LL;
	int32_t t19 = -1274368;

	t19 = (x77-((x78==x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 1388LLU;
	int32_t x82 = 1;
	int64_t x83 = INT64_MIN;
	int8_t x84 = 0;
	volatile uint64_t t20 = 15201577416482463LLU;

	t20 = (x81-((x82==x83)<=x84));

	if (t20 != 1387LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static int16_t x86 = INT16_MAX;
	int8_t x88 = -1;
	static volatile int32_t t21 = 706002;

	t21 = (x85-((x86==x87)<=x88));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -2913;
	static int16_t x96 = -6;

	t22 = (x93-((x94==x95)<=x96));

	if (t22 != -2913) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = 5U;
	int8_t x98 = -2;
	volatile uint32_t x99 = 27109U;
	int32_t t23 = -43139793;

	t23 = (x97-((x98==x99)<=x100));

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MAX;
	volatile int64_t x103 = INT64_MAX;
	uint16_t x104 = 33U;
	int32_t t24 = 1062867;

	t24 = (x101-((x102==x103)<=x104));

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MAX;

	t25 = (x105-((x106==x107)<=x108));

	if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x114 = -1;

	t26 = (x113-((x114==x115)<=x116));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	int32_t x120 = -297049;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x117-((x118==x119)<=x120));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MIN;
	int32_t x124 = -1;

	t28 = (x121-((x122==x123)<=x124));

	if (t28 != -412) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = -1;
	int32_t x127 = INT32_MIN;
	static uint16_t x128 = 3U;
	static int32_t t29 = -51;

	t29 = (x125-((x126==x127)<=x128));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = 15U;
	static int64_t x130 = 210256079094045LL;
	volatile int32_t x131 = INT32_MIN;
	volatile int16_t x132 = INT16_MIN;
	int32_t t30 = -30;

	t30 = (x129-((x130==x131)<=x132));

	if (t30 != 15) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MIN;
	static int32_t x135 = INT32_MIN;
	uint8_t x136 = 14U;

	t31 = (x133-((x134==x135)<=x136));

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MAX;
	static int64_t x138 = -1LL;
	volatile int16_t x139 = INT16_MAX;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x137-((x138==x139)<=x140));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x141 = INT16_MIN;
	int64_t x144 = -1LL;
	int32_t t33 = 9445326;

	t33 = (x141-((x142==x143)<=x144));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -2711965802511537LL;
	static int64_t x146 = INT64_MAX;
	static int64_t x147 = INT64_MIN;
	static volatile int32_t x148 = INT32_MIN;
	int64_t t34 = -92687LL;

	t34 = (x145-((x146==x147)<=x148));

	if (t34 != -2711965802511537LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = -1;
	uint64_t x155 = 8441188600LLU;
	int32_t x156 = INT32_MIN;
	static int32_t t35 = INT32_MIN;

	t35 = (x153-((x154==x155)<=x156));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = -91539LL;
	int64_t x159 = -1LL;
	volatile int32_t t36 = 7;

	t36 = (x157-((x158==x159)<=x160));

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 237784991769497804LLU;
	volatile int32_t x164 = 485257800;
	volatile int64_t t37 = 804812487899LL;

	t37 = (x161-((x162==x163)<=x164));

	if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	static volatile uint8_t x166 = 1U;
	volatile uint16_t x167 = UINT16_MAX;
	uint64_t x168 = 271LLU;
	static int32_t t38 = -11;

	t38 = (x165-((x166==x167)<=x168));

	if (t38 != -129) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = INT32_MAX;
	int16_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	int32_t t39 = -86178;

	t39 = (x169-((x170==x171)<=x172));

	if (t39 != 2147483646) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x175 = INT64_MIN;

	t40 = (x173-((x174==x175)<=x176));

	if (t40 != -3687544) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	volatile uint64_t x179 = 293045LLU;
	volatile int8_t x180 = -1;

	t41 = (x177-((x178==x179)<=x180));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 1690787228U;
	volatile uint16_t x182 = 11U;
	uint8_t x183 = UINT8_MAX;
	volatile uint64_t x184 = 1LLU;
	uint32_t t42 = 1234991009U;

	t42 = (x181-((x182==x183)<=x184));

	if (t42 != 1690787227U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MAX;
	static volatile int16_t x188 = INT16_MIN;
	volatile int32_t t43 = -144198357;

	t43 = (x185-((x186==x187)<=x188));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x189 = 264204290577LLU;
	int32_t x191 = 7700;
	int32_t x192 = INT32_MIN;
	static volatile uint64_t t44 = 121LLU;

	t44 = (x189-((x190==x191)<=x192));

	if (t44 != 264204290577LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	int8_t x195 = INT8_MAX;
	int32_t t45 = INT32_MIN;

	t45 = (x193-((x194==x195)<=x196));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 15856LLU;
	uint16_t x199 = 232U;
	static int32_t x200 = INT32_MAX;
	uint32_t t46 = 8616047U;

	t46 = (x197-((x198==x199)<=x200));

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = 2967;
	static volatile int32_t t47 = -4711;

	t47 = (x201-((x202==x203)<=x204));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	static uint32_t x206 = 511U;
	uint32_t x207 = 2U;
	int16_t x208 = INT16_MIN;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x205-((x206==x207)<=x208));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = -1;
	volatile int64_t x210 = INT64_MAX;
	static uint32_t x211 = 336176U;
	volatile int32_t t49 = -311218;

	t49 = (x209-((x210==x211)<=x212));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x213 = 0U;
	static uint32_t x214 = 11851U;
	volatile int32_t x215 = 3989;
	int32_t x216 = INT32_MAX;
	int32_t t50 = 115223741;

	t50 = (x213-((x214==x215)<=x216));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = -1;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = 3752;
	static int32_t t51 = 232;

	t51 = (x217-((x218==x219)<=x220));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int64_t x224 = -1LL;
	int32_t t52 = -6599801;

	t52 = (x221-((x222==x223)<=x224));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MAX;
	uint64_t x227 = 1111060602210282LLU;
	int8_t x228 = INT8_MIN;

	t53 = (x225-((x226==x227)<=x228));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 333135850U;
	uint8_t x231 = UINT8_MAX;

	t54 = (x229-((x230==x231)<=x232));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = 9;
	uint32_t x234 = 448110U;
	uint64_t x236 = 137021088566114705LLU;
	volatile int32_t t55 = -5251848;

	t55 = (x233-((x234==x235)<=x236));

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 0U;
	int64_t x239 = INT64_MAX;
	int16_t x240 = INT16_MAX;
	uint32_t t56 = UINT32_MAX;

	t56 = (x237-((x238==x239)<=x240));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = INT32_MAX;
	uint64_t x242 = 127784392091LLU;
	int32_t x243 = INT32_MAX;
	uint32_t x244 = 414224U;
	static int32_t t57 = -2;

	t57 = (x241-((x242==x243)<=x244));

	if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x245 = INT16_MAX;
	uint64_t x246 = 140192114229197LLU;
	int16_t x247 = INT16_MIN;
	static int64_t x248 = 5812651LL;
	volatile int32_t t58 = -6872;

	t58 = (x245-((x246==x247)<=x248));

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	uint32_t x250 = 9951U;
	int8_t x252 = 1;
	static int32_t t59 = 3;

	t59 = (x249-((x250==x251)<=x252));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x254 = -1;
	volatile uint64_t x256 = UINT64_MAX;
	volatile int32_t t60 = 9;

	t60 = (x253-((x254==x255)<=x256));

	if (t60 != -32769) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 5U;
	static uint8_t x258 = 22U;
	int32_t x259 = 166086;
	int32_t x260 = INT32_MAX;
	int32_t t61 = -755672;

	t61 = (x257-((x258==x259)<=x260));

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x262 = 17877989794675511LLU;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = -1;

	t62 = (x261-((x262==x263)<=x264));

	if (t62 != 432) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MIN;
	static uint8_t x266 = 71U;
	int32_t t63 = -2534;

	t63 = (x265-((x266==x267)<=x268));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x269 = UINT8_MAX;
	static int16_t x270 = -1495;
	uint8_t x271 = 9U;
	int32_t t64 = -243932336;

	t64 = (x269-((x270==x271)<=x272));

	if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	volatile int32_t t65 = 15449820;

	t65 = (x273-((x274==x275)<=x276));

	if (t65 != -129) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 7U;
	int32_t x278 = -1826190;
	static int8_t x279 = -1;
	static int8_t x280 = -1;
	int32_t t66 = 919427517;

	t66 = (x277-((x278==x279)<=x280));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = -1;
	uint32_t t67 = UINT32_MAX;

	t67 = (x281-((x282==x283)<=x284));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x286 = -1;
	int32_t x287 = 52;
	int32_t x288 = -29483313;
	uint32_t t68 = UINT32_MAX;

	t68 = (x285-((x286==x287)<=x288));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x289 = INT64_MIN;
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MAX;
	int8_t x292 = -1;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x289-((x290==x291)<=x292));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = UINT8_MAX;
	static volatile uint32_t x294 = 1385U;
	int64_t x295 = INT64_MIN;
	static uint8_t x296 = 1U;

	t70 = (x293-((x294==x295)<=x296));

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x298 = 17798024281013893LLU;
	volatile int8_t x300 = -1;
	volatile uint64_t t71 = 180391467LLU;

	t71 = (x297-((x298==x299)<=x300));

	if (t71 != 73462581280170618LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 4181U;
	static uint8_t x304 = 22U;
	int32_t t72 = -99426;

	t72 = (x301-((x302==x303)<=x304));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x309 = 112U;
	static volatile int64_t x310 = -1LL;
	static int32_t x311 = 47038;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t73 = -31879;

	t73 = (x309-((x310==x311)<=x312));

	if (t73 != 112) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = 6832822LL;
	volatile uint64_t x315 = UINT64_MAX;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t74 = 24552LL;

	t74 = (x313-((x314==x315)<=x316));

	if (t74 != 6832822LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x317 = 162LL;
	static volatile int32_t x318 = INT32_MIN;
	int64_t t75 = -1893563872LL;

	t75 = (x317-((x318==x319)<=x320));

	if (t75 != 161LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MIN;
	volatile int16_t x323 = INT16_MAX;
	static uint16_t x324 = 2297U;

	t76 = (x321-((x322==x323)<=x324));

	if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = INT16_MIN;
	uint32_t x326 = 7U;
	static int64_t x327 = 186242941360562581LL;
	static int8_t x328 = -28;
	volatile int32_t t77 = 981;

	t77 = (x325-((x326==x327)<=x328));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 9U;
	int8_t x330 = 7;
	int64_t x331 = 4386900291311455358LL;
	uint64_t x332 = 35163889246336531LLU;
	int32_t t78 = -86;

	t78 = (x329-((x330==x331)<=x332));

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MIN;
	volatile uint32_t x335 = UINT32_MAX;
	volatile int32_t t79 = 40;

	t79 = (x333-((x334==x335)<=x336));

	if (t79 != -32769) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x337 = 2U;
	uint32_t x338 = 638222U;
	int32_t x339 = INT32_MIN;
	uint32_t t80 = 4418U;

	t80 = (x337-((x338==x339)<=x340));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x342 = 2U;
	static int16_t x343 = INT16_MIN;
	int64_t x344 = 2420316493LL;
	volatile int32_t t81 = -9;

	t81 = (x341-((x342==x343)<=x344));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x345 = -10LL;
	int32_t x346 = 61930684;
	static int64_t x347 = -1LL;
	int16_t x348 = -1;
	int64_t t82 = 790LL;

	t82 = (x345-((x346==x347)<=x348));

	if (t82 != -10LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x349 = -1;
	int64_t x350 = INT64_MIN;
	static volatile uint16_t x352 = UINT16_MAX;
	volatile int32_t t83 = -1037;

	t83 = (x349-((x350==x351)<=x352));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 122U;
	int32_t x354 = 22473;
	static int16_t x355 = -10918;
	int16_t x356 = INT16_MAX;

	t84 = (x353-((x354==x355)<=x356));

	if (t84 != 121) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = 1U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -48;
	static int32_t x360 = -1;
	volatile int32_t t85 = 6;

	t85 = (x357-((x358==x359)<=x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 1U;
	uint16_t x363 = 2825U;
	int64_t x364 = -65688128740226LL;
	static int32_t t86 = -203090125;

	t86 = (x361-((x362==x363)<=x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = -1LL;
	static volatile int64_t t87 = INT64_MIN;

	t87 = (x369-((x370==x371)<=x372));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x373 = INT64_MAX;
	int8_t x375 = -1;
	static uint16_t x376 = 1838U;
	int64_t t88 = -16281046372LL;

	t88 = (x373-((x374==x375)<=x376));

	if (t88 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = 16340U;
	static int64_t x380 = 0LL;
	int32_t t89 = 1;

	t89 = (x377-((x378==x379)<=x380));

	if (t89 != 16339) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x382 = 38U;
	uint32_t x384 = 5U;

	t90 = (x381-((x382==x383)<=x384));

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 14856609470911LLU;
	int16_t x386 = INT16_MAX;
	uint16_t x387 = 41U;
	int16_t x388 = -119;
	static uint64_t t91 = 123874484LLU;

	t91 = (x385-((x386==x387)<=x388));

	if (t91 != 14856609470911LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x390 = -1;
	int32_t x392 = -171407298;
	volatile int32_t t92 = 998069;

	t92 = (x389-((x390==x391)<=x392));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x393 = 7LLU;
	uint16_t x394 = 47U;
	int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	uint64_t t93 = 8LLU;

	t93 = (x393-((x394==x395)<=x396));

	if (t93 != 7LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = INT64_MIN;
	uint16_t x399 = 20U;
	volatile int16_t x400 = INT16_MAX;
	static volatile uint32_t t94 = 115U;

	t94 = (x397-((x398==x399)<=x400));

	if (t94 != 17U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x403 = UINT8_MAX;
	volatile int32_t t95 = 2895;

	t95 = (x401-((x402==x403)<=x404));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 56158U;
	int8_t x406 = INT8_MIN;
	int8_t x407 = -1;
	volatile int8_t x408 = -11;

	t96 = (x405-((x406==x407)<=x408));

	if (t96 != 56158U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x414 = -1LL;
	uint8_t x415 = 32U;
	uint8_t x416 = UINT8_MAX;
	int64_t t97 = -115955123LL;

	t97 = (x413-((x414==x415)<=x416));

	if (t97 != 2191525361243014LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x417 = 129801141;
	volatile int32_t x418 = -1;
	uint32_t x419 = 8035U;
	volatile int32_t t98 = -9573;

	t98 = (x417-((x418==x419)<=x420));

	if (t98 != 129801140) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -1;
	int8_t x422 = -1;
	int32_t x423 = 32041;
	int64_t x424 = INT64_MIN;
	int32_t t99 = -341;

	t99 = (x421-((x422==x423)<=x424));

	if (t99 != -1) { NG(); } else { ; }
	
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

