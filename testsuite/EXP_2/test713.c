#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x1 = -1LL;
int64_t t0 = 1LL;
int8_t x7 = INT8_MIN;
static uint64_t t1 = 1505910422LLU;
int8_t x13 = INT8_MIN;
static volatile int8_t x14 = -13;
static uint32_t t2 = 1U;
int16_t x20 = 36;
int64_t t3 = -264061780982705167LL;
static int64_t x24 = INT64_MIN;
int64_t t4 = -4122320443678LL;
int64_t x27 = INT64_MIN;
uint64_t x39 = 5LLU;
static int64_t x46 = INT64_MIN;
int8_t x48 = -1;
volatile uint64_t t10 = 230454077137LLU;
volatile uint64_t t11 = 3715102860164LLU;
int8_t x59 = 1;
static uint64_t t12 = 179335273447LLU;
int8_t x62 = INT8_MIN;
int16_t x63 = INT16_MIN;
volatile int64_t x64 = 27LL;
uint32_t x65 = UINT32_MAX;
volatile uint8_t x66 = 40U;
volatile int64_t t14 = 389982813LL;
int32_t x81 = INT32_MIN;
static volatile uint64_t t15 = 1LLU;
int8_t x88 = -1;
uint32_t x95 = UINT32_MAX;
static int8_t x97 = 28;
int8_t x98 = 1;
int8_t x99 = INT8_MIN;
static int16_t x101 = INT16_MIN;
int64_t t20 = 13520532LL;
volatile uint64_t x106 = 1LLU;
int32_t x113 = 4631;
static int8_t x116 = -1;
int16_t x120 = -3527;
int64_t x136 = INT64_MIN;
static int64_t t31 = INT64_MIN;
uint8_t x151 = UINT8_MAX;
int32_t x156 = INT32_MIN;
volatile int32_t t33 = -1398;
int32_t x163 = INT32_MIN;
volatile int64_t t36 = 2LL;
static int8_t x169 = INT8_MIN;
uint32_t t38 = 3280830U;
int64_t t39 = -8048191650755247LL;
uint32_t x191 = UINT32_MAX;
uint8_t x200 = UINT8_MAX;
int8_t x203 = 8;
int32_t x210 = -1;
int64_t x212 = INT64_MAX;
int32_t x214 = -56;
volatile int16_t x219 = INT16_MIN;
volatile int64_t x221 = 3770469015LL;
int16_t x222 = INT16_MIN;
int8_t x226 = -1;
uint64_t x227 = 4029796938LLU;
int16_t x230 = INT16_MIN;
int32_t t51 = -40009443;
uint8_t x243 = UINT8_MAX;
int8_t x244 = INT8_MIN;
volatile int32_t x246 = INT32_MAX;
int64_t x247 = 12585LL;
uint32_t x257 = 10112U;
uint16_t x264 = 6553U;
volatile int16_t x270 = INT16_MAX;
static volatile int32_t x273 = INT32_MIN;
int64_t x275 = -922422006831030LL;
int16_t x282 = INT16_MIN;
uint32_t x283 = 175530671U;
int32_t x292 = 21;
volatile int8_t x295 = INT8_MIN;
uint64_t x296 = UINT64_MAX;
uint16_t x299 = 30998U;
int64_t x300 = INT64_MIN;
int64_t t67 = INT64_MIN;
uint8_t x304 = 85U;
int8_t x313 = -1;
uint32_t x315 = 469329376U;
int8_t x317 = INT8_MAX;
int32_t x322 = INT32_MAX;
static volatile uint16_t x323 = UINT16_MAX;
volatile int16_t x338 = INT16_MAX;
int8_t x343 = -1;
int8_t x348 = INT8_MIN;
static volatile int16_t x352 = INT16_MAX;
static uint16_t x358 = 1U;
int64_t x363 = INT64_MIN;
int32_t x370 = INT32_MAX;
static volatile uint8_t x371 = 7U;
static uint16_t x375 = 23U;
int8_t x384 = -2;
uint64_t t88 = 48377188044LLU;
int16_t x400 = -1;
volatile uint64_t x403 = UINT64_MAX;
volatile int64_t x418 = 16504903098244LL;
uint8_t x425 = 0U;
volatile int64_t x426 = 399234LL;
volatile int16_t x430 = INT16_MIN;
int8_t x433 = -1;
volatile int8_t x439 = INT8_MIN;
int8_t x444 = INT8_MIN;


void f0(void) {
	int32_t x2 = 16;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 133U;

	t0 = ((x1*(x2%x3))&x4);

	if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 29U;
	uint64_t x6 = UINT64_MAX;
	static volatile int16_t x8 = -1;

	t1 = ((x5*(x6%x7))&x8);

	if (t1 != 3683LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x15 = UINT32_MAX;
	int8_t x16 = -1;

	t2 = ((x13*(x14%x15))&x16);

	if (t2 != 1664U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 83U;
	int64_t x18 = -6591980105LL;
	static int32_t x19 = INT32_MIN;

	t3 = ((x17*(x18%x19))&x20);

	if (t3 != 4LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 15205795U;
	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MAX;

	t4 = ((x21*(x22%x23))&x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 0U;
	static volatile int16_t x26 = -1;
	static volatile uint64_t x28 = 906LLU;
	uint64_t t5 = 106590680506LLU;

	t5 = ((x25*(x26%x27))&x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	volatile int32_t x30 = INT32_MIN;
	uint64_t x31 = 29LLU;
	int8_t x32 = -1;
	uint64_t t6 = 100LLU;

	t6 = ((x29*(x30%x31))&x32);

	if (t6 != 2032LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = -4186922000709771LL;
	static uint8_t x40 = UINT8_MAX;
	volatile uint64_t t7 = 4LLU;

	t7 = ((x37*(x38%x39))&x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = UINT8_MAX;
	int32_t x42 = 24;
	static volatile int32_t x43 = INT32_MAX;
	static int64_t x44 = INT64_MAX;
	volatile int64_t t8 = 3LL;

	t8 = ((x41*(x42%x43))&x44);

	if (t8 != 6120LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 1U;
	uint16_t x47 = 168U;
	static volatile int64_t t9 = 3356672959LL;

	t9 = ((x45*(x46%x47))&x48);

	if (t9 != -8LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 10U;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = -34611236082885LL;
	static volatile uint64_t x52 = UINT64_MAX;

	t10 = ((x49*(x50%x51))&x52);

	if (t10 != 2550LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -252875212;
	volatile uint64_t x54 = 30600731LLU;
	uint64_t x55 = 939331922004LLU;
	int32_t x56 = -1;

	t11 = ((x53*(x54%x55))&x56);

	if (t11 != 18439005907370571644LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 471643LLU;
	static int16_t x58 = -9665;
	int32_t x60 = -1;

	t12 = ((x57*(x58%x59))&x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int64_t t13 = 37576026LL;

	t13 = ((x61*(x62%x63))&x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x67 = INT64_MAX;
	volatile int16_t x68 = -1;

	t14 = ((x65*(x66%x67))&x68);

	if (t14 != 171798691800LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x82 = -1294762256042581466LL;
	uint64_t x83 = 7LLU;
	int64_t x84 = INT64_MIN;

	t15 = ((x81*(x82%x83))&x84);

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	volatile int32_t x86 = INT32_MIN;
	volatile uint32_t x87 = 2U;
	volatile uint32_t t16 = 0U;

	t16 = ((x85*(x86%x87))&x88);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x89 = -1;
	int16_t x90 = -236;
	volatile int32_t x91 = 1;
	int8_t x92 = -1;
	int32_t t17 = 1925150;

	t17 = ((x89*(x90%x91))&x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x93 = 3U;
	static uint16_t x94 = 35U;
	volatile int16_t x96 = INT16_MAX;
	volatile uint32_t t18 = 3966U;

	t18 = ((x93*(x94%x95))&x96);

	if (t18 != 105U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x100 = INT8_MIN;
	static volatile int32_t t19 = -320891;

	t19 = ((x97*(x98%x99))&x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x102 = INT8_MAX;
	int64_t x103 = INT64_MAX;
	int16_t x104 = -1;

	t20 = ((x101*(x102%x103))&x104);

	if (t20 != -4161536LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = 5935U;
	static int16_t x107 = -1;
	volatile uint32_t x108 = 112022U;
	static uint64_t t21 = 2809965034508578532LLU;

	t21 = ((x105*(x106%x107))&x108);

	if (t21 != 5382LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x109 = UINT8_MAX;
	int64_t x110 = -1LL;
	static int64_t x111 = INT64_MIN;
	int8_t x112 = -1;
	int64_t t22 = 3915527188017679LL;

	t22 = ((x109*(x110%x111))&x112);

	if (t22 != -255LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x114 = 4U;
	int16_t x115 = INT16_MAX;
	volatile int32_t t23 = -520399960;

	t23 = ((x113*(x114%x115))&x116);

	if (t23 != 18524) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = 480LLU;
	int64_t x119 = INT64_MIN;
	volatile uint64_t t24 = 4LLU;

	t24 = ((x117*(x118%x119))&x120);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x121 = 1292710449587LLU;
	int16_t x122 = INT16_MAX;
	volatile int64_t x123 = -15731LL;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t25 = 976949LLU;

	t25 = ((x121*(x122%x123))&x124);

	if (t25 != 1686987136696320LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 20634LLU;
	int16_t x126 = INT16_MIN;
	int8_t x127 = 1;
	int8_t x128 = 2;
	uint64_t t26 = 1777392LLU;

	t26 = ((x125*(x126%x127))&x128);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 576463245U;
	uint8_t x130 = 58U;
	uint16_t x131 = 427U;
	volatile int64_t x132 = 107LL;
	volatile int64_t t27 = 32656763219LL;

	t27 = ((x129*(x130%x131))&x132);

	if (t27 != 98LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = INT8_MIN;
	uint8_t x134 = 101U;
	int32_t x135 = 841569;
	int64_t t28 = INT64_MIN;

	t28 = ((x133*(x134%x135))&x136);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -15;
	static int8_t x138 = 20;
	int16_t x139 = INT16_MIN;
	volatile uint32_t x140 = 0U;
	uint32_t t29 = 5789347U;

	t29 = ((x137*(x138%x139))&x140);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 20U;
	volatile int64_t t30 = -4388LL;

	t30 = ((x141*(x142%x143))&x144);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	uint16_t x147 = 21164U;
	volatile int8_t x148 = INT8_MIN;

	t31 = ((x145*(x146%x147))&x148);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MAX;
	static uint64_t x150 = 32065799179793415LLU;
	int8_t x152 = 1;
	uint64_t t32 = 849277625393LLU;

	t32 = ((x149*(x150%x151))&x152);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 1U;
	int16_t x154 = 10499;
	int8_t x155 = INT8_MIN;

	t33 = ((x153*(x154%x155))&x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x157 = INT8_MIN;
	volatile int64_t x158 = INT64_MIN;
	volatile int16_t x159 = INT16_MIN;
	static uint64_t x160 = 1191341832102LLU;
	static uint64_t t34 = 279841207154LLU;

	t34 = ((x157*(x158%x159))&x160);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MAX;
	static int64_t x162 = -5422644532LL;
	int32_t x164 = 0;
	volatile int64_t t35 = 6329797203327012LL;

	t35 = ((x161*(x162%x163))&x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	static int16_t x166 = -7;
	int8_t x167 = -1;
	volatile int64_t x168 = INT64_MAX;

	t36 = ((x165*(x166%x167))&x168);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x170 = INT32_MIN;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = -3;
	int32_t t37 = -7;

	t37 = ((x169*(x170%x171))&x172);

	if (t37 != 16384) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 1U;
	static int8_t x176 = INT8_MIN;

	t38 = ((x173*(x174%x175))&x176);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x185 = 500U;
	static uint16_t x186 = 403U;
	int64_t x187 = INT64_MIN;
	static uint16_t x188 = UINT16_MAX;

	t39 = ((x185*(x186%x187))&x188);

	if (t39 != 4892LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x189 = UINT16_MAX;
	static int32_t x190 = INT32_MAX;
	int32_t x192 = 17239;
	static uint32_t t40 = 83087U;

	t40 = ((x189*(x190%x191))&x192);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x193 = 1287757179U;
	int16_t x194 = INT16_MAX;
	int32_t x195 = INT32_MIN;
	static uint64_t x196 = UINT64_MAX;
	uint64_t t41 = 6588712044581810728LLU;

	t41 = ((x193*(x194%x195))&x196);

	if (t41 != 2180768389LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x197 = 3028931927382LL;
	uint64_t x198 = 3298LLU;
	uint16_t x199 = 1U;
	static volatile uint64_t t42 = 5785719LLU;

	t42 = ((x197*(x198%x199))&x200);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x201 = INT16_MIN;
	int64_t x202 = -1859775LL;
	int64_t x204 = 72701LL;
	static int64_t t43 = -544260224418397118LL;

	t43 = ((x201*(x202%x203))&x204);

	if (t43 != 65536LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = 2;
	uint8_t x207 = 8U;
	int16_t x208 = -1;
	volatile int32_t t44 = -23766;

	t44 = ((x205*(x206%x207))&x208);

	if (t44 != 131070) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	static uint64_t x211 = 64889LLU;
	static volatile uint64_t t45 = 714646135764LLU;

	t45 = ((x209*(x210%x211))&x212);

	if (t45 != 9223372035655434240LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x213 = 12113LLU;
	static uint64_t x215 = UINT64_MAX;
	static int32_t x216 = -1;
	volatile uint64_t t46 = 3LLU;

	t46 = ((x213*(x214%x215))&x216);

	if (t46 != 18446744073708873288LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 6LLU;
	int8_t x218 = -1;
	volatile int8_t x220 = -1;
	uint64_t t47 = 375097143LLU;

	t47 = ((x217*(x218%x219))&x220);

	if (t47 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x223 = INT8_MIN;
	int16_t x224 = 5223;
	static volatile int64_t t48 = -26209827062475LL;

	t48 = ((x221*(x222%x223))&x224);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x228 = 369U;
	uint64_t t49 = 2543330423721576LLU;

	t49 = ((x225*(x226%x227))&x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x229 = 5179LLU;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 1303081198201100LLU;
	volatile uint64_t t50 = 38206437412LLU;

	t50 = ((x229*(x230%x231))&x232);

	if (t50 != 1303081029632000LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x234 = -8537;
	volatile uint16_t x235 = 18355U;
	volatile int32_t x236 = INT32_MIN;

	t51 = ((x233*(x234%x235))&x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	static volatile int32_t x238 = INT32_MAX;
	static int64_t x239 = -1LL;
	int32_t x240 = INT32_MIN;
	static volatile int64_t t52 = 1763276382155420LL;

	t52 = ((x237*(x238%x239))&x240);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = -1;
	volatile int64_t x242 = -3932438LL;
	int64_t t53 = 99887158341LL;

	t53 = ((x241*(x242%x243))&x244);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -1;
	int8_t x248 = INT8_MIN;
	volatile int64_t t54 = -3478784612028LL;

	t54 = ((x245*(x246%x247))&x248);

	if (t54 != -4480LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = 1;
	static uint16_t x250 = UINT16_MAX;
	int16_t x251 = -2671;
	static volatile uint64_t x252 = UINT64_MAX;
	uint64_t t55 = 3768484290583664LLU;

	t55 = ((x249*(x250%x251))&x252);

	if (t55 != 1431LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = -14314138956LL;
	uint8_t x254 = 3U;
	int16_t x255 = -1;
	uint64_t x256 = UINT64_MAX;
	uint64_t t56 = 458108041406325LLU;

	t56 = ((x253*(x254%x255))&x256);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x258 = INT64_MIN;
	uint64_t x259 = 15948929170LLU;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t57 = 9689324925LLU;

	t57 = ((x257*(x258%x259))&x260);

	if (t57 != 143386005405696LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = -1;
	int64_t x263 = INT64_MIN;
	int64_t t58 = 4952899903284033LL;

	t58 = ((x261*(x262%x263))&x264);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = 1;
	int8_t x267 = -1;
	volatile uint16_t x268 = 6032U;
	int32_t t59 = 244782661;

	t59 = ((x265*(x266%x267))&x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	static int64_t x271 = -210LL;
	int8_t x272 = -40;
	static volatile int64_t t60 = -2961162LL;

	t60 = ((x269*(x270%x271))&x272);

	if (t60 != 229336LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x274 = 26;
	int32_t x276 = -1;
	static int64_t t61 = 747759907LL;

	t61 = ((x273*(x274%x275))&x276);

	if (t61 != -55834574848LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = -30;
	static int32_t x278 = -32048;
	int8_t x279 = INT8_MIN;
	static uint8_t x280 = UINT8_MAX;
	int32_t t62 = -182045366;

	t62 = ((x277*(x278%x279))&x280);

	if (t62 != 160) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	uint32_t t63 = 54905955U;

	t63 = ((x281*(x282%x283))&x284);

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = 6771045;
	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	static int64_t x288 = -1LL;
	static int64_t t64 = 6904590085133010LL;

	t64 = ((x285*(x286%x287))&x288);

	if (t64 != -221873602560LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MAX;
	static uint64_t x290 = 20920005078366LLU;
	int64_t x291 = -66632LL;
	uint64_t t65 = 18921LLU;

	t65 = ((x289*(x290%x291))&x292);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = 0;
	static int64_t x294 = -4338870104767LL;
	volatile uint64_t t66 = 212711525115LLU;

	t66 = ((x293*(x294%x295))&x296);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = 1;

	t67 = ((x297*(x298%x299))&x300);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 1U;
	volatile int32_t t68 = -76039620;

	t68 = ((x301*(x302%x303))&x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x305 = UINT32_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	int8_t x307 = 46;
	static int32_t x308 = 170731;
	uint32_t t69 = 116U;

	t69 = ((x305*(x306%x307))&x308);

	if (t69 != 170721U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x309 = -1LL;
	uint16_t x310 = 5U;
	static int32_t x311 = INT32_MIN;
	static uint64_t x312 = 147276443980813779LLU;
	volatile uint64_t t70 = 130938744383LLU;

	t70 = ((x309*(x310%x311))&x312);

	if (t70 != 147276443980813779LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x314 = 6U;
	int16_t x316 = -6;
	uint32_t t71 = 3U;

	t71 = ((x313*(x314%x315))&x316);

	if (t71 != 4294967290U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x318 = 1LLU;
	int64_t x319 = 1363441126867LL;
	int16_t x320 = -1;
	volatile uint64_t t72 = 140170352289992LLU;

	t72 = ((x317*(x318%x319))&x320);

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MAX;
	static volatile int8_t x324 = 2;
	int32_t t73 = 1811316;

	t73 = ((x321*(x322%x323))&x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = 2257U;
	uint16_t x334 = 888U;
	volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = -1;
	static volatile uint64_t t74 = 114LLU;

	t74 = ((x333*(x334%x335))&x336);

	if (t74 != 2004216LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x337 = UINT8_MAX;
	volatile int8_t x339 = -2;
	int16_t x340 = INT16_MIN;
	int32_t t75 = -700;

	t75 = ((x337*(x338%x339))&x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MAX;
	uint16_t x344 = 1U;
	volatile int64_t t76 = -2514873759313935586LL;

	t76 = ((x341*(x342%x343))&x344);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t t77 = -197189;

	t77 = ((x345*(x346%x347))&x348);

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x349 = 126LLU;
	int16_t x350 = -769;
	int32_t x351 = INT32_MAX;
	volatile uint64_t t78 = 11559027752711LLU;

	t78 = ((x349*(x350%x351))&x352);

	if (t78 != 1410LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x357 = INT16_MAX;
	static int32_t x359 = -3;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t79 = 10391449312LLU;

	t79 = ((x357*(x358%x359))&x360);

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	int8_t x362 = INT8_MIN;
	int8_t x364 = 1;
	int64_t t80 = 112760LL;

	t80 = ((x361*(x362%x363))&x364);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = -53;
	volatile int8_t x366 = -1;
	volatile int64_t x367 = INT64_MIN;
	volatile uint64_t x368 = UINT64_MAX;
	static uint64_t t81 = 16464077832LLU;

	t81 = ((x365*(x366%x367))&x368);

	if (t81 != 53LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = -1LL;
	int32_t x372 = INT32_MIN;
	int64_t t82 = 0LL;

	t82 = ((x369*(x370%x371))&x372);

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MIN;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t83 = 82890070;

	t83 = ((x373*(x374%x375))&x376);

	if (t83 != 13) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x377 = INT8_MIN;
	static volatile int8_t x378 = INT8_MAX;
	int32_t x379 = 3978609;
	volatile int32_t x380 = INT32_MAX;
	static int32_t t84 = 2975538;

	t84 = ((x377*(x378%x379))&x380);

	if (t84 != 2147467392) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x381 = 0U;
	uint64_t x382 = 4641411577LLU;
	static volatile int16_t x383 = INT16_MAX;
	volatile uint64_t t85 = 49549098469LLU;

	t85 = ((x381*(x382%x383))&x384);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = -16LL;
	static int32_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile int64_t t86 = -1LL;

	t86 = ((x385*(x386%x387))&x388);

	if (t86 != 16LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 385735LLU;
	uint16_t x392 = UINT16_MAX;
	uint64_t t87 = 2847635LLU;

	t87 = ((x389*(x390%x391))&x392);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x393 = INT16_MIN;
	uint64_t x394 = 3628898LLU;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MAX;

	t88 = ((x393*(x394%x395))&x396);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x397 = -1;
	static uint64_t x398 = 2LLU;
	volatile int32_t x399 = INT32_MIN;
	volatile uint64_t t89 = 408618273727119LLU;

	t89 = ((x397*(x398%x399))&x400);

	if (t89 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x401 = 13435471611934LL;
	uint32_t x402 = 2137U;
	static int32_t x404 = INT32_MIN;
	uint64_t t90 = 286LLU;

	t90 = ((x401*(x402%x403))&x404);

	if (t90 != 28711600823205888LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MIN;
	static int16_t x406 = 1;
	static int32_t x407 = -1;
	uint32_t x408 = 15014959U;
	static volatile int64_t t91 = 3667LL;

	t91 = ((x405*(x406%x407))&x408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x409 = 2U;
	volatile uint64_t x410 = 103349LLU;
	int64_t x411 = INT64_MAX;
	uint32_t x412 = 110U;
	volatile uint64_t t92 = 50LLU;

	t92 = ((x409*(x410%x411))&x412);

	if (t92 != 106LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	volatile uint8_t x414 = 50U;
	int64_t x415 = INT64_MIN;
	volatile int32_t x416 = 2;
	static int64_t t93 = 23927454181LL;

	t93 = ((x413*(x414%x415))&x416);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MIN;
	static int16_t x419 = INT16_MAX;
	int32_t x420 = -247986;
	int64_t t94 = -3986555LL;

	t94 = ((x417*(x418%x419))&x420);

	if (t94 != -42513733779456LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x427 = 27U;
	int8_t x428 = -1;
	int64_t t95 = 284859507904132271LL;

	t95 = ((x425*(x426%x427))&x428);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x429 = -1;
	int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MAX;
	volatile int32_t t96 = 268765479;

	t96 = ((x429*(x430%x431))&x432);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x434 = 2;
	static int8_t x435 = INT8_MAX;
	static int16_t x436 = 313;
	volatile int32_t t97 = -41140;

	t97 = ((x433*(x434%x435))&x436);

	if (t97 != 312) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x437 = INT32_MIN;
	int16_t x438 = 1;
	int32_t x440 = -745741142;
	static volatile int32_t t98 = INT32_MIN;

	t98 = ((x437*(x438%x439))&x440);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x441 = UINT32_MAX;
	volatile uint16_t x442 = UINT16_MAX;
	volatile int64_t x443 = INT64_MIN;
	volatile int64_t t99 = -1LL;

	t99 = ((x441*(x442%x443))&x444);

	if (t99 != 281470681677824LL) { NG(); } else { ; }
	
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

