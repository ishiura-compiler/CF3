#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -931415;
volatile int16_t x6 = INT16_MIN;
static int32_t t1 = 8105363;
int64_t x13 = -1LL;
static volatile uint16_t x17 = 0U;
int16_t x26 = -65;
volatile int16_t x32 = INT16_MIN;
volatile int8_t x36 = INT8_MAX;
int32_t x37 = 898093013;
uint32_t x38 = 844190U;
int32_t x43 = -1;
int16_t x48 = -3;
static int32_t x81 = INT32_MIN;
volatile int16_t x83 = 109;
int32_t t16 = -213;
static uint64_t x93 = 295476319LLU;
int16_t x94 = INT16_MIN;
uint64_t x95 = 43847660357LLU;
int8_t x112 = -19;
volatile int32_t t21 = 998;
int16_t x119 = 40;
static int64_t x128 = INT64_MAX;
static uint16_t x139 = 7268U;
int32_t t27 = -7756;
uint64_t x150 = UINT64_MAX;
int32_t t30 = -4868;
uint8_t x161 = 1U;
volatile int32_t t32 = 0;
int8_t x165 = INT8_MAX;
volatile uint8_t x166 = 5U;
int64_t x167 = INT64_MAX;
volatile int32_t t33 = 8;
int16_t x178 = -10;
int64_t x184 = INT64_MIN;
volatile int32_t t36 = -21253;
static volatile uint64_t x202 = 44545LLU;
static int32_t x204 = INT32_MIN;
int16_t x214 = INT16_MIN;
int8_t x215 = -14;
volatile int32_t t39 = -261;
static int32_t t40 = -1352;
uint64_t x225 = UINT64_MAX;
int32_t t41 = -41;
int8_t x243 = INT8_MIN;
volatile int8_t x261 = -1;
volatile int32_t t49 = 18664833;
int16_t x272 = INT16_MIN;
int8_t x279 = INT8_MIN;
volatile int32_t t52 = -921175544;
uint64_t x286 = 21345883694LLU;
int16_t x293 = INT16_MIN;
int64_t x312 = 2688061254689964639LL;
int32_t t58 = -239;
int8_t x317 = INT8_MIN;
uint8_t x336 = 0U;
volatile int32_t t63 = 4157766;
uint8_t x345 = 29U;
static uint8_t x346 = UINT8_MAX;
int32_t x348 = -1;
uint32_t x350 = UINT32_MAX;
int32_t t65 = -104803423;
volatile uint64_t x353 = 5389566295LLU;
volatile int32_t x355 = INT32_MAX;
int32_t x371 = 27746799;
static int32_t t69 = -1;
volatile uint32_t x374 = 106U;
volatile int32_t t71 = 9714;
static int8_t x389 = 0;
static int8_t x391 = INT8_MIN;
uint64_t x402 = 3LLU;
volatile int16_t x406 = -1;
int8_t x407 = 0;
uint16_t x409 = 2U;
volatile int32_t t75 = -28438;
int64_t x420 = INT64_MIN;
int16_t x421 = -204;
int8_t x425 = INT8_MAX;
volatile int32_t x429 = -3816868;
int32_t x440 = 40;
volatile int32_t t81 = -98301;
static volatile int32_t t82 = 54;
int16_t x445 = INT16_MIN;
static int32_t t83 = 62065075;
int8_t x452 = INT8_MIN;
volatile int16_t x454 = INT16_MIN;
static volatile int32_t t85 = 94;
int8_t x460 = INT8_MIN;
volatile int32_t t86 = -11;
volatile int16_t x461 = -16159;
int16_t x463 = INT16_MIN;
uint16_t x470 = 50U;
volatile int64_t x484 = -508053LL;
int8_t x487 = -1;
volatile int32_t t94 = 3659283;
uint8_t x493 = UINT8_MAX;
int16_t x513 = -1;


void f0(void) {
	uint64_t x1 = 67313035424LLU;
	static uint8_t x2 = 3U;
	volatile uint16_t x3 = 58U;
	uint32_t x4 = 1780U;

	t0 = ((x1*x2)<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	int8_t x7 = 11;
	int8_t x8 = 18;

	t1 = ((x5*x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = INT32_MIN;
	static volatile int64_t x15 = INT64_MIN;
	uint32_t x16 = 41872048U;
	int32_t t2 = 363768;

	t2 = ((x13*x14)<(x15&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x18 = UINT16_MAX;
	volatile uint16_t x19 = 1U;
	volatile int64_t x20 = -1LL;
	volatile int32_t t3 = -219304951;

	t3 = ((x17*x18)<(x19&x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x25 = UINT16_MAX;
	static int64_t x27 = INT64_MAX;
	uint64_t x28 = 6275904756754LLU;
	volatile int32_t t4 = -60286038;

	t4 = ((x25*x26)<(x27&x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int16_t x30 = INT16_MIN;
	uint64_t x31 = 109LLU;
	int32_t t5 = -127514;

	t5 = ((x29*x30)<(x31&x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 29886310U;
	uint32_t x35 = 17U;
	volatile int32_t t6 = 760621783;

	t6 = ((x33*x34)<(x35&x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t7 = 1766401;

	t7 = ((x37*x38)<(x39&x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 0LL;
	int64_t x42 = 26815301778490564LL;
	uint16_t x44 = 22U;
	int32_t t8 = 56114636;

	t8 = ((x41*x42)<(x43&x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int64_t x46 = 197303289573696336LL;
	static volatile uint8_t x47 = UINT8_MAX;
	static int32_t t9 = 1687347;

	t9 = ((x45*x46)<(x47&x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	static uint16_t x54 = 7U;
	volatile uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t10 = 776;

	t10 = ((x53*x54)<(x55&x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x57 = 1041455U;
	int32_t x58 = 2380;
	int64_t x59 = -274287656LL;
	int16_t x60 = INT16_MIN;
	volatile int32_t t11 = 15127;

	t11 = ((x57*x58)<(x59&x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	volatile uint16_t x62 = 212U;
	int8_t x63 = INT8_MIN;
	volatile int8_t x64 = -1;
	volatile int32_t t12 = -104;

	t12 = ((x61*x62)<(x63&x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MAX;
	int8_t x66 = -1;
	int32_t x67 = INT32_MAX;
	static uint64_t x68 = UINT64_MAX;
	volatile int32_t t13 = 319;

	t13 = ((x65*x66)<(x67&x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -13LL;
	volatile int32_t t14 = 6947;

	t14 = ((x69*x70)<(x71&x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -99;
	volatile int16_t x78 = INT16_MIN;
	static int8_t x79 = -1;
	int32_t x80 = -495177939;
	volatile int32_t t15 = 111603;

	t15 = ((x77*x78)<(x79&x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x82 = UINT32_MAX;
	int64_t x84 = 25624772510LL;

	t16 = ((x81*x82)<(x83&x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = 980;
	volatile int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MAX;
	static int32_t t17 = 95407000;

	t17 = ((x89*x90)<(x91&x92));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x96 = -1;
	volatile int32_t t18 = -30292067;

	t18 = ((x93*x94)<(x95&x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x97 = UINT16_MAX;
	volatile int8_t x98 = 58;
	static volatile int64_t x99 = -3169LL;
	volatile int64_t x100 = 7LL;
	int32_t t19 = -2;

	t19 = ((x97*x98)<(x99&x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 4;
	volatile int64_t x102 = 2099LL;
	uint32_t x103 = 92028907U;
	uint16_t x104 = UINT16_MAX;
	int32_t t20 = -105242;

	t20 = ((x101*x102)<(x103&x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	static uint64_t x110 = 4378087227101804LLU;
	volatile int64_t x111 = -1LL;

	t21 = ((x109*x110)<(x111&x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = -6;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = 12700;
	static int32_t x116 = -1;
	static int32_t t22 = 33313;

	t22 = ((x113*x114)<(x115&x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 0U;
	int32_t x118 = 2680;
	int64_t x120 = 287750641917084649LL;
	int32_t t23 = 0;

	t23 = ((x117*x118)<(x119&x120));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = 401;
	static uint32_t x126 = UINT32_MAX;
	static int32_t x127 = -1;
	int32_t t24 = -23400262;

	t24 = ((x125*x126)<(x127&x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x129 = 0;
	static uint16_t x130 = UINT16_MAX;
	static int64_t x131 = INT64_MAX;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t25 = 3384090;

	t25 = ((x129*x130)<(x131&x132));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 1U;
	static volatile int64_t x135 = -532146LL;
	uint32_t x136 = 302930U;
	int32_t t26 = -222;

	t26 = ((x133*x134)<(x135&x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MAX;
	int16_t x140 = INT16_MIN;

	t27 = ((x137*x138)<(x139&x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	volatile uint32_t x142 = 394358U;
	int16_t x143 = 327;
	int16_t x144 = INT16_MAX;
	int32_t t28 = 1;

	t28 = ((x141*x142)<(x143&x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = -1;
	int16_t x146 = -1;
	int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t29 = -1;

	t29 = ((x145*x146)<(x147&x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = -642;
	volatile uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;

	t30 = ((x149*x150)<(x151&x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x157 = 3477U;
	uint64_t x158 = 136368338774LLU;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t31 = 258;

	t31 = ((x157*x158)<(x159&x160));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x162 = 2U;
	int16_t x163 = -23;
	static int16_t x164 = INT16_MIN;

	t32 = ((x161*x162)<(x163&x164));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x168 = 48;

	t33 = ((x165*x166)<(x167&x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x177 = 117U;
	volatile int32_t x179 = INT32_MIN;
	volatile uint64_t x180 = 7678956938123061631LLU;
	volatile int32_t t34 = -1;

	t34 = ((x177*x178)<(x179&x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x181 = INT8_MIN;
	static uint64_t x182 = 4057669676957376LLU;
	uint32_t x183 = 20342U;
	int32_t t35 = 3;

	t35 = ((x181*x182)<(x183&x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = 2;
	static uint16_t x187 = 60U;
	uint64_t x188 = 28815230271176LLU;

	t36 = ((x185*x186)<(x187&x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x193 = -1LL;
	int64_t x194 = 1LL;
	int8_t x195 = INT8_MIN;
	static int64_t x196 = 1LL;
	static int32_t t37 = -1;

	t37 = ((x193*x194)<(x195&x196));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x201 = 79LLU;
	int16_t x203 = -1;
	int32_t t38 = -15780461;

	t38 = ((x201*x202)<(x203&x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int16_t x216 = INT16_MAX;

	t39 = ((x213*x214)<(x215&x216));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = INT16_MIN;
	static uint8_t x222 = 1U;
	int32_t x223 = -1;
	int8_t x224 = 9;

	t40 = ((x221*x222)<(x223&x224));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	int64_t x228 = INT64_MIN;

	t41 = ((x225*x226)<(x227&x228));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x233 = -1;
	static volatile int64_t x234 = -39LL;
	int64_t x235 = -1LL;
	int64_t x236 = INT64_MIN;
	static int32_t t42 = 1204981;

	t42 = ((x233*x234)<(x235&x236));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x237 = 0;
	static int32_t x238 = INT32_MIN;
	volatile int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;
	int32_t t43 = -324466;

	t43 = ((x237*x238)<(x239&x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x241 = -18648767115LL;
	uint16_t x242 = 5196U;
	int16_t x244 = INT16_MIN;
	int32_t t44 = -1031331;

	t44 = ((x241*x242)<(x243&x244));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = INT8_MIN;
	static int8_t x246 = -1;
	uint8_t x247 = 81U;
	static int16_t x248 = 429;
	volatile int32_t t45 = -5613704;

	t45 = ((x245*x246)<(x247&x248));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x249 = UINT16_MAX;
	static int8_t x250 = 12;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = 0U;
	static int32_t t46 = -11;

	t46 = ((x249*x250)<(x251&x252));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x253 = UINT16_MAX;
	uint8_t x254 = 56U;
	volatile uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 597437LLU;
	volatile int32_t t47 = 6239;

	t47 = ((x253*x254)<(x255&x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x262 = -20161913101484LL;
	int8_t x263 = -3;
	static int32_t x264 = -1;
	int32_t t48 = 3304614;

	t48 = ((x261*x262)<(x263&x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x265 = UINT64_MAX;
	uint8_t x266 = 1U;
	int8_t x267 = -1;
	static uint16_t x268 = 1U;

	t49 = ((x265*x266)<(x267&x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = -1459;
	int32_t x270 = 1491;
	uint64_t x271 = 256923LLU;
	int32_t t50 = 348925013;

	t50 = ((x269*x270)<(x271&x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x273 = 40U;
	static uint8_t x274 = 7U;
	uint8_t x275 = 3U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t51 = 209;

	t51 = ((x273*x274)<(x275&x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x277 = 2395U;
	int32_t x278 = -5;
	int64_t x280 = INT64_MIN;

	t52 = ((x277*x278)<(x279&x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x281 = 61U;
	uint16_t x282 = UINT16_MAX;
	uint32_t x283 = 1657763U;
	int64_t x284 = INT64_MIN;
	int32_t t53 = -158120;

	t53 = ((x281*x282)<(x283&x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x285 = INT32_MIN;
	uint32_t x287 = 0U;
	uint16_t x288 = 593U;
	volatile int32_t t54 = -123;

	t54 = ((x285*x286)<(x287&x288));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x294 = 183387U;
	int64_t x295 = INT64_MAX;
	int16_t x296 = 280;
	static volatile int32_t t55 = -208104828;

	t55 = ((x293*x294)<(x295&x296));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 402147078U;
	int64_t x299 = -1017427791864762LL;
	int32_t x300 = INT32_MAX;
	volatile int32_t t56 = -400063;

	t56 = ((x297*x298)<(x299&x300));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x305 = 1253058041220675612LLU;
	int64_t x306 = INT64_MAX;
	static uint8_t x307 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t57 = -7359734;

	t57 = ((x305*x306)<(x307&x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	uint8_t x311 = UINT8_MAX;

	t58 = ((x309*x310)<(x311&x312));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x318 = 511566291556LLU;
	static int32_t x319 = 10;
	int64_t x320 = -627749LL;
	int32_t t59 = 560;

	t59 = ((x317*x318)<(x319&x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x325 = -1;
	int8_t x326 = 1;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	volatile int32_t t60 = -36172584;

	t60 = ((x325*x326)<(x327&x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x329 = 413902408351LLU;
	static volatile int64_t x330 = 4LL;
	int16_t x331 = INT16_MAX;
	int64_t x332 = INT64_MAX;
	int32_t t61 = -32;

	t61 = ((x329*x330)<(x331&x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	volatile uint64_t x335 = UINT64_MAX;
	static volatile int32_t t62 = 13987843;

	t62 = ((x333*x334)<(x335&x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x337 = INT8_MAX;
	volatile uint64_t x338 = 3204122207026943LLU;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 31057169023698476LLU;

	t63 = ((x337*x338)<(x339&x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x347 = INT8_MIN;
	volatile int32_t t64 = -101936120;

	t64 = ((x345*x346)<(x347&x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x349 = UINT32_MAX;
	static uint32_t x351 = 1797U;
	int64_t x352 = 39293693432161945LL;

	t65 = ((x349*x350)<(x351&x352));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x354 = 96U;
	int64_t x356 = INT64_MIN;
	volatile int32_t t66 = 226038411;

	t66 = ((x353*x354)<(x355&x356));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x361 = INT16_MAX;
	int8_t x362 = INT8_MAX;
	static uint32_t x363 = 44980640U;
	int16_t x364 = INT16_MAX;
	int32_t t67 = -140;

	t67 = ((x361*x362)<(x363&x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x365 = 14U;
	static uint16_t x366 = UINT16_MAX;
	static uint64_t x367 = 490064569298808LLU;
	int8_t x368 = INT8_MIN;
	volatile int32_t t68 = 249;

	t68 = ((x365*x366)<(x367&x368));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x369 = INT8_MIN;
	volatile int32_t x370 = -1;
	int32_t x372 = INT32_MAX;

	t69 = ((x369*x370)<(x371&x372));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x373 = 31U;
	volatile int32_t x375 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;
	static int32_t t70 = 112;

	t70 = ((x373*x374)<(x375&x376));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x377 = INT8_MIN;
	static uint8_t x378 = 1U;
	volatile int64_t x379 = 2227715118899262140LL;
	int64_t x380 = INT64_MIN;

	t71 = ((x377*x378)<(x379&x380));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x390 = INT8_MAX;
	int64_t x392 = 57249398LL;
	volatile int32_t t72 = -7872;

	t72 = ((x389*x390)<(x391&x392));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x401 = UINT32_MAX;
	uint32_t x403 = UINT32_MAX;
	volatile uint8_t x404 = UINT8_MAX;
	static int32_t t73 = 1;

	t73 = ((x401*x402)<(x403&x404));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x405 = 194256323U;
	int64_t x408 = -1LL;
	static int32_t t74 = -46639;

	t74 = ((x405*x406)<(x407&x408));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x410 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 0U;

	t75 = ((x409*x410)<(x411&x412));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x417 = INT16_MAX;
	static uint8_t x418 = 7U;
	static int64_t x419 = 689497962366708307LL;
	static volatile int32_t t76 = 101366;

	t76 = ((x417*x418)<(x419&x420));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x422 = INT16_MAX;
	int64_t x423 = 29050315LL;
	static int32_t x424 = INT32_MAX;
	int32_t t77 = 96217;

	t77 = ((x421*x422)<(x423&x424));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x426 = -5;
	uint32_t x427 = 116502100U;
	volatile int16_t x428 = 0;
	static volatile int32_t t78 = -7;

	t78 = ((x425*x426)<(x427&x428));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x430 = 14264848201LLU;
	static int8_t x431 = INT8_MIN;
	int32_t x432 = 912952;
	int32_t t79 = 380486;

	t79 = ((x429*x430)<(x431&x432));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x433 = 2U;
	uint16_t x434 = 1U;
	uint16_t x435 = UINT16_MAX;
	static int64_t x436 = -1LL;
	volatile int32_t t80 = 0;

	t80 = ((x433*x434)<(x435&x436));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = 28U;
	uint32_t x438 = 5U;
	static int8_t x439 = -7;

	t81 = ((x437*x438)<(x439&x440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x441 = 6U;
	uint8_t x442 = 33U;
	int16_t x443 = -1;
	int16_t x444 = INT16_MIN;

	t82 = ((x441*x442)<(x443&x444));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x446 = INT8_MIN;
	static int64_t x447 = -223542548LL;
	static int32_t x448 = INT32_MIN;

	t83 = ((x445*x446)<(x447&x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = 1;
	uint64_t x450 = 4983127031752LLU;
	uint16_t x451 = 3598U;
	int32_t t84 = -226660;

	t84 = ((x449*x450)<(x451&x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x453 = UINT64_MAX;
	uint32_t x455 = UINT32_MAX;
	volatile int16_t x456 = -1;

	t85 = ((x453*x454)<(x455&x456));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x457 = UINT8_MAX;
	volatile int8_t x458 = INT8_MIN;
	int8_t x459 = -1;

	t86 = ((x457*x458)<(x459&x460));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x462 = 8U;
	static int64_t x464 = INT64_MIN;
	static volatile int32_t t87 = 310862163;

	t87 = ((x461*x462)<(x463&x464));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x465 = 4027459LLU;
	volatile uint8_t x466 = 19U;
	uint8_t x467 = 3U;
	int64_t x468 = INT64_MAX;
	volatile int32_t t88 = -3716;

	t88 = ((x465*x466)<(x467&x468));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = UINT16_MAX;
	int32_t x471 = INT32_MIN;
	volatile int64_t x472 = INT64_MIN;
	int32_t t89 = 4749;

	t89 = ((x469*x470)<(x471&x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x473 = INT8_MAX;
	uint64_t x474 = UINT64_MAX;
	int16_t x475 = 14;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t90 = 0;

	t90 = ((x473*x474)<(x475&x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x477 = 10908U;
	int16_t x478 = INT16_MIN;
	volatile int16_t x479 = 35;
	uint8_t x480 = 2U;
	volatile int32_t t91 = 11;

	t91 = ((x477*x478)<(x479&x480));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x481 = -1600;
	uint32_t x482 = 11476222U;
	int64_t x483 = -1LL;
	int32_t t92 = -605046;

	t92 = ((x481*x482)<(x483&x484));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x485 = 123;
	uint32_t x486 = UINT32_MAX;
	int64_t x488 = INT64_MIN;
	static volatile int32_t t93 = -3;

	t93 = ((x485*x486)<(x487&x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = -1;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	uint16_t x492 = UINT16_MAX;

	t94 = ((x489*x490)<(x491&x492));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x494 = -500518496418553LL;
	int16_t x495 = INT16_MIN;
	int8_t x496 = -8;
	int32_t t95 = 10733714;

	t95 = ((x493*x494)<(x495&x496));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x497 = 35128858067LLU;
	int16_t x498 = -1;
	uint8_t x499 = 1U;
	int8_t x500 = 3;
	int32_t t96 = -23835;

	t96 = ((x497*x498)<(x499&x500));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x501 = 45U;
	volatile int32_t x502 = -10537;
	int16_t x503 = 386;
	int8_t x504 = INT8_MIN;
	int32_t t97 = 9803;

	t97 = ((x501*x502)<(x503&x504));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x505 = UINT8_MAX;
	uint8_t x506 = 1U;
	volatile int16_t x507 = INT16_MIN;
	volatile int64_t x508 = INT64_MIN;
	volatile int32_t t98 = 15;

	t98 = ((x505*x506)<(x507&x508));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x514 = UINT8_MAX;
	int32_t x515 = -1;
	int32_t x516 = INT32_MIN;
	volatile int32_t t99 = -13;

	t99 = ((x513*x514)<(x515&x516));

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

