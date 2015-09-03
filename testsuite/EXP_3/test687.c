#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 7916841LLU;
int32_t x4 = INT32_MIN;
static int32_t x8 = INT32_MIN;
uint16_t x10 = 14710U;
int8_t x15 = 1;
volatile int16_t x17 = -8;
uint8_t x19 = UINT8_MAX;
static int8_t x26 = -1;
static volatile int64_t t5 = -268LL;
volatile int16_t x33 = INT16_MIN;
int64_t x37 = INT64_MIN;
static int8_t x38 = 1;
uint8_t x42 = 0U;
int64_t x49 = -122972079748634LL;
static int32_t x52 = -1;
int32_t x56 = 2760;
static int16_t x58 = -1;
int64_t x63 = INT64_MAX;
int64_t x70 = INT64_MIN;
volatile uint32_t x71 = 654460U;
int16_t x74 = INT16_MIN;
volatile int32_t t17 = 1642756;
static uint8_t x77 = UINT8_MAX;
volatile int32_t t18 = -292;
uint8_t x85 = UINT8_MAX;
volatile uint64_t t19 = 995535LLU;
static int16_t x91 = -1;
static uint64_t x101 = UINT64_MAX;
int16_t x108 = INT16_MIN;
volatile uint32_t t25 = 1941U;
static uint32_t x117 = 693895U;
int16_t x121 = -1;
int8_t x122 = 17;
static int32_t x128 = -1;
static volatile int64_t x130 = -1LL;
uint64_t x135 = UINT64_MAX;
int8_t x142 = -1;
int16_t x144 = INT16_MAX;
int16_t x146 = 198;
int8_t x169 = 2;
volatile uint32_t x172 = UINT32_MAX;
uint32_t x179 = 10470797U;
static volatile int64_t t41 = 0LL;
uint32_t x191 = 0U;
volatile uint32_t t43 = 39197369U;
uint64_t x194 = 148710029227191539LLU;
static uint64_t t44 = 183038336022LLU;
volatile int8_t x211 = INT8_MAX;
uint32_t x212 = 3U;
static int64_t t48 = 27216947LL;
int64_t t49 = -3411554588025LL;
static uint64_t x217 = 422570623LLU;
int64_t x218 = INT64_MIN;
volatile uint32_t t51 = 3U;
int32_t x233 = INT32_MIN;
static uint16_t x243 = 0U;
volatile int64_t t55 = 31146627LL;
int32_t x262 = INT32_MIN;
int16_t x263 = 7496;
volatile int8_t x267 = 8;
uint8_t x270 = 0U;
static int16_t x280 = 12914;
volatile int16_t x288 = -1;
static uint32_t x291 = 2031761654U;
uint16_t x300 = 14U;
int64_t x302 = -1LL;
static int16_t x310 = -1;
int8_t x319 = 51;
uint16_t x326 = UINT16_MAX;
volatile int32_t t72 = -337104623;
int32_t x329 = -1;
int64_t x332 = INT64_MAX;
uint8_t x334 = 0U;
int8_t x339 = INT8_MAX;
static int16_t x342 = INT16_MIN;
int16_t x351 = 846;
static volatile uint16_t x356 = UINT16_MAX;
volatile int64_t x363 = 6771LL;
static int8_t x375 = 4;
volatile uint32_t t82 = 944284U;
static volatile uint16_t x385 = 25426U;
static int16_t x388 = INT16_MAX;
volatile int16_t x390 = 0;
int64_t x391 = -999351513LL;
int64_t t85 = -59LL;
static int16_t x395 = INT16_MIN;
int16_t x401 = INT16_MIN;
int16_t x415 = INT16_MIN;
volatile uint8_t x421 = 125U;
uint8_t x422 = 10U;
volatile int32_t x424 = -408;
int8_t x437 = INT8_MIN;
int64_t x438 = -1LL;
int32_t x446 = -1;
int64_t x450 = -1LL;
int16_t x463 = INT16_MAX;


void f0(void) {
	static uint32_t x1 = 98863U;
	static uint32_t x2 = UINT32_MAX;
	uint64_t t0 = 33763LLU;

	t0 = ((x1+x2)&(x3%x4));

	if (t0 != 32808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 21U;
	volatile int16_t x6 = INT16_MAX;
	uint64_t x7 = UINT64_MAX;
	static volatile uint64_t t1 = 508920332546454LLU;

	t1 = ((x5+x6)&(x7%x8));

	if (t1 != 32788LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	static int16_t x11 = INT16_MIN;
	int32_t x12 = -98;
	static int64_t t2 = -3942735LL;

	t2 = ((x9+x10)&(x11%x12));

	if (t2 != 14676LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 7;
	static uint32_t x14 = 3415742U;
	uint16_t x16 = UINT16_MAX;
	static uint32_t t3 = 263629900U;

	t3 = ((x13+x14)&(x15%x16));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -4;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -273539150;

	t4 = ((x17+x18)&(x19%x20));

	if (t4 != 116) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -9925;
	int32_t x27 = INT32_MAX;
	volatile int64_t x28 = -1LL;

	t5 = ((x25+x26)&(x27%x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x29 = UINT32_MAX;
	int32_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int32_t x32 = -1;
	uint32_t t6 = 258301565U;

	t6 = ((x29+x30)&(x31%x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x34 = 213904U;
	uint16_t x35 = 15767U;
	int32_t x36 = INT32_MIN;
	uint32_t t7 = 97U;

	t7 = ((x33+x34)&(x35%x36));

	if (t7 != 400U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x39 = 1841976253U;
	int16_t x40 = INT16_MIN;
	int64_t t8 = -1LL;

	t8 = ((x37+x38)&(x39%x40));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint64_t x43 = 208400377039209LLU;
	volatile int32_t x44 = INT32_MIN;
	static volatile uint64_t t9 = 2LLU;

	t9 = ((x41+x42)&(x43%x44));

	if (t9 != 208400377039209LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 0;
	volatile int64_t x46 = INT64_MAX;
	uint32_t x47 = 480780U;
	int16_t x48 = 11;
	int64_t t10 = 50456914861878438LL;

	t10 = ((x45+x46)&(x47%x48));

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x50 = 11658U;
	uint64_t x51 = 12187204134LLU;
	uint64_t t11 = 1651604431661686468LLU;

	t11 = ((x49+x50)&(x51%x52));

	if (t11 != 1414050336LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = -1;
	int32_t t12 = -11870;

	t12 = ((x53+x54)&(x55%x56));

	if (t12 != -129) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	int64_t x59 = INT64_MIN;
	static int8_t x60 = 21;
	int64_t t13 = -217020708653728181LL;

	t13 = ((x57+x58)&(x59%x60));

	if (t13 != -8LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 99893420U;
	int16_t x62 = INT16_MIN;
	uint16_t x64 = 793U;
	int64_t t14 = -4LL;

	t14 = ((x61+x62)&(x63%x64));

	if (t14 != 4LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	static volatile uint32_t x66 = 922497235U;
	uint64_t x67 = 7LLU;
	int16_t x68 = INT16_MIN;
	static volatile uint64_t t15 = 467500358841043257LLU;

	t15 = ((x65+x66)&(x67%x68));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 625;
	volatile int16_t x72 = -240;
	volatile int64_t t16 = 31757265861509LL;

	t16 = ((x69+x70)&(x71%x72));

	if (t16 != 112LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 2U;

	t17 = ((x73+x74)&(x75%x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x78 = INT8_MAX;
	uint16_t x79 = 19U;
	int16_t x80 = INT16_MIN;

	t18 = ((x77+x78)&(x79%x80));

	if (t18 != 18) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = -3085;
	static uint64_t x87 = 2135137LLU;
	volatile uint8_t x88 = 48U;

	t19 = ((x85+x86)&(x87%x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 15U;
	int64_t x90 = -1LL;
	int16_t x92 = INT16_MIN;
	int64_t t20 = 0LL;

	t20 = ((x89+x90)&(x91%x92));

	if (t20 != 14LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	static int64_t x94 = 151223372826LL;
	volatile int32_t x95 = -1401;
	int8_t x96 = -1;
	int64_t t21 = 1463487818393294LL;

	t21 = ((x93+x94)&(x95%x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x97 = UINT16_MAX;
	static volatile int32_t x98 = INT32_MIN;
	int32_t x99 = 39;
	int64_t x100 = INT64_MIN;
	static int64_t t22 = -271LL;

	t22 = ((x97+x98)&(x99%x100));

	if (t22 != 39LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = -1;
	volatile int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile uint64_t t23 = 8927406998806193LLU;

	t23 = ((x101+x102)&(x103%x104));

	if (t23 != 126LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = 1;
	int16_t x106 = INT16_MAX;
	int64_t x107 = INT64_MIN;
	volatile int64_t t24 = 303LL;

	t24 = ((x105+x106)&(x107%x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 0U;
	int8_t x110 = INT8_MAX;
	static int16_t x111 = -39;
	int16_t x112 = INT16_MIN;

	t25 = ((x109+x110)&(x111%x112));

	if (t25 != 89U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	int32_t x114 = INT32_MIN;
	static uint64_t x115 = 65924151758771237LLU;
	uint16_t x116 = UINT16_MAX;
	volatile uint64_t t26 = 541697184875LLU;

	t26 = ((x113+x114)&(x115%x116));

	if (t26 != 14957LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 11U;
	static int8_t x120 = INT8_MIN;
	volatile uint32_t t27 = 34871U;

	t27 = ((x117+x118)&(x119%x120));

	if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x123 = 578U;
	uint16_t x124 = 2762U;
	volatile int32_t t28 = -219255863;

	t28 = ((x121+x122)&(x123%x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	uint64_t x126 = 3377891298971LLU;
	int32_t x127 = -1;
	uint64_t t29 = 6732642285484LLU;

	t29 = ((x125+x126)&(x127%x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x131 = -1;
	uint32_t x132 = 248597659U;
	volatile int64_t t30 = 0LL;

	t30 = ((x129+x130)&(x131%x132));

	if (t30 != 180LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = 5;
	uint64_t x136 = 6804130958088723355LLU;
	volatile uint64_t t31 = 86309LLU;

	t31 = ((x133+x134)&(x135%x136));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x137 = UINT32_MAX;
	uint8_t x138 = 4U;
	uint32_t x139 = 358271617U;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t32 = 4408U;

	t32 = ((x137+x138)&(x139%x140));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	volatile int64_t t33 = -4LL;

	t33 = ((x141+x142)&(x143%x144));

	if (t33 != 248LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = 130391354U;
	volatile uint32_t t34 = 1824508168U;

	t34 = ((x145+x146)&(x147%x148));

	if (t34 != 64U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = 238;
	int16_t x154 = -3;
	volatile int16_t x155 = INT16_MIN;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t35 = 4197663LLU;

	t35 = ((x153+x154)&(x155%x156));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = 1;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MAX;
	int64_t x160 = 123313LL;
	int64_t t36 = -486401279LL;

	t36 = ((x157+x158)&(x159%x160));

	if (t36 != 65536LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = UINT64_MAX;
	static int64_t x162 = -1LL;
	int64_t x163 = 91918LL;
	static uint8_t x164 = UINT8_MAX;
	static uint64_t t37 = 220296707LLU;

	t37 = ((x161+x162)&(x163%x164));

	if (t37 != 118LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	volatile uint16_t x166 = 618U;
	static int32_t x167 = INT32_MIN;
	uint32_t x168 = 1801400451U;
	static uint32_t t38 = 243U;

	t38 = ((x165+x166)&(x167%x168));

	if (t38 != 360U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x170 = 18322848776413398LLU;
	int8_t x171 = INT8_MIN;
	uint64_t t39 = 1358057939317LLU;

	t39 = ((x169+x170)&(x171%x172));

	if (t39 != 2895601792LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x177 = 8507U;
	int64_t x178 = -5831LL;
	static int16_t x180 = 206;
	int64_t t40 = -452582636868LL;

	t40 = ((x177+x178)&(x179%x180));

	if (t40 != 20LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 3;
	uint32_t x182 = 1696U;
	int64_t x183 = INT64_MIN;
	static int16_t x184 = INT16_MAX;

	t41 = ((x181+x182)&(x183%x184));

	if (t41 != 1696LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = 6802;
	uint16_t x186 = 2416U;
	static int16_t x187 = INT16_MIN;
	int8_t x188 = 3;
	int32_t t42 = 31048;

	t42 = ((x185+x186)&(x187%x188));

	if (t42 != 9218) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = 12847U;
	int16_t x190 = INT16_MIN;
	int8_t x192 = -1;

	t43 = ((x189+x190)&(x191%x192));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x193 = UINT32_MAX;
	int32_t x195 = INT32_MIN;
	volatile uint32_t x196 = UINT32_MAX;

	t44 = ((x193+x194)&(x195%x196));

	if (t44 != 2147483648LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -115872531165LL;
	volatile uint64_t x198 = UINT64_MAX;
	volatile int32_t x199 = 0;
	uint64_t x200 = 3928LLU;
	volatile uint64_t t45 = 282239070180588631LLU;

	t45 = ((x197+x198)&(x199%x200));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x201 = 207442587LLU;
	volatile int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MAX;
	volatile uint64_t t46 = 814824831760LLU;

	t46 = ((x201+x202)&(x203%x204));

	if (t46 != 2354926232LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x205 = 223941382237507449LLU;
	uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = -1;
	int16_t x208 = -1;
	volatile uint64_t t47 = 506764570183181LLU;

	t47 = ((x205+x206)&(x207%x208));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = 6128402LL;
	int16_t x210 = INT16_MIN;

	t48 = ((x209+x210)&(x211%x212));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MAX;
	int8_t x214 = INT8_MAX;
	volatile uint8_t x215 = UINT8_MAX;
	int64_t x216 = -55567378LL;

	t49 = ((x213+x214)&(x215%x216));

	if (t49 != 126LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x219 = 67;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t50 = 8588984834777LLU;

	t50 = ((x217+x218)&(x219%x220));

	if (t50 != 67LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	uint32_t x224 = UINT32_MAX;

	t51 = ((x221+x222)&(x223%x224));

	if (t51 != 32512U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x229 = 0;
	static int32_t x230 = INT32_MIN;
	uint64_t x231 = 1411LLU;
	int32_t x232 = INT32_MIN;
	static uint64_t t52 = 18LLU;

	t52 = ((x229+x230)&(x231%x232));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x234 = 207572LLU;
	uint32_t x235 = 3152U;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t53 = 1443LLU;

	t53 = ((x233+x234)&(x235%x236));

	if (t53 != 2128LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x237 = 832657782LLU;
	static uint8_t x238 = 3U;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = 1261U;
	uint64_t t54 = 2907520801037935336LLU;

	t54 = ((x237+x238)&(x239%x240));

	if (t54 != 8LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = -1;
	uint16_t x242 = 2280U;
	static volatile int64_t x244 = INT64_MIN;

	t55 = ((x241+x242)&(x243%x244));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = 27099957LL;
	uint32_t x246 = 754058359U;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -1;
	int64_t t56 = 223LL;

	t56 = ((x245+x246)&(x247%x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x253 = INT32_MIN;
	volatile int64_t x254 = -2320520268521891153LL;
	int32_t x255 = INT32_MIN;
	static int16_t x256 = INT16_MIN;
	int64_t t57 = 8917405816988LL;

	t57 = ((x253+x254)&(x255%x256));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = UINT8_MAX;
	static volatile int8_t x264 = 1;
	int32_t t58 = -1;

	t58 = ((x261+x262)&(x263%x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x265 = INT32_MIN;
	uint64_t x266 = 1106811LLU;
	int64_t x268 = -1LL;
	volatile uint64_t t59 = 151309036730203LLU;

	t59 = ((x265+x266)&(x267%x268));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = UINT32_MAX;
	uint16_t x271 = UINT16_MAX;
	static int32_t x272 = -1315414;
	volatile uint32_t t60 = 31400U;

	t60 = ((x269+x270)&(x271%x272));

	if (t60 != 65535U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = INT32_MAX;
	static int64_t x274 = -1LL;
	static int32_t x275 = INT32_MIN;
	int16_t x276 = -1;
	static int64_t t61 = 16166338188747837LL;

	t61 = ((x273+x274)&(x275%x276));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	volatile uint64_t t62 = 1995852852614397036LLU;

	t62 = ((x277+x278)&(x279%x280));

	if (t62 != 18446744071562061028LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = 355116656338150LLU;
	uint8_t x282 = 0U;
	int16_t x283 = 5;
	int16_t x284 = INT16_MIN;
	uint64_t t63 = 1482848934406LLU;

	t63 = ((x281+x282)&(x283%x284));

	if (t63 != 4LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MAX;
	volatile int8_t x287 = INT8_MAX;
	int32_t t64 = -116;

	t64 = ((x285+x286)&(x287%x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x289 = 1;
	volatile int8_t x290 = INT8_MAX;
	uint8_t x292 = 6U;
	volatile uint32_t t65 = 399716467U;

	t65 = ((x289+x290)&(x291%x292));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x297 = 0;
	uint16_t x298 = 6130U;
	volatile uint32_t x299 = UINT32_MAX;
	uint32_t t66 = 8382U;

	t66 = ((x297+x298)&(x299%x300));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x301 = 15U;
	volatile int16_t x303 = -2;
	static int64_t x304 = INT64_MAX;
	int64_t t67 = -1257212LL;

	t67 = ((x301+x302)&(x303%x304));

	if (t67 != 14LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = 26U;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = 1177445101U;
	uint32_t t68 = 615587712U;

	t68 = ((x309+x310)&(x311%x312));

	if (t68 != 16U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -6418;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = UINT8_MAX;
	int32_t t69 = 0;

	t69 = ((x313+x314)&(x315%x316));

	if (t69 != -6656) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MAX;
	int64_t x318 = -2876304698208744LL;
	int32_t x320 = INT32_MIN;
	volatile int64_t t70 = -3158335767LL;

	t70 = ((x317+x318)&(x319%x320));

	if (t70 != 19LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -1;
	int64_t x322 = -70LL;
	int8_t x323 = 0;
	volatile int8_t x324 = -1;
	int64_t t71 = 2LL;

	t71 = ((x321+x322)&(x323%x324));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	volatile uint8_t x327 = 45U;
	static int8_t x328 = -42;

	t72 = ((x325+x326)&(x327%x328));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x330 = 5287058699621LL;
	int8_t x331 = -1;
	int64_t t73 = -228590LL;

	t73 = ((x329+x330)&(x331%x332));

	if (t73 != 5287058699620LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = UINT32_MAX;
	uint32_t x335 = 1988952254U;
	volatile int8_t x336 = INT8_MIN;
	volatile uint32_t t74 = 1687U;

	t74 = ((x333+x334)&(x335%x336));

	if (t74 != 1988952254U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x337 = UINT32_MAX;
	uint32_t x338 = UINT32_MAX;
	int16_t x340 = -2334;
	uint32_t t75 = 175560144U;

	t75 = ((x337+x338)&(x339%x340));

	if (t75 != 126U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = -1;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 62U;
	int32_t t76 = 8;

	t76 = ((x341+x342)&(x343%x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x349 = 2024185076U;
	int16_t x350 = -1;
	int8_t x352 = 61;
	volatile uint32_t t77 = 33U;

	t77 = ((x349+x350)&(x351%x352));

	if (t77 != 49U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x353 = 557208;
	static uint16_t x354 = 31U;
	static volatile uint32_t x355 = 6U;
	volatile uint32_t t78 = 2714U;

	t78 = ((x353+x354)&(x355%x356));

	if (t78 != 6U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = -1;
	uint32_t x362 = 1U;
	int8_t x364 = -1;
	int64_t t79 = 30276LL;

	t79 = ((x361+x362)&(x363%x364));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MAX;
	volatile int64_t x367 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t80 = 4818147991LLU;

	t80 = ((x365+x366)&(x367%x368));

	if (t80 != 126LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 1LLU;
	int64_t x374 = INT64_MIN;
	int16_t x376 = INT16_MAX;
	static volatile uint64_t t81 = 1104LLU;

	t81 = ((x373+x374)&(x375%x376));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x377 = 0;
	int8_t x378 = INT8_MIN;
	uint32_t x379 = 89979062U;
	volatile int8_t x380 = 45;

	t82 = ((x377+x378)&(x379%x380));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = 5158U;
	int16_t x382 = INT16_MIN;
	volatile int32_t x383 = INT32_MAX;
	static int32_t x384 = INT32_MIN;
	int32_t t83 = -22;

	t83 = ((x381+x382)&(x383%x384));

	if (t83 != 2147456038) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x386 = 299992713260727696LLU;
	int8_t x387 = INT8_MIN;
	volatile uint64_t t84 = 2177505767497823268LLU;

	t84 = ((x385+x386)&(x387%x388));

	if (t84 != 299992713260753024LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = 1U;
	int8_t x392 = -1;

	t85 = ((x389+x390)&(x391%x392));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = UINT64_MAX;
	uint16_t x394 = UINT16_MAX;
	int32_t x396 = 3497302;
	uint64_t t86 = 16449815862LLU;

	t86 = ((x393+x394)&(x395%x396));

	if (t86 != 32768LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = -1;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = -511;
	volatile int32_t t87 = -1190;

	t87 = ((x397+x398)&(x399%x400));

	if (t87 != -192) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 5U;
	static int32_t x404 = INT32_MAX;
	static volatile uint32_t t88 = 148012666U;

	t88 = ((x401+x402)&(x403%x404));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x405 = 63U;
	static uint16_t x406 = 2574U;
	static uint32_t x407 = 71344122U;
	int16_t x408 = -1;
	volatile uint32_t t89 = 378801U;

	t89 = ((x405+x406)&(x407%x408));

	if (t89 != 2632U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 253329300194LLU;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = UINT64_MAX;
	uint32_t x412 = UINT32_MAX;
	static uint64_t t90 = 9922263199515323LLU;

	t90 = ((x409+x410)&(x411%x412));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = UINT32_MAX;
	static int32_t x414 = INT32_MAX;
	int8_t x416 = INT8_MAX;
	volatile uint32_t t91 = 13U;

	t91 = ((x413+x414)&(x415%x416));

	if (t91 != 2147483646U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x423 = 3;
	static volatile int32_t t92 = -99434;

	t92 = ((x421+x422)&(x423%x424));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = -1;
	volatile int16_t x426 = 1;
	int8_t x427 = INT8_MIN;
	uint16_t x428 = 1U;
	volatile int32_t t93 = -95;

	t93 = ((x425+x426)&(x427%x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x439 = INT16_MIN;
	volatile int64_t x440 = -11LL;
	int64_t t94 = -1997771104643475LL;

	t94 = ((x437+x438)&(x439%x440));

	if (t94 != -138LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MAX;
	int32_t x447 = INT32_MIN;
	volatile int64_t x448 = 2947209386LL;
	int64_t t95 = 0LL;

	t95 = ((x445+x446)&(x447%x448));

	if (t95 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = -1;
	volatile uint16_t x451 = 9U;
	int16_t x452 = -10;
	volatile int64_t t96 = -33155576043818128LL;

	t96 = ((x449+x450)&(x451%x452));

	if (t96 != 8LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x453 = -1;
	volatile int8_t x454 = INT8_MIN;
	volatile uint32_t x455 = 375144582U;
	volatile int8_t x456 = INT8_MIN;
	uint32_t t97 = 2881U;

	t97 = ((x453+x454)&(x455%x456));

	if (t97 != 375144454U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = 15079197;
	uint16_t x458 = 1U;
	int8_t x459 = INT8_MIN;
	int32_t x460 = INT32_MIN;
	volatile int32_t t98 = -29;

	t98 = ((x457+x458)&(x459%x460));

	if (t98 != 15079168) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x461 = 14U;
	int64_t x462 = 67LL;
	static int64_t x464 = INT64_MAX;
	volatile int64_t t99 = 56614981279293207LL;

	t99 = ((x461+x462)&(x463%x464));

	if (t99 != 81LL) { NG(); } else { ; }
	
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

