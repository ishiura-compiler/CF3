#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = INT64_MIN;
volatile int16_t x9 = INT16_MAX;
volatile uint64_t x10 = 830970251991LLU;
uint32_t x11 = UINT32_MAX;
volatile int64_t x15 = -249372158LL;
uint16_t x17 = UINT16_MAX;
static uint32_t x18 = UINT32_MAX;
uint32_t x21 = UINT32_MAX;
static int16_t x24 = INT16_MIN;
static volatile int32_t t5 = -186105757;
volatile int64_t x26 = INT64_MAX;
int32_t t7 = -1;
volatile int8_t x38 = 1;
int8_t x39 = -1;
uint32_t x46 = UINT32_MAX;
static int32_t x48 = INT32_MIN;
uint64_t x49 = UINT64_MAX;
static int32_t t11 = 2024;
int64_t x55 = INT64_MIN;
int32_t t13 = -42784;
uint64_t x62 = 10617709113LLU;
volatile int64_t x65 = 72938078834012716LL;
static int8_t x71 = -48;
static volatile int32_t t16 = -8136641;
static int64_t x84 = INT64_MIN;
volatile int32_t t19 = 88860253;
uint16_t x86 = 0U;
int16_t x88 = INT16_MIN;
volatile int64_t x89 = -1LL;
volatile int32_t x92 = INT32_MAX;
int64_t x94 = -36080LL;
static int32_t x95 = INT32_MIN;
static int16_t x98 = -1;
volatile int32_t t25 = 1086;
int8_t x114 = -1;
uint32_t x123 = 26919U;
int32_t x124 = -1;
int32_t t33 = -16446;
volatile int32_t t34 = -144;
uint32_t x146 = 1058195669U;
volatile int64_t x147 = 491273689LL;
volatile uint64_t x155 = 1766446699846564LLU;
volatile int32_t t37 = 3668751;
uint32_t x159 = 851U;
volatile int32_t x164 = INT32_MAX;
int16_t x168 = -1;
int8_t x171 = -42;
int8_t x177 = INT8_MIN;
uint16_t x178 = UINT16_MAX;
static int32_t x179 = -492;
static int32_t x182 = -1;
uint32_t x193 = UINT32_MAX;
int32_t t47 = 35983;
static volatile int32_t t48 = 33569;
uint16_t x202 = UINT16_MAX;
volatile int32_t t49 = -74933896;
int64_t x209 = INT64_MIN;
volatile int64_t x214 = -1LL;
volatile int32_t t52 = 78;
int16_t x218 = -47;
int16_t x224 = INT16_MIN;
int16_t x226 = INT16_MAX;
volatile int32_t t55 = -2764590;
volatile int64_t x233 = INT64_MIN;
int32_t x235 = INT32_MIN;
volatile int32_t t57 = 0;
int8_t x237 = INT8_MIN;
static volatile int32_t t58 = -90;
static int32_t x241 = INT32_MAX;
volatile int16_t x247 = INT16_MIN;
volatile int32_t t60 = 156640;
int32_t x256 = INT32_MIN;
int32_t t62 = -721116475;
int16_t x263 = -1888;
volatile int64_t x264 = INT64_MIN;
static volatile int32_t x265 = INT32_MAX;
int8_t x267 = INT8_MIN;
uint8_t x268 = 31U;
int32_t t64 = -20625814;
int32_t x270 = 1473768;
int16_t x271 = -9;
volatile uint8_t x276 = 4U;
static volatile int32_t x279 = INT32_MAX;
int8_t x280 = 6;
static volatile int32_t t68 = 5105;
uint16_t x285 = 14U;
volatile int32_t t69 = -1511;
uint32_t x295 = 1456U;
uint16_t x296 = UINT16_MAX;
int32_t t73 = 120;
volatile int32_t x305 = INT32_MIN;
volatile int16_t x314 = -13431;
int64_t x315 = -7846214622697544LL;
int8_t x316 = -1;
int32_t t76 = 1791;
int8_t x320 = INT8_MIN;
int32_t x321 = INT32_MIN;
int64_t x322 = INT64_MIN;
uint8_t x325 = 103U;
static volatile int16_t x335 = -1;
int16_t x347 = INT16_MIN;
volatile int32_t t83 = -4800;
int32_t t84 = 3016;
int8_t x358 = INT8_MAX;
int16_t x361 = INT16_MIN;
int8_t x363 = INT8_MIN;
int64_t x369 = INT64_MIN;
int64_t x383 = INT64_MAX;
int32_t x391 = INT32_MIN;
volatile int32_t t94 = -496145319;
uint16_t x393 = 714U;
uint32_t x400 = UINT32_MAX;
int32_t t97 = 1;
volatile int32_t t99 = -1;


void f0(void) {
	volatile uint8_t x1 = 12U;
	int32_t x2 = 0;
	static uint16_t x3 = 5670U;
	int16_t x4 = 3;
	volatile int32_t t0 = -69;

	t0 = ((x1^x2)<=(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 0U;
	volatile int16_t x7 = INT16_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -47917;

	t1 = ((x5^x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = -333732146;

	t2 = ((x9^x10)<=(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	int8_t x14 = -29;
	uint8_t x16 = 1U;
	volatile int32_t t3 = 200219;

	t3 = ((x13^x14)<=(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = -1;
	int32_t x20 = -1;
	volatile int32_t t4 = -96702;

	t4 = ((x17^x18)<=(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = UINT32_MAX;
	volatile int16_t x23 = INT16_MAX;

	t5 = ((x21^x22)<=(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int8_t x27 = 14;
	uint8_t x28 = 1U;
	static volatile int32_t t6 = 15;

	t6 = ((x25^x26)<=(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 174;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -1;

	t7 = ((x33^x34)<=(x35%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	uint8_t x40 = 1U;
	volatile int32_t t8 = -287;

	t8 = ((x37^x38)<=(x39%x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 4910U;
	volatile uint64_t x42 = 146166336439LLU;
	static int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	static int32_t t9 = 2;

	t9 = ((x41^x42)<=(x43%x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 4277;
	uint32_t x47 = 3107U;
	static int32_t t10 = 129;

	t10 = ((x45^x46)<=(x47%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x50 = INT32_MIN;
	uint8_t x51 = 54U;
	static uint8_t x52 = 1U;

	t11 = ((x49^x50)<=(x51%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 2914498270LLU;
	volatile uint16_t x54 = 111U;
	int8_t x56 = -2;
	volatile int32_t t12 = -432;

	t12 = ((x53^x54)<=(x55%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 2534U;
	int64_t x58 = -1LL;
	volatile uint16_t x59 = UINT16_MAX;
	int16_t x60 = -2959;

	t13 = ((x57^x58)<=(x59%x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	static int32_t x63 = -3975338;
	uint8_t x64 = UINT8_MAX;
	int32_t t14 = 3;

	t14 = ((x61^x62)<=(x63%x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 1268834485U;
	static int64_t x67 = -429479936671530LL;
	uint8_t x68 = 38U;
	volatile int32_t t15 = 1;

	t15 = ((x65^x66)<=(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -27;
	int64_t x70 = INT64_MIN;
	int64_t x72 = -1LL;

	t16 = ((x69^x70)<=(x71%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MIN;
	volatile uint16_t x75 = 23U;
	uint64_t x76 = 6397523LLU;
	static int32_t t17 = -80467;

	t17 = ((x73^x74)<=(x75%x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int16_t x78 = INT16_MIN;
	volatile int8_t x79 = INT8_MAX;
	int8_t x80 = -1;
	int32_t t18 = 46;

	t18 = ((x77^x78)<=(x79%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -1;
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MAX;

	t19 = ((x81^x82)<=(x83%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -69883;
	int16_t x87 = INT16_MIN;
	volatile int32_t t20 = -1;

	t20 = ((x85^x86)<=(x87%x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -80382LL;
	volatile int16_t x91 = INT16_MIN;
	volatile int32_t t21 = -464;

	t21 = ((x89^x90)<=(x91%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 11223;
	uint8_t x96 = UINT8_MAX;
	int32_t t22 = -5345;

	t22 = ((x93^x94)<=(x95%x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	static int8_t x99 = -1;
	static volatile int32_t x100 = 872720478;
	int32_t t23 = 80459652;

	t23 = ((x97^x98)<=(x99%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MAX;
	int32_t t24 = 210;

	t24 = ((x101^x102)<=(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = 59209442U;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	int32_t x108 = INT32_MIN;

	t25 = ((x105^x106)<=(x107%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MIN;
	int64_t x111 = 4415778151719932112LL;
	volatile int16_t x112 = INT16_MIN;
	int32_t t26 = -126659454;

	t26 = ((x109^x110)<=(x111%x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 6U;
	int32_t x115 = INT32_MIN;
	static volatile int16_t x116 = -239;
	static volatile int32_t t27 = -1499500;

	t27 = ((x113^x114)<=(x115%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 5U;
	int32_t x119 = INT32_MAX;
	volatile int32_t x120 = INT32_MAX;
	int32_t t28 = 341514;

	t28 = ((x117^x118)<=(x119%x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	volatile int32_t t29 = -119;

	t29 = ((x121^x122)<=(x123%x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = -1;
	int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MAX;
	static int32_t t30 = 0;

	t30 = ((x125^x126)<=(x127%x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 601869745U;
	uint64_t x130 = 56376323LLU;
	volatile int8_t x131 = -32;
	int8_t x132 = INT8_MAX;
	volatile int32_t t31 = 15140609;

	t31 = ((x129^x130)<=(x131%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x133 = 925585U;
	uint16_t x134 = 0U;
	int32_t x135 = -5114991;
	int64_t x136 = -52987391715501LL;
	int32_t t32 = -141594;

	t32 = ((x133^x134)<=(x135%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	int16_t x138 = -8356;
	static int16_t x139 = 1299;
	int8_t x140 = 2;

	t33 = ((x137^x138)<=(x139%x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 56;
	uint16_t x142 = 0U;
	static int8_t x143 = INT8_MAX;
	volatile uint16_t x144 = 29U;

	t34 = ((x141^x142)<=(x143%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t35 = -34;

	t35 = ((x145^x146)<=(x147%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 10224185U;
	int32_t x150 = -1;
	volatile int64_t x151 = INT64_MIN;
	uint8_t x152 = 5U;
	int32_t t36 = 28;

	t36 = ((x149^x150)<=(x151%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	static int32_t x154 = INT32_MIN;
	volatile int64_t x156 = INT64_MIN;

	t37 = ((x153^x154)<=(x155%x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -11;
	static int64_t x158 = -1473097125979LL;
	int16_t x160 = INT16_MAX;
	int32_t t38 = 219;

	t38 = ((x157^x158)<=(x159%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 115355865297468744LLU;
	static uint16_t x163 = 1505U;
	static volatile int32_t t39 = -128060;

	t39 = ((x161^x162)<=(x163%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -558;
	static volatile uint64_t x166 = 7762701033LLU;
	static uint16_t x167 = 51U;
	volatile int32_t t40 = 8103780;

	t40 = ((x165^x166)<=(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = UINT32_MAX;
	int8_t x172 = -1;
	volatile int32_t t41 = 336668903;

	t41 = ((x169^x170)<=(x171%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 1452;
	volatile int8_t x174 = 25;
	static int64_t x175 = 32565979135929LL;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t42 = -15554;

	t42 = ((x173^x174)<=(x175%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x180 = INT8_MIN;
	volatile int32_t t43 = 45;

	t43 = ((x177^x178)<=(x179%x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -10;
	int64_t x183 = -1LL;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = -186598493;

	t44 = ((x181^x182)<=(x183%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = UINT16_MAX;
	uint32_t x186 = 53U;
	uint8_t x187 = 0U;
	volatile int16_t x188 = 1496;
	static int32_t t45 = -2067;

	t45 = ((x185^x186)<=(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = 3;
	volatile uint32_t x190 = 3051U;
	int64_t x191 = INT64_MIN;
	volatile int64_t x192 = INT64_MAX;
	static int32_t t46 = 6;

	t46 = ((x189^x190)<=(x191%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	static int64_t x196 = 321481082693716966LL;

	t47 = ((x193^x194)<=(x195%x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = -294160098390LL;
	int32_t x198 = -1;
	static int64_t x199 = -239489113672309679LL;
	int16_t x200 = 27;

	t48 = ((x197^x198)<=(x199%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	int32_t x203 = -1;
	int16_t x204 = -6280;

	t49 = ((x201^x202)<=(x203%x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 1;
	int16_t x206 = -1;
	int64_t x207 = INT64_MIN;
	int32_t x208 = 7066386;
	int32_t t50 = -1;

	t50 = ((x205^x206)<=(x207%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x210 = 6;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = 41;
	volatile int32_t t51 = 1653351;

	t51 = ((x209^x210)<=(x211%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 141872236352144835LLU;
	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MAX;

	t52 = ((x213^x214)<=(x215%x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x217 = 0;
	uint64_t x219 = 114658417449609146LLU;
	static volatile int64_t x220 = INT64_MAX;
	int32_t t53 = -30418971;

	t53 = ((x217^x218)<=(x219%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	static int64_t x223 = INT64_MAX;
	int32_t t54 = 958727174;

	t54 = ((x221^x222)<=(x223%x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	static int8_t x227 = 27;
	static uint32_t x228 = 10651U;

	t55 = ((x225^x226)<=(x227%x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	static int16_t x231 = -1;
	int64_t x232 = INT64_MIN;
	int32_t t56 = -1483553;

	t56 = ((x229^x230)<=(x231%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x234 = UINT8_MAX;
	int8_t x236 = -24;

	t57 = ((x233^x234)<=(x235%x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = INT32_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	int32_t x240 = 2;

	t58 = ((x237^x238)<=(x239%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MAX;
	static int64_t x244 = INT64_MIN;
	volatile int32_t t59 = -61566;

	t59 = ((x241^x242)<=(x243%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	uint16_t x248 = 415U;

	t60 = ((x245^x246)<=(x247%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = -1;
	uint16_t x254 = 0U;
	int8_t x255 = INT8_MAX;
	int32_t t61 = -21;

	t61 = ((x253^x254)<=(x255%x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x257 = 9782971;
	int16_t x258 = 936;
	static uint32_t x259 = UINT32_MAX;
	uint64_t x260 = UINT64_MAX;

	t62 = ((x257^x258)<=(x259%x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = 244;
	uint8_t x262 = 3U;
	volatile int32_t t63 = -2;

	t63 = ((x261^x262)<=(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x266 = -1;

	t64 = ((x265^x266)<=(x267%x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = INT16_MAX;
	static int16_t x272 = INT16_MAX;
	int32_t t65 = 3584;

	t65 = ((x269^x270)<=(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 27167982608570LLU;
	volatile uint16_t x274 = UINT16_MAX;
	int64_t x275 = INT64_MIN;
	volatile int32_t t66 = 337293098;

	t66 = ((x273^x274)<=(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -156292;
	int32_t x278 = 2;
	int32_t t67 = -1;

	t67 = ((x277^x278)<=(x279%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = 429298;
	volatile int16_t x282 = 0;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;

	t68 = ((x281^x282)<=(x283%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x286 = -1LL;
	int8_t x287 = INT8_MAX;
	uint8_t x288 = 1U;

	t69 = ((x285^x286)<=(x287%x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 0;
	static uint8_t x290 = UINT8_MAX;
	int32_t x291 = 29431;
	int8_t x292 = INT8_MIN;
	volatile int32_t t70 = 91558193;

	t70 = ((x289^x290)<=(x291%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = INT16_MIN;
	int64_t x294 = -13825711LL;
	volatile int32_t t71 = -6;

	t71 = ((x293^x294)<=(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 1U;
	int32_t x298 = -1368754;
	int8_t x299 = INT8_MAX;
	int8_t x300 = 10;
	static volatile int32_t t72 = 128433640;

	t72 = ((x297^x298)<=(x299%x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x301 = 11538U;
	int64_t x302 = -1LL;
	int64_t x303 = INT64_MAX;
	volatile int64_t x304 = 6500LL;

	t73 = ((x301^x302)<=(x303%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = -3805;
	static uint32_t x308 = 4259616U;
	volatile int32_t t74 = 1731;

	t74 = ((x305^x306)<=(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 0U;
	uint16_t x310 = 1U;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MAX;
	static volatile int32_t t75 = -1590;

	t75 = ((x309^x310)<=(x311%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = INT8_MIN;

	t76 = ((x313^x314)<=(x315%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	uint32_t x319 = UINT32_MAX;
	volatile int32_t t77 = 63962271;

	t77 = ((x317^x318)<=(x319%x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x323 = 22506U;
	int16_t x324 = 362;
	int32_t t78 = 11342694;

	t78 = ((x321^x322)<=(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x326 = INT64_MAX;
	static uint32_t x327 = 3621U;
	static int32_t x328 = INT32_MIN;
	int32_t t79 = 14836871;

	t79 = ((x325^x326)<=(x327%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -1LL;
	volatile int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = -1;
	volatile int32_t t80 = 5919860;

	t80 = ((x329^x330)<=(x331%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x333 = -3309;
	uint32_t x334 = UINT32_MAX;
	volatile uint64_t x336 = UINT64_MAX;
	static volatile int32_t t81 = 999;

	t81 = ((x333^x334)<=(x335%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x337 = INT32_MAX;
	static int32_t x338 = 26965221;
	int8_t x339 = -1;
	int64_t x340 = -1LL;
	int32_t t82 = 2073205;

	t82 = ((x337^x338)<=(x339%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -1;
	volatile uint16_t x348 = 6460U;

	t83 = ((x345^x346)<=(x347%x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = -19;
	static volatile int8_t x351 = -1;
	uint32_t x352 = UINT32_MAX;

	t84 = ((x349^x350)<=(x351%x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = UINT32_MAX;
	volatile int8_t x355 = INT8_MIN;
	static int64_t x356 = INT64_MIN;
	volatile int32_t t85 = -128428;

	t85 = ((x353^x354)<=(x355%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MAX;
	static int64_t x359 = INT64_MIN;
	static int16_t x360 = -2;
	volatile int32_t t86 = -5;

	t86 = ((x357^x358)<=(x359%x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x362 = UINT16_MAX;
	uint64_t x364 = 2816213541532LLU;
	volatile int32_t t87 = -5617;

	t87 = ((x361^x362)<=(x363%x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 49U;
	int32_t x366 = INT32_MIN;
	uint64_t x367 = 5106453824234521095LLU;
	uint16_t x368 = 5U;
	static volatile int32_t t88 = -5552151;

	t88 = ((x365^x366)<=(x367%x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x370 = INT32_MAX;
	volatile uint64_t x371 = 19218523676LLU;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t89 = 178651622;

	t89 = ((x369^x370)<=(x371%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MAX;
	static uint32_t x374 = UINT32_MAX;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t90 = -32146;

	t90 = ((x373^x374)<=(x375%x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = INT64_MIN;
	volatile int16_t x378 = 725;
	int32_t x379 = -326328;
	static volatile int16_t x380 = INT16_MIN;
	static int32_t t91 = 2;

	t91 = ((x377^x378)<=(x379%x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x381 = 2U;
	static int32_t x382 = -1;
	uint32_t x384 = UINT32_MAX;
	int32_t t92 = 57940975;

	t92 = ((x381^x382)<=(x383%x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MAX;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = -7;
	volatile int32_t t93 = 2152404;

	t93 = ((x385^x386)<=(x387%x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = -1;
	int16_t x390 = INT16_MAX;
	int64_t x392 = -33362281LL;

	t94 = ((x389^x390)<=(x391%x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x394 = UINT16_MAX;
	int8_t x395 = 17;
	volatile int64_t x396 = INT64_MIN;
	int32_t t95 = -21;

	t95 = ((x393^x394)<=(x395%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = UINT16_MAX;
	uint8_t x399 = UINT8_MAX;
	int32_t t96 = -413762323;

	t96 = ((x397^x398)<=(x399%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = -1;
	int8_t x402 = INT8_MIN;
	volatile uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MAX;

	t97 = ((x401^x402)<=(x403%x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = 459U;
	int64_t x406 = -6011163LL;
	static int32_t x407 = -1;
	int32_t x408 = -1;
	int32_t t98 = 0;

	t98 = ((x405^x406)<=(x407%x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = UINT64_MAX;
	int16_t x410 = -1;
	static uint64_t x411 = 13326LLU;
	volatile int32_t x412 = -215830466;

	t99 = ((x409^x410)<=(x411%x412));

	if (t99 != 1) { NG(); } else { ; }
	
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

