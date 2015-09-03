#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 2226U;
int64_t x4 = INT64_MIN;
int32_t x5 = 1;
static uint8_t x6 = UINT8_MAX;
int32_t t1 = -2667;
int16_t x10 = -144;
int32_t t4 = 0;
volatile int8_t x22 = INT8_MIN;
volatile int32_t t6 = -40475;
volatile uint8_t x45 = UINT8_MAX;
volatile int8_t x48 = -2;
int32_t t11 = 97672;
int16_t x52 = INT16_MAX;
volatile int32_t t12 = 0;
volatile int64_t x56 = INT64_MIN;
static int16_t x60 = -508;
static volatile int8_t x62 = -1;
static uint8_t x66 = 22U;
uint64_t x73 = 45382LLU;
static int8_t x76 = -1;
volatile int32_t t18 = -13487225;
int16_t x77 = 660;
volatile int32_t t19 = -3027;
int32_t x82 = INT32_MIN;
uint16_t x83 = UINT16_MAX;
static int32_t t20 = 0;
int32_t x97 = -1;
int32_t x104 = 2;
int32_t x106 = -45;
int16_t x108 = INT16_MIN;
uint32_t x119 = UINT32_MAX;
volatile int16_t x126 = 55;
static int32_t x135 = INT32_MAX;
volatile uint8_t x142 = 1U;
uint64_t x149 = 279198444LLU;
int8_t x154 = -13;
volatile int32_t t41 = 4;
int32_t x172 = INT32_MIN;
int32_t t43 = -34911;
static uint8_t x178 = 99U;
uint8_t x183 = UINT8_MAX;
volatile uint32_t x187 = UINT32_MAX;
int64_t x190 = INT64_MIN;
volatile int32_t x194 = 645;
static volatile int32_t x203 = 8;
int32_t x205 = INT32_MAX;
int32_t t51 = -248700;
int32_t x211 = -1;
uint32_t x213 = 1066490U;
uint8_t x214 = 22U;
volatile uint64_t x215 = 10582002124164LLU;
int64_t x227 = 3939295785LL;
int32_t t56 = 5954155;
uint16_t x235 = 12U;
static int8_t x241 = INT8_MIN;
int32_t t61 = -50095;
static volatile int32_t t62 = 88392;
int16_t x259 = INT16_MIN;
volatile int32_t t64 = 15;
uint32_t x265 = UINT32_MAX;
int32_t t68 = 212578702;
static int64_t x277 = -1LL;
int32_t x280 = 6;
uint64_t x283 = 26LLU;
int32_t t72 = 138;
int16_t x299 = INT16_MIN;
int32_t x305 = INT32_MAX;
static int8_t x312 = INT8_MIN;
int8_t x316 = INT8_MAX;
int64_t x317 = INT64_MIN;
static uint64_t x320 = 25LLU;
volatile int8_t x327 = INT8_MAX;
volatile uint16_t x328 = 2U;
uint32_t x329 = 27698U;
int32_t x334 = INT32_MIN;
volatile int8_t x339 = 0;
static volatile int32_t t85 = -240;
static int32_t x348 = INT32_MIN;
static volatile int32_t x349 = -1;
int8_t x350 = INT8_MIN;
uint16_t x352 = 12U;
static int32_t x355 = INT32_MIN;
static int64_t x357 = INT64_MAX;
static int32_t x361 = 3;
uint64_t x375 = 12649336062623LLU;
uint16_t x376 = 11526U;
int8_t x377 = INT8_MIN;
int8_t x383 = -1;
volatile int32_t t96 = 389632464;
static int8_t x391 = -11;
volatile int32_t t97 = 1020;
uint16_t x395 = 283U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -2;

	t0 = (x1<(x2+(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x7 = -5;
	int32_t x8 = 1936;

	t1 = (x5<(x6+(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 2;
	int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -5387359;

	t2 = (x9<(x10+(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 1594U;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = -204379;

	t3 = (x13<(x14+(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int32_t x18 = -7;
	int64_t x19 = INT64_MIN;
	static int32_t x20 = -8332;

	t4 = (x17<(x18+(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1492624LLU;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -2324625;

	t5 = (x21<(x22+(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	volatile uint32_t x26 = 1498665U;
	uint32_t x27 = 14235U;
	static int64_t x28 = -6448688835112774LL;

	t6 = (x25<(x26+(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 12026U;
	uint16_t x30 = 1U;
	int32_t x31 = INT32_MIN;
	int16_t x32 = -1;
	volatile int32_t t7 = -5092;

	t7 = (x29<(x30+(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint64_t x34 = 255763640885679LLU;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 7U;
	int32_t t8 = -205588;

	t8 = (x33<(x34+(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	int32_t x38 = -1;
	static volatile uint16_t x39 = 485U;
	int32_t x40 = 0;
	volatile int32_t t9 = 25;

	t9 = (x37<(x38+(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -1;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 190037;

	t10 = (x41<(x42+(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x46 = UINT16_MAX;
	uint16_t x47 = 2033U;

	t11 = (x45<(x46+(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = INT64_MIN;
	volatile int32_t x50 = INT32_MIN;
	static int8_t x51 = -1;

	t12 = (x49<(x50+(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = 0U;
	uint16_t x54 = 3666U;
	int16_t x55 = 55;
	volatile int32_t t13 = -14;

	t13 = (x53<(x54+(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 689U;
	int32_t x58 = 10;
	static int64_t x59 = -1LL;
	int32_t t14 = -1;

	t14 = (x57<(x58+(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 73547LL;
	volatile uint64_t x63 = 21LLU;
	int32_t x64 = 65336;
	volatile int32_t t15 = 501;

	t15 = (x61<(x62+(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 7;
	uint8_t x67 = 116U;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = -6;

	t16 = (x65<(x66+(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1769047202192042LLU;
	int64_t x70 = 738219098068770289LL;
	uint16_t x71 = 137U;
	static int16_t x72 = INT16_MIN;
	int32_t t17 = 2731;

	t17 = (x69<(x70+(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	volatile int32_t x75 = INT32_MAX;

	t18 = (x73<(x74+(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x78 = -12105;
	int32_t x79 = -3;
	int64_t x80 = -5780308LL;

	t19 = (x77<(x78+(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static uint32_t x84 = UINT32_MAX;

	t20 = (x81<(x82+(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x85 = 34U;
	static int8_t x86 = -11;
	uint8_t x87 = UINT8_MAX;
	static int8_t x88 = INT8_MIN;
	static volatile int32_t t21 = -63546234;

	t21 = (x85<(x86+(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = -1;
	static uint32_t x91 = UINT32_MAX;
	uint64_t x92 = 5797483LLU;
	int32_t t22 = 202;

	t22 = (x89<(x90+(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = INT64_MAX;
	static int16_t x95 = -1;
	int8_t x96 = 56;
	static volatile int32_t t23 = -1;

	t23 = (x93<(x94+(x95==x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	int32_t x99 = INT32_MAX;
	static int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = 11;

	t24 = (x97<(x98+(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 21LLU;
	volatile uint8_t x102 = 92U;
	int16_t x103 = INT16_MAX;
	volatile int32_t t25 = -7822106;

	t25 = (x101<(x102+(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x107 = INT64_MIN;
	volatile int32_t t26 = 9;

	t26 = (x105<(x106+(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 19U;
	static int64_t x110 = INT64_MIN;
	uint16_t x111 = UINT16_MAX;
	uint64_t x112 = 1983772106LLU;
	int32_t t27 = 499285853;

	t27 = (x109<(x110+(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int32_t x114 = 106301;
	volatile int8_t x115 = -1;
	int32_t x116 = -54232658;
	int32_t t28 = 9506425;

	t28 = (x113<(x114+(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 2U;
	int8_t x118 = INT8_MIN;
	int64_t x120 = -1LL;
	int32_t t29 = 110723;

	t29 = (x117<(x118+(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 2795155873296961LLU;
	int64_t x122 = -86LL;
	static int16_t x123 = 0;
	uint32_t x124 = 9443U;
	static int32_t t30 = 49353;

	t30 = (x121<(x122+(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -1LL;
	uint8_t x127 = 17U;
	int32_t x128 = 437849770;
	int32_t t31 = 307;

	t31 = (x125<(x126+(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 1;

	t32 = (x129<(x130+(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 24U;
	int64_t x134 = INT64_MIN;
	uint32_t x136 = 339U;
	int32_t t33 = 6;

	t33 = (x133<(x134+(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = -1;
	int64_t x138 = INT64_MAX;
	uint32_t x139 = 12U;
	static int16_t x140 = -827;
	static volatile int32_t t34 = 15926716;

	t34 = (x137<(x138+(x139==x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = UINT32_MAX;
	static int32_t t35 = 2;

	t35 = (x141<(x142+(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	int8_t x146 = 1;
	uint32_t x147 = UINT32_MAX;
	int32_t x148 = 18;
	int32_t t36 = -161399827;

	t36 = (x145<(x146+(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	static int16_t x151 = -1;
	volatile int32_t x152 = -10179;
	int32_t t37 = 4312031;

	t37 = (x149<(x150+(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 34LLU;
	static int8_t x155 = INT8_MIN;
	int32_t x156 = -1;
	static volatile int32_t t38 = 517;

	t38 = (x153<(x154+(x155==x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint64_t x158 = 10830LLU;
	uint8_t x159 = 0U;
	int8_t x160 = -31;
	volatile int32_t t39 = 16980;

	t39 = (x157<(x158+(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 317U;
	volatile int8_t x164 = -8;
	int32_t t40 = 3062;

	t40 = (x161<(x162+(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 515U;
	static int16_t x166 = 1166;
	uint64_t x167 = 183053387743LLU;
	int64_t x168 = INT64_MIN;

	t41 = (x165<(x166+(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = INT8_MIN;
	static volatile uint64_t x171 = 137618439139677LLU;
	int32_t t42 = 119783;

	t42 = (x169<(x170+(x171==x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MIN;
	static int64_t x175 = INT64_MIN;
	static volatile int64_t x176 = INT64_MAX;

	t43 = (x173<(x174+(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 79U;
	volatile int16_t x179 = -1;
	volatile int8_t x180 = INT8_MAX;
	static volatile int32_t t44 = 1139;

	t44 = (x177<(x178+(x179==x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 116U;
	volatile uint16_t x182 = 13009U;
	int64_t x184 = 37197386LL;
	volatile int32_t t45 = -75572927;

	t45 = (x181<(x182+(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MAX;
	int32_t x188 = 44;
	volatile int32_t t46 = 450866;

	t46 = (x185<(x186+(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x191 = 488;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 485303;

	t47 = (x189<(x190+(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile uint16_t x195 = 437U;
	volatile uint64_t x196 = 8LLU;
	volatile int32_t t48 = 0;

	t48 = (x193<(x194+(x195==x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 449U;
	uint64_t x199 = 7594857206046813143LLU;
	int64_t x200 = 1430444LL;
	int32_t t49 = -35;

	t49 = (x197<(x198+(x199==x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -16269;
	static volatile uint16_t x202 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -1;

	t50 = (x201<(x202+(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = -26824337129LL;
	volatile uint64_t x207 = 6489787LLU;
	volatile uint64_t x208 = 1543140254LLU;

	t51 = (x205<(x206+(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	uint64_t x210 = 763LLU;
	static int64_t x212 = 49042204386255908LL;
	static int32_t t52 = -64000251;

	t52 = (x209<(x210+(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x216 = -1;
	volatile int32_t t53 = 3206046;

	t53 = (x213<(x214+(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 5609660015192LL;
	static volatile uint16_t x218 = 509U;
	static uint64_t x219 = 13LLU;
	int32_t x220 = 819131050;
	int32_t t54 = -13;

	t54 = (x217<(x218+(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 0U;
	uint64_t x222 = UINT64_MAX;
	volatile uint16_t x223 = 232U;
	int32_t x224 = INT32_MAX;
	int32_t t55 = -68;

	t55 = (x221<(x222+(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MAX;
	int16_t x228 = INT16_MIN;

	t56 = (x225<(x226+(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile uint16_t x230 = 18U;
	int64_t x231 = INT64_MAX;
	static volatile uint16_t x232 = UINT16_MAX;
	int32_t t57 = -138;

	t57 = (x229<(x230+(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	static int8_t x234 = INT8_MIN;
	uint16_t x236 = 64U;
	int32_t t58 = -435;

	t58 = (x233<(x234+(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	volatile int8_t x238 = 0;
	int16_t x239 = INT16_MAX;
	int32_t x240 = -1659;
	static int32_t t59 = 25728573;

	t59 = (x237<(x238+(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = UINT8_MAX;
	static int64_t x243 = 1718548884622LL;
	static volatile uint64_t x244 = 1LLU;
	volatile int32_t t60 = 4;

	t60 = (x241<(x242+(x243==x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 82;
	static int32_t x246 = INT32_MIN;
	int16_t x247 = -964;
	int32_t x248 = INT32_MIN;

	t61 = (x245<(x246+(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 2010LLU;
	int16_t x250 = -1;
	static volatile int64_t x251 = INT64_MAX;
	uint32_t x252 = UINT32_MAX;

	t62 = (x249<(x250+(x251==x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MAX;
	static int32_t x255 = -1;
	volatile int32_t x256 = 15;
	int32_t t63 = 74324;

	t63 = (x253<(x254+(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 54U;
	static volatile uint64_t x258 = UINT64_MAX;
	int8_t x260 = INT8_MIN;

	t64 = (x257<(x258+(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 1;
	static int16_t x262 = -1;
	int16_t x263 = INT16_MAX;
	int64_t x264 = -1LL;
	volatile int32_t t65 = 58692;

	t65 = (x261<(x262+(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = -4267819;
	int32_t x267 = -23;
	static volatile int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -6671756;

	t66 = (x265<(x266+(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = INT64_MIN;
	uint32_t x271 = 928108917U;
	int32_t x272 = -241262608;
	volatile int32_t t67 = -3647;

	t67 = (x269<(x270+(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	uint32_t x274 = 791U;
	volatile uint64_t x275 = 132360781404250869LLU;
	static int64_t x276 = INT64_MAX;

	t68 = (x273<(x274+(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -4189710178357163988LL;
	volatile int32_t x279 = -1;
	volatile int32_t t69 = -119;

	t69 = (x277<(x278+(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 2870496U;
	uint32_t x282 = UINT32_MAX;
	uint16_t x284 = 172U;
	volatile int32_t t70 = -40990;

	t70 = (x281<(x282+(x283==x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int32_t x286 = -1;
	int16_t x287 = -54;
	static int16_t x288 = INT16_MAX;
	static volatile int32_t t71 = -115200241;

	t71 = (x285<(x286+(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	uint8_t x290 = 3U;
	uint8_t x291 = 27U;
	static int16_t x292 = 0;

	t72 = (x289<(x290+(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	uint8_t x294 = 120U;
	uint8_t x295 = 1U;
	int16_t x296 = INT16_MAX;
	volatile int32_t t73 = -634230;

	t73 = (x293<(x294+(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 1715LL;
	int8_t x298 = -4;
	static uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = -5532;

	t74 = (x297<(x298+(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = -1;
	int64_t x304 = -3718589869LL;
	volatile int32_t t75 = -37;

	t75 = (x301<(x302+(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MAX;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t76 = -19429873;

	t76 = (x305<(x306+(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 111750549372859LLU;
	int32_t x310 = INT32_MIN;
	static int16_t x311 = -1;
	int32_t t77 = -552;

	t77 = (x309<(x310+(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 209744LLU;
	uint8_t x314 = 32U;
	uint64_t x315 = UINT64_MAX;
	int32_t t78 = -26036390;

	t78 = (x313<(x314+(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x318 = -869714721810LL;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t79 = 113821202;

	t79 = (x317<(x318+(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 1LLU;
	static volatile int8_t x322 = -1;
	static uint16_t x323 = 218U;
	volatile int8_t x324 = -11;
	int32_t t80 = 184;

	t80 = (x321<(x322+(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	static int32_t t81 = 121;

	t81 = (x325<(x326+(x327==x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 56113337543LLU;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -30;
	static int32_t t82 = 0;

	t82 = (x329<(x330+(x331==x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = 1164688;
	int16_t x335 = 3;
	static uint64_t x336 = 253238461094LLU;
	int32_t t83 = -1778;

	t83 = (x333<(x334+(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int32_t x338 = INT32_MIN;
	static int8_t x340 = -33;
	volatile int32_t t84 = 5527092;

	t84 = (x337<(x338+(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	volatile int8_t x342 = INT8_MIN;
	int64_t x343 = -1571649LL;
	int8_t x344 = INT8_MIN;

	t85 = (x341<(x342+(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -959309;
	uint8_t x346 = 9U;
	int64_t x347 = INT64_MIN;
	int32_t t86 = -502099;

	t86 = (x345<(x346+(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x351 = -971122;
	volatile int32_t t87 = -6;

	t87 = (x349<(x350+(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = 36561;
	int64_t x354 = INT64_MAX;
	int32_t x356 = INT32_MAX;
	int32_t t88 = 202559835;

	t88 = (x353<(x354+(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = 5;
	volatile uint8_t x359 = 23U;
	int64_t x360 = -1LL;
	volatile int32_t t89 = 303;

	t89 = (x357<(x358+(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	static uint16_t x363 = 6U;
	int64_t x364 = INT64_MIN;
	static int32_t t90 = 0;

	t90 = (x361<(x362+(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = UINT8_MAX;
	static int32_t x367 = INT32_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -1417994;

	t91 = (x365<(x366+(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile int64_t x371 = 18686287230LL;
	volatile int8_t x372 = INT8_MAX;
	static int32_t t92 = 3517561;

	t92 = (x369<(x370+(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	uint16_t x374 = 12575U;
	int32_t t93 = 43;

	t93 = (x373<(x374+(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 4600361U;
	volatile int16_t x379 = 216;
	int8_t x380 = INT8_MAX;
	int32_t t94 = -922228282;

	t94 = (x377<(x378+(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = UINT16_MAX;
	int16_t x384 = 7;
	int32_t t95 = 738046494;

	t95 = (x381<(x382+(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 2;
	int16_t x386 = -1;
	static uint8_t x387 = UINT8_MAX;
	int32_t x388 = INT32_MIN;

	t96 = (x385<(x386+(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MIN;
	static int64_t x392 = INT64_MIN;

	t97 = (x389<(x390+(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = -1;
	int8_t x396 = -1;
	volatile int32_t t98 = -890;

	t98 = (x393<(x394+(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint64_t x398 = 3043359472381666LLU;
	volatile uint8_t x399 = UINT8_MAX;
	static uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = 19;

	t99 = (x397<(x398+(x399==x400)));

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

