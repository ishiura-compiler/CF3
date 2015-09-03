#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -107;
int32_t t0 = -465363;
volatile uint32_t x7 = 1U;
uint64_t x15 = 54398480862LLU;
static uint16_t x16 = 2999U;
static uint64_t x22 = UINT64_MAX;
static uint16_t x23 = UINT16_MAX;
int16_t x30 = INT16_MIN;
static int8_t x33 = INT8_MIN;
int64_t x35 = -1LL;
uint64_t x37 = UINT64_MAX;
static int32_t x44 = -1;
uint8_t x47 = 12U;
volatile uint16_t x59 = 11U;
volatile int32_t t14 = 30;
static int8_t x63 = INT8_MAX;
int64_t x68 = -1LL;
volatile int32_t x70 = INT32_MIN;
uint32_t x72 = 5086717U;
int8_t x74 = INT8_MIN;
int64_t x77 = INT64_MAX;
volatile int64_t x84 = INT64_MIN;
uint8_t x85 = 5U;
static int32_t x89 = 99290;
volatile int32_t t22 = -54;
uint64_t x98 = 43072LLU;
static int16_t x107 = 0;
int8_t x113 = 4;
uint64_t x114 = 3906LLU;
int64_t x129 = INT64_MAX;
volatile int64_t x139 = INT64_MAX;
volatile int16_t x140 = INT16_MAX;
volatile uint32_t x143 = UINT32_MAX;
static volatile int8_t x150 = 56;
int8_t x155 = INT8_MAX;
int64_t x157 = INT64_MIN;
int32_t x160 = -1;
int8_t x166 = -1;
int16_t x182 = 168;
static uint32_t x184 = UINT32_MAX;
uint32_t x200 = 58031U;
int32_t t50 = -107668;
int8_t x208 = 33;
volatile int64_t x212 = INT64_MIN;
uint32_t x213 = 13U;
uint8_t x220 = UINT8_MAX;
static uint64_t x223 = 15210775603LLU;
int64_t x226 = INT64_MIN;
uint16_t x231 = 1013U;
int32_t x233 = INT32_MIN;
static int64_t x236 = INT64_MIN;
int64_t x246 = -1LL;
int64_t x247 = INT64_MIN;
int8_t x249 = INT8_MIN;
int32_t t63 = 1;
uint64_t x261 = UINT64_MAX;
volatile uint8_t x277 = 3U;
uint16_t x279 = 181U;
int64_t x280 = -1LL;
volatile uint32_t t70 = 657068U;
uint32_t x289 = 968U;
int64_t x290 = -70LL;
int64_t x299 = INT64_MIN;
uint64_t x302 = 5858261365251LLU;
int32_t x303 = -331;
volatile int32_t t76 = -248200853;
int32_t x310 = -57;
volatile int16_t x312 = INT16_MIN;
volatile int32_t t77 = 495480341;
static volatile uint16_t x316 = 0U;
int64_t x317 = INT64_MIN;
static int8_t x318 = -1;
uint8_t x327 = UINT8_MAX;
int64_t x330 = INT64_MIN;
static int64_t x340 = INT64_MIN;
static volatile int64_t t84 = -1965194688942LL;
uint32_t x350 = 1815868U;
volatile int16_t x351 = INT16_MIN;
static uint64_t x352 = 54841LLU;
volatile uint64_t t88 = 209174821LLU;
static int16_t x359 = INT16_MAX;
int16_t x363 = -435;
static int16_t x365 = 0;
uint64_t x366 = 366406215333344LLU;
int8_t x367 = INT8_MIN;
uint32_t x368 = 16U;
volatile int16_t x369 = INT16_MIN;
volatile int64_t x371 = INT64_MIN;
volatile int64_t t92 = -3541157LL;
uint32_t x376 = 174339U;
int16_t x379 = INT16_MAX;
volatile uint16_t x384 = 224U;
volatile int32_t t95 = 529105764;
int32_t x385 = 57;
volatile uint16_t x398 = 9U;
int32_t x400 = INT32_MIN;


void f0(void) {
	static volatile int64_t x1 = -1077LL;
	int32_t x2 = INT32_MIN;
	int32_t x4 = INT32_MAX;

	t0 = ((x1==(x2<x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 0;
	int64_t x6 = -1LL;
	int32_t x8 = -1;
	int32_t t1 = 65362;

	t1 = ((x5==(x6<x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int8_t x10 = -1;
	int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -1;

	t2 = ((x9==(x10<x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 871192598LL;
	uint16_t x14 = 20U;
	int32_t t3 = 1;

	t3 = ((x13==(x14<x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 253095852931LLU;
	int32_t x18 = -1;
	uint8_t x19 = 1U;
	uint32_t x20 = 1773U;
	static uint32_t t4 = 0U;

	t4 = ((x17==(x18<x19))*x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static volatile int8_t x24 = -3;
	volatile int32_t t5 = 271194;

	t5 = ((x21==(x22<x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	static int32_t x28 = 133899486;
	static int32_t t6 = -145396;

	t6 = ((x25==(x26<x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 15U;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 1LL;

	t7 = ((x29==(x30<x31))*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MIN;
	int32_t x36 = 1632049;
	int32_t t8 = 1320764;

	t8 = ((x33==(x34<x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = 0U;
	int8_t x39 = 0;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = 983;

	t9 = ((x37==(x38<x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 5492650824033670LLU;
	uint32_t x42 = 2688780U;
	volatile int8_t x43 = 1;
	static volatile int32_t t10 = 2774;

	t10 = ((x41==(x42<x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 67;
	static int64_t x46 = INT64_MAX;
	uint32_t x48 = 434034829U;
	uint32_t t11 = 458322389U;

	t11 = ((x45==(x46<x47))*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = 14;
	uint16_t x51 = 8168U;
	uint64_t x52 = 183271993LLU;
	volatile uint64_t t12 = 1738642282863LLU;

	t12 = ((x49==(x50<x51))*x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	static int32_t x54 = INT32_MAX;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 1;

	t13 = ((x53==(x54<x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t x58 = INT32_MIN;
	uint8_t x60 = 4U;

	t14 = ((x57==(x58<x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 7801178U;
	static volatile int32_t x62 = -1;
	volatile int32_t x64 = -1;
	int32_t t15 = -14;

	t15 = ((x61==(x62<x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	uint8_t x67 = UINT8_MAX;
	volatile int64_t t16 = 22475581256493210LL;

	t16 = ((x65==(x66<x67))*x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	static int8_t x71 = INT8_MIN;
	volatile uint32_t t17 = 1737U;

	t17 = ((x69==(x70<x71))*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	static int16_t x75 = INT16_MAX;
	volatile int64_t x76 = -1LL;
	static volatile int64_t t18 = -6576456530LL;

	t18 = ((x73==(x74<x75))*x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -14;
	static int8_t x79 = -1;
	uint64_t x80 = 6154957594734LLU;
	uint64_t t19 = 67200477575772922LLU;

	t19 = ((x77==(x78<x79))*x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	volatile int32_t x82 = INT32_MIN;
	uint32_t x83 = 2297U;
	volatile int64_t t20 = 2741LL;

	t20 = ((x81==(x82<x83))*x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = 22;
	uint16_t x87 = 1U;
	int32_t x88 = -1;
	volatile int32_t t21 = -13003;

	t21 = ((x85==(x86<x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 115;
	uint8_t x91 = 1U;
	static int8_t x92 = INT8_MIN;

	t22 = ((x89==(x90<x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x94 = 1U;
	int64_t x95 = -13505342670LL;
	static uint32_t x96 = 1044670620U;
	static volatile uint32_t t23 = 529440836U;

	t23 = ((x93==(x94<x95))*x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int16_t x99 = -1;
	static volatile uint32_t x100 = 9583U;
	uint32_t t24 = 114503898U;

	t24 = ((x97==(x98<x99))*x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static volatile uint32_t x102 = 453U;
	uint8_t x103 = 14U;
	uint64_t x104 = 670168621853758LLU;
	volatile uint64_t t25 = 10483584843832LLU;

	t25 = ((x101==(x102<x103))*x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 0U;
	int64_t x106 = INT64_MIN;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -237;

	t26 = ((x105==(x106<x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	static int64_t x110 = INT64_MAX;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t27 = -124LL;

	t27 = ((x109==(x110<x111))*x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x115 = -1;
	int32_t x116 = -1;
	volatile int32_t t28 = 10444;

	t28 = ((x113==(x114<x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static int64_t x118 = INT64_MAX;
	uint32_t x119 = 739U;
	static int8_t x120 = INT8_MAX;
	volatile int32_t t29 = 15;

	t29 = ((x117==(x118<x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 156899197U;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = 15497U;
	int32_t t30 = 0;

	t30 = ((x121==(x122<x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	static int32_t x126 = -104;
	volatile int32_t x127 = -361960;
	uint8_t x128 = 2U;
	volatile int32_t t31 = -3;

	t31 = ((x125==(x126<x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 81804495U;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -5430886;

	t32 = ((x129==(x130<x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -3;
	uint8_t x134 = 48U;
	int32_t x135 = -182013412;
	int64_t x136 = INT64_MAX;
	static int64_t t33 = -10165737347LL;

	t33 = ((x133==(x134<x135))*x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = -1;
	int32_t t34 = 3930515;

	t34 = ((x137==(x138<x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 1U;
	int16_t x142 = -1;
	int32_t x144 = INT32_MIN;
	static volatile int32_t t35 = 68;

	t35 = ((x141==(x142<x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 79227LL;
	int16_t x146 = -13043;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 22285976471LLU;
	static uint64_t t36 = 2036212522316561254LLU;

	t36 = ((x145==(x146<x147))*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	static volatile int64_t x151 = INT64_MIN;
	static volatile uint8_t x152 = 0U;
	int32_t t37 = 1060937198;

	t37 = ((x149==(x150<x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = -1;
	volatile int16_t x156 = -1326;
	static int32_t t38 = 1;

	t38 = ((x153==(x154<x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 122422112LLU;
	int8_t x159 = INT8_MIN;
	static volatile int32_t t39 = -1063;

	t39 = ((x157==(x158<x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 1U;
	int16_t x162 = -15312;
	static volatile uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -69072068;

	t40 = ((x161==(x162<x163))*x164);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	static volatile int16_t x167 = -1;
	int64_t x168 = INT64_MAX;
	int64_t t41 = -13842LL;

	t41 = ((x165==(x166<x167))*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	uint8_t x170 = 54U;
	int8_t x171 = INT8_MAX;
	int32_t x172 = -2154;
	static int32_t t42 = -22383;

	t42 = ((x169==(x170<x171))*x172);

	if (t42 != -2154) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	int8_t x176 = -1;
	int32_t t43 = -375;

	t43 = ((x173==(x174<x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	uint8_t x178 = 3U;
	uint64_t x179 = UINT64_MAX;
	volatile uint8_t x180 = 35U;
	volatile int32_t t44 = 2726;

	t44 = ((x177==(x178<x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 15U;
	int32_t x183 = INT32_MAX;
	uint32_t t45 = 9U;

	t45 = ((x181==(x182<x183))*x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -1;
	int16_t x187 = INT16_MIN;
	static int64_t x188 = INT64_MAX;
	int64_t t46 = 0LL;

	t46 = ((x185==(x186<x187))*x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 517732490LL;
	int64_t x190 = INT64_MIN;
	int8_t x191 = 0;
	static uint8_t x192 = 0U;
	int32_t t47 = 18192628;

	t47 = ((x189==(x190<x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -16859512919667246LL;
	static int16_t x194 = INT16_MIN;
	uint16_t x195 = 37U;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -15;

	t48 = ((x193==(x194<x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	static int64_t x198 = 1795551635LL;
	int8_t x199 = 18;
	static volatile uint32_t t49 = 2308U;

	t49 = ((x197==(x198<x199))*x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MAX;
	int8_t x203 = -1;
	int32_t x204 = 335906449;

	t50 = ((x201==(x202<x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 61867171LLU;
	int16_t x206 = INT16_MIN;
	static int64_t x207 = INT64_MIN;
	volatile int32_t t51 = -55;

	t51 = ((x205==(x206<x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	uint8_t x211 = UINT8_MAX;
	int64_t t52 = 89658LL;

	t52 = ((x209==(x210<x211))*x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int8_t x215 = -32;
	int8_t x216 = 0;
	int32_t t53 = -6351989;

	t53 = ((x213==(x214<x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 49U;
	int16_t x218 = INT16_MIN;
	uint8_t x219 = 127U;
	int32_t t54 = -227;

	t54 = ((x217==(x218<x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	static uint16_t x222 = UINT16_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t55 = -17938869410LL;

	t55 = ((x221==(x222<x223))*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	uint16_t x227 = UINT16_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = 430149;

	t56 = ((x225==(x226<x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = INT16_MAX;
	uint32_t x230 = 146097U;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 1095;

	t57 = ((x229==(x230<x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = INT32_MIN;
	int32_t x235 = -31;
	int64_t t58 = 1707154266LL;

	t58 = ((x233==(x234<x235))*x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	volatile int64_t x238 = -1LL;
	uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 25LLU;
	uint64_t t59 = 30973054408LLU;

	t59 = ((x237==(x238<x239))*x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -3687571311014LL;
	int64_t t60 = 1117679LL;

	t60 = ((x241==(x242<x243))*x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t61 = 67863;

	t61 = ((x245==(x246<x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x250 = 0;
	static uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 110056;

	t62 = ((x249==(x250<x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MAX;
	volatile uint16_t x254 = UINT16_MAX;
	int8_t x255 = -1;
	int16_t x256 = 87;

	t63 = ((x253==(x254<x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 1U;
	uint32_t x258 = 9570U;
	int64_t x259 = 8LL;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -23;

	t64 = ((x257==(x258<x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = -1;
	int32_t x263 = INT32_MAX;
	int16_t x264 = -46;
	int32_t t65 = -2885995;

	t65 = ((x261==(x262<x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x265 = 6763U;
	uint32_t x266 = 387056U;
	int8_t x267 = -1;
	int32_t x268 = -1;
	volatile int32_t t66 = 1;

	t66 = ((x265==(x266<x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = 32851246LL;
	volatile int64_t x271 = -124411LL;
	int32_t x272 = 209794;
	int32_t t67 = -140;

	t67 = ((x269==(x270<x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MAX;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t68 = 25U;

	t68 = ((x273==(x274<x275))*x276);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = 74;
	volatile int64_t t69 = -383730351027LL;

	t69 = ((x277==(x278<x279))*x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 47U;
	int16_t x282 = 260;
	static int64_t x283 = -77835LL;
	uint32_t x284 = UINT32_MAX;

	t70 = ((x281==(x282<x283))*x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	uint16_t x286 = 20556U;
	uint16_t x287 = 14731U;
	int64_t x288 = -1LL;
	int64_t t71 = 19513010481153LL;

	t71 = ((x285==(x286<x287))*x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x291 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;
	static int32_t t72 = 37;

	t72 = ((x289==(x290<x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	uint8_t x295 = 11U;
	static uint16_t x296 = 1395U;
	int32_t t73 = -95363;

	t73 = ((x293==(x294<x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -6589442;
	uint8_t x298 = 12U;
	int64_t x300 = -1LL;
	int64_t t74 = 7492LL;

	t74 = ((x297==(x298<x299))*x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x304 = INT64_MAX;
	int64_t t75 = 735942647237390LL;

	t75 = ((x301==(x302<x303))*x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -496;
	uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = 0;
	volatile int32_t x308 = 69311;

	t76 = ((x305==(x306<x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = -1;
	int16_t x311 = -220;

	t77 = ((x309==(x310<x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	int32_t x315 = -24170;
	static int32_t t78 = 62;

	t78 = ((x313==(x314<x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 3U;
	static int32_t t79 = -198;

	t79 = ((x317==(x318<x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 103U;
	static volatile int32_t x322 = INT32_MIN;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -14038;

	t80 = ((x321==(x322<x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = INT8_MAX;
	int32_t x328 = -251;
	volatile int32_t t81 = -1448;

	t81 = ((x325==(x326<x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 217285069009LLU;
	int8_t x331 = -1;
	int32_t x332 = INT32_MAX;
	static int32_t t82 = -193;

	t82 = ((x329==(x330<x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 0;
	int8_t x334 = -2;
	static uint16_t x335 = UINT16_MAX;
	int16_t x336 = -1;
	int32_t t83 = -2;

	t83 = ((x333==(x334<x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = UINT32_MAX;

	t84 = ((x337==(x338<x339))*x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 0U;
	static volatile int8_t x342 = -1;
	static uint32_t x343 = 49U;
	static int64_t x344 = -194949765909389855LL;
	volatile int64_t t85 = 425754LL;

	t85 = ((x341==(x342<x343))*x344);

	if (t85 != -194949765909389855LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	volatile int8_t x347 = 0;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 68;

	t86 = ((x345==(x346<x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	volatile uint64_t t87 = 16858067LLU;

	t87 = ((x349==(x350<x351))*x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 38U;
	static int32_t x354 = 1;
	uint16_t x355 = 21659U;
	uint64_t x356 = 27868LLU;

	t88 = ((x353==(x354<x355))*x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = -1;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x357==(x358<x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 10U;
	int64_t x362 = -1LL;
	uint32_t x364 = UINT32_MAX;
	uint32_t t90 = 1073U;

	t90 = ((x361==(x362<x363))*x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t t91 = 0U;

	t91 = ((x365==(x366<x367))*x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -2;
	int64_t x372 = -1LL;

	t92 = ((x369==(x370<x371))*x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	uint32_t t93 = 1381U;

	t93 = ((x373==(x374<x375))*x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	uint8_t x378 = 5U;
	static uint32_t x380 = 418021422U;
	volatile uint32_t t94 = 121U;

	t94 = ((x377==(x378<x379))*x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MIN;

	t95 = ((x381==(x382<x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x386 = UINT16_MAX;
	static int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -1265160771709386LL;

	t96 = ((x385==(x386<x387))*x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -1508567;

	t97 = ((x389==(x390<x391))*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 1;
	volatile uint64_t x394 = 139451928902LLU;
	static int8_t x395 = INT8_MAX;
	int64_t x396 = INT64_MIN;
	volatile int64_t t98 = -3369LL;

	t98 = ((x393==(x394<x395))*x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int64_t x399 = 54749055005437LL;
	volatile int32_t t99 = 4376;

	t99 = ((x397==(x398<x399))*x400);

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

