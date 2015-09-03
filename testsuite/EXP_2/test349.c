#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 26LL;
volatile int32_t x22 = 7;
int16_t x23 = 199;
volatile uint8_t x27 = UINT8_MAX;
static int8_t x37 = INT8_MIN;
volatile uint64_t x38 = UINT64_MAX;
static int8_t x50 = INT8_MIN;
uint64_t t11 = 1758812083939257085LLU;
uint32_t x59 = 79282417U;
int64_t t13 = 951625210194LL;
static int8_t x70 = INT8_MIN;
int64_t x77 = 3014761868966531LL;
volatile int64_t t15 = -24202594519266741LL;
static int64_t x91 = 35LL;
volatile uint64_t t16 = 1084149775790357403LLU;
uint64_t x98 = UINT64_MAX;
static int8_t x121 = -1;
uint64_t t22 = 13143789106958LLU;
int8_t x159 = INT8_MIN;
volatile int64_t t25 = -690011750LL;
static int16_t x166 = INT16_MAX;
int32_t x175 = -1;
int64_t t27 = 8034LL;
static volatile int64_t t28 = -925930977594687659LL;
volatile uint32_t x190 = 56778851U;
uint64_t x195 = 2LLU;
int32_t t33 = 248527;
static volatile uint32_t t35 = 25U;
volatile uint16_t x219 = 4U;
int16_t x220 = INT16_MIN;
int64_t x224 = INT64_MAX;
uint64_t x232 = UINT64_MAX;
int64_t x233 = -1LL;
int16_t x235 = 1;
uint32_t x236 = UINT32_MAX;
volatile uint32_t x253 = 12056U;
int8_t x255 = INT8_MIN;
int16_t x271 = INT16_MIN;
static int8_t x274 = 35;
static int64_t t45 = -3600145LL;
uint32_t x285 = 482654080U;
int64_t x289 = 0LL;
uint64_t x294 = 13417385LLU;
volatile int64_t x301 = INT64_MAX;
static int8_t x307 = 1;
uint32_t x309 = 7U;
uint16_t x323 = 0U;
int16_t x332 = INT16_MIN;
uint32_t x347 = 1445565U;
uint16_t x348 = UINT16_MAX;
static int32_t t60 = 11;
static volatile int16_t x370 = -1;
static uint32_t t61 = 234U;
int64_t x373 = INT64_MIN;
uint32_t x375 = UINT32_MAX;
static int64_t x376 = INT64_MIN;
uint16_t x379 = 0U;
uint64_t t63 = 15043LLU;
static int16_t x388 = INT16_MIN;
static uint32_t x390 = UINT32_MAX;
volatile int8_t x392 = -1;
uint8_t x396 = 27U;
volatile uint8_t x401 = 1U;
uint32_t x404 = UINT32_MAX;
volatile uint32_t t68 = 207708U;
uint8_t x405 = UINT8_MAX;
int32_t x408 = 187;
uint32_t t69 = 5U;
uint32_t x412 = 505U;
int32_t x425 = 0;
uint16_t x427 = UINT16_MAX;
uint16_t x439 = 2U;
uint8_t x440 = 16U;
uint16_t x450 = 2976U;
uint16_t x464 = UINT16_MAX;
volatile int32_t t80 = 13;
volatile int64_t t81 = 578389351LL;
volatile int16_t x477 = INT16_MAX;
int8_t x480 = 0;
static uint64_t t83 = 116869369918608LLU;
volatile int8_t x481 = -1;
int32_t x482 = 281614153;
int64_t x484 = INT64_MIN;
int64_t x487 = -98981083189LL;
uint64_t x499 = 804379916LLU;
volatile int64_t x500 = INT64_MAX;
volatile uint64_t t87 = 45817140209245LLU;
volatile int16_t x506 = 1;
volatile uint8_t x510 = 0U;
uint16_t x513 = UINT16_MAX;
int64_t t91 = -128LL;
int64_t t92 = 33172085843895LL;
volatile uint64_t t95 = 124217525410LLU;
static uint16_t x556 = UINT16_MAX;
volatile int8_t x557 = INT8_MIN;
int32_t x561 = INT32_MAX;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	static int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 63527;

	t0 = ((x1+(x2*x3))&x4);

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -19;
	static int8_t x7 = -1;
	static int64_t x8 = INT64_MAX;
	int64_t t1 = 7460LL;

	t1 = ((x5+(x6*x7))&x8);

	if (t1 != 9223372036854775763LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint8_t x10 = 43U;
	static uint32_t x11 = 3U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 9100LLU;

	t2 = ((x9+(x10*x11))&x12);

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = 101U;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 472936;

	t3 = ((x13+(x14*x15))&x16);

	if (t3 != 19712) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 833U;
	static int64_t x18 = 31LL;
	uint8_t x19 = UINT8_MAX;
	static volatile int64_t x20 = INT64_MAX;
	static int64_t t4 = 71LL;

	t4 = ((x17+(x18*x19))&x20);

	if (t4 != 8738LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint8_t x24 = 96U;
	volatile int64_t t5 = -5918282LL;

	t5 = ((x21+(x22*x23))&x24);

	if (t5 != 96LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	static volatile int64_t x26 = 494449256LL;
	int8_t x28 = INT8_MAX;
	static int64_t t6 = 2469671979431078994LL;

	t6 = ((x25+(x26*x27))&x28);

	if (t6 != 24LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 99U;
	static uint32_t x34 = 2887445U;
	int16_t x35 = 580;
	uint8_t x36 = 111U;
	uint32_t t7 = 5700U;

	t7 = ((x33+(x34*x35))&x36);

	if (t7 != 103U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = UINT8_MAX;
	uint64_t t8 = 6409LLU;

	t8 = ((x37+(x38*x39))&x40);

	if (t8 != 129LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -7;
	int16_t x46 = INT16_MAX;
	uint16_t x47 = 88U;
	int64_t x48 = -2657466177990911LL;
	static volatile int64_t t9 = 996410046609193LL;

	t9 = ((x45+(x46*x47))&x48);

	if (t9 != 2182913LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x49 = 1938U;
	volatile uint16_t x51 = 5U;
	uint16_t x52 = 3389U;
	static int32_t t10 = 2555;

	t10 = ((x49+(x50*x51))&x52);

	if (t10 != 1296) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x53 = 500620LLU;
	uint8_t x54 = 107U;
	static volatile int32_t x55 = 1185;
	volatile int8_t x56 = INT8_MIN;

	t11 = ((x53+(x54*x55))&x56);

	if (t11 != 627328LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static int64_t x58 = 22742583LL;
	static int64_t x60 = -1LL;
	int64_t t12 = -123742245938876LL;

	t12 = ((x57+(x58*x59))&x60);

	if (t12 != -9221568949905712697LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -1LL;
	volatile int64_t x66 = -248474LL;
	int32_t x67 = -1;
	static int16_t x68 = -1;

	t13 = ((x65+(x66*x67))&x68);

	if (t13 != 248473LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -3598;
	uint64_t x71 = 1LLU;
	int64_t x72 = -46056128937706LL;
	volatile uint64_t t14 = 127498611483202LLU;

	t14 = ((x69+(x70*x71))&x72);

	if (t14 != 18446698017580613906LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x78 = 31;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = -1;

	t15 = ((x77+(x78*x79))&x80);

	if (t15 != 3014761868962563LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x89 = 4318457481711098508LLU;
	uint16_t x90 = UINT16_MAX;
	int32_t x92 = -1;

	t16 = ((x89+(x90*x91))&x92);

	if (t16 != 4318457481713392233LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MIN;
	volatile uint8_t x94 = UINT8_MAX;
	volatile int16_t x95 = INT16_MAX;
	volatile uint32_t x96 = 112837U;
	volatile uint32_t t17 = 31741U;

	t17 = ((x93+(x94*x95))&x96);

	if (t17 != 79873U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MAX;
	int64_t x99 = 23880060706988LL;
	int16_t x100 = INT16_MIN;
	static volatile uint64_t t18 = 15090760454LLU;

	t18 = ((x97+(x98*x99))&x100);

	if (t18 != 18446720193648852992LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = INT32_MIN;
	static volatile int16_t x106 = 75;
	int16_t x107 = 245;
	uint16_t x108 = UINT16_MAX;
	static int32_t t19 = 0;

	t19 = ((x105+(x106*x107))&x108);

	if (t19 != 18375) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x122 = 12313U;
	volatile uint32_t x123 = 1U;
	uint8_t x124 = UINT8_MAX;
	volatile uint32_t t20 = 82U;

	t20 = ((x121+(x122*x123))&x124);

	if (t20 != 24U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x129 = 25517U;
	int32_t x130 = 546;
	uint8_t x131 = 29U;
	int64_t x132 = -173640LL;
	volatile int64_t t21 = 356511LL;

	t21 = ((x129+(x130*x131))&x132);

	if (t21 != 384LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x141 = UINT64_MAX;
	volatile int8_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = 40040878370LLU;

	t22 = ((x141+(x142*x143))&x144);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x149 = 0U;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = 179625U;
	static uint32_t t23 = 7721U;

	t23 = ((x149+(x150*x151))&x152);

	if (t23 != 128U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = INT8_MIN;
	uint32_t x158 = 271U;
	int8_t x160 = 10;
	static uint32_t t24 = 1565731481U;

	t24 = ((x157+(x158*x159))&x160);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = 12U;
	int8_t x163 = 0;
	int64_t x164 = 1063LL;

	t25 = ((x161+(x162*x163))&x164);

	if (t25 != 1063LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = -1;
	int16_t x167 = -1;
	uint32_t x168 = 2347205U;
	volatile uint32_t t26 = 99881706U;

	t26 = ((x165+(x166*x167))&x168);

	if (t26 != 2326528U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x173 = 13883203828812261LL;
	int32_t x174 = 756941;
	uint32_t x176 = 84689U;

	t27 = ((x173+(x174*x175))&x176);

	if (t27 != 83984LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MIN;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = -14LL;

	t28 = ((x177+(x178*x179))&x180);

	if (t28 != 2147483634LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x181 = 1738U;
	int8_t x182 = -1;
	volatile int16_t x183 = -26;
	int16_t x184 = INT16_MIN;
	static int32_t t29 = 64433608;

	t29 = ((x181+(x182*x183))&x184);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x185 = 409U;
	int64_t x186 = -1LL;
	volatile uint16_t x187 = 675U;
	uint64_t x188 = 7LLU;
	volatile uint64_t t30 = 41647LLU;

	t30 = ((x185+(x186*x187))&x188);

	if (t30 != 6LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = -828778;
	int8_t x191 = -1;
	static volatile uint8_t x192 = 92U;
	uint32_t t31 = 684669011U;

	t31 = ((x189+(x190*x191))&x192);

	if (t31 != 16U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = 3510858LL;
	uint64_t x194 = 28LLU;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t32 = 2759736919LLU;

	t32 = ((x193+(x194*x195))&x196);

	if (t32 != 3510912LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x197 = -1;
	int16_t x198 = 13;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = -21887778;

	t33 = ((x197+(x198*x199))&x200);

	if (t33 != 1234) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MAX;
	uint32_t x207 = 323431291U;
	int32_t x208 = INT32_MAX;
	uint32_t t34 = 7U;

	t34 = ((x205+(x206*x207))&x208);

	if (t34 != 273584645U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = -1;
	int32_t x210 = INT32_MIN;
	static uint32_t x211 = 3134U;
	int32_t x212 = -1462;

	t35 = ((x209+(x210*x211))&x212);

	if (t35 != 4294965834U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x218 = UINT16_MAX;
	int32_t t36 = 1013896170;

	t36 = ((x217+(x218*x219))&x220);

	if (t36 != 229376) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = 101;
	volatile uint32_t x222 = 1778893381U;
	int32_t x223 = -1;
	volatile int64_t t37 = -2177693922447LL;

	t37 = ((x221+(x222*x223))&x224);

	if (t37 != 2516074016LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x227 = -24;
	static uint32_t x228 = 1721757U;
	uint32_t t38 = 273783U;

	t38 = ((x225+(x226*x227))&x228);

	if (t38 != 1704960U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x229 = 15528536LLU;
	int16_t x230 = -1;
	volatile int32_t x231 = INT32_MAX;
	volatile uint64_t t39 = 11623959796602924LLU;

	t39 = ((x229+(x230*x231))&x232);

	if (t39 != 18446744071577596505LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x234 = INT8_MIN;
	volatile int64_t t40 = 15LL;

	t40 = ((x233+(x234*x235))&x236);

	if (t40 != 4294967167LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 0U;
	int32_t x247 = 4;
	static int16_t x248 = INT16_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = ((x245+(x246*x247))&x248);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x254 = INT16_MIN;
	static uint8_t x256 = UINT8_MAX;
	volatile uint32_t t42 = 961388430U;

	t42 = ((x253+(x254*x255))&x256);

	if (t42 != 24U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x265 = 1284LL;
	uint8_t x266 = 1U;
	int16_t x267 = INT16_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t43 = 32127934175838LL;

	t43 = ((x265+(x266*x267))&x268);

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x269 = -9;
	int32_t x270 = -1;
	static volatile uint64_t x272 = 2854419893LLU;
	static uint64_t t44 = 2694724891LLU;

	t44 = ((x269+(x270*x271))&x272);

	if (t44 != 32181LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x273 = 19LL;
	int32_t x275 = 121;
	int64_t x276 = INT64_MIN;

	t45 = ((x273+(x274*x275))&x276);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MIN;
	volatile uint64_t t46 = 921449LLU;

	t46 = ((x277+(x278*x279))&x280);

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	volatile uint32_t x283 = 2951129U;
	int64_t x284 = INT64_MIN;
	static int64_t t47 = -4968972517201LL;

	t47 = ((x281+(x282*x283))&x284);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x286 = INT8_MAX;
	uint16_t x287 = 12U;
	int64_t x288 = INT64_MIN;
	volatile int64_t t48 = -86601456LL;

	t48 = ((x285+(x286*x287))&x288);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x290 = -19504;
	int16_t x291 = -1090;
	int32_t x292 = -1;
	volatile int64_t t49 = 47LL;

	t49 = ((x289+(x290*x291))&x292);

	if (t49 != 21259360LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x293 = 19;
	volatile int64_t x295 = -672165920LL;
	uint8_t x296 = 50U;
	uint64_t t50 = 2242728134169546734LLU;

	t50 = ((x293+(x294*x295))&x296);

	if (t50 != 50LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x302 = 27U;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = INT32_MIN;
	int64_t t51 = 380LL;

	t51 = ((x301+(x302*x303))&x304);

	if (t51 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x305 = INT64_MIN;
	static volatile uint8_t x306 = 2U;
	int8_t x308 = -1;
	volatile int64_t t52 = -28LL;

	t52 = ((x305+(x306*x307))&x308);

	if (t52 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 4842U;
	uint64_t t53 = 26152991765741070LLU;

	t53 = ((x309+(x310*x311))&x312);

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = 11704528;
	static volatile uint32_t x314 = UINT32_MAX;
	volatile int16_t x315 = -1;
	int32_t x316 = -4;
	static volatile uint32_t t54 = 244924440U;

	t54 = ((x313+(x314*x315))&x316);

	if (t54 != 11704528U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = INT16_MIN;
	static int32_t x318 = INT32_MIN;
	int64_t x319 = -57639LL;
	uint32_t x320 = 4087U;
	int64_t t55 = -28LL;

	t55 = ((x317+(x318*x319))&x320);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t56 = 292642521480LLU;

	t56 = ((x321+(x322*x323))&x324);

	if (t56 != 255LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x329 = 5637U;
	static volatile int64_t x330 = -20443761LL;
	volatile int8_t x331 = INT8_MIN;
	volatile int64_t t57 = -49LL;

	t57 = ((x329+(x330*x331))&x332);

	if (t57 != 2616786944LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x341 = -66424878;
	static uint16_t x342 = 581U;
	int32_t x343 = -1;
	volatile int16_t x344 = -1;
	int32_t t58 = 107438;

	t58 = ((x341+(x342*x343))&x344);

	if (t58 != -66425459) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = -1;
	int16_t x346 = 482;
	static uint32_t t59 = 0U;

	t59 = ((x345+(x346*x347))&x348);

	if (t59 != 49113U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x353 = 14U;
	int8_t x354 = 57;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;

	t60 = ((x353+(x354*x355))&x356);

	if (t60 != -7282) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x369 = 1;
	static uint32_t x371 = 46935382U;
	volatile int16_t x372 = INT16_MIN;

	t61 = ((x369+(x370*x371))&x372);

	if (t61 != 4248010752U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x374 = -1;
	static volatile int64_t t62 = INT64_MIN;

	t62 = ((x373+(x374*x375))&x376);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x377 = UINT8_MAX;
	static uint64_t x378 = UINT64_MAX;
	int32_t x380 = INT32_MIN;

	t63 = ((x377+(x378*x379))&x380);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 237U;
	static volatile uint32_t t64 = 0U;

	t64 = ((x385+(x386*x387))&x388);

	if (t64 != 2139717632U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x391 = UINT64_MAX;
	static uint64_t t65 = 966439959961797LLU;

	t65 = ((x389+(x390*x391))&x392);

	if (t65 != 18446744069414551553LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x393 = -656721495426LL;
	static uint32_t x394 = UINT32_MAX;
	static int16_t x395 = INT16_MIN;
	volatile int64_t t66 = -930217LL;

	t66 = ((x393+(x394*x395))&x396);

	if (t66 != 26LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x397 = INT8_MIN;
	uint32_t x398 = 51890566U;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 0U;
	volatile uint32_t t67 = 77554113U;

	t67 = ((x397+(x398*x399))&x400);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x402 = 10U;
	int16_t x403 = -1;

	t68 = ((x401+(x402*x403))&x404);

	if (t68 != 4294967287U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x406 = 31U;
	static volatile int16_t x407 = INT16_MIN;

	t69 = ((x405+(x406*x407))&x408);

	if (t69 != 187U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x409 = INT64_MAX;
	int8_t x410 = INT8_MIN;
	static int8_t x411 = INT8_MAX;
	static volatile int64_t t70 = 2004748961458556174LL;

	t70 = ((x409+(x410*x411))&x412);

	if (t70 != 121LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x413 = UINT8_MAX;
	uint8_t x414 = 0U;
	uint16_t x415 = 1U;
	volatile int32_t x416 = INT32_MIN;
	static volatile int32_t t71 = 13406146;

	t71 = ((x413+(x414*x415))&x416);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x426 = 21U;
	int64_t x428 = 106534198095LL;
	int64_t t72 = 0LL;

	t72 = ((x425+(x426*x427))&x428);

	if (t72 != 318283LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x429 = -1;
	volatile int16_t x430 = INT16_MIN;
	int16_t x431 = -1;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t73 = -254;

	t73 = ((x429+(x430*x431))&x432);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x433 = INT64_MAX;
	volatile uint16_t x434 = UINT16_MAX;
	static volatile uint64_t x435 = UINT64_MAX;
	volatile uint32_t x436 = UINT32_MAX;
	static uint64_t t74 = 22LLU;

	t74 = ((x433+(x434*x435))&x436);

	if (t74 != 4294901760LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x437 = 368U;
	volatile int64_t x438 = 300327032990522LL;
	static volatile int64_t t75 = 32204100944186167LL;

	t75 = ((x437+(x438*x439))&x440);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x441 = INT16_MIN;
	int8_t x442 = -36;
	int16_t x443 = -176;
	uint16_t x444 = 3U;
	volatile int32_t t76 = 15368254;

	t76 = ((x441+(x442*x443))&x444);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x445 = INT8_MIN;
	uint32_t x446 = 12555U;
	volatile int8_t x447 = -1;
	static uint32_t x448 = UINT32_MAX;
	volatile uint32_t t77 = 14629U;

	t77 = ((x445+(x446*x447))&x448);

	if (t77 != 4294954613U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x449 = INT8_MIN;
	uint64_t x451 = 14672714494127138LLU;
	uint64_t x452 = 568083844879247113LLU;
	uint64_t t78 = 2178954587964645381LLU;

	t78 = ((x449+(x450*x451))&x452);

	if (t78 != 423347307094737408LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x453 = -1;
	uint64_t x454 = UINT64_MAX;
	int32_t x455 = INT32_MAX;
	uint8_t x456 = UINT8_MAX;
	uint64_t t79 = 94LLU;

	t79 = ((x453+(x454*x455))&x456);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x461 = 569649;
	int32_t x462 = -1;
	volatile int32_t x463 = 14235933;

	t80 = ((x461+(x462*x463))&x464);

	if (t80 != 30740) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x469 = -1LL;
	int16_t x470 = INT16_MIN;
	static int16_t x471 = INT16_MAX;
	uint32_t x472 = 0U;

	t81 = ((x469+(x470*x471))&x472);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x473 = -517144832;
	int64_t x474 = INT64_MIN;
	uint64_t x475 = 3LLU;
	volatile int8_t x476 = INT8_MIN;
	uint64_t t82 = 7506373933LLU;

	t82 = ((x473+(x474*x475))&x476);

	if (t82 != 9223372036337630976LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x478 = UINT64_MAX;
	static uint64_t x479 = 9871385932696LLU;

	t83 = ((x477+(x478*x479))&x480);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x483 = -1;
	volatile int64_t t84 = INT64_MIN;

	t84 = ((x481+(x482*x483))&x484);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x485 = -202;
	int16_t x486 = INT16_MAX;
	int16_t x488 = -1;
	int64_t t85 = 27900398185881166LL;

	t85 = ((x485+(x486*x487))&x488);

	if (t85 != -3243313152854165LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x493 = INT8_MIN;
	uint32_t x494 = 458138U;
	uint64_t x495 = 393384591872462792LLU;
	int64_t x496 = -1LL;
	uint64_t t86 = 484284826LLU;

	t86 = ((x493+(x494*x495))&x496);

	if (t86 != 18187295197748864464LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x497 = 12U;
	static volatile int32_t x498 = INT32_MIN;

	t87 = ((x497+(x498*x499))&x500);

	if (t87 != 7495979320465162252LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x501 = UINT16_MAX;
	int8_t x502 = 1;
	static int16_t x503 = INT16_MAX;
	int32_t x504 = -64482717;
	static int32_t t88 = -115802;

	t88 = ((x501+(x502*x503))&x504);

	if (t88 != 4706) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x505 = UINT32_MAX;
	uint64_t x507 = 476877LLU;
	int32_t x508 = INT32_MIN;
	volatile uint64_t t89 = 55608096LLU;

	t89 = ((x505+(x506*x507))&x508);

	if (t89 != 4294967296LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x509 = 3;
	int32_t x511 = -1;
	volatile uint8_t x512 = 1U;
	int32_t t90 = 831048;

	t90 = ((x509+(x510*x511))&x512);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x514 = INT16_MIN;
	int8_t x515 = 29;
	int64_t x516 = -1LL;

	t91 = ((x513+(x514*x515))&x516);

	if (t91 != -884737LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x517 = 25U;
	int64_t x518 = -1LL;
	uint16_t x519 = 37U;
	int8_t x520 = INT8_MAX;

	t92 = ((x517+(x518*x519))&x520);

	if (t92 != 116LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x525 = INT32_MIN;
	int64_t x526 = INT64_MAX;
	uint64_t x527 = UINT64_MAX;
	static uint8_t x528 = UINT8_MAX;
	static uint64_t t93 = 7074368458566037621LLU;

	t93 = ((x525+(x526*x527))&x528);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x541 = UINT32_MAX;
	int16_t x542 = INT16_MAX;
	int32_t x543 = -30;
	volatile uint64_t x544 = UINT64_MAX;
	uint64_t t94 = 192430819987LLU;

	t94 = ((x541+(x542*x543))&x544);

	if (t94 != 4293984285LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x549 = -30;
	static volatile int32_t x550 = 9032;
	static uint64_t x551 = 3LLU;
	static volatile int8_t x552 = INT8_MIN;

	t95 = ((x549+(x550*x551))&x552);

	if (t95 != 27008LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x553 = INT8_MAX;
	int32_t x554 = -1;
	static volatile int16_t x555 = INT16_MAX;
	static volatile int32_t t96 = -9;

	t96 = ((x553+(x554*x555))&x556);

	if (t96 != 32896) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x558 = 0;
	int8_t x559 = INT8_MIN;
	int64_t x560 = INT64_MIN;
	int64_t t97 = INT64_MIN;

	t97 = ((x557+(x558*x559))&x560);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x562 = INT8_MIN;
	uint16_t x563 = 508U;
	int32_t x564 = INT32_MAX;
	int32_t t98 = 197390341;

	t98 = ((x561+(x562*x563))&x564);

	if (t98 != 2147418623) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x565 = 743U;
	volatile int16_t x566 = -1;
	volatile uint64_t x567 = 314863LLU;
	uint16_t x568 = UINT16_MAX;
	volatile uint64_t t99 = 1463357LLU;

	t99 = ((x565+(x566*x567))&x568);

	if (t99 != 13560LLU) { NG(); } else { ; }
	
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

