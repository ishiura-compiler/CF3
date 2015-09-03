#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
uint64_t x12 = 0LLU;
static volatile int32_t x17 = -334;
uint32_t x18 = 31126U;
int64_t x20 = INT64_MIN;
uint64_t x29 = 2193302LLU;
int8_t x30 = -1;
volatile int64_t x32 = INT64_MIN;
static uint8_t x40 = 84U;
uint64_t x42 = UINT64_MAX;
int32_t t10 = -67511;
static int16_t x52 = INT16_MAX;
volatile int32_t t12 = 26;
static int8_t x54 = -1;
volatile int8_t x55 = INT8_MIN;
static int32_t x62 = 2896;
int8_t x67 = 7;
volatile int32_t t17 = 5543767;
int64_t x85 = 293762258LL;
int64_t x87 = INT64_MIN;
int32_t t19 = 44390;
uint64_t x93 = 31542889313094216LLU;
uint8_t x96 = UINT8_MAX;
int64_t x102 = INT64_MAX;
volatile uint8_t x103 = 100U;
static volatile int32_t t22 = -1877695;
int64_t x115 = INT64_MIN;
int16_t x119 = -426;
volatile int32_t t26 = INT32_MIN;
static uint32_t x125 = 15U;
static volatile int64_t t28 = -25799127070457364LL;
int64_t x139 = -1LL;
uint32_t t31 = 2U;
uint32_t x152 = 116402U;
static int8_t x160 = -2;
int64_t t34 = 2083321100126846LL;
int32_t x168 = -1;
uint16_t x171 = UINT16_MAX;
static volatile int64_t t36 = -21LL;
int16_t x176 = INT16_MAX;
int16_t x178 = INT16_MIN;
static int32_t t38 = -222085578;
volatile uint8_t x188 = 3U;
int32_t x189 = INT32_MAX;
int64_t x190 = -703502982LL;
uint32_t x194 = UINT32_MAX;
volatile int32_t t42 = 45989;
int8_t x204 = INT8_MAX;
volatile int32_t t44 = -1;
static uint8_t x207 = 1U;
static volatile int32_t x211 = INT32_MAX;
uint64_t x225 = 6634900LLU;
static uint16_t x229 = UINT16_MAX;
int32_t x231 = -1;
uint32_t x242 = 6U;
int64_t x245 = -3015261LL;
volatile uint16_t x252 = UINT16_MAX;
int64_t x258 = INT64_MAX;
uint8_t x259 = 7U;
int32_t t59 = INT32_MIN;
static int8_t x274 = 16;
volatile int32_t x276 = INT32_MAX;
int32_t t60 = 9650;
uint8_t x280 = UINT8_MAX;
uint32_t x292 = 21867600U;
uint32_t t64 = 54U;
int32_t x301 = INT32_MIN;
static int64_t x316 = INT64_MIN;
volatile int32_t t67 = -393571;
int32_t x319 = -1;
volatile int16_t x321 = -1;
uint64_t x334 = UINT64_MAX;
int32_t x343 = -1;
int64_t x346 = INT64_MAX;
static uint8_t x347 = UINT8_MAX;
int8_t x350 = INT8_MIN;
volatile uint64_t t76 = 4474974318LLU;
int64_t x358 = 4047475547288005674LL;
int32_t x376 = INT32_MAX;
static int32_t x379 = -1;
uint8_t x382 = 46U;
volatile int16_t x386 = -1;
int64_t x391 = -1LL;
static uint16_t x399 = 3U;
int16_t x400 = INT16_MIN;
volatile int8_t x410 = INT8_MIN;
static int16_t x411 = -1;
static volatile int32_t t88 = 22;
uint16_t x416 = UINT16_MAX;
uint16_t x418 = UINT16_MAX;
static int32_t t91 = 7;
int32_t x432 = 4076;
volatile uint64_t t93 = UINT64_MAX;
int16_t x436 = INT16_MIN;
volatile int32_t t94 = 1871;
uint64_t x442 = 406833152904848210LLU;
static volatile int32_t t97 = -1390476;
uint16_t x449 = 23168U;
static int8_t x452 = 11;


void f0(void) {
	uint16_t x1 = 20813U;
	volatile uint16_t x3 = 5U;
	static int16_t x4 = INT16_MIN;
	static int32_t t0 = -14;

	t0 = (x1-((x2-x3)<=x4));

	if (t0 != 20813) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int16_t x6 = -1;
	static int32_t x7 = INT32_MIN;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = -111;

	t1 = (x5-((x6-x7)<=x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile int16_t x10 = 208;
	int64_t x11 = -1LL;
	volatile int32_t t2 = -641441;

	t2 = (x9-((x10-x11)<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint32_t x14 = 1572876257U;
	uint64_t x15 = 39819510377607LLU;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 17405513;

	t3 = (x13-((x14-x15)<=x16));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MAX;
	volatile int32_t t4 = -5189029;

	t4 = (x17-((x18-x19)<=x20));

	if (t4 != -334) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 247857U;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	volatile int8_t x24 = INT8_MIN;
	uint32_t t5 = 58501435U;

	t5 = (x21-((x22-x23)<=x24));

	if (t5 != 247856U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	int8_t x26 = 4;
	static int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -2390;

	t6 = (x25-((x26-x27)<=x28));

	if (t6 != -129) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x31 = 13LL;
	static uint64_t t7 = 128316107512659LLU;

	t7 = (x29-((x30-x31)<=x32));

	if (t7 != 2193302LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	int64_t x34 = -1LL;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = 1051;

	t8 = (x33-((x34-x35)<=x36));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1139LL;
	uint32_t x38 = 39221999U;
	uint32_t x39 = 68U;
	static volatile int64_t t9 = -7867387073LL;

	t9 = (x37-((x38-x39)<=x40));

	if (t9 != -1139LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 8U;
	int32_t x43 = INT32_MIN;
	static int64_t x44 = -1LL;

	t10 = (x41-((x42-x43)<=x44));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	int8_t x46 = -1;
	int8_t x47 = INT8_MIN;
	static volatile int8_t x48 = 13;
	volatile int32_t t11 = 5;

	t11 = (x45-((x46-x47)<=x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 407U;
	int64_t x50 = 2622415LL;
	static uint16_t x51 = 4U;

	t12 = (x49-((x50-x51)<=x52));

	if (t12 != 407) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 25;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 0;

	t13 = (x53-((x54-x55)<=x56));

	if (t13 != 25) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 22U;
	int64_t x60 = 995222LL;
	int32_t t14 = -5713;

	t14 = (x57-((x58-x59)<=x60));

	if (t14 != -32769) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int32_t x63 = 855;
	volatile int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MAX;

	t15 = (x61-((x62-x63)<=x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 28U;
	int64_t x66 = -125771838365LL;
	static int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = -7458916;

	t16 = (x65-((x66-x67)<=x68));

	if (t16 != 27) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	volatile uint64_t x70 = 15968846238861656LLU;
	int8_t x71 = 3;
	uint16_t x72 = 366U;

	t17 = (x69-((x70-x71)<=x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = -1;
	uint8_t x88 = UINT8_MAX;
	static volatile int64_t t18 = -38075164165LL;

	t18 = (x85-((x86-x87)<=x88));

	if (t18 != 293762258LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = 5;
	int16_t x90 = INT16_MIN;
	int16_t x91 = -9978;
	int8_t x92 = 0;

	t19 = (x89-((x90-x91)<=x92));

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x94 = 230LLU;
	volatile int64_t x95 = INT64_MAX;
	volatile uint64_t t20 = 484LLU;

	t20 = (x93-((x94-x95)<=x96));

	if (t20 != 31542889313094216LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x97 = 125235625834LLU;
	int32_t x98 = 16166;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = 3;
	uint64_t t21 = 23413973664695LLU;

	t21 = (x97-((x98-x99)<=x100));

	if (t21 != 125235625833LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	int16_t x104 = 13;

	t22 = (x101-((x102-x103)<=x104));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = INT32_MIN;
	volatile int16_t x110 = INT16_MIN;
	uint32_t x111 = 1U;
	volatile uint32_t x112 = 1780U;
	static int32_t t23 = INT32_MIN;

	t23 = (x109-((x110-x111)<=x112));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 11U;
	int64_t x114 = INT64_MIN;
	volatile uint32_t x116 = UINT32_MAX;
	static int32_t t24 = 7224;

	t24 = (x113-((x114-x115)<=x116));

	if (t24 != 10) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	static volatile int64_t x118 = INT64_MIN;
	uint32_t x120 = 142693619U;
	int32_t t25 = -1;

	t25 = (x117-((x118-x119)<=x120));

	if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	uint8_t x124 = UINT8_MAX;

	t26 = (x121-((x122-x123)<=x124));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x126 = -1;
	int32_t x127 = -253652;
	static uint64_t x128 = 47025LLU;
	uint32_t t27 = 16194262U;

	t27 = (x125-((x126-x127)<=x128));

	if (t27 != 15U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = 5725272144974LL;
	static volatile uint32_t x130 = 23U;
	static uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MIN;

	t28 = (x129-((x130-x131)<=x132));

	if (t28 != 5725272144974LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = UINT8_MAX;
	volatile int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	volatile int8_t x136 = -1;
	int32_t t29 = -1319519;

	t29 = (x133-((x134-x135)<=x136));

	if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x137 = 627U;
	int16_t x138 = INT16_MIN;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t30 = -6045109;

	t30 = (x137-((x138-x139)<=x140));

	if (t30 != 626) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 15681004U;
	volatile int32_t x146 = INT32_MIN;
	volatile int32_t x147 = -934;
	int32_t x148 = INT32_MAX;

	t31 = (x145-((x146-x147)<=x148));

	if (t31 != 15681003U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x149 = 166U;
	static int8_t x150 = INT8_MIN;
	int64_t x151 = 45701890863214294LL;
	volatile int32_t t32 = -20018743;

	t32 = (x149-((x150-x151)<=x152));

	if (t32 != 165) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 74265698990LLU;
	static int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	static int32_t t33 = -16095;

	t33 = (x153-((x154-x155)<=x156));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 3122LL;
	static uint32_t x158 = 6U;
	int16_t x159 = -1024;

	t34 = (x157-((x158-x159)<=x160));

	if (t34 != 3121LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x165 = -28507565610621LL;
	uint8_t x166 = 3U;
	static uint8_t x167 = 12U;
	int64_t t35 = -405360845224918426LL;

	t35 = (x165-((x166-x167)<=x168));

	if (t35 != -28507565610622LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -1LL;
	uint16_t x170 = UINT16_MAX;
	uint64_t x172 = 3117LLU;

	t36 = (x169-((x170-x171)<=x172));

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = 115U;
	uint16_t x174 = UINT16_MAX;
	uint8_t x175 = UINT8_MAX;
	int32_t t37 = -482;

	t37 = (x173-((x174-x175)<=x176));

	if (t37 != 115) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = -1;
	int8_t x179 = -2;
	static int16_t x180 = INT16_MAX;

	t38 = (x177-((x178-x179)<=x180));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = 19U;
	int32_t x182 = 25127;
	int32_t x183 = INT32_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t39 = -90201;

	t39 = (x181-((x182-x183)<=x184));

	if (t39 != 18) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x185-((x186-x187)<=x188));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x191 = 4U;
	int64_t x192 = 0LL;
	static volatile int32_t t41 = -13349452;

	t41 = (x189-((x190-x191)<=x192));

	if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = -23;
	volatile uint32_t x196 = UINT32_MAX;

	t42 = (x193-((x194-x195)<=x196));

	if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	volatile int32_t t43 = -756;

	t43 = (x197-((x198-x199)<=x200));

	if (t43 != -32769) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = 13;
	uint16_t x202 = UINT16_MAX;
	static volatile int8_t x203 = -1;

	t44 = (x201-((x202-x203)<=x204));

	if (t44 != 13) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x205 = 6U;
	int64_t x206 = INT64_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t45 = -6347951;

	t45 = (x205-((x206-x207)<=x208));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x209 = -1;
	volatile int16_t x210 = INT16_MAX;
	int64_t x212 = 30589523716LL;
	int32_t t46 = 428673;

	t46 = (x209-((x210-x211)<=x212));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MAX;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = 118;
	int8_t x216 = -3;
	volatile int32_t t47 = -86202;

	t47 = (x213-((x214-x215)<=x216));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = 0LLU;
	int32_t x222 = 772089702;
	int8_t x223 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t48 = 38390716LLU;

	t48 = (x221-((x222-x223)<=x224));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x226 = -1;
	uint16_t x227 = 9191U;
	static int64_t x228 = INT64_MIN;
	volatile uint64_t t49 = 1493681LLU;

	t49 = (x225-((x226-x227)<=x228));

	if (t49 != 6634900LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x230 = INT32_MIN;
	static volatile int32_t x232 = -50;
	int32_t t50 = 128244487;

	t50 = (x229-((x230-x231)<=x232));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x233 = 1449U;
	uint8_t x234 = 26U;
	uint32_t x235 = 181309U;
	uint8_t x236 = 5U;
	static int32_t t51 = -44;

	t51 = (x233-((x234-x235)<=x236));

	if (t51 != 1449) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = UINT16_MAX;
	static int16_t x238 = INT16_MIN;
	uint16_t x239 = 385U;
	volatile uint64_t x240 = 32336545409863LLU;
	volatile int32_t t52 = 140173661;

	t52 = (x237-((x238-x239)<=x240));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x241 = 5U;
	static int8_t x243 = INT8_MIN;
	static int64_t x244 = 95LL;
	uint32_t t53 = 1115933613U;

	t53 = (x241-((x242-x243)<=x244));

	if (t53 != 5U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x246 = -1142LL;
	int8_t x247 = 9;
	volatile int8_t x248 = INT8_MIN;
	volatile int64_t t54 = -39393674301LL;

	t54 = (x245-((x246-x247)<=x248));

	if (t54 != -3015262LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x250 = 135U;
	int64_t x251 = INT64_MAX;
	int32_t t55 = -49;

	t55 = (x249-((x250-x251)<=x252));

	if (t55 != -129) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = -105916;
	static volatile uint64_t x260 = 16724861LLU;
	volatile int32_t t56 = -24;

	t56 = (x257-((x258-x259)<=x260));

	if (t56 != -105916) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = INT64_MAX;
	static volatile int32_t t57 = 211;

	t57 = (x261-((x262-x263)<=x264));

	if (t57 != -32769) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x265 = 7953U;
	uint32_t x266 = UINT32_MAX;
	volatile int64_t x267 = -1LL;
	uint64_t x268 = 12800801540LLU;
	volatile int32_t t58 = -10532852;

	t58 = (x265-((x266-x267)<=x268));

	if (t58 != 7952) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = 836824384;
	int8_t x271 = -13;
	int8_t x272 = -19;

	t59 = (x269-((x270-x271)<=x272));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = 0;
	static uint32_t x275 = 98U;

	t60 = (x273-((x274-x275)<=x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	volatile int8_t x279 = 5;
	volatile int32_t t61 = -186464;

	t61 = (x277-((x278-x279)<=x280));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = 1445921594591712029LL;
	int32_t x282 = INT32_MAX;
	static uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MIN;
	int64_t t62 = -64088672LL;

	t62 = (x281-((x282-x283)<=x284));

	if (t62 != 1445921594591712029LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	volatile int32_t x291 = 72083452;
	volatile int64_t t63 = 117453867LL;

	t63 = (x289-((x290-x291)<=x292));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x293 = 28050U;
	int32_t x294 = INT32_MIN;
	static uint64_t x295 = 213648235LLU;
	int32_t x296 = -3;

	t64 = (x293-((x294-x295)<=x296));

	if (t64 != 28049U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x302 = INT64_MAX;
	uint32_t x303 = 76930U;
	static int64_t x304 = INT64_MIN;
	int32_t t65 = INT32_MIN;

	t65 = (x301-((x302-x303)<=x304));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -1LL;
	uint64_t x306 = 124039553392LLU;
	uint64_t x307 = 1LLU;
	int32_t x308 = INT32_MIN;
	volatile int64_t t66 = 1898829662267453LL;

	t66 = (x305-((x306-x307)<=x308));

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x313 = INT16_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	uint16_t x315 = 28078U;

	t67 = (x313-((x314-x315)<=x316));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x317 = 2U;
	volatile int8_t x318 = INT8_MIN;
	volatile uint64_t x320 = 2071576127LLU;
	static int32_t t68 = 48;

	t68 = (x317-((x318-x319)<=x320));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x322 = UINT8_MAX;
	static volatile int8_t x323 = INT8_MIN;
	uint8_t x324 = 8U;
	int32_t t69 = -199426;

	t69 = (x321-((x322-x323)<=x324));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MAX;
	volatile int8_t x326 = 0;
	int32_t x327 = 2;
	int8_t x328 = INT8_MIN;
	int32_t t70 = 550922;

	t70 = (x325-((x326-x327)<=x328));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x329 = UINT16_MAX;
	int8_t x330 = -1;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 2917174785449179435LLU;
	int32_t t71 = -2912;

	t71 = (x329-((x330-x331)<=x332));

	if (t71 != 65534) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -1LL;
	int32_t x335 = 56;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t72 = 5011739LL;

	t72 = (x333-((x334-x335)<=x336));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x337 = -1;
	volatile int64_t x338 = INT64_MIN;
	static volatile int32_t x339 = -1;
	volatile int16_t x340 = -1;
	static int32_t t73 = -52720133;

	t73 = (x337-((x338-x339)<=x340));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MAX;
	uint16_t x342 = 6U;
	int64_t x344 = -1LL;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x341-((x342-x343)<=x344));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x345 = INT16_MIN;
	static int32_t x348 = INT32_MAX;
	int32_t t75 = -3089314;

	t75 = (x345-((x346-x347)<=x348));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int64_t x351 = 0LL;
	uint8_t x352 = 4U;

	t76 = (x349-((x350-x351)<=x352));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -1;
	int16_t x354 = 1627;
	uint16_t x355 = 0U;
	volatile int8_t x356 = INT8_MAX;
	int32_t t77 = -47129506;

	t77 = (x353-((x354-x355)<=x356));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x359 = 7360;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t78 = -1970609;

	t78 = (x357-((x358-x359)<=x360));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = -10;
	volatile uint8_t x366 = 0U;
	int32_t x367 = -1;
	int8_t x368 = INT8_MAX;
	volatile int32_t t79 = -500;

	t79 = (x365-((x366-x367)<=x368));

	if (t79 != -11) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = 53;
	volatile int16_t x374 = -1;
	int64_t x375 = -361LL;
	static int32_t t80 = 2888;

	t80 = (x373-((x374-x375)<=x376));

	if (t80 != 52) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = INT16_MAX;
	volatile int64_t x378 = -207714557LL;
	int64_t x380 = INT64_MIN;
	int32_t t81 = -10378;

	t81 = (x377-((x378-x379)<=x380));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MAX;
	uint64_t x383 = 1268265831489146LLU;
	int32_t x384 = 956460045;
	int32_t t82 = 11386;

	t82 = (x381-((x382-x383)<=x384));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x385 = INT16_MIN;
	volatile int64_t x387 = INT64_MIN;
	uint32_t x388 = UINT32_MAX;
	static volatile int32_t t83 = -11;

	t83 = (x385-((x386-x387)<=x388));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = 0U;
	int8_t x392 = 1;
	int32_t t84 = -1222177;

	t84 = (x389-((x390-x391)<=x392));

	if (t84 != -129) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = 2;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x397-((x398-x399)<=x400));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x401 = -1;
	static uint16_t x402 = UINT16_MAX;
	uint8_t x403 = UINT8_MAX;
	static uint64_t x404 = 200618879100306LLU;
	volatile int32_t t86 = 1;

	t86 = (x401-((x402-x403)<=x404));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = 4689;
	int16_t x406 = INT16_MIN;
	static volatile int16_t x407 = -1;
	uint32_t x408 = UINT32_MAX;
	int32_t t87 = -62039452;

	t87 = (x405-((x406-x407)<=x408));

	if (t87 != 4688) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	int64_t x412 = INT64_MIN;

	t88 = (x409-((x410-x411)<=x412));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = INT8_MIN;
	static uint8_t x414 = UINT8_MAX;
	static int64_t x415 = 105392345LL;
	volatile int32_t t89 = 61425298;

	t89 = (x413-((x414-x415)<=x416));

	if (t89 != -129) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x417 = UINT8_MAX;
	volatile uint64_t x419 = 18545327LLU;
	volatile int8_t x420 = INT8_MIN;
	int32_t t90 = -1799;

	t90 = (x417-((x418-x419)<=x420));

	if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MAX;
	static int8_t x422 = INT8_MIN;
	static int16_t x423 = INT16_MIN;
	volatile int32_t x424 = -53;

	t91 = (x421-((x422-x423)<=x424));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x425 = 55LL;
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = UINT16_MAX;
	uint8_t x428 = UINT8_MAX;
	static int64_t t92 = -76330908LL;

	t92 = (x425-((x426-x427)<=x428));

	if (t92 != 55LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = UINT64_MAX;
	int8_t x430 = 56;
	int16_t x431 = INT16_MIN;

	t93 = (x429-((x430-x431)<=x432));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = UINT16_MAX;

	t94 = (x433-((x434-x435)<=x436));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x437 = -1;
	volatile int8_t x438 = -1;
	static int32_t x439 = -1;
	uint32_t x440 = 59U;
	volatile int32_t t95 = -1;

	t95 = (x437-((x438-x439)<=x440));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = INT16_MAX;
	static int16_t x443 = INT16_MIN;
	static int8_t x444 = 11;
	int32_t t96 = -754761656;

	t96 = (x441-((x442-x443)<=x444));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x445 = 1283U;
	int8_t x446 = -31;
	volatile int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;

	t97 = (x445-((x446-x447)<=x448));

	if (t97 != 1282) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x450 = 37U;
	int32_t x451 = -1;
	volatile int32_t t98 = -1599;

	t98 = (x449-((x450-x451)<=x452));

	if (t98 != 23168) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x453 = 45U;
	volatile int64_t x454 = INT64_MIN;
	volatile int8_t x455 = -3;
	volatile int32_t x456 = -1;
	int32_t t99 = -4094;

	t99 = (x453-((x454-x455)<=x456));

	if (t99 != 44) { NG(); } else { ; }
	
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

