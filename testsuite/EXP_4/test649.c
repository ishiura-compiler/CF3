#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x5 = -1;
uint64_t x6 = 261815668225LLU;
uint32_t x9 = UINT32_MAX;
int8_t x10 = -56;
volatile int8_t x11 = INT8_MIN;
uint32_t t2 = UINT32_MAX;
static volatile int8_t x13 = 34;
int64_t x15 = INT64_MIN;
uint32_t x16 = 365U;
int64_t x18 = -1LL;
int64_t x20 = INT64_MIN;
volatile int64_t t4 = INT64_MIN;
int32_t x26 = -1;
uint64_t t6 = 1403467143LLU;
static uint64_t x32 = 3546947LLU;
int64_t x44 = -45LL;
int16_t x45 = INT16_MAX;
int64_t t12 = 1487LL;
int32_t x63 = -838;
int8_t x65 = -1;
uint8_t x66 = UINT8_MAX;
int16_t x68 = INT16_MIN;
uint32_t x80 = 84U;
static uint64_t x84 = 44070LLU;
uint64_t x89 = UINT64_MAX;
volatile int64_t x90 = -88083238LL;
static volatile int8_t x91 = INT8_MIN;
static int32_t x95 = INT32_MIN;
static int64_t x98 = 2LL;
int16_t x102 = INT16_MIN;
volatile uint16_t x104 = UINT16_MAX;
volatile int16_t x106 = INT16_MIN;
volatile uint64_t t26 = UINT64_MAX;
int16_t x114 = -1;
volatile int32_t t28 = INT32_MAX;
static int64_t x121 = -16506242275540353LL;
volatile uint16_t x123 = 164U;
uint64_t x124 = UINT64_MAX;
volatile int64_t t30 = 3062278106LL;
static uint64_t x131 = 2426356416015666LLU;
static int64_t x133 = INT64_MAX;
volatile int64_t t34 = INT64_MIN;
int64_t x149 = INT64_MIN;
static volatile int8_t x150 = INT8_MIN;
static uint64_t x153 = 162845346LLU;
int64_t t38 = -1673229941609057LL;
static int8_t x161 = -3;
uint16_t x168 = UINT16_MAX;
volatile int64_t t42 = INT64_MIN;
volatile int8_t x177 = -6;
int16_t x183 = -1;
int8_t x191 = INT8_MIN;
uint32_t x192 = UINT32_MAX;
int32_t x194 = -1;
static uint16_t x195 = 4624U;
static int16_t x196 = INT16_MIN;
volatile uint16_t x203 = UINT16_MAX;
static volatile int32_t t50 = INT32_MAX;
int64_t t51 = -27287092906714LL;
int16_t x215 = 1985;
int64_t x218 = -1LL;
int16_t x219 = INT16_MAX;
int64_t t55 = 1459378227LL;
static uint16_t x231 = 1U;
static int64_t x232 = INT64_MAX;
volatile uint64_t x238 = UINT64_MAX;
volatile int64_t x240 = 11558317516LL;
static int64_t x242 = 64446LL;
int8_t x243 = 0;
int64_t t59 = 222825507844LL;
uint8_t x246 = 55U;
volatile uint64_t t60 = 2214325376467460419LLU;
uint8_t x250 = 9U;
int16_t x251 = INT16_MIN;
static volatile int64_t t62 = -423006213095952LL;
int64_t x260 = INT64_MAX;
volatile int64_t t63 = 362230106311LL;
int16_t x261 = INT16_MIN;
int8_t x268 = INT8_MAX;
uint8_t x271 = UINT8_MAX;
uint8_t x282 = UINT8_MAX;
int16_t x284 = -141;
volatile int32_t t69 = -4;
int64_t t70 = 17251LL;
uint8_t x290 = 21U;
int64_t x296 = INT64_MIN;
int64_t x298 = INT64_MIN;
int8_t x299 = INT8_MIN;
volatile int64_t x300 = INT64_MAX;
static int32_t x305 = INT32_MIN;
volatile uint32_t t75 = 3U;
uint8_t x311 = 27U;
uint16_t x313 = 811U;
volatile int64_t x322 = INT64_MAX;
volatile int64_t t80 = -7945179467679382LL;
int16_t x333 = INT16_MIN;
int32_t x342 = -1;
int64_t x344 = INT64_MAX;
uint64_t x357 = 434599081237LLU;
int32_t t91 = -3276;
int32_t x377 = INT32_MIN;
volatile int8_t x382 = INT8_MAX;
uint16_t x384 = UINT16_MAX;
static uint8_t x385 = UINT8_MAX;
volatile int32_t t94 = -20;
volatile int32_t x393 = 2340;
uint8_t x397 = 0U;
int32_t x406 = 785;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 1450LLU;
	uint16_t x3 = 76U;
	int64_t x4 = INT64_MIN;
	uint64_t t0 = 367932948100LLU;

	t0 = (x1|(x2&(x3/x4)));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MIN;
	volatile uint32_t x8 = 91102544U;
	static volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5|(x6&(x7/x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x12 = INT32_MIN;

	t2 = (x9|(x10&(x11/x12)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 3U;
	int64_t t3 = 213844447903837LL;

	t3 = (x13|(x14&(x15/x16)));

	if (t3 != 35LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;

	t4 = (x17|(x18&(x19/x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static uint8_t x22 = UINT8_MAX;
	volatile uint16_t x23 = UINT16_MAX;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 8504458;

	t5 = (x21|(x22&(x23/x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static uint16_t x27 = 28U;
	uint64_t x28 = 117301005149LLU;

	t6 = (x25|(x26&(x27/x28)));

	if (t6 != 4294967295LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile uint32_t x30 = 134844U;
	static int32_t x31 = 0;
	uint64_t t7 = 402541825142873512LLU;

	t7 = (x29|(x30&(x31/x32)));

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 278688LLU;
	uint32_t x34 = 36221472U;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 252206731LLU;

	t8 = (x33|(x34&(x35/x36)));

	if (t8 != 278688LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -49;
	int32_t x38 = INT32_MAX;
	uint64_t x39 = 13049486458055644LLU;
	volatile int16_t x40 = INT16_MIN;
	uint64_t t9 = 274LLU;

	t9 = (x37|(x38&(x39/x40)));

	if (t9 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	static volatile int64_t x42 = 4040540339LL;
	int8_t x43 = INT8_MIN;
	volatile int64_t t10 = -4311710764740031608LL;

	t10 = (x41|(x42&(x43/x44)));

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 212U;
	int64_t x48 = INT64_MAX;
	static volatile int64_t t11 = 42180846LL;

	t11 = (x45|(x46&(x47/x48)));

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	volatile int64_t x50 = INT64_MIN;
	int16_t x51 = -1;
	static volatile int8_t x52 = -1;

	t12 = (x49|(x50&(x51/x52)));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 316088983U;
	volatile int32_t x54 = INT32_MIN;
	static volatile uint64_t x55 = 388369758854LLU;
	int64_t x56 = -1LL;
	volatile uint64_t t13 = 1208996514232LLU;

	t13 = (x53|(x54&(x55/x56)));

	if (t13 != 316088983LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -78722;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 84171942LLU;

	t14 = (x57|(x58&(x59/x60)));

	if (t14 != 2147483647LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	static volatile int16_t x64 = -1;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (x61|(x62&(x63/x64)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x67 = UINT8_MAX;
	volatile int32_t t16 = 1;

	t16 = (x65|(x66&(x67/x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 0;
	uint16_t x74 = UINT16_MAX;
	static uint8_t x75 = 119U;
	int64_t x76 = -241137232992058LL;
	int64_t t17 = 69613608913668235LL;

	t17 = (x73|(x74&(x75/x76)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = -685410083086259458LL;
	static volatile uint32_t x78 = 604178U;
	static volatile uint16_t x79 = UINT16_MAX;
	int64_t t18 = -72338771917178LL;

	t18 = (x77|(x78&(x79/x80)));

	if (t18 != -685410083086259458LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -1LL;
	uint64_t x82 = 28448337516506893LLU;
	volatile int8_t x83 = INT8_MAX;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x81|(x82&(x83/x84)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	static int8_t x86 = INT8_MIN;
	static volatile int16_t x87 = INT16_MIN;
	volatile uint16_t x88 = 3664U;
	int64_t t20 = 0LL;

	t20 = (x85|(x86&(x87/x88)));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x92 = INT8_MIN;
	uint64_t t21 = UINT64_MAX;

	t21 = (x89|(x90&(x91/x92)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t22 = -15669;

	t22 = (x93|(x94&(x95/x96)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = INT16_MAX;
	int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	int64_t t23 = 910LL;

	t23 = (x97|(x98&(x99/x100)));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = 240956693;
	int16_t x103 = INT16_MAX;
	static volatile int32_t t24 = 133418;

	t24 = (x101|(x102&(x103/x104)));

	if (t24 != 240956693) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	uint16_t x107 = 3313U;
	uint8_t x108 = 15U;
	int64_t t25 = INT64_MIN;

	t25 = (x105|(x106&(x107/x108)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	static volatile int32_t x111 = INT32_MAX;
	int8_t x112 = INT8_MIN;

	t26 = (x109|(x110&(x111/x112)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x113 = 1755143490644525234LLU;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t x116 = INT32_MAX;
	uint64_t t27 = 30962507005873067LLU;

	t27 = (x113|(x114&(x115/x116)));

	if (t27 != 1755143490644525234LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	static int16_t x118 = INT16_MIN;
	int8_t x119 = 2;
	uint8_t x120 = 12U;

	t28 = (x117|(x118&(x119/x120)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x122 = UINT32_MAX;
	static uint64_t t29 = 1LLU;

	t29 = (x121|(x122&(x123/x124)));

	if (t29 != 18430237831434011263LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -2;

	t30 = (x125|(x126&(x127/x128)));

	if (t30 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	volatile int32_t x130 = -1;
	volatile uint16_t x132 = 76U;
	uint64_t t31 = 6699LLU;

	t31 = (x129|(x130&(x131/x132)));

	if (t31 != 18446744072812472795LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x134 = -1;
	uint8_t x135 = 0U;
	static int8_t x136 = -1;
	int64_t t32 = INT64_MAX;

	t32 = (x133|(x134&(x135/x136)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = 1517;
	volatile int32_t x139 = -1;
	volatile int64_t x140 = INT64_MAX;
	static int64_t t33 = -184612920192LL;

	t33 = (x137|(x138&(x139/x140)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x141 = INT64_MIN;
	uint16_t x142 = 416U;
	volatile int8_t x143 = -28;
	uint8_t x144 = 76U;

	t34 = (x141|(x142&(x143/x144)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	volatile int32_t x147 = INT32_MIN;
	int16_t x148 = -1136;
	volatile int64_t t35 = INT64_MAX;

	t35 = (x145|(x146&(x147/x148)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x151 = INT16_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = (x149|(x150&(x151/x152)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x154 = -1LL;
	int8_t x155 = -31;
	int16_t x156 = INT16_MIN;
	uint64_t t37 = 23921036LLU;

	t37 = (x153|(x154&(x155/x156)));

	if (t37 != 162845346LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -6275LL;
	int64_t x158 = -1LL;
	int16_t x159 = -7;
	int32_t x160 = INT32_MIN;

	t38 = (x157|(x158&(x159/x160)));

	if (t38 != -6275LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x162 = 217470921337LLU;
	uint32_t x163 = 9206910U;
	volatile uint64_t x164 = UINT64_MAX;
	uint64_t t39 = 2902LLU;

	t39 = (x161|(x162&(x163/x164)));

	if (t39 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -57;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = 43U;
	volatile int32_t t40 = 60948058;

	t40 = (x165|(x166&(x167/x168)));

	if (t40 != -57) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = -1;
	volatile uint16_t x170 = 372U;
	static int32_t x171 = -246231709;
	static volatile int32_t x172 = -34;
	int32_t t41 = 16390422;

	t41 = (x169|(x170&(x171/x172)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MIN;
	int32_t x175 = -1;
	static int32_t x176 = -3186302;

	t42 = (x173|(x174&(x175/x176)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x178 = 65467U;
	int8_t x179 = -1;
	int8_t x180 = -1;
	uint32_t t43 = 134942721U;

	t43 = (x177|(x178&(x179/x180)));

	if (t43 != 4294967291U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -9637;
	uint64_t x182 = 44138567993257LLU;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t44 = 3241LLU;

	t44 = (x181|(x182&(x183/x184)));

	if (t44 != 18446744073709541979LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = -1;
	int64_t x187 = INT64_MIN;
	int64_t x188 = 196432LL;
	volatile int64_t t45 = 320629219572906LL;

	t45 = (x185|(x186&(x187/x188)));

	if (t45 != -52LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 3U;
	int64_t x190 = INT64_MIN;
	volatile int64_t t46 = -13285240678141LL;

	t46 = (x189|(x190&(x191/x192)));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 0U;
	int32_t t47 = 4;

	t47 = (x193|(x194&(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 1U;
	int8_t x198 = INT8_MIN;
	volatile int8_t x199 = -26;
	int32_t x200 = INT32_MIN;
	int32_t t48 = -44027085;

	t48 = (x197|(x198&(x199/x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MIN;
	volatile int32_t x202 = -6522561;
	int16_t x204 = INT16_MIN;
	int64_t t49 = 17831800596LL;

	t49 = (x201|(x202&(x203/x204)));

	if (t49 != -6522561LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MAX;
	int8_t x206 = INT8_MIN;
	int8_t x207 = 1;
	int8_t x208 = -13;

	t50 = (x205|(x206&(x207/x208)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = 5241840;
	volatile int16_t x210 = INT16_MAX;
	int64_t x211 = 1305762951357LL;
	uint32_t x212 = UINT32_MAX;

	t51 = (x209|(x210&(x211/x212)));

	if (t51 != 5241840LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = 4025;
	uint32_t x214 = 821827989U;
	int8_t x216 = INT8_MIN;
	volatile uint32_t t52 = 222565708U;

	t52 = (x213|(x214&(x215/x216)));

	if (t52 != 821829561U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -92;
	uint8_t x220 = 1U;
	volatile int64_t t53 = 3LL;

	t53 = (x217|(x218&(x219/x220)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 15818U;
	int16_t x222 = INT16_MIN;
	int8_t x223 = 3;
	uint16_t x224 = 17U;
	int32_t t54 = 0;

	t54 = (x221|(x222&(x223/x224)));

	if (t54 != 15818) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x225 = 1U;
	volatile int64_t x226 = -1LL;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 528U;

	t55 = (x225|(x226&(x227/x228)));

	if (t55 != -4067203LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = 8;
	static volatile int16_t x230 = -1;
	volatile int64_t t56 = 3963139819LL;

	t56 = (x229|(x230&(x231/x232)));

	if (t56 != 8LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = 45;
	static int8_t x234 = INT8_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	volatile int32_t x236 = INT32_MIN;
	static uint64_t t57 = 5870LLU;

	t57 = (x233|(x234&(x235/x236)));

	if (t57 != 45LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x237 = -1LL;
	volatile int8_t x239 = 0;
	uint64_t t58 = UINT64_MAX;

	t58 = (x237|(x238&(x239/x240)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 65212U;
	int8_t x244 = INT8_MAX;

	t59 = (x241|(x242&(x243/x244)));

	if (t59 != 65212LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x247 = -1;
	uint64_t x248 = UINT64_MAX;

	t60 = (x245|(x246&(x247/x248)));

	if (t60 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -10974;
	int8_t x252 = INT8_MIN;
	int32_t t61 = 11837151;

	t61 = (x249|(x250&(x251/x252)));

	if (t61 != -10974) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = -1050214662LL;
	int32_t x254 = 184432;
	volatile int64_t x255 = -1625907764613LL;
	int64_t x256 = -7362737059732LL;

	t62 = (x253|(x254&(x255/x256)));

	if (t62 != -1050214662LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 1U;
	int16_t x258 = -1;
	uint32_t x259 = UINT32_MAX;

	t63 = (x257|(x258&(x259/x260)));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x262 = 12833773U;
	volatile uint8_t x263 = 71U;
	int64_t x264 = -4LL;
	volatile int64_t t64 = 58910LL;

	t64 = (x261|(x262&(x263/x264)));

	if (t64 != -11283LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 1648094476809585267LLU;
	int16_t x266 = -12530;
	volatile uint16_t x267 = 1U;
	volatile uint64_t t65 = 7591552227249LLU;

	t65 = (x265|(x266&(x267/x268)));

	if (t65 != 1648094476809585267LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 1487U;
	int64_t x270 = 14LL;
	int16_t x272 = 10;
	static int64_t t66 = 28LL;

	t66 = (x269|(x270&(x271/x272)));

	if (t66 != 1487LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	static uint64_t x275 = 205145765LLU;
	static int32_t x276 = INT32_MAX;
	volatile uint64_t t67 = 2184LLU;

	t67 = (x273|(x274&(x275/x276)));

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MAX;
	uint16_t x278 = 223U;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 214542906914041LLU;
	static uint64_t t68 = 28289LLU;

	t68 = (x277|(x278&(x279/x280)));

	if (t68 != 2147483647LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 13U;
	volatile int8_t x283 = INT8_MIN;

	t69 = (x281|(x282&(x283/x284)));

	if (t69 != 13) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = 58384;
	int64_t x286 = -1LL;
	int16_t x287 = 0;
	uint16_t x288 = 55U;

	t70 = (x285|(x286&(x287/x288)));

	if (t70 != 58384LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = 87603228U;
	uint8_t x291 = 4U;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t71 = 214218U;

	t71 = (x289|(x290&(x291/x292)));

	if (t71 != 87603228U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x293 = -1LL;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	volatile int64_t t72 = -6756165521039LL;

	t72 = (x293|(x294&(x295/x296)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -1;
	int64_t t73 = 127LL;

	t73 = (x297|(x298&(x299/x300)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	uint8_t x302 = 60U;
	uint64_t x303 = UINT64_MAX;
	static int32_t x304 = -1;
	volatile uint64_t t74 = 12020LLU;

	t74 = (x301|(x302&(x303/x304)));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x306 = INT32_MAX;
	volatile uint32_t x307 = 104629289U;
	volatile int16_t x308 = 6089;

	t75 = (x305|(x306&(x307/x308)));

	if (t75 != 2147500831U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	volatile uint64_t x312 = UINT64_MAX;
	uint64_t t76 = 76LLU;

	t76 = (x309|(x310&(x311/x312)));

	if (t76 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x314 = INT64_MIN;
	int8_t x315 = -1;
	uint8_t x316 = 7U;
	int64_t t77 = 31444LL;

	t77 = (x313|(x314&(x315/x316)));

	if (t77 != 811LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = 44U;
	int16_t x318 = -440;
	volatile uint64_t x319 = UINT64_MAX;
	static volatile int16_t x320 = INT16_MIN;
	volatile uint64_t t78 = 4416857646965316936LLU;

	t78 = (x317|(x318&(x319/x320)));

	if (t78 != 44LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x323 = 9U;
	int32_t x324 = -1;
	int64_t t79 = 230881531066LL;

	t79 = (x321|(x322&(x323/x324)));

	if (t79 != -9LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = 197;
	uint8_t x326 = 0U;
	volatile uint32_t x327 = UINT32_MAX;
	volatile int64_t x328 = -1042255221705457837LL;

	t80 = (x325|(x326&(x327/x328)));

	if (t80 != 197LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = 4006;
	static int32_t x330 = INT32_MIN;
	int16_t x331 = -1;
	int64_t x332 = 12292444LL;
	int64_t t81 = -497089472053563507LL;

	t81 = (x329|(x330&(x331/x332)));

	if (t81 != 4006LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x334 = 1U;
	uint64_t x335 = 34794293123933LLU;
	int16_t x336 = -1;
	volatile uint64_t t82 = 21563702522107LLU;

	t82 = (x333|(x334&(x335/x336)));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 0U;
	static int8_t x338 = -1;
	int64_t x339 = -1LL;
	int16_t x340 = INT16_MAX;
	int64_t t83 = -1965571155053031252LL;

	t83 = (x337|(x338&(x339/x340)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x341 = UINT64_MAX;
	static int64_t x343 = -1LL;
	static uint64_t t84 = UINT64_MAX;

	t84 = (x341|(x342&(x343/x344)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = 10321;
	int64_t x347 = -1LL;
	int32_t x348 = INT32_MAX;
	static int64_t t85 = 14854851LL;

	t85 = (x345|(x346&(x347/x348)));

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 4465165486011119582LLU;
	volatile uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile uint64_t t86 = 7395299528359LLU;

	t86 = (x349|(x350&(x351/x352)));

	if (t86 != 13688537522865895390LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = -53;
	volatile uint16_t x355 = 0U;
	volatile uint64_t x356 = 13810LLU;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (x353|(x354&(x355/x356)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x358 = INT16_MIN;
	volatile uint64_t x359 = 8800279445333984LLU;
	int32_t x360 = INT32_MIN;
	static volatile uint64_t t88 = 836262984189726296LLU;

	t88 = (x357|(x358&(x359/x360)));

	if (t88 != 434599081237LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x365 = -3229107447927LL;
	uint32_t x366 = 479726U;
	uint32_t x367 = 7U;
	static volatile int64_t x368 = 1LL;
	volatile int64_t t89 = 173350052LL;

	t89 = (x365|(x366&(x367/x368)));

	if (t89 != -3229107447921LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -1LL;
	int8_t x370 = INT8_MAX;
	uint64_t x371 = 1378720914834932305LLU;
	static uint32_t x372 = 527U;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x369|(x370&(x371/x372)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = -1;
	int16_t x376 = INT16_MAX;

	t91 = (x373|(x374&(x375/x376)));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x378 = 391487489U;
	int32_t x379 = -1164;
	static volatile uint64_t x380 = 1492759LLU;
	uint64_t t92 = 7088LLU;

	t92 = (x377|(x378&(x379/x380)));

	if (t92 != 18446744071885127680LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 3U;
	int16_t x383 = -4396;
	volatile int32_t t93 = 22139819;

	t93 = (x381|(x382&(x383/x384)));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x386 = 28100U;
	volatile int32_t x387 = INT32_MIN;
	volatile int8_t x388 = INT8_MIN;

	t94 = (x385|(x386&(x387/x388)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = 36;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t95 = 372481594;

	t95 = (x389|(x390&(x391/x392)));

	if (t95 != 36) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x394 = 3;
	volatile int16_t x395 = 1627;
	static uint32_t x396 = 443994U;
	static uint32_t t96 = 64408U;

	t96 = (x393|(x394&(x395/x396)));

	if (t96 != 2340U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x398 = INT16_MIN;
	uint8_t x399 = 1U;
	static volatile int8_t x400 = -1;
	int32_t t97 = 15;

	t97 = (x397|(x398&(x399/x400)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x401 = 47;
	uint64_t x402 = 4028718493435LLU;
	volatile int8_t x403 = INT8_MIN;
	uint8_t x404 = 60U;
	volatile uint64_t t98 = 31778LLU;

	t98 = (x401|(x402&(x403/x404)));

	if (t98 != 4028718493439LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = 30083LLU;
	volatile int32_t x407 = -2567;
	int64_t x408 = 315LL;
	uint64_t t99 = 91425431152926396LLU;

	t99 = (x405|(x406&(x407/x408)));

	if (t99 != 30611LLU) { NG(); } else { ; }
	
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

