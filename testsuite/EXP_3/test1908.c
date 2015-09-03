#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 56U;
int8_t x4 = INT8_MIN;
volatile int32_t t1 = -1;
uint16_t x10 = 10U;
int64_t x12 = 426213852813LL;
int16_t x16 = INT16_MAX;
int32_t t3 = 4;
volatile int8_t x17 = INT8_MAX;
int8_t x22 = 10;
int32_t t5 = -32492;
int16_t x30 = -1;
int8_t x35 = INT8_MIN;
static volatile int32_t t10 = 948028057;
int8_t x45 = 3;
uint32_t x47 = UINT32_MAX;
int32_t x71 = 528845898;
uint16_t x77 = UINT16_MAX;
int64_t x80 = INT64_MIN;
uint32_t x85 = 127U;
int64_t x86 = -12676176414479546LL;
int16_t x87 = -1;
volatile int16_t x94 = -1;
int8_t x100 = -1;
uint64_t x104 = UINT64_MAX;
int32_t t23 = -84591;
int8_t x111 = -3;
int8_t x118 = INT8_MAX;
int64_t x119 = 12756916008720147LL;
uint64_t x120 = 404322755973LLU;
volatile uint8_t x125 = 3U;
volatile int32_t x140 = -1;
int8_t x142 = INT8_MAX;
volatile int16_t x143 = 0;
volatile int32_t t32 = 2231;
static int64_t x147 = -1LL;
int32_t t39 = -186441;
volatile int32_t t40 = 5514;
int64_t x179 = -7530670551027179LL;
int16_t x181 = INT16_MIN;
int32_t t42 = -80;
int16_t x187 = INT16_MIN;
int16_t x194 = 3879;
int16_t x196 = 1;
int32_t t45 = -5100464;
volatile int32_t t46 = 418;
volatile int32_t t47 = -14631904;
volatile int32_t x205 = INT32_MIN;
volatile int32_t t48 = -887027440;
static int32_t x212 = INT32_MAX;
static int16_t x213 = INT16_MIN;
static uint16_t x223 = 0U;
int32_t t51 = 215255;
int8_t x228 = INT8_MIN;
volatile int32_t x236 = -1;
volatile int32_t t54 = 188008866;
uint8_t x254 = 3U;
int64_t x256 = INT64_MIN;
volatile int32_t t58 = 878660;
int16_t x265 = INT16_MIN;
int8_t x269 = -1;
volatile int32_t x270 = INT32_MAX;
volatile int64_t x279 = 241207100LL;
int32_t t63 = 113;
int32_t x284 = -1;
volatile int8_t x286 = INT8_MIN;
volatile uint64_t x287 = UINT64_MAX;
uint32_t x294 = UINT32_MAX;
int8_t x301 = 1;
volatile uint64_t x303 = 17616289LLU;
int16_t x306 = -11;
int64_t x309 = 3311233LL;
uint16_t x314 = 2097U;
uint64_t x316 = 2953672LLU;
int16_t x317 = INT16_MIN;
static int32_t t73 = -129942314;
static int16_t x323 = -5;
volatile uint16_t x329 = UINT16_MAX;
uint64_t x330 = UINT64_MAX;
int32_t x332 = INT32_MIN;
int8_t x342 = INT8_MAX;
uint32_t x344 = 16549155U;
uint16_t x345 = 7623U;
int16_t x347 = INT16_MIN;
uint8_t x354 = 6U;
volatile int32_t t82 = 104102961;
static uint32_t x357 = 0U;
int32_t t85 = 64799;
int32_t t87 = -5947296;
static int8_t x383 = 21;
int32_t t88 = 23768;
int32_t t90 = -327;
int64_t x393 = 120820LL;
int16_t x396 = -6227;
int16_t x401 = -1;
int32_t t93 = -155099;
int64_t x412 = INT64_MAX;
int16_t x414 = INT16_MAX;
int16_t x418 = -1;
int8_t x419 = 0;
static uint32_t x421 = 42U;
volatile int64_t x424 = INT64_MAX;
int32_t t99 = 20;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint32_t x3 = 122371756U;
	int32_t t0 = 8;

	t0 = ((x1/x2)<=(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	static int8_t x6 = INT8_MAX;
	static volatile int64_t x7 = 1219263LL;
	uint16_t x8 = 1635U;

	t1 = ((x5/x6)<=(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint64_t x11 = 21847528309LLU;
	int32_t t2 = 94306;

	t2 = ((x9/x10)<=(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static volatile int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;

	t3 = ((x13/x14)<=(x15|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -1LL;
	int8_t x19 = INT8_MAX;
	volatile int64_t x20 = INT64_MAX;
	int32_t t4 = 19959;

	t4 = ((x17/x18)<=(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -238LL;
	volatile int32_t x23 = -735557;
	uint32_t x24 = UINT32_MAX;

	t5 = ((x21/x22)<=(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	volatile uint16_t x26 = 1336U;
	int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MIN;
	static int32_t t6 = -13987;

	t6 = ((x25/x26)<=(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x31 = INT16_MIN;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = -9587795;

	t7 = ((x29/x30)<=(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -49;
	volatile int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -695;

	t8 = ((x33/x34)<=(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 35U;
	static int8_t x38 = -12;
	static uint8_t x39 = 109U;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -74;

	t9 = ((x37/x38)<=(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int32_t x42 = INT32_MIN;
	int16_t x43 = -1;
	int8_t x44 = -8;

	t10 = ((x41/x42)<=(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -20689008;

	t11 = ((x45/x46)<=(x47|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = 12LLU;
	static int32_t t12 = -38;

	t12 = ((x53/x54)<=(x55|x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 0U;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 11879U;
	uint32_t x60 = 27274880U;
	volatile int32_t t13 = -360;

	t13 = ((x57/x58)<=(x59|x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 0;
	int8_t x62 = 5;
	volatile int64_t x63 = -1LL;
	int32_t x64 = 0;
	static volatile int32_t t14 = 2031;

	t14 = ((x61/x62)<=(x63|x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint8_t x66 = 1U;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 22U;
	volatile int32_t t15 = -324989243;

	t15 = ((x65/x66)<=(x67|x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	static int8_t x70 = -1;
	int16_t x72 = -1;
	volatile int32_t t16 = 93;

	t16 = ((x69/x70)<=(x71|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t17 = -239273114;

	t17 = ((x73/x74)<=(x75|x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = -1;
	int16_t x79 = INT16_MAX;
	volatile int32_t t18 = 13108;

	t18 = ((x77/x78)<=(x79|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x88 = INT32_MAX;
	volatile int32_t t19 = -2635;

	t19 = ((x85/x86)<=(x87|x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x89 = -7LL;
	int8_t x90 = -7;
	int8_t x91 = -2;
	int32_t x92 = -1;
	volatile int32_t t20 = 9;

	t20 = ((x89/x90)<=(x91|x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x93 = UINT8_MAX;
	uint64_t x95 = UINT64_MAX;
	uint32_t x96 = 54679330U;
	volatile int32_t t21 = 4650;

	t21 = ((x93/x94)<=(x95|x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	volatile uint64_t x98 = 120062700698LLU;
	volatile uint64_t x99 = 22684LLU;
	volatile int32_t t22 = 2885742;

	t22 = ((x97/x98)<=(x99|x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = 9137725U;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = -188;

	t23 = ((x101/x102)<=(x103|x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int8_t x108 = -4;
	int32_t t24 = 4014;

	t24 = ((x105/x106)<=(x107|x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = -1LL;
	uint16_t x110 = 1U;
	int32_t x112 = INT32_MIN;
	volatile int32_t t25 = -5831;

	t25 = ((x109/x110)<=(x111|x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = 154U;
	int32_t x115 = -1;
	volatile uint8_t x116 = UINT8_MAX;
	static int32_t t26 = 646799364;

	t26 = ((x113/x114)<=(x115|x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	volatile int32_t t27 = 37544;

	t27 = ((x117/x118)<=(x119|x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -5;
	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 96U;
	int32_t x124 = INT32_MIN;
	volatile int32_t t28 = 0;

	t28 = ((x121/x122)<=(x123|x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MAX;
	uint16_t x127 = 433U;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t29 = 77130255;

	t29 = ((x125/x126)<=(x127|x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = UINT64_MAX;
	static uint64_t x134 = UINT64_MAX;
	int8_t x135 = INT8_MAX;
	volatile uint16_t x136 = 6953U;
	volatile int32_t t30 = -14;

	t30 = ((x133/x134)<=(x135|x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x138 = INT16_MAX;
	static uint16_t x139 = UINT16_MAX;
	static int32_t t31 = -208;

	t31 = ((x137/x138)<=(x139|x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -47;
	uint32_t x144 = 11072307U;

	t32 = ((x141/x142)<=(x143|x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -126;
	volatile int64_t x146 = INT64_MIN;
	static volatile uint64_t x148 = UINT64_MAX;
	volatile int32_t t33 = 2499094;

	t33 = ((x145/x146)<=(x147|x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	static uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	int32_t x152 = -1;
	static volatile int32_t t34 = -23;

	t34 = ((x149/x150)<=(x151|x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = -1;
	static uint64_t x154 = UINT64_MAX;
	uint64_t x155 = 674LLU;
	int64_t x156 = INT64_MIN;
	volatile int32_t t35 = -396440;

	t35 = ((x153/x154)<=(x155|x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x157 = 5U;
	uint64_t x158 = 3585202LLU;
	int64_t x159 = 64LL;
	int32_t x160 = 17;
	int32_t t36 = 1858;

	t36 = ((x157/x158)<=(x159|x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = 1;
	static int16_t x163 = INT16_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t37 = 1902036;

	t37 = ((x161/x162)<=(x163|x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 703U;
	uint16_t x166 = 48U;
	int64_t x167 = 65935478317LL;
	int8_t x168 = INT8_MAX;
	int32_t t38 = 3442;

	t38 = ((x165/x166)<=(x167|x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MAX;
	static int64_t x170 = -23LL;
	int64_t x171 = INT64_MIN;
	volatile uint32_t x172 = UINT32_MAX;

	t39 = ((x169/x170)<=(x171|x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x173 = -13187;
	uint32_t x174 = UINT32_MAX;
	static volatile uint32_t x175 = 9436233U;
	int64_t x176 = INT64_MIN;

	t40 = ((x173/x174)<=(x175|x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int8_t x178 = 41;
	int8_t x180 = -1;
	int32_t t41 = -287;

	t41 = ((x177/x178)<=(x179|x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x182 = INT16_MIN;
	int64_t x183 = 230017538082LL;
	volatile int16_t x184 = INT16_MAX;

	t42 = ((x181/x182)<=(x183|x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -11924;
	int64_t x186 = INT64_MAX;
	static uint32_t x188 = UINT32_MAX;
	volatile int32_t t43 = 12273;

	t43 = ((x185/x186)<=(x187|x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 12281U;
	int8_t x190 = 23;
	int8_t x191 = -3;
	int8_t x192 = INT8_MAX;
	static volatile int32_t t44 = -48;

	t44 = ((x189/x190)<=(x191|x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = 925;
	static uint16_t x195 = 0U;

	t45 = ((x193/x194)<=(x195|x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x197 = UINT8_MAX;
	uint16_t x198 = 511U;
	volatile int32_t x199 = INT32_MAX;
	uint8_t x200 = UINT8_MAX;

	t46 = ((x197/x198)<=(x199|x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = INT32_MIN;
	static int64_t x202 = -344262700249LL;
	int8_t x203 = -1;
	uint16_t x204 = 118U;

	t47 = ((x201/x202)<=(x203|x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x206 = INT16_MAX;
	uint8_t x207 = UINT8_MAX;
	uint64_t x208 = 34418034122259629LLU;

	t48 = ((x205/x206)<=(x207|x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = 789158196;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 125U;
	int32_t t49 = -658425437;

	t49 = ((x209/x210)<=(x211|x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = INT16_MAX;
	volatile int16_t x215 = -1939;
	uint16_t x216 = 17U;
	volatile int32_t t50 = -431204107;

	t50 = ((x213/x214)<=(x215|x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	int8_t x222 = -1;
	int32_t x224 = INT32_MIN;

	t51 = ((x221/x222)<=(x223|x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = 0;
	uint64_t x226 = 202132602781LLU;
	int32_t x227 = INT32_MAX;
	int32_t t52 = 64;

	t52 = ((x225/x226)<=(x227|x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = -1;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -2292016320LL;
	uint8_t x232 = UINT8_MAX;
	int32_t t53 = -6378457;

	t53 = ((x229/x230)<=(x231|x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x233 = 4U;
	uint64_t x234 = 6724609LLU;
	int16_t x235 = INT16_MIN;

	t54 = ((x233/x234)<=(x235|x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x245 = INT16_MAX;
	static int16_t x246 = INT16_MAX;
	int64_t x247 = -1LL;
	static uint8_t x248 = UINT8_MAX;
	int32_t t55 = 1741;

	t55 = ((x245/x246)<=(x247|x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x249 = -1LL;
	int64_t x250 = INT64_MAX;
	int8_t x251 = INT8_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t56 = 5298472;

	t56 = ((x249/x250)<=(x251|x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x253 = UINT16_MAX;
	volatile uint16_t x255 = UINT16_MAX;
	volatile int32_t t57 = -282535;

	t57 = ((x253/x254)<=(x255|x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = -12;
	int8_t x259 = -1;
	uint8_t x260 = 11U;

	t58 = ((x257/x258)<=(x259|x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x261 = 2U;
	static int32_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t x264 = -442569;
	volatile int32_t t59 = 321195;

	t59 = ((x261/x262)<=(x263|x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t60 = -765545663;

	t60 = ((x265/x266)<=(x267|x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x271 = -2;
	int8_t x272 = -1;
	volatile int32_t t61 = 24;

	t61 = ((x269/x270)<=(x271|x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 16755741912LLU;
	int8_t x274 = INT8_MIN;
	static int64_t x275 = INT64_MIN;
	int32_t x276 = -6;
	static int32_t t62 = -14548554;

	t62 = ((x273/x274)<=(x275|x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	int64_t x280 = -1LL;

	t63 = ((x277/x278)<=(x279|x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = 1LL;
	volatile uint64_t x282 = UINT64_MAX;
	uint32_t x283 = UINT32_MAX;
	volatile int32_t t64 = 192;

	t64 = ((x281/x282)<=(x283|x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x285 = 1U;
	int32_t x288 = -7;
	volatile int32_t t65 = 7;

	t65 = ((x285/x286)<=(x287|x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = 13358U;
	static uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MAX;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t66 = 431;

	t66 = ((x289/x290)<=(x291|x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x293 = -1LL;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = UINT64_MAX;
	int32_t t67 = 38360;

	t67 = ((x293/x294)<=(x295|x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 9U;
	volatile int32_t x298 = -1;
	int16_t x299 = 39;
	uint32_t x300 = 1964504U;
	int32_t t68 = -32;

	t68 = ((x297/x298)<=(x299|x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x302 = INT64_MAX;
	volatile int8_t x304 = 29;
	int32_t t69 = 45893115;

	t69 = ((x301/x302)<=(x303|x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = -8915063638LL;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t70 = -2394039;

	t70 = ((x305/x306)<=(x307|x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x310 = 2;
	int64_t x311 = -104LL;
	int32_t x312 = INT32_MIN;
	volatile int32_t t71 = 31;

	t71 = ((x309/x310)<=(x311|x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x313 = 0;
	int8_t x315 = INT8_MAX;
	int32_t t72 = -715062;

	t72 = ((x313/x314)<=(x315|x316));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x318 = -1;
	int32_t x319 = INT32_MIN;
	static volatile int32_t x320 = -1954952;

	t73 = ((x317/x318)<=(x319|x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -1;
	int8_t x322 = 42;
	static int32_t x324 = INT32_MAX;
	volatile int32_t t74 = 1863;

	t74 = ((x321/x322)<=(x323|x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x325 = -1;
	static uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 10419U;
	volatile uint8_t x328 = 54U;
	static volatile int32_t t75 = 0;

	t75 = ((x325/x326)<=(x327|x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x331 = INT8_MAX;
	volatile int32_t t76 = -42830;

	t76 = ((x329/x330)<=(x331|x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 5757U;
	uint64_t x334 = 1147060852792LLU;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t77 = 492308765;

	t77 = ((x333/x334)<=(x335|x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x337 = 177295U;
	static uint64_t x338 = 26291772801LLU;
	uint64_t x339 = 3160442LLU;
	static int8_t x340 = 1;
	int32_t t78 = -4804;

	t78 = ((x337/x338)<=(x339|x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int64_t x343 = INT64_MAX;
	int32_t t79 = -68659;

	t79 = ((x341/x342)<=(x343|x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x346 = INT64_MAX;
	uint8_t x348 = 19U;
	volatile int32_t t80 = -374365;

	t80 = ((x345/x346)<=(x347|x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = -1;
	uint8_t x351 = 5U;
	int64_t x352 = -1LL;
	int32_t t81 = -4246;

	t81 = ((x349/x350)<=(x351|x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = 1417191LL;
	int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = 25988648444151LLU;

	t82 = ((x353/x354)<=(x355|x356));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x358 = INT32_MAX;
	static volatile uint16_t x359 = 102U;
	int16_t x360 = -1;
	static volatile int32_t t83 = -16790558;

	t83 = ((x357/x358)<=(x359|x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x361 = INT64_MAX;
	int8_t x362 = -1;
	static int32_t x363 = -1;
	int8_t x364 = INT8_MIN;
	int32_t t84 = -10378565;

	t84 = ((x361/x362)<=(x363|x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x365 = -1LL;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = -5829;
	static uint16_t x368 = UINT16_MAX;

	t85 = ((x365/x366)<=(x367|x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MIN;
	volatile uint32_t x375 = 5U;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t86 = -1642263;

	t86 = ((x373/x374)<=(x375|x376));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x377 = 1;
	int64_t x378 = 794578LL;
	uint32_t x379 = 324691U;
	int64_t x380 = INT64_MIN;

	t87 = ((x377/x378)<=(x379|x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x381 = INT64_MIN;
	volatile int64_t x382 = INT64_MIN;
	volatile int64_t x384 = -1LL;

	t88 = ((x381/x382)<=(x383|x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	int64_t x387 = -216695573008863391LL;
	volatile int64_t x388 = -1LL;
	int32_t t89 = -3149163;

	t89 = ((x385/x386)<=(x387|x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x389 = 45U;
	int8_t x390 = -1;
	static uint32_t x391 = UINT32_MAX;
	static int32_t x392 = INT32_MIN;

	t90 = ((x389/x390)<=(x391|x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	volatile int32_t t91 = 7024;

	t91 = ((x393/x394)<=(x395|x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	int8_t x399 = 2;
	int32_t x400 = 947;
	int32_t t92 = 528792;

	t92 = ((x397/x398)<=(x399|x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x402 = -1LL;
	int64_t x403 = INT64_MIN;
	volatile int64_t x404 = 346854402LL;

	t93 = ((x401/x402)<=(x403|x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x406 = 40115255U;
	volatile uint32_t x407 = 364U;
	int8_t x408 = INT8_MIN;
	volatile int32_t t94 = -830;

	t94 = ((x405/x406)<=(x407|x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x409 = -1;
	static volatile uint16_t x410 = UINT16_MAX;
	static uint32_t x411 = UINT32_MAX;
	volatile int32_t t95 = 1;

	t95 = ((x409/x410)<=(x411|x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x413 = INT32_MIN;
	int64_t x415 = -567570305495639LL;
	volatile int16_t x416 = INT16_MIN;
	int32_t t96 = 108818;

	t96 = ((x413/x414)<=(x415|x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = -1;
	int64_t x420 = INT64_MIN;
	volatile int32_t t97 = 5223;

	t97 = ((x417/x418)<=(x419|x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x422 = 304848U;
	uint8_t x423 = 6U;
	static int32_t t98 = -2865423;

	t98 = ((x421/x422)<=(x423|x424));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x425 = UINT16_MAX;
	static int16_t x426 = INT16_MIN;
	static volatile int16_t x427 = -1158;
	uint16_t x428 = 4U;

	t99 = ((x425/x426)<=(x427|x428));

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

