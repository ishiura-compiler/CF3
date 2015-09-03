#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile int32_t t0 = -1626687;
static int32_t x7 = 309;
volatile int8_t x8 = INT8_MIN;
int32_t t1 = -15631;
static volatile int16_t x9 = INT16_MIN;
int32_t x10 = INT32_MAX;
int32_t x13 = -28426;
int8_t x15 = -12;
int32_t x16 = INT32_MIN;
static int32_t t3 = 12953775;
int64_t x17 = INT64_MIN;
uint64_t x19 = UINT64_MAX;
volatile int8_t x29 = INT8_MIN;
static uint8_t x43 = 2U;
static int16_t x46 = -1;
volatile uint16_t x47 = 119U;
int16_t x48 = INT16_MIN;
volatile int32_t t11 = 27877;
int64_t x60 = 60691LL;
int32_t x67 = INT32_MIN;
static volatile int32_t t16 = -21500;
int64_t x71 = INT64_MIN;
static uint32_t x77 = 2006U;
static uint16_t x78 = 8U;
int8_t x90 = 19;
static int8_t x95 = INT8_MIN;
static int64_t x99 = -32750737LL;
volatile int32_t t24 = 3747643;
static uint32_t x105 = UINT32_MAX;
int64_t x107 = INT64_MIN;
uint8_t x115 = 27U;
static volatile uint16_t x120 = 9U;
static volatile int32_t t29 = -7170;
static volatile int32_t x123 = -2271;
static int32_t x134 = -1;
int64_t x136 = -1LL;
uint32_t x137 = UINT32_MAX;
int8_t x153 = INT8_MIN;
static volatile uint16_t x154 = 1006U;
static int8_t x160 = -1;
static volatile int32_t t39 = 94;
static volatile uint64_t x166 = 886236050737804160LLU;
uint16_t x169 = 32U;
int32_t t43 = 28800;
int32_t x180 = -121;
int64_t x184 = -1169874LL;
static volatile int32_t t45 = -4397;
int8_t x188 = INT8_MAX;
int32_t t46 = -916597701;
volatile int64_t x195 = INT64_MIN;
uint64_t x197 = 83739268041353LLU;
static int64_t x200 = INT64_MAX;
int64_t x203 = 50798LL;
int16_t x205 = INT16_MIN;
static int32_t x207 = INT32_MAX;
uint8_t x209 = UINT8_MAX;
int8_t x213 = 9;
int8_t x221 = 16;
volatile uint16_t x223 = 2039U;
int32_t t56 = 339901;
static int16_t x231 = -26;
int16_t x235 = INT16_MIN;
int16_t x238 = -1;
int64_t x240 = 17484908246LL;
volatile int32_t t61 = -2569;
int32_t t63 = -1;
uint64_t x260 = 133832LLU;
uint64_t x264 = UINT64_MAX;
uint32_t x266 = UINT32_MAX;
static int32_t x267 = INT32_MAX;
volatile uint8_t x269 = 0U;
uint64_t x270 = 88151754LLU;
volatile int16_t x271 = 1;
static int32_t t67 = 1;
int8_t x282 = 5;
int64_t x285 = INT64_MAX;
static volatile int8_t x297 = -1;
int32_t t74 = 12;
int8_t x301 = INT8_MAX;
volatile int32_t t75 = -582609;
int16_t x305 = INT16_MIN;
volatile int8_t x309 = -33;
int32_t t77 = -769;
uint32_t x323 = 14231U;
volatile int8_t x326 = INT8_MIN;
int32_t x331 = -1;
static uint8_t x332 = 5U;
int32_t x337 = INT32_MAX;
volatile int64_t x338 = -98001372211756300LL;
int32_t t84 = 763609;
uint16_t x351 = UINT16_MAX;
int16_t x353 = INT16_MIN;
uint32_t x355 = UINT32_MAX;
int64_t x359 = INT64_MAX;
int64_t x360 = -2006559501LL;
volatile int32_t t89 = -42;
int8_t x365 = -1;
uint64_t x371 = 426788774867665322LLU;
int8_t x380 = 6;
volatile int32_t x384 = -545;
int8_t x386 = -6;
int32_t x393 = -1;
static int16_t x401 = INT16_MAX;
int32_t t99 = 486;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MIN;

	t0 = ((x1==x2)<(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int64_t x6 = INT64_MAX;

	t1 = ((x5==x6)<(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = INT64_MAX;
	int8_t x12 = -4;
	static int32_t t2 = 962054;

	t2 = ((x9==x10)<(x11%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;

	t3 = ((x13==x14)<(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -54;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 152608;

	t4 = ((x17==x18)<(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 24019;
	volatile uint64_t x22 = 115660LLU;
	uint32_t x23 = 235005056U;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 25488302;

	t5 = ((x21==x22)<(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = 94984854897497LLU;
	int16_t x26 = 0;
	volatile int64_t x27 = 3313438328033354889LL;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 3760;

	t6 = ((x25==x26)<(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 3395U;
	static int32_t x31 = -1;
	uint64_t x32 = 43000005478LLU;
	volatile int32_t t7 = -1718;

	t7 = ((x29==x30)<(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = 30U;
	volatile int64_t x34 = INT64_MAX;
	uint32_t x35 = 290995U;
	int16_t x36 = -1;
	int32_t t8 = 24;

	t8 = ((x33==x34)<(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int32_t x38 = -1406652;
	volatile int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = 2U;
	volatile int32_t t9 = -7;

	t9 = ((x37==x38)<(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = 4791337;

	t10 = ((x41==x42)<(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;

	t11 = ((x45==x46)<(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -40;
	int32_t x50 = 685;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MAX;
	static int32_t t12 = -238495168;

	t12 = ((x49==x50)<(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static volatile int8_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -53317;

	t13 = ((x53==x54)<(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint16_t x58 = UINT16_MAX;
	int32_t x59 = INT32_MAX;
	volatile int32_t t14 = -16146136;

	t14 = ((x57==x58)<(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 0;
	static int8_t x62 = INT8_MIN;
	int32_t x63 = -9;
	uint8_t x64 = 15U;
	volatile int32_t t15 = 7;

	t15 = ((x61==x62)<(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -250LL;
	int32_t x66 = INT32_MAX;
	static uint16_t x68 = 6U;

	t16 = ((x65==x66)<(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 10U;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 818567;

	t17 = ((x69==x70)<(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 30U;
	static int8_t x74 = INT8_MIN;
	static int64_t x75 = INT64_MAX;
	uint8_t x76 = 125U;
	volatile int32_t t18 = 9;

	t18 = ((x73==x74)<(x75%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = INT32_MIN;
	static uint16_t x80 = 3U;
	volatile int32_t t19 = 9429558;

	t19 = ((x77==x78)<(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int8_t x82 = INT8_MIN;
	uint64_t x83 = 2791047LLU;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -187331;

	t20 = ((x81==x82)<(x83%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = UINT32_MAX;
	static uint32_t x86 = 15685U;
	uint16_t x87 = 108U;
	int8_t x88 = -33;
	int32_t t21 = 2;

	t21 = ((x85==x86)<(x87%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int32_t x91 = -1;
	uint32_t x92 = 3410333U;
	int32_t t22 = -434;

	t22 = ((x89==x90)<(x91%x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = 281;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 2740;

	t23 = ((x93==x94)<(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile int8_t x98 = 1;
	uint64_t x100 = UINT64_MAX;

	t24 = ((x97==x98)<(x99%x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	uint32_t x102 = 890203U;
	int32_t x103 = INT32_MIN;
	volatile uint32_t x104 = 12U;
	volatile int32_t t25 = -870;

	t25 = ((x101==x102)<(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = 1LLU;
	volatile int16_t x108 = INT16_MAX;
	int32_t t26 = 1743;

	t26 = ((x105==x106)<(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -617103244004275719LL;
	int8_t x110 = -4;
	int32_t x111 = INT32_MAX;
	static uint8_t x112 = 10U;
	volatile int32_t t27 = -13;

	t27 = ((x109==x110)<(x111%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -3841504710LL;
	int8_t x114 = INT8_MIN;
	volatile int16_t x116 = -367;
	static volatile int32_t t28 = -4160;

	t28 = ((x113==x114)<(x115%x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MIN;
	volatile int8_t x119 = INT8_MIN;

	t29 = ((x117==x118)<(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -105;
	int32_t x122 = 262211219;
	static int32_t x124 = -1;
	int32_t t30 = -786;

	t30 = ((x121==x122)<(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -40385;
	static uint8_t x126 = 2U;
	static int32_t x127 = INT32_MAX;
	uint32_t x128 = UINT32_MAX;
	int32_t t31 = -19;

	t31 = ((x125==x126)<(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int64_t x130 = -2612138572674802404LL;
	int64_t x131 = 254LL;
	int32_t x132 = -3724;
	int32_t t32 = -1240;

	t32 = ((x129==x130)<(x131%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 30;
	static int8_t x135 = INT8_MIN;
	int32_t t33 = 7497837;

	t33 = ((x133==x134)<(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x138 = -31;
	static int64_t x139 = INT64_MIN;
	int8_t x140 = -22;
	volatile int32_t t34 = 0;

	t34 = ((x137==x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x142 = -1LL;
	volatile int8_t x143 = -30;
	int64_t x144 = INT64_MIN;
	static int32_t t35 = -22478;

	t35 = ((x141==x142)<(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -135457;

	t36 = ((x145==x146)<(x147%x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 0U;
	static int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	uint64_t x152 = UINT64_MAX;
	static int32_t t37 = 1643;

	t37 = ((x149==x150)<(x151%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x155 = INT64_MIN;
	static int16_t x156 = -1;
	int32_t t38 = 268;

	t38 = ((x153==x154)<(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int64_t x158 = INT64_MIN;
	uint32_t x159 = 15U;

	t39 = ((x157==x158)<(x159%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = 333933917LLU;
	uint32_t x162 = 264031601U;
	uint64_t x163 = UINT64_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	static int32_t t40 = -240800;

	t40 = ((x161==x162)<(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int32_t x167 = -1;
	int64_t x168 = 786064LL;
	volatile int32_t t41 = -3016551;

	t41 = ((x165==x166)<(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 5455948273960LLU;
	volatile int64_t x172 = 3215921317726035LL;
	int32_t t42 = 9313;

	t42 = ((x169==x170)<(x171%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 1U;
	static volatile int16_t x174 = INT16_MIN;
	uint8_t x175 = 2U;
	int64_t x176 = -1LL;

	t43 = ((x173==x174)<(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 529;
	int8_t x178 = INT8_MIN;
	static uint64_t x179 = 13048LLU;
	int32_t t44 = -8573;

	t44 = ((x177==x178)<(x179%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 2379U;
	static int16_t x182 = -1;
	int64_t x183 = -100507155039LL;

	t45 = ((x181==x182)<(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	static int16_t x186 = INT16_MAX;
	static int16_t x187 = INT16_MIN;

	t46 = ((x185==x186)<(x187%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x190 = 61020LLU;
	uint32_t x191 = UINT32_MAX;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -1;

	t47 = ((x189==x190)<(x191%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static int16_t x194 = INT16_MIN;
	int8_t x196 = 40;
	volatile int32_t t48 = 3694873;

	t48 = ((x193==x194)<(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x198 = 6976U;
	static int8_t x199 = -28;
	int32_t t49 = 104016291;

	t49 = ((x197==x198)<(x199%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	int8_t x204 = INT8_MIN;
	static int32_t t50 = -7;

	t50 = ((x201==x202)<(x203%x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x206 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 13594273;

	t51 = ((x205==x206)<(x207%x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x210 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	static uint16_t x212 = 8U;
	volatile int32_t t52 = -679415;

	t52 = ((x209==x210)<(x211%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = UINT16_MAX;
	static volatile int64_t x215 = INT64_MIN;
	int64_t x216 = 494753LL;
	int32_t t53 = -34;

	t53 = ((x213==x214)<(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 405210LLU;
	int8_t x218 = INT8_MAX;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -2524281;

	t54 = ((x217==x218)<(x219%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = 4;

	t55 = ((x221==x222)<(x223%x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = UINT32_MAX;
	static int32_t x226 = 89012;
	int64_t x227 = -1LL;
	volatile int32_t x228 = INT32_MAX;

	t56 = ((x225==x226)<(x227%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -15LL;
	uint8_t x230 = UINT8_MAX;
	int16_t x232 = -10462;
	int32_t t57 = 9;

	t57 = ((x229==x230)<(x231%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	int8_t x236 = -2;
	volatile int32_t t58 = 907;

	t58 = ((x233==x234)<(x235%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 5573;
	int64_t x239 = -1LL;
	volatile int32_t t59 = -2869134;

	t59 = ((x237==x238)<(x239%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 7U;
	uint16_t x242 = 31U;
	uint16_t x243 = UINT16_MAX;
	static volatile uint32_t x244 = UINT32_MAX;
	int32_t t60 = -10709;

	t60 = ((x241==x242)<(x243%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	uint16_t x246 = 1U;
	volatile int32_t x247 = -45705653;
	static uint16_t x248 = 344U;

	t61 = ((x245==x246)<(x247%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	static int64_t x250 = 486740564720LL;
	volatile int64_t x251 = -1LL;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -590519113;

	t62 = ((x249==x250)<(x251%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	volatile int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 402931245U;

	t63 = ((x253==x254)<(x255%x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 68U;
	int8_t x258 = INT8_MAX;
	int8_t x259 = 3;
	volatile int32_t t64 = 2112;

	t64 = ((x257==x258)<(x259%x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t t65 = 7;

	t65 = ((x261==x262)<(x263%x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 36U;
	uint8_t x268 = 5U;
	int32_t t66 = -2723;

	t66 = ((x265==x266)<(x267%x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x272 = 15802;

	t67 = ((x269==x270)<(x271%x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 3913U;
	int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MAX;
	static volatile int32_t t68 = -957;

	t68 = ((x273==x274)<(x275%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 1U;
	int32_t x278 = 1039915;
	volatile int64_t x279 = -30928274LL;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -724913997;

	t69 = ((x277==x278)<(x279%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -3;
	int64_t x283 = 79718330402674LL;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 19;

	t70 = ((x281==x282)<(x283%x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = -441907452;
	static volatile int16_t x287 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;
	static volatile int32_t t71 = 31208;

	t71 = ((x285==x286)<(x287%x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = 77;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = 1633;
	int16_t x292 = -1;
	int32_t t72 = 796540280;

	t72 = ((x289==x290)<(x291%x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 2;
	int8_t x294 = -1;
	volatile uint8_t x295 = UINT8_MAX;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = 8059072;

	t73 = ((x293==x294)<(x295%x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -1LL;
	volatile int16_t x299 = -1;
	static int16_t x300 = INT16_MAX;

	t74 = ((x297==x298)<(x299%x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MAX;
	uint16_t x303 = 11U;
	uint32_t x304 = UINT32_MAX;

	t75 = ((x301==x302)<(x303%x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	volatile int16_t x307 = 44;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 4011690;

	t76 = ((x305==x306)<(x307%x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	uint8_t x311 = 0U;
	uint64_t x312 = 381944998523331785LLU;

	t77 = ((x309==x310)<(x311%x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x314 = -13;
	uint32_t x315 = 4786163U;
	int32_t x316 = -1;
	volatile int32_t t78 = -26709;

	t78 = ((x313==x314)<(x315%x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint64_t x318 = 901928927318449055LLU;
	static volatile uint16_t x319 = 4080U;
	volatile int16_t x320 = -1;
	volatile int32_t t79 = 40714;

	t79 = ((x317==x318)<(x319%x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 242U;
	static int32_t x322 = INT32_MIN;
	uint8_t x324 = 79U;
	volatile int32_t t80 = 631405311;

	t80 = ((x321==x322)<(x323%x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static uint16_t x327 = 118U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -1;

	t81 = ((x325==x326)<(x327%x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = 48188LL;
	int32_t x330 = INT32_MAX;
	volatile int32_t t82 = -651;

	t82 = ((x329==x330)<(x331%x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int16_t x334 = -1;
	uint32_t x335 = 1665U;
	volatile int32_t x336 = -413;
	volatile int32_t t83 = -366552883;

	t83 = ((x333==x334)<(x335%x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x339 = -1417;
	uint64_t x340 = 3532620LLU;

	t84 = ((x337==x338)<(x339%x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 40U;
	int64_t x342 = INT64_MIN;
	int64_t x343 = -1LL;
	volatile int32_t x344 = INT32_MAX;
	int32_t t85 = 25;

	t85 = ((x341==x342)<(x343%x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x349 = INT8_MAX;
	int32_t x350 = 98;
	static int64_t x352 = -1LL;
	static volatile int32_t t86 = -28927651;

	t86 = ((x349==x350)<(x351%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x354 = UINT64_MAX;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t87 = -13;

	t87 = ((x353==x354)<(x355%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x357 = INT8_MAX;
	int32_t x358 = 3;
	int32_t t88 = 262;

	t88 = ((x357==x358)<(x359%x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x361 = 183;
	uint64_t x362 = 2536654769187378LLU;
	int16_t x363 = -258;
	int16_t x364 = -1;

	t89 = ((x361==x362)<(x363%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x366 = INT64_MAX;
	volatile int32_t x367 = INT32_MAX;
	volatile int16_t x368 = INT16_MIN;
	int32_t t90 = -14329;

	t90 = ((x365==x366)<(x367%x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = 7856;
	static volatile int8_t x370 = -1;
	int64_t x372 = 10774LL;
	volatile int32_t t91 = 1046158956;

	t91 = ((x369==x370)<(x371%x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = 67U;
	static uint64_t x374 = UINT64_MAX;
	uint8_t x375 = 29U;
	int64_t x376 = -956675678271118456LL;
	volatile int32_t t92 = 70297081;

	t92 = ((x373==x374)<(x375%x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x377 = INT8_MAX;
	int16_t x378 = 8571;
	uint8_t x379 = 45U;
	int32_t t93 = 37194347;

	t93 = ((x377==x378)<(x379%x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x381 = 2U;
	int16_t x382 = INT16_MIN;
	static int8_t x383 = -1;
	int32_t t94 = 457;

	t94 = ((x381==x382)<(x383%x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x385 = INT64_MIN;
	int64_t x387 = -139861LL;
	volatile int64_t x388 = INT64_MAX;
	volatile int32_t t95 = 107314;

	t95 = ((x385==x386)<(x387%x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MIN;
	volatile int32_t x392 = INT32_MIN;
	static int32_t t96 = 526753090;

	t96 = ((x389==x390)<(x391%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x394 = INT64_MIN;
	int8_t x395 = 50;
	int8_t x396 = -14;
	volatile int32_t t97 = 55639810;

	t97 = ((x393==x394)<(x395%x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = -1;
	volatile int8_t x398 = INT8_MIN;
	uint16_t x399 = 5721U;
	int64_t x400 = INT64_MIN;
	int32_t t98 = 12852;

	t98 = ((x397==x398)<(x399%x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = -1;
	uint8_t x404 = UINT8_MAX;

	t99 = ((x401==x402)<(x403%x404));

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

