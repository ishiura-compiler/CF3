#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x14 = -1;
volatile int64_t t6 = -742LL;
int32_t t7 = -121;
int32_t x42 = 1;
uint32_t x48 = 8772650U;
volatile uint32_t t9 = 56816U;
int16_t x50 = INT16_MIN;
volatile int64_t x51 = -1LL;
static volatile int8_t x69 = INT8_MIN;
int64_t x74 = INT64_MIN;
uint64_t t13 = 8774704LLU;
uint64_t x80 = 401968700731LLU;
int16_t x81 = -1;
static volatile uint8_t x87 = UINT8_MAX;
volatile int32_t t18 = 13;
int8_t x103 = -19;
int8_t x109 = INT8_MIN;
volatile int64_t x111 = -1LL;
static int64_t t22 = -184LL;
volatile int32_t t23 = 128741381;
int32_t x118 = -18691778;
uint8_t x121 = 2U;
int64_t x128 = 24854188810821LL;
int32_t x137 = 1;
int16_t x149 = INT16_MIN;
static volatile int64_t t30 = 412332181LL;
volatile uint32_t x174 = 12683993U;
uint64_t x180 = 1309400716550780958LLU;
volatile uint64_t t36 = 1098320635263LLU;
int64_t x202 = INT64_MAX;
int32_t t39 = -11;
static int8_t x205 = 2;
uint16_t x207 = 4095U;
static volatile int32_t t41 = -11975;
uint32_t x216 = 160683U;
static uint32_t t42 = 933U;
static int8_t x218 = INT8_MIN;
uint32_t x220 = UINT32_MAX;
int64_t x228 = 3922LL;
int64_t t44 = -7490314922LL;
int8_t x230 = INT8_MIN;
uint16_t x234 = 407U;
int16_t x235 = INT16_MIN;
volatile uint32_t t49 = 29456688U;
int8_t x265 = INT8_MIN;
uint16_t x284 = 591U;
int16_t x288 = INT16_MAX;
volatile int64_t x302 = INT64_MIN;
int32_t x304 = INT32_MAX;
int32_t t61 = -75649157;
static int64_t x333 = -1LL;
int64_t x338 = INT64_MIN;
int64_t x342 = -1LL;
int16_t x345 = -1;
volatile int32_t t67 = 3006;
volatile uint32_t t69 = 169947311U;
int8_t x380 = -1;
volatile int32_t x389 = 11;
static int32_t t74 = 1978;
static uint32_t x404 = 918355057U;
static volatile uint32_t t75 = 19U;
int8_t x411 = INT8_MIN;
int32_t t76 = -1847;
volatile uint16_t x414 = 223U;
static int32_t t77 = -46662;
volatile uint8_t x419 = 1U;
volatile int32_t t78 = -11589;
uint32_t x423 = 96282006U;
int32_t x446 = INT32_MIN;
static uint16_t x448 = UINT16_MAX;
int32_t t83 = -487474;
uint8_t x462 = UINT8_MAX;
int8_t x464 = -1;
int64_t x465 = 500799078693321LL;
static volatile int8_t x469 = INT8_MIN;
uint16_t x472 = 6535U;
int16_t x478 = INT16_MIN;
int8_t x479 = INT8_MAX;
int16_t x488 = 6256;
int8_t x495 = INT8_MAX;
uint32_t x499 = 3885U;
int32_t x504 = INT32_MIN;
volatile uint32_t t93 = 189U;
static int16_t x509 = 715;
volatile uint64_t t94 = 14629768LLU;
int32_t x523 = INT32_MIN;
uint16_t x532 = 0U;
static int64_t t98 = -28743751984419LL;


void f0(void) {
	static volatile uint16_t x1 = 2U;
	uint8_t x2 = 1U;
	static uint32_t x3 = UINT32_MAX;
	uint64_t x4 = 405077688125744LLU;
	volatile uint64_t t0 = 727176610807LLU;

	t0 = ((x1<=x2)^(x3*x4));

	if (t0 != 9201866437676431056LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 33985U;
	int64_t x6 = -7460397LL;
	uint16_t x7 = 8U;
	int32_t x8 = 257661115;
	volatile int32_t t1 = 2064070;

	t1 = ((x5<=x6)^(x7*x8));

	if (t1 != 2061288920) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static uint64_t x10 = 440590220519LLU;
	int8_t x11 = INT8_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = -25482;

	t2 = ((x9<=x10)^(x11*x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -47;
	uint16_t x15 = 0U;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 3737994U;

	t3 = ((x13<=x14)^(x15*x16));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	static int16_t x22 = -62;
	int8_t x23 = INT8_MAX;
	int64_t x24 = 10046757657855936LL;
	volatile int64_t t4 = 932592622LL;

	t4 = ((x21<=x22)^(x23*x24));

	if (t4 != 1275938222547703872LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 3055U;
	uint64_t x26 = 6570871669LLU;
	uint8_t x27 = 0U;
	int64_t x28 = -1LL;
	int64_t t5 = 20353533LL;

	t5 = ((x25<=x26)^(x27*x28));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	int8_t x34 = -1;
	int16_t x35 = 0;
	int64_t x36 = -465828342302015715LL;

	t6 = ((x33<=x34)^(x35*x36));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 971287535048867LLU;
	volatile uint64_t x38 = 1969379486LLU;
	volatile int8_t x39 = INT8_MIN;
	int16_t x40 = -371;

	t7 = ((x37<=x38)^(x39*x40));

	if (t7 != 47488) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = 2359U;
	uint64_t x43 = 65154726LLU;
	int8_t x44 = -3;
	uint64_t t8 = 7LLU;

	t8 = ((x41<=x42)^(x43*x44));

	if (t8 != 18446744073514087438LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 4658746U;
	int16_t x46 = -1;
	static int8_t x47 = -1;

	t9 = ((x45<=x46)^(x47*x48));

	if (t9 != 4286194647U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -12633431185228LL;
	int64_t x52 = -7366377896565LL;
	static volatile int64_t t10 = 168LL;

	t10 = ((x49<=x50)^(x51*x52));

	if (t10 != 7366377896564LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -1;
	int8_t x66 = INT8_MAX;
	uint64_t x67 = UINT64_MAX;
	static int16_t x68 = 0;
	volatile uint64_t t11 = 2442LLU;

	t11 = ((x65<=x66)^(x67*x68));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MIN;
	int16_t x72 = 0;
	volatile int64_t t12 = 1940LL;

	t12 = ((x69<=x70)^(x71*x72));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = UINT32_MAX;
	uint16_t x75 = 92U;
	static volatile uint64_t x76 = 124288862LLU;

	t13 = ((x73<=x74)^(x75*x76));

	if (t13 != 11434575304LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = -1;
	uint32_t x78 = 7U;
	int16_t x79 = INT16_MIN;
	volatile uint64_t t14 = 77953188403049266LLU;

	t14 = ((x77<=x78)^(x79*x80));

	if (t14 != 18433572363323998208LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x82 = -1;
	static int32_t x83 = -1;
	int8_t x84 = -17;
	volatile int32_t t15 = 776984;

	t15 = ((x81<=x82)^(x83*x84));

	if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 5703560U;
	volatile int16_t x86 = 66;
	int8_t x88 = INT8_MAX;
	static volatile int32_t t16 = 4916;

	t16 = ((x85<=x86)^(x87*x88));

	if (t16 != 32385) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = 5372U;
	int8_t x91 = 1;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = ((x89<=x90)^(x91*x92));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = INT8_MAX;
	uint8_t x94 = 10U;
	static volatile int16_t x95 = 15;
	uint8_t x96 = 2U;

	t18 = ((x93<=x94)^(x95*x96));

	if (t18 != 30) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 2018U;
	int64_t x98 = INT64_MIN;
	volatile int8_t x99 = 3;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t19 = 1516352;

	t19 = ((x97<=x98)^(x99*x100));

	if (t19 != -384) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = -8429;
	uint16_t x102 = UINT16_MAX;
	int64_t x104 = 2LL;
	volatile int64_t t20 = -106LL;

	t20 = ((x101<=x102)^(x103*x104));

	if (t20 != -37LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = 4;
	volatile int64_t x108 = -1LL;
	int64_t t21 = -8175958LL;

	t21 = ((x105<=x106)^(x107*x108));

	if (t21 != -4LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x110 = 2978U;
	volatile int64_t x112 = -4320403221676LL;

	t22 = ((x109<=x110)^(x111*x112));

	if (t22 != 4320403221677LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MAX;
	uint32_t x114 = 58391U;
	volatile int8_t x115 = INT8_MIN;
	volatile int16_t x116 = 564;

	t23 = ((x113<=x114)^(x115*x116));

	if (t23 != -72191) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x117 = 61159633U;
	static volatile int32_t x119 = -120923;
	volatile uint32_t x120 = 16310U;
	volatile uint32_t t24 = 1749U;

	t24 = ((x117<=x118)^(x119*x120));

	if (t24 != 2322713167U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = INT8_MIN;
	volatile int16_t x124 = -1;
	volatile int32_t t25 = -2;

	t25 = ((x121<=x122)^(x123*x124));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 1228282329569884LLU;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = UINT8_MAX;
	volatile int64_t t26 = -1LL;

	t26 = ((x125<=x126)^(x127*x128));

	if (t26 != 6337818146759354LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x133 = INT32_MAX;
	int32_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -49;
	volatile int32_t t27 = -1024335418;

	t27 = ((x133<=x134)^(x135*x136));

	if (t27 != 1605632) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x138 = -1LL;
	int32_t x139 = 1;
	int8_t x140 = -1;
	static int32_t t28 = 4;

	t28 = ((x137<=x138)^(x139*x140));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 1916U;
	uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 371792226077617430LLU;
	int32_t x144 = -1;
	volatile uint64_t t29 = 257758LLU;

	t29 = ((x141<=x142)^(x143*x144));

	if (t29 != 18074951847631934187LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x150 = UINT32_MAX;
	uint8_t x151 = 0U;
	int64_t x152 = -7476979720823261LL;

	t30 = ((x149<=x150)^(x151*x152));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 3U;
	volatile uint64_t x154 = 12274069LLU;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MIN;
	uint32_t t31 = 12604U;

	t31 = ((x153<=x154)^(x155*x156));

	if (t31 != 129U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	int32_t x158 = 35704583;
	uint32_t x159 = 161399U;
	int16_t x160 = 7;
	volatile uint32_t t32 = 1U;

	t32 = ((x157<=x158)^(x159*x160));

	if (t32 != 1129792U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MAX;
	volatile int8_t x163 = INT8_MIN;
	int8_t x164 = -63;
	int32_t t33 = -22870;

	t33 = ((x161<=x162)^(x163*x164));

	if (t33 != 8065) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t34 = 2382747;

	t34 = ((x165<=x166)^(x167*x168));

	if (t34 != -8388480) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = 5U;
	static int64_t x175 = -1LL;
	int16_t x176 = -1;
	volatile int64_t t35 = 1155112819943699453LL;

	t35 = ((x173<=x174)^(x175*x176));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = 0;
	int64_t x179 = -262477503759082LL;

	t36 = ((x177<=x178)^(x179*x180));

	if (t36 != 5566946660706842772LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -1;
	static uint32_t x182 = 198U;
	static uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 1918467U;
	uint32_t t37 = 622U;

	t37 = ((x181<=x182)^(x183*x184));

	if (t37 != 1172683261U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x193 = INT8_MAX;
	int32_t x194 = -1;
	static volatile uint8_t x195 = 10U;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t38 = 57617844U;

	t38 = ((x193<=x194)^(x195*x196));

	if (t38 != 4294967286U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x201 = 80079LLU;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = -73352;

	t39 = ((x201<=x202)^(x203*x204));

	if (t39 != 9389057) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x206 = INT16_MIN;
	uint32_t x208 = 776469216U;
	static uint32_t t40 = 428783111U;

	t40 = ((x205<=x206)^(x207*x208));

	if (t40 != 1365640480U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = -1927819643LL;
	static int16_t x210 = -1;
	int32_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;

	t41 = ((x209<=x210)^(x211*x212));

	if (t41 != 32769) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = -25;
	volatile int32_t x214 = INT32_MIN;
	static int8_t x215 = -17;

	t42 = ((x213<=x214)^(x215*x216));

	if (t42 != 4292235685U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = INT32_MIN;
	volatile int16_t x219 = INT16_MIN;
	volatile uint32_t t43 = 140346742U;

	t43 = ((x217<=x218)^(x219*x220));

	if (t43 != 32769U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = -79901;
	int64_t x226 = -1097554373241729761LL;
	int8_t x227 = INT8_MAX;

	t44 = ((x225<=x226)^(x227*x228));

	if (t44 != 498094LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x229 = 8104658U;
	uint16_t x231 = 1U;
	int32_t x232 = -1;
	int32_t t45 = -30461081;

	t45 = ((x229<=x230)^(x231*x232));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = -1LL;
	volatile int16_t x236 = -1;
	int32_t t46 = -1;

	t46 = ((x233<=x234)^(x235*x236));

	if (t46 != 32769) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x237 = 108182LL;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = -1;
	static volatile uint8_t x240 = 6U;
	int32_t t47 = -272795073;

	t47 = ((x237<=x238)^(x239*x240));

	if (t47 != -5) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = INT64_MIN;
	volatile int64_t x242 = -1LL;
	static uint32_t x243 = 20987U;
	static volatile int8_t x244 = -31;
	volatile uint32_t t48 = 218930U;

	t48 = ((x241<=x242)^(x243*x244));

	if (t48 != 4294316698U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = INT16_MAX;
	static int32_t x254 = -310;
	uint32_t x255 = 24U;
	uint16_t x256 = 1U;

	t49 = ((x253<=x254)^(x255*x256));

	if (t49 != 24U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = -48;
	int8_t x259 = 1;
	uint16_t x260 = UINT16_MAX;
	int32_t t50 = 228746044;

	t50 = ((x257<=x258)^(x259*x260));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x266 = -27153844868346LL;
	int64_t x267 = -1LL;
	int64_t x268 = -573943363341927857LL;
	static int64_t t51 = -158140278353261547LL;

	t51 = ((x265<=x266)^(x267*x268));

	if (t51 != 573943363341927857LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x269 = 0U;
	uint16_t x270 = 7U;
	static uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 14408087362LLU;
	volatile uint64_t t52 = 1828491LLU;

	t52 = ((x269<=x270)^(x271*x272));

	if (t52 != 3674062277311LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = -1;
	volatile int64_t x278 = -3603089717670456426LL;
	int64_t x279 = 7LL;
	int32_t x280 = INT32_MIN;
	volatile int64_t t53 = 211595944526LL;

	t53 = ((x277<=x278)^(x279*x280));

	if (t53 != -15032385536LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x281 = 16576476U;
	volatile uint32_t x282 = 363430U;
	uint8_t x283 = 31U;
	volatile int32_t t54 = 90710908;

	t54 = ((x281<=x282)^(x283*x284));

	if (t54 != 18321) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x285 = -1;
	int16_t x286 = -3686;
	int8_t x287 = 28;
	int32_t t55 = -69;

	t55 = ((x285<=x286)^(x287*x288));

	if (t55 != 917476) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x289 = 56U;
	static int16_t x290 = 1;
	volatile int32_t x291 = -1;
	uint16_t x292 = 219U;
	int32_t t56 = 101277978;

	t56 = ((x289<=x290)^(x291*x292));

	if (t56 != -219) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x293 = UINT16_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = -413697865633LL;
	volatile int64_t t57 = -144685826318LL;

	t57 = ((x293<=x294)^(x295*x296));

	if (t57 != 52953326801024LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = -1;
	int8_t x298 = -1;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = 65078LLU;
	static volatile uint64_t t58 = 935856863127100LLU;

	t58 = ((x297<=x298)^(x299*x300));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = -1;
	int8_t x303 = -1;
	volatile int32_t t59 = 0;

	t59 = ((x301<=x302)^(x303*x304));

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = INT64_MIN;
	static int64_t x318 = 1403300747392126LL;
	volatile uint16_t x319 = 7024U;
	int8_t x320 = 23;
	static int32_t t60 = -5;

	t60 = ((x317<=x318)^(x319*x320));

	if (t60 != 161553) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x329 = INT64_MAX;
	volatile uint8_t x330 = 59U;
	int16_t x331 = INT16_MAX;
	uint16_t x332 = UINT16_MAX;

	t61 = ((x329<=x330)^(x331*x332));

	if (t61 != 2147385345) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x334 = UINT64_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	volatile int32_t x336 = -2;
	volatile uint64_t t62 = 50LLU;

	t62 = ((x333<=x334)^(x335*x336));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x337 = INT64_MAX;
	static uint16_t x339 = 28U;
	uint32_t x340 = 12511107U;
	uint32_t t63 = 542467U;

	t63 = ((x337<=x338)^(x339*x340));

	if (t63 != 350310996U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x341 = 26U;
	uint16_t x343 = 6423U;
	static uint16_t x344 = 32108U;
	volatile int32_t t64 = 9216;

	t64 = ((x341<=x342)^(x343*x344));

	if (t64 != 206229684) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x346 = 24322U;
	volatile uint16_t x347 = UINT16_MAX;
	uint64_t x348 = 0LLU;
	uint64_t t65 = 20601248226582LLU;

	t65 = ((x345<=x346)^(x347*x348));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x353 = INT8_MAX;
	static uint16_t x354 = 3U;
	int32_t x355 = -1;
	static int16_t x356 = -2443;
	static volatile int32_t t66 = 60;

	t66 = ((x353<=x354)^(x355*x356));

	if (t66 != 2443) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int8_t x358 = -1;
	static volatile int16_t x359 = INT16_MIN;
	volatile uint16_t x360 = 59U;

	t67 = ((x357<=x358)^(x359*x360));

	if (t67 != -1933312) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x361 = 95U;
	static int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MIN;
	int32_t x364 = 1;
	int32_t t68 = -60360;

	t68 = ((x361<=x362)^(x363*x364));

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = INT64_MAX;
	volatile uint16_t x366 = UINT16_MAX;
	int8_t x367 = INT8_MIN;
	uint32_t x368 = UINT32_MAX;

	t69 = ((x365<=x366)^(x367*x368));

	if (t69 != 128U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = -1LL;
	int8_t x376 = INT8_MAX;
	volatile int64_t t70 = -2970518LL;

	t70 = ((x373<=x374)^(x375*x376));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x377 = INT8_MIN;
	int16_t x378 = -135;
	int8_t x379 = -1;
	static volatile int32_t t71 = -1;

	t71 = ((x377<=x378)^(x379*x380));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x381 = 113U;
	uint16_t x382 = 7609U;
	int32_t x383 = 5951;
	int16_t x384 = INT16_MIN;
	int32_t t72 = -14375;

	t72 = ((x381<=x382)^(x383*x384));

	if (t72 != -195002367) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x390 = 15394U;
	int16_t x391 = 31;
	int32_t x392 = 14723;
	int32_t t73 = -30751304;

	t73 = ((x389<=x390)^(x391*x392));

	if (t73 != 456412) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = -1;
	uint8_t x394 = 1U;
	volatile uint8_t x395 = 62U;
	int32_t x396 = -1;

	t74 = ((x393<=x394)^(x395*x396));

	if (t74 != -61) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = -1;
	volatile int64_t x402 = INT64_MIN;
	int32_t x403 = -1;

	t75 = ((x401<=x402)^(x403*x404));

	if (t75 != 3376612239U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x409 = UINT32_MAX;
	uint32_t x410 = UINT32_MAX;
	int16_t x412 = -1;

	t76 = ((x409<=x410)^(x411*x412));

	if (t76 != 129) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x413 = 25U;
	static int8_t x415 = -12;
	int16_t x416 = -1;

	t77 = ((x413<=x414)^(x415*x416));

	if (t77 != 13) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x417 = INT32_MAX;
	volatile int32_t x418 = -1;
	int8_t x420 = INT8_MAX;

	t78 = ((x417<=x418)^(x419*x420));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x421 = -2335;
	volatile int32_t x422 = -966;
	uint32_t x424 = 62953U;
	volatile uint32_t t79 = 3578015U;

	t79 = ((x421<=x422)^(x423*x424));

	if (t79 != 1042269063U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x429 = 97271640836LLU;
	uint64_t x430 = 58115086577304965LLU;
	uint64_t x431 = 160005485294320935LLU;
	static uint32_t x432 = 38661U;
	uint64_t t80 = 1226LLU;

	t80 = ((x429<=x430)^(x431*x432));

	if (t80 != 6312802271041876674LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x445 = INT16_MIN;
	int32_t x447 = -8;
	int32_t t81 = -921;

	t81 = ((x445<=x446)^(x447*x448));

	if (t81 != -524280) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x449 = -13757LL;
	volatile int32_t x450 = -1;
	int32_t x451 = 153;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t82 = 41080333;

	t82 = ((x449<=x450)^(x451*x452));

	if (t82 != -19583) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x453 = INT8_MAX;
	uint64_t x454 = UINT64_MAX;
	uint8_t x455 = 5U;
	int16_t x456 = INT16_MIN;

	t83 = ((x453<=x454)^(x455*x456));

	if (t83 != -163839) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x461 = 3U;
	volatile int8_t x463 = INT8_MIN;
	volatile int32_t t84 = 986546772;

	t84 = ((x461<=x462)^(x463*x464));

	if (t84 != 129) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x466 = INT32_MAX;
	uint64_t x467 = 1050938994LLU;
	static int64_t x468 = INT64_MIN;
	uint64_t t85 = 46LLU;

	t85 = ((x465<=x466)^(x467*x468));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x470 = -1LL;
	int32_t x471 = -1;
	int32_t t86 = 3701;

	t86 = ((x469<=x470)^(x471*x472));

	if (t86 != -6536) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x473 = 2U;
	int32_t x474 = 262;
	int16_t x475 = 126;
	uint64_t x476 = 27665LLU;
	volatile uint64_t t87 = 3866798903854LLU;

	t87 = ((x473<=x474)^(x475*x476));

	if (t87 != 3485791LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x477 = 2548;
	int16_t x480 = 150;
	int32_t t88 = -50705171;

	t88 = ((x477<=x478)^(x479*x480));

	if (t88 != 19050) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x481 = INT16_MIN;
	volatile int64_t x482 = -326LL;
	volatile int64_t x483 = INT64_MAX;
	static uint64_t x484 = UINT64_MAX;
	volatile uint64_t t89 = 130890492656234LLU;

	t89 = ((x481<=x482)^(x483*x484));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x485 = -1;
	int8_t x486 = -1;
	int16_t x487 = -1;
	volatile int32_t t90 = -585;

	t90 = ((x485<=x486)^(x487*x488));

	if (t90 != -6255) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x493 = INT64_MAX;
	uint64_t x494 = UINT64_MAX;
	int8_t x496 = -1;
	static volatile int32_t t91 = -1;

	t91 = ((x493<=x494)^(x495*x496));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x497 = -84612940317043964LL;
	uint8_t x498 = UINT8_MAX;
	uint8_t x500 = UINT8_MAX;
	uint32_t t92 = 535U;

	t92 = ((x497<=x498)^(x499*x500));

	if (t92 != 990674U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x501 = INT64_MIN;
	static int64_t x502 = INT64_MAX;
	volatile uint32_t x503 = UINT32_MAX;

	t93 = ((x501<=x502)^(x503*x504));

	if (t93 != 2147483649U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x510 = INT16_MIN;
	uint64_t x511 = UINT64_MAX;
	int32_t x512 = INT32_MIN;

	t94 = ((x509<=x510)^(x511*x512));

	if (t94 != 2147483648LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = INT32_MAX;
	int16_t x514 = -1;
	int8_t x515 = -1;
	int8_t x516 = -1;
	volatile int32_t t95 = 3397174;

	t95 = ((x513<=x514)^(x515*x516));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x517 = INT16_MIN;
	volatile uint16_t x518 = 1U;
	volatile uint8_t x519 = 0U;
	uint16_t x520 = 233U;
	volatile int32_t t96 = 515784;

	t96 = ((x517<=x518)^(x519*x520));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x521 = -1;
	int32_t x522 = INT32_MIN;
	volatile uint32_t x524 = 238U;
	uint32_t t97 = 28U;

	t97 = ((x521<=x522)^(x523*x524));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x529 = UINT64_MAX;
	int32_t x530 = INT32_MIN;
	static int64_t x531 = 287LL;

	t98 = ((x529<=x530)^(x531*x532));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x533 = -1;
	int32_t x534 = INT32_MIN;
	static uint8_t x535 = 1U;
	int32_t x536 = -1;
	int32_t t99 = -1103911;

	t99 = ((x533<=x534)^(x535*x536));

	if (t99 != -1) { NG(); } else { ; }
	
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

