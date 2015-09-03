#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = -336;
static uint8_t x12 = UINT8_MAX;
static uint16_t x16 = 9354U;
int32_t t4 = 737;
int32_t t6 = -1;
volatile uint8_t x30 = 47U;
int32_t t7 = 1;
static volatile int64_t x37 = -1LL;
int32_t t10 = 55991;
volatile uint64_t x46 = 26876808285LLU;
int32_t x47 = INT32_MIN;
static int32_t t12 = -5;
uint16_t x54 = 539U;
int64_t x56 = 137301773814829055LL;
volatile int16_t x59 = INT16_MAX;
int32_t x60 = INT32_MIN;
uint16_t x66 = 11758U;
static uint32_t x71 = 62740428U;
uint32_t x76 = 46172403U;
volatile int32_t t19 = -109294667;
int32_t x104 = INT32_MAX;
uint8_t x109 = 61U;
uint8_t x115 = UINT8_MAX;
int16_t x118 = INT16_MAX;
static int32_t x124 = INT32_MIN;
static volatile int32_t t31 = -38157;
static uint16_t x130 = UINT16_MAX;
volatile int8_t x133 = INT8_MIN;
int8_t x141 = -1;
static int8_t x144 = INT8_MIN;
int32_t x146 = INT32_MIN;
volatile int32_t t36 = -5325008;
volatile int32_t x155 = INT32_MAX;
static uint64_t x158 = UINT64_MAX;
static int64_t x162 = INT64_MIN;
int64_t x164 = INT64_MAX;
volatile uint16_t x187 = 1U;
int64_t x189 = 20121186688818531LL;
volatile uint16_t x193 = 1U;
int16_t x194 = INT16_MAX;
int32_t x197 = INT32_MAX;
static int64_t x200 = -1LL;
uint32_t x205 = UINT32_MAX;
int32_t t51 = -433347724;
uint32_t x210 = UINT32_MAX;
static int32_t x211 = -66004283;
static volatile int8_t x212 = -1;
int32_t t52 = -642597983;
static int32_t t53 = -5245;
static int8_t x218 = -23;
static uint8_t x220 = 26U;
int8_t x232 = INT8_MIN;
int32_t x234 = INT32_MIN;
int8_t x240 = INT8_MAX;
uint16_t x242 = UINT16_MAX;
int8_t x245 = 0;
int64_t x246 = INT64_MIN;
uint8_t x249 = UINT8_MAX;
static int64_t x250 = INT64_MIN;
int16_t x257 = -348;
volatile int32_t t64 = 4;
volatile int8_t x263 = -53;
volatile int8_t x266 = INT8_MAX;
volatile int8_t x267 = -3;
volatile int32_t x274 = INT32_MIN;
int8_t x284 = INT8_MAX;
int8_t x285 = -1;
int16_t x288 = INT16_MAX;
static volatile int16_t x291 = INT16_MIN;
static int8_t x300 = INT8_MIN;
int16_t x303 = INT16_MIN;
uint64_t x307 = UINT64_MAX;
volatile int16_t x308 = -1;
static uint32_t x312 = UINT32_MAX;
static volatile int32_t t78 = 331;
int32_t t79 = 1377658;
static int64_t x333 = -1LL;
int32_t x335 = INT32_MIN;
int16_t x347 = -1;
volatile int32_t t86 = 23773;
static uint16_t x356 = UINT16_MAX;
int16_t x363 = 2646;
volatile int8_t x367 = -28;
int32_t x381 = -1;
uint64_t x382 = 192435LLU;
int32_t t95 = 796878;
uint32_t x386 = 5994U;
int16_t x392 = 45;
volatile int8_t x393 = INT8_MIN;
volatile int32_t t98 = -57414249;
uint8_t x399 = 1U;
int64_t x400 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint16_t x2 = UINT16_MAX;
	int16_t x3 = -1;
	int8_t x4 = 49;
	volatile int32_t t0 = -4897453;

	t0 = ((x1==x2)<(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x7 = -1LL;
	uint32_t x8 = 1923U;
	volatile int32_t t1 = 2;

	t1 = ((x5==x6)<(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 39U;
	static uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = INT8_MIN;
	static int32_t t2 = -29210;

	t2 = ((x9==x10)<(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint16_t x14 = 5747U;
	int64_t x15 = -1LL;
	int32_t t3 = -11;

	t3 = ((x13==x14)<(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -8992937;
	uint32_t x18 = 1468U;
	volatile uint32_t x19 = 4679888U;
	int16_t x20 = -1;

	t4 = ((x17==x18)<(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int8_t x22 = INT8_MIN;
	static uint16_t x23 = 1651U;
	int64_t x24 = 158057881730348247LL;
	volatile int32_t t5 = -1;

	t5 = ((x21==x22)<(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint64_t x26 = 57807315131862763LLU;
	volatile int64_t x27 = 60118116466140626LL;
	int64_t x28 = -6932417722411590LL;

	t6 = ((x25==x26)<(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = INT32_MIN;
	static uint16_t x31 = 6U;
	static int32_t x32 = 848397;

	t7 = ((x29==x30)<(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x34 = 37U;
	static int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 58;

	t8 = ((x33==x34)<(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = 1U;
	static int8_t x39 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 0;

	t9 = ((x37==x38)<(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 5U;
	uint8_t x42 = 91U;
	int8_t x43 = 17;
	static volatile uint32_t x44 = 1198674982U;

	t10 = ((x41==x42)<(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 100U;
	volatile uint64_t x48 = UINT64_MAX;
	int32_t t11 = 474543640;

	t11 = ((x45==x46)<(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	static int64_t x50 = -1LL;
	int32_t x51 = -1;
	uint16_t x52 = 3225U;

	t12 = ((x49==x50)<(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static volatile int32_t x55 = -1;
	volatile int32_t t13 = 4401273;

	t13 = ((x53==x54)<(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MAX;
	static volatile int32_t t14 = 94443192;

	t14 = ((x57==x58)<(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	uint32_t x62 = 191U;
	int32_t x63 = -1;
	uint64_t x64 = 27054205274177LLU;
	volatile int32_t t15 = 44541553;

	t15 = ((x61==x62)<(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 3349881775133LL;
	static uint32_t x67 = 228566U;
	int16_t x68 = 52;
	volatile int32_t t16 = -15758257;

	t16 = ((x65==x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 3389U;
	int8_t x70 = INT8_MIN;
	int32_t x72 = -14;
	volatile int32_t t17 = -298829;

	t17 = ((x69==x70)<(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static uint64_t x74 = 147082267138506206LLU;
	volatile uint8_t x75 = UINT8_MAX;
	static int32_t t18 = 0;

	t18 = ((x73==x74)<(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = 11891184LL;
	static int32_t x78 = INT32_MIN;
	uint16_t x79 = 30204U;
	static int16_t x80 = 0;

	t19 = ((x77==x78)<(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = INT64_MAX;
	volatile uint32_t x82 = 1829U;
	int16_t x83 = INT16_MIN;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = 5;

	t20 = ((x81==x82)<(x83^x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static int64_t x86 = -447662856506461117LL;
	static uint32_t x87 = 30323259U;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 1887316;

	t21 = ((x85==x86)<(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -1;
	volatile int32_t x92 = 15;
	int32_t t22 = 28085;

	t22 = ((x89==x90)<(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -63757674139092LL;
	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int64_t x96 = -1LL;
	int32_t t23 = 1549500;

	t23 = ((x93==x94)<(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	volatile uint32_t x98 = UINT32_MAX;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = INT32_MAX;
	int32_t t24 = 7617;

	t24 = ((x97==x98)<(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -4131346389425416032LL;
	static int8_t x102 = 1;
	uint64_t x103 = 75349LLU;
	int32_t t25 = -684152980;

	t25 = ((x101==x102)<(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	static volatile int16_t x106 = -1;
	static uint8_t x107 = 2U;
	uint64_t x108 = 478891440909081719LLU;
	int32_t t26 = 114771;

	t26 = ((x105==x106)<(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x110 = 10174LLU;
	uint64_t x111 = UINT64_MAX;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = 51;

	t27 = ((x109==x110)<(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 1U;
	uint32_t x114 = 46121311U;
	int64_t x116 = 1910809004LL;
	static volatile int32_t t28 = -894;

	t28 = ((x113==x114)<(x115^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 3U;
	static uint8_t x119 = 26U;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t29 = 2544517;

	t29 = ((x117==x118)<(x119^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 86;
	int16_t x122 = INT16_MIN;
	static int32_t x123 = -1;
	static volatile int32_t t30 = -523;

	t30 = ((x121==x122)<(x123^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	uint16_t x126 = 965U;
	int16_t x127 = 21;
	uint64_t x128 = 22223LLU;

	t31 = ((x125==x126)<(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 273814523578585506LLU;
	uint16_t x131 = 4073U;
	volatile int64_t x132 = INT64_MAX;
	int32_t t32 = -471529;

	t32 = ((x129==x130)<(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 0U;
	static uint8_t x135 = 79U;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 424976;

	t33 = ((x133==x134)<(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = 3U;
	volatile int32_t t34 = 0;

	t34 = ((x137==x138)<(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MAX;
	int32_t t35 = -100;

	t35 = ((x141==x142)<(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int32_t x147 = -1;
	volatile int64_t x148 = -1LL;

	t36 = ((x145==x146)<(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 2U;
	int64_t x150 = INT64_MIN;
	static int32_t x151 = 140061831;
	int64_t x152 = -1LL;
	volatile int32_t t37 = 53152390;

	t37 = ((x149==x150)<(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static uint8_t x154 = UINT8_MAX;
	volatile uint64_t x156 = 14937840027411LLU;
	volatile int32_t t38 = 185129;

	t38 = ((x153==x154)<(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint8_t x159 = 4U;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = 10;

	t39 = ((x157==x158)<(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 2148LLU;
	volatile uint16_t x163 = UINT16_MAX;
	static volatile int32_t t40 = -32709861;

	t40 = ((x161==x162)<(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 72U;
	int64_t x166 = INT64_MIN;
	uint8_t x167 = 7U;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t41 = -116010316;

	t41 = ((x165==x166)<(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = -1;
	volatile int16_t x171 = 949;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = 715;

	t42 = ((x169==x170)<(x171^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	volatile int64_t x174 = 7LL;
	volatile uint16_t x175 = UINT16_MAX;
	volatile uint64_t x176 = 22LLU;
	volatile int32_t t43 = -2762124;

	t43 = ((x173==x174)<(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -104;
	int32_t x178 = -1;
	int16_t x179 = INT16_MAX;
	uint32_t x180 = UINT32_MAX;
	int32_t t44 = 78208;

	t44 = ((x177==x178)<(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 159;
	uint16_t x183 = 1U;
	int64_t x184 = INT64_MAX;
	int32_t t45 = 2107;

	t45 = ((x181==x182)<(x183^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = 54119250;
	int64_t x186 = INT64_MIN;
	uint16_t x188 = UINT16_MAX;
	static int32_t t46 = -70962;

	t46 = ((x185==x186)<(x187^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	static uint64_t x191 = UINT64_MAX;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 11453;

	t47 = ((x189==x190)<(x191^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x195 = UINT8_MAX;
	uint32_t x196 = 710U;
	volatile int32_t t48 = -2;

	t48 = ((x193==x194)<(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -1;
	volatile uint32_t x199 = 2109232189U;
	volatile int32_t t49 = -2;

	t49 = ((x197==x198)<(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 2444714U;
	uint8_t x203 = 23U;
	int8_t x204 = -1;
	volatile int32_t t50 = -22682789;

	t50 = ((x201==x202)<(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = 0;
	uint64_t x207 = 1514592730LLU;
	static int64_t x208 = -1LL;

	t51 = ((x205==x206)<(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;

	t52 = ((x209==x210)<(x211^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = 4849;
	int16_t x214 = -1;
	int64_t x215 = INT64_MAX;
	static volatile int32_t x216 = INT32_MAX;

	t53 = ((x213==x214)<(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	volatile uint32_t x219 = 98709392U;
	volatile int32_t t54 = 1901195;

	t54 = ((x217==x218)<(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	uint8_t x222 = 11U;
	volatile uint16_t x223 = 5148U;
	uint32_t x224 = 43448U;
	volatile int32_t t55 = 47043;

	t55 = ((x221==x222)<(x223^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -8LL;
	volatile int32_t t56 = -48585859;

	t56 = ((x225==x226)<(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	uint32_t x230 = 3336U;
	uint8_t x231 = 15U;
	static volatile int32_t t57 = -50170;

	t57 = ((x229==x230)<(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int16_t x235 = 410;
	uint64_t x236 = 643732LLU;
	volatile int32_t t58 = -61854;

	t58 = ((x233==x234)<(x235^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = 7;
	volatile int16_t x238 = -1;
	uint16_t x239 = 18U;
	static int32_t t59 = -22706;

	t59 = ((x237==x238)<(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint64_t x243 = 11096650641LLU;
	int8_t x244 = -1;
	int32_t t60 = 15;

	t60 = ((x241==x242)<(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x247 = -8;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -78011505;

	t61 = ((x245==x246)<(x247^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x251 = INT64_MIN;
	uint32_t x252 = 620994U;
	int32_t t62 = 0;

	t62 = ((x249==x250)<(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	static volatile int32_t x254 = INT32_MIN;
	static volatile uint16_t x255 = 2U;
	static uint8_t x256 = 1U;
	volatile int32_t t63 = 31;

	t63 = ((x253==x254)<(x255^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = -20;
	static uint32_t x259 = UINT32_MAX;
	int32_t x260 = INT32_MIN;

	t64 = ((x257==x258)<(x259^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = 0U;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -974905185;

	t65 = ((x261==x262)<(x263^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = 2;
	int8_t x268 = 1;
	int32_t t66 = -3798;

	t66 = ((x265==x266)<(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 3212725423475LL;
	uint32_t x270 = 436896U;
	static uint32_t x271 = UINT32_MAX;
	int32_t x272 = 25;
	volatile int32_t t67 = 46499678;

	t67 = ((x269==x270)<(x271^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 773916938;

	t68 = ((x273==x274)<(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -10239;
	volatile int16_t x278 = INT16_MIN;
	static volatile int64_t x279 = 5335579LL;
	int64_t x280 = -1LL;
	volatile int32_t t69 = -37982;

	t69 = ((x277==x278)<(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -1LL;
	static int8_t x283 = INT8_MIN;
	int32_t t70 = -5;

	t70 = ((x281==x282)<(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = 34;
	volatile int32_t t71 = 636346;

	t71 = ((x285==x286)<(x287^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 15U;
	int64_t x290 = -2674367354212LL;
	uint16_t x292 = 74U;
	int32_t t72 = 605477347;

	t72 = ((x289==x290)<(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MAX;
	static int64_t x295 = -5413151LL;
	int64_t x296 = -1LL;
	volatile int32_t t73 = 3057417;

	t73 = ((x293==x294)<(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	volatile int8_t x298 = -1;
	int16_t x299 = INT16_MIN;
	volatile int32_t t74 = -48812978;

	t74 = ((x297==x298)<(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x304 = INT16_MAX;
	int32_t t75 = -19;

	t75 = ((x301==x302)<(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = UINT8_MAX;
	int64_t x306 = -1194672014LL;
	volatile int32_t t76 = 313464902;

	t76 = ((x305==x306)<(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = -4375;
	static int8_t x310 = 2;
	int32_t x311 = -1;
	volatile int32_t t77 = -58;

	t77 = ((x309==x310)<(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -1;
	uint16_t x315 = 49U;
	static volatile uint64_t x316 = 12LLU;

	t78 = ((x313==x314)<(x315^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 56;
	int16_t x318 = INT16_MAX;
	static uint8_t x319 = UINT8_MAX;
	int8_t x320 = -1;

	t79 = ((x317==x318)<(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 7810;
	volatile int32_t x322 = INT32_MIN;
	static volatile uint8_t x323 = 1U;
	static int64_t x324 = INT64_MAX;
	int32_t t80 = 4725;

	t80 = ((x321==x322)<(x323^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 0U;
	volatile int8_t x326 = 0;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	int32_t t81 = -6823;

	t81 = ((x325==x326)<(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -92;
	int16_t x330 = -1;
	int32_t x331 = INT32_MAX;
	static int8_t x332 = INT8_MAX;
	static int32_t t82 = 218;

	t82 = ((x329==x330)<(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = UINT64_MAX;
	volatile int32_t x336 = 0;
	volatile int32_t t83 = -68;

	t83 = ((x333==x334)<(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	static volatile int16_t x338 = INT16_MIN;
	static int32_t x339 = -1;
	uint32_t x340 = 7212U;
	volatile int32_t t84 = 2623696;

	t84 = ((x337==x338)<(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	int16_t x342 = -19;
	volatile int64_t x343 = 32385741576LL;
	volatile int8_t x344 = 1;
	static int32_t t85 = 16;

	t85 = ((x341==x342)<(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -16833;
	uint16_t x348 = 0U;

	t86 = ((x345==x346)<(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 41LLU;
	int64_t x350 = INT64_MIN;
	int64_t x351 = -370021787LL;
	static int16_t x352 = 22;
	volatile int32_t t87 = 1;

	t87 = ((x349==x350)<(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = 1;
	int64_t x354 = 7570042701520055LL;
	volatile uint8_t x355 = UINT8_MAX;
	int32_t t88 = -2;

	t88 = ((x353==x354)<(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 59U;
	volatile int8_t x358 = INT8_MIN;
	uint32_t x359 = 911910859U;
	volatile int8_t x360 = 46;
	volatile int32_t t89 = -1051063648;

	t89 = ((x357==x358)<(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x361 = INT16_MIN;
	uint8_t x362 = UINT8_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 19358;

	t90 = ((x361==x362)<(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MAX;
	int8_t x366 = -1;
	int32_t x368 = -1;
	volatile int32_t t91 = -6;

	t91 = ((x365==x366)<(x367^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = 821498614090316515LL;
	static volatile int16_t x371 = 1;
	volatile uint16_t x372 = UINT16_MAX;
	int32_t t92 = -361759521;

	t92 = ((x369==x370)<(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = UINT16_MAX;
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = INT8_MAX;
	static volatile int32_t t93 = 1311150;

	t93 = ((x373==x374)<(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	volatile uint32_t x378 = 27U;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 34;

	t94 = ((x377==x378)<(x379^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x383 = 53U;
	int64_t x384 = INT64_MIN;

	t95 = ((x381==x382)<(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t96 = -155109800;

	t96 = ((x385==x386)<(x387^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 13883979U;
	uint16_t x390 = UINT16_MAX;
	uint16_t x391 = 307U;
	volatile int32_t t97 = -1992;

	t97 = ((x389==x390)<(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = 3U;
	static uint16_t x395 = 6U;
	static volatile int16_t x396 = INT16_MAX;

	t98 = ((x393==x394)<(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 1925U;
	uint64_t x398 = UINT64_MAX;
	int32_t t99 = 5;

	t99 = ((x397==x398)<(x399^x400));

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

