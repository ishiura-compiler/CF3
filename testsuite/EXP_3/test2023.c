#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 301LLU;
static volatile int32_t t4 = 128861074;
uint8_t x29 = 24U;
volatile int32_t t8 = -19042;
uint16_t x41 = 8947U;
uint8_t x52 = 100U;
int32_t t12 = -11459;
int8_t x55 = -4;
int16_t x65 = 1;
volatile uint64_t x70 = 1300LLU;
int16_t x71 = -3;
static uint32_t x72 = 0U;
uint16_t x76 = 3953U;
int8_t x79 = -2;
uint32_t x81 = 24261U;
int64_t x104 = -1LL;
int64_t x107 = -1LL;
static int32_t t26 = -10;
int16_t x113 = -1;
uint8_t x117 = 3U;
static int32_t x127 = -3723;
volatile uint8_t x134 = 7U;
static volatile int8_t x135 = 15;
int64_t x142 = 16436965441706LL;
volatile int16_t x143 = INT16_MIN;
volatile int8_t x148 = -1;
volatile uint16_t x158 = 1U;
static volatile uint32_t x160 = 8U;
int32_t t44 = -1;
volatile int8_t x186 = INT8_MAX;
int32_t x190 = INT32_MAX;
int16_t x191 = INT16_MIN;
int8_t x194 = INT8_MIN;
int32_t t48 = -8798;
volatile uint32_t x205 = UINT32_MAX;
uint32_t x209 = 372311U;
int64_t x214 = 204959679937643378LL;
volatile int32_t t54 = -10120;
int8_t x230 = INT8_MIN;
static volatile int32_t t57 = 100729487;
static int32_t x241 = -487;
int32_t x243 = -1;
volatile int8_t x244 = -1;
volatile int32_t t61 = 3386;
static int16_t x250 = INT16_MAX;
static volatile int32_t t62 = 383854371;
static int64_t x254 = 55151093840729952LL;
static int32_t t64 = 608423025;
static volatile uint16_t x263 = UINT16_MAX;
static volatile uint8_t x264 = UINT8_MAX;
uint64_t x274 = 5759825759279045698LLU;
int64_t x278 = 1969544227566840LL;
int8_t x285 = INT8_MAX;
uint32_t x287 = 410660011U;
volatile int32_t t71 = 4;
uint32_t x290 = 10U;
volatile int8_t x292 = INT8_MIN;
volatile int32_t t72 = -52664457;
uint32_t x302 = 113408403U;
int16_t x304 = 3;
volatile int32_t t75 = -3047;
int64_t x306 = 1393803838945755LL;
int32_t t77 = -1;
int8_t x315 = -1;
static int32_t x320 = INT32_MAX;
volatile int16_t x337 = INT16_MAX;
volatile int8_t x344 = INT8_MAX;
int32_t t85 = -51;
uint64_t x345 = UINT64_MAX;
int64_t x348 = INT64_MAX;
int64_t x353 = INT64_MIN;
int8_t x354 = 6;
static uint8_t x355 = 1U;
volatile int32_t t88 = 90915;
int32_t t89 = 54;
uint16_t x361 = 2U;
int64_t x364 = -523779LL;
int32_t t92 = 10725;
static uint8_t x375 = 29U;
static uint8_t x378 = 3U;
volatile int8_t x384 = -2;
int32_t t95 = -33105492;
int8_t x385 = INT8_MAX;
int16_t x390 = INT16_MAX;
int32_t x393 = INT32_MIN;
int32_t t98 = 796945;
int32_t x400 = INT32_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x3 = 1;
	int8_t x4 = -1;
	volatile int32_t t0 = -105;

	t0 = ((x1^x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 98LLU;
	int8_t x6 = -32;
	static int16_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -870;

	t1 = ((x5^x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 290U;
	volatile uint32_t x10 = 224336U;
	static int8_t x11 = INT8_MIN;
	volatile int16_t x12 = -6;
	int32_t t2 = -2;

	t2 = ((x9^x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	int8_t x16 = 16;
	int32_t t3 = 53856395;

	t3 = ((x13^x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 1U;
	volatile int32_t x20 = -4919;

	t4 = ((x17^x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	volatile int32_t x22 = INT32_MAX;
	uint32_t x23 = 69231U;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -1023;

	t5 = ((x21^x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	uint16_t x26 = 4U;
	int32_t x27 = -1;
	static int32_t x28 = -1;
	int32_t t6 = -76705751;

	t6 = ((x25^x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	volatile int32_t x31 = INT32_MIN;
	int64_t x32 = 7241LL;
	int32_t t7 = 2887;

	t7 = ((x29^x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int8_t x34 = -1;
	static uint32_t x35 = 15U;
	uint32_t x36 = 206576U;

	t8 = ((x33^x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 59U;
	uint8_t x38 = 27U;
	int8_t x39 = INT8_MIN;
	static volatile int32_t x40 = 1;
	int32_t t9 = 20;

	t9 = ((x37^x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	int16_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -580821418;

	t10 = ((x41^x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint64_t x46 = 9861583221LLU;
	int32_t x47 = 0;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = 5478;

	t11 = ((x45^x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 18687300943LL;

	t12 = ((x49^x50)==(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 19050LLU;
	int16_t x54 = -1;
	static volatile int64_t x56 = -1LL;
	static volatile int32_t t13 = 1;

	t13 = ((x53^x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 1;
	int16_t x58 = INT16_MAX;
	int8_t x59 = INT8_MIN;
	int8_t x60 = 0;
	int32_t t14 = 3030466;

	t14 = ((x57^x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = -1;
	static int16_t x62 = INT16_MIN;
	volatile int64_t x63 = 2074215679811LL;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = -3;

	t15 = ((x61^x62)==(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	static volatile uint8_t x67 = 0U;
	static int64_t x68 = -1LL;
	volatile int32_t t16 = 39;

	t16 = ((x65^x66)==(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 1;
	volatile int32_t t17 = -2;

	t17 = ((x69^x70)==(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	uint64_t x74 = 65312523417533LLU;
	int32_t x75 = -21077;
	static volatile int32_t t18 = 0;

	t18 = ((x73^x74)==(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 52U;
	int16_t x78 = INT16_MIN;
	int8_t x80 = -1;
	int32_t t19 = 2029;

	t19 = ((x77^x78)==(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = 184642044LL;
	int32_t x83 = INT32_MAX;
	int16_t x84 = 191;
	static volatile int32_t t20 = 1;

	t20 = ((x81^x82)==(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -1;
	static uint16_t x86 = 0U;
	uint8_t x87 = 1U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -8;

	t21 = ((x85^x86)==(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	volatile int32_t x90 = -1;
	volatile int16_t x91 = 117;
	uint32_t x92 = 7U;
	volatile int32_t t22 = -127389;

	t22 = ((x89^x90)==(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = 298;
	int64_t x94 = -808702615758825580LL;
	uint64_t x95 = 32298951902LLU;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 1;

	t23 = ((x93^x94)==(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 30U;
	int16_t x98 = INT16_MAX;
	int16_t x99 = 1;
	int16_t x100 = 1;
	volatile int32_t t24 = -108948;

	t24 = ((x97^x98)==(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 378U;
	int16_t x102 = -1;
	int64_t x103 = -1LL;
	volatile int32_t t25 = 1;

	t25 = ((x101^x102)==(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = 3;
	uint32_t x106 = UINT32_MAX;
	int8_t x108 = INT8_MIN;

	t26 = ((x105^x106)==(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 123U;
	int32_t x110 = 60;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 233314;

	t27 = ((x109^x110)==(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 1U;
	uint16_t x115 = 6149U;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 80;

	t28 = ((x113^x114)==(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	volatile int64_t x119 = 104231211LL;
	int16_t x120 = -1;
	int32_t t29 = 113899973;

	t29 = ((x117^x118)==(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 0U;
	int8_t x122 = -7;
	volatile int32_t x123 = -1;
	int16_t x124 = -1;
	int32_t t30 = -33;

	t30 = ((x121^x122)==(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile uint64_t x126 = 50805910LLU;
	uint16_t x128 = 507U;
	int32_t t31 = 15782200;

	t31 = ((x125^x126)==(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	static int8_t x130 = -1;
	int8_t x131 = INT8_MIN;
	static int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = 193346;

	t32 = ((x129^x130)==(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static volatile uint64_t x136 = UINT64_MAX;
	int32_t t33 = -368809927;

	t33 = ((x133^x134)==(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	volatile int32_t x138 = 124083918;
	static int16_t x139 = INT16_MIN;
	static int64_t x140 = -1LL;
	volatile int32_t t34 = 179008470;

	t34 = ((x137^x138)==(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -738198740;
	int64_t x144 = INT64_MAX;
	static int32_t t35 = -708;

	t35 = ((x141^x142)==(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	static int8_t x146 = -1;
	static volatile int32_t x147 = 5622859;
	int32_t t36 = -20034850;

	t36 = ((x145^x146)==(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	uint16_t x150 = 42U;
	uint64_t x151 = 225418755105915849LLU;
	static int8_t x152 = -28;
	int32_t t37 = 1717286;

	t37 = ((x149^x150)==(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 91U;
	static int16_t x154 = INT16_MIN;
	volatile int32_t x155 = INT32_MIN;
	static uint16_t x156 = UINT16_MAX;
	int32_t t38 = 1343;

	t38 = ((x153^x154)==(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 28U;
	volatile uint64_t x159 = UINT64_MAX;
	volatile int32_t t39 = 3841093;

	t39 = ((x157^x158)==(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 247936484182723LLU;
	uint8_t x162 = 12U;
	int64_t x163 = INT64_MIN;
	volatile int8_t x164 = INT8_MIN;
	int32_t t40 = 16191093;

	t40 = ((x161^x162)==(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	uint64_t x166 = 1666LLU;
	static uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 93;

	t41 = ((x165^x166)==(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 27522U;
	uint32_t x170 = 7360625U;
	uint32_t x171 = 1015U;
	int8_t x172 = -1;
	int32_t t42 = -411837348;

	t42 = ((x169^x170)==(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 52U;
	int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	int16_t x176 = -5;
	int32_t t43 = -43;

	t43 = ((x173^x174)==(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = -1LL;
	static int16_t x179 = 7;
	int16_t x180 = -3871;

	t44 = ((x177^x178)==(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	static volatile int16_t x182 = INT16_MIN;
	volatile int32_t x183 = INT32_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = -22081899;

	t45 = ((x181^x182)==(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = 24525;
	volatile int16_t x187 = INT16_MAX;
	static volatile int8_t x188 = -1;
	int32_t t46 = 1528;

	t46 = ((x185^x186)==(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	static int32_t t47 = 1;

	t47 = ((x189^x190)==(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	static int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;

	t48 = ((x193^x194)==(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	int32_t x198 = -1;
	int16_t x199 = 113;
	int16_t x200 = -108;
	volatile int32_t t49 = -13;

	t49 = ((x197^x198)==(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 237U;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = 42071LLU;
	int32_t x204 = -1;
	volatile int32_t t50 = 7;

	t50 = ((x201^x202)==(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	static int8_t x208 = 0;
	volatile int32_t t51 = 147827265;

	t51 = ((x205^x206)==(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = -2020LL;
	int64_t x212 = INT64_MIN;
	static int32_t t52 = 0;

	t52 = ((x209^x210)==(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 89096266U;
	int64_t x215 = -1LL;
	int32_t x216 = 66;
	int32_t t53 = -224;

	t53 = ((x213^x214)==(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 101719732599804072LLU;
	volatile uint32_t x218 = 63794995U;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MIN;

	t54 = ((x217^x218)==(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	volatile int8_t x222 = INT8_MAX;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = 6;
	static volatile int32_t t55 = 7905899;

	t55 = ((x221^x222)==(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MIN;
	volatile int8_t x227 = 1;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = -22445;

	t56 = ((x225^x226)==(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	uint16_t x231 = 3298U;
	static uint16_t x232 = 12U;

	t57 = ((x229^x230)==(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 13948385U;
	static int8_t x234 = 62;
	static int16_t x235 = 8709;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -40725251;

	t58 = ((x233^x234)==(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static volatile int32_t x238 = INT32_MIN;
	static uint32_t x239 = 3746U;
	static uint16_t x240 = 1U;
	static volatile int32_t t59 = -697589334;

	t59 = ((x237^x238)==(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = 1183556333650LL;
	int32_t t60 = -9;

	t60 = ((x241^x242)==(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = UINT16_MAX;
	int64_t x246 = 1761862LL;
	static uint64_t x247 = 74682517LLU;
	static uint16_t x248 = UINT16_MAX;

	t61 = ((x245^x246)==(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	static volatile int16_t x251 = 5340;
	uint16_t x252 = 6U;

	t62 = ((x249^x250)==(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int32_t x255 = -55420355;
	uint64_t x256 = 1550738855197713LLU;
	volatile int32_t t63 = -585404052;

	t63 = ((x253^x254)==(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int8_t x258 = -1;
	volatile int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;

	t64 = ((x257^x258)==(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	volatile int16_t x262 = INT16_MAX;
	volatile int32_t t65 = 268461564;

	t65 = ((x261^x262)==(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MAX;
	static volatile int32_t x268 = INT32_MAX;
	int32_t t66 = -1786052;

	t66 = ((x265^x266)==(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 7U;
	uint32_t x270 = 50U;
	volatile uint8_t x271 = 2U;
	volatile int32_t x272 = 2445;
	int32_t t67 = -6775483;

	t67 = ((x269^x270)==(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 1271LL;
	uint64_t x275 = UINT64_MAX;
	uint16_t x276 = 11U;
	volatile int32_t t68 = 12497;

	t68 = ((x273^x274)==(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int64_t x279 = -431807LL;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -61861;

	t69 = ((x277^x278)==(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	static int32_t x282 = -909279;
	static int8_t x283 = -5;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 14138796;

	t70 = ((x281^x282)==(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x286 = -6;
	static int32_t x288 = INT32_MAX;

	t71 = ((x285^x286)==(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int64_t x291 = INT64_MIN;

	t72 = ((x289^x290)==(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 39;
	int16_t x294 = INT16_MIN;
	static int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MAX;
	int32_t t73 = -122931607;

	t73 = ((x293^x294)==(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = 433;
	volatile uint64_t x298 = UINT64_MAX;
	uint32_t x299 = UINT32_MAX;
	static int64_t x300 = INT64_MIN;
	static volatile int32_t t74 = -115629;

	t74 = ((x297^x298)==(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int8_t x303 = INT8_MIN;

	t75 = ((x301^x302)==(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x307 = 3U;
	static volatile int64_t x308 = -1LL;
	static volatile int32_t t76 = 265347512;

	t76 = ((x305^x306)==(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	static int8_t x310 = INT8_MAX;
	int8_t x311 = 25;
	int64_t x312 = -1LL;

	t77 = ((x309^x310)==(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -1;
	static volatile uint64_t x314 = 5770473949405LLU;
	int64_t x316 = INT64_MAX;
	static volatile int32_t t78 = -325;

	t78 = ((x313^x314)==(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 7U;
	volatile uint16_t x318 = 2250U;
	static uint64_t x319 = 4LLU;
	int32_t t79 = 55715931;

	t79 = ((x317^x318)==(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = -26908LL;
	int16_t x323 = 5491;
	int64_t x324 = 54286667996LL;
	volatile int32_t t80 = -80651;

	t80 = ((x321^x322)==(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x325 = 34;
	uint16_t x326 = UINT16_MAX;
	static uint16_t x327 = 1063U;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 1;

	t81 = ((x325^x326)==(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 76U;
	uint32_t x330 = 176820561U;
	int32_t x331 = -62;
	static volatile int32_t x332 = 215543;
	volatile int32_t t82 = -109226;

	t82 = ((x329^x330)==(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 1;
	volatile int8_t x334 = INT8_MIN;
	volatile int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;
	static int32_t t83 = -186;

	t83 = ((x333^x334)==(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = UINT8_MAX;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = -1;
	volatile int32_t t84 = -407024190;

	t84 = ((x337^x338)==(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1;
	static int64_t x343 = INT64_MIN;

	t85 = ((x341^x342)==(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = -1;
	int64_t x347 = -1LL;
	int32_t t86 = -3548;

	t86 = ((x345^x346)==(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 2U;
	volatile int8_t x350 = -11;
	int8_t x351 = 55;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 3018;

	t87 = ((x349^x350)==(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x356 = -1;

	t88 = ((x353^x354)==(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int16_t x358 = -1;
	int16_t x359 = INT16_MIN;
	static volatile uint16_t x360 = 1523U;

	t89 = ((x357^x358)==(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MAX;
	int32_t x363 = -24;
	volatile int32_t t90 = 0;

	t90 = ((x361^x362)==(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 234U;
	int8_t x367 = -1;
	int32_t x368 = -1;
	static int32_t t91 = -121;

	t91 = ((x365^x366)==(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	static int32_t x371 = INT32_MAX;
	int16_t x372 = INT16_MIN;

	t92 = ((x369^x370)==(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 12097162U;
	int32_t x374 = -62770;
	int64_t x376 = -3420457LL;
	volatile int32_t t93 = -108289;

	t93 = ((x373^x374)==(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 7364U;
	uint8_t x379 = 1U;
	int32_t x380 = -6797;
	volatile int32_t t94 = -1389;

	t94 = ((x377^x378)==(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -10;
	static volatile uint32_t x382 = 644335U;
	static int8_t x383 = 21;

	t95 = ((x381^x382)==(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -4640;
	static volatile int32_t x387 = -2;
	int64_t x388 = -182LL;
	int32_t t96 = -19657;

	t96 = ((x385^x386)==(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	uint16_t x391 = 3581U;
	volatile int32_t x392 = INT32_MAX;
	int32_t t97 = 663785160;

	t97 = ((x389^x390)==(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	volatile int64_t x396 = INT64_MIN;

	t98 = ((x393^x394)==(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 0;
	int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MAX;
	volatile int32_t t99 = -248566;

	t99 = ((x397^x398)==(x399|x400));

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

