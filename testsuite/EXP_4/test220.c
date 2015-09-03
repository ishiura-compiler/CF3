#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
static volatile uint32_t t0 = 191299U;
int16_t x7 = 4;
int32_t x8 = -30102;
uint64_t t4 = 14244LLU;
static int64_t x46 = INT64_MAX;
volatile int8_t x55 = INT8_MAX;
int8_t x60 = -1;
volatile uint16_t x67 = 472U;
static int64_t t12 = -238429570419LL;
int8_t x76 = -1;
volatile int64_t x81 = -2144447251803223913LL;
static int16_t x94 = INT16_MIN;
volatile int8_t x99 = 1;
static int16_t x109 = INT16_MAX;
int64_t t23 = -1415510753567699LL;
uint32_t x128 = 29772602U;
uint16_t x131 = UINT16_MAX;
int64_t t32 = 80794449386LL;
int8_t x166 = 4;
uint64_t x167 = UINT64_MAX;
static volatile uint64_t t33 = 246794943926089LLU;
int16_t x178 = -1;
int8_t x181 = -32;
int8_t x207 = 1;
int64_t x215 = INT64_MIN;
int16_t x220 = INT16_MIN;
int16_t x230 = -1;
volatile int16_t x239 = -5625;
int16_t x250 = 0;
int16_t x256 = INT16_MIN;
volatile int64_t x260 = INT64_MIN;
uint32_t x263 = UINT32_MAX;
uint32_t x264 = 1040095521U;
volatile int64_t t52 = 263789232820559138LL;
int64_t x271 = INT64_MIN;
static int16_t x274 = -1951;
volatile uint64_t t55 = 53LLU;
int64_t x284 = -1LL;
uint16_t x289 = 25U;
int16_t x290 = INT16_MAX;
int64_t x292 = INT64_MAX;
int8_t x297 = -15;
static uint8_t x299 = 24U;
volatile int32_t t61 = 177955;
uint16_t x313 = UINT16_MAX;
int64_t x314 = INT64_MIN;
static int8_t x316 = -23;
volatile int64_t t63 = -7913589264184955LL;
int32_t t64 = -1;
static int64_t t65 = 2LL;
int8_t x337 = INT8_MIN;
int16_t x343 = -1;
volatile uint64_t x348 = 4467693626917853LLU;
uint64_t x360 = 51021LLU;
volatile int8_t x365 = INT8_MIN;
int64_t x370 = 484285100406829LL;
volatile int64_t x373 = -14LL;
volatile uint64_t t74 = 277977397498601627LLU;
int16_t x377 = -1;
uint64_t t77 = 6636883683246765LLU;
volatile int32_t x397 = -1;
int8_t x398 = INT8_MIN;
static uint32_t x402 = 1127735U;
volatile uint64_t t80 = 2LLU;
uint8_t x419 = UINT8_MAX;
int32_t x421 = -1;
volatile int32_t x427 = -18719956;
static uint16_t x433 = 118U;
static int32_t x447 = INT32_MIN;
int64_t x448 = -1844487619LL;
int64_t t90 = 1LL;
int64_t x449 = -17518014994725646LL;
static uint32_t x453 = UINT32_MAX;
int16_t x459 = -1;
int8_t x469 = -3;
volatile uint32_t x475 = 24U;
int8_t x476 = INT8_MAX;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	uint32_t x3 = 22928977U;
	int8_t x4 = INT8_MAX;

	t0 = (x1|(x2/(x3-x4)));

	if (t0 != 255U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static volatile int32_t x6 = 356173;
	int64_t t1 = 734633736185953LL;

	t1 = (x5|(x6/(x7-x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 10U;
	int16_t x10 = INT16_MIN;
	int8_t x11 = -13;
	static int32_t x12 = -227880;
	int32_t t2 = -312116;

	t2 = (x9|(x10/(x11-x12)));

	if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static volatile uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 1U;
	int16_t x16 = -2812;
	volatile int32_t t3 = -1457;

	t3 = (x13|(x14/(x15-x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 31U;
	static volatile int64_t x26 = -8240916LL;
	volatile int32_t x27 = INT32_MIN;
	uint64_t x28 = 653553094916417986LLU;

	t4 = (x25|(x26/(x27-x28)));

	if (t4 != 31LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 228300LLU;
	volatile int16_t x31 = INT16_MAX;
	static uint32_t x32 = 30639310U;
	volatile uint64_t t5 = 59795868LLU;

	t5 = (x29|(x30/(x31-x32)));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -11276;
	int8_t x34 = 31;
	int64_t x35 = INT64_MIN;
	static volatile int32_t x36 = -106277836;
	static int64_t t6 = -3600339430346469232LL;

	t6 = (x33|(x34/(x35-x36)));

	if (t6 != -11276LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 128U;
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int64_t t7 = -3379967532623570915LL;

	t7 = (x41|(x42/(x43-x44)));

	if (t7 != -281474976710528LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	int64_t x47 = -7553079326886LL;
	uint32_t x48 = 13U;
	static volatile int64_t t8 = 23329803213LL;

	t8 = (x45|(x46/(x47-x48)));

	if (t8 != -1221121LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = 8U;
	int64_t x56 = INT64_MAX;
	volatile int64_t t9 = -16025736573535357LL;

	t9 = (x53|(x54/(x55-x56)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = 10158758713453LLU;
	int16_t x58 = 2;
	static uint16_t x59 = UINT16_MAX;
	uint64_t t10 = 1097927640920LLU;

	t10 = (x57|(x58/(x59-x60)));

	if (t10 != 10158758713453LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x61 = 206U;
	uint64_t x62 = 5784759664773LLU;
	uint8_t x63 = 1U;
	static uint32_t x64 = 181U;
	volatile uint64_t t11 = 749LLU;

	t11 = (x61|(x62/(x63-x64)));

	if (t11 != 1486LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -122;
	int64_t x66 = INT64_MIN;
	int8_t x68 = 0;

	t12 = (x65|(x66/(x67-x68)));

	if (t12 != -50LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = 0LLU;
	int8_t x72 = INT8_MIN;
	uint64_t t13 = UINT64_MAX;

	t13 = (x69|(x70/(x71-x72)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x73 = -692840775114133LL;
	volatile int8_t x74 = INT8_MIN;
	volatile int32_t x75 = 3;
	int64_t t14 = 1LL;

	t14 = (x73|(x74/(x75-x76)));

	if (t14 != -21LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x82 = UINT16_MAX;
	int16_t x83 = -30;
	volatile uint16_t x84 = 1U;
	int64_t t15 = 38439LL;

	t15 = (x81|(x82/(x83-x84)));

	if (t15 != -65LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x85 = INT16_MIN;
	static int32_t x86 = -1;
	uint16_t x87 = UINT16_MAX;
	static uint8_t x88 = 0U;
	int32_t t16 = -132492638;

	t16 = (x85|(x86/(x87-x88)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint64_t x95 = 1086791118471322948LLU;
	volatile int16_t x96 = -81;
	volatile uint64_t t17 = 180610LLU;

	t17 = (x93|(x94/(x95-x96)));

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = UINT8_MAX;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t18 = -8172706;

	t18 = (x97|(x98/(x99-x100)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	static int32_t x103 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	uint64_t t19 = 44428619LLU;

	t19 = (x101|(x102/(x103-x104)));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = 907081112LL;
	static uint16_t x106 = 4956U;
	int16_t x107 = -9;
	int16_t x108 = -1;
	static volatile int64_t t20 = -1941589335LL;

	t20 = (x105|(x106/(x107-x108)));

	if (t20 != -611LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x110 = -1;
	uint64_t x111 = 8LLU;
	static uint32_t x112 = 3782U;
	uint64_t t21 = 61813LLU;

	t21 = (x109|(x110/(x111-x112)));

	if (t21 != 32767LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	volatile int16_t x118 = INT16_MAX;
	int8_t x119 = INT8_MIN;
	static volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t22 = -3;

	t22 = (x117|(x118/(x119-x120)));

	if (t22 != -85) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x121 = INT8_MAX;
	static int64_t x122 = -94385744LL;
	int64_t x123 = -72915916059211933LL;
	uint32_t x124 = 638U;

	t23 = (x121|(x122/(x123-x124)));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x125 = 567475578418623650LLU;
	int64_t x126 = INT64_MIN;
	volatile int32_t x127 = INT32_MIN;
	volatile uint64_t t24 = 5462157LLU;

	t24 = (x125|(x126/(x127-x128)));

	if (t24 != 18446744069389416443LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	static volatile int8_t x130 = -1;
	static volatile uint64_t x132 = 532LLU;
	volatile uint64_t t25 = 364794671LLU;

	t25 = (x129|(x130/(x131-x132)));

	if (t25 != 18446744073709546523LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x133 = INT8_MAX;
	uint64_t x134 = 2LLU;
	int16_t x135 = 14;
	volatile int8_t x136 = INT8_MIN;
	volatile uint64_t t26 = 1411957LLU;

	t26 = (x133|(x134/(x135-x136)));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = INT64_MIN;
	static volatile int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	int64_t t27 = 32554544204896697LL;

	t27 = (x137|(x138/(x139-x140)));

	if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	uint16_t x144 = 29782U;
	static volatile uint64_t t28 = 237615540774LLU;

	t28 = (x141|(x142/(x143-x144)));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	static uint64_t x147 = 1339092LLU;
	uint16_t x148 = 348U;
	uint64_t t29 = 25016LLU;

	t29 = (x145|(x146/(x147-x148)));

	if (t29 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = 27474906745LLU;
	uint16_t x154 = UINT16_MAX;
	int16_t x155 = 13395;
	volatile int8_t x156 = INT8_MIN;
	uint64_t t30 = 14048LLU;

	t30 = (x153|(x154/(x155-x156)));

	if (t30 != 27474906749LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x157 = INT32_MAX;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MAX;
	int32_t x160 = INT32_MAX;
	uint32_t t31 = 142881U;

	t31 = (x157|(x158/(x159-x160)));

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x161 = 43;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = -1;
	int8_t x164 = 1;

	t32 = (x161|(x162/(x163-x164)));

	if (t32 != 4611686018427387947LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 27154LLU;
	uint8_t x168 = 1U;

	t33 = (x165|(x166/(x167-x168)));

	if (t33 != 27154LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x173 = 24U;
	static uint32_t x174 = UINT32_MAX;
	static int32_t x175 = -41777;
	volatile int32_t x176 = 19;
	volatile uint32_t t34 = 8U;

	t34 = (x173|(x174/(x175-x176)));

	if (t34 != 25U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x177 = 54;
	volatile int16_t x179 = INT16_MIN;
	static uint16_t x180 = 19U;
	volatile int32_t t35 = 169139;

	t35 = (x177|(x178/(x179-x180)));

	if (t35 != 54) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x182 = INT8_MAX;
	uint32_t x183 = 1993292749U;
	static uint64_t x184 = 109158276901279LLU;
	uint64_t t36 = 36650LLU;

	t36 = (x181|(x182/(x183-x184)));

	if (t36 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = INT16_MIN;
	volatile uint64_t t37 = 140142067LLU;

	t37 = (x189|(x190/(x191-x192)));

	if (t37 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = INT64_MIN;
	static volatile int64_t x194 = -1LL;
	uint16_t x195 = 232U;
	volatile int32_t x196 = 34038;
	int64_t t38 = INT64_MIN;

	t38 = (x193|(x194/(x195-x196)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x202 = 1U;
	int64_t x203 = 4420061591862771601LL;
	static int8_t x204 = -11;
	int64_t t39 = 767386961LL;

	t39 = (x201|(x202/(x203-x204)));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = UINT64_MAX;
	static int8_t x206 = INT8_MIN;
	uint64_t x208 = 0LLU;
	static uint64_t t40 = UINT64_MAX;

	t40 = (x205|(x206/(x207-x208)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x209 = 36101818119LLU;
	volatile int8_t x210 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	volatile int64_t x212 = -159430256007LL;
	volatile uint64_t t41 = 2652458988181445LLU;

	t41 = (x209|(x210/(x211-x212)));

	if (t41 != 36101818119LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = 2871U;
	static int32_t x214 = INT32_MIN;
	uint64_t x216 = 30522608642206335LLU;
	static uint64_t t42 = 43112LLU;

	t42 = (x213|(x214/(x215-x216)));

	if (t42 != 2871LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = INT8_MAX;
	static uint32_t x218 = UINT32_MAX;
	uint64_t x219 = 3414LLU;
	uint64_t t43 = 1185592313885534664LLU;

	t43 = (x217|(x218/(x219-x220)));

	if (t43 != 118783LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x229 = 453U;
	int8_t x231 = -1;
	static int32_t x232 = INT32_MAX;
	volatile uint32_t t44 = 6606062U;

	t44 = (x229|(x230/(x231-x232)));

	if (t44 != 453U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x233 = -1;
	uint64_t x234 = 3LLU;
	uint8_t x235 = 20U;
	int8_t x236 = INT8_MIN;
	uint64_t t45 = UINT64_MAX;

	t45 = (x233|(x234/(x235-x236)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x237 = UINT32_MAX;
	int32_t x238 = -1;
	uint32_t x240 = 16051365U;
	uint32_t t46 = UINT32_MAX;

	t46 = (x237|(x238/(x239-x240)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x241 = -3898171;
	int32_t x242 = INT32_MAX;
	static volatile int32_t x243 = -1;
	static int8_t x244 = -7;
	volatile int32_t t47 = -905484;

	t47 = (x241|(x242/(x243-x244)));

	if (t47 != -2763307) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x245 = INT8_MIN;
	static uint32_t x246 = 196136718U;
	int64_t x247 = -1LL;
	volatile uint64_t x248 = 30684733LLU;
	uint64_t t48 = 3187187614478LLU;

	t48 = (x245|(x246/(x247-x248)));

	if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x249 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (x249|(x250/(x251-x252)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x253 = 57U;
	int32_t x254 = 42;
	int16_t x255 = -1;
	static int32_t t50 = 1609141;

	t50 = (x253|(x254/(x255-x256)));

	if (t50 != 57) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = -2067365;
	uint64_t x259 = 57740908240861LLU;
	volatile uint64_t t51 = 53LLU;

	t51 = (x257|(x258/(x259-x260)));

	if (t51 != 2147483647LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x261 = -1LL;
	volatile int16_t x262 = 19;

	t52 = (x261|(x262/(x263-x264)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x269 = -217571866763LL;
	int8_t x270 = -1;
	int8_t x272 = INT8_MIN;
	static volatile int64_t t53 = 645352LL;

	t53 = (x269|(x270/(x271-x272)));

	if (t53 != -217571866763LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x273 = 3LLU;
	volatile int64_t x275 = INT64_MIN;
	static int8_t x276 = -24;
	uint64_t t54 = 2075126LLU;

	t54 = (x273|(x274/(x275-x276)));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x277 = 7055U;
	volatile uint64_t x278 = 57569147159844LLU;
	uint64_t x279 = 1856694395703LLU;
	int32_t x280 = -1;

	t55 = (x277|(x278/(x279-x280)));

	if (t55 != 7071LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x282 = INT16_MAX;
	volatile int8_t x283 = 43;
	volatile int64_t t56 = 1615435876560431LL;

	t56 = (x281|(x282/(x283-x284)));

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x285 = UINT16_MAX;
	static uint32_t x286 = 1494457393U;
	int8_t x287 = 45;
	uint32_t x288 = UINT32_MAX;
	uint32_t t57 = 503071572U;

	t57 = (x285|(x286/(x287-x288)));

	if (t57 != 32505855U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x291 = -1LL;
	int64_t t58 = -1381745812035LL;

	t58 = (x289|(x290/(x291-x292)));

	if (t58 != 25LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x293 = 178U;
	int16_t x294 = INT16_MIN;
	volatile int16_t x295 = INT16_MIN;
	static int16_t x296 = -1;
	int32_t t59 = -725436;

	t59 = (x293|(x294/(x295-x296)));

	if (t59 != 179) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x298 = UINT32_MAX;
	volatile int64_t x300 = -1LL;
	int64_t t60 = 2LL;

	t60 = (x297|(x298/(x299-x300)));

	if (t60 != -13LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = 743;
	int8_t x302 = 0;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MAX;

	t61 = (x301|(x302/(x303-x304)));

	if (t61 != 743) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x305 = 31U;
	int32_t x306 = INT32_MAX;
	uint32_t x307 = 136674285U;
	uint64_t x308 = 50039289565917417LLU;
	static volatile uint64_t t62 = 1LLU;

	t62 = (x305|(x306/(x307-x308)));

	if (t62 != 31LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x315 = UINT8_MAX;

	t63 = (x313|(x314/(x315-x316)));

	if (t63 != -33177597254828033LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t64 = (x321|(x322/(x323-x324)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x329 = INT32_MAX;
	int64_t x330 = 249958234639090539LL;
	int64_t x331 = -1LL;
	volatile int64_t x332 = INT64_MIN;

	t65 = (x329|(x330/(x331-x332)));

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x338 = -1;
	static uint16_t x339 = 13U;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t66 = 38098;

	t66 = (x337|(x338/(x339-x340)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t67 = -2587;

	t67 = (x341|(x342/(x343-x344)));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -63985627LL;
	int32_t x346 = -1;
	int32_t x347 = -1;
	uint64_t t68 = 1814312556112103452LLU;

	t68 = (x345|(x346/(x347-x348)));

	if (t68 != 18446744073645565989LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = -7259221693LL;
	uint8_t x350 = 37U;
	uint32_t x351 = 28607423U;
	volatile uint16_t x352 = UINT16_MAX;
	volatile int64_t t69 = 0LL;

	t69 = (x349|(x350/(x351-x352)));

	if (t69 != -7259221693LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = 47;
	uint8_t x359 = UINT8_MAX;
	volatile uint64_t t70 = 1368910925381321LLU;

	t70 = (x357|(x358/(x359-x360)));

	if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = 193U;
	int8_t x362 = 0;
	volatile int16_t x363 = -2179;
	uint32_t x364 = 2U;
	uint32_t t71 = 15U;

	t71 = (x361|(x362/(x363-x364)));

	if (t71 != 193U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x366 = 34;
	static int16_t x367 = INT16_MIN;
	static volatile int16_t x368 = -14094;
	int32_t t72 = 17;

	t72 = (x365|(x366/(x367-x368)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x369 = INT32_MAX;
	uint16_t x371 = 16383U;
	volatile int8_t x372 = -5;
	int64_t t73 = 3390510884345054LL;

	t73 = (x369|(x370/(x371-x372)));

	if (t73 != 30064771071LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x374 = 11;
	uint64_t x375 = 4353379699831921LLU;
	volatile int32_t x376 = INT32_MIN;

	t74 = (x373|(x374/(x375-x376)));

	if (t74 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x378 = 0U;
	uint16_t x379 = UINT16_MAX;
	uint8_t x380 = UINT8_MAX;
	int32_t t75 = -83811;

	t75 = (x377|(x378/(x379-x380)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x381 = 8U;
	static uint32_t x382 = UINT32_MAX;
	int64_t x383 = -1001LL;
	int32_t x384 = 3827660;
	int64_t t76 = 5715LL;

	t76 = (x381|(x382/(x383-x384)));

	if (t76 != -1121LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x386 = UINT64_MAX;
	int8_t x387 = INT8_MAX;
	static volatile uint16_t x388 = UINT16_MAX;

	t77 = (x385|(x386/(x387-x388)));

	if (t77 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x399 = INT16_MAX;
	volatile int32_t x400 = INT32_MAX;
	volatile int32_t t78 = 150026;

	t78 = (x397|(x398/(x399-x400)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x401 = UINT32_MAX;
	int8_t x403 = 14;
	static volatile uint8_t x404 = UINT8_MAX;
	static uint32_t t79 = UINT32_MAX;

	t79 = (x401|(x402/(x403-x404)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x405 = 552;
	volatile int8_t x406 = INT8_MIN;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = 1;

	t80 = (x405|(x406/(x407-x408)));

	if (t80 != 552LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = -1;
	static volatile int32_t x410 = INT32_MIN;
	int32_t x411 = INT32_MIN;
	int32_t x412 = -620;
	static volatile int32_t t81 = 3540002;

	t81 = (x409|(x410/(x411-x412)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x413 = UINT8_MAX;
	static int64_t x414 = 90081855196636549LL;
	static int64_t x415 = 85864LL;
	int16_t x416 = INT16_MIN;
	int64_t t82 = 11LL;

	t82 = (x413|(x414/(x415-x416)));

	if (t82 != 759338586623LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x417 = INT8_MAX;
	static uint32_t x418 = 1593U;
	static int64_t x420 = -1LL;
	volatile int64_t t83 = 441832332728LL;

	t83 = (x417|(x418/(x419-x420)));

	if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x422 = -14827LL;
	int32_t x423 = 360;
	uint16_t x424 = UINT16_MAX;
	static int64_t t84 = -20LL;

	t84 = (x421|(x422/(x423-x424)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x425 = 87U;
	uint8_t x426 = 0U;
	uint8_t x428 = 2U;
	uint32_t t85 = 41U;

	t85 = (x425|(x426/(x427-x428)));

	if (t85 != 87U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x429 = 2;
	int8_t x430 = INT8_MIN;
	static uint32_t x431 = 421790U;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t86 = 0U;

	t86 = (x429|(x430/(x431-x432)));

	if (t86 != 10182U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x434 = -1;
	uint8_t x435 = 3U;
	static int64_t x436 = -1LL;
	int64_t t87 = 1414286054032LL;

	t87 = (x433|(x434/(x435-x436)));

	if (t87 != 118LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	volatile int8_t x439 = 1;
	static int64_t x440 = -1LL;
	int64_t t88 = -5064977338207LL;

	t88 = (x437|(x438/(x439-x440)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x441 = 39738U;
	uint32_t x442 = 178420U;
	static int16_t x443 = -1;
	uint64_t x444 = 203857927297699014LLU;
	volatile uint64_t t89 = 504251LLU;

	t89 = (x441|(x442/(x443-x444)));

	if (t89 != 39738LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x445 = UINT32_MAX;
	static int64_t x446 = -2633849811LL;

	t90 = (x445|(x446/(x447-x448)));

	if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x450 = INT16_MIN;
	int32_t x451 = INT32_MIN;
	static int8_t x452 = -8;
	static int64_t t91 = -1LL;

	t91 = (x449|(x450/(x451-x452)));

	if (t91 != -17518014994725646LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x454 = INT8_MIN;
	volatile uint32_t x455 = UINT32_MAX;
	int32_t x456 = INT32_MIN;
	uint32_t t92 = UINT32_MAX;

	t92 = (x453|(x454/(x455-x456)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = 476159291015688LL;
	uint16_t x458 = UINT16_MAX;
	static uint64_t x460 = 11LLU;
	volatile uint64_t t93 = 1884991LLU;

	t93 = (x457|(x458/(x459-x460)));

	if (t93 != 476159291015688LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x461 = -1020114062;
	int64_t x462 = -1LL;
	static volatile int8_t x463 = INT8_MIN;
	static int32_t x464 = 860443;
	volatile int64_t t94 = -40343725LL;

	t94 = (x461|(x462/(x463-x464)));

	if (t94 != -1020114062LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x465 = INT32_MIN;
	static volatile int8_t x466 = -1;
	int16_t x467 = INT16_MIN;
	int16_t x468 = 13041;
	int32_t t95 = INT32_MIN;

	t95 = (x465|(x466/(x467-x468)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x470 = UINT16_MAX;
	uint8_t x471 = UINT8_MAX;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t96 = -13178;

	t96 = (x469|(x470/(x471-x472)));

	if (t96 != -3) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x473 = 11;
	static uint16_t x474 = 15U;
	volatile uint32_t t97 = 4265057U;

	t97 = (x473|(x474/(x475-x476)));

	if (t97 != 11U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = 39511048406390134LL;
	int32_t x482 = -1;
	int16_t x483 = INT16_MIN;
	static uint16_t x484 = 10897U;
	int64_t t98 = -288072866205466LL;

	t98 = (x481|(x482/(x483-x484)));

	if (t98 != 39511048406390134LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = INT64_MIN;
	uint32_t x486 = UINT32_MAX;
	static int32_t x487 = INT32_MAX;
	uint64_t x488 = 9095188963846301332LLU;
	static volatile uint64_t t99 = 131605256179223LLU;

	t99 = (x485|(x486/(x487-x488)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

