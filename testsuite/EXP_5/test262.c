#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
int64_t x8 = -3LL;
static volatile int64_t x10 = -1LL;
uint32_t t2 = 13U;
static int16_t x29 = INT16_MIN;
static int32_t x30 = INT32_MAX;
uint8_t x32 = 3U;
volatile uint64_t x37 = UINT64_MAX;
int64_t x54 = INT64_MIN;
static uint16_t x56 = 1310U;
uint64_t x63 = 3974487047801LLU;
uint64_t x72 = 3865151LLU;
uint8_t x79 = 5U;
int32_t x82 = -1;
static uint16_t x85 = 40U;
int16_t x88 = INT16_MIN;
int8_t x94 = INT8_MAX;
uint32_t x95 = 4U;
int32_t t18 = INT32_MIN;
uint16_t x101 = 3U;
uint32_t x102 = 1291U;
volatile int32_t t20 = -1540;
int32_t x105 = -28582;
uint16_t x106 = 11295U;
int64_t x110 = 533LL;
uint8_t x112 = UINT8_MAX;
volatile int8_t x115 = -1;
int16_t x120 = -7;
static int32_t t24 = 44196878;
int8_t x122 = 0;
volatile int64_t x124 = -1LL;
volatile int32_t t25 = -3;
volatile int8_t x126 = INT8_MIN;
uint32_t x139 = 7U;
int8_t x143 = -3;
static volatile uint8_t x147 = 9U;
static uint32_t x156 = 232575U;
uint32_t x164 = 223990U;
uint32_t x166 = UINT32_MAX;
static volatile uint8_t x173 = 65U;
int32_t x177 = 1;
volatile int8_t x190 = -3;
int8_t x193 = -1;
static int16_t x195 = INT16_MIN;
volatile int32_t x203 = 0;
static int32_t t42 = -13530;
uint32_t t43 = 1U;
uint32_t x219 = UINT32_MAX;
uint8_t x229 = UINT8_MAX;
int16_t x230 = INT16_MIN;
uint32_t x236 = 145278392U;
static int64_t x237 = INT64_MIN;
int64_t x244 = INT64_MAX;
int16_t x247 = INT16_MIN;
int32_t x248 = INT32_MIN;
static volatile int64_t x249 = -326028469318LL;
uint64_t x250 = UINT64_MAX;
int64_t x262 = -1LL;
uint64_t x271 = UINT64_MAX;
static uint8_t x272 = 14U;
volatile int32_t x273 = INT32_MAX;
int32_t x274 = INT32_MAX;
volatile int32_t t59 = -1894723;
int8_t x285 = 10;
volatile uint16_t x292 = 9U;
static uint64_t x300 = 1513478333LLU;
static int32_t t64 = -56354980;
int8_t x304 = INT8_MAX;
int64_t x305 = INT64_MAX;
int64_t t66 = INT64_MAX;
int32_t x314 = INT32_MAX;
static uint32_t x315 = 1418810U;
int8_t x322 = INT8_MIN;
int32_t t70 = 32599702;
volatile int8_t x332 = 3;
int8_t x343 = INT8_MIN;
int32_t t74 = 181714499;
static int32_t t75 = -33090107;
static int8_t x356 = INT8_MAX;
uint64_t x357 = 377530050228LLU;
int64_t x358 = -2490697872551620293LL;
uint64_t x365 = 421435LLU;
int32_t x369 = -1;
volatile int32_t x375 = INT32_MAX;
uint64_t x377 = UINT64_MAX;
uint16_t x385 = 2469U;
volatile int16_t x386 = -1;
int32_t x389 = -44689;
int8_t x391 = INT8_MIN;
uint16_t x393 = 104U;
int16_t x412 = INT16_MIN;
int32_t x423 = INT32_MIN;
volatile int16_t x427 = -14220;
int32_t t93 = 719632505;
static volatile int32_t t94 = -15048;
uint64_t x439 = UINT64_MAX;
static volatile uint64_t x441 = 194LLU;
volatile int32_t x442 = INT32_MIN;
int64_t x448 = INT64_MIN;
static int16_t x452 = -1;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	uint8_t x2 = 2U;
	int32_t x3 = -2;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x1-((x2-x3)==x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -388311258;
	int64_t x6 = 7058108084613509LL;
	uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = 5969827;

	t1 = (x5-((x6-x7)==x8));

	if (t1 != -388311258) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 3U;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 96U;

	t2 = (x9-((x10-x11)==x12));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 14;
	int64_t x14 = 17941326449807575LL;
	int8_t x15 = INT8_MAX;
	volatile int16_t x16 = 998;
	volatile int32_t t3 = 92;

	t3 = (x13-((x14-x15)==x16));

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 5U;
	int8_t x22 = 3;
	static uint64_t x23 = 159053593370LLU;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t4 = 18297;

	t4 = (x21-((x22-x23)==x24));

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x31 = 492036680;
	int32_t t5 = -8783;

	t5 = (x29-((x30-x31)==x32));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 13896U;
	int32_t x34 = 183854;
	int64_t x35 = 27738LL;
	volatile uint32_t x36 = 1197U;
	uint32_t t6 = 271U;

	t6 = (x33-((x34-x35)==x36));

	if (t6 != 13896U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x38 = -600;
	uint16_t x39 = 2663U;
	uint64_t x40 = 2924LLU;
	uint64_t t7 = UINT64_MAX;

	t7 = (x37-((x38-x39)==x40));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = 9;
	volatile int32_t x46 = INT32_MAX;
	int64_t x47 = 818909LL;
	static int64_t x48 = -1LL;
	int32_t t8 = -512025837;

	t8 = (x45-((x46-x47)==x48));

	if (t8 != 9) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x49-((x50-x51)==x52));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile int8_t x55 = -1;
	volatile int32_t t10 = -18647234;

	t10 = (x53-((x54-x55)==x56));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 59;
	volatile uint64_t x58 = 241188LLU;
	volatile int32_t x59 = -82;
	int64_t x60 = -1LL;
	int32_t t11 = 13466080;

	t11 = (x57-((x58-x59)==x60));

	if (t11 != 59) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MAX;
	int8_t x62 = -1;
	volatile uint8_t x64 = 2U;
	static volatile int32_t t12 = -25075481;

	t12 = (x61-((x62-x63)==x64));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	volatile uint16_t x70 = 63U;
	uint32_t x71 = UINT32_MAX;
	int32_t t13 = INT32_MAX;

	t13 = (x69-((x70-x71)==x72));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = INT16_MIN;
	uint8_t x74 = UINT8_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	uint64_t x76 = 151756LLU;
	static int32_t t14 = 2;

	t14 = (x73-((x74-x75)==x76));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = 26;
	volatile int64_t x80 = INT64_MIN;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x77-((x78-x79)==x80));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	int64_t t16 = 297314539721806996LL;

	t16 = (x81-((x82-x83)==x84));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x86 = -1LL;
	static int16_t x87 = INT16_MIN;
	static volatile int32_t t17 = 351;

	t17 = (x85-((x86-x87)==x88));

	if (t17 != 40) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	static int16_t x96 = -1;

	t18 = (x93-((x94-x95)==x96));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = INT32_MIN;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = INT32_MAX;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x97-((x98-x99)==x100));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x103 = 12U;
	int64_t x104 = INT64_MIN;

	t20 = (x101-((x102-x103)==x104));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x107 = 1U;
	volatile int16_t x108 = INT16_MIN;
	static int32_t t21 = -62824637;

	t21 = (x105-((x106-x107)==x108));

	if (t21 != -28582) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x109 = 8864091529882903LL;
	uint16_t x111 = 30U;
	static volatile int64_t t22 = -1801LL;

	t22 = (x109-((x110-x111)==x112));

	if (t22 != 8864091529882903LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -3448925LL;
	static int64_t x114 = -1LL;
	static volatile int8_t x116 = 0;
	int64_t t23 = 1826113502732LL;

	t23 = (x113-((x114-x115)==x116));

	if (t23 != -3448926LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 26U;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MAX;

	t24 = (x117-((x118-x119)==x120));

	if (t24 != 26) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x121 = 62;
	int16_t x123 = -1;

	t25 = (x121-((x122-x123)==x124));

	if (t25 != 62) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MAX;
	int32_t x127 = 31;
	int64_t x128 = INT64_MIN;
	volatile int32_t t26 = -146698;

	t26 = (x125-((x126-x127)==x128));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = -1;
	int64_t x130 = -257727926LL;
	int64_t x131 = INT64_MIN;
	static volatile int64_t x132 = -1LL;
	int32_t t27 = 0;

	t27 = (x129-((x130-x131)==x132));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = 1;
	int64_t x138 = 5115905LL;
	int64_t x140 = INT64_MAX;
	static volatile int32_t t28 = -105;

	t28 = (x137-((x138-x139)==x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x141 = 18U;
	uint16_t x142 = UINT16_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t29 = -10072;

	t29 = (x141-((x142-x143)==x144));

	if (t29 != 18) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	static uint64_t x146 = 73090429604256254LLU;
	uint64_t x148 = UINT64_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x145-((x146-x147)==x148));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = UINT32_MAX;
	static volatile int8_t x154 = 1;
	uint8_t x155 = 114U;
	uint32_t t31 = UINT32_MAX;

	t31 = (x153-((x154-x155)==x156));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x157 = INT8_MIN;
	static volatile uint16_t x158 = 13U;
	volatile int64_t x159 = -1718LL;
	int32_t x160 = INT32_MAX;
	static int32_t t32 = -23535599;

	t32 = (x157-((x158-x159)==x160));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x161 = 5875LLU;
	uint8_t x162 = UINT8_MAX;
	volatile int32_t x163 = -1;
	uint64_t t33 = 4585540157765LLU;

	t33 = (x161-((x162-x163)==x164));

	if (t33 != 5875LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = -31;
	int8_t x167 = 7;
	static int64_t x168 = INT64_MAX;
	static int32_t t34 = -10469480;

	t34 = (x165-((x166-x167)==x168));

	if (t34 != -31) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MAX;
	uint32_t x170 = UINT32_MAX;
	volatile uint32_t x171 = 33172884U;
	int64_t x172 = INT64_MIN;
	int32_t t35 = 796;

	t35 = (x169-((x170-x171)==x172));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x174 = INT32_MIN;
	volatile uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 17U;
	volatile int32_t t36 = 3;

	t36 = (x173-((x174-x175)==x176));

	if (t36 != 65) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x178 = -56080253;
	static int8_t x179 = INT8_MIN;
	uint64_t x180 = 85319306955289LLU;
	volatile int32_t t37 = -1;

	t37 = (x177-((x178-x179)==x180));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x189 = INT32_MIN;
	uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 1U;
	int32_t t38 = INT32_MIN;

	t38 = (x189-((x190-x191)==x192));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x194 = INT64_MIN;
	uint32_t x196 = 6847U;
	static int32_t t39 = 330007;

	t39 = (x193-((x194-x195)==x196));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x197 = -915033306LL;
	static volatile int16_t x198 = 32;
	volatile int16_t x199 = INT16_MIN;
	int32_t x200 = -39;
	int64_t t40 = -1262234LL;

	t40 = (x197-((x198-x199)==x200));

	if (t40 != -915033306LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x201 = INT8_MAX;
	volatile int8_t x202 = -1;
	uint32_t x204 = 11051877U;
	static volatile int32_t t41 = 49794;

	t41 = (x201-((x202-x203)==x204));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x205 = 30U;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = 6255943390701LLU;
	int8_t x208 = INT8_MAX;

	t42 = (x205-((x206-x207)==x208));

	if (t42 != 30) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 0U;
	uint64_t x210 = UINT64_MAX;
	uint32_t x211 = 7138U;
	int8_t x212 = INT8_MIN;

	t43 = (x209-((x210-x211)==x212));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x213 = -1;
	volatile int32_t x214 = -303584708;
	uint32_t x215 = 4U;
	static uint8_t x216 = UINT8_MAX;
	int32_t t44 = 0;

	t44 = (x213-((x214-x215)==x216));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile int32_t x218 = -1;
	uint64_t x220 = UINT64_MAX;
	int64_t t45 = INT64_MIN;

	t45 = (x217-((x218-x219)==x220));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	int16_t x223 = -32;
	uint16_t x224 = 9U;
	volatile int32_t t46 = 90588;

	t46 = (x221-((x222-x223)==x224));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x231 = 1U;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t47 = -81;

	t47 = (x229-((x230-x231)==x232));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 1083U;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t t48 = 0;

	t48 = (x233-((x234-x235)==x236));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x238 = UINT64_MAX;
	volatile uint16_t x239 = 49U;
	uint64_t x240 = 457880026593LLU;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x237-((x238-x239)==x240));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x241 = UINT8_MAX;
	uint64_t x242 = 104384LLU;
	uint8_t x243 = 2U;
	int32_t t50 = 0;

	t50 = (x241-((x242-x243)==x244));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	static volatile int32_t t51 = 62045;

	t51 = (x245-((x246-x247)==x248));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	static int64_t t52 = -8168339114LL;

	t52 = (x249-((x250-x251)==x252));

	if (t52 != -326028469318LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = -1;
	uint16_t x254 = 59U;
	uint16_t x255 = UINT16_MAX;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t53 = 73052;

	t53 = (x253-((x254-x255)==x256));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = 41535083LL;
	static int64_t x258 = -112837133637LL;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = -1LL;
	static volatile int64_t t54 = -2153332404548298LL;

	t54 = (x257-((x258-x259)==x260));

	if (t54 != 41535083LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = UINT64_MAX;
	volatile uint8_t x263 = 30U;
	static int16_t x264 = INT16_MIN;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = (x261-((x262-x263)==x264));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x265 = -1;
	static int8_t x266 = -1;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t56 = 78;

	t56 = (x265-((x266-x267)==x268));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = 123836130LLU;
	uint32_t x270 = 318U;
	uint64_t t57 = 181314570LLU;

	t57 = (x269-((x270-x271)==x272));

	if (t57 != 123836130LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x275 = 3U;
	int8_t x276 = 0;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x273-((x274-x275)==x276));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x277 = 32;
	int16_t x278 = INT16_MAX;
	int16_t x279 = -2890;
	int32_t x280 = 125854324;

	t59 = (x277-((x278-x279)==x280));

	if (t59 != 32) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x281 = INT8_MIN;
	static int8_t x282 = INT8_MAX;
	volatile int8_t x283 = 48;
	int64_t x284 = -1LL;
	int32_t t60 = 2;

	t60 = (x281-((x282-x283)==x284));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x286 = -1;
	int32_t x287 = -1;
	volatile uint8_t x288 = UINT8_MAX;
	volatile int32_t t61 = -189008;

	t61 = (x285-((x286-x287)==x288));

	if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 1580U;
	int8_t x290 = -47;
	int16_t x291 = INT16_MAX;
	uint32_t t62 = 64937399U;

	t62 = (x289-((x290-x291)==x292));

	if (t62 != 1580U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MAX;
	int64_t x296 = 1LL;
	int32_t t63 = INT32_MIN;

	t63 = (x293-((x294-x295)==x296));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x297 = 40U;
	int64_t x298 = -1LL;
	int64_t x299 = -1LL;

	t64 = (x297-((x298-x299)==x300));

	if (t64 != 40) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = UINT64_MAX;
	volatile uint64_t x303 = 1870626128032296164LLU;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x301-((x302-x303)==x304));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	static int32_t x308 = -314467;

	t66 = (x305-((x306-x307)==x308));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x309 = 4U;
	static uint64_t x310 = 19828LLU;
	static volatile int64_t x311 = INT64_MIN;
	uint64_t x312 = UINT64_MAX;
	static int32_t t67 = -3;

	t67 = (x309-((x310-x311)==x312));

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = -1LL;
	uint64_t x316 = 194737LLU;
	volatile int64_t t68 = 26066829998LL;

	t68 = (x313-((x314-x315)==x316));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = 1;
	uint32_t x323 = UINT32_MAX;
	static int64_t x324 = INT64_MAX;
	static volatile int32_t t69 = 21;

	t69 = (x321-((x322-x323)==x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = -1;
	int32_t x327 = -30442;
	int8_t x328 = INT8_MIN;

	t70 = (x325-((x326-x327)==x328));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MIN;
	static int64_t x330 = INT64_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile int32_t t71 = INT32_MIN;

	t71 = (x329-((x330-x331)==x332));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x333 = 11;
	volatile int8_t x334 = INT8_MIN;
	int32_t x335 = 3661236;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t72 = -24;

	t72 = (x333-((x334-x335)==x336));

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x337 = 23U;
	volatile int32_t x338 = INT32_MAX;
	static int64_t x339 = 834833912LL;
	int8_t x340 = INT8_MAX;
	int32_t t73 = -444;

	t73 = (x337-((x338-x339)==x340));

	if (t73 != 23) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = 35327LL;
	uint8_t x344 = 0U;

	t74 = (x341-((x342-x343)==x344));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -1;
	static uint16_t x350 = 123U;
	volatile int16_t x351 = -95;
	int8_t x352 = INT8_MIN;

	t75 = (x349-((x350-x351)==x352));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = 10U;
	int8_t x354 = -1;
	int32_t x355 = INT32_MIN;
	volatile int32_t t76 = -560;

	t76 = (x353-((x354-x355)==x356));

	if (t76 != 10) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x359 = -1LL;
	volatile int16_t x360 = INT16_MIN;
	static volatile uint64_t t77 = 4231807180344945LLU;

	t77 = (x357-((x358-x359)==x360));

	if (t77 != 377530050228LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x362 = 3U;
	static uint8_t x363 = 1U;
	volatile uint16_t x364 = 1201U;
	static volatile int32_t t78 = INT32_MIN;

	t78 = (x361-((x362-x363)==x364));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = 7U;
	int16_t x368 = INT16_MIN;
	volatile uint64_t t79 = 83LLU;

	t79 = (x365-((x366-x367)==x368));

	if (t79 != 421435LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 18U;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t80 = 31;

	t80 = (x369-((x370-x371)==x372));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = -573469233556739036LL;
	uint32_t x376 = UINT32_MAX;
	int32_t t81 = 58523539;

	t81 = (x373-((x374-x375)==x376));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x378 = 0;
	volatile int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (x377-((x378-x379)==x380));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	int8_t x383 = 7;
	int32_t x384 = -1;
	int32_t t83 = -33;

	t83 = (x381-((x382-x383)==x384));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x387 = 1;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t84 = -253274392;

	t84 = (x385-((x386-x387)==x388));

	if (t84 != 2469) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = 1048;
	int8_t x392 = -1;
	volatile int32_t t85 = 14;

	t85 = (x389-((x390-x391)==x392));

	if (t85 != -44689) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x394 = UINT32_MAX;
	static uint64_t x395 = 95560312519010251LLU;
	uint64_t x396 = 106548792LLU;
	int32_t t86 = -4;

	t86 = (x393-((x394-x395)==x396));

	if (t86 != 104) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x397 = 245U;
	uint8_t x398 = 42U;
	uint64_t x399 = 381LLU;
	volatile int64_t x400 = INT64_MAX;
	volatile int32_t t87 = -1;

	t87 = (x397-((x398-x399)==x400));

	if (t87 != 245) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x405 = -2561043610900065LL;
	uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MIN;
	int64_t t88 = -2904100503495228LL;

	t88 = (x405-((x406-x407)==x408));

	if (t88 != -2561043610900065LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -1;
	static uint64_t x410 = UINT64_MAX;
	int64_t x411 = -1416471576LL;
	static volatile int32_t t89 = -2846300;

	t89 = (x409-((x410-x411)==x412));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x413 = 5025569U;
	int32_t x414 = 88062137;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	static volatile uint32_t t90 = 1430U;

	t90 = (x413-((x414-x415)==x416));

	if (t90 != 5025569U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MIN;
	int64_t x418 = 63LL;
	uint32_t x419 = 57U;
	volatile int64_t x420 = INT64_MIN;
	volatile int32_t t91 = 89342023;

	t91 = (x417-((x418-x419)==x420));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = 8273U;
	int16_t x422 = -174;
	int8_t x424 = -3;
	int32_t t92 = -862;

	t92 = (x421-((x422-x423)==x424));

	if (t92 != 8273) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x425 = -350438572;
	static int16_t x426 = INT16_MAX;
	uint32_t x428 = 4904649U;

	t93 = (x425-((x426-x427)==x428));

	if (t93 != -350438572) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x429 = INT16_MIN;
	int64_t x430 = -1LL;
	volatile int8_t x431 = INT8_MAX;
	int32_t x432 = 471596;

	t94 = (x429-((x430-x431)==x432));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x433 = 13U;
	volatile uint8_t x434 = 42U;
	static int8_t x435 = -11;
	static int64_t x436 = -362LL;
	static volatile int32_t t95 = -24235;

	t95 = (x433-((x434-x435)==x436));

	if (t95 != 13) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x437 = UINT8_MAX;
	volatile int8_t x438 = -1;
	uint8_t x440 = 1U;
	static volatile int32_t t96 = -19;

	t96 = (x437-((x438-x439)==x440));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x443 = -1LL;
	int32_t x444 = -1;
	static volatile uint64_t t97 = 120571084235065LLU;

	t97 = (x441-((x442-x443)==x444));

	if (t97 != 194LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x445 = INT64_MIN;
	static int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MAX;
	static int64_t t98 = INT64_MIN;

	t98 = (x445-((x446-x447)==x448));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x449 = INT8_MIN;
	uint64_t x450 = UINT64_MAX;
	int32_t x451 = INT32_MIN;
	int32_t t99 = 0;

	t99 = (x449-((x450-x451)==x452));

	if (t99 != -128) { NG(); } else { ; }
	
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

