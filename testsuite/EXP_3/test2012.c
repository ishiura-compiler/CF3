#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int32_t x5 = INT32_MIN;
volatile int8_t x9 = -1;
static int32_t x10 = INT32_MIN;
volatile int32_t t3 = -8702;
uint32_t x23 = 22949749U;
uint32_t x25 = 3871U;
uint8_t x30 = UINT8_MAX;
static int32_t x34 = INT32_MIN;
int8_t x38 = -1;
int32_t t9 = 138;
int64_t x42 = -1LL;
static uint64_t x43 = 361LLU;
int8_t x47 = -24;
int32_t t11 = -1;
int32_t x64 = -1155875;
int32_t t16 = 1;
uint8_t x73 = 2U;
int64_t x76 = 1LL;
volatile int32_t t18 = 3;
int64_t x78 = -1LL;
uint64_t x79 = UINT64_MAX;
int32_t t19 = 2704226;
uint64_t x81 = 1592189LLU;
int8_t x96 = 13;
volatile int32_t t23 = 6848368;
volatile int16_t x107 = INT16_MIN;
static int64_t x109 = 9495LL;
int32_t t27 = -4166008;
int32_t t28 = 900007;
uint64_t x122 = 3892350401967193LLU;
int32_t t30 = -439455;
static volatile int64_t x131 = INT64_MAX;
static int64_t x132 = INT64_MAX;
uint32_t x133 = 110898150U;
int16_t x138 = INT16_MIN;
volatile int32_t x139 = 4671465;
static uint8_t x141 = 12U;
int16_t x143 = INT16_MAX;
uint8_t x148 = 2U;
static int8_t x154 = INT8_MIN;
uint8_t x155 = 4U;
int8_t x158 = INT8_MAX;
static uint8_t x162 = UINT8_MAX;
uint64_t x163 = 353977245932LLU;
static int8_t x169 = INT8_MIN;
uint64_t x171 = 626204LLU;
int8_t x172 = INT8_MAX;
volatile int32_t t42 = -10773595;
int64_t x174 = INT64_MIN;
int16_t x177 = -67;
uint16_t x183 = 56U;
static int16_t x186 = 14113;
volatile int32_t t46 = 459204;
uint64_t x190 = 8390767782209LLU;
static int32_t x193 = 28172;
int64_t x196 = INT64_MAX;
uint16_t x208 = UINT16_MAX;
int16_t x214 = 238;
volatile int16_t x217 = 90;
volatile uint32_t x220 = UINT32_MAX;
uint64_t x221 = 377198LLU;
uint8_t x222 = 38U;
static int32_t x226 = INT32_MAX;
int32_t t56 = 732902;
static int32_t x236 = -1;
int64_t x239 = INT64_MIN;
int32_t t59 = 179587;
static uint16_t x245 = UINT16_MAX;
int32_t t61 = -1010686;
static uint16_t x249 = 4U;
volatile int32_t t62 = -1982;
uint16_t x262 = UINT16_MAX;
int32_t t65 = -124929;
int32_t t66 = 103121;
static int8_t x269 = INT8_MIN;
int8_t x274 = INT8_MAX;
int16_t x277 = INT16_MAX;
static uint8_t x280 = 36U;
volatile int32_t t69 = -61;
static int16_t x284 = -1;
static int32_t t70 = 0;
static uint32_t x290 = UINT32_MAX;
volatile int32_t x292 = -1;
volatile uint16_t x299 = 4U;
int16_t x308 = INT16_MIN;
int32_t x310 = INT32_MIN;
volatile int16_t x313 = INT16_MIN;
uint16_t x325 = 3419U;
int16_t x330 = 10;
volatile int32_t t82 = -107340266;
volatile int32_t x339 = -755;
static int32_t x344 = INT32_MAX;
volatile int32_t t87 = 25;
uint16_t x353 = UINT16_MAX;
int16_t x355 = INT16_MIN;
int16_t x357 = -1;
volatile int32_t t90 = 0;
int16_t x365 = INT16_MAX;
volatile int64_t x371 = INT64_MIN;
static volatile int32_t t92 = 13;
int16_t x374 = INT16_MIN;
int16_t x375 = INT16_MIN;
static volatile int32_t t93 = -1;
int16_t x388 = INT16_MAX;
int16_t x394 = -9771;
static uint32_t x399 = UINT32_MAX;
int64_t x400 = 103498367LL;


void f0(void) {
	volatile int64_t x2 = -27627979008511877LL;
	static int32_t x3 = -1;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 59613168;

	t0 = ((x1|x2)<=(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 2;
	uint16_t x7 = UINT16_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -37347300;

	t1 = ((x5|x6)<=(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x11 = -1LL;
	int8_t x12 = 20;
	volatile int32_t t2 = 19;

	t2 = ((x9|x10)<=(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6551U;
	int8_t x14 = INT8_MIN;
	static int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;

	t3 = ((x13|x14)<=(x15|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 736U;
	int32_t x18 = -88322;
	int32_t x19 = -12;
	static uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = 11365;

	t4 = ((x17|x18)<=(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	static uint32_t x24 = 221499U;
	volatile int32_t t5 = -912;

	t5 = ((x21|x22)<=(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 7U;
	int8_t x27 = INT8_MIN;
	volatile int8_t x28 = INT8_MIN;
	static int32_t t6 = 3042;

	t6 = ((x25|x26)<=(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 225U;
	int8_t x31 = 12;
	int16_t x32 = INT16_MAX;
	static int32_t t7 = 748219759;

	t7 = ((x29|x30)<=(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 5;
	int16_t x35 = INT16_MIN;
	volatile int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = 63305;

	t8 = ((x33|x34)<=(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	int64_t x39 = INT64_MIN;
	static int8_t x40 = -1;

	t9 = ((x37|x38)<=(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x41 = 339U;
	uint8_t x44 = 0U;
	volatile int32_t t10 = -16143463;

	t10 = ((x41|x42)<=(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 23815400505142015LLU;
	int8_t x46 = INT8_MIN;
	static uint32_t x48 = UINT32_MAX;

	t11 = ((x45|x46)<=(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 476LLU;
	int16_t x50 = INT16_MAX;
	int64_t x51 = 397980604695LL;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -387635266;

	t12 = ((x49|x50)<=(x51|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	static int8_t x54 = -1;
	volatile int16_t x55 = -5477;
	static uint32_t x56 = UINT32_MAX;
	static int32_t t13 = -335976;

	t13 = ((x53|x54)<=(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	static int32_t x58 = INT32_MIN;
	uint8_t x59 = 37U;
	uint16_t x60 = 3385U;
	int32_t t14 = -2214781;

	t14 = ((x57|x58)<=(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	uint16_t x62 = 243U;
	int32_t x63 = 25041;
	volatile int32_t t15 = 81299215;

	t15 = ((x61|x62)<=(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -31;
	static uint32_t x66 = 435U;
	volatile int32_t x67 = 464437805;
	int16_t x68 = INT16_MAX;

	t16 = ((x65|x66)<=(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 6454159U;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 97809154;

	t17 = ((x69|x70)<=(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x74 = INT16_MIN;
	volatile int16_t x75 = -1;

	t18 = ((x73|x74)<=(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	volatile int16_t x80 = INT16_MAX;

	t19 = ((x77|x78)<=(x79|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x82 = 2U;
	static int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -20;

	t20 = ((x81|x82)<=(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	uint64_t x88 = 502159LLU;
	static int32_t t21 = 6;

	t21 = ((x85|x86)<=(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -3;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	int64_t x92 = 1361745147557622LL;
	volatile int32_t t22 = -12;

	t22 = ((x89|x90)<=(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -117797;
	uint16_t x94 = 1U;
	int16_t x95 = -1;

	t23 = ((x93|x94)<=(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 153LLU;
	int32_t x98 = INT32_MAX;
	int8_t x99 = -1;
	static volatile uint32_t x100 = UINT32_MAX;
	int32_t t24 = 388085877;

	t24 = ((x97|x98)<=(x99|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -60605001;

	t25 = ((x101|x102)<=(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	uint8_t x106 = 14U;
	int16_t x108 = INT16_MAX;
	static int32_t t26 = 2;

	t26 = ((x105|x106)<=(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x110 = 27LLU;
	uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 1U;

	t27 = ((x109|x110)<=(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MAX;
	int64_t x114 = 223074790310LL;
	static uint64_t x115 = UINT64_MAX;
	static int64_t x116 = INT64_MIN;

	t28 = ((x113|x114)<=(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = 10973;
	volatile int64_t x118 = 5814848130300LL;
	volatile int32_t x119 = -681;
	volatile int16_t x120 = -1;
	int32_t t29 = -9543370;

	t29 = ((x117|x118)<=(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = 442;
	int8_t x123 = INT8_MIN;
	int32_t x124 = 126;

	t30 = ((x121|x122)<=(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 9797;
	static int16_t x126 = -14659;
	volatile int8_t x127 = INT8_MIN;
	static int8_t x128 = -1;
	int32_t t31 = -711143;

	t31 = ((x125|x126)<=(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1089;
	int8_t x130 = INT8_MIN;
	int32_t t32 = 9;

	t32 = ((x129|x130)<=(x131|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = -1;
	int8_t x135 = -11;
	int64_t x136 = -527319LL;
	volatile int32_t t33 = -19907113;

	t33 = ((x133|x134)<=(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static uint64_t x140 = 3473LLU;
	int32_t t34 = 150;

	t34 = ((x137|x138)<=(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	static uint32_t x144 = 95847708U;
	int32_t t35 = 876162837;

	t35 = ((x141|x142)<=(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	uint16_t x147 = 462U;
	volatile int32_t t36 = 5484102;

	t36 = ((x145|x146)<=(x147|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	static int32_t x150 = -1;
	int16_t x151 = -11484;
	int64_t x152 = INT64_MAX;
	int32_t t37 = 1539454;

	t37 = ((x149|x150)<=(x151|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 368;
	static int64_t x156 = -1LL;
	static int32_t t38 = 779736542;

	t38 = ((x153|x154)<=(x155|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -1603221;
	int32_t t39 = -13213568;

	t39 = ((x157|x158)<=(x159|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -47;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 7;

	t40 = ((x161|x162)<=(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 121309051370567030LLU;
	uint8_t x166 = 0U;
	volatile uint64_t x167 = 106736287674096541LLU;
	int64_t x168 = -3LL;
	int32_t t41 = -50002;

	t41 = ((x165|x166)<=(x167|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = INT8_MIN;

	t42 = ((x169|x170)<=(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 4U;
	int8_t x175 = -2;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 1;

	t43 = ((x173|x174)<=(x175|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = UINT8_MAX;
	volatile uint8_t x179 = UINT8_MAX;
	int32_t x180 = 2253335;
	static int32_t t44 = -2047;

	t44 = ((x177|x178)<=(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -479102223;
	volatile uint16_t x182 = 19U;
	volatile uint32_t x184 = 4590785U;
	volatile int32_t t45 = 3502;

	t45 = ((x181|x182)<=(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int8_t x187 = 12;
	static int32_t x188 = INT32_MIN;

	t46 = ((x185|x186)<=(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 98LLU;
	volatile int16_t x191 = INT16_MAX;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = -10697218;

	t47 = ((x189|x190)<=(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = INT64_MIN;
	static int16_t x195 = INT16_MIN;
	static int32_t t48 = 7;

	t48 = ((x193|x194)<=(x195|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint32_t x198 = 886800U;
	int16_t x199 = INT16_MIN;
	int16_t x200 = -67;
	static int32_t t49 = 486038;

	t49 = ((x197|x198)<=(x199|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 207U;
	int32_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -3;

	t50 = ((x201|x202)<=(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static int64_t x206 = -1LL;
	static int8_t x207 = -1;
	int32_t t51 = -26782286;

	t51 = ((x205|x206)<=(x207|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 1;
	static volatile int8_t x210 = 23;
	static volatile uint32_t x211 = UINT32_MAX;
	static volatile uint8_t x212 = 1U;
	int32_t t52 = 4;

	t52 = ((x209|x210)<=(x211|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 16;
	static int16_t x215 = -1;
	uint64_t x216 = 1607279LLU;
	int32_t t53 = -26;

	t53 = ((x213|x214)<=(x215|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 15U;
	int64_t x219 = -1LL;
	static int32_t t54 = -975385;

	t54 = ((x217|x218)<=(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x223 = 27434866043411801LLU;
	static volatile int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = -155;

	t55 = ((x221|x222)<=(x223|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x227 = 142260LLU;
	uint64_t x228 = UINT64_MAX;

	t56 = ((x225|x226)<=(x227|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 32115U;
	volatile int16_t x230 = INT16_MAX;
	int16_t x231 = -6568;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 131170;

	t57 = ((x229|x230)<=(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 24U;
	int64_t x234 = -20LL;
	static uint32_t x235 = 1276942U;
	static int32_t t58 = 66831;

	t58 = ((x233|x234)<=(x235|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 497U;
	uint8_t x238 = UINT8_MAX;
	uint16_t x240 = UINT16_MAX;

	t59 = ((x237|x238)<=(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 216776U;
	static volatile uint16_t x242 = 24U;
	volatile int32_t x243 = INT32_MAX;
	int64_t x244 = 374588909LL;
	static volatile int32_t t60 = -100206268;

	t60 = ((x241|x242)<=(x243|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = 0;
	uint16_t x247 = UINT16_MAX;
	int16_t x248 = 1;

	t61 = ((x245|x246)<=(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = 1U;
	uint8_t x251 = 44U;
	int64_t x252 = INT64_MIN;

	t62 = ((x249|x250)<=(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	static uint32_t x255 = 12U;
	static int32_t x256 = INT32_MAX;
	volatile int32_t t63 = -1;

	t63 = ((x253|x254)<=(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	uint32_t x258 = 7108789U;
	uint32_t x259 = UINT32_MAX;
	int8_t x260 = -1;
	int32_t t64 = -102;

	t64 = ((x257|x258)<=(x259|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 62359;
	uint16_t x263 = 3052U;
	int32_t x264 = -20058;

	t65 = ((x261|x262)<=(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static volatile int8_t x266 = -55;
	uint8_t x267 = 47U;
	static uint32_t x268 = 164046582U;

	t66 = ((x265|x266)<=(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -1;
	int64_t x271 = 11324754267LL;
	int64_t x272 = INT64_MAX;
	int32_t t67 = 67985;

	t67 = ((x269|x270)<=(x271|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int8_t x275 = -1;
	int64_t x276 = 65591295138476LL;
	int32_t t68 = 1799382;

	t68 = ((x273|x274)<=(x275|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	static uint16_t x279 = 2015U;

	t69 = ((x277|x278)<=(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -44;
	int16_t x282 = -5650;
	volatile int16_t x283 = INT16_MIN;

	t70 = ((x281|x282)<=(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MIN;
	volatile uint16_t x286 = 5030U;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = 0U;
	int32_t t71 = 8471;

	t71 = ((x285|x286)<=(x287|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 16;
	uint32_t x291 = 208291785U;
	int32_t t72 = 41227543;

	t72 = ((x289|x290)<=(x291|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	uint64_t x294 = 57485829LLU;
	int32_t x295 = INT32_MAX;
	uint32_t x296 = 4157298U;
	static volatile int32_t t73 = 46;

	t73 = ((x293|x294)<=(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = UINT32_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t74 = 159336;

	t74 = ((x297|x298)<=(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int64_t x302 = -931LL;
	uint8_t x303 = 13U;
	volatile uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = 423674;

	t75 = ((x301|x302)<=(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -1;
	static volatile int32_t x306 = -1;
	uint32_t x307 = 79U;
	volatile int32_t t76 = -61053022;

	t76 = ((x305|x306)<=(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -3;
	uint64_t x311 = 905397139LLU;
	uint32_t x312 = 697U;
	int32_t t77 = -6091;

	t77 = ((x309|x310)<=(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = INT64_MAX;
	int32_t x315 = 223920;
	volatile int16_t x316 = -487;
	int32_t t78 = -15;

	t78 = ((x313|x314)<=(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	uint16_t x318 = UINT16_MAX;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	int32_t t79 = 1;

	t79 = ((x317|x318)<=(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	static int16_t x322 = INT16_MIN;
	uint8_t x323 = 0U;
	static int64_t x324 = INT64_MIN;
	int32_t t80 = -6511990;

	t80 = ((x321|x322)<=(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x326 = INT32_MAX;
	volatile uint32_t x327 = 1812U;
	volatile int32_t x328 = -1;
	static int32_t t81 = -1;

	t81 = ((x325|x326)<=(x327|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 146U;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = -1;

	t82 = ((x329|x330)<=(x331|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -56184170LL;
	int32_t x334 = INT32_MIN;
	static int32_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	int32_t t83 = -131186361;

	t83 = ((x333|x334)<=(x335|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	volatile int8_t x338 = INT8_MAX;
	int32_t x340 = -1;
	static int32_t t84 = -708235871;

	t84 = ((x337|x338)<=(x339|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	volatile int8_t x342 = -1;
	int32_t x343 = 760;
	static int32_t t85 = 51;

	t85 = ((x341|x342)<=(x343|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 15LLU;
	static uint64_t x346 = 33582711204413828LLU;
	uint64_t x347 = 4450892489731LLU;
	volatile int16_t x348 = -1;
	static volatile int32_t t86 = -4395484;

	t86 = ((x345|x346)<=(x347|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = -5;
	uint32_t x350 = UINT32_MAX;
	volatile int8_t x351 = INT8_MIN;
	int64_t x352 = 180965044539031061LL;

	t87 = ((x349|x350)<=(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -16;
	static uint32_t x356 = 115434U;
	volatile int32_t t88 = 57;

	t88 = ((x353|x354)<=(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 3740U;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -243034;

	t89 = ((x357|x358)<=(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	static int64_t x362 = -1LL;
	int32_t x363 = INT32_MIN;
	int8_t x364 = -1;

	t90 = ((x361|x362)<=(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 308215727088LL;
	int8_t x367 = -5;
	uint32_t x368 = UINT32_MAX;
	static int32_t t91 = -6;

	t91 = ((x365|x366)<=(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 4;
	int8_t x370 = 2;
	static uint64_t x372 = 1257589434184LLU;

	t92 = ((x369|x370)<=(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 41;
	uint8_t x376 = 72U;

	t93 = ((x373|x374)<=(x375|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MAX;
	uint32_t x378 = 62276U;
	int16_t x379 = INT16_MAX;
	int8_t x380 = -1;
	int32_t t94 = 171358362;

	t94 = ((x377|x378)<=(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = 28;
	static uint8_t x383 = 6U;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 45;

	t95 = ((x381|x382)<=(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = 40921848;
	int16_t x387 = -186;
	volatile int32_t t96 = 20351;

	t96 = ((x385|x386)<=(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = 37;
	uint32_t x390 = UINT32_MAX;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x389|x390)<=(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 54792322752527LL;
	uint16_t x395 = 4U;
	uint8_t x396 = 1U;
	volatile int32_t t98 = 1;

	t98 = ((x393|x394)<=(x395|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 6610659U;
	static volatile int32_t t99 = -15445;

	t99 = ((x397|x398)<=(x399|x400));

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

