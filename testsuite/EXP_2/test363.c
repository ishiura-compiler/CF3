#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 68U;
static uint64_t t0 = 192886LLU;
volatile int64_t x14 = -1LL;
uint64_t x16 = 8912115400918147LLU;
uint64_t t2 = 5LLU;
int16_t x24 = INT16_MIN;
uint64_t t3 = 7827205399186LLU;
volatile int64_t x26 = -1LL;
int8_t x27 = -23;
int16_t x39 = 3;
int64_t x61 = INT64_MAX;
static uint64_t x65 = 1191128020LLU;
uint8_t x68 = UINT8_MAX;
static uint64_t t10 = 169791176612492LLU;
int64_t x70 = -236544686LL;
int32_t x74 = -3919704;
static uint8_t x75 = 19U;
uint32_t x89 = 22U;
int64_t x92 = 25LL;
uint64_t x94 = 545969328LLU;
int16_t x102 = INT16_MAX;
static int8_t x112 = INT8_MIN;
uint64_t x116 = 3948905843688679428LLU;
uint32_t x117 = 1119U;
uint64_t x123 = UINT64_MAX;
uint32_t x130 = UINT32_MAX;
volatile uint64_t t24 = 419LLU;
int8_t x137 = INT8_MIN;
int16_t x148 = INT16_MIN;
static volatile int16_t x155 = -1;
uint64_t t31 = 275399022179890972LLU;
int16_t x191 = INT16_MIN;
int16_t x199 = INT16_MIN;
static int32_t x203 = 1;
volatile int32_t t39 = -413554;
int8_t x225 = -1;
uint64_t t41 = UINT64_MAX;
static int16_t x245 = INT16_MIN;
uint16_t x246 = UINT16_MAX;
int16_t x249 = INT16_MAX;
static int8_t x251 = 34;
uint16_t x262 = 2U;
uint32_t x271 = 1008249887U;
static int8_t x273 = INT8_MAX;
int64_t x276 = -20559517713868LL;
int16_t x287 = INT16_MIN;
int8_t x297 = -1;
int16_t x298 = INT16_MIN;
static int32_t x300 = INT32_MIN;
int32_t t52 = -87690301;
volatile int64_t x305 = -402995948LL;
int64_t x310 = -3082512604163589LL;
int32_t x318 = -1;
static volatile int8_t x322 = INT8_MAX;
int64_t x326 = -13LL;
volatile int64_t t58 = 1LL;
uint64_t x335 = 3122732614105390LLU;
uint64_t x354 = 34LLU;
static int64_t x355 = -1LL;
static uint64_t t62 = 30LLU;
static uint8_t x358 = UINT8_MAX;
uint64_t x359 = 87440316585833LLU;
int16_t x368 = -1;
volatile uint64_t t64 = UINT64_MAX;
uint16_t x369 = UINT16_MAX;
uint16_t x370 = UINT16_MAX;
static uint32_t x371 = UINT32_MAX;
int16_t x375 = INT16_MIN;
int64_t x377 = INT64_MAX;
static uint16_t x379 = 0U;
uint16_t x382 = 1U;
int64_t x383 = -1LL;
volatile int16_t x387 = -1;
int16_t x390 = -81;
static int64_t x400 = INT64_MIN;
volatile int32_t x402 = -1;
int64_t x409 = -1LL;
int16_t x411 = INT16_MAX;
int16_t x412 = INT16_MAX;
static int64_t t73 = 4LL;
uint64_t x414 = 40477887800400LLU;
uint8_t x416 = UINT8_MAX;
uint64_t t74 = 23LLU;
uint8_t x420 = 4U;
uint16_t x429 = 7655U;
uint64_t t77 = 7685258205815LLU;
int16_t x436 = -1;
uint64_t x442 = UINT64_MAX;
static volatile int64_t x443 = INT64_MIN;
static int8_t x450 = INT8_MIN;
static uint32_t x455 = UINT32_MAX;
int64_t x458 = -1LL;
static uint16_t x460 = 5U;
uint64_t x462 = UINT64_MAX;
int64_t x464 = -1LL;
int16_t x469 = INT16_MIN;
static uint64_t x471 = UINT64_MAX;
uint64_t x474 = 1574558LLU;
volatile uint64_t t86 = 1591794125273080289LLU;
int8_t x478 = -55;
int16_t x486 = -1;
static int8_t x490 = -1;
volatile int16_t x495 = INT16_MAX;
int16_t x498 = -1;
int16_t x503 = 2268;
uint16_t x512 = 4U;
int8_t x518 = 16;
static uint64_t x519 = 91927LLU;
volatile uint16_t x530 = 6U;
int8_t x533 = INT8_MIN;
uint8_t x536 = 6U;
uint32_t x538 = 41898566U;
volatile int32_t t98 = -1030;
int8_t x550 = -1;
volatile uint32_t t99 = 106803999U;


void f0(void) {
	static uint8_t x5 = 1U;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MIN;

	t0 = ((x5-(x6*x7))|x8);

	if (t0 != 18446744073709518917LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 1;
	int64_t x10 = -14972488LL;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -1;
	int64_t t1 = -589122806327414452LL;

	t1 = ((x9-(x10*x11))|x12);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -881;
	static volatile int16_t x15 = INT16_MIN;

	t2 = ((x13-(x14*x15))|x16);

	if (t2 != 18446744073709517967LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = 921;
	uint64_t x22 = UINT64_MAX;
	int64_t x23 = INT64_MIN;

	t3 = ((x21-(x22*x23))|x24);

	if (t3 != 18446744073709519769LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x28 = UINT8_MAX;
	int64_t t4 = -470595743812733LL;

	t4 = ((x25-(x26*x27))|x28);

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = -1LL;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x29-(x30*x31))|x32);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -12;
	int32_t x40 = INT32_MIN;
	volatile int32_t t6 = -490131;

	t6 = ((x37-(x38*x39))|x40);

	if (t6 != -92) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 42U;
	int64_t x42 = 101597160LL;
	uint32_t x43 = 62038345U;
	int16_t x44 = INT16_MIN;
	int64_t t7 = -1913961395259LL;

	t7 = ((x41-(x42*x43))|x44);

	if (t7 != -8446LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = 442470LLU;
	static int64_t x58 = -890965LL;
	uint32_t x59 = 1274510218U;
	volatile uint32_t x60 = 163758207U;
	volatile uint64_t t8 = 218LLU;

	t8 = ((x57-(x58*x59))|x60);

	if (t8 != 1135544152028543LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x62 = INT8_MAX;
	int16_t x63 = 419;
	int16_t x64 = -1;
	volatile int64_t t9 = -493393544577208LL;

	t9 = ((x61-(x62*x63))|x64);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x66 = -1;
	int8_t x67 = -1;

	t10 = ((x65-(x66*x67))|x68);

	if (t10 != 1191128063LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	volatile int32_t x71 = INT32_MIN;
	volatile int8_t x72 = INT8_MAX;
	volatile int64_t t11 = -230755LL;

	t11 = ((x69-(x70*x71))|x72);

	if (t11 != -507975845206327169LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 3LLU;
	static uint32_t x76 = 1733487998U;
	volatile uint64_t t12 = 1245650549009LLU;

	t12 = ((x73-(x74*x75))|x76);

	if (t12 != 1735585791LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = 1;
	uint64_t x82 = 7098LLU;
	uint32_t x83 = 348148015U;
	int32_t x84 = INT32_MAX;
	uint64_t t13 = 7177LLU;

	t13 = ((x81-(x82*x83))|x84);

	if (t13 != 18446741604103356415LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = 37;
	int16_t x86 = INT16_MIN;
	volatile int64_t x87 = -16LL;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t14 = -221486008578819LL;

	t14 = ((x85-(x86*x87))|x88);

	if (t14 != -524251LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x90 = -1LL;
	uint32_t x91 = 1514U;
	static int64_t t15 = -135835926396LL;

	t15 = ((x89-(x90*x91))|x92);

	if (t15 != 1561LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x93 = 14U;
	uint8_t x95 = 0U;
	int32_t x96 = INT32_MIN;
	static uint64_t t16 = 0LLU;

	t16 = ((x93-(x94*x95))|x96);

	if (t16 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1554951LL;
	int32_t x98 = 86168;
	int32_t x99 = -1;
	volatile int8_t x100 = INT8_MIN;
	static int64_t t17 = 0LL;

	t17 = ((x97-(x98*x99))|x100);

	if (t17 != -111LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = UINT64_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 254039U;
	uint64_t t18 = 4068783018LLU;

	t18 = ((x101-(x102*x103))|x104);

	if (t18 != 262143LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x109 = -5;
	volatile uint64_t x110 = 113469LLU;
	volatile int8_t x111 = INT8_MAX;
	volatile uint64_t t19 = 273165858557LLU;

	t19 = ((x109-(x110*x111))|x112);

	if (t19 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x113 = 6U;
	uint32_t x114 = 1U;
	int16_t x115 = 58;
	uint64_t t20 = 2392065225607528481LLU;

	t20 = ((x113-(x114*x115))|x116);

	if (t20 != 3948905846632611788LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x118 = UINT8_MAX;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MAX;
	static uint32_t t21 = 7635U;

	t21 = ((x117-(x118*x119))|x120);

	if (t21 != 32767U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	uint64_t x124 = 4009427586084LLU;
	uint64_t t22 = 59702762257102LLU;

	t22 = ((x121-(x122*x123))|x124);

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = -28;
	uint64_t x126 = UINT64_MAX;
	uint16_t x127 = UINT16_MAX;
	static int64_t x128 = INT64_MIN;
	static volatile uint64_t t23 = 40793654585881LLU;

	t23 = ((x125-(x126*x127))|x128);

	if (t23 != 9223372036854841315LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x129 = -1;
	static int16_t x131 = INT16_MIN;
	uint64_t x132 = 240266980696LLU;

	t24 = ((x129-(x130*x131))|x132);

	if (t24 != 240518135807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = UINT16_MAX;
	static int16_t x134 = 683;
	volatile int32_t x135 = -1;
	int32_t x136 = INT32_MAX;
	int32_t t25 = INT32_MAX;

	t25 = ((x133-(x134*x135))|x136);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x138 = 75U;
	static uint8_t x139 = 0U;
	int64_t x140 = INT64_MIN;
	static int64_t t26 = 3979427818630908LL;

	t26 = ((x137-(x138*x139))|x140);

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x145 = 337543U;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 384U;
	static uint32_t t27 = 722112116U;

	t27 = ((x145-(x146*x147))|x148);

	if (t27 != 4294960775U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x150 = -452;
	static int16_t x151 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	uint32_t t28 = UINT32_MAX;

	t28 = ((x149-(x150*x151))|x152);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = 501;
	static int8_t x154 = 2;
	volatile uint64_t x156 = 676626910366408LLU;
	static uint64_t t29 = 0LLU;

	t29 = ((x153-(x154*x155))|x156);

	if (t29 != 676626910366719LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int64_t x171 = 965LL;
	int32_t x172 = 53;
	volatile int64_t t30 = -1925LL;

	t30 = ((x169-(x170*x171))|x172);

	if (t30 != 31621119LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = -1LL;
	uint64_t x175 = 15148LLU;
	int8_t x176 = INT8_MIN;

	t31 = ((x173-(x174*x175))|x176);

	if (t31 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x181 = 1727U;
	int64_t x182 = -1LL;
	int8_t x183 = -13;
	volatile int16_t x184 = INT16_MIN;
	int64_t t32 = -38LL;

	t32 = ((x181-(x182*x183))|x184);

	if (t32 != -31054LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MIN;
	static int16_t x188 = 0;
	volatile uint64_t t33 = 8563316569LLU;

	t33 = ((x185-(x186*x187))|x188);

	if (t33 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = -6;
	uint16_t x190 = UINT16_MAX;
	uint64_t x192 = 4626LLU;
	volatile uint64_t t34 = 1003LLU;

	t34 = ((x189-(x190*x191))|x192);

	if (t34 != 2147450874LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x197 = 5724198618885500LLU;
	volatile int16_t x198 = INT16_MIN;
	static volatile int64_t x200 = 135860202695LL;
	static uint64_t t35 = 250LLU;

	t35 = ((x197-(x198*x199))|x200);

	if (t35 != 5724331236617727LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x201 = INT16_MIN;
	volatile int32_t x202 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t36 = INT32_MAX;

	t36 = ((x201-(x202*x203))|x204);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = -1;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t37 = 906747U;

	t37 = ((x209-(x210*x211))|x212);

	if (t37 != 4294967167U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x213 = 945751586518854LL;
	volatile int32_t x214 = -1;
	static int32_t x215 = -21912;
	uint16_t x216 = 32U;
	static volatile int64_t t38 = 1486520LL;

	t38 = ((x213-(x214*x215))|x216);

	if (t38 != 945751586496942LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = -1;
	int16_t x218 = -1;
	int16_t x219 = -1;
	int16_t x220 = INT16_MIN;

	t39 = ((x217-(x218*x219))|x220);

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x226 = INT8_MIN;
	volatile uint32_t x227 = 1986632U;
	int8_t x228 = INT8_MAX;
	uint32_t t40 = 132585U;

	t40 = ((x225-(x226*x227))|x228);

	if (t40 != 254288895U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x233 = UINT32_MAX;
	static int16_t x234 = -5;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -1;

	t41 = ((x233-(x234*x235))|x236);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x247 = -21;
	uint16_t x248 = 183U;
	static int32_t t42 = 2256649;

	t42 = ((x245-(x246*x247))|x248);

	if (t42 != 1343487) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x250 = 29U;
	volatile int16_t x252 = INT16_MIN;
	int32_t t43 = 191;

	t43 = ((x249-(x250*x251))|x252);

	if (t43 != -987) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile int64_t x263 = -1LL;
	int8_t x264 = -1;
	static volatile int64_t t44 = -678681935LL;

	t44 = ((x261-(x262*x263))|x264);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x269 = 627817199U;
	uint64_t x270 = UINT64_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile uint64_t t45 = 18LLU;

	t45 = ((x269-(x270*x271))|x272);

	if (t45 != 4294967295LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x274 = 4;
	int16_t x275 = 0;
	int64_t t46 = 425983959299133751LL;

	t46 = ((x273-(x274*x275))|x276);

	if (t46 != -20559517713793LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x277 = INT64_MAX;
	uint16_t x278 = 5U;
	volatile int64_t x279 = 30496LL;
	int16_t x280 = INT16_MIN;
	volatile int64_t t47 = 162650024614LL;

	t47 = ((x277-(x278*x279))|x280);

	if (t47 != -21409LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x285 = INT16_MIN;
	uint64_t x286 = 8460243294907769211LLU;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t48 = 1563371LLU;

	t48 = ((x285-(x286*x287))|x288);

	if (t48 != 16805719867494563840LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x289 = 0U;
	int8_t x290 = 15;
	int8_t x291 = 0;
	int16_t x292 = INT16_MIN;
	volatile int32_t t49 = 65;

	t49 = ((x289-(x290*x291))|x292);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x293 = -3;
	int8_t x294 = -3;
	volatile int16_t x295 = -80;
	int8_t x296 = INT8_MIN;
	volatile int32_t t50 = -799749390;

	t50 = ((x293-(x294*x295))|x296);

	if (t50 != -115) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x299 = 63270LLU;
	static uint64_t t51 = 239513908LLU;

	t51 = ((x297-(x298*x299))|x300);

	if (t51 != 18446744073635299327LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x301 = INT16_MIN;
	static uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	static volatile int32_t x304 = -1874946;

	t52 = ((x301-(x302*x303))|x304);

	if (t52 != -39938) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x306 = 958738U;
	int16_t x307 = -1;
	volatile int8_t x308 = -5;
	static volatile int64_t t53 = 174LL;

	t53 = ((x305-(x306*x307))|x308);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x311 = 1U;
	int32_t x312 = INT32_MAX;
	static volatile int64_t t54 = 130892209910LL;

	t54 = ((x309-(x310*x311))|x312);

	if (t54 != 3082513060724735LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 1914117659U;
	volatile int8_t x314 = 0;
	int64_t x315 = -1LL;
	static volatile int8_t x316 = INT8_MAX;
	int64_t t55 = 2787673634LL;

	t55 = ((x313-(x314*x315))|x316);

	if (t55 != 1914117759LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x317 = INT64_MIN;
	volatile int8_t x319 = INT8_MAX;
	static int32_t x320 = 2525709;
	static volatile int64_t t56 = 27697716623LL;

	t56 = ((x317-(x318*x319))|x320);

	if (t56 != -9223372036852249985LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x321 = 380446035353LL;
	int16_t x323 = -226;
	int16_t x324 = -3;
	volatile int64_t t57 = -458345512278LL;

	t57 = ((x321-(x322*x323))|x324);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x325 = 22;
	uint8_t x327 = 1U;
	static int64_t x328 = -1LL;

	t58 = ((x325-(x326*x327))|x328);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = -118;
	uint32_t x330 = 9428U;
	static uint8_t x331 = 9U;
	int32_t x332 = INT32_MIN;
	volatile uint32_t t59 = 145719U;

	t59 = ((x329-(x330*x331))|x332);

	if (t59 != 4294882326U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x333 = 66U;
	volatile int32_t x334 = -1;
	int64_t x336 = INT64_MIN;
	uint64_t t60 = 473325958408925LLU;

	t60 = ((x333-(x334*x335))|x336);

	if (t60 != 9226494769468881264LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x337 = 594785U;
	int16_t x338 = -10105;
	int8_t x339 = -1;
	int8_t x340 = INT8_MIN;
	uint32_t t61 = 66U;

	t61 = ((x337-(x338*x339))|x340);

	if (t61 != 4294967272U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x353 = -1;
	volatile int32_t x356 = 7873690;

	t62 = ((x353-(x354*x355))|x356);

	if (t62 != 7873723LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x357 = 0LL;
	static volatile uint16_t x360 = UINT16_MAX;
	uint64_t t63 = 117229111998142964LLU;

	t63 = ((x357-(x358*x359))|x360);

	if (t63 != 18424446792980168703LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x365 = -1;
	uint16_t x366 = 235U;
	static uint64_t x367 = 41354697041LLU;

	t64 = ((x365-(x366*x367))|x368);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x372 = 103U;
	volatile uint32_t t65 = 1594575837U;

	t65 = ((x369-(x370*x371))|x372);

	if (t65 != 131071U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = 764942076;
	volatile int8_t x374 = 3;
	int32_t x376 = INT32_MIN;
	volatile int32_t t66 = -2;

	t66 = ((x373-(x374*x375))|x376);

	if (t66 != -1382443268) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x378 = INT16_MIN;
	int64_t x380 = INT64_MAX;
	int64_t t67 = INT64_MAX;

	t67 = ((x377-(x378*x379))|x380);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x381 = -1;
	int32_t x384 = INT32_MIN;
	int64_t t68 = -3225924534141243LL;

	t68 = ((x381-(x382*x383))|x384);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x385 = -1;
	uint8_t x386 = 127U;
	volatile uint64_t x388 = 743363LLU;
	uint64_t t69 = 858LLU;

	t69 = ((x385-(x386*x387))|x388);

	if (t69 != 743423LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x389 = -1023;
	int16_t x391 = 69;
	static int8_t x392 = -56;
	int32_t t70 = 67;

	t70 = ((x389-(x390*x391))|x392);

	if (t70 != -34) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x397 = INT32_MIN;
	uint8_t x398 = 0U;
	int16_t x399 = INT16_MIN;
	volatile int64_t t71 = -539391LL;

	t71 = ((x397-(x398*x399))|x400);

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x401 = 120U;
	static volatile int16_t x403 = -5963;
	int8_t x404 = 63;
	volatile int32_t t72 = -1;

	t72 = ((x401-(x402*x403))|x404);

	if (t72 != -5825) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x410 = -328;

	t73 = ((x409-(x410*x411))|x412);

	if (t73 != 10747903LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x413 = 3430U;
	uint64_t x415 = 217939893033LLU;

	t74 = ((x413-(x414*x415))|x416);

	if (t74 != 2987461019795606783LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x417 = 0U;
	uint32_t x418 = 721886860U;
	int16_t x419 = INT16_MIN;
	volatile uint32_t t75 = 1819028768U;

	t75 = ((x417-(x418*x419))|x420);

	if (t75 != 2403729412U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x421 = INT32_MIN;
	static int16_t x422 = 1469;
	int16_t x423 = 0;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t76 = -1;

	t76 = ((x421-(x422*x423))|x424);

	if (t76 != -2147450881) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x430 = 3569;
	uint64_t x431 = 2816010150207LLU;
	volatile int64_t x432 = -207653948683234748LL;

	t77 = ((x429-(x430*x431))|x432);

	if (t77 != 18437257306878500572LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x433 = -1LL;
	int16_t x434 = 3425;
	static int16_t x435 = 28;
	volatile int64_t t78 = 529535270731212093LL;

	t78 = ((x433-(x434*x435))|x436);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x441 = 3210U;
	int16_t x444 = -2415;
	uint64_t t79 = 372612022608405702LLU;

	t79 = ((x441-(x442*x443))|x444);

	if (t79 != 18446744073709551259LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = 135;
	int32_t x446 = INT32_MAX;
	uint64_t x447 = 1175836955041LLU;
	uint8_t x448 = 36U;
	volatile uint64_t t80 = 207884906LLU;

	t80 = ((x445-(x446*x447))|x448);

	if (t80 != 2113305609386857004LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x449 = INT16_MIN;
	static int16_t x451 = 5245;
	int8_t x452 = 3;
	int32_t t81 = 449;

	t81 = ((x449-(x450*x451))|x452);

	if (t81 != 638595) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x453 = -1;
	static int32_t x454 = INT32_MIN;
	volatile uint16_t x456 = UINT16_MAX;
	volatile uint32_t t82 = 1U;

	t82 = ((x453-(x454*x455))|x456);

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x457 = 113599433LL;
	uint8_t x459 = UINT8_MAX;
	int64_t t83 = -94879573286176800LL;

	t83 = ((x457-(x458*x459))|x460);

	if (t83 != 113599693LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x461 = 11U;
	volatile int64_t x463 = -1LL;
	uint64_t t84 = UINT64_MAX;

	t84 = ((x461-(x462*x463))|x464);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x470 = INT32_MIN;
	uint64_t x472 = 82638409119548LLU;
	uint64_t t85 = 7656649150339760813LLU;

	t85 = ((x469-(x470*x471))|x472);

	if (t85 != 18446744073709532988LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x473 = 1176LLU;
	int16_t x475 = -1;
	int8_t x476 = INT8_MIN;

	t86 = ((x473-(x474*x475))|x476);

	if (t86 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x477 = 860U;
	int32_t x479 = -1937216;
	static int32_t x480 = INT32_MIN;
	static volatile int32_t t87 = -153124936;

	t87 = ((x477-(x478*x479))|x480);

	if (t87 != -106546020) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x485 = 4003U;
	static int16_t x487 = 330;
	volatile int64_t x488 = -1LL;
	volatile int64_t t88 = 48928199523613LL;

	t88 = ((x485-(x486*x487))|x488);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = 3160U;
	uint16_t x491 = UINT16_MAX;
	int32_t x492 = INT32_MAX;
	static volatile uint32_t t89 = 230489526U;

	t89 = ((x489-(x490*x491))|x492);

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x493 = INT32_MIN;
	volatile uint32_t x494 = 51078260U;
	int8_t x496 = INT8_MIN;
	volatile uint32_t t90 = 24109978U;

	t90 = ((x493-(x494*x495))|x496);

	if (t90 != 4294967284U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x497 = INT8_MIN;
	int64_t x499 = INT64_MAX;
	volatile int16_t x500 = 14546;
	int64_t t91 = INT64_MAX;

	t91 = ((x497-(x498*x499))|x500);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x501 = INT16_MIN;
	volatile int16_t x502 = INT16_MIN;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t92 = 3864536;

	t92 = ((x501-(x502*x503))|x504);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x509 = -1LL;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = 5;
	static uint64_t t93 = 45079LLU;

	t93 = ((x509-(x510*x511))|x512);

	if (t93 != 4LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x517 = 1U;
	int16_t x520 = INT16_MAX;
	uint64_t t94 = 95LLU;

	t94 = ((x517-(x518*x519))|x520);

	if (t94 != 18446744073708109823LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x529 = -5940;
	uint64_t x531 = 29791570289LLU;
	int32_t x532 = -1;
	uint64_t t95 = UINT64_MAX;

	t95 = ((x529-(x530*x531))|x532);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x534 = -1;
	int32_t x535 = -6151;
	volatile int32_t t96 = 1;

	t96 = ((x533-(x534*x535))|x536);

	if (t96 != -6273) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x537 = INT32_MIN;
	int64_t x539 = -1LL;
	static int32_t x540 = INT32_MAX;
	int64_t t97 = -2782877366LL;

	t97 = ((x537-(x538*x539))|x540);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = -1;
	int16_t x542 = INT16_MAX;
	volatile int16_t x543 = INT16_MIN;
	static uint16_t x544 = 23U;

	t98 = ((x541-(x542*x543))|x544);

	if (t98 != 1073709055) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x549 = UINT32_MAX;
	volatile uint8_t x551 = 15U;
	int16_t x552 = 1;

	t99 = ((x549-(x550*x551))|x552);

	if (t99 != 15U) { NG(); } else { ; }
	
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

