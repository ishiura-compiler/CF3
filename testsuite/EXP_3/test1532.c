#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 26006225424763LLU;
volatile int32_t t4 = 0;
uint8_t x27 = 16U;
int64_t x37 = INT64_MIN;
int32_t x38 = INT32_MAX;
int64_t t9 = -10851574844LL;
int32_t x43 = INT32_MIN;
uint8_t x63 = UINT8_MAX;
uint16_t x68 = UINT16_MAX;
static uint16_t x77 = 222U;
int8_t x78 = INT8_MIN;
uint8_t x83 = 1U;
volatile int32_t t20 = -511520100;
uint64_t x98 = 2036458961LLU;
static uint16_t x100 = UINT16_MAX;
uint16_t x102 = 0U;
uint32_t x104 = UINT32_MAX;
int16_t x105 = 0;
uint32_t x108 = 5990U;
int8_t x112 = INT8_MAX;
uint64_t t27 = 43LLU;
volatile uint64_t t28 = 12182478799377299LLU;
volatile int8_t x117 = 3;
volatile int8_t x118 = INT8_MIN;
int32_t x119 = -1;
int64_t x120 = INT64_MIN;
volatile int32_t t29 = -1;
uint64_t x126 = 374753LLU;
int32_t t32 = -5874;
volatile int8_t x135 = 8;
int64_t t35 = -4079544610LL;
uint64_t x145 = 1805357451LLU;
volatile uint32_t x163 = 248714983U;
int8_t x168 = 0;
int16_t x178 = 105;
int16_t x187 = INT16_MAX;
volatile uint64_t x197 = 1LLU;
static int64_t x206 = INT64_MIN;
volatile int64_t t47 = -829792510671413LL;
uint8_t x215 = 6U;
volatile uint64_t t49 = 116LLU;
static int8_t x221 = INT8_MIN;
int64_t x222 = -1243253LL;
uint8_t x223 = 3U;
static uint8_t x225 = UINT8_MAX;
int8_t x227 = INT8_MIN;
volatile int32_t t51 = 170532033;
int64_t x234 = -4903540270LL;
int16_t x238 = 3;
uint64_t x239 = UINT64_MAX;
int16_t x245 = INT16_MIN;
int32_t t56 = 107115;
int16_t x258 = -15037;
uint32_t x259 = 497560U;
volatile int8_t x260 = INT8_MIN;
volatile int32_t t59 = 0;
volatile int64_t x262 = INT64_MAX;
static volatile int32_t x263 = -9552971;
static volatile int64_t t61 = 18917053524211705LL;
uint32_t x276 = UINT32_MAX;
static int32_t x282 = INT32_MAX;
volatile uint32_t x291 = 962169U;
int8_t x295 = -1;
volatile uint64_t x296 = 3LLU;
uint8_t x298 = UINT8_MAX;
static int32_t x312 = INT32_MIN;
int8_t x313 = 0;
volatile int8_t x314 = INT8_MAX;
static volatile uint64_t x316 = 10LLU;
static int8_t x321 = INT8_MIN;
static uint64_t x330 = UINT64_MAX;
static int64_t x331 = INT64_MAX;
static uint64_t x339 = 85LLU;
int32_t x341 = -1;
int16_t x347 = INT16_MIN;
int8_t x354 = INT8_MAX;
int16_t x357 = INT16_MIN;
static int8_t x360 = INT8_MIN;
int8_t x361 = INT8_MIN;
int64_t x364 = -1LL;
int32_t x372 = -1;
int8_t x374 = -1;
static uint8_t x384 = 24U;
int16_t x397 = INT16_MIN;
volatile int64_t x399 = INT64_MIN;
static uint32_t x407 = UINT32_MAX;
int16_t x415 = INT16_MIN;
int8_t x416 = 0;
static volatile int64_t t93 = -55540897306957LL;
uint16_t x421 = 3U;
static volatile uint8_t x423 = 4U;
static uint8_t x424 = UINT8_MAX;
volatile int64_t x425 = -1LL;
int32_t t98 = 322903670;
static volatile int64_t t99 = -1256186999240668LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = 152;
	static uint64_t x3 = UINT64_MAX;
	static int32_t x4 = -1;
	volatile int32_t t0 = -84227324;

	t0 = ((x1+x2)&(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 20144U;
	uint32_t x6 = 98632U;
	int8_t x7 = 24;
	volatile int64_t x8 = INT64_MAX;
	static volatile uint32_t t1 = 572789278U;

	t1 = ((x5+x6)&(x7<=x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = INT8_MAX;
	int16_t x11 = -857;
	static int8_t x12 = -1;
	uint64_t t2 = 16066811420272111LLU;

	t2 = ((x9+x10)&(x11<=x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 15;
	volatile int64_t x14 = INT64_MIN;
	int32_t x15 = 12044387;
	int16_t x16 = 1;
	int64_t t3 = -86583336625080748LL;

	t3 = ((x13+x14)&(x15<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int16_t x18 = INT16_MIN;
	int64_t x19 = 1LL;
	uint16_t x20 = 539U;

	t4 = ((x17+x18)&(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 16122U;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 6U;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -124985196;

	t5 = ((x21+x22)&(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint16_t x26 = UINT16_MAX;
	volatile int16_t x28 = INT16_MIN;
	volatile uint64_t t6 = 116616214LLU;

	t6 = ((x25+x26)&(x27<=x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 205;
	int32_t x30 = -1;
	int32_t x31 = INT32_MIN;
	volatile int32_t x32 = INT32_MAX;
	int32_t t7 = 212483229;

	t7 = ((x29+x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 34808682U;
	uint64_t x34 = 41465642158LLU;
	int8_t x35 = -1;
	int8_t x36 = -3;
	uint64_t t8 = 0LLU;

	t8 = ((x33+x34)&(x35<=x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x39 = -340020564LL;
	int16_t x40 = -30;

	t9 = ((x37+x38)&(x39<=x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = -875;
	volatile uint8_t x42 = 1U;
	int64_t x44 = 96LL;
	int32_t t10 = 61;

	t10 = ((x41+x42)&(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int16_t x46 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 10115U;
	int32_t t11 = -2;

	t11 = ((x45+x46)&(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	uint64_t x50 = 953900766127LLU;
	volatile uint16_t x51 = 3773U;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 609120LLU;

	t12 = ((x49+x50)&(x51<=x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int32_t x54 = INT32_MAX;
	int32_t x55 = -316348;
	uint16_t x56 = 5277U;
	int64_t t13 = -50363066LL;

	t13 = ((x53+x54)&(x55<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int16_t x58 = 18;
	volatile int8_t x59 = -1;
	static int32_t x60 = -1;
	int32_t t14 = 49;

	t14 = ((x57+x58)&(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int64_t x62 = -62LL;
	int16_t x64 = -2;
	volatile int64_t t15 = -3791326011224198LL;

	t15 = ((x61+x62)&(x63<=x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -12982427LL;
	uint8_t x66 = UINT8_MAX;
	int64_t x67 = INT64_MIN;
	int64_t t16 = 392827731943LL;

	t16 = ((x65+x66)&(x67<=x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	volatile int32_t x70 = INT32_MIN;
	uint32_t x71 = 30155U;
	static uint16_t x72 = 198U;
	static uint32_t t17 = 1U;

	t17 = ((x69+x70)&(x71<=x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MAX;
	static volatile uint16_t x74 = 273U;
	static int16_t x75 = -1;
	int64_t x76 = INT64_MAX;
	static volatile int32_t t18 = 6685788;

	t18 = ((x73+x74)&(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t19 = -146;

	t19 = ((x77+x78)&(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	volatile int8_t x82 = INT8_MIN;
	int8_t x84 = -1;

	t20 = ((x81+x82)&(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 13;
	static int8_t x86 = -1;
	int8_t x87 = -1;
	static uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 115481449;

	t21 = ((x85+x86)&(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 6018159U;
	static volatile int16_t x90 = INT16_MIN;
	static volatile int8_t x91 = INT8_MIN;
	int8_t x92 = 0;
	uint32_t t22 = 98162692U;

	t22 = ((x89+x90)&(x91<=x92));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 12U;
	int64_t x94 = INT64_MIN;
	int32_t x95 = -1;
	static int64_t x96 = INT64_MAX;
	int64_t t23 = 19900791443LL;

	t23 = ((x93+x94)&(x95<=x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	int64_t x99 = INT64_MIN;
	static volatile uint64_t t24 = 29LLU;

	t24 = ((x97+x98)&(x99<=x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = -1;
	static volatile int8_t x103 = 1;
	volatile int32_t t25 = 25;

	t25 = ((x101+x102)&(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x106 = -123329903821311924LL;
	static int8_t x107 = INT8_MIN;
	int64_t t26 = 2037643839LL;

	t26 = ((x105+x106)&(x107<=x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 585459437393LLU;
	static int16_t x110 = -85;
	int16_t x111 = INT16_MIN;

	t27 = ((x109+x110)&(x111<=x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 10932759479LLU;
	int8_t x114 = -1;
	volatile uint32_t x115 = UINT32_MAX;
	volatile int32_t x116 = 29493933;

	t28 = ((x113+x114)&(x115<=x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {


	t29 = ((x117+x118)&(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = 911;
	uint16_t x122 = 2U;
	volatile int16_t x123 = INT16_MAX;
	static int8_t x124 = 0;
	int32_t t30 = -258582927;

	t30 = ((x121+x122)&(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int8_t x127 = 0;
	uint64_t x128 = 26LLU;
	static volatile uint64_t t31 = 84836LLU;

	t31 = ((x125+x126)&(x127<=x128));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	static int16_t x130 = INT16_MAX;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = 2U;

	t32 = ((x129+x130)&(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 93;
	int32_t x134 = INT32_MIN;
	uint32_t x136 = 976U;
	volatile int32_t t33 = 35497;

	t33 = ((x133+x134)&(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 0U;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = UINT32_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 1406;

	t34 = ((x137+x138)&(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	int16_t x142 = INT16_MIN;
	volatile int8_t x143 = 14;
	volatile uint16_t x144 = UINT16_MAX;

	t35 = ((x141+x142)&(x143<=x144));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -650;
	int32_t x147 = -12450;
	uint32_t x148 = 1U;
	volatile uint64_t t36 = 60790LLU;

	t36 = ((x145+x146)&(x147<=x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1989;
	static int32_t x150 = 883228696;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -26542756;

	t37 = ((x149+x150)&(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = 1316467900956646LLU;
	int8_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	uint64_t t38 = 57741LLU;

	t38 = ((x153+x154)&(x155<=x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = INT32_MIN;
	int64_t x162 = 2028347LL;
	uint8_t x164 = 112U;
	int64_t t39 = 135205LL;

	t39 = ((x161+x162)&(x163<=x164));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	static int64_t x167 = 1LL;
	volatile int64_t t40 = -19779711LL;

	t40 = ((x165+x166)&(x167<=x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = 158769848LLU;
	static int64_t x174 = INT64_MAX;
	static int32_t x175 = INT32_MIN;
	volatile int32_t x176 = 7922;
	volatile uint64_t t41 = 49653192362278LLU;

	t41 = ((x173+x174)&(x175<=x176));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -1;
	int8_t x179 = INT8_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t42 = -1568;

	t42 = ((x177+x178)&(x179<=x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x185 = UINT64_MAX;
	int32_t x186 = 83;
	int32_t x188 = -1;
	volatile uint64_t t43 = 4689711201863610LLU;

	t43 = ((x185+x186)&(x187<=x188));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MAX;
	uint8_t x192 = 0U;
	int64_t t44 = 95011570LL;

	t44 = ((x189+x190)&(x191<=x192));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x198 = 1;
	uint64_t x199 = 14LLU;
	static int8_t x200 = -60;
	volatile uint64_t t45 = 2LLU;

	t45 = ((x197+x198)&(x199<=x200));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 4558167309278LL;
	volatile int16_t x202 = INT16_MAX;
	int16_t x203 = INT16_MIN;
	static volatile int16_t x204 = INT16_MIN;
	int64_t t46 = 34545559642156LL;

	t46 = ((x201+x202)&(x203<=x204));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x205 = UINT16_MAX;
	volatile uint32_t x207 = 1U;
	int8_t x208 = -12;

	t47 = ((x205+x206)&(x207<=x208));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -1LL;
	uint32_t x214 = UINT32_MAX;
	int32_t x216 = INT32_MIN;
	static int64_t t48 = -7099147363084737LL;

	t48 = ((x213+x214)&(x215<=x216));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 3244358276268783LLU;
	int8_t x218 = -2;
	volatile uint8_t x219 = 85U;
	uint32_t x220 = 1486U;

	t49 = ((x217+x218)&(x219<=x220));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x224 = INT32_MIN;
	int64_t t50 = 62388403LL;

	t50 = ((x221+x222)&(x223<=x224));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x226 = -1;
	int64_t x228 = -1LL;

	t51 = ((x225+x226)&(x227<=x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	int64_t x232 = 308492474LL;
	volatile int32_t t52 = -789511;

	t52 = ((x229+x230)&(x231<=x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x233 = 25705774LLU;
	uint64_t x235 = 8808986141LLU;
	int16_t x236 = -1;
	uint64_t t53 = 6075472786156782834LLU;

	t53 = ((x233+x234)&(x235<=x236));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x237 = UINT32_MAX;
	int8_t x240 = INT8_MIN;
	volatile uint32_t t54 = 1135555258U;

	t54 = ((x237+x238)&(x239<=x240));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile int32_t x242 = -153971073;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t55 = 3107;

	t55 = ((x241+x242)&(x243<=x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x246 = INT16_MAX;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MIN;

	t56 = ((x245+x246)&(x247<=x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 2061445758LLU;
	int32_t x250 = -1;
	uint32_t x251 = 14391U;
	uint32_t x252 = 2U;
	static volatile uint64_t t57 = 496164221120LLU;

	t57 = ((x249+x250)&(x251<=x252));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = 8372LL;
	int16_t x254 = INT16_MAX;
	static int32_t x255 = INT32_MIN;
	volatile int32_t x256 = INT32_MIN;
	static volatile int64_t t58 = 77505762457944LL;

	t58 = ((x253+x254)&(x255<=x256));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = -254;

	t59 = ((x257+x258)&(x259<=x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = -960;
	uint64_t x264 = 23971957017LLU;
	int64_t t60 = 36525175747489LL;

	t60 = ((x261+x262)&(x263<=x264));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = 34178LL;
	int8_t x266 = INT8_MIN;
	static uint16_t x267 = 379U;
	int64_t x268 = INT64_MIN;

	t61 = ((x265+x266)&(x267<=x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MIN;
	uint16_t x270 = 7181U;
	static uint8_t x271 = 3U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t62 = -109228933;

	t62 = ((x269+x270)&(x271<=x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x273 = 193LL;
	static uint8_t x274 = 6U;
	int32_t x275 = 49826473;
	int64_t t63 = -23350LL;

	t63 = ((x273+x274)&(x275<=x276));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = 0;
	uint32_t x278 = 0U;
	volatile int8_t x279 = -29;
	int64_t x280 = -1LL;
	uint32_t t64 = 304851648U;

	t64 = ((x277+x278)&(x279<=x280));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	int32_t x283 = INT32_MAX;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t65 = -1205;

	t65 = ((x281+x282)&(x283<=x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	uint64_t x290 = 880652LLU;
	int16_t x292 = -1;
	uint64_t t66 = 4LLU;

	t66 = ((x289+x290)&(x291<=x292));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x294 = UINT64_MAX;
	volatile uint64_t t67 = 1027010324190718LLU;

	t67 = ((x293+x294)&(x295<=x296));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = INT16_MIN;
	int64_t x299 = 206751LL;
	uint16_t x300 = 432U;
	int32_t t68 = 8269235;

	t68 = ((x297+x298)&(x299<=x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x309 = -1;
	int64_t x310 = INT64_MAX;
	int64_t x311 = -1LL;
	int64_t t69 = 6897407150LL;

	t69 = ((x309+x310)&(x311<=x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x315 = 38U;
	int32_t t70 = -5351;

	t70 = ((x313+x314)&(x315<=x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x317 = UINT16_MAX;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	int8_t x320 = 0;
	volatile int32_t t71 = -215656;

	t71 = ((x317+x318)&(x319<=x320));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x322 = 117U;
	int64_t x323 = 10115369815082LL;
	uint64_t x324 = UINT64_MAX;
	uint32_t t72 = 28298566U;

	t72 = ((x321+x322)&(x323<=x324));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x325 = -131120875;
	volatile int16_t x326 = -1;
	int16_t x327 = -29;
	int64_t x328 = INT64_MIN;
	int32_t t73 = 3321067;

	t73 = ((x325+x326)&(x327<=x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x329 = -7;
	uint8_t x332 = 0U;
	volatile uint64_t t74 = 3726208925276666LLU;

	t74 = ((x329+x330)&(x331<=x332));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = 45;
	int8_t x338 = 21;
	volatile uint64_t x340 = 65LLU;
	int32_t t75 = 32;

	t75 = ((x337+x338)&(x339<=x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x342 = 12U;
	static uint32_t x343 = UINT32_MAX;
	uint32_t x344 = UINT32_MAX;
	int32_t t76 = -120;

	t76 = ((x341+x342)&(x343<=x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	static int16_t x348 = -1;
	int32_t t77 = 562254;

	t77 = ((x345+x346)&(x347<=x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = -315145999084906847LL;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = 3U;
	uint16_t x352 = UINT16_MAX;
	int64_t t78 = -1088199411249203LL;

	t78 = ((x349+x350)&(x351<=x352));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = -1;
	volatile int64_t x355 = INT64_MAX;
	int8_t x356 = INT8_MIN;
	volatile int32_t t79 = 89466;

	t79 = ((x353+x354)&(x355<=x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x358 = 1029611;
	static volatile uint32_t x359 = UINT32_MAX;
	volatile int32_t t80 = -9;

	t80 = ((x357+x358)&(x359<=x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x362 = -1;
	static volatile uint64_t x363 = UINT64_MAX;
	volatile int32_t t81 = 896756;

	t81 = ((x361+x362)&(x363<=x364));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MIN;
	volatile uint32_t x366 = 25234471U;
	uint32_t x367 = UINT32_MAX;
	volatile int32_t x368 = -1;
	volatile uint32_t t82 = 367U;

	t82 = ((x365+x366)&(x367<=x368));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x369 = 1U;
	int32_t x370 = -1;
	static int32_t x371 = INT32_MAX;
	int32_t t83 = 1;

	t83 = ((x369+x370)&(x371<=x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x373 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	static int32_t t84 = 900321;

	t84 = ((x373+x374)&(x375<=x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	int32_t x379 = -1;
	int64_t x380 = -106313322903LL;
	volatile int32_t t85 = -162602;

	t85 = ((x377+x378)&(x379<=x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x381 = INT32_MIN;
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = INT32_MIN;
	volatile int32_t t86 = 8526782;

	t86 = ((x381+x382)&(x383<=x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = 52;
	static int8_t x386 = INT8_MIN;
	static int16_t x387 = 45;
	int16_t x388 = -1;
	int32_t t87 = 7274145;

	t87 = ((x385+x386)&(x387<=x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -17;
	uint32_t x390 = 4958U;
	int8_t x391 = 1;
	int8_t x392 = INT8_MIN;
	uint32_t t88 = 291U;

	t88 = ((x389+x390)&(x391<=x392));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MIN;
	int32_t x395 = -149404;
	int32_t x396 = -2129781;
	int64_t t89 = -2924866186322969LL;

	t89 = ((x393+x394)&(x395<=x396));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x398 = INT8_MIN;
	int64_t x400 = 1478LL;
	int32_t t90 = 1026074;

	t90 = ((x397+x398)&(x399<=x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x401 = 1U;
	volatile uint32_t x402 = 15U;
	uint8_t x403 = 37U;
	int32_t x404 = INT32_MIN;
	uint32_t t91 = 430546962U;

	t91 = ((x401+x402)&(x403<=x404));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = INT8_MIN;
	static int8_t x406 = 0;
	int8_t x408 = -1;
	volatile int32_t t92 = -4931;

	t92 = ((x405+x406)&(x407<=x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x413 = 2532358;
	int64_t x414 = -1LL;

	t93 = ((x413+x414)&(x415<=x416));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = -1544512874867067610LL;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;
	volatile int64_t t94 = 2093640LL;

	t94 = ((x417+x418)&(x419<=x420));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x422 = -1;
	static int32_t t95 = 90;

	t95 = ((x421+x422)&(x423<=x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x426 = 1U;
	int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	static int64_t t96 = 357226301095LL;

	t96 = ((x425+x426)&(x427<=x428));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = UINT32_MAX;
	static int8_t x430 = INT8_MIN;
	int64_t x431 = 5154696649200LL;
	volatile uint8_t x432 = 7U;
	volatile uint32_t t97 = 3U;

	t97 = ((x429+x430)&(x431<=x432));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x433 = UINT16_MAX;
	volatile int8_t x434 = -1;
	uint64_t x435 = 128831817653527830LLU;
	int16_t x436 = -3467;

	t98 = ((x433+x434)&(x435<=x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = -1LL;
	static volatile int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MAX;
	int8_t x440 = -1;

	t99 = ((x437+x438)&(x439<=x440));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

