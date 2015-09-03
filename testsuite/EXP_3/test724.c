#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
uint32_t x6 = 3U;
int32_t x7 = INT32_MIN;
int16_t x8 = INT16_MAX;
static int32_t t2 = 16;
volatile uint8_t x23 = UINT8_MAX;
volatile int32_t t5 = 2;
uint16_t x25 = 330U;
int8_t x32 = INT8_MAX;
int32_t t7 = 111791;
volatile int64_t x34 = INT64_MAX;
uint32_t x37 = 12345U;
static int64_t x40 = -1LL;
uint16_t x47 = UINT16_MAX;
int16_t x50 = 2;
int64_t x59 = INT64_MIN;
int64_t x60 = INT64_MIN;
int8_t x65 = INT8_MAX;
int32_t x66 = INT32_MIN;
int16_t x68 = INT16_MAX;
int32_t x71 = INT32_MAX;
volatile int16_t x73 = -1;
int32_t t19 = 97;
int16_t x84 = INT16_MIN;
int8_t x86 = INT8_MIN;
int32_t x90 = -1;
static int32_t t23 = -3536;
volatile uint64_t x101 = 1097691682002852973LLU;
int16_t x104 = 7519;
int32_t t25 = 177877339;
int32_t x107 = 32450;
static uint32_t x110 = 5U;
uint32_t x112 = UINT32_MAX;
int8_t x114 = INT8_MIN;
volatile int32_t t28 = 4621;
int8_t x117 = INT8_MAX;
int32_t x120 = INT32_MIN;
int16_t x122 = -3796;
volatile int64_t x123 = INT64_MAX;
static int32_t t30 = 4222;
static volatile int32_t x133 = INT32_MAX;
uint64_t x134 = UINT64_MAX;
int16_t x136 = INT16_MIN;
int32_t t35 = -10975533;
int32_t x146 = INT32_MAX;
int8_t x152 = -1;
volatile int32_t t38 = -15973091;
volatile int32_t t39 = -6872;
static int16_t x165 = -1;
volatile uint64_t x170 = UINT64_MAX;
uint32_t x173 = UINT32_MAX;
uint16_t x177 = UINT16_MAX;
int8_t x178 = 1;
int32_t x179 = INT32_MIN;
int32_t t46 = 23348;
volatile uint32_t x192 = 5916U;
volatile int32_t t47 = -4;
volatile int32_t t48 = -161181666;
static volatile int32_t t50 = -65258504;
int32_t t51 = -22;
uint32_t x209 = UINT32_MAX;
int64_t x214 = -2898710551085LL;
volatile uint16_t x216 = 10540U;
volatile int32_t t54 = 0;
volatile int32_t t55 = 0;
int8_t x238 = INT8_MAX;
int32_t x248 = -1;
volatile uint64_t x253 = 840212156666LLU;
int16_t x254 = INT16_MIN;
volatile int8_t x256 = INT8_MAX;
int64_t x259 = INT64_MIN;
uint64_t x262 = UINT64_MAX;
volatile uint8_t x268 = 107U;
uint16_t x271 = UINT16_MAX;
int32_t x275 = INT32_MAX;
volatile uint64_t x279 = 7892650LLU;
volatile int32_t t68 = 3416;
static volatile int32_t x282 = INT32_MIN;
volatile int64_t x300 = 2119047113LL;
volatile int32_t t73 = -3425;
uint32_t x316 = UINT32_MAX;
static int8_t x325 = INT8_MIN;
int64_t x328 = INT64_MAX;
int64_t x331 = -6041102187398669LL;
uint16_t x333 = UINT16_MAX;
volatile uint16_t x335 = 51U;
static int8_t x336 = INT8_MIN;
int32_t t81 = -1;
static volatile int16_t x345 = INT16_MIN;
uint64_t x352 = 785429362739LLU;
int64_t x354 = INT64_MAX;
volatile int32_t x356 = INT32_MAX;
int32_t x360 = 232469;
static uint16_t x361 = UINT16_MAX;
volatile int8_t x366 = -6;
int32_t x368 = INT32_MIN;
static int32_t x370 = 104517;
int32_t t90 = 3365394;
int16_t x373 = INT16_MAX;
int16_t x376 = -141;
int8_t x379 = INT8_MAX;
static volatile int32_t t93 = 1351;
volatile int16_t x389 = -1;
int32_t x393 = INT32_MIN;
uint16_t x399 = 2419U;
static int32_t t96 = -1;
volatile int32_t t97 = -7935;
volatile uint16_t x412 = 2086U;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	static uint32_t x2 = 918U;
	static int8_t x3 = -1;
	volatile int32_t t0 = 1244;

	t0 = ((x1/x2)<(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -10;
	static volatile int32_t t1 = 0;

	t1 = ((x5/x6)<(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	int8_t x10 = -1;
	volatile int8_t x11 = 53;
	int8_t x12 = -1;

	t2 = ((x9/x10)<(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 40LLU;
	uint8_t x14 = 2U;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MAX;
	int32_t t3 = -108519;

	t3 = ((x13/x14)<(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int64_t x18 = -296943778784LL;
	uint16_t x19 = UINT16_MAX;
	volatile int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 109941;

	t4 = ((x17/x18)<(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 13;
	static uint32_t x22 = 101178062U;
	int8_t x24 = INT8_MIN;

	t5 = ((x21/x22)<(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MAX;
	int16_t x27 = -464;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 6597698;

	t6 = ((x25/x26)<(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MAX;

	t7 = ((x29/x30)<(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -1463;

	t8 = ((x33/x34)<(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = INT64_MIN;
	static int32_t x39 = -1;
	volatile int32_t t9 = 130946;

	t9 = ((x37/x38)<(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 68U;
	int16_t x42 = INT16_MAX;
	volatile int8_t x43 = INT8_MIN;
	volatile uint32_t x44 = 921562U;
	volatile int32_t t10 = 56692;

	t10 = ((x41/x42)<(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	int8_t x46 = -6;
	int32_t x48 = 86131;
	static int32_t t11 = 13;

	t11 = ((x45/x46)<(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int64_t x51 = INT64_MAX;
	volatile int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -1046776;

	t12 = ((x49/x50)<(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 0LL;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 47U;
	int16_t x56 = -1;
	volatile int32_t t13 = -3119561;

	t13 = ((x53/x54)<(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int8_t x58 = -1;
	int32_t t14 = 1899;

	t14 = ((x57/x58)<(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 12;
	volatile int32_t x62 = -1;
	uint64_t x63 = 398260726669717561LLU;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -138;

	t15 = ((x61/x62)<(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x67 = INT8_MIN;
	volatile int32_t t16 = 118634;

	t16 = ((x65/x66)<(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	volatile int64_t x72 = -53261113LL;
	int32_t t17 = -172884;

	t17 = ((x69/x70)<(x71%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x74 = 23LLU;
	int32_t x75 = -1;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 74597;

	t18 = ((x73/x74)<(x75%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	static uint32_t x78 = 336196U;
	volatile uint32_t x79 = 27865159U;
	uint32_t x80 = 193746275U;

	t19 = ((x77/x78)<(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 55U;
	uint16_t x82 = 111U;
	int64_t x83 = INT64_MIN;
	volatile int32_t t20 = 1130;

	t20 = ((x81/x82)<(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 51;
	int32_t x87 = INT32_MIN;
	int8_t x88 = -41;
	int32_t t21 = 154714777;

	t21 = ((x85/x86)<(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	int64_t x91 = INT64_MAX;
	uint32_t x92 = 113U;
	static int32_t t22 = 14508251;

	t22 = ((x89/x90)<(x91%x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = -7596;
	uint32_t x95 = UINT32_MAX;
	uint32_t x96 = 4U;

	t23 = ((x93/x94)<(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = -2;
	uint32_t x98 = 14U;
	static int32_t x99 = -1;
	uint8_t x100 = UINT8_MAX;
	static int32_t t24 = 15991462;

	t24 = ((x97/x98)<(x99%x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	volatile int16_t x103 = -1;

	t25 = ((x101/x102)<(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile int8_t x106 = INT8_MIN;
	uint32_t x108 = UINT32_MAX;
	int32_t t26 = -31549714;

	t26 = ((x105/x106)<(x107%x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	volatile uint64_t x111 = 2556095785416843LLU;
	volatile int32_t t27 = -569712;

	t27 = ((x109/x110)<(x111%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 30U;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = -13383;

	t28 = ((x113/x114)<(x115%x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x118 = INT64_MIN;
	volatile uint64_t x119 = 434480765467578354LLU;
	volatile int32_t t29 = -4745113;

	t29 = ((x117/x118)<(x119%x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int8_t x124 = 3;

	t30 = ((x121/x122)<(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x125 = 2452U;
	int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	uint8_t x128 = 1U;
	volatile int32_t t31 = 97714;

	t31 = ((x125/x126)<(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x129 = UINT16_MAX;
	uint32_t x130 = 859397U;
	int32_t x131 = INT32_MIN;
	volatile int16_t x132 = INT16_MIN;
	int32_t t32 = 1360999;

	t32 = ((x129/x130)<(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = INT8_MIN;
	volatile int32_t t33 = -657813;

	t33 = ((x133/x134)<(x135%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = 2;
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -1LL;
	volatile int32_t t34 = 1;

	t34 = ((x137/x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	uint16_t x142 = 3U;
	volatile int16_t x143 = INT16_MIN;
	volatile int8_t x144 = -1;

	t35 = ((x141/x142)<(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -1;
	static uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 42751;

	t36 = ((x145/x146)<(x147%x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int16_t x150 = 11539;
	int64_t x151 = -222775940859873LL;
	int32_t t37 = -51197494;

	t37 = ((x149/x150)<(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	static int32_t x154 = INT32_MIN;
	volatile int32_t x155 = INT32_MAX;
	static int64_t x156 = 1LL;

	t38 = ((x153/x154)<(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	static uint8_t x158 = 2U;
	uint8_t x159 = 1U;
	uint8_t x160 = 102U;

	t39 = ((x157/x158)<(x159%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 750247485350392LLU;
	uint64_t x162 = 799230LLU;
	volatile int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -1;

	t40 = ((x161/x162)<(x163%x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	int8_t x167 = INT8_MAX;
	static uint32_t x168 = 160027U;
	int32_t t41 = -350923165;

	t41 = ((x165/x166)<(x167%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	int16_t x171 = INT16_MAX;
	static int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 32254;

	t42 = ((x169/x170)<(x171%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x174 = UINT8_MAX;
	static int32_t x175 = INT32_MIN;
	int32_t x176 = 198776621;
	volatile int32_t t43 = -3611;

	t43 = ((x173/x174)<(x175%x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x180 = 92353964271LLU;
	int32_t t44 = 27422;

	t44 = ((x177/x178)<(x179%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	static int32_t x182 = 1;
	uint32_t x183 = UINT32_MAX;
	volatile int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = 29;

	t45 = ((x181/x182)<(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int32_t x186 = 1;
	volatile int8_t x187 = INT8_MIN;
	int16_t x188 = -1;

	t46 = ((x185/x186)<(x187%x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 66309679U;

	t47 = ((x189/x190)<(x191%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 12482U;
	static uint32_t x194 = 14793U;
	volatile uint8_t x195 = UINT8_MAX;
	int16_t x196 = -1;

	t48 = ((x193/x194)<(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 22017U;
	volatile int32_t x198 = -1;
	int16_t x199 = 12;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 436;

	t49 = ((x197/x198)<(x199%x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MAX;
	int8_t x203 = 0;
	int32_t x204 = INT32_MIN;

	t50 = ((x201/x202)<(x203%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -6683165LL;
	int32_t x206 = INT32_MAX;
	int64_t x207 = -1LL;
	static int64_t x208 = 1471908030942782LL;

	t51 = ((x205/x206)<(x207%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 596491U;
	int8_t x212 = -1;
	volatile int32_t t52 = 46560;

	t52 = ((x209/x210)<(x211%x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	static int32_t x215 = 7928008;
	int32_t t53 = 916543;

	t53 = ((x213/x214)<(x215%x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -1;
	uint8_t x218 = 14U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;

	t54 = ((x217/x218)<(x219%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	volatile int8_t x223 = INT8_MIN;
	uint8_t x224 = 8U;

	t55 = ((x221/x222)<(x223%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 48309798803LL;
	int32_t x230 = -1;
	volatile int32_t x231 = 169041;
	volatile uint64_t x232 = 1557928644487969977LLU;
	int32_t t56 = 13847;

	t56 = ((x229/x230)<(x231%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 673766447U;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MAX;
	uint32_t x236 = 29U;
	int32_t t57 = -41569381;

	t57 = ((x233/x234)<(x235%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	static int32_t x240 = INT32_MAX;
	static volatile int32_t t58 = 216192;

	t58 = ((x237/x238)<(x239%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = 974;
	int64_t x242 = -1LL;
	int64_t x243 = -1LL;
	static volatile uint8_t x244 = 11U;
	int32_t t59 = -301317;

	t59 = ((x241/x242)<(x243%x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x245 = 2U;
	int64_t x246 = -47LL;
	static int8_t x247 = -1;
	int32_t t60 = -1;

	t60 = ((x245/x246)<(x247%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 1614884216771LL;
	uint16_t x250 = 15233U;
	int32_t x251 = INT32_MIN;
	uint16_t x252 = 11U;
	volatile int32_t t61 = -6216;

	t61 = ((x249/x250)<(x251%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x255 = INT16_MAX;
	volatile int32_t t62 = -9218427;

	t62 = ((x253/x254)<(x255%x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x257 = INT32_MAX;
	uint32_t x258 = UINT32_MAX;
	int64_t x260 = INT64_MAX;
	volatile int32_t t63 = 14921919;

	t63 = ((x257/x258)<(x259%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x261 = INT64_MIN;
	int16_t x263 = -1;
	volatile int32_t x264 = 418;
	int32_t t64 = -6104583;

	t64 = ((x261/x262)<(x263%x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = 15260699U;
	volatile int32_t x267 = 3116;
	int32_t t65 = -30;

	t65 = ((x265/x266)<(x267%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = 54;
	uint8_t x270 = 9U;
	static int16_t x272 = INT16_MIN;
	int32_t t66 = -29207871;

	t66 = ((x269/x270)<(x271%x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x273 = 408LLU;
	uint16_t x274 = 1U;
	uint64_t x276 = 180032417LLU;
	int32_t t67 = 438951233;

	t67 = ((x273/x274)<(x275%x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	static int64_t x278 = 2LL;
	volatile uint16_t x280 = 107U;

	t68 = ((x277/x278)<(x279%x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 6068816626LLU;
	static volatile int32_t x283 = 427;
	static volatile int16_t x284 = -1;
	int32_t t69 = 46;

	t69 = ((x281/x282)<(x283%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = 9;
	uint8_t x286 = 2U;
	uint16_t x287 = 18U;
	static volatile uint64_t x288 = UINT64_MAX;
	volatile int32_t t70 = -156;

	t70 = ((x285/x286)<(x287%x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = 16449LL;
	static int64_t x290 = INT64_MAX;
	uint8_t x291 = 3U;
	int64_t x292 = -52059LL;
	int32_t t71 = 1;

	t71 = ((x289/x290)<(x291%x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 1;
	uint64_t x298 = 33723260621LLU;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t t72 = 0;

	t72 = ((x297/x298)<(x299%x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = 477;
	volatile int32_t x302 = -4876005;
	static int32_t x303 = INT32_MIN;
	uint8_t x304 = 39U;

	t73 = ((x301/x302)<(x303%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = INT8_MIN;
	static volatile int32_t x306 = INT32_MAX;
	static int8_t x307 = INT8_MIN;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t74 = -66653;

	t74 = ((x305/x306)<(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 20473U;
	static volatile uint32_t x310 = 63502U;
	int16_t x311 = 2163;
	int8_t x312 = INT8_MIN;
	int32_t t75 = 7495340;

	t75 = ((x309/x310)<(x311%x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = -1;
	int32_t x314 = -1;
	uint16_t x315 = 15U;
	int32_t t76 = 109912867;

	t76 = ((x313/x314)<(x315%x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x317 = UINT16_MAX;
	volatile int16_t x318 = -7;
	static int64_t x319 = -1LL;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t77 = -2;

	t77 = ((x317/x318)<(x319%x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	volatile int8_t x324 = INT8_MAX;
	int32_t t78 = 266878;

	t78 = ((x321/x322)<(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x326 = -6562;
	static int8_t x327 = 9;
	volatile int32_t t79 = 139961460;

	t79 = ((x325/x326)<(x327%x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = INT32_MIN;
	static uint32_t x330 = UINT32_MAX;
	static int16_t x332 = 2;
	volatile int32_t t80 = 66669;

	t80 = ((x329/x330)<(x331%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x334 = -1;

	t81 = ((x333/x334)<(x335%x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = -1;
	volatile uint32_t x338 = UINT32_MAX;
	volatile int16_t x339 = -1;
	volatile int32_t x340 = INT32_MIN;
	int32_t t82 = 4091;

	t82 = ((x337/x338)<(x339%x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MAX;
	int32_t x343 = -1;
	uint16_t x344 = 39U;
	int32_t t83 = -883;

	t83 = ((x341/x342)<(x343%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x346 = INT8_MAX;
	static int32_t x347 = -96;
	int16_t x348 = INT16_MIN;
	int32_t t84 = 31347454;

	t84 = ((x345/x346)<(x347%x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 324087171U;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = -1LL;
	volatile int32_t t85 = 30;

	t85 = ((x349/x350)<(x351%x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = -1LL;
	int16_t x355 = INT16_MIN;
	volatile int32_t t86 = 1058679510;

	t86 = ((x353/x354)<(x355%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x357 = INT16_MAX;
	uint16_t x358 = 963U;
	static int8_t x359 = INT8_MIN;
	int32_t t87 = -660529;

	t87 = ((x357/x358)<(x359%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x362 = INT8_MAX;
	uint32_t x363 = UINT32_MAX;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t88 = -34;

	t88 = ((x361/x362)<(x363%x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = INT32_MIN;
	volatile int32_t x367 = INT32_MIN;
	int32_t t89 = -526377488;

	t89 = ((x365/x366)<(x367%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = -163067928375231LL;
	int8_t x371 = INT8_MAX;
	volatile int32_t x372 = -1;

	t90 = ((x369/x370)<(x371%x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = -1;
	uint32_t x375 = 3483558U;
	int32_t t91 = -11108713;

	t91 = ((x373/x374)<(x375%x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x377 = 50U;
	uint64_t x378 = UINT64_MAX;
	int64_t x380 = -1LL;
	volatile int32_t t92 = 44;

	t92 = ((x377/x378)<(x379%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = INT16_MIN;
	int32_t x386 = 4;
	volatile int32_t x387 = INT32_MAX;
	int32_t x388 = 49985522;

	t93 = ((x385/x386)<(x387%x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x390 = UINT64_MAX;
	static int64_t x391 = -1LL;
	int16_t x392 = -1;
	volatile int32_t t94 = 436376;

	t94 = ((x389/x390)<(x391%x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	volatile int32_t x396 = INT32_MIN;
	int32_t t95 = 1;

	t95 = ((x393/x394)<(x395%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = -1LL;
	static int16_t x398 = INT16_MIN;
	static int64_t x400 = INT64_MIN;

	t96 = ((x397/x398)<(x399%x400));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x401 = -1590745;
	int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;

	t97 = ((x401/x402)<(x403%x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MAX;
	int64_t x406 = -1LL;
	volatile int16_t x407 = -1;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t98 = 5710478;

	t98 = ((x405/x406)<(x407%x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = 3;
	int64_t x410 = 751444422390652LL;
	uint16_t x411 = 2U;
	volatile int32_t t99 = 64880115;

	t99 = ((x409/x410)<(x411%x412));

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

