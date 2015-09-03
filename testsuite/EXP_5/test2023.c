#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
int32_t t0 = 3;
volatile int32_t t1 = 4282547;
uint16_t x15 = 3U;
int64_t x24 = -9998851115965LL;
static int8_t x26 = INT8_MAX;
int32_t x29 = INT32_MAX;
int64_t x49 = INT64_MIN;
volatile int32_t t14 = 3097;
volatile int32_t x65 = INT32_MIN;
static int32_t t16 = 494;
uint8_t x71 = UINT8_MAX;
int8_t x75 = INT8_MIN;
static int64_t x78 = INT64_MAX;
int16_t x80 = -219;
volatile uint32_t x85 = 69350U;
int32_t t21 = -80;
volatile int64_t x89 = 198033394775029115LL;
int32_t t22 = 171602;
volatile uint16_t x96 = 17U;
static int16_t x98 = -1;
int16_t x101 = INT16_MIN;
int32_t x105 = INT32_MAX;
volatile int64_t x109 = 72366902LL;
static int16_t x111 = -25;
int32_t x112 = 63;
static int64_t x114 = 44184657898979LL;
volatile int64_t x116 = 936LL;
static int8_t x132 = INT8_MAX;
uint64_t x134 = 51852976239952LLU;
uint64_t x135 = 2341457447496818LLU;
volatile int32_t x136 = INT32_MIN;
volatile int64_t x145 = -375568LL;
uint16_t x149 = 22U;
int64_t x151 = 17993158395266LL;
int8_t x153 = INT8_MIN;
int64_t x154 = INT64_MAX;
uint8_t x157 = 2U;
int8_t x161 = INT8_MIN;
uint32_t x162 = UINT32_MAX;
int32_t x172 = INT32_MAX;
static volatile int32_t x173 = INT32_MIN;
int8_t x178 = -1;
int8_t x179 = INT8_MIN;
int16_t x184 = -139;
int16_t x188 = INT16_MAX;
static int32_t x193 = -3199347;
int16_t x195 = 268;
int32_t t48 = 1;
static int32_t x199 = -13329;
int32_t t49 = -220040651;
uint16_t x204 = 7908U;
int32_t t51 = -23438651;
int32_t x209 = INT32_MIN;
int32_t x213 = 4043;
uint16_t x215 = 12U;
volatile int8_t x216 = INT8_MIN;
volatile int8_t x218 = -1;
volatile uint64_t x222 = 1916400532LLU;
int32_t t55 = 15966;
uint64_t x230 = UINT64_MAX;
int64_t x240 = INT64_MAX;
int16_t x242 = -12;
uint16_t x243 = 1U;
uint8_t x244 = 48U;
static uint64_t x245 = 2693LLU;
int32_t x268 = INT32_MAX;
int16_t x273 = INT16_MIN;
static uint32_t x276 = 2U;
int32_t t68 = 2;
int32_t x277 = -1;
volatile int8_t x279 = 41;
int64_t x280 = 42653LL;
volatile int16_t x282 = INT16_MAX;
static volatile uint16_t x288 = 13417U;
static int32_t x301 = INT32_MIN;
volatile int16_t x307 = 986;
int8_t x308 = INT8_MIN;
static volatile int8_t x311 = INT8_MAX;
int8_t x313 = 29;
int8_t x316 = INT8_MIN;
volatile int64_t x321 = INT64_MIN;
uint16_t x322 = 501U;
volatile int16_t x326 = 0;
int32_t t82 = 329310;
int8_t x341 = -1;
int16_t x342 = INT16_MAX;
int16_t x343 = -1;
int8_t x352 = INT8_MAX;
static uint16_t x354 = UINT16_MAX;
int32_t x359 = -142;
int8_t x362 = INT8_MIN;
static uint8_t x363 = 38U;
volatile uint32_t x369 = UINT32_MAX;
static int16_t x373 = 1;
static uint32_t x376 = UINT32_MAX;
static int32_t t93 = -66606083;
volatile int32_t x377 = -1;
static int16_t x379 = -1;
int32_t x383 = -6;
int32_t t95 = -7322391;
int32_t x387 = INT32_MIN;
static int32_t x388 = -1;
static int64_t x389 = INT64_MAX;
volatile uint32_t x390 = 93068504U;
int16_t x394 = -871;
volatile int32_t t98 = 296;
int32_t x400 = -13653979;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile int64_t x2 = -1LL;
	int8_t x3 = INT8_MIN;

	t0 = (x1==((x2|x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 47252360552864174LLU;
	static int16_t x6 = 2;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MIN;

	t1 = (x5==((x6|x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint8_t x10 = 3U;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;
	int32_t t2 = 3;

	t2 = (x9==((x10|x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = 83LL;
	static uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 138639671;

	t3 = (x13==((x14|x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	volatile int16_t x18 = -1;
	volatile int64_t x19 = -324100LL;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -494;

	t4 = (x17==((x18|x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 467529U;
	int64_t x22 = INT64_MIN;
	static int64_t x23 = INT64_MAX;
	int32_t t5 = 290095;

	t5 = (x21==((x22|x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int64_t x27 = -1LL;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 492192225;

	t6 = (x25==((x26|x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 3049880LLU;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = 0U;
	static volatile int32_t t7 = -3868;

	t7 = (x29==((x30|x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MAX;
	int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -1;

	t8 = (x33==((x34|x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	volatile uint16_t x39 = UINT16_MAX;
	int8_t x40 = -62;
	volatile int32_t t9 = 24007;

	t9 = (x37==((x38|x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int64_t x43 = 32051139446096LL;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 1589;

	t10 = (x41==((x42|x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 0;
	int8_t x46 = -19;
	int64_t x47 = -1LL;
	volatile int8_t x48 = 0;
	int32_t t11 = 1;

	t11 = (x45==((x46|x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 28383LLU;
	volatile int32_t t12 = -10051945;

	t12 = (x49==((x50|x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 6673U;
	static volatile int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -100;

	t13 = (x53==((x54|x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	volatile int32_t x58 = -1;
	int32_t x59 = -1;
	static volatile int64_t x60 = 120541219LL;

	t14 = (x57==((x58|x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 1U;
	int16_t x64 = -1;
	int32_t t15 = 5;

	t15 = (x61==((x62|x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	static int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MIN;

	t16 = (x65==((x66|x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 21435LLU;
	uint8_t x70 = UINT8_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -161;

	t17 = (x69==((x70|x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 66735160606LLU;
	static volatile uint16_t x74 = UINT16_MAX;
	uint64_t x76 = 136677558812LLU;
	volatile int32_t t18 = -1165;

	t18 = (x73==((x74|x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 1720195983151372034LLU;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = -25;

	t19 = (x77==((x78|x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 21U;
	volatile uint64_t x82 = 88665668965268LLU;
	volatile uint64_t x83 = 577410930LLU;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 1357;

	t20 = (x81==((x82|x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = -1;
	uint32_t x87 = 931093U;
	volatile uint8_t x88 = 36U;

	t21 = (x85==((x86|x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x90 = UINT16_MAX;
	static uint16_t x91 = 31957U;
	uint16_t x92 = UINT16_MAX;

	t22 = (x89==((x90|x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	static int64_t x94 = -11044210LL;
	static int16_t x95 = INT16_MAX;
	volatile int32_t t23 = -65;

	t23 = (x93==((x94|x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1625U;
	uint32_t x99 = 617964791U;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = -25574;

	t24 = (x97==((x98|x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = -941692777261LL;
	uint32_t x103 = 14U;
	uint32_t x104 = 2150917U;
	static int32_t t25 = -5;

	t25 = (x101==((x102|x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = 132675066;
	volatile int32_t t26 = 3338603;

	t26 = (x105==((x106|x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = -1;
	int32_t t27 = 8;

	t27 = (x109==((x110|x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static volatile uint16_t x115 = UINT16_MAX;
	volatile int32_t t28 = 1;

	t28 = (x113==((x114|x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = 1;
	volatile int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	static int32_t t29 = -23529;

	t29 = (x117==((x118|x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -33;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = 129442;
	volatile int64_t x124 = -34258240749454LL;
	volatile int32_t t30 = -1703;

	t30 = (x121==((x122|x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x125 = 23480254LLU;
	static int32_t x126 = -660837;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MAX;
	static volatile int32_t t31 = 13;

	t31 = (x125==((x126|x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 130046411629439LLU;
	uint64_t x130 = 33534433164213LLU;
	static uint8_t x131 = 27U;
	static int32_t t32 = -1;

	t32 = (x129==((x130|x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	volatile int32_t t33 = -774048020;

	t33 = (x133==((x134|x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 51973320937865LLU;
	int64_t x139 = INT64_MIN;
	static int32_t x140 = INT32_MIN;
	int32_t t34 = 113059;

	t34 = (x137==((x138|x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = -1LL;
	volatile int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t35 = 10028861;

	t35 = (x141==((x142|x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x146 = 818U;
	int32_t x147 = -21019;
	static uint32_t x148 = 825471317U;
	int32_t t36 = 228;

	t36 = (x145==((x146|x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x150 = 1798U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -3456;

	t37 = (x149==((x150|x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x155 = -1;
	int8_t x156 = -1;
	volatile int32_t t38 = -243;

	t38 = (x153==((x154|x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = 35139028LL;
	volatile int64_t x159 = -106223698634635101LL;
	uint32_t x160 = 669143U;
	int32_t t39 = 249324;

	t39 = (x157==((x158|x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x163 = -1039755852LL;
	uint32_t x164 = UINT32_MAX;
	static volatile int32_t t40 = 127;

	t40 = (x161==((x162|x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	static uint32_t x166 = 4717122U;
	static int64_t x167 = INT64_MIN;
	volatile int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = 5926233;

	t41 = (x165==((x166|x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 1U;
	uint32_t x170 = 58U;
	int64_t x171 = INT64_MAX;
	static int32_t t42 = 55675;

	t42 = (x169==((x170|x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = 983;
	int16_t x175 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t43 = 986858171;

	t43 = (x173==((x174|x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 13U;
	volatile int64_t x180 = INT64_MIN;
	int32_t t44 = -511;

	t44 = (x177==((x178|x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MIN;
	static volatile int64_t x183 = INT64_MIN;
	volatile int32_t t45 = -5212483;

	t45 = (x181==((x182|x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MAX;
	static volatile uint64_t x186 = 7831574LLU;
	int32_t x187 = INT32_MAX;
	volatile int32_t t46 = 123844;

	t46 = (x185==((x186|x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 5U;
	static int16_t x190 = 0;
	int32_t x191 = -1;
	static int32_t x192 = INT32_MAX;
	int32_t t47 = -252750;

	t47 = (x189==((x190|x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MAX;
	uint64_t x196 = 341857734708729658LLU;

	t48 = (x193==((x194|x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -1;
	int16_t x198 = INT16_MIN;
	int32_t x200 = INT32_MAX;

	t49 = (x197==((x198|x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = UINT8_MAX;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -2531383203LL;
	int32_t t50 = -5;

	t50 = (x201==((x202|x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MAX;
	static int32_t x206 = 10;
	static uint32_t x207 = 1478101045U;
	static int16_t x208 = INT16_MIN;

	t51 = (x205==((x206|x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	uint16_t x212 = 15U;
	volatile int32_t t52 = 1099;

	t52 = (x209==((x210|x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x214 = 0U;
	volatile int32_t t53 = -6438;

	t53 = (x213==((x214|x215)^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -196;

	t54 = (x217==((x218|x219)^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 18U;
	volatile int64_t x223 = INT64_MIN;
	static int8_t x224 = INT8_MIN;

	t55 = (x221==((x222|x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MIN;
	static int32_t x226 = INT32_MIN;
	static int32_t x227 = INT32_MAX;
	uint8_t x228 = 25U;
	int32_t t56 = 26267815;

	t56 = (x225==((x226|x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x231 = -1;
	static volatile int64_t x232 = INT64_MIN;
	int32_t t57 = 15318;

	t57 = (x229==((x230|x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 61510LLU;
	static int16_t x234 = -1;
	static int64_t x235 = 1427460471224LL;
	volatile int32_t x236 = INT32_MIN;
	static volatile int32_t t58 = 5775;

	t58 = (x233==((x234|x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1699292402660LLU;
	int16_t x238 = INT16_MIN;
	uint8_t x239 = 87U;
	static volatile int32_t t59 = 936643;

	t59 = (x237==((x238|x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	volatile int32_t t60 = 79487;

	t60 = (x241==((x242|x243)^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -15606LL;
	int32_t x247 = INT32_MAX;
	int8_t x248 = INT8_MAX;
	volatile int32_t t61 = 0;

	t61 = (x245==((x246|x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	int8_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	uint8_t x252 = 14U;
	int32_t t62 = -10018171;

	t62 = (x249==((x250|x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 23313;
	int64_t x254 = INT64_MAX;
	static int64_t x255 = 13517LL;
	static int64_t x256 = -1LL;
	int32_t t63 = 3468412;

	t63 = (x253==((x254|x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -170;
	int32_t x258 = 25323;
	volatile uint32_t x259 = UINT32_MAX;
	int64_t x260 = -1LL;
	int32_t t64 = -45314;

	t64 = (x257==((x258|x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = 1886;
	uint64_t x263 = UINT64_MAX;
	static volatile int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -1340128;

	t65 = (x261==((x262|x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;
	int32_t t66 = 6;

	t66 = (x265==((x266|x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = 7916;
	static volatile int64_t x270 = INT64_MAX;
	volatile int8_t x271 = 4;
	static volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -29;

	t67 = (x269==((x270|x271)^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = -3;
	uint16_t x275 = UINT16_MAX;

	t68 = (x273==((x274|x275)^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;
	static volatile int32_t t69 = 314877129;

	t69 = (x277==((x278|x279)^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	static uint8_t x283 = 9U;
	static int64_t x284 = INT64_MAX;
	volatile int32_t t70 = -2019;

	t70 = (x281==((x282|x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 7295U;
	uint8_t x286 = UINT8_MAX;
	static volatile int32_t x287 = -6292903;
	int32_t t71 = 35218931;

	t71 = (x285==((x286|x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MIN;
	volatile uint32_t x291 = 121226592U;
	int8_t x292 = INT8_MIN;
	int32_t t72 = -7709;

	t72 = (x289==((x290|x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MAX;
	uint64_t x294 = UINT64_MAX;
	static uint16_t x295 = 5U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 344797;

	t73 = (x293==((x294|x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = -1LL;
	volatile int32_t t74 = 19511;

	t74 = (x297==((x298|x299)^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x302 = INT8_MAX;
	static uint64_t x303 = 4141840888462LLU;
	volatile int64_t x304 = -1785LL;
	int32_t t75 = -1;

	t75 = (x301==((x302|x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 131U;
	int16_t x306 = INT16_MIN;
	int32_t t76 = 82971543;

	t76 = (x305==((x306|x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 0U;
	static int16_t x310 = INT16_MIN;
	int16_t x312 = 6;
	int32_t t77 = 27870246;

	t77 = (x309==((x310|x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 1567U;
	volatile int8_t x315 = 60;
	volatile int32_t t78 = 8187;

	t78 = (x313==((x314|x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static int32_t x318 = INT32_MIN;
	int32_t x319 = -1;
	static int8_t x320 = -1;
	static int32_t t79 = -1;

	t79 = (x317==((x318|x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = -1570;

	t80 = (x321==((x322|x323)^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 22U;
	volatile int64_t x327 = INT64_MIN;
	static int64_t x328 = -120871615596182LL;
	static volatile int32_t t81 = 0;

	t81 = (x325==((x326|x327)^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MAX;
	static volatile int8_t x330 = 1;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MAX;

	t82 = (x329==((x330|x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 3559U;
	uint32_t x336 = 1517U;
	int32_t t83 = 37;

	t83 = (x333==((x334|x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 11U;
	static uint8_t x338 = 83U;
	static int64_t x339 = 1043156LL;
	int8_t x340 = INT8_MIN;
	static int32_t t84 = 173453426;

	t84 = (x337==((x338|x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x344 = 2U;
	int32_t t85 = 344067888;

	t85 = (x341==((x342|x343)^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	static uint64_t x346 = UINT64_MAX;
	int64_t x347 = -163LL;
	volatile int8_t x348 = INT8_MAX;
	int32_t t86 = -1;

	t86 = (x345==((x346|x347)^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	static uint16_t x351 = 69U;
	int32_t t87 = -116352;

	t87 = (x349==((x350|x351)^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	volatile int8_t x355 = INT8_MIN;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -44385860;

	t88 = (x353==((x354|x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = UINT16_MAX;
	uint32_t x358 = 792U;
	volatile int8_t x360 = -1;
	volatile int32_t t89 = -31;

	t89 = (x357==((x358|x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int16_t x364 = -13701;
	static volatile int32_t t90 = 1610;

	t90 = (x361==((x362|x363)^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = -1LL;
	uint64_t x366 = 13004548503207240LLU;
	int32_t x367 = INT32_MIN;
	int32_t x368 = -309754970;
	volatile int32_t t91 = -16028;

	t91 = (x365==((x366|x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x370 = UINT64_MAX;
	static uint32_t x371 = 1U;
	volatile uint8_t x372 = UINT8_MAX;
	static int32_t t92 = 0;

	t92 = (x369==((x370|x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = UINT16_MAX;
	uint16_t x375 = 19253U;

	t93 = (x373==((x374|x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MAX;
	uint16_t x380 = 14U;
	static volatile int32_t t94 = -47057;

	t94 = (x377==((x378|x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	static volatile int64_t x384 = 7622487LL;

	t95 = (x381==((x382|x383)^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 12;
	static uint16_t x386 = 1U;
	volatile int32_t t96 = 10;

	t96 = (x385==((x386|x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x391 = 4U;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 109691514;

	t97 = (x389==((x390|x391)^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	static int32_t x395 = -62541026;
	uint64_t x396 = 2065714LLU;

	t98 = (x393==((x394|x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = 6883588U;
	int8_t x398 = -1;
	int64_t x399 = -1LL;
	int32_t t99 = 9;

	t99 = (x397==((x398|x399)^x400));

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

