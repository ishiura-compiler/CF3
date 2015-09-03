#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = -28602714378LL;
static uint16_t x5 = 26944U;
volatile int16_t x7 = -6382;
static int64_t x10 = INT64_MIN;
int16_t x20 = INT16_MAX;
int16_t x23 = INT16_MIN;
int16_t x25 = INT16_MAX;
static int64_t x30 = 467671LL;
int32_t t10 = 119;
volatile int16_t x45 = INT16_MIN;
int64_t x49 = INT64_MIN;
int32_t x52 = -1;
int32_t t12 = 127;
volatile int64_t x53 = -633180743014LL;
static volatile int16_t x58 = INT16_MIN;
int64_t x60 = INT64_MAX;
int16_t x66 = INT16_MIN;
uint32_t x68 = 431077U;
uint64_t x72 = 6173978240673LLU;
static uint8_t x74 = UINT8_MAX;
uint32_t x86 = 77U;
int64_t x87 = -1LL;
int32_t t21 = -19502;
int8_t x95 = 27;
int32_t t26 = -7678;
int16_t x111 = INT16_MIN;
uint8_t x115 = UINT8_MAX;
int32_t t28 = -15939;
static int32_t x121 = INT32_MIN;
int16_t x122 = 48;
int32_t t30 = 0;
int8_t x134 = -1;
static volatile int8_t x135 = INT8_MIN;
volatile uint32_t x137 = 884987811U;
static int32_t x138 = 93791961;
int64_t x141 = 1586LL;
uint64_t x142 = UINT64_MAX;
int64_t x148 = 103409910472581882LL;
static volatile int16_t x150 = INT16_MIN;
uint8_t x152 = UINT8_MAX;
static int8_t x156 = 0;
int16_t x159 = INT16_MIN;
int32_t x164 = INT32_MIN;
volatile int32_t t41 = 197891323;
static volatile int32_t t43 = 565;
static uint16_t x187 = UINT16_MAX;
int8_t x188 = -1;
int32_t t46 = -29;
uint8_t x194 = 1U;
uint8_t x203 = UINT8_MAX;
uint8_t x204 = UINT8_MAX;
static uint64_t x205 = 11LLU;
uint16_t x206 = UINT16_MAX;
int32_t t51 = 3337;
int16_t x210 = 1;
static volatile uint8_t x211 = 0U;
int32_t t52 = -19569877;
volatile int64_t x213 = INT64_MIN;
int8_t x214 = -1;
uint8_t x217 = UINT8_MAX;
int16_t x232 = INT16_MAX;
uint64_t x235 = 15661833LLU;
static int8_t x239 = INT8_MIN;
static int64_t x240 = -107158191664365414LL;
volatile int32_t t59 = -525538809;
static int64_t x244 = INT64_MIN;
volatile int64_t x250 = INT64_MIN;
int64_t x256 = -12834571308602LL;
uint64_t x257 = 10253LLU;
static uint64_t x259 = UINT64_MAX;
uint16_t x263 = 0U;
uint64_t x265 = 1337624LLU;
volatile int32_t t68 = 1;
int32_t x282 = INT32_MIN;
uint32_t x284 = 221469U;
int32_t t70 = -3849163;
static int32_t x286 = -1;
uint64_t x291 = 2120865667745236986LLU;
int64_t x292 = 546739644506889LL;
volatile int64_t x294 = INT64_MIN;
volatile int32_t t73 = -2;
volatile int32_t t74 = -674398;
static int32_t t75 = -66167;
int64_t x326 = -1LL;
int64_t x328 = 34211LL;
volatile int16_t x331 = 14;
uint32_t x335 = 182575U;
static uint64_t x336 = 128LLU;
volatile int32_t t84 = -9137900;
int8_t x341 = INT8_MIN;
int64_t x347 = INT64_MIN;
int32_t x352 = -1;
static volatile uint64_t x354 = UINT64_MAX;
uint16_t x364 = 744U;
volatile int16_t x367 = INT16_MAX;
int16_t x379 = 4;
static uint16_t x381 = 6U;
int64_t x391 = INT64_MAX;
static int64_t x392 = INT64_MAX;
volatile uint8_t x393 = 1U;
volatile int8_t x395 = 1;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	uint8_t x3 = 115U;
	int32_t x4 = -394448305;
	int32_t t0 = -103305;

	t0 = (((x1<x2)|x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -58;

	t1 = (((x5<x6)|x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -73206039;

	t2 = (((x9<x10)|x11)==x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint16_t x14 = 24U;
	int64_t x15 = -1LL;
	volatile int64_t x16 = 863337384648731LL;
	int32_t t3 = 441;

	t3 = (((x13<x14)|x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 256786;
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	int32_t t4 = -4730;

	t4 = (((x17<x18)|x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int8_t x22 = -11;
	static int8_t x24 = -6;
	volatile int32_t t5 = -4872398;

	t5 = (((x21<x22)|x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MAX;
	int16_t x27 = -29;
	static uint16_t x28 = 0U;
	volatile int32_t t6 = -251592;

	t6 = (((x25<x26)|x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x31 = INT64_MAX;
	volatile uint64_t x32 = 1LLU;
	int32_t t7 = 778;

	t7 = (((x29<x30)|x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -7;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = 0;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -1;

	t8 = (((x33<x34)|x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 438LLU;
	int16_t x38 = INT16_MIN;
	int16_t x39 = INT16_MAX;
	static uint8_t x40 = 5U;
	int32_t t9 = 326;

	t9 = (((x37<x38)|x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MAX;
	static uint16_t x43 = 178U;
	int8_t x44 = -7;

	t10 = (((x41<x42)|x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x46 = 195;
	int64_t x47 = 25821116464708438LL;
	int16_t x48 = 10;
	static volatile int32_t t11 = 522747748;

	t11 = (((x45<x46)|x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 3U;
	int64_t x51 = INT64_MIN;

	t12 = (((x49<x50)|x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = 222644465425431LLU;
	int32_t x55 = -1;
	int64_t x56 = -9LL;
	static int32_t t13 = 655;

	t13 = (((x53<x54)|x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x59 = 3;
	volatile int32_t t14 = -5465;

	t14 = (((x57<x58)|x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 34U;
	int16_t x62 = 26;
	static int8_t x63 = INT8_MIN;
	uint8_t x64 = 88U;
	volatile int32_t t15 = -4849;

	t15 = (((x61<x62)|x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	int32_t t16 = -1;

	t16 = (((x65<x66)|x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = 54537376U;
	static int64_t x70 = -301LL;
	static int8_t x71 = INT8_MIN;
	static volatile int32_t t17 = 0;

	t17 = (((x69<x70)|x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1657414219343904LL;
	volatile int16_t x75 = INT16_MIN;
	static int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 232;

	t18 = (((x73<x74)|x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -313;
	static int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	volatile int8_t x80 = -1;
	int32_t t19 = 245;

	t19 = (((x77<x78)|x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = INT16_MAX;
	static volatile int32_t x84 = -1;
	int32_t t20 = -732414392;

	t20 = (((x81<x82)|x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -4013;
	int16_t x88 = INT16_MIN;

	t21 = (((x85<x86)|x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 26272887U;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = 7990;

	t22 = (((x89<x90)|x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 14LL;
	int32_t x94 = 0;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = 4050875;

	t23 = (((x93<x94)|x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 11;
	static uint64_t x98 = UINT64_MAX;
	int8_t x99 = -1;
	static int8_t x100 = 2;
	int32_t t24 = 5717204;

	t24 = (((x97<x98)|x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MAX;
	static uint16_t x102 = 4510U;
	uint64_t x103 = 40807293862511LLU;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -91;

	t25 = (((x101<x102)|x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 34210LLU;
	int32_t x106 = INT32_MAX;
	uint16_t x107 = UINT16_MAX;
	volatile uint32_t x108 = 150477522U;

	t26 = (((x105<x106)|x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 103264964244608LL;
	uint64_t x110 = UINT64_MAX;
	int8_t x112 = -1;
	int32_t t27 = 7062166;

	t27 = (((x109<x110)|x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 212;
	int16_t x114 = INT16_MIN;
	int8_t x116 = -1;

	t28 = (((x113<x114)|x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 10561U;
	uint16_t x118 = 8975U;
	int32_t x119 = -14050263;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -3;

	t29 = (((x117<x118)|x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x123 = 1U;
	int8_t x124 = INT8_MIN;

	t30 = (((x121<x122)|x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	volatile uint16_t x126 = 3257U;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 74820060448271345LLU;
	volatile int32_t t31 = -3552178;

	t31 = (((x125<x126)|x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static int32_t x130 = -1;
	int16_t x131 = INT16_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -5347;

	t32 = (((x129<x130)|x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x136 = 2047973308U;
	volatile int32_t t33 = -6;

	t33 = (((x133<x134)|x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x139 = 12U;
	int32_t x140 = INT32_MAX;
	int32_t t34 = -143;

	t34 = (((x137<x138)|x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x143 = INT32_MAX;
	int8_t x144 = -1;
	volatile int32_t t35 = -1;

	t35 = (((x141<x142)|x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	int8_t x146 = INT8_MAX;
	int8_t x147 = -1;
	int32_t t36 = 9241;

	t36 = (((x145<x146)|x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	int32_t x151 = INT32_MAX;
	static volatile int32_t t37 = -42153;

	t37 = (((x149<x150)|x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MIN;
	static uint32_t x155 = 704569U;
	int32_t t38 = -52415;

	t38 = (((x153<x154)|x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 238LLU;
	volatile int16_t x158 = INT16_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -483384;

	t39 = (((x157<x158)|x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MAX;
	int64_t x162 = -1LL;
	uint32_t x163 = 613811805U;
	int32_t t40 = 1657;

	t40 = (((x161<x162)|x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 22U;
	volatile uint8_t x166 = 5U;
	volatile int16_t x167 = 1;
	static volatile int16_t x168 = INT16_MIN;

	t41 = (((x165<x166)|x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 29029516U;
	int32_t x170 = 3;
	static int16_t x171 = -112;
	int8_t x172 = 2;
	volatile int32_t t42 = 83251953;

	t42 = (((x169<x170)|x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = -450944;
	uint8_t x175 = 2U;
	static uint64_t x176 = UINT64_MAX;

	t43 = (((x173<x174)|x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	int32_t x178 = INT32_MAX;
	volatile int8_t x179 = INT8_MIN;
	static uint16_t x180 = 1U;
	int32_t t44 = -1652;

	t44 = (((x177<x178)|x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -3;
	int64_t x182 = 0LL;
	uint64_t x183 = 423121LLU;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 15932;

	t45 = (((x181<x182)|x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	uint8_t x186 = UINT8_MAX;

	t46 = (((x185<x186)|x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile uint64_t x190 = 49075116169130835LLU;
	int64_t x191 = INT64_MIN;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -301;

	t47 = (((x189<x190)|x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile uint32_t x195 = 53U;
	volatile uint32_t x196 = 7U;
	volatile int32_t t48 = -36591;

	t48 = (((x193<x194)|x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -2;
	uint8_t x198 = 1U;
	uint8_t x199 = 30U;
	volatile uint16_t x200 = 31U;
	volatile int32_t t49 = 648289;

	t49 = (((x197<x198)|x199)==x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	static int16_t x202 = INT16_MAX;
	int32_t t50 = -5;

	t50 = (((x201<x202)|x203)==x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x207 = INT64_MAX;
	int16_t x208 = INT16_MIN;

	t51 = (((x205<x206)|x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int64_t x212 = INT64_MIN;

	t52 = (((x209<x210)|x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x215 = 15U;
	static volatile int32_t x216 = -2005121;
	int32_t t53 = -14248259;

	t53 = (((x213<x214)|x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 28386U;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 6233;

	t54 = (((x217<x218)|x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 253476047U;
	uint16_t x224 = 8911U;
	int32_t t55 = 45340;

	t55 = (((x221<x222)|x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 8179U;
	static uint8_t x226 = 6U;
	uint8_t x227 = 24U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -1;

	t56 = (((x225<x226)|x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	uint16_t x230 = 0U;
	volatile uint32_t x231 = 1326840U;
	volatile int32_t t57 = 106;

	t57 = (((x229<x230)|x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 3163357720809391LLU;
	uint8_t x234 = UINT8_MAX;
	uint64_t x236 = 5729LLU;
	int32_t t58 = 327199;

	t58 = (((x233<x234)|x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -1LL;
	int8_t x238 = -1;

	t59 = (((x237<x238)|x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 12;
	int32_t x242 = -1490;
	int64_t x243 = -1393826509522507117LL;
	int32_t t60 = 50153;

	t60 = (((x241<x242)|x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = 49592314304154LL;
	volatile uint8_t x247 = 8U;
	int8_t x248 = INT8_MIN;
	static int32_t t61 = -5;

	t61 = (((x245<x246)|x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x251 = -22;
	uint16_t x252 = 10753U;
	int32_t t62 = -867415;

	t62 = (((x249<x250)|x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = 421U;
	volatile uint8_t x254 = 107U;
	int8_t x255 = INT8_MAX;
	int32_t t63 = 1;

	t63 = (((x253<x254)|x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	volatile int32_t x260 = INT32_MIN;
	static int32_t t64 = -3177883;

	t64 = (((x257<x258)|x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	static uint8_t x262 = UINT8_MAX;
	static int8_t x264 = INT8_MIN;
	int32_t t65 = -35315;

	t65 = (((x261<x262)|x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x266 = -1;
	uint8_t x267 = 2U;
	static int8_t x268 = 10;
	int32_t t66 = -252539087;

	t66 = (((x265<x266)|x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 116U;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = 203U;
	uint16_t x272 = 6U;
	volatile int32_t t67 = -197244754;

	t67 = (((x269<x270)|x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int8_t x274 = -1;
	static uint8_t x275 = 26U;
	int32_t x276 = INT32_MAX;

	t68 = (((x273<x274)|x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = -1;
	volatile int64_t x279 = INT64_MIN;
	static uint8_t x280 = 29U;
	int32_t t69 = 253;

	t69 = (((x277<x278)|x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -1;
	static volatile uint32_t x283 = 19588U;

	t70 = (((x281<x282)|x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int32_t x287 = -1;
	static uint64_t x288 = 11LLU;
	volatile int32_t t71 = -2076951;

	t71 = (((x285<x286)|x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 796797;
	int32_t x290 = -3;
	int32_t t72 = 233512717;

	t72 = (((x289<x290)|x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	uint32_t x295 = 12U;
	static int32_t x296 = INT32_MIN;

	t73 = (((x293<x294)|x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = INT64_MIN;
	static volatile int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	int64_t x300 = -1LL;

	t74 = (((x297<x298)|x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 6380977U;
	int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 122773U;

	t75 = (((x301<x302)|x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	int32_t x306 = -122255185;
	static volatile int8_t x307 = -1;
	int64_t x308 = -1LL;
	int32_t t76 = 0;

	t76 = (((x305<x306)|x307)==x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static int64_t x310 = INT64_MIN;
	static int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	int32_t t77 = -11;

	t77 = (((x309<x310)|x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	uint64_t x314 = 4303912728LLU;
	int8_t x315 = INT8_MIN;
	int64_t x316 = 9037237122525271LL;
	volatile int32_t t78 = -4615;

	t78 = (((x313<x314)|x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 89374LL;
	static uint64_t x318 = 239428724LLU;
	int64_t x319 = INT64_MAX;
	int32_t x320 = -1;
	volatile int32_t t79 = 12787;

	t79 = (((x317<x318)|x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MAX;
	uint64_t x322 = 271492780LLU;
	volatile int16_t x323 = -1;
	int32_t x324 = -2;
	volatile int32_t t80 = -249571;

	t80 = (((x321<x322)|x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 0;
	volatile uint16_t x327 = UINT16_MAX;
	volatile int32_t t81 = -170271419;

	t81 = (((x325<x326)|x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int8_t x330 = INT8_MIN;
	int8_t x332 = 1;
	volatile int32_t t82 = -3481344;

	t82 = (((x329<x330)|x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	int32_t t83 = 11194153;

	t83 = (((x333<x334)|x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 448725U;
	int8_t x338 = INT8_MIN;
	int64_t x339 = 113759377955130539LL;
	static int16_t x340 = INT16_MIN;

	t84 = (((x337<x338)|x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = -1LL;
	int16_t x343 = INT16_MAX;
	static int64_t x344 = INT64_MIN;
	int32_t t85 = 8561925;

	t85 = (((x341<x342)|x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	volatile int16_t x348 = INT16_MAX;
	volatile int32_t t86 = -1150873;

	t86 = (((x345<x346)|x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 65985776478183749LL;
	static int8_t x350 = 4;
	int32_t x351 = -63659;
	volatile int32_t t87 = -60943;

	t87 = (((x349<x350)|x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -1;
	static volatile int64_t x355 = -1LL;
	static uint16_t x356 = 403U;
	volatile int32_t t88 = -214;

	t88 = (((x353<x354)|x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 13U;
	int8_t x358 = INT8_MAX;
	int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -24964878;

	t89 = (((x357<x358)|x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 3;
	int64_t x362 = 3918LL;
	volatile uint16_t x363 = UINT16_MAX;
	int32_t t90 = 792953733;

	t90 = (((x361<x362)|x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 1;
	static int8_t x366 = INT8_MIN;
	int16_t x368 = 43;
	volatile int32_t t91 = 83462;

	t91 = (((x365<x366)|x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -2948;
	uint32_t x370 = 796U;
	uint64_t x371 = 452978913409526747LLU;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -12;

	t92 = (((x369<x370)|x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	int16_t x376 = -7;
	int32_t t93 = 73;

	t93 = (((x373<x374)|x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 1U;
	int8_t x378 = INT8_MIN;
	uint16_t x380 = 17U;
	volatile int32_t t94 = 870;

	t94 = (((x377<x378)|x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x382 = 0U;
	int8_t x383 = 4;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -1416;

	t95 = (((x381<x382)|x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	static int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MIN;
	uint32_t x388 = 58U;
	volatile int32_t t96 = 5550;

	t96 = (((x385<x386)|x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -3167;
	int32_t x390 = INT32_MIN;
	volatile int32_t t97 = 237329606;

	t97 = (((x389<x390)|x391)==x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x394 = -1LL;
	static volatile uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = 3;

	t98 = (((x393<x394)|x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MAX;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -566320140;

	t99 = (((x397<x398)|x399)==x400);

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

