#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 2U;
volatile int16_t x11 = 11827;
int16_t x15 = INT16_MIN;
int16_t x18 = -1;
uint32_t x21 = UINT32_MAX;
uint32_t x24 = 7756U;
int8_t x29 = -1;
uint32_t x30 = 70079948U;
int8_t x32 = INT8_MAX;
uint8_t x37 = 122U;
int64_t x42 = INT64_MAX;
volatile int32_t t11 = -518825779;
static volatile int8_t x51 = -1;
int8_t x53 = 1;
uint64_t x59 = 301601430462254260LLU;
static uint64_t x60 = 30346LLU;
volatile uint64_t t14 = 2664849613776LLU;
int64_t x80 = INT64_MIN;
static uint64_t t19 = 66844LLU;
uint16_t x81 = UINT16_MAX;
uint16_t x91 = UINT16_MAX;
int8_t x104 = INT8_MIN;
int32_t t25 = -54;
int16_t x107 = INT16_MIN;
static uint8_t x112 = 13U;
int64_t t28 = 1LL;
uint32_t x117 = UINT32_MAX;
int32_t t29 = 396230;
volatile uint32_t x128 = 7084U;
static int64_t x130 = INT64_MIN;
int16_t x136 = 0;
volatile int32_t t33 = -246;
uint8_t x138 = UINT8_MAX;
uint32_t t34 = 5553514U;
int8_t x151 = INT8_MIN;
int8_t x162 = 2;
uint32_t x166 = UINT32_MAX;
static uint32_t x170 = UINT32_MAX;
int64_t t43 = -1486LL;
uint32_t x177 = UINT32_MAX;
int32_t x183 = 928651744;
static int32_t t45 = INT32_MAX;
int16_t x186 = -1;
int16_t x188 = -1;
static volatile int8_t x192 = -1;
int16_t x200 = INT16_MIN;
static int16_t x201 = INT16_MAX;
uint32_t x208 = UINT32_MAX;
volatile int64_t x214 = 1870621603LL;
int64_t t53 = INT64_MAX;
int64_t x217 = -27075LL;
uint32_t x220 = UINT32_MAX;
static uint32_t x223 = 279U;
static volatile int16_t x227 = INT16_MAX;
int32_t x234 = -45116;
int32_t x238 = 262781589;
uint64_t t59 = 24LLU;
int16_t x243 = INT16_MIN;
int32_t x247 = INT32_MIN;
uint32_t x256 = UINT32_MAX;
volatile int64_t t64 = 1719480481LL;
int64_t x263 = INT64_MIN;
static uint8_t x265 = 31U;
int32_t x266 = INT32_MIN;
uint64_t x271 = 2136909LLU;
volatile uint64_t t67 = 43465926061LLU;
int64_t x274 = INT64_MIN;
static int16_t x275 = 872;
volatile int64_t t68 = 4095023LL;
static int32_t x278 = INT32_MIN;
volatile uint64_t t70 = 859039860429LLU;
uint32_t x285 = 202469907U;
uint16_t x289 = 82U;
volatile int32_t x290 = 884;
static uint64_t x294 = 55942507LLU;
static int8_t x297 = -1;
static int64_t x299 = INT64_MAX;
int16_t x310 = -1;
static volatile uint8_t x318 = UINT8_MAX;
int64_t x320 = 58880658310LL;
uint8_t x323 = 11U;
uint16_t x324 = 5U;
volatile int32_t t80 = -1895960;
static uint64_t x326 = 3919LLU;
uint32_t x329 = UINT32_MAX;
int16_t x330 = INT16_MIN;
int16_t x338 = INT16_MAX;
int16_t x340 = -9;
int8_t x341 = 20;
int8_t x349 = INT8_MIN;
int32_t t87 = 220;
volatile int16_t x358 = INT16_MIN;
int8_t x359 = 54;
int64_t x366 = -1LL;
volatile int64_t t91 = 5800780LL;
static int16_t x369 = 60;
volatile int8_t x372 = -1;
int32_t x374 = 16366378;
volatile int16_t x375 = -2;
volatile int32_t t93 = -30;
volatile int8_t x382 = -1;
int8_t x383 = INT8_MAX;
int16_t x389 = -8522;
volatile uint32_t x390 = 2020419U;
int32_t x391 = INT32_MAX;
uint16_t x394 = 14U;
volatile int32_t x399 = 47;
uint8_t x400 = UINT8_MAX;
static int32_t t99 = 254190;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile uint16_t x2 = UINT16_MAX;
	static int8_t x3 = INT8_MIN;
	static uint8_t x4 = 1U;
	int32_t t0 = -1519;

	t0 = ((x1==x2)|(x3|x4));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 42U;
	volatile uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	volatile int64_t t1 = -40920574LL;

	t1 = ((x5==x6)|(x7|x8));

	if (t1 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 91;
	volatile int8_t x10 = -1;
	uint16_t x12 = 104U;
	volatile int32_t t2 = 49163;

	t2 = ((x9==x10)|(x11|x12));

	if (t2 != 11899) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static int16_t x14 = 1423;
	uint8_t x16 = 3U;
	static int32_t t3 = 1772;

	t3 = ((x13==x14)|(x15|x16));

	if (t3 != -32765) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -472164100642162LL;
	uint32_t x19 = 4U;
	int8_t x20 = -5;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x17==x18)|(x19|x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 19U;
	int64_t x23 = INT64_MAX;
	volatile int64_t t5 = INT64_MAX;

	t5 = ((x21==x22)|(x23|x24));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MAX;
	static int8_t x27 = 4;
	volatile int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 173573756895157LL;

	t6 = ((x25==x26)|(x27|x28));

	if (t6 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x31 = -1;
	int32_t t7 = -236;

	t7 = ((x29==x30)|(x31|x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -393LL;
	volatile uint32_t x34 = UINT32_MAX;
	int64_t x35 = -1LL;
	static uint16_t x36 = 300U;
	volatile int64_t t8 = 2900670070809412633LL;

	t8 = ((x33==x34)|(x35|x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MIN;
	int64_t x40 = -1655LL;
	int64_t t9 = -4044771LL;

	t9 = ((x37==x38)|(x39|x40));

	if (t9 != -1655LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x43 = 91U;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 1104204;

	t10 = ((x41==x42)|(x43|x44));

	if (t10 != -2147483557) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = -1;
	uint64_t x46 = 41LLU;
	static int16_t x47 = -1;
	int32_t x48 = INT32_MIN;

	t11 = ((x45==x46)|(x47|x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile int32_t x50 = INT32_MIN;
	uint64_t x52 = 297618LLU;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x49==x50)|(x51|x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = INT64_MAX;
	static int16_t x55 = INT16_MIN;
	uint32_t x56 = 58820286U;
	uint32_t t13 = 748570842U;

	t13 = ((x53==x54)|(x55|x56));

	if (t13 != 4294936254U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 2LLU;
	uint8_t x58 = UINT8_MAX;

	t14 = ((x57==x58)|(x59|x60));

	if (t14 != 301601430462267070LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 27148LLU;
	volatile uint8_t x62 = 25U;
	static volatile int64_t x63 = INT64_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	int64_t t15 = INT64_MAX;

	t15 = ((x61==x62)|(x63|x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -482;
	static int16_t x66 = INT16_MAX;
	volatile int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	static volatile int64_t t16 = INT64_MIN;

	t16 = ((x65==x66)|(x67|x68));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 98U;
	volatile int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	uint8_t x72 = 29U;
	int32_t t17 = -374;

	t17 = ((x69==x70)|(x71|x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static int8_t x74 = INT8_MIN;
	int16_t x75 = 441;
	uint8_t x76 = 14U;
	int32_t t18 = 6119305;

	t18 = ((x73==x74)|(x75|x76));

	if (t18 != 447) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	int16_t x78 = INT16_MIN;
	static volatile uint64_t x79 = 35408LLU;

	t19 = ((x77==x78)|(x79|x80));

	if (t19 != 9223372036854811216LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	uint32_t x84 = 1241489921U;
	uint32_t t20 = 81003148U;

	t20 = ((x81==x82)|(x83|x84));

	if (t20 != 1241513983U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static int64_t x86 = INT64_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MAX;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = ((x85==x86)|(x87|x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -296713692828LL;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -237;

	t22 = ((x89==x90)|(x91|x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 0;
	int8_t x94 = 6;
	uint16_t x95 = 1592U;
	static int64_t x96 = 3LL;
	static volatile int64_t t23 = -201641644234840LL;

	t23 = ((x93==x94)|(x95|x96));

	if (t23 != 1595LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -760977334;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MAX;
	int32_t t24 = -64250223;

	t24 = ((x97==x98)|(x99|x100));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = 18U;
	int8_t x103 = 30;

	t25 = ((x101==x102)|(x103|x104));

	if (t25 != -98) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1016;
	uint16_t x106 = UINT16_MAX;
	int8_t x108 = -2;
	volatile int32_t t26 = -780;

	t26 = ((x105==x106)|(x107|x108));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 15LL;
	int16_t x110 = 11;
	uint64_t x111 = 2813610639792239LLU;
	uint64_t t27 = 10LLU;

	t27 = ((x109==x110)|(x111|x112));

	if (t27 != 2813610639792239LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	volatile int32_t x114 = -1;
	int64_t x115 = 362175231LL;
	uint16_t x116 = UINT16_MAX;

	t28 = ((x113==x114)|(x115|x116));

	if (t28 != 362217471LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	volatile int16_t x119 = -1;
	int32_t x120 = -175;

	t29 = ((x117==x118)|(x119|x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 21LLU;
	static volatile int16_t x122 = INT16_MAX;
	static volatile uint8_t x123 = UINT8_MAX;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = INT32_MAX;

	t30 = ((x121==x122)|(x123|x124));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 60140743024001898LL;
	uint32_t x126 = 408876U;
	int32_t x127 = INT32_MIN;
	static uint32_t t31 = 23709368U;

	t31 = ((x125==x126)|(x127|x128));

	if (t31 != 2147490732U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	int16_t x131 = INT16_MAX;
	int16_t x132 = -11699;
	int32_t t32 = 14;

	t32 = ((x129==x130)|(x131|x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 219U;
	uint64_t x134 = 2514525122LLU;
	int32_t x135 = -1;

	t33 = ((x133==x134)|(x135|x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -81774;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 37615U;

	t34 = ((x137==x138)|(x139|x140));

	if (t34 != 4294967279U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	static uint16_t x142 = 289U;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 13U;
	static uint32_t t35 = 8290077U;

	t35 = ((x141==x142)|(x143|x144));

	if (t35 != 2147483661U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 70U;
	int8_t x146 = -2;
	uint64_t x147 = 1717631LLU;
	int16_t x148 = 0;
	volatile uint64_t t36 = 567291748671029LLU;

	t36 = ((x145==x146)|(x147|x148));

	if (t36 != 1717631LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = -3;
	int16_t x150 = -1;
	int32_t x152 = 13696;
	volatile int32_t t37 = -3550340;

	t37 = ((x149==x150)|(x151|x152));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static int8_t x154 = -1;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = 57110U;
	static volatile int64_t t38 = 875858429478547834LL;

	t38 = ((x153==x154)|(x155|x156));

	if (t38 != -9223372036854718698LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 11746591U;
	volatile int16_t x158 = -25;
	static int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t39 = 310330567510411LL;

	t39 = ((x157==x158)|(x159|x160));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = 4127340;
	uint32_t x163 = 174116U;
	volatile int64_t x164 = -1LL;
	volatile int64_t t40 = 5689118766538416LL;

	t40 = ((x161==x162)|(x163|x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t41 = -4753;

	t41 = ((x165==x166)|(x167|x168));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 6216243U;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t42 = 175;

	t42 = ((x169==x170)|(x171|x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 14U;
	int64_t x176 = 535980905405540LL;

	t43 = ((x173==x174)|(x175|x176));

	if (t43 != 535980905405550LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = 4871469875LL;
	volatile int16_t x179 = INT16_MIN;
	volatile int64_t x180 = 4115568932425020LL;
	volatile int64_t t44 = 3347469064388351375LL;

	t44 = ((x177==x178)|(x179|x180));

	if (t44 != -29380LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	uint64_t x182 = 601191246633167482LLU;
	static int32_t x184 = INT32_MAX;

	t45 = ((x181==x182)|(x183|x184));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	static int8_t x187 = INT8_MAX;
	int32_t t46 = -177849896;

	t46 = ((x185==x186)|(x187|x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x189 = 808923664143454636LLU;
	int32_t x190 = -1537;
	int8_t x191 = -1;
	int32_t t47 = 40541735;

	t47 = ((x189==x190)|(x191|x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	uint16_t x194 = 282U;
	int16_t x195 = INT16_MIN;
	volatile int16_t x196 = INT16_MAX;
	int32_t t48 = 3577052;

	t48 = ((x193==x194)|(x195|x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	volatile uint32_t x198 = 7596U;
	int64_t x199 = INT64_MIN;
	static int64_t t49 = 149167123379018LL;

	t49 = ((x197==x198)|(x199|x200));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MAX;
	int16_t x203 = -1;
	int64_t x204 = -1LL;
	volatile int64_t t50 = 534187920466LL;

	t50 = ((x201==x202)|(x203|x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = 104898468925400LL;
	uint32_t x207 = 5167683U;
	static volatile uint32_t t51 = UINT32_MAX;

	t51 = ((x205==x206)|(x207|x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -5;
	static int16_t x210 = INT16_MAX;
	int32_t x211 = -79;
	uint32_t x212 = 32836642U;
	uint32_t t52 = 861U;

	t52 = ((x209==x210)|(x211|x212));

	if (t52 != 4294967219U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	static int64_t x215 = INT64_MAX;
	int8_t x216 = 1;

	t53 = ((x213==x214)|(x215|x216));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	static uint32_t t54 = UINT32_MAX;

	t54 = ((x217==x218)|(x219|x220));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int32_t x222 = -1;
	uint64_t x224 = 3390LLU;
	static volatile uint64_t t55 = 19658107445645080LLU;

	t55 = ((x221==x222)|(x223|x224));

	if (t55 != 3391LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = 960335115LLU;
	static uint8_t x226 = UINT8_MAX;
	static int16_t x228 = -1;
	int32_t t56 = -6554;

	t56 = ((x225==x226)|(x227|x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int32_t x230 = INT32_MIN;
	static volatile int32_t x231 = INT32_MIN;
	volatile int64_t x232 = INT64_MIN;
	int64_t t57 = -337LL;

	t57 = ((x229==x230)|(x231|x232));

	if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -6006102049LL;
	static int16_t x235 = INT16_MIN;
	volatile int32_t x236 = INT32_MIN;
	int32_t t58 = -1153016;

	t58 = ((x233==x234)|(x235|x236));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -1;
	uint64_t x239 = 10908910527259LLU;
	int64_t x240 = INT64_MAX;

	t59 = ((x237==x238)|(x239|x240));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	static int8_t x242 = 7;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 0;

	t60 = ((x241==x242)|(x243|x244));

	if (t60 != -32513) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MIN;
	int32_t x248 = 35968;
	volatile int32_t t61 = 12709;

	t61 = ((x245==x246)|(x247|x248));

	if (t61 != -2147447680) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 3423LLU;
	static uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	volatile int64_t t62 = -3979925749670LL;

	t62 = ((x249==x250)|(x251|x252));

	if (t62 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	uint32_t x254 = UINT32_MAX;
	volatile int8_t x255 = 37;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x253==x254)|(x255|x256));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = UINT8_MAX;
	static uint64_t x258 = UINT64_MAX;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MAX;

	t64 = ((x257==x258)|(x259|x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x261 = 19690U;
	static uint8_t x262 = 2U;
	int64_t x264 = -1LL;
	int64_t t65 = 17548865270LL;

	t65 = ((x261==x262)|(x263|x264));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x267 = 1;
	int16_t x268 = 3;
	int32_t t66 = 5;

	t66 = ((x265==x266)|(x267|x268));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	static volatile int32_t x270 = INT32_MIN;
	int16_t x272 = 1;

	t67 = ((x269==x270)|(x271|x272));

	if (t67 != 2136909LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 81904568864369504LLU;
	static int64_t x276 = -1151826257156898LL;

	t68 = ((x273==x274)|(x275|x276));

	if (t68 != -1151826257156098LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = 3600;
	static volatile uint16_t x279 = 598U;
	int16_t x280 = -1;
	int32_t t69 = 33974;

	t69 = ((x277==x278)|(x279|x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile int64_t x282 = 178866026116314455LL;
	static int32_t x283 = INT32_MIN;
	uint64_t x284 = 249042448LLU;

	t70 = ((x281==x282)|(x283|x284));

	if (t70 != 18446744071811110416LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = -1;
	uint64_t x288 = 16632022507878429LLU;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x285==x286)|(x287|x288));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 96420U;
	volatile uint32_t t72 = 7573282U;

	t72 = ((x289==x290)|(x291|x292));

	if (t72 != 4294965412U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x295 = -1;
	uint8_t x296 = 62U;
	volatile int32_t t73 = -179753679;

	t73 = ((x293==x294)|(x295|x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x298 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	volatile int64_t t74 = -357637845LL;

	t74 = ((x297==x298)|(x299|x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 10286121520790529LLU;
	static volatile int32_t x302 = -406599;
	static uint8_t x303 = 0U;
	volatile uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x301==x302)|(x303|x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	uint64_t x306 = 5699561753397LLU;
	static int32_t x307 = INT32_MAX;
	uint32_t x308 = 6259U;
	uint32_t t76 = 11946840U;

	t76 = ((x305==x306)|(x307|x308));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 4U;
	static int32_t x311 = INT32_MIN;
	uint16_t x312 = UINT16_MAX;
	static volatile int32_t t77 = -1;

	t77 = ((x309==x310)|(x311|x312));

	if (t77 != -2147418113) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MAX;
	volatile int32_t x314 = INT32_MAX;
	int16_t x315 = INT16_MAX;
	static int64_t x316 = -1LL;
	int64_t t78 = 165LL;

	t78 = ((x313==x314)|(x315|x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static int8_t x319 = INT8_MIN;
	volatile int64_t t79 = -31771875973489824LL;

	t79 = ((x317==x318)|(x319|x320));

	if (t79 != -122LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;

	t80 = ((x321==x322)|(x323|x324));

	if (t80 != 15) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x325 = -9107;
	uint32_t x327 = 34U;
	static int8_t x328 = INT8_MIN;
	static uint32_t t81 = 135454U;

	t81 = ((x325==x326)|(x327|x328));

	if (t81 != 4294967202U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x331 = -22LL;
	uint64_t x332 = 13LLU;
	uint64_t t82 = 13LLU;

	t82 = ((x329==x330)|(x331|x332));

	if (t82 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MAX;
	uint16_t x334 = UINT16_MAX;
	volatile int16_t x335 = INT16_MIN;
	int64_t x336 = -38856300412665468LL;
	volatile int64_t t83 = 199508LL;

	t83 = ((x333==x334)|(x335|x336));

	if (t83 != -32380LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	volatile int32_t t84 = 4231813;

	t84 = ((x337==x338)|(x339|x340));

	if (t84 != -9) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MAX;
	int64_t x344 = INT64_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = ((x341==x342)|(x343|x344));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	static volatile uint8_t x346 = UINT8_MAX;
	int16_t x347 = -1;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t86 = 155846LL;

	t86 = ((x345==x346)|(x347|x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;

	t87 = ((x349==x350)|(x351|x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int64_t x354 = INT64_MIN;
	volatile int32_t x355 = INT32_MAX;
	volatile uint8_t x356 = 0U;
	int32_t t88 = INT32_MAX;

	t88 = ((x353==x354)|(x355|x356));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -17920025496144317LL;
	uint16_t x360 = 25U;
	volatile int32_t t89 = -106;

	t89 = ((x357==x358)|(x359|x360));

	if (t89 != 63) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	static uint64_t x362 = 536008654980820LLU;
	int16_t x363 = INT16_MAX;
	volatile int8_t x364 = -2;
	volatile int32_t t90 = -37;

	t90 = ((x361==x362)|(x363|x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int64_t x367 = 1124177947544LL;
	int64_t x368 = 207113562387LL;

	t91 = ((x365==x366)|(x367|x368));

	if (t91 != 1330349222811LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x370 = 270U;
	static uint64_t x371 = 81140LLU;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x369==x370)|(x371|x372));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int16_t x376 = -3175;

	t93 = ((x373==x374)|(x375|x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 254;
	uint64_t x378 = UINT64_MAX;
	uint16_t x379 = UINT16_MAX;
	static int32_t x380 = -1;
	int32_t t94 = 9;

	t94 = ((x377==x378)|(x379|x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 1U;
	int64_t x384 = INT64_MIN;
	int64_t t95 = -11881290LL;

	t95 = ((x381==x382)|(x383|x384));

	if (t95 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int64_t x386 = -2737645004291LL;
	int16_t x387 = -980;
	int8_t x388 = -1;
	volatile int32_t t96 = 0;

	t96 = ((x385==x386)|(x387|x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 2;

	t97 = ((x389==x390)|(x391|x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = 4U;
	volatile uint32_t t98 = 1U;

	t98 = ((x393==x394)|(x395|x396));

	if (t98 != 4294934532U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MAX;
	static uint64_t x398 = UINT64_MAX;

	t99 = ((x397==x398)|(x399|x400));

	if (t99 != 255) { NG(); } else { ; }
	
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

