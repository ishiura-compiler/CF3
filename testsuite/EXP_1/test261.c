#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
volatile int64_t x22 = -1LL;
uint32_t x26 = UINT32_MAX;
uint64_t x62 = 101LLU;
static int64_t t12 = -68LL;
int32_t t13 = -7748;
int16_t x74 = -29;
int16_t x79 = INT16_MIN;
int16_t x82 = 132;
int32_t x94 = INT32_MIN;
static volatile int8_t x96 = INT8_MAX;
static volatile int32_t t20 = 4950121;
static uint8_t x108 = 48U;
int64_t x112 = INT64_MIN;
uint64_t t27 = 487811485916LLU;
static volatile int64_t x148 = 157677LL;
static int16_t x149 = 2214;
int32_t x150 = -1;
int32_t x154 = INT32_MIN;
volatile uint16_t x156 = 9U;
int8_t x167 = -1;
static volatile int16_t x180 = INT16_MIN;
volatile int32_t t37 = 4643059;
volatile int64_t x183 = INT64_MIN;
volatile int32_t x199 = 8978412;
static int8_t x202 = INT8_MAX;
int32_t t43 = -8;
volatile int32_t t45 = 392023228;
static uint8_t x213 = UINT8_MAX;
int32_t x216 = INT32_MIN;
uint8_t x217 = 107U;
volatile uint64_t t47 = 993366356888048422LLU;
int32_t t48 = -5006;
static volatile int64_t x225 = INT64_MIN;
int32_t t49 = 1;
uint8_t x231 = UINT8_MAX;
uint16_t x234 = 7U;
static int8_t x248 = -1;
int32_t t55 = 343460717;
int32_t x261 = -1;
int8_t x262 = INT8_MIN;
volatile int64_t x270 = -16LL;
int16_t x281 = INT16_MIN;
static volatile int8_t x285 = INT8_MAX;
int64_t x287 = INT64_MAX;
volatile uint8_t x292 = 3U;
volatile int8_t x296 = INT8_MIN;
static volatile int32_t x298 = INT32_MAX;
int32_t x301 = INT32_MIN;
volatile int64_t x302 = -45042325LL;
volatile uint64_t x303 = UINT64_MAX;
static volatile uint8_t x304 = 0U;
volatile int32_t t66 = -123;
int8_t x306 = INT8_MAX;
int64_t x311 = 11LL;
uint64_t t69 = 1207880475LLU;
int16_t x323 = INT16_MIN;
int32_t t70 = -52193;
volatile int16_t x329 = INT16_MIN;
static uint8_t x338 = 3U;
volatile uint8_t x341 = 3U;
static int32_t x353 = -1;
uint32_t x366 = UINT32_MAX;
static int8_t x371 = -3;
int32_t t80 = 208;
uint64_t x374 = 112514965587069LLU;
int32_t x377 = INT32_MIN;
int8_t x378 = -12;
int64_t x379 = INT64_MIN;
static int64_t x384 = INT64_MIN;
uint16_t x385 = UINT16_MAX;
int32_t t87 = -6673;
int16_t x403 = INT16_MIN;
uint16_t x414 = 125U;
uint8_t x421 = 19U;
int64_t x422 = 802780LL;
int8_t x425 = -1;
volatile int8_t x429 = INT8_MAX;
uint64_t x437 = 5176351469834952795LLU;
int16_t x438 = INT16_MAX;
int32_t x446 = INT32_MAX;
int8_t x455 = INT8_MIN;
static int64_t x456 = -1LL;
int64_t t97 = 1812745121LL;
uint8_t x462 = 3U;
volatile int32_t t99 = 187;


void f0(void) {
	int32_t x5 = 818905;
	static int64_t x6 = -4060410498LL;
	int16_t x7 = -1;
	int64_t t0 = -447688LL;

	t0 = (((x5-x6)==x7)+x8);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MAX;
	uint32_t x10 = 566426871U;
	int8_t x11 = -3;
	int32_t x12 = -28679;
	volatile int32_t t1 = -1272;

	t1 = (((x9-x10)==x11)+x12);

	if (t1 != -28679) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = 0;
	int64_t x15 = -1LL;
	uint16_t x16 = 28817U;
	volatile int32_t t2 = -72389126;

	t2 = (((x13-x14)==x15)+x16);

	if (t2 != 28817) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 3052LL;
	int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (((x21-x22)==x23)+x24);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1871;
	int16_t x27 = INT16_MIN;
	volatile int64_t x28 = INT64_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (((x25-x26)==x27)+x28);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	uint64_t x35 = 54LLU;
	static int16_t x36 = INT16_MIN;
	int32_t t5 = -5366;

	t5 = (((x33-x34)==x35)+x36);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 339461543389LLU;
	volatile int16_t x38 = -1;
	volatile int64_t x39 = -1LL;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x37-x38)==x39)+x40);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = -10;
	static int64_t x43 = INT64_MIN;
	static int32_t x44 = INT32_MIN;
	static int32_t t7 = INT32_MIN;

	t7 = (((x41-x42)==x43)+x44);

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = INT16_MIN;
	static volatile int64_t x46 = -3107LL;
	int32_t x47 = INT32_MIN;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (((x45-x46)==x47)+x48);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 303276068020LLU;
	int32_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	static volatile int16_t x52 = INT16_MIN;
	int32_t t9 = 753;

	t9 = (((x49-x50)==x51)+x52);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = 11053U;
	int64_t x54 = 162301472353LL;
	volatile int64_t x55 = -877079644691117LL;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t10 = -20;

	t10 = (((x53-x54)==x55)+x56);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MIN;
	static int8_t x58 = -1;
	uint16_t x59 = 1U;
	static int64_t x60 = 1LL;
	int64_t t11 = -3218803652965342255LL;

	t11 = (((x57-x58)==x59)+x60);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -5304LL;

	t12 = (((x61-x62)==x63)+x64);

	if (t12 != -5304LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x65 = 5U;
	int16_t x66 = -3344;
	uint32_t x67 = 29U;
	volatile int8_t x68 = -1;

	t13 = (((x65-x66)==x67)+x68);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = 8;
	static int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	int32_t t14 = 121843385;

	t14 = (((x73-x74)==x75)+x76);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MIN;
	static volatile int8_t x78 = -1;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t15 = -113502;

	t15 = (((x77-x78)==x79)+x80);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x81 = 6871101087235736039LLU;
	int16_t x83 = -30;
	int32_t x84 = 98728722;
	volatile int32_t t16 = 76;

	t16 = (((x81-x82)==x83)+x84);

	if (t16 != 98728722) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x85 = 6650U;
	int32_t x86 = 72309169;
	volatile uint32_t x87 = 61079U;
	int16_t x88 = -1;
	volatile int32_t t17 = 291612;

	t17 = (((x85-x86)==x87)+x88);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 50U;
	int8_t x90 = -1;
	static volatile int32_t x91 = -1;
	volatile uint8_t x92 = 18U;
	int32_t t18 = -29;

	t18 = (((x89-x90)==x91)+x92);

	if (t18 != 18) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t t19 = -100093;

	t19 = (((x93-x94)==x95)+x96);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int64_t x98 = -32LL;
	uint8_t x99 = 42U;
	volatile int16_t x100 = 302;

	t20 = (((x97-x98)==x99)+x100);

	if (t20 != 302) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MAX;
	static uint64_t x102 = 64557LLU;
	volatile int32_t x103 = INT32_MIN;
	static volatile int32_t x104 = 104236005;
	volatile int32_t t21 = -200202;

	t21 = (((x101-x102)==x103)+x104);

	if (t21 != 104236005) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x105 = INT32_MIN;
	int32_t x106 = -276;
	int32_t x107 = -1;
	volatile int32_t t22 = 1934267;

	t22 = (((x105-x106)==x107)+x108);

	if (t22 != 48) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	volatile int64_t t23 = INT64_MIN;

	t23 = (((x109-x110)==x111)+x112);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 109060;
	int16_t x114 = INT16_MAX;
	static int8_t x115 = INT8_MIN;
	static uint8_t x116 = 1U;
	static volatile int32_t t24 = -15895;

	t24 = (((x113-x114)==x115)+x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	int16_t x118 = 912;
	static uint64_t x119 = 338026996LLU;
	uint16_t x120 = 28U;
	volatile int32_t t25 = -13122387;

	t25 = (((x117-x118)==x119)+x120);

	if (t25 != 28) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x121 = INT16_MAX;
	volatile int16_t x122 = -1;
	int32_t x123 = -24680182;
	volatile int32_t x124 = INT32_MAX;
	static volatile int32_t t26 = INT32_MAX;

	t26 = (((x121-x122)==x123)+x124);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 53U;
	volatile uint64_t x128 = 818037376827835LLU;

	t27 = (((x125-x126)==x127)+x128);

	if (t27 != 818037376827835LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = 614437686590979868LL;
	uint64_t x134 = 20381692LLU;
	static int32_t x135 = 4499005;
	int64_t x136 = -49LL;
	volatile int64_t t28 = -25962082591410895LL;

	t28 = (((x133-x134)==x135)+x136);

	if (t28 != -49LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = 0U;
	uint64_t x146 = 1408394994214260LLU;
	int8_t x147 = 17;
	volatile int64_t t29 = 199LL;

	t29 = (((x145-x146)==x147)+x148);

	if (t29 != 157677LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t30 = 50041;

	t30 = (((x149-x150)==x151)+x152);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x153 = UINT64_MAX;
	volatile int32_t x155 = INT32_MAX;
	int32_t t31 = 460;

	t31 = (((x153-x154)==x155)+x156);

	if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MAX;
	static int16_t x158 = -1;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -1;
	volatile int32_t t32 = 16001530;

	t32 = (((x157-x158)==x159)+x160);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = 20;
	volatile int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	static int32_t x164 = -1;
	int32_t t33 = -423378;

	t33 = (((x161-x162)==x163)+x164);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x165 = -71325386307LL;
	int16_t x166 = 1279;
	int8_t x168 = -1;
	static int32_t t34 = -2783753;

	t34 = (((x165-x166)==x167)+x168);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -322487862;
	static volatile uint8_t x170 = 43U;
	volatile uint64_t x171 = 17096LLU;
	int8_t x172 = INT8_MAX;
	volatile int32_t t35 = -21;

	t35 = (((x169-x170)==x171)+x172);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x173 = INT8_MAX;
	volatile uint8_t x174 = 0U;
	volatile uint8_t x175 = 13U;
	volatile int16_t x176 = -55;
	int32_t t36 = -507;

	t36 = (((x173-x174)==x175)+x176);

	if (t36 != -55) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	volatile uint16_t x178 = UINT16_MAX;
	volatile int8_t x179 = INT8_MIN;

	t37 = (((x177-x178)==x179)+x180);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = -125;
	int32_t x184 = -1;
	volatile int32_t t38 = 978932;

	t38 = (((x181-x182)==x183)+x184);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x186 = UINT16_MAX;
	static int16_t x187 = INT16_MIN;
	volatile uint16_t x188 = 50U;
	int32_t t39 = -498288430;

	t39 = (((x185-x186)==x187)+x188);

	if (t39 != 51) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = 31299920904623LL;
	int32_t x190 = INT32_MAX;
	static int8_t x191 = -1;
	uint8_t x192 = 34U;
	int32_t t40 = -169653;

	t40 = (((x189-x190)==x191)+x192);

	if (t40 != 34) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 27U;
	uint32_t x194 = 2U;
	int8_t x195 = 1;
	int32_t x196 = INT32_MAX;
	int32_t t41 = INT32_MAX;

	t41 = (((x193-x194)==x195)+x196);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = 1U;
	uint8_t x198 = UINT8_MAX;
	static int8_t x200 = -1;
	static volatile int32_t t42 = -363;

	t42 = (((x197-x198)==x199)+x200);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 1269626U;
	int64_t x203 = INT64_MAX;
	static int8_t x204 = INT8_MIN;

	t43 = (((x201-x202)==x203)+x204);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -1831;
	int16_t x206 = INT16_MIN;
	static volatile uint32_t x207 = 2573330U;
	int64_t x208 = INT64_MAX;
	int64_t t44 = INT64_MAX;

	t44 = (((x205-x206)==x207)+x208);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x209 = -1;
	static volatile int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;

	t45 = (((x209-x210)==x211)+x212);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x214 = UINT16_MAX;
	uint8_t x215 = 28U;
	static int32_t t46 = INT32_MIN;

	t46 = (((x213-x214)==x215)+x216);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x218 = INT16_MIN;
	static volatile int32_t x219 = 789834963;
	volatile uint64_t x220 = 1049998652LLU;

	t47 = (((x217-x218)==x219)+x220);

	if (t47 != 1049998652LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = 18402552;
	volatile int64_t x222 = 22971LL;
	volatile uint32_t x223 = 1U;
	int16_t x224 = 5;

	t48 = (((x221-x222)==x223)+x224);

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x226 = INT32_MIN;
	static int32_t x227 = INT32_MAX;
	static int8_t x228 = 1;

	t49 = (((x225-x226)==x227)+x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	int8_t x230 = 35;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t50 = -194;

	t50 = (((x229-x230)==x231)+x232);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x233 = 23;
	static uint32_t x235 = UINT32_MAX;
	volatile int16_t x236 = INT16_MIN;
	int32_t t51 = 2;

	t51 = (((x233-x234)==x235)+x236);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 3492837U;
	int8_t x238 = INT8_MAX;
	uint64_t x239 = 45473955LLU;
	uint32_t x240 = 19U;
	static uint32_t t52 = 1U;

	t52 = (((x237-x238)==x239)+x240);

	if (t52 != 19U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x245 = 144U;
	volatile uint64_t x246 = 6556870640LLU;
	int16_t x247 = INT16_MIN;
	volatile int32_t t53 = -96628;

	t53 = (((x245-x246)==x247)+x248);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	uint16_t x250 = 85U;
	static int32_t x251 = INT32_MIN;
	static uint64_t x252 = 6LLU;
	volatile uint64_t t54 = 1403424429996185LLU;

	t54 = (((x249-x250)==x251)+x252);

	if (t54 != 6LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = 1441911;
	volatile uint32_t x254 = 1U;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MAX;

	t55 = (((x253-x254)==x255)+x256);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x257 = INT64_MAX;
	static volatile uint64_t x258 = UINT64_MAX;
	volatile int64_t x259 = INT64_MIN;
	static uint8_t x260 = 106U;
	volatile int32_t t56 = 180709;

	t56 = (((x257-x258)==x259)+x260);

	if (t56 != 107) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x263 = INT16_MIN;
	volatile int32_t x264 = INT32_MAX;
	int32_t t57 = INT32_MAX;

	t57 = (((x261-x262)==x263)+x264);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x269 = UINT64_MAX;
	static int64_t x271 = INT64_MAX;
	int16_t x272 = -1;
	volatile int32_t t58 = 434838044;

	t58 = (((x269-x270)==x271)+x272);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = 2595;
	int64_t x274 = INT64_MAX;
	int64_t x275 = -122236801LL;
	static int64_t x276 = -91805LL;
	volatile int64_t t59 = 2131147851734422LL;

	t59 = (((x273-x274)==x275)+x276);

	if (t59 != -91805LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = -1LL;
	static uint8_t x278 = 3U;
	int32_t x279 = -1;
	static int8_t x280 = INT8_MIN;
	int32_t t60 = 7;

	t60 = (((x277-x278)==x279)+x280);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x282 = INT16_MAX;
	uint64_t x283 = 21LLU;
	volatile int16_t x284 = -165;
	static int32_t t61 = -12;

	t61 = (((x281-x282)==x283)+x284);

	if (t61 != -165) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x286 = -1;
	uint32_t x288 = 7630U;
	uint32_t t62 = 23U;

	t62 = (((x285-x286)==x287)+x288);

	if (t62 != 7630U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x289 = -1LL;
	static int8_t x290 = INT8_MAX;
	int8_t x291 = -1;
	volatile int32_t t63 = -165;

	t63 = (((x289-x290)==x291)+x292);

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x293 = 0;
	int64_t x294 = INT64_MAX;
	uint32_t x295 = UINT32_MAX;
	int32_t t64 = -15969;

	t64 = (((x293-x294)==x295)+x296);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x297 = -1;
	uint16_t x299 = 10295U;
	uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x297-x298)==x299)+x300);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {


	t66 = (((x301-x302)==x303)+x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x305 = INT16_MIN;
	uint64_t x307 = 472671976285669661LLU;
	int16_t x308 = 7;
	static int32_t t67 = -1748355;

	t67 = (((x305-x306)==x307)+x308);

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	int16_t x310 = -1;
	int16_t x312 = -1;
	int32_t t68 = 12214523;

	t68 = (((x309-x310)==x311)+x312);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = -2148769274148LL;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	static uint64_t x320 = 267090868LLU;

	t69 = (((x317-x318)==x319)+x320);

	if (t69 != 267090868LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = -34;
	uint8_t x322 = 8U;
	volatile uint16_t x324 = 3612U;

	t70 = (((x321-x322)==x323)+x324);

	if (t70 != 3612) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x325 = UINT8_MAX;
	static volatile uint64_t x326 = 1951377289973LLU;
	int64_t x327 = INT64_MIN;
	volatile uint64_t x328 = 97LLU;
	uint64_t t71 = 52613025377153572LLU;

	t71 = (((x325-x326)==x327)+x328);

	if (t71 != 97LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x330 = INT32_MIN;
	volatile uint32_t x331 = 424U;
	uint8_t x332 = UINT8_MAX;
	int32_t t72 = 40356399;

	t72 = (((x329-x330)==x331)+x332);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = -33572296LL;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t73 = -24;

	t73 = (((x337-x338)==x339)+x340);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x342 = 28;
	uint8_t x343 = 0U;
	volatile uint8_t x344 = 1U;
	static volatile int32_t t74 = 516160;

	t74 = (((x341-x342)==x343)+x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = -1;
	int16_t x350 = -55;
	int64_t x351 = -51398806130613676LL;
	uint32_t x352 = 154303U;
	static volatile uint32_t t75 = 29318154U;

	t75 = (((x349-x350)==x351)+x352);

	if (t75 != 154303U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -1;
	volatile int32_t t76 = -8999;

	t76 = (((x353-x354)==x355)+x356);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = 68104702151LLU;
	uint32_t x358 = 3U;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = 1;
	int32_t t77 = -1820;

	t77 = (((x357-x358)==x359)+x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = -1;
	static uint8_t x363 = 22U;
	int8_t x364 = 13;
	int32_t t78 = -10;

	t78 = (((x361-x362)==x363)+x364);

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MAX;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = 1U;
	static int32_t t79 = -107093;

	t79 = (((x365-x366)==x367)+x368);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MIN;
	volatile int16_t x372 = -7085;

	t80 = (((x369-x370)==x371)+x372);

	if (t80 != -7085) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = -27;
	int8_t x375 = -13;
	volatile uint8_t x376 = 49U;
	int32_t t81 = -10076;

	t81 = (((x373-x374)==x375)+x376);

	if (t81 != 49) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x380 = INT64_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = (((x377-x378)==x379)+x380);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	static volatile int64_t t83 = INT64_MIN;

	t83 = (((x381-x382)==x383)+x384);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x386 = -1LL;
	volatile int16_t x387 = -1;
	volatile int32_t x388 = 71;
	volatile int32_t t84 = -52675;

	t84 = (((x385-x386)==x387)+x388);

	if (t84 != 71) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = 75U;
	int16_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int32_t x392 = INT32_MIN;
	static int32_t t85 = INT32_MIN;

	t85 = (((x389-x390)==x391)+x392);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = -31;
	volatile uint32_t x394 = 249244U;
	int16_t x395 = INT16_MAX;
	int8_t x396 = -1;
	volatile int32_t t86 = -484543666;

	t86 = (((x393-x394)==x395)+x396);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x397 = INT8_MAX;
	int32_t x398 = 7609;
	int32_t x399 = -31;
	int16_t x400 = INT16_MIN;

	t87 = (((x397-x398)==x399)+x400);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x401 = INT32_MIN;
	static int32_t x402 = -19485;
	int64_t x404 = -150709763843937834LL;
	volatile int64_t t88 = 22454384207163LL;

	t88 = (((x401-x402)==x403)+x404);

	if (t88 != -150709763843937834LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = 47U;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = UINT16_MAX;
	int32_t t89 = -211565;

	t89 = (((x413-x414)==x415)+x416);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x423 = 8043604LLU;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (((x421-x422)==x423)+x424);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x426 = INT16_MAX;
	volatile int8_t x427 = 0;
	volatile int16_t x428 = INT16_MIN;
	int32_t t91 = -13532100;

	t91 = (((x425-x426)==x427)+x428);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x430 = INT16_MAX;
	int8_t x431 = 0;
	static int64_t x432 = INT64_MAX;
	volatile int64_t t92 = INT64_MAX;

	t92 = (((x429-x430)==x431)+x432);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x433 = 65U;
	int32_t x434 = INT32_MAX;
	volatile int16_t x435 = INT16_MAX;
	static int32_t x436 = INT32_MIN;
	int32_t t93 = INT32_MIN;

	t93 = (((x433-x434)==x435)+x436);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x439 = INT64_MAX;
	int8_t x440 = INT8_MIN;
	volatile int32_t t94 = 1;

	t94 = (((x437-x438)==x439)+x440);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x441 = INT16_MIN;
	static uint32_t x442 = UINT32_MAX;
	int64_t x443 = INT64_MIN;
	static int32_t x444 = -1;
	int32_t t95 = -520855;

	t95 = (((x441-x442)==x443)+x444);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x445 = -1;
	static int8_t x447 = 2;
	static uint32_t x448 = UINT32_MAX;
	uint32_t t96 = UINT32_MAX;

	t96 = (((x445-x446)==x447)+x448);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x453 = UINT64_MAX;
	volatile int32_t x454 = INT32_MIN;

	t97 = (((x453-x454)==x455)+x456);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MAX;
	int32_t x458 = -1;
	int16_t x459 = -503;
	static uint16_t x460 = 1471U;
	int32_t t98 = 29;

	t98 = (((x457-x458)==x459)+x460);

	if (t98 != 1471) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x461 = INT16_MIN;
	uint16_t x463 = 3295U;
	int8_t x464 = 0;

	t99 = (((x461-x462)==x463)+x464);

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

