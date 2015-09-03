#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MIN;
int32_t t1 = -4;
int64_t x9 = -1LL;
int32_t t3 = -6251894;
volatile int8_t x20 = 0;
volatile int64_t x22 = INT64_MAX;
int16_t x31 = -1;
volatile int32_t t7 = 558;
int16_t x37 = -1;
uint64_t x38 = 1257681LLU;
uint16_t x39 = 86U;
int16_t x40 = -1;
uint64_t x41 = 12649817LLU;
int32_t x43 = INT32_MAX;
int8_t x44 = 14;
volatile int32_t x45 = INT32_MIN;
int16_t x50 = -1;
int8_t x58 = -28;
uint8_t x62 = 3U;
int32_t t15 = 2500;
static uint8_t x78 = 31U;
int64_t x83 = -1LL;
uint16_t x89 = UINT16_MAX;
int16_t x90 = INT16_MAX;
volatile int8_t x91 = -29;
static int32_t t21 = 36;
static int32_t x102 = -4722956;
int16_t x107 = INT16_MIN;
volatile int64_t x111 = INT64_MIN;
volatile int64_t t26 = -1121476LL;
static uint32_t x113 = 27U;
uint64_t x117 = 892936322LLU;
int32_t x125 = INT32_MAX;
volatile int32_t x127 = -247668809;
int8_t x129 = -12;
uint8_t x146 = 22U;
uint16_t x148 = UINT16_MAX;
int64_t t34 = 675874567LL;
int8_t x152 = INT8_MIN;
int64_t x159 = -167352086006834LL;
uint8_t x161 = 6U;
volatile uint64_t x166 = 24LLU;
uint64_t x180 = 122041169700516838LLU;
int32_t x181 = INT32_MIN;
int8_t x186 = INT8_MAX;
volatile int32_t x187 = -3606121;
static volatile int32_t t44 = 316885;
static int64_t x195 = -1LL;
uint32_t x199 = 57503U;
static volatile uint16_t x202 = 1145U;
static int64_t x204 = INT64_MAX;
int64_t x205 = 96LL;
volatile int8_t x208 = -1;
uint64_t x209 = 2741LLU;
int32_t x210 = INT32_MIN;
volatile uint32_t x214 = 101399412U;
int64_t x215 = INT64_MAX;
int16_t x220 = -1;
uint16_t x221 = UINT16_MAX;
volatile int16_t x229 = -4;
int16_t x231 = 2116;
static int32_t x234 = 8;
int16_t x235 = INT16_MIN;
uint8_t x251 = UINT8_MAX;
volatile uint64_t t59 = 23286226024LLU;
uint16_t x259 = 3U;
static int8_t x260 = INT8_MAX;
int8_t x266 = INT8_MIN;
int32_t x267 = INT32_MAX;
uint8_t x270 = 5U;
int16_t x271 = INT16_MIN;
uint64_t x274 = 365191976LLU;
volatile uint64_t t64 = 2LLU;
volatile uint32_t t66 = 192588396U;
static int64_t t67 = 254856518LL;
uint16_t x290 = 170U;
static int64_t x296 = INT64_MIN;
static int64_t t69 = -15887LL;
int32_t x297 = INT32_MAX;
uint16_t x298 = UINT16_MAX;
int8_t x300 = INT8_MIN;
volatile int8_t x301 = -6;
int16_t x302 = INT16_MAX;
int64_t x306 = -1LL;
static volatile int32_t t74 = 10011;
int32_t x317 = INT32_MIN;
uint64_t x326 = 1858618811LLU;
int32_t x329 = INT32_MIN;
int16_t x330 = INT16_MIN;
int32_t x332 = INT32_MIN;
int16_t x334 = -1894;
uint64_t t78 = 26LLU;
static volatile uint64_t t79 = 48267LLU;
int32_t t80 = 0;
static uint64_t x346 = UINT64_MAX;
volatile int16_t x348 = -117;
int32_t x349 = INT32_MIN;
int8_t x355 = INT8_MIN;
uint64_t x362 = UINT64_MAX;
uint16_t x375 = UINT16_MAX;
uint64_t x377 = UINT64_MAX;
uint32_t x378 = 41579U;
uint32_t x380 = 2U;
static volatile int16_t x395 = 4477;
volatile uint8_t x399 = UINT8_MAX;
int16_t x401 = -1;
volatile int16_t x404 = -3;
volatile int32_t t96 = -933885990;
int8_t x409 = 0;
uint64_t x413 = UINT64_MAX;
uint32_t x414 = UINT32_MAX;
int32_t x417 = INT32_MAX;


void f0(void) {
	int64_t x1 = 32022062390122LL;
	uint32_t x2 = 18935893U;
	int64_t x3 = INT64_MAX;
	static int64_t t0 = -1843474595338LL;

	t0 = (((x1<x2)/x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 0U;
	static uint8_t x6 = 16U;
	int8_t x7 = INT8_MAX;
	static int16_t x8 = INT16_MIN;

	t1 = (((x5<x6)/x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x10 = UINT16_MAX;
	static int64_t x11 = 7LL;
	volatile uint32_t x12 = UINT32_MAX;
	int64_t t2 = 1LL;

	t2 = (((x9<x10)/x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 62720353U;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 4734U;
	int16_t x16 = 1;

	t3 = (((x13<x14)/x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 211349LLU;
	static int32_t x18 = INT32_MIN;
	uint64_t x19 = UINT64_MAX;
	uint64_t t4 = 104440207118975890LLU;

	t4 = (((x17<x18)/x19)*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	volatile int16_t x23 = INT16_MAX;
	volatile int64_t x24 = INT64_MIN;
	int64_t t5 = 1994351775LL;

	t5 = (((x21<x22)/x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1294166075650LL;
	int8_t x26 = -1;
	int32_t x27 = 11638;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 117065;

	t6 = (((x25<x26)/x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -189666428500088056LL;
	int8_t x30 = INT8_MIN;
	uint16_t x32 = 1760U;

	t7 = (((x29<x30)/x31)*x32);

	if (t7 != -1760) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	static uint16_t x35 = 126U;
	uint8_t x36 = 0U;
	int32_t t8 = -10;

	t8 = (((x33<x34)/x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t t9 = 22746976;

	t9 = (((x37<x38)/x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -188040284;
	volatile int32_t t10 = 31615;

	t10 = (((x41<x42)/x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x46 = 0U;
	uint16_t x47 = UINT16_MAX;
	uint8_t x48 = 7U;
	static int32_t t11 = -15359;

	t11 = (((x45<x46)/x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static int32_t x51 = INT32_MIN;
	int64_t x52 = -1LL;
	static int64_t t12 = -1154LL;

	t12 = (((x49<x50)/x51)*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 1U;
	static int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	static int32_t t13 = 82963446;

	t13 = (((x53<x54)/x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int16_t x59 = -1;
	volatile uint16_t x60 = 60U;
	static int32_t t14 = -1;

	t14 = (((x57<x58)/x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 19U;

	t15 = (((x61<x62)/x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int64_t x70 = INT64_MAX;
	int8_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t16 = 158;

	t16 = (((x69<x70)/x71)*x72);

	if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = INT8_MIN;
	int32_t x75 = -1013;
	int16_t x76 = INT16_MIN;
	volatile int32_t t17 = 688485;

	t17 = (((x73<x74)/x75)*x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 13;
	static uint32_t x79 = 1U;
	uint32_t x80 = 857U;
	volatile uint32_t t18 = 289343U;

	t18 = (((x77<x78)/x79)*x80);

	if (t18 != 857U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	static uint64_t x84 = 4073732203755623LLU;
	uint64_t t19 = 51626855107157642LLU;

	t19 = (((x81<x82)/x83)*x84);

	if (t19 != 18442670341505795993LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = UINT8_MAX;
	volatile uint64_t x86 = 1977LLU;
	uint16_t x87 = 3U;
	static int64_t x88 = INT64_MAX;
	int64_t t20 = -66842979159270377LL;

	t20 = (((x85<x86)/x87)*x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x92 = UINT16_MAX;

	t21 = (((x89<x90)/x91)*x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 217136U;
	int64_t x94 = INT64_MAX;
	static int32_t x95 = INT32_MAX;
	int8_t x96 = -1;
	volatile int32_t t22 = -10;

	t22 = (((x93<x94)/x95)*x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	static uint16_t x98 = 116U;
	int8_t x99 = -60;
	volatile int8_t x100 = -1;
	volatile int32_t t23 = 31;

	t23 = (((x97<x98)/x99)*x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 18861LLU;
	int64_t x103 = -99070036LL;
	int16_t x104 = -2;
	volatile int64_t t24 = -47719933349LL;

	t24 = (((x101<x102)/x103)*x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	uint64_t x106 = UINT64_MAX;
	volatile int16_t x108 = -1;
	int32_t t25 = -219916;

	t25 = (((x105<x106)/x107)*x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -40653LL;
	static int8_t x110 = INT8_MAX;
	int32_t x112 = INT32_MIN;

	t26 = (((x109<x110)/x111)*x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x114 = INT16_MIN;
	static int16_t x115 = INT16_MAX;
	static int8_t x116 = INT8_MIN;
	int32_t t27 = 10683;

	t27 = (((x113<x114)/x115)*x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x118 = 434LLU;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t28 = 1308200;

	t28 = (((x117<x118)/x119)*x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = 61876566U;
	volatile uint32_t t29 = 170833U;

	t29 = (((x121<x122)/x123)*x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = INT64_MIN;
	volatile int32_t x128 = -1;
	int32_t t30 = 47281042;

	t30 = (((x125<x126)/x127)*x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x130 = INT64_MIN;
	int16_t x131 = -1;
	volatile int64_t x132 = -1LL;
	static int64_t t31 = 100797293441LL;

	t31 = (((x129<x130)/x131)*x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 3619730051166LL;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 5498U;
	static volatile int32_t x140 = -1;
	volatile uint32_t t32 = 2U;

	t32 = (((x137<x138)/x139)*x140);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = INT32_MIN;
	uint8_t x142 = 111U;
	volatile uint16_t x143 = 7U;
	int16_t x144 = INT16_MAX;
	static int32_t t33 = 0;

	t33 = (((x141<x142)/x143)*x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = INT8_MIN;
	int64_t x147 = 36LL;

	t34 = (((x145<x146)/x147)*x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 185U;
	int8_t x150 = -1;
	uint16_t x151 = 16085U;
	static volatile int32_t t35 = 0;

	t35 = (((x149<x150)/x151)*x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 15U;
	int64_t x158 = -1175553LL;
	uint64_t x160 = 4699784644992170LLU;
	volatile uint64_t t36 = 326052724331838LLU;

	t36 = (((x157<x158)/x159)*x160);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x162 = INT8_MAX;
	static int32_t x163 = -40979;
	int32_t x164 = -1;
	static int32_t t37 = 597778236;

	t37 = (((x161<x162)/x163)*x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 26491671518737791LLU;
	volatile int16_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	int32_t t38 = 152173;

	t38 = (((x165<x166)/x167)*x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	static volatile int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t39 = -216272973;

	t39 = (((x169<x170)/x171)*x172);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MAX;
	static volatile int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MAX;
	uint64_t x176 = 576596336897LLU;
	uint64_t t40 = 244953LLU;

	t40 = (((x173<x174)/x175)*x176);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = 1;
	int64_t x178 = INT64_MAX;
	static int8_t x179 = INT8_MIN;
	uint64_t t41 = 15786035860LLU;

	t41 = (((x177<x178)/x179)*x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x182 = -1;
	static int32_t x183 = INT32_MIN;
	int32_t x184 = 833800385;
	volatile int32_t t42 = 642;

	t42 = (((x181<x182)/x183)*x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t43 = 882402446LL;

	t43 = (((x185<x186)/x187)*x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MAX;
	static uint16_t x190 = 400U;
	int16_t x191 = -1;
	int16_t x192 = -1;

	t44 = (((x189<x190)/x191)*x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MAX;
	static uint64_t x194 = 569LLU;
	int16_t x196 = INT16_MIN;
	int64_t t45 = -36333187LL;

	t45 = (((x193<x194)/x195)*x196);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = INT16_MAX;
	int8_t x198 = INT8_MIN;
	int64_t x200 = INT64_MIN;
	int64_t t46 = -184406890757185LL;

	t46 = (((x197<x198)/x199)*x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x201 = 1U;
	uint16_t x203 = UINT16_MAX;
	static int64_t t47 = 998191LL;

	t47 = (((x201<x202)/x203)*x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x206 = 0U;
	int32_t x207 = -98706;
	int32_t t48 = 715576543;

	t48 = (((x205<x206)/x207)*x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x211 = 584620877573352LLU;
	static int16_t x212 = INT16_MAX;
	uint64_t t49 = 248358230LLU;

	t49 = (((x209<x210)/x211)*x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MIN;
	volatile int32_t x216 = -1;
	int64_t t50 = -1022178555712323693LL;

	t50 = (((x213<x214)/x215)*x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -1;
	uint64_t x218 = 28655420412964333LLU;
	static int32_t x219 = -42939;
	volatile int32_t t51 = -897382991;

	t51 = (((x217<x218)/x219)*x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	uint32_t x224 = 26U;
	int64_t t52 = -130576688020883LL;

	t52 = (((x221<x222)/x223)*x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x230 = 28183U;
	int64_t x232 = INT64_MIN;
	volatile int64_t t53 = 190689LL;

	t53 = (((x229<x230)/x231)*x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x233 = UINT32_MAX;
	int64_t x236 = 2LL;
	int64_t t54 = 1364LL;

	t54 = (((x233<x234)/x235)*x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = UINT32_MAX;
	static int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t55 = 1510386U;

	t55 = (((x237<x238)/x239)*x240);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	static uint64_t x242 = 93853234602837328LLU;
	uint64_t x243 = 7154176160123318LLU;
	volatile int8_t x244 = -1;
	uint64_t t56 = 216566080472793340LLU;

	t56 = (((x241<x242)/x243)*x244);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x245 = INT32_MIN;
	volatile int16_t x246 = -34;
	int8_t x247 = -19;
	int8_t x248 = -1;
	int32_t t57 = 15;

	t57 = (((x245<x246)/x247)*x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t58 = -448715273067453720LL;

	t58 = (((x249<x250)/x251)*x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = 12;
	int16_t x254 = INT16_MAX;
	int64_t x255 = -4554719LL;
	uint64_t x256 = 14141375LLU;

	t59 = (((x253<x254)/x255)*x256);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MAX;
	static volatile int64_t x258 = INT64_MIN;
	volatile int32_t t60 = 207252693;

	t60 = (((x257<x258)/x259)*x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = -3;
	static volatile uint32_t x262 = 44U;
	int8_t x263 = INT8_MAX;
	volatile int8_t x264 = 1;
	int32_t t61 = 32;

	t61 = (((x261<x262)/x263)*x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t62 = -2021;

	t62 = (((x265<x266)/x267)*x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	int8_t x272 = 0;
	volatile int32_t t63 = 10836;

	t63 = (((x269<x270)/x271)*x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = -15;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = INT16_MAX;

	t64 = (((x273<x274)/x275)*x276);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 24993LLU;
	int32_t x278 = INT32_MAX;
	static uint16_t x279 = 127U;
	int8_t x280 = INT8_MIN;
	int32_t t65 = 224;

	t65 = (((x277<x278)/x279)*x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -1LL;
	uint32_t x282 = 18U;
	uint32_t x283 = 2U;
	int16_t x284 = -1;

	t66 = (((x281<x282)/x283)*x284);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = 10656U;
	int8_t x286 = -1;
	int64_t x287 = -1007253LL;
	int16_t x288 = -1;

	t67 = (((x285<x286)/x287)*x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -79657;
	volatile int8_t x291 = INT8_MIN;
	int8_t x292 = -7;
	int32_t t68 = -122324;

	t68 = (((x289<x290)/x291)*x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = -4726917;
	static int8_t x295 = INT8_MAX;

	t69 = (((x293<x294)/x295)*x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x299 = INT8_MIN;
	volatile int32_t t70 = -27429553;

	t70 = (((x297<x298)/x299)*x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x303 = -1;
	uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t71 = 32468336U;

	t71 = (((x301<x302)/x303)*x304);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x305 = 44U;
	int16_t x307 = INT16_MIN;
	static int8_t x308 = -1;
	int32_t t72 = -210;

	t72 = (((x305<x306)/x307)*x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = 13699466;
	static uint64_t x310 = UINT64_MAX;
	int16_t x311 = -1;
	static volatile int16_t x312 = -9789;
	static volatile int32_t t73 = 2575;

	t73 = (((x309<x310)/x311)*x312);

	if (t73 != 9789) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = -1;
	volatile int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	volatile int32_t x316 = -1;

	t74 = (((x313<x314)/x315)*x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = 238;
	static int16_t x319 = -50;
	int32_t x320 = INT32_MIN;
	int32_t t75 = -12305260;

	t75 = (((x317<x318)/x319)*x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x325 = INT64_MIN;
	volatile int8_t x327 = INT8_MAX;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t76 = -1740;

	t76 = (((x325<x326)/x327)*x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x331 = -1LL;
	volatile int64_t t77 = 116LL;

	t77 = (((x329<x330)/x331)*x332);

	if (t77 != 2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = -46;
	uint64_t x335 = 3679LLU;
	static uint32_t x336 = UINT32_MAX;

	t78 = (((x333<x334)/x335)*x336);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -3;
	volatile uint32_t x338 = 15914U;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 57633217LLU;

	t79 = (((x337<x338)/x339)*x340);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -58;
	static volatile int64_t x342 = -1141029695394889181LL;
	static uint16_t x343 = 3231U;
	volatile int32_t x344 = 3;

	t80 = (((x341<x342)/x343)*x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = 8871108U;
	int64_t x347 = INT64_MIN;
	int64_t t81 = -10437353LL;

	t81 = (((x345<x346)/x347)*x348);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x350 = 89;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MAX;
	int64_t t82 = -6973282LL;

	t82 = (((x349<x350)/x351)*x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = 51816905;
	int64_t x354 = INT64_MAX;
	int32_t x356 = INT32_MIN;
	static int32_t t83 = 0;

	t83 = (((x353<x354)/x355)*x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = -1;
	static int16_t x358 = 2742;
	uint32_t x359 = 4917966U;
	static int64_t x360 = -332902212218804512LL;
	volatile int64_t t84 = -28766LL;

	t84 = (((x357<x358)/x359)*x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x361 = -1LL;
	uint32_t x363 = 37955U;
	volatile int8_t x364 = INT8_MIN;
	uint32_t t85 = 466214439U;

	t85 = (((x361<x362)/x363)*x364);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x365 = INT64_MAX;
	uint16_t x366 = 0U;
	static uint64_t x367 = 12885LLU;
	int8_t x368 = INT8_MAX;
	uint64_t t86 = 0LLU;

	t86 = (((x365<x366)/x367)*x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = -41;
	int32_t x370 = INT32_MIN;
	static int16_t x371 = -11;
	uint8_t x372 = 88U;
	volatile int32_t t87 = 8245;

	t87 = (((x369<x370)/x371)*x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = 683;
	static volatile int8_t x374 = -1;
	static uint8_t x376 = UINT8_MAX;
	static volatile int32_t t88 = 700;

	t88 = (((x373<x374)/x375)*x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x379 = INT8_MIN;
	uint32_t t89 = 2U;

	t89 = (((x377<x378)/x379)*x380);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = 62937274761LL;
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int16_t x384 = 2;
	volatile int64_t t90 = 43649084824663768LL;

	t90 = (((x381<x382)/x383)*x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = UINT32_MAX;
	static int32_t x386 = INT32_MIN;
	int16_t x387 = 4886;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t91 = 197982;

	t91 = (((x385<x386)/x387)*x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 92325U;
	uint64_t x390 = 2796LLU;
	uint16_t x391 = 1388U;
	int16_t x392 = -1;
	static volatile int32_t t92 = 8506748;

	t92 = (((x389<x390)/x391)*x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = -50605;
	static int16_t x394 = -1;
	int64_t x396 = INT64_MAX;
	volatile int64_t t93 = 361981664LL;

	t93 = (((x393<x394)/x395)*x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 34U;
	int64_t x400 = INT64_MIN;
	static int64_t t94 = -320601336715LL;

	t94 = (((x397<x398)/x399)*x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = INT8_MIN;
	volatile int32_t t95 = 3148979;

	t95 = (((x401<x402)/x403)*x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x405 = INT16_MIN;
	uint64_t x406 = 27639138LLU;
	static int32_t x407 = 1;
	int32_t x408 = -1;

	t96 = (((x405<x406)/x407)*x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x410 = -1;
	int32_t x411 = -1;
	static volatile int16_t x412 = 0;
	volatile int32_t t97 = 3;

	t97 = (((x409<x410)/x411)*x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x415 = UINT8_MAX;
	static int8_t x416 = -1;
	volatile int32_t t98 = 1079;

	t98 = (((x413<x414)/x415)*x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x418 = INT16_MIN;
	volatile int64_t x419 = INT64_MIN;
	int16_t x420 = 1009;
	int64_t t99 = 519716618636LL;

	t99 = (((x417<x418)/x419)*x420);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

