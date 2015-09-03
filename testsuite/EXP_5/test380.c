#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x18 = INT16_MIN;
uint64_t x20 = 11257LLU;
volatile uint64_t t2 = 990LLU;
uint64_t x21 = UINT64_MAX;
static uint32_t x24 = UINT32_MAX;
uint8_t x29 = 14U;
uint32_t x31 = UINT32_MAX;
int32_t t5 = 642;
static uint8_t x39 = UINT8_MAX;
volatile int64_t t7 = -31381461300789571LL;
int32_t x45 = INT32_MIN;
volatile int64_t x46 = -378LL;
static int64_t t8 = -32608LL;
int8_t x50 = INT8_MAX;
int32_t x52 = 52;
volatile uint64_t x69 = 11LLU;
uint16_t x70 = 26U;
int16_t x76 = INT16_MIN;
int64_t t12 = -25LL;
uint8_t x79 = UINT8_MAX;
volatile uint32_t t13 = 27231353U;
volatile int64_t x82 = INT64_MIN;
uint32_t x94 = UINT32_MAX;
uint16_t x95 = 14025U;
int32_t x109 = -1;
uint8_t x112 = 40U;
uint64_t x119 = UINT64_MAX;
int64_t x120 = INT64_MIN;
int16_t x139 = 19;
int8_t x143 = 2;
volatile int32_t x145 = INT32_MIN;
int16_t x146 = 312;
volatile int16_t x148 = INT16_MIN;
int16_t x150 = INT16_MAX;
static volatile uint8_t x152 = 90U;
volatile uint16_t x155 = 25648U;
uint32_t t27 = 105179679U;
volatile uint16_t x171 = 18U;
volatile int64_t t29 = -3768154LL;
volatile int16_t x178 = -1;
uint16_t x195 = 11522U;
uint32_t x201 = 46813345U;
int16_t x203 = 12666;
static int64_t x204 = -121463LL;
volatile int64_t t36 = -3643778428697766LL;
volatile int8_t x212 = INT8_MIN;
static int32_t x220 = INT32_MIN;
int16_t x224 = -2;
volatile int64_t t41 = 2006999767439239LL;
static uint32_t t44 = 780721U;
static volatile int16_t x247 = INT16_MAX;
int64_t t46 = 198970993LL;
int8_t x267 = INT8_MIN;
int64_t t49 = -88LL;
static int8_t x270 = INT8_MIN;
uint8_t x281 = UINT8_MAX;
static volatile int64_t x284 = 232376252814720LL;
int32_t x293 = 29244;
static volatile int8_t x294 = -3;
volatile uint64_t t54 = 90097645944LLU;
static int64_t t56 = 64018405267312LL;
int8_t x319 = INT8_MIN;
int16_t x333 = -7596;
int16_t x341 = INT16_MAX;
int64_t x342 = INT64_MIN;
int16_t x344 = -1;
int32_t x347 = -840;
volatile int64_t x363 = 1958LL;
uint16_t x365 = UINT16_MAX;
int8_t x368 = INT8_MAX;
int8_t x370 = INT8_MAX;
static int32_t t67 = -57;
static uint64_t x381 = 844669418LLU;
static uint16_t x385 = UINT16_MAX;
volatile int32_t x386 = 7;
volatile int32_t t70 = -100529;
int64_t x397 = 231862LL;
volatile int64_t x400 = INT64_MAX;
volatile int16_t x403 = 3919;
int64_t t74 = -1140285232382LL;
int8_t x405 = 14;
int64_t x420 = -1LL;
int64_t x427 = -16437404LL;
uint64_t t79 = 8428084LLU;
uint8_t x447 = UINT8_MAX;
static int16_t x448 = INT16_MIN;
volatile int64_t x452 = 321911LL;
int8_t x470 = 0;
volatile int32_t x472 = INT32_MIN;
int64_t x489 = 2064353866432LL;
int32_t x492 = 967;
int16_t x494 = -1671;
uint8_t x497 = UINT8_MAX;
uint64_t x501 = 398030LLU;
int64_t x503 = 0LL;
static int32_t x504 = 113;
int64_t x508 = -1180259984356LL;
volatile int16_t x510 = -1;
uint8_t x514 = 3U;
uint8_t x515 = UINT8_MAX;
volatile int64_t t91 = 31091135117LL;
volatile uint8_t x517 = 6U;
uint32_t x518 = 3U;
uint16_t x519 = UINT16_MAX;
int64_t x526 = -1046LL;
int64_t t94 = -2628754518512LL;
int16_t x546 = INT16_MAX;
int64_t x549 = 16525521LL;
static volatile int32_t x552 = INT32_MIN;
static int32_t x564 = -1;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int16_t x2 = -102;
	int32_t x3 = 42;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 115535079693LL;

	t0 = (x1*((x2*x3)/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 195324308307501280LL;
	uint32_t x14 = 126780U;
	uint16_t x15 = UINT16_MAX;
	volatile int16_t x16 = -1;
	volatile int64_t t1 = 117083LL;

	t1 = (x13*((x14*x15)/x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x17 = UINT16_MAX;
	uint64_t x19 = UINT64_MAX;

	t2 = (x17*((x18*x19)/x20));

	if (t2 != 131070LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = -8;
	static int64_t x23 = -72846518LL;
	uint64_t t3 = 3LLU;

	t3 = (x21*((x22*x23)/x24));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x30 = 397U;
	uint8_t x32 = UINT8_MAX;
	uint32_t t4 = 245U;

	t4 = (x29*((x30*x31)/x32));

	if (t4 != 235802098U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	int32_t x35 = -1;
	int32_t x36 = INT32_MIN;

	t5 = (x33*((x34*x35)/x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = -29;
	int16_t x38 = INT16_MIN;
	uint8_t x40 = UINT8_MAX;
	int32_t t6 = 206083;

	t6 = (x37*((x38*x39)/x40));

	if (t6 != 950272) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	static int64_t x42 = 4904697LL;
	uint16_t x43 = 16U;
	int8_t x44 = -1;

	t7 = (x41*((x42*x43)/x44));

	if (t7 != 10044819456LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x47 = 2U;
	int16_t x48 = INT16_MAX;

	t8 = (x45*((x46*x47)/x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -1LL;
	volatile uint8_t x51 = UINT8_MAX;
	volatile int64_t t9 = 3186614626902LL;

	t9 = (x49*((x50*x51)/x52));

	if (t9 != -622LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x57 = 73196212U;
	int64_t x58 = -3LL;
	int64_t x59 = 32833386486450912LL;
	int64_t x60 = INT64_MIN;
	int64_t t10 = 304898863118LL;

	t10 = (x57*((x58*x59)/x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x71 = 10051795515296608LLU;
	int8_t x72 = INT8_MIN;
	uint64_t t11 = 43481337690692LLU;

	t11 = (x69*((x70*x71)/x72));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 4218U;
	volatile int64_t x74 = 1448317LL;
	int8_t x75 = INT8_MIN;

	t12 = (x73*((x74*x75)/x76));

	if (t12 != 23861226LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	volatile uint16_t x78 = 1U;
	uint32_t x80 = 3U;

	t13 = (x77*((x78*x79)/x80));

	if (t13 != 4294967211U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -1;
	uint16_t x83 = 0U;
	int8_t x84 = -3;
	volatile int64_t t14 = 38LL;

	t14 = (x81*((x82*x83)/x84));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = INT32_MIN;
	uint64_t x86 = 71LLU;
	uint64_t x87 = 466LLU;
	uint8_t x88 = UINT8_MAX;
	static volatile uint64_t t15 = 352LLU;

	t15 = (x85*((x86*x87)/x88));

	if (t15 != 18446743796684161024LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MAX;
	static int16_t x96 = INT16_MIN;
	volatile uint32_t t16 = 0U;

	t16 = (x93*((x94*x95)/x96));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x101 = 121;
	int32_t x102 = INT32_MIN;
	static volatile uint16_t x103 = 0U;
	volatile int8_t x104 = INT8_MAX;
	volatile int32_t t17 = -4;

	t17 = (x101*((x102*x103)/x104));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x110 = INT16_MAX;
	int8_t x111 = -13;
	int32_t t18 = 6854211;

	t18 = (x109*((x110*x111)/x112));

	if (t18 != 10649) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = INT32_MAX;
	volatile int64_t x118 = INT64_MAX;
	volatile uint64_t t19 = 1833442246232LLU;

	t19 = (x117*((x118*x119)/x120));

	if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = 1;
	uint32_t x124 = 42745U;
	uint32_t t20 = 9U;

	t20 = (x121*((x122*x123)/x124));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x125 = INT32_MIN;
	int64_t x126 = -1LL;
	volatile int8_t x127 = -4;
	int16_t x128 = 148;
	volatile int64_t t21 = 96909403LL;

	t21 = (x125*((x126*x127)/x128));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x133 = -1LL;
	volatile uint8_t x134 = 5U;
	int32_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	int64_t t22 = -7240138161515228LL;

	t22 = (x133*((x134*x135)/x136));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x137 = 112418667U;
	uint32_t x138 = UINT32_MAX;
	int32_t x140 = INT32_MIN;
	volatile uint32_t t23 = 616380192U;

	t23 = (x137*((x138*x139)/x140));

	if (t23 != 112418667U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	int32_t x144 = INT32_MIN;
	uint64_t t24 = 3LLU;

	t24 = (x141*((x142*x143)/x144));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x147 = 18541U;
	uint32_t t25 = 1479U;

	t25 = (x145*((x146*x147)/x148));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	int32_t t26 = -5;

	t26 = (x149*((x150*x151)/x152));

	if (t26 != 1527021568) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t x156 = -1;

	t27 = (x153*((x154*x155)/x156));

	if (t27 != 6540240U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x157 = INT32_MIN;
	uint8_t x158 = 10U;
	uint8_t x159 = 27U;
	volatile uint32_t x160 = 847U;
	uint32_t t28 = 60813U;

	t28 = (x157*((x158*x159)/x160));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = 15190468015LL;
	int16_t x170 = INT16_MIN;
	int64_t x172 = 174093422LL;

	t29 = (x169*((x170*x171)/x172));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int8_t x174 = -1;
	int8_t x175 = -1;
	int64_t x176 = -1LL;
	uint64_t t30 = 885383313796333LLU;

	t30 = (x173*((x174*x175)/x176));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = -1;
	int16_t x179 = -3947;
	int32_t x180 = INT32_MIN;
	volatile int32_t t31 = 602092239;

	t31 = (x177*((x178*x179)/x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x181 = INT8_MIN;
	volatile uint16_t x182 = 8226U;
	uint8_t x183 = 3U;
	uint16_t x184 = 2U;
	int32_t t32 = 6;

	t32 = (x181*((x182*x183)/x184));

	if (t32 != -1579392) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = INT32_MAX;
	static volatile int8_t x186 = -8;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = 9500149;
	volatile uint32_t t33 = 532U;

	t33 = (x185*((x186*x187)/x188));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x193 = 126U;
	volatile uint16_t x194 = 21441U;
	volatile uint8_t x196 = 54U;
	volatile int32_t t34 = 7350;

	t34 = (x193*((x194*x195)/x196));

	if (t34 != 576434124) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 508624LLU;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MAX;
	volatile int16_t x200 = INT16_MIN;
	uint64_t t35 = 19748240513LLU;

	t35 = (x197*((x198*x199)/x200));

	if (t35 != 18446744073580869744LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x202 = 13U;

	t36 = (x201*((x202*x203)/x204));

	if (t36 != -46813345LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x209 = UINT64_MAX;
	int64_t x210 = -749307480831146LL;
	volatile int64_t x211 = 99LL;
	static uint64_t t37 = 45395691247LLU;

	t37 = (x209*((x210*x211)/x212));

	if (t37 != 18446164531204846277LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x213 = 23;
	static int32_t x214 = 9857;
	static volatile int8_t x215 = 58;
	int64_t x216 = INT64_MAX;
	volatile int64_t t38 = 12608603LL;

	t38 = (x213*((x214*x215)/x216));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = -1;
	volatile int16_t x218 = 2;
	volatile int8_t x219 = INT8_MAX;
	int32_t t39 = 7;

	t39 = (x217*((x218*x219)/x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x221 = 44;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 297724846LLU;
	static volatile uint64_t t40 = 7846538LLU;

	t40 = (x221*((x222*x223)/x224));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = 30164U;
	uint32_t x226 = 1034U;
	static int32_t x227 = -32;
	int64_t x228 = INT64_MIN;

	t41 = (x225*((x226*x227)/x228));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x229 = -1;
	uint32_t x230 = 3402403U;
	volatile int16_t x231 = -5;
	static int8_t x232 = -1;
	static volatile uint32_t t42 = 35384U;

	t42 = (x229*((x230*x231)/x232));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x233 = 0;
	uint64_t x234 = 15LLU;
	volatile int8_t x235 = -13;
	int32_t x236 = INT32_MIN;
	static uint64_t t43 = 1315646609845427316LLU;

	t43 = (x233*((x234*x235)/x236));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = -1839206;
	int16_t x238 = 248;
	volatile uint32_t x239 = UINT32_MAX;
	int32_t x240 = INT32_MIN;

	t44 = (x237*((x238*x239)/x240));

	if (t44 != 4293128090U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = 466;
	volatile int16_t x246 = -1;
	int8_t x248 = INT8_MIN;
	int32_t t45 = 1;

	t45 = (x245*((x246*x247)/x248));

	if (t45 != 118830) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = INT32_MIN;
	volatile int32_t x250 = 523116;
	volatile int64_t x251 = -1LL;
	static uint8_t x252 = 31U;

	t46 = (x249*((x250*x251)/x252));

	if (t46 != 36236639076352LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x253 = -1;
	int32_t x254 = -1;
	int16_t x255 = 5;
	uint8_t x256 = 26U;
	volatile int32_t t47 = -955;

	t47 = (x253*((x254*x255)/x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x257 = 27;
	int32_t x258 = -121231151;
	volatile uint32_t x259 = 2170626U;
	static int8_t x260 = -32;
	volatile uint32_t t48 = 28123U;

	t48 = (x257*((x258*x259)/x260));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x265 = 453832;
	static int8_t x266 = INT8_MIN;
	int64_t x268 = INT64_MAX;

	t49 = (x265*((x266*x267)/x268));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x271 = 14622626LLU;
	uint8_t x272 = 121U;
	volatile uint64_t t50 = 106205199604LLU;

	t50 = (x269*((x270*x271)/x272));

	if (t50 != 914714580202908184LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x273 = INT32_MAX;
	static int64_t x274 = -6LL;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = -1765;
	volatile int64_t t51 = 45678701LL;

	t51 = (x273*((x274*x275)/x276));

	if (t51 != 31354238351259385LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x282 = 6LLU;
	int32_t x283 = -100;
	uint64_t t52 = 15287557605LLU;

	t52 = (x281*((x282*x283)/x284));

	if (t52 != 20242665LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x295 = -1;
	volatile uint32_t x296 = 211118U;
	volatile uint32_t t53 = 352141281U;

	t53 = (x293*((x294*x295)/x296));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x297 = 24277172196LL;
	static uint64_t x298 = UINT64_MAX;
	uint32_t x299 = UINT32_MAX;
	uint64_t x300 = 70660414798422447LLU;

	t54 = (x297*((x298*x299)/x300));

	if (t54 != 6336341943156LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t55 = 333529200;

	t55 = (x301*((x302*x303)/x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x313 = INT64_MIN;
	int32_t x314 = -56;
	int8_t x315 = 54;
	int64_t x316 = INT64_MIN;

	t56 = (x313*((x314*x315)/x316));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = INT8_MIN;
	volatile uint16_t x318 = 1U;
	static int32_t x320 = INT32_MAX;
	static volatile int32_t t57 = 9791881;

	t57 = (x317*((x318*x319)/x320));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x321 = -242;
	volatile int8_t x322 = -1;
	uint8_t x323 = 25U;
	volatile int16_t x324 = INT16_MIN;
	static int32_t t58 = 12306561;

	t58 = (x321*((x322*x323)/x324));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = 896752408316LL;
	int8_t x326 = INT8_MAX;
	int8_t x327 = 18;
	volatile int8_t x328 = -3;
	volatile int64_t t59 = 48041LL;

	t59 = (x325*((x326*x327)/x328));

	if (t59 != -683325335136792LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x329 = UINT64_MAX;
	uint32_t x330 = 6281267U;
	int16_t x331 = -3;
	uint8_t x332 = UINT8_MAX;
	uint64_t t60 = 30570433672692LLU;

	t60 = (x329*((x330*x331)/x332));

	if (t60 != 18446744073692782505LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x334 = INT16_MAX;
	static int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	static volatile int64_t t61 = 9LL;

	t61 = (x333*((x334*x335)/x336));

	if (t61 != -8155893989376LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x337 = INT32_MAX;
	static int8_t x338 = 61;
	int16_t x339 = 5662;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t62 = 87LLU;

	t62 = (x337*((x338*x339)/x340));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x343 = UINT64_MAX;
	uint64_t t63 = 18723957568LLU;

	t63 = (x341*((x342*x343)/x344));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x345 = -1024507943;
	uint32_t x346 = 20827U;
	volatile int8_t x348 = -3;
	uint32_t t64 = 1804953U;

	t64 = (x345*((x346*x347)/x348));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x361 = INT16_MIN;
	static uint16_t x362 = UINT16_MAX;
	static uint16_t x364 = 52U;
	volatile int64_t t65 = 29LL;

	t65 = (x361*((x362*x363)/x364));

	if (t65 != -80859758592LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	static int64_t t66 = -798220487775517LL;

	t66 = (x365*((x366*x367)/x368));

	if (t66 != 1108152286200LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x369 = INT8_MAX;
	static volatile uint16_t x371 = 15U;
	volatile int32_t x372 = -24579466;

	t67 = (x369*((x370*x371)/x372));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x378 = 63U;
	int16_t x379 = INT16_MIN;
	int16_t x380 = 3;
	int32_t t68 = 28990;

	t68 = (x377*((x378*x379)/x380));

	if (t68 != 88080384) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x382 = -190943LL;
	static uint16_t x383 = UINT16_MAX;
	uint8_t x384 = 53U;
	volatile uint64_t t69 = 801548961547090LLU;

	t69 = (x381*((x382*x383)/x384));

	if (t69 != 18247315242151992856LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x387 = 1;
	volatile int32_t x388 = -1;

	t70 = (x385*((x386*x387)/x388));

	if (t70 != -458745) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = 3406223706LLU;
	int32_t x391 = 1541;
	int8_t x392 = -59;
	volatile uint64_t t71 = 2854501046LLU;

	t71 = (x389*((x390*x391)/x392));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = -1;
	int32_t x394 = -1;
	int8_t x395 = INT8_MAX;
	int8_t x396 = 14;
	int32_t t72 = 7;

	t72 = (x393*((x394*x395)/x396));

	if (t72 != 9) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x398 = 1900;
	uint8_t x399 = 0U;
	static int64_t t73 = 4029865302337417425LL;

	t73 = (x397*((x398*x399)/x400));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x401 = INT32_MAX;
	uint8_t x402 = UINT8_MAX;
	int64_t x404 = INT64_MIN;

	t74 = (x401*((x402*x403)/x404));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x406 = 0LL;
	uint64_t x407 = 282293933LLU;
	int64_t x408 = 1041323594543116016LL;
	uint64_t t75 = 11101234408835294LLU;

	t75 = (x405*((x406*x407)/x408));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x413 = UINT8_MAX;
	uint8_t x414 = 1U;
	int8_t x415 = INT8_MIN;
	int64_t x416 = -1LL;
	volatile int64_t t76 = 24055200970853LL;

	t76 = (x413*((x414*x415)/x416));

	if (t76 != 32640LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x417 = 3U;
	volatile int8_t x418 = -1;
	static volatile uint16_t x419 = UINT16_MAX;
	int64_t t77 = -12482586726220LL;

	t77 = (x417*((x418*x419)/x420));

	if (t77 != 196605LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x425 = 502;
	static int16_t x426 = INT16_MIN;
	int16_t x428 = -3;
	static volatile int64_t t78 = 123789LL;

	t78 = (x425*((x426*x427)/x428));

	if (t78 != -90129222948014LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x437 = UINT32_MAX;
	uint64_t x438 = UINT64_MAX;
	uint64_t x439 = 74LLU;
	int32_t x440 = -26146612;

	t79 = (x437*((x438*x439)/x440));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x445 = INT16_MAX;
	uint64_t x446 = 68392545617790477LLU;
	uint64_t t80 = 182LLU;

	t80 = (x445*((x446*x447)/x448));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x449 = INT16_MIN;
	int16_t x450 = -1;
	int16_t x451 = INT16_MIN;
	int64_t t81 = 1LL;

	t81 = (x449*((x450*x451)/x452));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x465 = INT32_MIN;
	uint16_t x466 = 10888U;
	int8_t x467 = INT8_MAX;
	int32_t x468 = INT32_MIN;
	int32_t t82 = 206;

	t82 = (x465*((x466*x467)/x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -9;
	static int32_t x471 = -70;
	int32_t t83 = -1906;

	t83 = (x469*((x470*x471)/x472));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x481 = 17861814LLU;
	uint16_t x482 = 15U;
	uint32_t x483 = UINT32_MAX;
	int32_t x484 = -111809;
	volatile uint64_t t84 = 65671639752215LLU;

	t84 = (x481*((x482*x483)/x484));

	if (t84 != 17861814LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x490 = 7121204923465LLU;
	int32_t x491 = INT32_MIN;
	uint64_t t85 = 1398936430541626LLU;

	t85 = (x489*((x490*x491)/x492));

	if (t85 != 9479282546299619776LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x493 = 13040U;
	volatile uint16_t x495 = 5U;
	volatile int8_t x496 = INT8_MAX;
	uint32_t t86 = 231595U;

	t86 = (x493*((x494*x495)/x496));

	if (t86 != 4294119696U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x498 = 0U;
	volatile uint16_t x499 = UINT16_MAX;
	static int16_t x500 = INT16_MIN;
	int32_t t87 = -7600;

	t87 = (x497*((x498*x499)/x500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x502 = 88U;
	uint64_t t88 = 1756230047LLU;

	t88 = (x501*((x502*x503)/x504));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x505 = 8LLU;
	uint32_t x506 = UINT32_MAX;
	static int32_t x507 = INT32_MAX;
	uint64_t t89 = 246761182972242965LLU;

	t89 = (x505*((x506*x507)/x508));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x509 = INT8_MIN;
	uint64_t x511 = 1479332LLU;
	int64_t x512 = -1LL;
	static volatile uint64_t t90 = 20179765468529LLU;

	t90 = (x509*((x510*x511)/x512));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x513 = 453994912LL;
	uint16_t x516 = 10U;

	t91 = (x513*((x514*x515)/x516));

	if (t91 != 34503613312LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x520 = -279;
	volatile uint32_t t92 = 42113U;

	t92 = (x517*((x518*x519)/x520));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x521 = UINT8_MAX;
	int8_t x522 = -18;
	int32_t x523 = -1;
	static volatile int64_t x524 = INT64_MIN;
	volatile int64_t t93 = -126112569036LL;

	t93 = (x521*((x522*x523)/x524));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x525 = 1748U;
	int8_t x527 = INT8_MIN;
	static uint8_t x528 = UINT8_MAX;

	t94 = (x525*((x526*x527)/x528));

	if (t94 != 917700LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x541 = -1;
	uint16_t x542 = 81U;
	uint16_t x543 = 6568U;
	int16_t x544 = -1;
	volatile int32_t t95 = 105373592;

	t95 = (x541*((x542*x543)/x544));

	if (t95 != 532008) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x545 = -1036851396421239621LL;
	uint64_t x547 = 47829417LLU;
	int8_t x548 = -1;
	volatile uint64_t t96 = 206915642721870LLU;

	t96 = (x545*((x546*x547)/x548));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x550 = 1;
	static int16_t x551 = 1;
	volatile int64_t t97 = 196LL;

	t97 = (x549*((x550*x551)/x552));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = INT16_MIN;
	static int8_t x558 = 4;
	volatile int64_t x559 = 22866568992494LL;
	int16_t x560 = -1;
	volatile int64_t t98 = 27707957202LL;

	t98 = (x557*((x558*x559)/x560));

	if (t98 != 2997166930984173568LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x561 = INT32_MAX;
	uint16_t x562 = 47U;
	uint64_t x563 = UINT64_MAX;
	uint64_t t99 = 4039456556871LLU;

	t99 = (x561*((x562*x563)/x564));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

