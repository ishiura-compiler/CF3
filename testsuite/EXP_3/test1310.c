#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
static int32_t x5 = INT32_MIN;
uint32_t x7 = 38798828U;
uint64_t x10 = 52385954LLU;
int8_t x11 = INT8_MAX;
int8_t x12 = INT8_MIN;
int32_t t3 = 2335075;
uint64_t x20 = 284053154475LLU;
int32_t x25 = INT32_MIN;
int8_t x26 = INT8_MAX;
volatile int8_t x30 = INT8_MAX;
int32_t t9 = 95023;
volatile uint8_t x43 = UINT8_MAX;
static volatile int32_t t11 = 522362987;
static int32_t t12 = -7982;
int64_t x53 = -1LL;
int64_t x56 = -722646836LL;
static volatile int8_t x65 = INT8_MIN;
uint16_t x74 = 3637U;
int32_t x78 = INT32_MIN;
int8_t x79 = 23;
volatile int64_t x81 = -1LL;
int32_t t21 = -1;
uint16_t x90 = 199U;
volatile uint64_t x91 = UINT64_MAX;
int8_t x92 = -3;
uint32_t x96 = 98188750U;
volatile uint16_t x98 = UINT16_MAX;
static uint16_t x100 = 18U;
volatile int32_t t24 = -1;
volatile uint16_t x105 = 27U;
int32_t t30 = -347486;
int64_t x126 = INT64_MIN;
int32_t x131 = -1;
static volatile int32_t t32 = 74172691;
uint32_t x133 = UINT32_MAX;
uint16_t x135 = 27385U;
int64_t x143 = -1LL;
int8_t x146 = 0;
int32_t x150 = INT32_MIN;
static int32_t x152 = 109;
uint16_t x153 = UINT16_MAX;
uint64_t x154 = 69144416827537LLU;
int32_t x155 = INT32_MIN;
static int8_t x160 = -1;
volatile int32_t t39 = 45149146;
static volatile uint64_t x163 = UINT64_MAX;
uint32_t x164 = 81298150U;
static int32_t t40 = 1;
int32_t x168 = -1;
int32_t t41 = 14;
uint64_t x176 = UINT64_MAX;
volatile int32_t t46 = -41694746;
volatile int64_t x206 = INT64_MAX;
int64_t x211 = 695659165344214687LL;
uint32_t x212 = 5897U;
int32_t t52 = 29013219;
volatile int32_t t53 = 1;
int32_t x220 = INT32_MIN;
static uint64_t x224 = 37408809968LLU;
static int16_t x238 = -1;
volatile uint8_t x241 = UINT8_MAX;
int16_t x245 = INT16_MIN;
static uint8_t x249 = UINT8_MAX;
static uint32_t x254 = UINT32_MAX;
uint8_t x256 = UINT8_MAX;
int16_t x259 = INT16_MIN;
volatile int64_t x261 = INT64_MIN;
int32_t x265 = INT32_MAX;
int32_t x272 = 1;
int8_t x275 = -16;
static uint32_t x287 = 756U;
static int16_t x290 = 676;
int32_t t72 = 2;
int16_t x293 = INT16_MIN;
volatile int16_t x299 = -1;
uint64_t x300 = 47485942861LLU;
int8_t x310 = INT8_MIN;
uint64_t x314 = 25945044917095LLU;
static volatile int32_t t78 = -6325;
static int16_t x319 = -1;
static uint16_t x323 = 14699U;
static volatile int64_t x337 = INT64_MIN;
int64_t x339 = 15LL;
int8_t x350 = 0;
int16_t x353 = INT16_MIN;
int64_t x358 = -3432927572867735889LL;
static volatile int32_t t91 = 210;
int16_t x369 = -1;
uint32_t x371 = 17446U;
static int64_t x377 = -1LL;
int64_t x379 = INT64_MIN;
uint8_t x381 = 64U;
volatile int64_t x393 = INT64_MIN;
int32_t t98 = -214607;
int8_t x397 = INT8_MIN;


void f0(void) {
	volatile int64_t x2 = 65566567606391572LL;
	volatile int64_t x3 = INT64_MIN;
	static uint8_t x4 = 3U;
	volatile int32_t t0 = -82;

	t0 = ((x1<=x2)<=(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = UINT8_MAX;
	int16_t x8 = 1;
	volatile int32_t t1 = 854431165;

	t1 = ((x5<=x6)<=(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static volatile int32_t t2 = -34991066;

	t2 = ((x9<=x10)<=(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = -3;
	volatile int64_t x14 = -13864931749744995LL;
	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MAX;

	t3 = ((x13<=x14)<=(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -6;
	int64_t x18 = 386986LL;
	int64_t x19 = INT64_MIN;
	static volatile int32_t t4 = 396376934;

	t4 = ((x17<=x18)<=(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static volatile int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MAX;
	static volatile uint8_t x24 = 0U;
	int32_t t5 = -99;

	t5 = ((x21<=x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = 3078LL;
	static uint32_t x28 = UINT32_MAX;
	static volatile int32_t t6 = -2402486;

	t6 = ((x25<=x26)<=(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 2U;
	static int32_t x31 = 26;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 2640440;

	t7 = ((x29<=x30)<=(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 33551301LL;
	uint32_t x34 = UINT32_MAX;
	uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 102U;
	int32_t t8 = 6840359;

	t8 = ((x33<=x34)<=(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	volatile uint8_t x38 = UINT8_MAX;
	int16_t x39 = 6334;
	uint64_t x40 = 26213135026LLU;

	t9 = ((x37<=x38)<=(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 1U;
	int64_t x42 = INT64_MIN;
	static uint16_t x44 = 2U;
	volatile int32_t t10 = -28113674;

	t10 = ((x41<=x42)<=(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -6985537830713LL;
	uint64_t x46 = 7LLU;
	static int8_t x47 = 1;
	uint8_t x48 = 0U;

	t11 = ((x45<=x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 16289LL;
	int8_t x50 = INT8_MAX;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = INT64_MIN;

	t12 = ((x49<=x50)<=(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	int16_t x55 = -1;
	static volatile int32_t t13 = -43676;

	t13 = ((x53<=x54)<=(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 18174750561507LLU;
	int32_t x58 = INT32_MIN;
	static volatile int8_t x59 = INT8_MAX;
	int32_t x60 = -300;
	int32_t t14 = -16091752;

	t14 = ((x57<=x58)<=(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -13494292690979231LL;
	int64_t x62 = -1LL;
	int64_t x63 = INT64_MIN;
	int8_t x64 = -1;
	int32_t t15 = -175;

	t15 = ((x61<=x62)<=(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	uint16_t x67 = 3137U;
	uint32_t x68 = UINT32_MAX;
	int32_t t16 = -160095770;

	t16 = ((x65<=x66)<=(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 0U;
	volatile int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	int16_t x72 = -1;
	volatile int32_t t17 = -2341634;

	t17 = ((x69<=x70)<=(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 71U;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = 9;
	volatile int32_t t18 = 434937169;

	t18 = ((x73<=x74)<=(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static int16_t x80 = 6;
	int32_t t19 = -62356;

	t19 = ((x77<=x78)<=(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MAX;
	static int16_t x84 = INT16_MIN;
	static int32_t t20 = -3;

	t20 = ((x81<=x82)<=(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 5;
	uint32_t x86 = 162262127U;
	volatile int8_t x87 = 1;
	uint64_t x88 = 122519386432855LLU;

	t21 = ((x85<=x86)<=(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 3418092147916LL;
	volatile int32_t t22 = 360;

	t22 = ((x89<=x90)<=(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 1U;
	volatile int8_t x94 = -58;
	static int8_t x95 = 7;
	static int32_t t23 = -380953;

	t23 = ((x93<=x94)<=(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static uint16_t x99 = UINT16_MAX;

	t24 = ((x97<=x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 20;
	volatile int16_t x102 = -1;
	static int32_t x103 = -1;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -1865163;

	t25 = ((x101<=x102)<=(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = INT16_MAX;
	int16_t x107 = 2932;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -18;

	t26 = ((x105<=x106)<=(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	uint32_t x110 = UINT32_MAX;
	static uint32_t x111 = 109940U;
	int8_t x112 = INT8_MAX;
	int32_t t27 = 7;

	t27 = ((x109<=x110)<=(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 30;
	volatile int64_t x114 = INT64_MIN;
	static int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	int32_t t28 = 378462051;

	t28 = ((x113<=x114)<=(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -1;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -13;
	static int8_t x120 = INT8_MAX;
	volatile int32_t t29 = -24720;

	t29 = ((x117<=x118)<=(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile uint64_t x122 = 3099288511679LLU;
	volatile uint8_t x123 = 4U;
	int32_t x124 = INT32_MIN;

	t30 = ((x121<=x122)<=(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MAX;
	int32_t t31 = -371444223;

	t31 = ((x125<=x126)<=(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	uint16_t x130 = 20993U;
	int64_t x132 = -1LL;

	t32 = ((x129<=x130)<=(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = 367;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = -332959;

	t33 = ((x133<=x134)<=(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 1;
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 0;

	t34 = ((x137<=x138)<=(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 41313U;
	int8_t x142 = -2;
	uint64_t x144 = 333942021281LLU;
	static int32_t t35 = -3690;

	t35 = ((x141<=x142)<=(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 871;
	int32_t x147 = INT32_MIN;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 656404618;

	t36 = ((x145<=x146)<=(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	uint64_t x151 = 45038835429LLU;
	volatile int32_t t37 = 2;

	t37 = ((x149<=x150)<=(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x156 = INT64_MAX;
	int32_t t38 = 36;

	t38 = ((x153<=x154)<=(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	static int32_t x158 = INT32_MAX;
	int64_t x159 = INT64_MIN;

	t39 = ((x157<=x158)<=(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 222U;
	int32_t x162 = INT32_MIN;

	t40 = ((x161<=x162)<=(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 58U;
	int32_t x166 = -1;
	static volatile int32_t x167 = 11487;

	t41 = ((x165<=x166)<=(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -16;
	int64_t x170 = 16632314790963429LL;
	int16_t x171 = INT16_MAX;
	int16_t x172 = 2130;
	int32_t t42 = -10;

	t42 = ((x169<=x170)<=(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -1;
	static int32_t x174 = INT32_MAX;
	volatile uint16_t x175 = 4990U;
	int32_t t43 = -532957555;

	t43 = ((x173<=x174)<=(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = INT32_MIN;
	int32_t x178 = -6662;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = -1;
	static int32_t t44 = 1;

	t44 = ((x177<=x178)<=(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -1;
	volatile int64_t x182 = INT64_MIN;
	volatile int32_t x183 = -2868;
	static volatile int8_t x184 = 0;
	int32_t t45 = 50;

	t45 = ((x181<=x182)<=(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	uint64_t x186 = 33538447215566560LLU;
	int16_t x187 = -5459;
	static uint16_t x188 = UINT16_MAX;

	t46 = ((x185<=x186)<=(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 3U;
	int8_t x190 = INT8_MIN;
	int8_t x191 = 0;
	int16_t x192 = -1;
	int32_t t47 = 301480;

	t47 = ((x189<=x190)<=(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 141U;
	int32_t x194 = INT32_MIN;
	uint8_t x195 = UINT8_MAX;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -71525846;

	t48 = ((x193<=x194)<=(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 105177U;
	uint16_t x198 = 62U;
	static volatile int16_t x199 = -330;
	volatile int8_t x200 = 48;
	static int32_t t49 = 1907;

	t49 = ((x197<=x198)<=(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	static volatile int64_t x204 = -1LL;
	volatile int32_t t50 = -168157921;

	t50 = ((x201<=x202)<=(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = 1U;
	int32_t t51 = 58561382;

	t51 = ((x205<=x206)<=(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MAX;

	t52 = ((x209<=x210)<=(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 0U;
	volatile int8_t x214 = -11;
	uint8_t x215 = 0U;
	volatile uint16_t x216 = UINT16_MAX;

	t53 = ((x213<=x214)<=(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static uint8_t x218 = 14U;
	int32_t x219 = INT32_MIN;
	static int32_t t54 = -19707;

	t54 = ((x217<=x218)<=(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static uint8_t x222 = 2U;
	int16_t x223 = INT16_MIN;
	int32_t t55 = 145072510;

	t55 = ((x221<=x222)<=(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 1989U;
	int8_t x226 = 58;
	static int64_t x227 = -1289LL;
	static int16_t x228 = INT16_MAX;
	int32_t t56 = -5;

	t56 = ((x225<=x226)<=(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = INT64_MAX;
	int32_t x231 = -1;
	int8_t x232 = -2;
	int32_t t57 = -347;

	t57 = ((x229<=x230)<=(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	volatile int32_t x234 = -133301156;
	uint16_t x235 = UINT16_MAX;
	static uint16_t x236 = 1080U;
	volatile int32_t t58 = -15554;

	t58 = ((x233<=x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 7686202LLU;
	int16_t x239 = 1032;
	int16_t x240 = -14;
	int32_t t59 = 19526;

	t59 = ((x237<=x238)<=(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = 41156091154LL;
	int16_t x243 = 1;
	int64_t x244 = INT64_MAX;
	volatile int32_t t60 = 69266;

	t60 = ((x241<=x242)<=(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x246 = INT16_MIN;
	uint16_t x247 = UINT16_MAX;
	uint16_t x248 = 36U;
	int32_t t61 = -35340030;

	t61 = ((x245<=x246)<=(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MAX;
	uint8_t x251 = UINT8_MAX;
	static int16_t x252 = INT16_MIN;
	int32_t t62 = -1;

	t62 = ((x249<=x250)<=(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -219348LL;
	static int64_t x255 = -25496444974250LL;
	volatile int32_t t63 = -8;

	t63 = ((x253<=x254)<=(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -29651LL;
	volatile int64_t x258 = INT64_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -13899;

	t64 = ((x257<=x258)<=(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 4U;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = UINT32_MAX;
	static int32_t t65 = -1;

	t65 = ((x261<=x262)<=(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -1;
	static int64_t x267 = -772030902127990296LL;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -62630793;

	t66 = ((x265<=x266)<=(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -11202;
	int32_t x270 = INT32_MIN;
	static volatile int8_t x271 = INT8_MIN;
	volatile int32_t t67 = -116;

	t67 = ((x269<=x270)<=(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	volatile int8_t x274 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	static int32_t t68 = -20072799;

	t68 = ((x273<=x274)<=(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int64_t x278 = 14LL;
	int64_t x279 = -33288257308204LL;
	static uint16_t x280 = UINT16_MAX;
	static volatile int32_t t69 = -5;

	t69 = ((x277<=x278)<=(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x282 = -1;
	int32_t x283 = -1;
	uint64_t x284 = 2486746116343225LLU;
	int32_t t70 = 28658765;

	t70 = ((x281<=x282)<=(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	static int8_t x286 = 0;
	uint16_t x288 = 4U;
	int32_t t71 = 195592;

	t71 = ((x285<=x286)<=(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 6033U;
	uint32_t x291 = 37123952U;
	int16_t x292 = INT16_MIN;

	t72 = ((x289<=x290)<=(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = 9095113661258LL;
	int32_t x295 = 24344;
	int32_t x296 = -378284;
	int32_t t73 = -11334876;

	t73 = ((x293<=x294)<=(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 11;
	uint8_t x298 = 116U;
	int32_t t74 = -207;

	t74 = ((x297<=x298)<=(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = 41346459;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	uint64_t x304 = 3859907505043928857LLU;
	int32_t t75 = -195;

	t75 = ((x301<=x302)<=(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 27U;
	int16_t x306 = -1;
	int8_t x307 = -13;
	static int32_t x308 = -63;
	int32_t t76 = -574665;

	t76 = ((x305<=x306)<=(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	uint16_t x311 = 2903U;
	int8_t x312 = -1;
	volatile int32_t t77 = -22952;

	t77 = ((x309<=x310)<=(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint16_t x315 = 237U;
	uint32_t x316 = 15243U;

	t78 = ((x313<=x314)<=(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 8686U;
	uint16_t x318 = 3887U;
	static uint64_t x320 = 5383029971005035LLU;
	int32_t t79 = -37603;

	t79 = ((x317<=x318)<=(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int64_t x322 = -1LL;
	int32_t x324 = -1;
	int32_t t80 = -491873;

	t80 = ((x321<=x322)<=(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 4U;
	int32_t x328 = 5;
	volatile int32_t t81 = -9974;

	t81 = ((x325<=x326)<=(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int8_t x330 = -1;
	uint64_t x331 = 132768LLU;
	static uint8_t x332 = UINT8_MAX;
	int32_t t82 = -117491;

	t82 = ((x329<=x330)<=(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	static int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = 123920375U;
	int32_t t83 = -9;

	t83 = ((x333<=x334)<=(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = -22;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 22391644;

	t84 = ((x337<=x338)<=(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x342 = -417638037;
	int8_t x343 = 2;
	int64_t x344 = 5858785926185145LL;
	int32_t t85 = 3895112;

	t85 = ((x341<=x342)<=(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = -8;
	static volatile int64_t x347 = INT64_MAX;
	uint32_t x348 = 92871U;
	int32_t t86 = 55;

	t86 = ((x345<=x346)<=(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int16_t x351 = -1;
	int16_t x352 = -1;
	volatile int32_t t87 = -231894860;

	t87 = ((x349<=x350)<=(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t88 = 0;

	t88 = ((x353<=x354)<=(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -767;
	int32_t x359 = -56;
	uint16_t x360 = 315U;
	int32_t t89 = -77812425;

	t89 = ((x357<=x358)<=(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -339;
	int16_t x362 = 1;
	volatile int16_t x363 = -873;
	int16_t x364 = -54;
	volatile int32_t t90 = -351;

	t90 = ((x361<=x362)<=(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = 17404585LLU;
	uint16_t x367 = 1674U;
	uint16_t x368 = UINT16_MAX;

	t91 = ((x365<=x366)<=(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = 162;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t92 = 3248;

	t92 = ((x369<=x370)<=(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -5389;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	int32_t t93 = 13528;

	t93 = ((x373<=x374)<=(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 1U;
	uint8_t x380 = 84U;
	volatile int32_t t94 = -3;

	t94 = ((x377<=x378)<=(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x382 = INT8_MIN;
	uint32_t x383 = 15U;
	int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 1;

	t95 = ((x381<=x382)<=(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x385 = -1LL;
	static int16_t x386 = INT16_MAX;
	static int64_t x387 = INT64_MIN;
	static int64_t x388 = INT64_MIN;
	int32_t t96 = 258887;

	t96 = ((x385<=x386)<=(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int8_t x390 = INT8_MIN;
	volatile int8_t x391 = INT8_MIN;
	uint16_t x392 = 97U;
	static int32_t t97 = 58488058;

	t97 = ((x389<=x390)<=(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 162430660794491575LLU;
	uint16_t x396 = 91U;

	t98 = ((x393<=x394)<=(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = -1;
	volatile uint8_t x399 = 57U;
	int64_t x400 = -25005LL;
	int32_t t99 = 14629;

	t99 = ((x397<=x398)<=(x399==x400));

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

