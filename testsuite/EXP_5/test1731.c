#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
uint8_t x10 = UINT8_MAX;
int64_t t2 = 29563143967LL;
volatile uint16_t x23 = 7U;
static uint16_t x24 = 1099U;
volatile int32_t t5 = INT32_MIN;
volatile uint32_t x26 = 5150U;
int32_t x27 = INT32_MIN;
int8_t x30 = -1;
int64_t x31 = -760395119LL;
uint16_t x37 = UINT16_MAX;
volatile int32_t x39 = -1;
int32_t t9 = -366897;
int32_t x50 = -1;
uint64_t x51 = 491725LLU;
int8_t x57 = 2;
uint32_t x58 = 4U;
int16_t x64 = -1;
int64_t x65 = -754422284742826LL;
int32_t x74 = INT32_MIN;
static int16_t x75 = 2;
int16_t x79 = -3;
uint64_t x82 = 65555252272439LLU;
uint8_t x87 = 10U;
volatile int32_t t21 = 1;
int32_t t22 = 12102823;
volatile int64_t t23 = 2053586850374LL;
int8_t x115 = -1;
int32_t x119 = INT32_MIN;
volatile int32_t x131 = INT32_MIN;
volatile int16_t x137 = -1;
int16_t x141 = INT16_MAX;
uint8_t x147 = UINT8_MAX;
volatile int32_t x159 = INT32_MAX;
volatile uint64_t t37 = 632LLU;
int64_t x168 = -5180LL;
int64_t x184 = -11162394444028344LL;
volatile int8_t x194 = INT8_MAX;
volatile uint8_t x195 = 1U;
uint64_t x196 = 188LLU;
int8_t x198 = INT8_MIN;
uint32_t x199 = UINT32_MAX;
static int8_t x202 = 49;
int8_t x203 = 12;
static int32_t t47 = -4079;
volatile uint64_t x210 = UINT64_MAX;
static int32_t x213 = -1;
static volatile uint64_t x215 = 523285022690LLU;
uint64_t t50 = UINT64_MAX;
static uint64_t t51 = 13247151515544LLU;
int8_t x227 = -1;
static int32_t x230 = INT32_MAX;
int16_t x234 = -1;
int32_t x236 = -1;
uint16_t x238 = 12U;
static int32_t x244 = INT32_MAX;
int8_t x248 = INT8_MIN;
uint64_t x252 = 1275149LLU;
static int16_t x253 = -1;
uint32_t x258 = UINT32_MAX;
static int32_t x260 = -1;
int8_t x264 = 8;
int16_t x271 = INT16_MAX;
static volatile int32_t x280 = INT32_MIN;
volatile int32_t t65 = -71383760;
int64_t x286 = -1LL;
volatile int8_t x290 = 1;
int16_t x300 = INT16_MIN;
int16_t x302 = 0;
int64_t x303 = INT64_MAX;
int16_t x304 = INT16_MIN;
static volatile int64_t x305 = INT64_MAX;
int8_t x314 = INT8_MIN;
int8_t x334 = -17;
int64_t x335 = INT64_MAX;
int64_t t79 = -14707494925909098LL;
int32_t x338 = INT32_MIN;
uint32_t x343 = 1818U;
static uint32_t x363 = 9207074U;
int16_t x365 = INT16_MIN;
volatile uint8_t x368 = 1U;
volatile int64_t x370 = INT64_MAX;
int16_t x375 = INT16_MIN;
volatile uint32_t t89 = 1785709U;
uint64_t x377 = 211502750LLU;
int8_t x378 = -13;
volatile uint8_t x381 = 11U;
volatile int16_t x382 = -62;
static int16_t x385 = INT16_MIN;
volatile uint16_t x389 = 9102U;
int16_t x394 = -1;
int16_t x403 = 2545;
uint64_t x410 = 1075553265LLU;
static volatile uint8_t x411 = 7U;
uint64_t x412 = 15545311920LLU;
static volatile uint64_t t98 = 7LLU;
volatile uint64_t t99 = 822388904176061369LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MIN;
	int16_t x4 = INT16_MIN;
	int64_t t0 = 386068075856803199LL;

	t0 = (x1-((x2&x3)/x4));

	if (t0 != -281474976710784LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -2;
	int8_t x6 = 0;
	static int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 3;

	t1 = (x5-((x6&x7)/x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	int32_t x11 = INT32_MAX;
	static volatile uint8_t x12 = UINT8_MAX;

	t2 = (x9-((x10&x11)/x12));

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -2678700599687483890LL;

	t3 = (x13-((x14&x15)/x16));

	if (t3 != -32769LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -1LL;
	int8_t x19 = -20;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -1LL;

	t4 = (x17-((x18&x19)/x20));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;

	t5 = (x21-((x22&x23)/x24));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -21;
	int16_t x28 = -1;
	uint32_t t6 = 6540U;

	t6 = (x25-((x26&x27)/x28));

	if (t6 != 4294967275U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint64_t x32 = 1LLU;
	static volatile uint64_t t7 = 39518492LLU;

	t7 = (x29-((x30&x31)/x32));

	if (t7 != 760395118LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	static volatile uint64_t t8 = 2897811LLU;

	t8 = (x33-((x34&x35)/x36));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 1850U;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37-((x38&x39)/x40));

	if (t9 != 65528) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 5U;
	uint32_t x42 = 14U;
	uint8_t x43 = UINT8_MAX;
	volatile int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = 7U;

	t10 = (x41-((x42&x43)/x44));

	if (t10 != 5U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = 4260LLU;
	int8_t x48 = INT8_MIN;
	static uint64_t t11 = UINT64_MAX;

	t11 = (x45-((x46&x47)/x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int32_t x52 = INT32_MIN;
	uint64_t t12 = UINT64_MAX;

	t12 = (x49-((x50&x51)/x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x59 = 2009U;
	volatile int16_t x60 = -1;
	volatile uint32_t t13 = 12U;

	t13 = (x57-((x58&x59)/x60));

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 525882707808963225LL;
	static uint8_t x62 = 75U;
	static volatile int16_t x63 = 277;
	volatile int64_t t14 = -1520LL;

	t14 = (x61-((x62&x63)/x64));

	if (t14 != 525882707808963226LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = 3U;
	int16_t x67 = INT16_MIN;
	int16_t x68 = -6;
	volatile int64_t t15 = 99987388134024LL;

	t15 = (x65-((x66&x67)/x68));

	if (t15 != -754422284742826LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 2681;
	int8_t x70 = INT8_MIN;
	uint32_t x71 = UINT32_MAX;
	static int32_t x72 = -1;
	volatile uint32_t t16 = 9059U;

	t16 = (x69-((x70&x71)/x72));

	if (t16 != 2681U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 22U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t17 = 72253648;

	t17 = (x73-((x74&x75)/x76));

	if (t17 != 22) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MAX;
	uint16_t x78 = 85U;
	int64_t x80 = INT64_MAX;
	volatile int64_t t18 = 51826089048093468LL;

	t18 = (x77-((x78&x79)/x80));

	if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MAX;
	volatile int8_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	uint64_t t19 = 635333200LLU;

	t19 = (x81-((x82&x83)/x84));

	if (t19 != 2147468384LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x85 = UINT8_MAX;
	int16_t x86 = 2;
	int16_t x88 = INT16_MIN;
	int32_t t20 = -104179809;

	t20 = (x85-((x86&x87)/x88));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 1;
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = -28;
	volatile int8_t x92 = INT8_MIN;

	t21 = (x89-((x90&x91)/x92));

	if (t21 != 512) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = -1;
	static int16_t x94 = INT16_MAX;
	uint8_t x95 = 5U;
	volatile uint16_t x96 = 31U;

	t22 = (x93-((x94&x95)/x96));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = 80U;
	uint8_t x98 = UINT8_MAX;
	static int64_t x99 = INT64_MIN;
	uint8_t x100 = UINT8_MAX;

	t23 = (x97-((x98&x99)/x100));

	if (t23 != 80LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x101 = 6691660U;
	uint8_t x102 = 26U;
	int16_t x103 = INT16_MIN;
	volatile int8_t x104 = INT8_MIN;
	volatile uint32_t t24 = 371161362U;

	t24 = (x101-((x102&x103)/x104));

	if (t24 != 6691660U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = -1;
	int8_t x106 = INT8_MAX;
	static uint16_t x107 = UINT16_MAX;
	uint8_t x108 = 113U;
	volatile int32_t t25 = 0;

	t25 = (x105-((x106&x107)/x108));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	static int32_t x110 = -1;
	static int8_t x111 = 12;
	int64_t x112 = 310381347922184666LL;
	volatile int64_t t26 = 345530406644857LL;

	t26 = (x109-((x110&x111)/x112));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = -12116967168LL;
	static uint16_t x116 = 5U;
	volatile int64_t t27 = -6066136LL;

	t27 = (x113-((x114&x115)/x116));

	if (t27 != 2423393305LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = -26;
	int32_t x118 = INT32_MIN;
	static uint16_t x120 = 11882U;
	static int32_t t28 = -1;

	t28 = (x117-((x118&x119)/x120));

	if (t28 != 180708) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	int64_t x122 = -1211008LL;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = 116U;
	static int64_t t29 = 3LL;

	t29 = (x121-((x122&x123)/x124));

	if (t29 != -22317LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 32;
	uint16_t x126 = 0U;
	int32_t x127 = INT32_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t30 = 1;

	t30 = (x125-((x126&x127)/x128));

	if (t30 != 32) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = -1LL;
	int64_t x130 = -13211455364709LL;
	uint64_t x132 = 5582652129LLU;
	volatile uint64_t t31 = 7332994426445LLU;

	t31 = (x129-((x130&x131)/x132));

	if (t31 != 18446744070405256375LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = UINT64_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile uint64_t t32 = 2724548LLU;

	t32 = (x133-((x134&x135)/x136));

	if (t32 != 18446462594437808126LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = INT16_MIN;
	volatile uint16_t x139 = 824U;
	uint16_t x140 = UINT16_MAX;
	static int32_t t33 = -12;

	t33 = (x137-((x138&x139)/x140));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x142 = -1;
	uint32_t x143 = 60451U;
	int64_t x144 = 944480LL;
	volatile int64_t t34 = 354355680214LL;

	t34 = (x141-((x142&x143)/x144));

	if (t34 != 32767LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MAX;
	volatile int8_t x146 = 1;
	int32_t x148 = INT32_MIN;
	int64_t t35 = INT64_MAX;

	t35 = (x145-((x146&x147)/x148));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MIN;
	static int16_t x152 = INT16_MIN;
	int64_t t36 = -48040LL;

	t36 = (x149-((x150&x151)/x152));

	if (t36 != -281474976743424LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 1389658803167LLU;
	volatile uint32_t x158 = 39U;
	int8_t x160 = 1;

	t37 = (x157-((x158&x159)/x160));

	if (t37 != 1389658803128LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = -1;
	uint32_t x162 = 28554859U;
	static int64_t x163 = INT64_MIN;
	uint32_t x164 = 262123218U;
	int64_t t38 = 311353757930937087LL;

	t38 = (x161-((x162&x163)/x164));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	volatile uint64_t x166 = UINT64_MAX;
	volatile int64_t x167 = INT64_MIN;
	volatile uint64_t t39 = 8329543LLU;

	t39 = (x165-((x166&x167)/x168));

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	volatile uint16_t x170 = UINT16_MAX;
	uint32_t x171 = 357692477U;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x169-((x170&x171)/x172));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = INT8_MIN;
	static int8_t x174 = INT8_MAX;
	int16_t x175 = INT16_MIN;
	volatile int16_t x176 = 1671;
	int32_t t41 = -802799639;

	t41 = (x173-((x174&x175)/x176));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MAX;
	int16_t x183 = INT16_MIN;
	int64_t t42 = 26956691LL;

	t42 = (x181-((x182&x183)/x184));

	if (t42 != -9223372036854774982LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -108368;
	volatile int32_t x186 = INT32_MAX;
	static uint32_t x187 = 63976U;
	static uint16_t x188 = 626U;
	volatile uint32_t t43 = 879U;

	t43 = (x185-((x186&x187)/x188));

	if (t43 != 4294858826U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = -9;
	int16_t x190 = -1;
	int32_t x191 = INT32_MAX;
	static uint8_t x192 = 29U;
	int32_t t44 = -504539149;

	t44 = (x189-((x190&x191)/x192));

	if (t44 != -74051169) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = (x193-((x194&x195)/x196));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 76U;
	volatile int16_t x200 = INT16_MAX;
	volatile uint32_t t46 = 754U;

	t46 = (x197-((x198&x199)/x200));

	if (t46 != 4294836297U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x201 = INT8_MAX;
	uint8_t x204 = 16U;

	t47 = (x201-((x202&x203)/x204));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	static int32_t x206 = 6789;
	static int8_t x207 = -1;
	int8_t x208 = -1;
	static volatile int32_t t48 = -715301182;

	t48 = (x205-((x206&x207)/x208));

	if (t48 != 6788) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x209 = UINT16_MAX;
	static uint64_t x211 = 6263LLU;
	static uint64_t x212 = 1904729291344LLU;
	volatile uint64_t t49 = 913060LLU;

	t49 = (x209-((x210&x211)/x212));

	if (t49 != 65535LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x214 = -1;
	int32_t x216 = INT32_MIN;

	t50 = (x213-((x214&x215)/x216));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x217 = -1820739LL;
	int64_t x218 = -845069093LL;
	volatile int8_t x219 = -1;
	volatile uint64_t x220 = UINT64_MAX;

	t51 = (x217-((x218&x219)/x220));

	if (t51 != 18446744073707730877LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x226 = -1;
	uint64_t x228 = UINT64_MAX;
	uint64_t t52 = 7616LLU;

	t52 = (x225-((x226&x227)/x228));

	if (t52 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	int32_t x231 = 10726431;
	int8_t x232 = INT8_MIN;
	volatile int64_t t53 = -27402414442LL;

	t53 = (x229-((x230&x231)/x232));

	if (t53 != -9223372036854692008LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = 4LL;
	int16_t x235 = -1001;
	volatile int64_t t54 = 495420031282043274LL;

	t54 = (x233-((x234&x235)/x236));

	if (t54 != -997LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x239 = 983268922U;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x237-((x238&x239)/x240));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = 15878;
	uint16_t x242 = 1404U;
	volatile uint16_t x243 = 7U;
	volatile int32_t t56 = 7092726;

	t56 = (x241-((x242&x243)/x244));

	if (t56 != 15878) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x245 = UINT32_MAX;
	int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	uint32_t t57 = 40385698U;

	t57 = (x245-((x246&x247)/x248));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MIN;
	static int64_t x250 = 110410428LL;
	int8_t x251 = -11;
	volatile uint64_t t58 = 17954127LLU;

	t58 = (x249-((x250&x251)/x252));

	if (t58 != 18446744073709518762LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x254 = INT16_MAX;
	uint8_t x255 = UINT8_MAX;
	static uint64_t x256 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x253-((x254&x255)/x256));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = 3LL;
	int32_t x259 = INT32_MAX;
	volatile int64_t t60 = -2969552LL;

	t60 = (x257-((x258&x259)/x260));

	if (t60 != 3LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x261 = INT16_MIN;
	static volatile int64_t x262 = -283LL;
	int8_t x263 = INT8_MIN;
	int64_t t61 = -475905748LL;

	t61 = (x261-((x262&x263)/x264));

	if (t61 != -32720LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = 0;
	static volatile uint32_t x266 = UINT32_MAX;
	int16_t x267 = -1;
	uint16_t x268 = 8980U;
	uint32_t t62 = 490949U;

	t62 = (x265-((x266&x267)/x268));

	if (t62 != 4294489015U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x269 = -1126330;
	static volatile int8_t x270 = INT8_MIN;
	int32_t x272 = -1;
	volatile int32_t t63 = 1;

	t63 = (x269-((x270&x271)/x272));

	if (t63 != -1093690) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = 1;
	uint8_t x274 = 69U;
	static int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	int64_t t64 = -56746935921LL;

	t64 = (x273-((x274&x275)/x276));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 10;
	int32_t x278 = INT32_MAX;
	int16_t x279 = -1;

	t65 = (x277-((x278&x279)/x280));

	if (t65 != 10) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 0U;
	volatile int8_t x282 = INT8_MIN;
	static uint64_t x283 = 862653LLU;
	int64_t x284 = INT64_MAX;
	uint64_t t66 = 444735725LLU;

	t66 = (x281-((x282&x283)/x284));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = 14;
	volatile int16_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	volatile int64_t t67 = 3769957142068LL;

	t67 = (x285-((x286&x287)/x288));

	if (t67 != 14LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x291 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;
	uint64_t t68 = 183452133611120LLU;

	t68 = (x289-((x290&x291)/x292));

	if (t68 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = -35;
	int32_t x294 = -517516;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = 1;
	volatile int32_t t69 = -3007;

	t69 = (x293-((x294&x295)/x296));

	if (t69 != -6807) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -16;
	int8_t x298 = -4;
	int8_t x299 = INT8_MAX;
	int32_t t70 = -83498;

	t70 = (x297-((x298&x299)/x300));

	if (t70 != -16) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x301 = INT32_MAX;
	volatile int64_t t71 = 3219535166LL;

	t71 = (x301-((x302&x303)/x304));

	if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x306 = INT64_MAX;
	int8_t x307 = -1;
	volatile uint16_t x308 = UINT16_MAX;
	int64_t t72 = 130962LL;

	t72 = (x305-((x306&x307)/x308));

	if (t72 != 9223231297218904063LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x309 = -1LL;
	uint8_t x310 = 6U;
	int8_t x311 = 24;
	int16_t x312 = -1;
	static int64_t t73 = 17017862364206LL;

	t73 = (x309-((x310&x311)/x312));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	volatile uint8_t x315 = UINT8_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t74 = 314;

	t74 = (x313-((x314&x315)/x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x317 = -5;
	volatile uint32_t x318 = 1338U;
	int64_t x319 = 3271659999133316609LL;
	int16_t x320 = 3;
	volatile int64_t t75 = 81686LL;

	t75 = (x317-((x318&x319)/x320));

	if (t75 != -346LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	int16_t x323 = -1;
	int8_t x324 = 13;
	volatile int32_t t76 = -575;

	t76 = (x321-((x322&x323)/x324));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = 375LL;
	static uint16_t x327 = 15458U;
	volatile uint32_t x328 = 36U;
	static int64_t t77 = -7453LL;

	t77 = (x325-((x326&x327)/x328));

	if (t77 != -3LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = 1136697006941235LL;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 2431U;
	int64_t x332 = INT64_MIN;
	static int64_t t78 = -177979540630747033LL;

	t78 = (x329-((x330&x331)/x332));

	if (t78 != 1136697006941235LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = -1;
	volatile int64_t x336 = INT64_MAX;

	t79 = (x333-((x334&x335)/x336));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -44;
	int64_t x339 = INT64_MIN;
	static int8_t x340 = INT8_MIN;
	static volatile int64_t t80 = -1463045169615427647LL;

	t80 = (x337-((x338&x339)/x340));

	if (t80 != -72057594037927980LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x341 = 1955026U;
	uint32_t x342 = UINT32_MAX;
	int8_t x344 = INT8_MAX;
	volatile uint32_t t81 = 13U;

	t81 = (x341-((x342&x343)/x344));

	if (t81 != 1955012U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = 6130481LL;
	int16_t x346 = INT16_MAX;
	static int16_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int64_t t82 = -11046277283439LL;

	t82 = (x345-((x346&x347)/x348));

	if (t82 != 6130736LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x349 = 2805U;
	int8_t x350 = 7;
	int8_t x351 = INT8_MIN;
	static uint32_t x352 = 2U;
	static uint32_t t83 = 141576559U;

	t83 = (x349-((x350&x351)/x352));

	if (t83 != 2805U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x353 = 17U;
	int64_t x354 = -1171237475273844LL;
	uint32_t x355 = 31097U;
	int8_t x356 = -5;
	static volatile int64_t t84 = -1LL;

	t84 = (x353-((x354&x355)/x356));

	if (t84 != 2527LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = -6287;
	uint16_t x359 = 2461U;
	static uint64_t x360 = UINT64_MAX;
	static uint64_t t85 = 7257653030160LLU;

	t85 = (x357-((x358&x359)/x360));

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x361 = 18LLU;
	int64_t x362 = -487LL;
	int16_t x364 = INT16_MAX;
	uint64_t t86 = 382445910111LLU;

	t86 = (x361-((x362&x363)/x364));

	if (t86 != 18446744073709551354LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x366 = 44727946U;
	int16_t x367 = -1;
	volatile uint32_t t87 = 37543289U;

	t87 = (x365-((x366&x367)/x368));

	if (t87 != 4250206582U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -11;
	int64_t x371 = INT64_MIN;
	int32_t x372 = -1;
	volatile int64_t t88 = 3024029874LL;

	t88 = (x369-((x370&x371)/x372));

	if (t88 != -11LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 1761065U;
	static int8_t x374 = INT8_MAX;
	uint16_t x376 = 28U;

	t89 = (x373-((x374&x375)/x376));

	if (t89 != 1761065U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x379 = INT32_MIN;
	static int8_t x380 = 10;
	volatile uint64_t t90 = 1343413365426LLU;

	t90 = (x377-((x378&x379)/x380));

	if (t90 != 426251114LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x383 = 47U;
	int32_t x384 = INT32_MIN;
	int32_t t91 = -626427;

	t91 = (x381-((x382&x383)/x384));

	if (t91 != 11) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x386 = INT32_MIN;
	uint16_t x387 = 12213U;
	static volatile int8_t x388 = INT8_MIN;
	int32_t t92 = 1125;

	t92 = (x385-((x386&x387)/x388));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x390 = INT64_MIN;
	static volatile int16_t x391 = -1;
	volatile uint32_t x392 = 59U;
	volatile int64_t t93 = -9128360LL;

	t93 = (x389-((x390&x391)/x392));

	if (t93 != 156328339607717166LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = 0U;
	volatile int8_t x395 = -1;
	int8_t x396 = -1;
	volatile int32_t t94 = -1;

	t94 = (x393-((x394&x395)/x396));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = 80;
	volatile uint16_t x399 = 246U;
	volatile int64_t x400 = -82910766437291LL;
	volatile int64_t t95 = 257795931LL;

	t95 = (x397-((x398&x399)/x400));

	if (t95 != 65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = 5;
	volatile uint64_t x402 = 2968LLU;
	int32_t x404 = INT32_MIN;
	uint64_t t96 = 1567044383LLU;

	t96 = (x401-((x402&x403)/x404));

	if (t96 != 5LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x405 = -1;
	int16_t x406 = 6600;
	uint32_t x407 = 454U;
	int32_t x408 = 3904751;
	static uint32_t t97 = UINT32_MAX;

	t97 = (x405-((x406&x407)/x408));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = UINT16_MAX;

	t98 = (x409-((x410&x411)/x412));

	if (t98 != 65535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x413 = -1;
	static int16_t x414 = -1;
	uint64_t x415 = 957493844LLU;
	static uint8_t x416 = 8U;

	t99 = (x413-((x414&x415)/x416));

	if (t99 != 18446744073589864885LLU) { NG(); } else { ; }
	
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

