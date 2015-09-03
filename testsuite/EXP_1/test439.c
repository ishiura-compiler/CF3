#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1012U;
volatile int32_t t0 = -84;
volatile int8_t x6 = INT8_MIN;
uint16_t x11 = UINT16_MAX;
volatile int32_t t2 = 13871;
int8_t x17 = INT8_MIN;
int32_t t4 = -17137943;
int8_t x22 = INT8_MAX;
static uint16_t x24 = UINT16_MAX;
static int32_t x34 = INT32_MIN;
int16_t x35 = INT16_MIN;
uint32_t x37 = UINT32_MAX;
uint8_t x44 = 0U;
static int32_t t8 = -360;
uint64_t x48 = 0LLU;
int8_t x49 = -8;
static volatile int32_t t11 = 7;
int8_t x63 = 3;
int8_t x76 = -1;
int32_t t13 = 9176582;
int32_t x78 = 1;
volatile int16_t x81 = -1;
volatile uint8_t x82 = 76U;
volatile int32_t x84 = INT32_MIN;
volatile int32_t t15 = -51392;
volatile uint16_t x96 = 15U;
volatile int16_t x101 = -15;
static int64_t x108 = INT64_MIN;
static int32_t t19 = 353;
uint16_t x109 = UINT16_MAX;
volatile uint64_t x111 = 119570126687804LLU;
volatile uint32_t x114 = 4737U;
int32_t t21 = -1834340;
int8_t x129 = INT8_MIN;
int16_t x130 = INT16_MIN;
uint16_t x131 = UINT16_MAX;
int32_t x140 = 547478;
volatile int32_t t26 = -1381645;
int8_t x149 = -3;
int8_t x152 = 0;
volatile uint8_t x153 = 18U;
uint64_t x162 = 33542669LLU;
volatile int16_t x164 = INT16_MIN;
uint8_t x169 = UINT8_MAX;
int32_t t32 = 155332915;
volatile int16_t x177 = -1;
uint64_t x179 = UINT64_MAX;
int16_t x182 = 0;
int32_t t36 = -555189;
static int64_t x191 = INT64_MAX;
int32_t t37 = 0;
int8_t x195 = INT8_MIN;
int8_t x201 = 8;
int32_t x212 = INT32_MAX;
int16_t x213 = -616;
int16_t x221 = INT16_MAX;
uint8_t x222 = 59U;
static uint64_t x223 = 2125996842LLU;
static uint32_t x225 = UINT32_MAX;
uint64_t x232 = 348LLU;
static int32_t t45 = -1;
int16_t x236 = -13;
int16_t x239 = INT16_MIN;
volatile int8_t x242 = INT8_MAX;
static int32_t t48 = -24682;
volatile uint8_t x258 = 1U;
int16_t x267 = 14;
int32_t x268 = -1;
static int32_t x274 = -1;
int16_t x281 = 244;
uint16_t x282 = 366U;
static int32_t t55 = -1749985;
int16_t x301 = INT16_MIN;
uint32_t x306 = 1073596U;
int16_t x308 = INT16_MIN;
volatile int32_t t58 = -37479;
volatile int32_t t59 = 39463;
int32_t x314 = -16741561;
int32_t x320 = -1;
int64_t x328 = INT64_MIN;
volatile int32_t t63 = 1477391;
static uint64_t x341 = 20506176348LLU;
int32_t x343 = 17872;
volatile int32_t t67 = 254;
uint32_t x360 = 109880U;
int8_t x364 = INT8_MIN;
int64_t x374 = -1LL;
int32_t x382 = -30;
int8_t x392 = INT8_MIN;
static volatile int64_t x403 = -1LL;
int64_t x409 = 22354510887089772LL;
int8_t x410 = INT8_MAX;
uint64_t x415 = UINT64_MAX;
uint32_t x416 = 60670U;
volatile int32_t t80 = -97633321;
volatile uint8_t x418 = 6U;
static int8_t x419 = INT8_MIN;
volatile int64_t x423 = INT64_MAX;
volatile int32_t t82 = 13725322;
int16_t x426 = INT16_MAX;
static int16_t x428 = -1;
int32_t x438 = -162;
int8_t x441 = 6;
int32_t x462 = -1;
int32_t t88 = 285;
int16_t x469 = -1;
int16_t x470 = -1;
uint32_t x483 = 89537U;
volatile int32_t t92 = 40;
int32_t t93 = -62858;
int8_t x489 = INT8_MIN;
int8_t x490 = INT8_MAX;
int32_t x492 = -1;
volatile uint64_t x496 = 240568506170818369LLU;
volatile int32_t t96 = 41;
static int64_t x502 = 1375865386LL;
int32_t x504 = INT32_MIN;
int64_t x511 = 9306054106336LL;


void f0(void) {
	int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = 9LL;

	t0 = (((x1*x2)==x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint8_t x7 = UINT8_MAX;
	volatile uint64_t x8 = UINT64_MAX;
	int32_t t1 = 5841044;

	t1 = (((x5*x6)==x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static uint64_t x10 = 645525435527617LLU;
	volatile int64_t x12 = 8054LL;

	t2 = (((x9*x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 63149;
	int8_t x14 = -1;
	volatile int32_t x15 = -300;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = 5883152;

	t3 = (((x13*x14)==x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 201U;
	volatile int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;

	t4 = (((x17*x18)==x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2475U;
	volatile uint8_t x23 = 0U;
	int32_t t5 = -14;

	t5 = (((x21*x22)==x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 3U;
	volatile int32_t x36 = -201;
	static volatile int32_t t6 = 437;

	t6 = (((x33*x34)==x35)<=x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	int32_t x40 = 456;
	int32_t t7 = 232068124;

	t7 = (((x37*x38)==x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = -22727008599615LL;
	uint16_t x42 = 3U;
	uint64_t x43 = 128LLU;

	t8 = (((x41*x42)==x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 902515080LLU;
	volatile int64_t x46 = INT64_MIN;
	static int32_t x47 = INT32_MAX;
	int32_t t9 = 1;

	t9 = (((x45*x46)==x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x50 = -4;
	volatile int32_t x51 = -1;
	static int64_t x52 = -1LL;
	int32_t t10 = 3964;

	t10 = (((x49*x50)==x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = -287;
	volatile uint16_t x59 = 507U;
	int32_t x60 = -1;

	t11 = (((x57*x58)==x59)<=x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 60U;
	int16_t x62 = 0;
	int32_t x64 = INT32_MIN;
	int32_t t12 = -16114;

	t12 = (((x61*x62)==x63)<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 252U;
	int16_t x74 = -3652;
	uint16_t x75 = 114U;

	t13 = (((x73*x74)==x75)<=x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = -1;
	int16_t x79 = -14695;
	int16_t x80 = -1;
	static int32_t t14 = -2357;

	t14 = (((x77*x78)==x79)<=x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x83 = INT8_MAX;

	t15 = (((x81*x82)==x83)<=x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = -1;
	static int64_t x94 = 8053276076873LL;
	int8_t x95 = 21;
	volatile int32_t t16 = -4047;

	t16 = (((x93*x94)==x95)<=x96);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x97 = UINT8_MAX;
	uint64_t x98 = 878155038214553LLU;
	volatile int32_t x99 = INT32_MIN;
	int32_t x100 = 2050;
	int32_t t17 = 2;

	t17 = (((x97*x98)==x99)<=x100);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MAX;
	static int32_t t18 = -1189;

	t18 = (((x101*x102)==x103)<=x104);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int16_t x106 = -532;
	static int64_t x107 = -1LL;

	t19 = (((x105*x106)==x107)<=x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x110 = UINT32_MAX;
	uint32_t x112 = 996U;
	static int32_t t20 = 957957504;

	t20 = (((x109*x110)==x111)<=x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = -11;
	volatile int8_t x115 = INT8_MIN;
	int32_t x116 = -1;

	t21 = (((x113*x114)==x115)<=x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = -1;
	int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MIN;
	int8_t x124 = 24;
	static volatile int32_t t22 = -45;

	t22 = (((x121*x122)==x123)<=x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x132 = INT64_MAX;
	static int32_t t23 = 6;

	t23 = (((x129*x130)==x131)<=x132);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = -1;
	int32_t x139 = 122797852;
	int32_t t24 = 2329696;

	t24 = (((x137*x138)==x139)<=x140);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x141 = 11158U;
	int64_t x142 = -1LL;
	int64_t x143 = -495527887865032234LL;
	uint32_t x144 = 12744080U;
	volatile int32_t t25 = 11929;

	t25 = (((x141*x142)==x143)<=x144);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = 1100;
	static uint32_t x146 = 66848697U;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 430322LLU;

	t26 = (((x145*x146)==x147)<=x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x150 = INT8_MIN;
	uint64_t x151 = UINT64_MAX;
	volatile int32_t t27 = 81986265;

	t27 = (((x149*x150)==x151)<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x154 = -30;
	static volatile int32_t x155 = 53;
	int32_t x156 = -45524;
	static volatile int32_t t28 = 13049781;

	t28 = (((x153*x154)==x155)<=x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = 1;
	uint32_t x158 = UINT32_MAX;
	int32_t x159 = -1;
	int64_t x160 = INT64_MIN;
	volatile int32_t t29 = 1065033575;

	t29 = (((x157*x158)==x159)<=x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = INT8_MAX;
	int64_t x163 = INT64_MAX;
	static int32_t t30 = -6847;

	t30 = (((x161*x162)==x163)<=x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = 465LLU;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	static int64_t x168 = INT64_MIN;
	static volatile int32_t t31 = -612599032;

	t31 = (((x165*x166)==x167)<=x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x170 = 1;
	volatile uint8_t x171 = 4U;
	int8_t x172 = 7;

	t32 = (((x169*x170)==x171)<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = 19381U;
	volatile uint16_t x174 = 901U;
	static volatile int64_t x175 = -580218628482LL;
	uint16_t x176 = 906U;
	int32_t t33 = 1884;

	t33 = (((x173*x174)==x175)<=x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x178 = INT16_MIN;
	int8_t x180 = 0;
	int32_t t34 = 346939271;

	t34 = (((x177*x178)==x179)<=x180);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x181 = UINT32_MAX;
	int8_t x183 = -1;
	volatile int64_t x184 = -7744609607698LL;
	int32_t t35 = 11;

	t35 = (((x181*x182)==x183)<=x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = INT32_MIN;
	int64_t x187 = -1LL;
	static uint32_t x188 = UINT32_MAX;

	t36 = (((x185*x186)==x187)<=x188);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MAX;
	static int8_t x190 = -1;
	int8_t x192 = -15;

	t37 = (((x189*x190)==x191)<=x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x193 = UINT32_MAX;
	int8_t x194 = INT8_MIN;
	int32_t x196 = -6897;
	int32_t t38 = 1455687;

	t38 = (((x193*x194)==x195)<=x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = INT16_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	int8_t x200 = 10;
	volatile int32_t t39 = 1753;

	t39 = (((x197*x198)==x199)<=x200);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x202 = INT8_MAX;
	static int16_t x203 = 1;
	volatile uint64_t x204 = 0LLU;
	int32_t t40 = -18553272;

	t40 = (((x201*x202)==x203)<=x204);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = 0U;
	uint16_t x210 = 17194U;
	volatile int32_t x211 = -1;
	volatile int32_t t41 = 13288444;

	t41 = (((x209*x210)==x211)<=x212);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x214 = 111592LL;
	volatile uint32_t x215 = UINT32_MAX;
	static uint8_t x216 = 18U;
	int32_t t42 = -521;

	t42 = (((x213*x214)==x215)<=x216);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x224 = 173456978LL;
	volatile int32_t t43 = -11;

	t43 = (((x221*x222)==x223)<=x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = 20U;
	static volatile int32_t t44 = -906306006;

	t44 = (((x225*x226)==x227)<=x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = -1;
	int64_t x230 = INT64_MAX;
	int8_t x231 = -1;

	t45 = (((x229*x230)==x231)<=x232);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 168U;
	int16_t x235 = INT16_MIN;
	volatile int32_t t46 = -124;

	t46 = (((x233*x234)==x235)<=x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x237 = INT16_MIN;
	uint64_t x238 = 18LLU;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t47 = 525827693;

	t47 = (((x237*x238)==x239)<=x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x241 = 685LLU;
	static uint8_t x243 = 1U;
	int32_t x244 = 220207;

	t48 = (((x241*x242)==x243)<=x244);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = -547;
	static int8_t x248 = -3;
	int32_t t49 = 135;

	t49 = (((x245*x246)==x247)<=x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x249 = INT32_MIN;
	static int64_t x250 = -1LL;
	uint64_t x251 = 337864272278496LLU;
	int16_t x252 = -1;
	static int32_t t50 = -2;

	t50 = (((x249*x250)==x251)<=x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = INT64_MIN;
	int32_t x259 = -46323;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t51 = -120835;

	t51 = (((x257*x258)==x259)<=x260);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x265 = INT8_MIN;
	volatile uint8_t x266 = 3U;
	volatile int32_t t52 = 387;

	t52 = (((x265*x266)==x267)<=x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x273 = UINT32_MAX;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = -1;
	static int32_t t53 = 3;

	t53 = (((x273*x274)==x275)<=x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x277 = -1;
	static int16_t x278 = INT16_MAX;
	volatile int8_t x279 = -1;
	static volatile uint8_t x280 = UINT8_MAX;
	int32_t t54 = 0;

	t54 = (((x277*x278)==x279)<=x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x283 = INT64_MIN;
	int16_t x284 = -8717;

	t55 = (((x281*x282)==x283)<=x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x289 = UINT8_MAX;
	volatile int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = 897U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t56 = -50316;

	t56 = (((x289*x290)==x291)<=x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x302 = 2;
	int16_t x303 = INT16_MAX;
	static uint8_t x304 = UINT8_MAX;
	volatile int32_t t57 = -234;

	t57 = (((x301*x302)==x303)<=x304);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = 33337098U;
	int8_t x307 = INT8_MAX;

	t58 = (((x305*x306)==x307)<=x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x309 = 3U;
	volatile uint32_t x310 = 10U;
	volatile int32_t x311 = -3;
	static uint8_t x312 = 119U;

	t59 = (((x309*x310)==x311)<=x312);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x313 = 23U;
	int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MAX;
	int32_t t60 = -1;

	t60 = (((x313*x314)==x315)<=x316);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x317 = INT32_MIN;
	static uint64_t x318 = UINT64_MAX;
	int32_t x319 = -1;
	volatile int32_t t61 = -693140779;

	t61 = (((x317*x318)==x319)<=x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int8_t x322 = INT8_MIN;
	volatile uint32_t x323 = 1U;
	uint8_t x324 = 6U;
	static volatile int32_t t62 = -442;

	t62 = (((x321*x322)==x323)<=x324);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x325 = INT8_MAX;
	uint32_t x326 = UINT32_MAX;
	static int8_t x327 = -59;

	t63 = (((x325*x326)==x327)<=x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = 4286;
	static volatile uint32_t x335 = UINT32_MAX;
	int16_t x336 = 8;
	int32_t t64 = 7391667;

	t64 = (((x333*x334)==x335)<=x336);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x342 = 1;
	static int8_t x344 = -1;
	static volatile int32_t t65 = 292;

	t65 = (((x341*x342)==x343)<=x344);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = INT8_MAX;
	uint64_t x346 = UINT64_MAX;
	static int32_t x347 = INT32_MIN;
	volatile int16_t x348 = 3;
	int32_t t66 = -1147;

	t66 = (((x345*x346)==x347)<=x348);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x349 = INT8_MIN;
	static volatile int8_t x350 = 35;
	uint32_t x351 = 3101940U;
	uint64_t x352 = 298376115077971LLU;

	t67 = (((x349*x350)==x351)<=x352);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x357 = 60U;
	int32_t x358 = 0;
	volatile int32_t x359 = 6553;
	int32_t t68 = 1;

	t68 = (((x357*x358)==x359)<=x360);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x361 = 408U;
	static volatile int16_t x362 = 34;
	int32_t x363 = INT32_MAX;
	int32_t t69 = -65157;

	t69 = (((x361*x362)==x363)<=x364);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	int16_t x367 = 787;
	volatile int32_t x368 = INT32_MIN;
	int32_t t70 = -2970;

	t70 = (((x365*x366)==x367)<=x368);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x369 = INT16_MIN;
	uint8_t x370 = 0U;
	static uint32_t x371 = UINT32_MAX;
	static uint32_t x372 = 5413U;
	volatile int32_t t71 = -31772;

	t71 = (((x369*x370)==x371)<=x372);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x373 = 560U;
	int32_t x375 = INT32_MIN;
	static volatile uint32_t x376 = 5U;
	volatile int32_t t72 = -10939708;

	t72 = (((x373*x374)==x375)<=x376);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x381 = 0;
	static uint32_t x383 = UINT32_MAX;
	static int64_t x384 = INT64_MIN;
	static int32_t t73 = -6994;

	t73 = (((x381*x382)==x383)<=x384);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = 546;
	uint16_t x387 = 10176U;
	int32_t x388 = 2034641;
	volatile int32_t t74 = 7713363;

	t74 = (((x385*x386)==x387)<=x388);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	static uint16_t x391 = UINT16_MAX;
	volatile int32_t t75 = 10125991;

	t75 = (((x389*x390)==x391)<=x392);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x393 = -1;
	uint32_t x394 = 862499021U;
	uint16_t x395 = UINT16_MAX;
	uint64_t x396 = 14617421201LLU;
	static volatile int32_t t76 = 5246094;

	t76 = (((x393*x394)==x395)<=x396);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = 0;
	uint16_t x399 = 41U;
	uint64_t x400 = 366017758710976957LLU;
	volatile int32_t t77 = 374732;

	t77 = (((x397*x398)==x399)<=x400);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x401 = 415171848;
	uint32_t x402 = UINT32_MAX;
	volatile int16_t x404 = INT16_MIN;
	static int32_t t78 = 2999;

	t78 = (((x401*x402)==x403)<=x404);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x411 = INT8_MIN;
	uint32_t x412 = 2593U;
	static volatile int32_t t79 = 25368;

	t79 = (((x409*x410)==x411)<=x412);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x413 = -1;
	int8_t x414 = INT8_MIN;

	t80 = (((x413*x414)==x415)<=x416);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x417 = 201040032U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t81 = -1538510;

	t81 = (((x417*x418)==x419)<=x420);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x421 = -44;
	uint8_t x422 = 56U;
	volatile int8_t x424 = INT8_MIN;

	t82 = (((x421*x422)==x423)<=x424);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x425 = -1;
	volatile uint16_t x427 = UINT16_MAX;
	volatile int32_t t83 = -2;

	t83 = (((x425*x426)==x427)<=x428);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x429 = 55U;
	uint32_t x430 = 3949673U;
	static volatile int32_t x431 = INT32_MAX;
	int16_t x432 = -1;
	int32_t t84 = 32040;

	t84 = (((x429*x430)==x431)<=x432);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	volatile int32_t x435 = -1;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t85 = 1;

	t85 = (((x433*x434)==x435)<=x436);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x437 = -1;
	volatile int32_t x439 = -1;
	uint8_t x440 = 119U;
	int32_t t86 = -188123;

	t86 = (((x437*x438)==x439)<=x440);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x442 = -1;
	uint32_t x443 = 220011U;
	static int64_t x444 = 159286LL;
	int32_t t87 = 42767;

	t87 = (((x441*x442)==x443)<=x444);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x461 = INT64_MAX;
	volatile int64_t x463 = 191511983197087LL;
	uint8_t x464 = 125U;

	t88 = (((x461*x462)==x463)<=x464);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x471 = UINT16_MAX;
	static volatile int16_t x472 = INT16_MIN;
	volatile int32_t t89 = 663389;

	t89 = (((x469*x470)==x471)<=x472);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = 2905;
	uint64_t x474 = 4384LLU;
	int32_t x475 = -168869632;
	volatile int64_t x476 = INT64_MIN;
	volatile int32_t t90 = 18601501;

	t90 = (((x473*x474)==x475)<=x476);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x477 = INT8_MIN;
	int16_t x478 = 794;
	int64_t x479 = 1910334707648407619LL;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t91 = 982876535;

	t91 = (((x477*x478)==x479)<=x480);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x481 = 1543163257013540LLU;
	int8_t x482 = INT8_MAX;
	static volatile int32_t x484 = 4536320;

	t92 = (((x481*x482)==x483)<=x484);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x485 = -1;
	static int8_t x486 = INT8_MIN;
	int64_t x487 = 708203249445LL;
	uint32_t x488 = 176866056U;

	t93 = (((x485*x486)==x487)<=x488);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x491 = INT64_MAX;
	int32_t t94 = -50076489;

	t94 = (((x489*x490)==x491)<=x492);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x493 = INT32_MIN;
	uint64_t x494 = 1029674495684624585LLU;
	int16_t x495 = INT16_MAX;
	static int32_t t95 = -322879211;

	t95 = (((x493*x494)==x495)<=x496);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x497 = UINT16_MAX;
	static int8_t x498 = INT8_MAX;
	uint64_t x499 = 1003488LLU;
	static volatile int8_t x500 = INT8_MIN;

	t96 = (((x497*x498)==x499)<=x500);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MAX;
	int16_t x503 = -3768;
	volatile int32_t t97 = -240;

	t97 = (((x501*x502)==x503)<=x504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x505 = 160986105712LLU;
	int16_t x506 = -1;
	uint16_t x507 = UINT16_MAX;
	int8_t x508 = -1;
	volatile int32_t t98 = -17752;

	t98 = (((x505*x506)==x507)<=x508);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x509 = UINT16_MAX;
	static int8_t x510 = INT8_MIN;
	uint8_t x512 = 4U;
	int32_t t99 = -116078533;

	t99 = (((x509*x510)==x511)<=x512);

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

