#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MIN;
uint8_t x17 = UINT8_MAX;
uint16_t x18 = UINT16_MAX;
static int64_t x28 = INT64_MIN;
volatile int8_t x35 = INT8_MIN;
uint8_t x40 = 1U;
volatile uint32_t x41 = 11U;
int32_t t7 = -64318;
int16_t x48 = 165;
uint8_t x49 = UINT8_MAX;
static int16_t x51 = INT16_MIN;
static volatile uint64_t x54 = 3853202515438LLU;
static uint64_t x62 = 51702881LLU;
int32_t x64 = INT32_MAX;
uint32_t x65 = 4193672U;
int16_t x69 = INT16_MIN;
int32_t t14 = -72686;
int64_t x87 = 40201736017LL;
static volatile int32_t t18 = 85308;
uint16_t x98 = 2534U;
int8_t x99 = 50;
uint64_t x100 = 1LLU;
uint16_t x109 = 18716U;
volatile int32_t t21 = 2;
uint32_t x113 = UINT32_MAX;
int32_t t22 = 37;
int16_t x118 = -5;
int16_t x119 = -136;
int16_t x120 = INT16_MIN;
int32_t t23 = -9747;
uint32_t x126 = 192374U;
uint32_t x127 = 1330U;
int32_t x141 = INT32_MIN;
uint64_t x149 = UINT64_MAX;
uint16_t x152 = 93U;
int8_t x153 = 19;
int64_t x156 = -404660887103574LL;
int8_t x162 = INT8_MAX;
uint16_t x170 = 875U;
uint8_t x174 = 37U;
int16_t x178 = 62;
uint16_t x180 = 31458U;
volatile uint32_t x184 = UINT32_MAX;
static uint32_t x188 = 181073U;
uint32_t x197 = 744232U;
static int8_t x221 = 3;
int8_t x223 = 0;
volatile int32_t t40 = 20921;
volatile uint16_t x225 = 7U;
int16_t x226 = 1;
int16_t x231 = INT16_MAX;
int16_t x232 = -1;
static uint8_t x240 = UINT8_MAX;
volatile int32_t x261 = INT32_MIN;
int16_t x265 = -248;
volatile int64_t x273 = INT64_MAX;
int8_t x287 = INT8_MAX;
int16_t x288 = INT16_MIN;
int16_t x289 = 3;
int32_t x291 = -1;
volatile int32_t t53 = 505;
static uint8_t x306 = 11U;
uint16_t x310 = 7U;
int8_t x313 = INT8_MIN;
int8_t x323 = INT8_MIN;
int32_t t61 = 5445272;
uint32_t x325 = 57443079U;
int64_t x327 = -534201289455904LL;
int32_t t63 = 5135;
int32_t x354 = 12245;
static int32_t t65 = 8340239;
int32_t x362 = -1;
int32_t x365 = -56;
int8_t x383 = INT8_MIN;
volatile int32_t t70 = -71453042;
int64_t x385 = INT64_MAX;
int16_t x388 = -1;
static int16_t x391 = 5;
uint16_t x413 = 69U;
int32_t x415 = 100579100;
volatile int32_t t76 = -126;
uint8_t x430 = 23U;
volatile uint16_t x432 = 2457U;
int32_t t79 = -12;
static int32_t t81 = -33534063;
int32_t x446 = -233;
volatile int32_t t82 = -164883;
int32_t t88 = 1;
uint64_t x487 = 128660589526058452LLU;
static volatile int32_t t90 = 38497;
uint32_t x496 = UINT32_MAX;
int32_t t92 = -449971064;
uint32_t x497 = 909U;
int32_t t95 = 505471;
static uint16_t x509 = 1557U;
volatile uint32_t x523 = UINT32_MAX;
int8_t x528 = 30;


void f0(void) {
	uint8_t x2 = 3U;
	volatile int8_t x3 = -8;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 146099347;

	t0 = (x1==((x2*x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 16659U;
	int8_t x14 = 8;
	int16_t x15 = 799;
	int16_t x16 = INT16_MIN;
	volatile int32_t t1 = 774;

	t1 = (x13==((x14*x15)^x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x19 = 81;
	static volatile uint64_t x20 = 5123LLU;
	volatile int32_t t2 = -411480;

	t2 = (x17==((x18*x19)^x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -1;
	int64_t x22 = -11518LL;
	static uint64_t x23 = 61420697935679553LLU;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t3 = -37;

	t3 = (x21==((x22*x23)^x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = 11;
	uint8_t x26 = 1U;
	volatile int32_t x27 = 31283884;
	int32_t t4 = 29;

	t4 = (x25==((x26*x27)^x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	int16_t x34 = -1;
	static int16_t x36 = INT16_MAX;
	int32_t t5 = -6707;

	t5 = (x33==((x34*x35)^x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = -1;
	volatile uint32_t x39 = 1641U;
	volatile int32_t t6 = -1919;

	t6 = (x37==((x38*x39)^x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 1420LLU;

	t7 = (x41==((x42*x43)^x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x45 = INT16_MAX;
	static int64_t x46 = -636378160LL;
	int32_t x47 = INT32_MAX;
	int32_t t8 = -26798890;

	t8 = (x45==((x46*x47)^x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x50 = 54U;
	volatile int64_t x52 = 53458358113961LL;
	volatile int32_t t9 = -1957903;

	t9 = (x49==((x50*x51)^x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MIN;
	static int8_t x55 = 10;
	static uint64_t x56 = 1156396468430LLU;
	int32_t t10 = -461;

	t10 = (x53==((x54*x55)^x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 21645U;
	uint8_t x63 = 64U;
	int32_t t11 = -249002;

	t11 = (x61==((x62*x63)^x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x66 = INT8_MIN;
	static int32_t x67 = -443857;
	static volatile int64_t x68 = 11163457910269400LL;
	volatile int32_t t12 = 51553;

	t12 = (x65==((x66*x67)^x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x70 = -1;
	uint8_t x71 = 2U;
	static int16_t x72 = INT16_MIN;
	volatile int32_t t13 = 506;

	t13 = (x69==((x70*x71)^x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = INT16_MIN;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	static volatile uint64_t x76 = 6720589744973833LLU;

	t14 = (x73==((x74*x75)^x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	uint8_t x82 = 0U;
	uint32_t x83 = 76052151U;
	int64_t x84 = -1LL;
	int32_t t15 = 16;

	t15 = (x81==((x82*x83)^x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = -25;
	uint32_t x86 = 3U;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t16 = 45706;

	t16 = (x85==((x86*x87)^x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x89 = 14U;
	volatile uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 432U;
	int32_t t17 = -113088;

	t17 = (x89==((x90*x91)^x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 1882U;
	uint32_t x95 = 2351U;
	int64_t x96 = 6159191585064186LL;

	t18 = (x93==((x94*x95)^x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x97 = INT8_MAX;
	static int32_t t19 = 541967;

	t19 = (x97==((x98*x99)^x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x101 = 1;
	int8_t x102 = INT8_MAX;
	volatile int16_t x103 = -1447;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t20 = -333;

	t20 = (x101==((x102*x103)^x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x110 = 13295;
	int32_t x111 = -1;
	int32_t x112 = -17502;

	t21 = (x109==((x110*x111)^x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x114 = 61U;
	static int16_t x115 = 12;
	static int16_t x116 = INT16_MIN;

	t22 = (x113==((x114*x115)^x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = INT32_MAX;

	t23 = (x117==((x118*x119)^x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	int64_t x128 = INT64_MIN;
	static int32_t t24 = 3655;

	t24 = (x125==((x126*x127)^x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x129 = UINT16_MAX;
	volatile uint32_t x130 = 2016U;
	uint8_t x131 = 13U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t25 = -117697538;

	t25 = (x129==((x130*x131)^x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x142 = -1LL;
	int32_t x143 = INT32_MIN;
	static int8_t x144 = 7;
	int32_t t26 = -108192;

	t26 = (x141==((x142*x143)^x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = INT32_MAX;
	volatile int16_t x146 = -1;
	int32_t x147 = 113537470;
	int16_t x148 = INT16_MIN;
	int32_t t27 = -6094;

	t27 = (x145==((x146*x147)^x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x150 = 680201845439694108LLU;
	int64_t x151 = -3354500LL;
	static int32_t t28 = 323;

	t28 = (x149==((x150*x151)^x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	static int32_t t29 = 67;

	t29 = (x153==((x154*x155)^x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = INT64_MIN;
	volatile int16_t x163 = INT16_MIN;
	static int32_t x164 = -1;
	volatile int32_t t30 = 17910923;

	t30 = (x161==((x162*x163)^x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x169 = 13U;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -1;
	volatile int32_t t31 = -81311;

	t31 = (x169==((x170*x171)^x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	uint64_t x176 = UINT64_MAX;
	int32_t t32 = -1030212314;

	t32 = (x173==((x174*x175)^x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x179 = 4U;
	int32_t t33 = 1447348;

	t33 = (x177==((x178*x179)^x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = 78043;
	int64_t x183 = 29900LL;
	static int32_t t34 = -2622;

	t34 = (x181==((x182*x183)^x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	static int32_t t35 = -2;

	t35 = (x185==((x186*x187)^x188));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x193 = -33;
	static int8_t x194 = INT8_MAX;
	uint32_t x195 = 1908980U;
	int8_t x196 = -34;
	static volatile int32_t t36 = 4;

	t36 = (x193==((x194*x195)^x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x198 = 1U;
	uint8_t x199 = 42U;
	volatile uint16_t x200 = 3900U;
	int32_t t37 = 12457;

	t37 = (x197==((x198*x199)^x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = INT32_MIN;
	uint8_t x206 = UINT8_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t38 = 320;

	t38 = (x205==((x206*x207)^x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x217 = 22U;
	static volatile uint64_t x218 = 9LLU;
	uint64_t x219 = UINT64_MAX;
	static uint64_t x220 = 60466744612LLU;
	volatile int32_t t39 = -2126959;

	t39 = (x217==((x218*x219)^x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x222 = -1;
	volatile int8_t x224 = INT8_MAX;

	t40 = (x221==((x222*x223)^x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x227 = 2U;
	volatile uint32_t x228 = UINT32_MAX;
	static volatile int32_t t41 = 3314;

	t41 = (x225==((x226*x227)^x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = 48;
	static int64_t x230 = -1LL;
	volatile int32_t t42 = -889282;

	t42 = (x229==((x230*x231)^x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	int8_t x235 = -1;
	int64_t x236 = -440208847LL;
	static volatile int32_t t43 = 0;

	t43 = (x233==((x234*x235)^x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x237 = 2U;
	int64_t x238 = 98LL;
	int16_t x239 = INT16_MAX;
	static int32_t t44 = 43708;

	t44 = (x237==((x238*x239)^x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = INT64_MIN;
	volatile uint8_t x242 = UINT8_MAX;
	static int8_t x243 = 12;
	uint32_t x244 = 1938U;
	volatile int32_t t45 = -4749414;

	t45 = (x241==((x242*x243)^x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = -1;
	static uint32_t x250 = UINT32_MAX;
	volatile uint32_t x251 = 3201U;
	int8_t x252 = -4;
	volatile int32_t t46 = 22484509;

	t46 = (x249==((x250*x251)^x252));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x262 = UINT8_MAX;
	int64_t x263 = 234040916977398LL;
	static volatile int32_t x264 = INT32_MAX;
	volatile int32_t t47 = -10;

	t47 = (x261==((x262*x263)^x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x266 = UINT64_MAX;
	static int8_t x267 = INT8_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t48 = -18104401;

	t48 = (x265==((x266*x267)^x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x269 = 131U;
	int8_t x270 = 1;
	uint16_t x271 = 2U;
	static int16_t x272 = -945;
	volatile int32_t t49 = -537619;

	t49 = (x269==((x270*x271)^x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x274 = 4U;
	int32_t x275 = 15393558;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t50 = -7147103;

	t50 = (x273==((x274*x275)^x276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	int64_t x279 = INT64_MAX;
	volatile int8_t x280 = INT8_MAX;
	volatile int32_t t51 = 163376839;

	t51 = (x277==((x278*x279)^x280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x285 = 134547227776LL;
	uint8_t x286 = 4U;
	volatile int32_t t52 = -36485;

	t52 = (x285==((x286*x287)^x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x290 = 23527236LLU;
	static int8_t x292 = INT8_MAX;

	t53 = (x289==((x290*x291)^x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = -59;
	int8_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t54 = -22492635;

	t54 = (x293==((x294*x295)^x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = 7LL;
	static volatile int8_t x298 = 1;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = 352U;
	static int32_t t55 = 3;

	t55 = (x297==((x298*x299)^x300));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 107U;
	volatile uint64_t x303 = 32614724LLU;
	int32_t x304 = INT32_MIN;
	int32_t t56 = 110384934;

	t56 = (x301==((x302*x303)^x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = -1;
	uint8_t x307 = 89U;
	int8_t x308 = -1;
	static int32_t t57 = -727;

	t57 = (x305==((x306*x307)^x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x309 = 54;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = 91260491LL;
	int32_t t58 = 1;

	t58 = (x309==((x310*x311)^x312));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x314 = -3;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t59 = 0;

	t59 = (x313==((x314*x315)^x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = -1;
	static int64_t x318 = 28769096061LL;
	uint16_t x319 = 13863U;
	int64_t x320 = INT64_MAX;
	volatile int32_t t60 = -1;

	t60 = (x317==((x318*x319)^x320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x321 = 7U;
	int64_t x322 = -41LL;
	volatile int16_t x324 = 541;

	t61 = (x321==((x322*x323)^x324));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x326 = UINT8_MAX;
	int16_t x328 = INT16_MIN;
	static int32_t t62 = -9198;

	t62 = (x325==((x326*x327)^x328));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x341 = INT32_MIN;
	static volatile uint8_t x342 = UINT8_MAX;
	int64_t x343 = -361884390LL;
	int32_t x344 = -1;

	t63 = (x341==((x342*x343)^x344));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x345 = INT32_MAX;
	volatile int8_t x346 = 1;
	int64_t x347 = INT64_MAX;
	int64_t x348 = -1LL;
	static volatile int32_t t64 = 59972050;

	t64 = (x345==((x346*x347)^x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x353 = -54LL;
	static int8_t x355 = INT8_MIN;
	static uint64_t x356 = 7570007LLU;

	t65 = (x353==((x354*x355)^x356));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = -1LL;
	static int64_t x359 = -1LL;
	uint32_t x360 = 15353U;
	volatile int32_t t66 = -102;

	t66 = (x357==((x358*x359)^x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x361 = -1;
	int8_t x363 = -1;
	static uint64_t x364 = 14609434408LLU;
	static int32_t t67 = -117297175;

	t67 = (x361==((x362*x363)^x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x366 = -363LL;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t68 = 0;

	t68 = (x365==((x366*x367)^x368));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x373 = 0U;
	uint64_t x374 = UINT64_MAX;
	int32_t x375 = -1;
	int64_t x376 = INT64_MAX;
	int32_t t69 = -793;

	t69 = (x373==((x374*x375)^x376));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x381 = INT8_MAX;
	uint32_t x382 = UINT32_MAX;
	static volatile uint32_t x384 = 55741U;

	t70 = (x381==((x382*x383)^x384));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x386 = UINT64_MAX;
	static int32_t x387 = -523508;
	volatile int32_t t71 = -27657627;

	t71 = (x385==((x386*x387)^x388));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MAX;
	uint32_t x392 = UINT32_MAX;
	int32_t t72 = -892660028;

	t72 = (x389==((x390*x391)^x392));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	volatile int16_t x395 = INT16_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t73 = 110960;

	t73 = (x393==((x394*x395)^x396));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x397 = 94;
	static int16_t x398 = INT16_MAX;
	int64_t x399 = -5108618790820LL;
	volatile uint64_t x400 = 757169079801639LLU;
	int32_t t74 = 4366486;

	t74 = (x397==((x398*x399)^x400));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x414 = -1;
	static int32_t x416 = -3532404;
	volatile int32_t t75 = -148562;

	t75 = (x413==((x414*x415)^x416));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x417 = 2245U;
	int64_t x418 = INT64_MIN;
	volatile uint64_t x419 = 5761LLU;
	int32_t x420 = INT32_MIN;

	t76 = (x417==((x418*x419)^x420));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x421 = UINT8_MAX;
	static uint64_t x422 = 2LLU;
	volatile int8_t x423 = INT8_MIN;
	static uint16_t x424 = UINT16_MAX;
	volatile int32_t t77 = 0;

	t77 = (x421==((x422*x423)^x424));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x425 = 76U;
	volatile uint32_t x426 = UINT32_MAX;
	int32_t x427 = 103361;
	int8_t x428 = INT8_MIN;
	volatile int32_t t78 = 1552;

	t78 = (x425==((x426*x427)^x428));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x429 = 2646296;
	uint16_t x431 = 45U;

	t79 = (x429==((x430*x431)^x432));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x433 = 188684LLU;
	static uint16_t x434 = UINT16_MAX;
	uint32_t x435 = UINT32_MAX;
	volatile int8_t x436 = 0;
	volatile int32_t t80 = -588;

	t80 = (x433==((x434*x435)^x436));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x441 = UINT64_MAX;
	volatile uint8_t x442 = 1U;
	int32_t x443 = -79494033;
	static volatile int32_t x444 = INT32_MIN;

	t81 = (x441==((x442*x443)^x444));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x445 = 237U;
	int8_t x447 = 0;
	int8_t x448 = -6;

	t82 = (x445==((x446*x447)^x448));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x449 = -1;
	int64_t x450 = INT64_MAX;
	int16_t x451 = -1;
	int32_t x452 = INT32_MIN;
	int32_t t83 = -398310997;

	t83 = (x449==((x450*x451)^x452));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x457 = 5734U;
	static uint64_t x458 = 108695914899164LLU;
	uint16_t x459 = 0U;
	volatile int32_t x460 = -1;
	volatile int32_t t84 = 1992357;

	t84 = (x457==((x458*x459)^x460));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = INT16_MAX;
	volatile uint8_t x462 = 24U;
	static uint32_t x463 = 26U;
	volatile int64_t x464 = 53173LL;
	int32_t t85 = 0;

	t85 = (x461==((x462*x463)^x464));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x465 = -224398918LL;
	volatile uint16_t x466 = 208U;
	uint64_t x467 = 3LLU;
	int8_t x468 = -1;
	volatile int32_t t86 = 29;

	t86 = (x465==((x466*x467)^x468));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x469 = 1;
	int64_t x470 = -1LL;
	static volatile int16_t x471 = 0;
	uint32_t x472 = 1073U;
	int32_t t87 = 63;

	t87 = (x469==((x470*x471)^x472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x473 = 1U;
	int16_t x474 = INT16_MIN;
	int16_t x475 = 444;
	volatile uint16_t x476 = 22U;

	t88 = (x473==((x474*x475)^x476));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x477 = 50795176927390LLU;
	int16_t x478 = 128;
	int64_t x479 = -1LL;
	static uint16_t x480 = UINT16_MAX;
	volatile int32_t t89 = -9;

	t89 = (x477==((x478*x479)^x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x485 = 141;
	int64_t x486 = INT64_MIN;
	uint16_t x488 = 8577U;

	t90 = (x485==((x486*x487)^x488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x489 = INT16_MIN;
	static int8_t x490 = INT8_MIN;
	int64_t x491 = -11LL;
	int8_t x492 = INT8_MIN;
	volatile int32_t t91 = 251;

	t91 = (x489==((x490*x491)^x492));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x493 = 2;
	int64_t x494 = -33928LL;
	volatile uint8_t x495 = UINT8_MAX;

	t92 = (x493==((x494*x495)^x496));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x498 = 1;
	uint64_t x499 = UINT64_MAX;
	volatile uint16_t x500 = 30429U;
	int32_t t93 = 20011;

	t93 = (x497==((x498*x499)^x500));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x501 = INT64_MIN;
	static volatile uint8_t x502 = 0U;
	static uint32_t x503 = 8461U;
	int64_t x504 = -123646892LL;
	int32_t t94 = -25005512;

	t94 = (x501==((x502*x503)^x504));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x505 = 0;
	uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	int64_t x508 = -1LL;

	t95 = (x505==((x506*x507)^x508));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x510 = UINT16_MAX;
	int16_t x511 = 4083;
	volatile int64_t x512 = INT64_MIN;
	int32_t t96 = 5814;

	t96 = (x509==((x510*x511)^x512));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x517 = 7406U;
	int16_t x518 = 7753;
	int32_t x519 = -2618;
	uint16_t x520 = 98U;
	volatile int32_t t97 = -458;

	t97 = (x517==((x518*x519)^x520));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x521 = 56U;
	static uint8_t x522 = 1U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t98 = -1337;

	t98 = (x521==((x522*x523)^x524));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x525 = 76U;
	uint8_t x526 = UINT8_MAX;
	uint64_t x527 = 0LLU;
	int32_t t99 = 1;

	t99 = (x525==((x526*x527)^x528));

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

