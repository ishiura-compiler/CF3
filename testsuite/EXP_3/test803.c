#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 4U;
int16_t x14 = INT16_MIN;
static uint64_t x15 = 68600386871077LLU;
static volatile uint16_t x19 = 182U;
int32_t x20 = -1;
int64_t x29 = INT64_MIN;
volatile int32_t x30 = INT32_MIN;
int32_t x32 = -23;
static int16_t x33 = -1;
static volatile int32_t x34 = -1;
static uint64_t x36 = UINT64_MAX;
volatile int32_t t6 = -23722;
static uint16_t x46 = UINT16_MAX;
static volatile uint64_t x48 = 1927007LLU;
int8_t x49 = INT8_MIN;
static int32_t t9 = 727;
volatile uint8_t x55 = 5U;
int8_t x61 = INT8_MAX;
int64_t x62 = INT64_MIN;
int32_t x64 = -1;
uint8_t x66 = 2U;
uint32_t x81 = 52107240U;
uint16_t x85 = 386U;
int8_t x89 = INT8_MAX;
int32_t x90 = INT32_MIN;
static int32_t x100 = -1;
uint8_t x101 = UINT8_MAX;
int64_t x102 = -1LL;
uint16_t x112 = 3U;
int8_t x114 = INT8_MIN;
int32_t t24 = 771;
uint8_t x118 = UINT8_MAX;
volatile int32_t t25 = 16814192;
int8_t x125 = INT8_MIN;
int8_t x127 = INT8_MIN;
static volatile int32_t x137 = INT32_MAX;
static int32_t x139 = -6;
int32_t x141 = -6910197;
int8_t x142 = 14;
int8_t x145 = INT8_MAX;
int8_t x147 = -1;
uint8_t x155 = UINT8_MAX;
int64_t x159 = -1LL;
static int32_t t35 = 30580;
int64_t x167 = INT64_MAX;
int64_t x169 = INT64_MIN;
int16_t x170 = -8;
static int64_t x171 = -1LL;
volatile int32_t t40 = -121993845;
int8_t x181 = 3;
uint16_t x185 = 12333U;
volatile uint16_t x187 = 4U;
uint64_t x189 = 3LLU;
int16_t x192 = INT16_MAX;
int32_t t43 = 4011040;
static int64_t x194 = -1LL;
volatile uint16_t x196 = 487U;
static int8_t x204 = INT8_MAX;
volatile int8_t x207 = INT8_MIN;
static uint32_t x211 = 200643U;
int16_t x213 = INT16_MIN;
static int64_t x224 = -6351307068619LL;
int16_t x225 = -12107;
volatile uint64_t x240 = 63986620195LLU;
int32_t t56 = -104907907;
volatile int32_t x251 = INT32_MIN;
int16_t x256 = INT16_MAX;
int32_t t59 = 1108;
int8_t x258 = INT8_MIN;
static int8_t x266 = -1;
volatile uint16_t x272 = 39U;
volatile int32_t t65 = -1;
int32_t t66 = -10412;
uint16_t x285 = UINT16_MAX;
uint32_t x287 = 8178U;
int16_t x290 = INT16_MIN;
volatile int32_t t68 = 284760;
uint64_t x293 = UINT64_MAX;
int8_t x294 = INT8_MAX;
int32_t x296 = INT32_MAX;
int16_t x301 = -1;
static int32_t x310 = INT32_MAX;
int32_t x316 = -1;
static uint16_t x318 = 10U;
volatile int32_t x321 = INT32_MAX;
static int32_t x322 = 1;
int64_t x326 = INT64_MIN;
int32_t x331 = INT32_MAX;
volatile int64_t x333 = -1LL;
volatile int16_t x337 = INT16_MIN;
int8_t x339 = -1;
int32_t t81 = -827598;
int8_t x351 = 1;
static int8_t x353 = -1;
int8_t x354 = INT8_MIN;
volatile int32_t t85 = -48447;
int32_t t86 = 0;
uint8_t x366 = 0U;
static int32_t t87 = -6813432;
static uint8_t x373 = 3U;
int32_t x375 = 916570;
volatile int16_t x382 = 2;
volatile int32_t t91 = 432133752;
volatile int16_t x388 = -1;
uint32_t x394 = 916448U;
volatile uint16_t x395 = 6U;
volatile int8_t x398 = -9;
volatile int8_t x400 = INT8_MIN;
volatile int32_t t96 = 2575;
volatile uint16_t x405 = 13U;
volatile int16_t x408 = INT16_MIN;
int64_t x414 = -358989LL;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	static int64_t x2 = -1034692805820515LL;
	int16_t x3 = 3;
	volatile int32_t t0 = 1943;

	t0 = ((x1<=x2)<=(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 1U;
	static int32_t x8 = -2122359;
	volatile int32_t t1 = 124;

	t1 = ((x5<=x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 803;
	volatile int8_t x10 = INT8_MIN;
	volatile int32_t x11 = INT32_MIN;
	volatile int8_t x12 = -1;
	static volatile int32_t t2 = 78951;

	t2 = ((x9<=x10)<=(x11%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	volatile uint16_t x16 = 3118U;
	int32_t t3 = 15102988;

	t3 = ((x13<=x14)<=(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x18 = -1;
	volatile int32_t t4 = -4465;

	t4 = ((x17<=x18)<=(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x31 = INT16_MAX;
	int32_t t5 = 240;

	t5 = ((x29<=x30)<=(x31%x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x35 = 1538049620U;

	t6 = ((x33<=x34)<=(x35%x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	int32_t x42 = INT32_MAX;
	static int8_t x43 = INT8_MIN;
	uint16_t x44 = 16487U;
	int32_t t7 = 29;

	t7 = ((x41<=x42)<=(x43%x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x45 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	static int32_t t8 = -19390;

	t8 = ((x45<=x46)<=(x47%x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x50 = -1;
	static volatile int16_t x51 = -1;
	int32_t x52 = 2806;

	t9 = ((x49<=x50)<=(x51%x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	static int16_t x54 = -4127;
	static uint32_t x56 = 1U;
	volatile int32_t t10 = -209495946;

	t10 = ((x53<=x54)<=(x55%x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 85U;
	volatile int64_t x58 = 5436460LL;
	int64_t x59 = INT64_MAX;
	int8_t x60 = 19;
	static int32_t t11 = 112610;

	t11 = ((x57<=x58)<=(x59%x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x63 = INT64_MIN;
	volatile int32_t t12 = 131899538;

	t12 = ((x61<=x62)<=(x63%x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = INT8_MAX;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = -1;
	static int32_t t13 = -37174;

	t13 = ((x65<=x66)<=(x67%x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x69 = 25538698;
	static uint16_t x70 = 7183U;
	static volatile int32_t x71 = INT32_MIN;
	static int16_t x72 = -1373;
	volatile int32_t t14 = 5471204;

	t14 = ((x69<=x70)<=(x71%x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -99515195;
	int32_t x74 = INT32_MAX;
	int16_t x75 = -18;
	uint16_t x76 = 2U;
	volatile int32_t t15 = 2;

	t15 = ((x73<=x74)<=(x75%x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x82 = 112;
	uint64_t x83 = 30103066751042LLU;
	int8_t x84 = 3;
	static volatile int32_t t16 = 25;

	t16 = ((x81<=x82)<=(x83%x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	static volatile uint64_t x88 = 7931LLU;
	volatile int32_t t17 = 5;

	t17 = ((x85<=x86)<=(x87%x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x91 = -1;
	uint64_t x92 = 895LLU;
	int32_t t18 = 27502;

	t18 = ((x89<=x90)<=(x91%x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x94 = 227830615;
	int16_t x95 = INT16_MAX;
	int16_t x96 = -1;
	volatile int32_t t19 = 63627019;

	t19 = ((x93<=x94)<=(x95%x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 148216LL;
	int32_t x98 = -62597;
	int64_t x99 = INT64_MAX;
	volatile int32_t t20 = -654913;

	t20 = ((x97<=x98)<=(x99%x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x103 = 7LLU;
	int32_t x104 = -1;
	int32_t t21 = -318183;

	t21 = ((x101<=x102)<=(x103%x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -1;
	int8_t x106 = 9;
	int8_t x107 = 8;
	int64_t x108 = INT64_MIN;
	int32_t t22 = 234239;

	t22 = ((x105<=x106)<=(x107%x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x110 = -1;
	volatile uint64_t x111 = UINT64_MAX;
	int32_t t23 = 129581408;

	t23 = ((x109<=x110)<=(x111%x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = -1;
	uint16_t x115 = UINT16_MAX;
	uint16_t x116 = 4339U;

	t24 = ((x113<=x114)<=(x115%x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x117 = 2678U;
	uint8_t x119 = UINT8_MAX;
	uint16_t x120 = UINT16_MAX;

	t25 = ((x117<=x118)<=(x119%x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 1942U;
	volatile int32_t x122 = INT32_MAX;
	volatile uint16_t x123 = 19426U;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t26 = 427;

	t26 = ((x121<=x122)<=(x123%x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x126 = 42U;
	int32_t x128 = INT32_MIN;
	int32_t t27 = -6;

	t27 = ((x125<=x126)<=(x127%x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x129 = INT64_MAX;
	volatile uint8_t x130 = 0U;
	volatile uint8_t x131 = 37U;
	int16_t x132 = -1;
	volatile int32_t t28 = 257550;

	t28 = ((x129<=x130)<=(x131%x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = 3266146155LL;
	static int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t29 = 100045;

	t29 = ((x133<=x134)<=(x135%x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x138 = UINT8_MAX;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t30 = 10127516;

	t30 = ((x137<=x138)<=(x139%x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x143 = UINT16_MAX;
	int64_t x144 = INT64_MIN;
	int32_t t31 = -204603898;

	t31 = ((x141<=x142)<=(x143%x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x146 = -1;
	static int8_t x148 = INT8_MAX;
	static int32_t t32 = -244358374;

	t32 = ((x145<=x146)<=(x147%x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x149 = 4U;
	int64_t x150 = 176837075626041218LL;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t33 = -1084;

	t33 = ((x149<=x150)<=(x151%x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x153 = 12616U;
	int16_t x154 = 7489;
	int8_t x156 = INT8_MIN;
	volatile int32_t t34 = 738;

	t34 = ((x153<=x154)<=(x155%x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	static int64_t x158 = -6477844LL;
	uint64_t x160 = 566LLU;

	t35 = ((x157<=x158)<=(x159%x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 116591U;
	static volatile int32_t x162 = -1;
	int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t36 = -5875;

	t36 = ((x161<=x162)<=(x163%x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x165 = 1U;
	static uint16_t x166 = UINT16_MAX;
	int64_t x168 = INT64_MAX;
	volatile int32_t t37 = 1002827;

	t37 = ((x165<=x166)<=(x167%x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x172 = 63U;
	int32_t t38 = 2322;

	t38 = ((x169<=x170)<=(x171%x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 11U;
	static int8_t x174 = INT8_MAX;
	static volatile int32_t x175 = -1;
	volatile uint64_t x176 = 75070263LLU;
	int32_t t39 = 1389170;

	t39 = ((x173<=x174)<=(x175%x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = INT32_MAX;
	uint16_t x178 = 336U;
	int16_t x179 = -1;
	static int16_t x180 = -1;

	t40 = ((x177<=x178)<=(x179%x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x182 = 11660321640111402LL;
	volatile int64_t x183 = INT64_MIN;
	int8_t x184 = 23;
	int32_t t41 = 186911672;

	t41 = ((x181<=x182)<=(x183%x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x186 = -9;
	int64_t x188 = -1LL;
	int32_t t42 = 128;

	t42 = ((x185<=x186)<=(x187%x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x190 = INT16_MIN;
	static uint32_t x191 = 74U;

	t43 = ((x189<=x190)<=(x191%x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	int64_t x195 = INT64_MAX;
	int32_t t44 = 832505;

	t44 = ((x193<=x194)<=(x195%x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -1LL;
	static int8_t x198 = -1;
	uint8_t x199 = 15U;
	int8_t x200 = INT8_MIN;
	static int32_t t45 = 2;

	t45 = ((x197<=x198)<=(x199%x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	int8_t x203 = -1;
	static int32_t t46 = 3;

	t46 = ((x201<=x202)<=(x203%x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MAX;
	int8_t x208 = 9;
	static int32_t t47 = -4532908;

	t47 = ((x205<=x206)<=(x207%x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 1008U;
	volatile int16_t x210 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	static int32_t t48 = 482461144;

	t48 = ((x209<=x210)<=(x211%x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x214 = 1U;
	uint64_t x215 = 1750471110520496LLU;
	int32_t x216 = -1;
	volatile int32_t t49 = 6308;

	t49 = ((x213<=x214)<=(x215%x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -12;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = 22780U;
	static int32_t x220 = -1;
	volatile int32_t t50 = -3455560;

	t50 = ((x217<=x218)<=(x219%x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x221 = INT16_MIN;
	uint32_t x222 = 101U;
	int8_t x223 = INT8_MAX;
	volatile int32_t t51 = 94298;

	t51 = ((x221<=x222)<=(x223%x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x226 = 0U;
	int32_t x227 = -1;
	int16_t x228 = 3;
	int32_t t52 = 248533808;

	t52 = ((x225<=x226)<=(x227%x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x229 = INT32_MIN;
	static volatile int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MIN;
	uint64_t x232 = 90423824475800091LLU;
	static int32_t t53 = 1523;

	t53 = ((x229<=x230)<=(x231%x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x233 = 3653569401LLU;
	static uint32_t x234 = 60156U;
	uint8_t x235 = 2U;
	int32_t x236 = INT32_MAX;
	volatile int32_t t54 = -1023;

	t54 = ((x233<=x234)<=(x235%x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x237 = INT32_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	volatile int8_t x239 = INT8_MIN;
	int32_t t55 = 912972;

	t55 = ((x237<=x238)<=(x239%x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MIN;
	int8_t x244 = 1;

	t56 = ((x241<=x242)<=(x243%x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -16;
	uint8_t x248 = UINT8_MAX;
	int32_t t57 = 21;

	t57 = ((x245<=x246)<=(x247%x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	static uint8_t x250 = UINT8_MAX;
	int8_t x252 = -1;
	static volatile int32_t t58 = 89;

	t58 = ((x249<=x250)<=(x251%x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x253 = 27U;
	static int16_t x254 = INT16_MIN;
	static int8_t x255 = -1;

	t59 = ((x253<=x254)<=(x255%x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x257 = -282564;
	int64_t x259 = -100311289283399147LL;
	static int8_t x260 = -3;
	int32_t t60 = -494247582;

	t60 = ((x257<=x258)<=(x259%x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x261 = 413867382LLU;
	int64_t x262 = INT64_MAX;
	volatile uint8_t x263 = UINT8_MAX;
	int64_t x264 = INT64_MIN;
	int32_t t61 = -353591335;

	t61 = ((x261<=x262)<=(x263%x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -7695;
	int64_t x267 = INT64_MIN;
	volatile int32_t x268 = -61;
	volatile int32_t t62 = -1901904;

	t62 = ((x265<=x266)<=(x267%x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -2170;
	volatile int64_t x270 = INT64_MIN;
	static volatile uint8_t x271 = 23U;
	int32_t t63 = -23151599;

	t63 = ((x269<=x270)<=(x271%x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MAX;
	int16_t x276 = INT16_MAX;
	volatile int32_t t64 = -1;

	t64 = ((x273<=x274)<=(x275%x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x277 = INT64_MAX;
	static uint8_t x278 = 0U;
	int32_t x279 = 67414;
	uint8_t x280 = 6U;

	t65 = ((x277<=x278)<=(x279%x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MAX;
	int64_t x283 = INT64_MAX;
	int32_t x284 = 11880;

	t66 = ((x281<=x282)<=(x283%x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x286 = -1;
	volatile int16_t x288 = -1248;
	int32_t t67 = 56592;

	t67 = ((x285<=x286)<=(x287%x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 1U;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;

	t68 = ((x289<=x290)<=(x291%x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x295 = 27214910206LL;
	volatile int32_t t69 = -68;

	t69 = ((x293<=x294)<=(x295%x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x297 = UINT64_MAX;
	int16_t x298 = 65;
	static uint8_t x299 = 14U;
	static int8_t x300 = -1;
	volatile int32_t t70 = 28142;

	t70 = ((x297<=x298)<=(x299%x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x302 = 296220;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = -1;
	volatile int32_t t71 = 1;

	t71 = ((x301<=x302)<=(x303%x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x305 = 5711492634LLU;
	static volatile int8_t x306 = 0;
	volatile int16_t x307 = INT16_MIN;
	int16_t x308 = -1;
	volatile int32_t t72 = -3194908;

	t72 = ((x305<=x306)<=(x307%x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x309 = INT64_MIN;
	uint64_t x311 = 50789LLU;
	int8_t x312 = -1;
	volatile int32_t t73 = -279378;

	t73 = ((x309<=x310)<=(x311%x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MIN;
	volatile int16_t x314 = 0;
	volatile int16_t x315 = INT16_MAX;
	int32_t t74 = -2022;

	t74 = ((x313<=x314)<=(x315%x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x317 = 3751446;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t75 = -198;

	t75 = ((x317<=x318)<=(x319%x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x323 = 1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t76 = -4553389;

	t76 = ((x321<=x322)<=(x323%x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = -1;
	uint64_t x327 = 17001899331418399LLU;
	static volatile int32_t x328 = -11890469;
	int32_t t77 = 15392;

	t77 = ((x325<=x326)<=(x327%x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MAX;
	int16_t x332 = -1;
	int32_t t78 = 9612;

	t78 = ((x329<=x330)<=(x331%x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x334 = -1;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 1266U;
	volatile int32_t t79 = 246;

	t79 = ((x333<=x334)<=(x335%x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x338 = INT64_MIN;
	uint16_t x340 = 80U;
	static volatile int32_t t80 = -5;

	t80 = ((x337<=x338)<=(x339%x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 2U;
	int64_t x342 = -428LL;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MIN;

	t81 = ((x341<=x342)<=(x343%x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x345 = INT32_MIN;
	static int64_t x346 = INT64_MAX;
	uint32_t x347 = 3U;
	int8_t x348 = -1;
	int32_t t82 = -72401;

	t82 = ((x345<=x346)<=(x347%x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = -2259LL;
	int64_t x350 = INT64_MIN;
	int8_t x352 = INT8_MAX;
	int32_t t83 = 0;

	t83 = ((x349<=x350)<=(x351%x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x355 = INT32_MIN;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t84 = -60483;

	t84 = ((x353<=x354)<=(x355%x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = -1;
	int32_t x359 = -1;
	uint32_t x360 = 34U;

	t85 = ((x357<=x358)<=(x359%x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 0U;
	int16_t x362 = -1;
	int32_t x363 = -1;
	static uint64_t x364 = 7352049800132659387LLU;

	t86 = ((x361<=x362)<=(x363%x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x365 = INT16_MIN;
	uint32_t x367 = 187131233U;
	int32_t x368 = INT32_MIN;

	t87 = ((x365<=x366)<=(x367%x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 7U;
	int8_t x371 = 22;
	int64_t x372 = INT64_MAX;
	static int32_t t88 = -9091894;

	t88 = ((x369<=x370)<=(x371%x372));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x374 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	int32_t t89 = -6106;

	t89 = ((x373<=x374)<=(x375%x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	int8_t x379 = 11;
	static int8_t x380 = INT8_MIN;
	static volatile int32_t t90 = 46;

	t90 = ((x377<=x378)<=(x379%x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x381 = 73U;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MIN;

	t91 = ((x381<=x382)<=(x383%x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x385 = -1LL;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	int32_t t92 = -8077;

	t92 = ((x385<=x386)<=(x387%x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MAX;
	static int32_t x392 = INT32_MAX;
	volatile int32_t t93 = 14569788;

	t93 = ((x389<=x390)<=(x391%x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = -1;
	uint16_t x396 = UINT16_MAX;
	static volatile int32_t t94 = -4473;

	t94 = ((x393<=x394)<=(x395%x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x397 = UINT16_MAX;
	int8_t x399 = -1;
	volatile int32_t t95 = -52782677;

	t95 = ((x397<=x398)<=(x399%x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x401 = -210;
	int16_t x402 = -460;
	uint16_t x403 = 1U;
	static int8_t x404 = INT8_MIN;

	t96 = ((x401<=x402)<=(x403%x404));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x406 = UINT16_MAX;
	uint64_t x407 = 96007063835474022LLU;
	volatile int32_t t97 = -17;

	t97 = ((x405<=x406)<=(x407%x408));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 195255941U;
	int16_t x410 = 130;
	uint64_t x411 = UINT64_MAX;
	static int16_t x412 = -1;
	static volatile int32_t t98 = -85;

	t98 = ((x409<=x410)<=(x411%x412));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x413 = UINT16_MAX;
	volatile uint32_t x415 = UINT32_MAX;
	volatile int32_t x416 = 103602799;
	static volatile int32_t t99 = -1266;

	t99 = ((x413<=x414)<=(x415%x416));

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

