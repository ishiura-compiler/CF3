#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = INT64_MIN;
uint16_t x10 = 4292U;
static int32_t x12 = 752140;
volatile int32_t t2 = -20901346;
int32_t x24 = INT32_MAX;
volatile int32_t t6 = -26002;
int64_t x30 = INT64_MIN;
static uint8_t x46 = 47U;
volatile int32_t x47 = -1;
volatile int32_t t11 = 88936166;
static int32_t x61 = INT32_MIN;
int16_t x63 = -1;
int16_t x70 = 13017;
static volatile int32_t t17 = -7821;
int32_t t18 = -6845232;
static volatile uint8_t x77 = 11U;
static int32_t x85 = 81900;
volatile int16_t x91 = INT16_MIN;
static int16_t x95 = INT16_MIN;
static uint16_t x101 = 30613U;
uint32_t x104 = UINT32_MAX;
int16_t x109 = -1;
static uint64_t x117 = UINT64_MAX;
volatile int64_t x118 = -361232LL;
volatile int32_t t29 = -358;
volatile int16_t x124 = 3;
int32_t t30 = 116797269;
int16_t x132 = -48;
uint16_t x139 = UINT16_MAX;
int8_t x142 = INT8_MIN;
uint16_t x144 = 32U;
int64_t x146 = INT64_MIN;
static int64_t x151 = INT64_MIN;
int8_t x152 = -1;
static uint16_t x153 = 780U;
uint8_t x154 = 5U;
int32_t t38 = 829261804;
int64_t x158 = INT64_MIN;
int32_t x162 = INT32_MIN;
volatile int32_t t40 = 1;
static uint32_t x166 = UINT32_MAX;
int32_t x168 = INT32_MIN;
volatile int32_t t41 = -46382;
uint8_t x173 = UINT8_MAX;
uint8_t x177 = 12U;
static uint32_t x179 = 52U;
int32_t x181 = INT32_MIN;
int64_t x182 = -4334546752617LL;
uint16_t x188 = 29353U;
volatile int32_t x191 = 44227;
volatile int32_t t47 = -7363287;
static int16_t x193 = 9;
static volatile int8_t x195 = INT8_MIN;
int32_t t48 = 194065550;
int16_t x197 = -1;
volatile int64_t x200 = -1LL;
int32_t x208 = 9375;
int32_t t51 = 365;
uint8_t x213 = UINT8_MAX;
int8_t x215 = -1;
int32_t x217 = -1;
volatile int16_t x219 = 0;
int8_t x228 = INT8_MIN;
int8_t x229 = -13;
uint64_t x234 = 5325511826713981028LLU;
int32_t x245 = -647;
int16_t x247 = INT16_MIN;
int32_t t64 = -1621523;
uint32_t x261 = 228451U;
int32_t x262 = -115;
uint64_t x263 = 91270LLU;
int16_t x265 = INT16_MIN;
volatile int64_t x277 = 13722243906LL;
int64_t x283 = -30898977389LL;
volatile int64_t x287 = INT64_MIN;
volatile int32_t x294 = -1;
int64_t x295 = INT64_MIN;
static volatile int64_t x297 = -1LL;
static volatile uint64_t x301 = 109033740732993LLU;
static int32_t t75 = -12071;
int32_t x305 = -32;
volatile int32_t t76 = -810374;
int32_t x310 = INT32_MAX;
volatile int64_t x315 = INT64_MIN;
static int64_t x316 = 15278LL;
volatile int64_t x332 = INT64_MAX;
int32_t x339 = 4420036;
volatile uint16_t x341 = 325U;
int64_t x347 = INT64_MIN;
volatile uint64_t x348 = UINT64_MAX;
uint64_t x351 = 14426110238LLU;
int8_t x353 = 1;
volatile int32_t t88 = 32056453;
static uint64_t x359 = 158LLU;
int32_t t89 = 112669095;
int64_t x362 = INT64_MIN;
int16_t x367 = 7608;
volatile uint64_t x373 = 11107755369223LLU;
int32_t t93 = -10026832;
volatile int8_t x377 = INT8_MAX;
int32_t t97 = 36964;
int32_t t99 = -31078986;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	static uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = INT8_MAX;
	static int64_t x4 = INT64_MAX;
	static int32_t t0 = 237171918;

	t0 = ((x1==x2)*(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = UINT64_MAX;
	static uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 1;

	t1 = ((x5==x6)*(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x11 = -1;

	t2 = ((x9==x10)*(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int32_t x14 = 27872608;
	int32_t x15 = -1;
	static volatile int16_t x16 = INT16_MIN;
	static int32_t t3 = 186219;

	t3 = ((x13==x14)*(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static int16_t x18 = INT16_MIN;
	static volatile int64_t x19 = -1LL;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 46238093;

	t4 = ((x17==x18)*(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = 1681605;
	int64_t x23 = INT64_MIN;
	volatile int32_t t5 = -365214513;

	t5 = ((x21==x22)*(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 272U;
	static int64_t x26 = INT64_MIN;
	uint32_t x27 = 16867U;
	int8_t x28 = INT8_MIN;

	t6 = ((x25==x26)*(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1162642;
	static uint32_t x31 = UINT32_MAX;
	uint16_t x32 = 224U;
	int32_t t7 = 286549;

	t7 = ((x29==x30)*(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	int16_t x34 = 709;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -120250;

	t8 = ((x33==x34)*(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 1790915163LL;
	int32_t x38 = 117822;
	int16_t x39 = -18;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 96205;

	t9 = ((x37==x38)*(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 167936371967514LLU;
	uint8_t x43 = 57U;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 57153360;

	t10 = ((x41==x42)*(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 52965;
	static uint8_t x48 = UINT8_MAX;

	t11 = ((x45==x46)*(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x50 = 4953735640283510981LLU;
	int64_t x51 = 132251721LL;
	uint32_t x52 = 14U;
	int32_t t12 = 0;

	t12 = ((x49==x50)*(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 25833LLU;
	int64_t x54 = -13395129518LL;
	uint64_t x55 = UINT64_MAX;
	volatile int8_t x56 = -1;
	volatile int32_t t13 = 2243;

	t13 = ((x53==x54)*(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -8204;
	static int64_t x58 = INT64_MIN;
	int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 37275;

	t14 = ((x57==x58)*(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t15 = 6;

	t15 = ((x61==x62)*(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint64_t x66 = 6753LLU;
	int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -18;

	t16 = ((x65==x66)*(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x71 = 1092131619210208LLU;
	uint16_t x72 = 377U;

	t17 = ((x69==x70)*(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	int64_t x74 = INT64_MIN;
	static volatile int32_t x75 = INT32_MIN;
	volatile uint16_t x76 = 2U;

	t18 = ((x73==x74)*(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	uint64_t x79 = 2137346LLU;
	static volatile int16_t x80 = INT16_MAX;
	static volatile int32_t t19 = -684240;

	t19 = ((x77==x78)*(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = UINT32_MAX;
	static volatile int8_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = 49;

	t20 = ((x81==x82)*(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 9560946560686097LLU;
	int16_t x87 = -1;
	int32_t x88 = -367182;
	volatile int32_t t21 = -104;

	t21 = ((x85==x86)*(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 12290;
	volatile int64_t x90 = -1LL;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -670208;

	t22 = ((x89==x90)*(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 0U;
	volatile uint64_t x94 = 13180LLU;
	volatile int8_t x96 = -6;
	volatile int32_t t23 = 15119254;

	t23 = ((x93==x94)*(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = INT64_MIN;
	static uint8_t x98 = 4U;
	static int64_t x99 = 654964272678441LL;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -48575;

	t24 = ((x97==x98)*(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 103U;
	int8_t x103 = 2;
	volatile int32_t t25 = 123805;

	t25 = ((x101==x102)*(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 837U;
	int8_t x106 = 0;
	volatile uint16_t x107 = UINT16_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t26 = 31;

	t26 = ((x105==x106)*(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = -1;
	uint64_t x111 = 27386328568286LLU;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = -5513008;

	t27 = ((x109==x110)*(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	int8_t x115 = -7;
	volatile int8_t x116 = -1;
	int32_t t28 = 7054863;

	t28 = ((x113==x114)*(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = 3;
	uint32_t x120 = UINT32_MAX;

	t29 = ((x117==x118)*(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = 892818873;

	t30 = ((x121==x122)*(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -108634194634LL;
	int32_t x126 = INT32_MAX;
	static int8_t x127 = INT8_MIN;
	int16_t x128 = 150;
	volatile int32_t t31 = -1;

	t31 = ((x125==x126)*(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 3U;
	int8_t x130 = INT8_MAX;
	int16_t x131 = -3;
	static volatile int32_t t32 = -922882146;

	t32 = ((x129==x130)*(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	volatile int8_t x134 = 1;
	uint16_t x135 = 6U;
	int64_t x136 = -1335LL;
	volatile int32_t t33 = 4615;

	t33 = ((x133==x134)*(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	static uint32_t x138 = 454661882U;
	int8_t x140 = INT8_MAX;
	int32_t t34 = 3294634;

	t34 = ((x137==x138)*(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	volatile int32_t t35 = 7148526;

	t35 = ((x141==x142)*(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 0U;
	uint32_t x147 = 928465U;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 6503399;

	t36 = ((x145==x146)*(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 38U;
	int32_t x150 = -15;
	volatile int32_t t37 = 618;

	t37 = ((x149==x150)*(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x155 = INT16_MIN;
	static uint16_t x156 = 4U;

	t38 = ((x153==x154)*(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MAX;
	int16_t x159 = -63;
	uint64_t x160 = 7572752954LLU;
	int32_t t39 = -16405602;

	t39 = ((x157==x158)*(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x163 = 802LLU;
	int64_t x164 = INT64_MIN;

	t40 = ((x161==x162)*(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	uint64_t x167 = 28394796LLU;

	t41 = ((x165==x166)*(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = 4030933LL;
	uint8_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 24U;
	int32_t t42 = -1;

	t42 = ((x169==x170)*(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 5LLU;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = INT8_MIN;
	static volatile int32_t t43 = -189;

	t43 = ((x173==x174)*(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 15U;
	int8_t x180 = -1;
	volatile int32_t t44 = -126958060;

	t44 = ((x177==x178)*(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x183 = INT16_MAX;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t45 = -1821;

	t45 = ((x181==x182)*(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 169211317LLU;
	volatile int64_t x186 = -231834965005LL;
	volatile int64_t x187 = INT64_MIN;
	volatile int32_t t46 = 315;

	t46 = ((x185==x186)*(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 1U;
	int32_t x190 = INT32_MAX;
	int16_t x192 = -24;

	t47 = ((x189==x190)*(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -433184696;
	int16_t x196 = INT16_MAX;

	t48 = ((x193==x194)*(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x198 = UINT16_MAX;
	int8_t x199 = -1;
	volatile int32_t t49 = -32775;

	t49 = ((x197==x198)*(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	static int64_t x202 = INT64_MAX;
	int64_t x203 = 1471555LL;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 1;

	t50 = ((x201==x202)*(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MAX;
	int64_t x206 = 99215954113648521LL;
	static volatile int32_t x207 = -1;

	t51 = ((x205==x206)*(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = 157035743348LLU;
	volatile int64_t x210 = -1LL;
	uint16_t x211 = 104U;
	int64_t x212 = -1LL;
	volatile int32_t t52 = -7354;

	t52 = ((x209==x210)*(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MAX;
	volatile uint32_t x216 = 58813U;
	int32_t t53 = -403484;

	t53 = ((x213==x214)*(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x218 = 0U;
	static int64_t x220 = INT64_MAX;
	int32_t t54 = -61873517;

	t54 = ((x217==x218)*(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static int16_t x222 = 54;
	uint64_t x223 = 5LLU;
	static volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = -711645;

	t55 = ((x221==x222)*(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint16_t x226 = 2U;
	static uint8_t x227 = 1U;
	int32_t t56 = -1;

	t56 = ((x225==x226)*(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MIN;
	volatile int8_t x231 = 0;
	int32_t x232 = 1879;
	int32_t t57 = 15662;

	t57 = ((x229==x230)*(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MAX;
	volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = 11000356LLU;
	volatile int32_t t58 = 0;

	t58 = ((x233==x234)*(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MAX;
	static int8_t x238 = -1;
	static volatile int32_t x239 = -3;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 199;

	t59 = ((x237==x238)*(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = -246804975;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;
	static int32_t t60 = 7;

	t60 = ((x241==x242)*(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x246 = INT32_MIN;
	uint64_t x248 = 3847388LLU;
	volatile int32_t t61 = -80130961;

	t61 = ((x245==x246)*(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t62 = -69;

	t62 = ((x249==x250)*(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = -1;
	uint8_t x255 = 11U;
	int8_t x256 = -1;
	volatile int32_t t63 = -2660;

	t63 = ((x253==x254)*(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	volatile int32_t x258 = -1;
	static int64_t x259 = -1LL;
	static uint16_t x260 = 277U;

	t64 = ((x257==x258)*(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x264 = -1;
	int32_t t65 = 2;

	t65 = ((x261==x262)*(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = 1;
	uint64_t x267 = 6754LLU;
	static uint8_t x268 = UINT8_MAX;
	int32_t t66 = -226538;

	t66 = ((x265==x266)*(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MAX;
	uint32_t x271 = 3507198U;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 5;

	t67 = ((x269==x270)*(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MAX;
	static volatile uint64_t x274 = 99731778950216795LLU;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;
	int32_t t68 = 16217;

	t68 = ((x273==x274)*(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 132U;
	uint16_t x279 = 383U;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 128;

	t69 = ((x277==x278)*(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	int32_t x284 = -1;
	volatile int32_t t70 = 0;

	t70 = ((x281==x282)*(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int16_t x286 = -507;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 53;

	t71 = ((x285==x286)*(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 15U;
	volatile int8_t x290 = 0;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 8034607;

	t72 = ((x289==x290)*(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 13;
	int8_t x296 = -5;
	static volatile int32_t t73 = -382541728;

	t73 = ((x293==x294)*(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -1;
	int16_t x299 = INT16_MAX;
	static volatile uint8_t x300 = 2U;
	static volatile int32_t t74 = 9;

	t74 = ((x297==x298)*(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;

	t75 = ((x301==x302)*(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MAX;
	volatile int64_t x307 = INT64_MIN;
	uint8_t x308 = 0U;

	t76 = ((x305==x306)*(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	uint16_t x311 = 3190U;
	int64_t x312 = -1457LL;
	int32_t t77 = 1007260;

	t77 = ((x309==x310)*(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static int64_t x314 = 133511673880LL;
	int32_t t78 = 3553;

	t78 = ((x313==x314)*(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 2U;
	uint64_t x318 = 0LLU;
	static int32_t x319 = 3;
	uint64_t x320 = 5635434828553LLU;
	int32_t t79 = 64083539;

	t79 = ((x317==x318)*(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	static uint16_t x322 = 9U;
	int64_t x323 = INT64_MIN;
	volatile int16_t x324 = -1;
	static volatile int32_t t80 = -452;

	t80 = ((x321==x322)*(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	int16_t x327 = -5;
	uint32_t x328 = 11650U;
	int32_t t81 = -2053;

	t81 = ((x325==x326)*(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 27423576U;
	uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 38U;
	int32_t t82 = 13111923;

	t82 = ((x329==x330)*(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -972;
	int16_t x334 = -1;
	uint8_t x335 = 5U;
	int32_t x336 = -1;
	int32_t t83 = 67;

	t83 = ((x333==x334)*(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 385715529;

	t84 = ((x337==x338)*(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = -1;
	static volatile int64_t x343 = -635250317970902734LL;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = 244583844;

	t85 = ((x341==x342)*(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = 7262409383364LLU;
	static int8_t x346 = 21;
	volatile int32_t t86 = -526587902;

	t86 = ((x345==x346)*(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -20;
	volatile uint32_t x350 = UINT32_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = 0;

	t87 = ((x349==x350)*(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x354 = UINT32_MAX;
	int8_t x355 = -7;
	static int64_t x356 = -1LL;

	t88 = ((x353==x354)*(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static uint64_t x358 = 24829415067LLU;
	int64_t x360 = INT64_MAX;

	t89 = ((x357==x358)*(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x363 = -14892157304820946LL;
	static int8_t x364 = INT8_MIN;
	int32_t t90 = 1242;

	t90 = ((x361==x362)*(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int16_t x366 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = 170324343;

	t91 = ((x365==x366)*(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 212327LLU;
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 4955976283468081327LLU;
	int32_t t92 = 8;

	t92 = ((x369==x370)*(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = -5333328171448LL;

	t93 = ((x373==x374)*(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	static uint16_t x380 = 23934U;
	static volatile int32_t t94 = 7;

	t94 = ((x377==x378)*(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = 1654LL;
	int32_t x382 = 100;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = -1;
	int32_t t95 = 4;

	t95 = ((x381==x382)*(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile uint8_t x386 = 16U;
	int16_t x387 = 0;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 0;

	t96 = ((x385==x386)*(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = INT16_MIN;
	static volatile int64_t x390 = INT64_MAX;
	volatile uint8_t x391 = UINT8_MAX;
	static volatile int8_t x392 = -1;

	t97 = ((x389==x390)*(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -40517851LL;
	uint16_t x394 = 1U;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 34U;
	int32_t t98 = -714356;

	t98 = ((x393==x394)*(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	int8_t x398 = INT8_MAX;
	int32_t x399 = 6680;
	int32_t x400 = INT32_MAX;

	t99 = ((x397==x398)*(x399<=x400));

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

