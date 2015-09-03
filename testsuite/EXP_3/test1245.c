#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
uint16_t x10 = UINT16_MAX;
uint8_t x16 = UINT8_MAX;
volatile int32_t t3 = 233652500;
uint32_t x23 = 3402U;
int64_t x24 = INT64_MIN;
static uint32_t x25 = 924109U;
static uint8_t x29 = 51U;
static int32_t x30 = -1;
int64_t x43 = -9288286516LL;
volatile uint8_t x59 = UINT8_MAX;
volatile int32_t t14 = -2261389;
uint8_t x66 = 1U;
int16_t x67 = INT16_MAX;
static int32_t t16 = 8747909;
static volatile uint8_t x69 = 1U;
uint16_t x71 = 86U;
int16_t x72 = -3183;
static volatile int32_t t18 = -15;
int64_t x81 = INT64_MIN;
static int32_t t20 = 813;
int16_t x88 = 15493;
int32_t t21 = 5692586;
uint8_t x103 = UINT8_MAX;
uint64_t x105 = 65991292LLU;
int8_t x107 = 0;
int32_t t31 = 62025;
volatile int32_t t32 = 2812;
volatile int16_t x135 = 12;
uint8_t x137 = 12U;
static volatile int8_t x138 = INT8_MAX;
int32_t t34 = -117540;
static volatile uint32_t x145 = UINT32_MAX;
int32_t x146 = 2;
int16_t x153 = INT16_MIN;
int16_t x154 = -312;
static volatile int32_t t38 = -90;
uint64_t x157 = 458356105576LLU;
static int8_t x165 = -1;
volatile int32_t t41 = -3627;
static uint64_t x170 = UINT64_MAX;
int16_t x174 = -49;
int64_t x182 = 274879961542LL;
int32_t t45 = -1;
volatile int8_t x196 = 0;
volatile int32_t t48 = 861083863;
static uint32_t x198 = 8572U;
int16_t x202 = INT16_MIN;
int32_t x206 = INT32_MIN;
volatile uint8_t x208 = UINT8_MAX;
int16_t x212 = -10079;
volatile uint32_t x217 = 11U;
volatile int8_t x218 = 4;
int32_t x224 = INT32_MIN;
int16_t x225 = INT16_MIN;
static int16_t x226 = -1;
uint8_t x231 = 36U;
static int8_t x232 = -1;
int64_t x234 = INT64_MAX;
int64_t x241 = INT64_MIN;
volatile int32_t t61 = 882685720;
uint16_t x251 = 0U;
uint16_t x252 = 2615U;
volatile uint64_t x254 = 341514078951LLU;
int8_t x260 = INT8_MAX;
static int8_t x268 = -1;
static volatile int32_t t67 = 4;
static uint16_t x274 = 1U;
static int64_t x275 = 2500328800607524105LL;
volatile int16_t x283 = INT16_MAX;
volatile int32_t t70 = 607261;
static int32_t t72 = 15;
static uint32_t x293 = UINT32_MAX;
volatile uint32_t x298 = 467U;
volatile int32_t t76 = -32978632;
static int64_t x313 = -93192896153045693LL;
volatile uint64_t x315 = 107617394775LLU;
static volatile int32_t t78 = -488906239;
volatile int16_t x319 = -1;
static uint32_t x328 = 4U;
uint32_t x331 = UINT32_MAX;
uint16_t x332 = UINT16_MAX;
int32_t t83 = 530309972;
volatile int32_t t84 = -508012405;
uint16_t x341 = 6U;
uint64_t x344 = 122915747085951LLU;
int16_t x351 = -9;
static int8_t x352 = -1;
static int32_t x353 = -1;
uint16_t x356 = UINT16_MAX;
int32_t t88 = -70240503;
static uint64_t x360 = 1066731177336667LLU;
int8_t x362 = -2;
static int16_t x363 = INT16_MAX;
int8_t x380 = -3;
int32_t x381 = -1;
static int16_t x392 = -1;
int64_t x393 = 148216LL;
static int64_t x400 = INT64_MAX;


void f0(void) {
	static volatile int32_t x2 = INT32_MIN;
	static volatile int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 0;

	t0 = ((x1%x2)<=(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2U;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = 44;
	static int64_t x8 = -482837619240LL;
	volatile int32_t t1 = -173061038;

	t1 = ((x5%x6)<=(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	int16_t x11 = -2571;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 88191;

	t2 = ((x9%x10)<=(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MAX;

	t3 = ((x13%x14)<=(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 40182500U;
	static volatile uint32_t x18 = 410U;
	int8_t x19 = -27;
	volatile uint64_t x20 = 421830793LLU;
	static volatile int32_t t4 = -36462185;

	t4 = ((x17%x18)<=(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -5;
	int64_t x22 = -1LL;
	int32_t t5 = 1;

	t5 = ((x21%x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 268808795165139885LLU;
	volatile int32_t t6 = -222001673;

	t6 = ((x25%x26)<=(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x31 = INT32_MIN;
	volatile uint8_t x32 = 107U;
	static volatile int32_t t7 = 96;

	t7 = ((x29%x30)<=(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = 19U;
	volatile uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 2963U;
	volatile int32_t t8 = -5332;

	t8 = ((x33%x34)<=(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -2159;
	static int8_t x38 = 1;
	static uint16_t x39 = 8049U;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 9;

	t9 = ((x37%x38)<=(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static volatile uint64_t x42 = 63765029369LLU;
	uint16_t x44 = 773U;
	static int32_t t10 = -5;

	t10 = ((x41%x42)<=(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int64_t x46 = -1993017561609LL;
	static uint32_t x47 = 3939U;
	int32_t x48 = 18384040;
	volatile int32_t t11 = -165;

	t11 = ((x45%x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint16_t x50 = 317U;
	static uint64_t x51 = UINT64_MAX;
	uint16_t x52 = 493U;
	static int32_t t12 = 7244;

	t12 = ((x49%x50)<=(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 53U;
	int8_t x54 = -1;
	uint8_t x55 = 0U;
	static uint64_t x56 = UINT64_MAX;
	static volatile int32_t t13 = -2125199;

	t13 = ((x53%x54)<=(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	static int8_t x58 = INT8_MAX;
	int8_t x60 = -1;

	t14 = ((x57%x58)<=(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static volatile int32_t x62 = -70222188;
	static volatile int8_t x63 = INT8_MIN;
	uint16_t x64 = 1013U;
	static volatile int32_t t15 = -178526;

	t15 = ((x61%x62)<=(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	int32_t x68 = INT32_MIN;

	t16 = ((x65%x66)<=(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = INT64_MAX;
	volatile int32_t t17 = -8;

	t17 = ((x69%x70)<=(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1125419628LL;
	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 51U;
	int64_t x76 = INT64_MIN;

	t18 = ((x73%x74)<=(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static int16_t x78 = INT16_MIN;
	uint16_t x79 = 4U;
	int32_t x80 = 4657165;
	volatile int32_t t19 = 13;

	t19 = ((x77%x78)<=(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	static int64_t x83 = 0LL;
	static volatile int32_t x84 = -66357159;

	t20 = ((x81%x82)<=(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	int16_t x86 = INT16_MAX;
	int8_t x87 = -1;

	t21 = ((x85%x86)<=(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 1508;
	int16_t x90 = INT16_MAX;
	static uint16_t x91 = 1705U;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 1;

	t22 = ((x89%x90)<=(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 2U;
	volatile uint64_t x95 = UINT64_MAX;
	volatile uint16_t x96 = 28940U;
	volatile int32_t t23 = -8167448;

	t23 = ((x93%x94)<=(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static uint64_t x98 = 1527LLU;
	static int64_t x99 = INT64_MIN;
	uint32_t x100 = 12791U;
	volatile int32_t t24 = 1007622;

	t24 = ((x97%x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	static int8_t x102 = INT8_MIN;
	int8_t x104 = INT8_MAX;
	int32_t t25 = 1;

	t25 = ((x101%x102)<=(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x106 = 15U;
	static uint32_t x108 = 386U;
	int32_t t26 = 3910;

	t26 = ((x105%x106)<=(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -128380094;
	int64_t x110 = -1117590118718607877LL;
	static int32_t x111 = INT32_MIN;
	static uint8_t x112 = 4U;
	volatile int32_t t27 = 361303723;

	t27 = ((x109%x110)<=(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	static int32_t x116 = INT32_MIN;
	int32_t t28 = 614;

	t28 = ((x113%x114)<=(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 115781;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	int8_t x120 = -1;
	static int32_t t29 = -3;

	t29 = ((x117%x118)<=(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	volatile int32_t x122 = INT32_MIN;
	int16_t x123 = -1;
	int8_t x124 = -1;
	volatile int32_t t30 = 8751533;

	t30 = ((x121%x122)<=(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 22920467776510043LLU;
	int16_t x126 = INT16_MAX;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;

	t31 = ((x125%x126)<=(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = 21;
	static uint32_t x130 = UINT32_MAX;
	volatile uint8_t x131 = UINT8_MAX;
	uint16_t x132 = UINT16_MAX;

	t32 = ((x129%x130)<=(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 12004412U;
	uint8_t x134 = UINT8_MAX;
	uint16_t x136 = 895U;
	int32_t t33 = 28796338;

	t33 = ((x133%x134)<=(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = -238097;
	static int8_t x140 = 0;

	t34 = ((x137%x138)<=(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 221399U;
	volatile int16_t x142 = INT16_MIN;
	uint16_t x143 = 7U;
	uint32_t x144 = UINT32_MAX;
	int32_t t35 = -104;

	t35 = ((x141%x142)<=(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = INT32_MIN;
	int16_t x148 = 1;
	int32_t t36 = -5215863;

	t36 = ((x145%x146)<=(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 1039222996LL;
	int8_t x150 = -11;
	static volatile int8_t x151 = -1;
	int8_t x152 = -1;
	static int32_t t37 = 1;

	t37 = ((x149%x150)<=(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x155 = UINT16_MAX;
	uint64_t x156 = 295719872LLU;

	t38 = ((x153%x154)<=(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	volatile int16_t x159 = 62;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = 1878;

	t39 = ((x157%x158)<=(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = -1;
	uint64_t x163 = 119909369244746972LLU;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = 0;

	t40 = ((x161%x162)<=(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = INT32_MAX;
	uint64_t x167 = 13LLU;
	uint32_t x168 = 530U;

	t41 = ((x165%x166)<=(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 2480U;
	int16_t x171 = INT16_MAX;
	uint32_t x172 = UINT32_MAX;
	static int32_t t42 = -217824291;

	t42 = ((x169%x170)<=(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int64_t x175 = INT64_MAX;
	static int64_t x176 = INT64_MAX;
	int32_t t43 = -322276093;

	t43 = ((x173%x174)<=(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 28242231022533LL;
	int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = 872104226006156LLU;
	int32_t t44 = 5049;

	t44 = ((x177%x178)<=(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = INT8_MIN;

	t45 = ((x181%x182)<=(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 61;
	static int32_t x186 = INT32_MIN;
	int8_t x187 = 1;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 169802;

	t46 = ((x185%x186)<=(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	static volatile int64_t x192 = 2LL;
	static volatile int32_t t47 = -12;

	t47 = ((x189%x190)<=(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -12934916;
	uint32_t x194 = 198259U;
	volatile uint8_t x195 = UINT8_MAX;

	t48 = ((x193%x194)<=(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	uint32_t x199 = UINT32_MAX;
	static int64_t x200 = -1LL;
	volatile int32_t t49 = 10249;

	t49 = ((x197%x198)<=(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 2312707188LLU;
	uint8_t x203 = 0U;
	static volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -4352200;

	t50 = ((x201%x202)<=(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile int8_t x207 = 0;
	volatile int32_t t51 = 4654005;

	t51 = ((x205%x206)<=(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = 23;
	static uint32_t x210 = UINT32_MAX;
	volatile int32_t x211 = 1936;
	int32_t t52 = 450;

	t52 = ((x209%x210)<=(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	static int8_t x215 = 0;
	uint32_t x216 = 2U;
	int32_t t53 = -8;

	t53 = ((x213%x214)<=(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x219 = INT16_MIN;
	uint64_t x220 = 120LLU;
	volatile int32_t t54 = 33791;

	t54 = ((x217%x218)<=(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	volatile int32_t t55 = 74607934;

	t55 = ((x221%x222)<=(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x227 = 159908LL;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 56759;

	t56 = ((x225%x226)<=(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 1;
	volatile int16_t x230 = INT16_MIN;
	volatile int32_t t57 = -8651621;

	t57 = ((x229%x230)<=(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	static uint64_t x235 = 49562LLU;
	uint16_t x236 = 171U;
	static int32_t t58 = 1833480;

	t58 = ((x233%x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	static int32_t x238 = 8965794;
	int8_t x239 = 2;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -420930033;

	t59 = ((x237%x238)<=(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x242 = 1U;
	volatile int64_t x243 = 8106841LL;
	volatile int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 12723;

	t60 = ((x241%x242)<=(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 7840760741LLU;
	volatile uint64_t x248 = 110485564805LLU;

	t61 = ((x245%x246)<=(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = -1LL;
	volatile int32_t t62 = -193490036;

	t62 = ((x249%x250)<=(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 53U;
	static uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 8876LLU;
	static int32_t t63 = -2364944;

	t63 = ((x253%x254)<=(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 1387LLU;
	int8_t x258 = -4;
	int8_t x259 = INT8_MIN;
	volatile int32_t t64 = -58506043;

	t64 = ((x257%x258)<=(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 5332U;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = -1;
	volatile int64_t x264 = 396590853LL;
	int32_t t65 = -3458;

	t65 = ((x261%x262)<=(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	static uint64_t x266 = 143177864004900LLU;
	int16_t x267 = INT16_MIN;
	int32_t t66 = -1538366;

	t66 = ((x265%x266)<=(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	static volatile int8_t x271 = -1;
	int8_t x272 = 34;

	t67 = ((x269%x270)<=(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 3544992384LLU;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = 858;

	t68 = ((x273%x274)<=(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 1547U;
	int64_t x278 = -14727970LL;
	int16_t x279 = INT16_MAX;
	uint16_t x280 = 1454U;
	int32_t t69 = 21;

	t69 = ((x277%x278)<=(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = -1;
	static volatile uint8_t x282 = 1U;
	static uint32_t x284 = UINT32_MAX;

	t70 = ((x281%x282)<=(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = INT8_MIN;
	volatile int8_t x287 = -1;
	uint8_t x288 = 66U;
	static volatile int32_t t71 = 1279;

	t71 = ((x285%x286)<=(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	volatile int16_t x290 = INT16_MIN;
	static int16_t x291 = INT16_MIN;
	static volatile int8_t x292 = INT8_MAX;

	t72 = ((x289%x290)<=(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x294 = 1909295582U;
	uint32_t x295 = UINT32_MAX;
	static int32_t x296 = -1;
	volatile int32_t t73 = -928966;

	t73 = ((x293%x294)<=(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x297 = 1161763LLU;
	volatile int8_t x299 = INT8_MIN;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = -754;

	t74 = ((x297%x298)<=(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = INT8_MAX;
	uint32_t x302 = 106U;
	int16_t x303 = -321;
	int16_t x304 = -1;
	int32_t t75 = -223229870;

	t75 = ((x301%x302)<=(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 15;
	int16_t x306 = INT16_MAX;
	int32_t x307 = -2487;
	static volatile int8_t x308 = INT8_MIN;

	t76 = ((x305%x306)<=(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -4159531789496978999LL;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 26516U;
	static uint16_t x312 = UINT16_MAX;
	volatile int32_t t77 = 24012;

	t77 = ((x309%x310)<=(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -1;
	static uint16_t x316 = 2298U;

	t78 = ((x313%x314)<=(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	int64_t x320 = -18625LL;
	volatile int32_t t79 = -8272472;

	t79 = ((x317%x318)<=(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static uint32_t x322 = 29112U;
	volatile uint32_t x323 = 5684U;
	int8_t x324 = -29;
	static int32_t t80 = -929413;

	t80 = ((x321%x322)<=(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 6285540064LLU;
	volatile int16_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	int32_t t81 = 1;

	t81 = ((x325%x326)<=(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -619924464;
	int16_t x330 = INT16_MAX;
	volatile int32_t t82 = -20;

	t82 = ((x329%x330)<=(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 170168899;
	static uint16_t x334 = UINT16_MAX;
	int16_t x335 = 1;
	static int64_t x336 = -1LL;

	t83 = ((x333%x334)<=(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;

	t84 = ((x337%x338)<=(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x342 = INT16_MIN;
	static volatile uint8_t x343 = 73U;
	int32_t t85 = 678;

	t85 = ((x341%x342)<=(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = INT64_MAX;
	int32_t x347 = -1;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = 78513;

	t86 = ((x345%x346)<=(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 49255;
	static int16_t x350 = INT16_MIN;
	static volatile int32_t t87 = -23315516;

	t87 = ((x349%x350)<=(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 10572195U;
	uint64_t x355 = 43003LLU;

	t88 = ((x353%x354)<=(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile int8_t x358 = 2;
	volatile uint8_t x359 = 118U;
	volatile int32_t t89 = 53;

	t89 = ((x357%x358)<=(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t90 = 5038337;

	t90 = ((x361%x362)<=(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = UINT32_MAX;
	static int64_t x366 = INT64_MAX;
	volatile uint32_t x367 = 24188U;
	static int16_t x368 = INT16_MIN;
	static int32_t t91 = 259991;

	t91 = ((x365%x366)<=(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	int16_t x370 = 15;
	int32_t x371 = -1;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -67;

	t92 = ((x369%x370)<=(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 26389646U;
	static uint64_t x374 = UINT64_MAX;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t93 = 260198;

	t93 = ((x373%x374)<=(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 978U;
	uint32_t x378 = UINT32_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	int32_t t94 = -16;

	t94 = ((x377%x378)<=(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -1;
	volatile int8_t x383 = INT8_MAX;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t95 = 65495410;

	t95 = ((x381%x382)<=(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 1294829LLU;
	volatile uint8_t x386 = 110U;
	static int64_t x387 = INT64_MAX;
	volatile int16_t x388 = INT16_MAX;
	static int32_t t96 = -3177;

	t96 = ((x385%x386)<=(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	uint32_t x390 = UINT32_MAX;
	static int8_t x391 = 1;
	int32_t t97 = -10;

	t97 = ((x389%x390)<=(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	uint16_t x395 = UINT16_MAX;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -148250;

	t98 = ((x393%x394)<=(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = 289;
	int64_t x399 = INT64_MAX;
	volatile int32_t t99 = 30440;

	t99 = ((x397%x398)<=(x399==x400));

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

