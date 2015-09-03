#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x11 = 57483;
int64_t x13 = -1LL;
volatile uint8_t x20 = UINT8_MAX;
uint16_t x24 = UINT16_MAX;
int8_t x25 = INT8_MAX;
uint16_t x26 = UINT16_MAX;
uint8_t x28 = UINT8_MAX;
uint32_t x29 = 1U;
int32_t x30 = INT32_MAX;
uint16_t x36 = UINT16_MAX;
static int8_t x38 = INT8_MAX;
static int8_t x54 = INT8_MIN;
volatile int64_t t10 = 2873179878860LL;
int8_t x59 = INT8_MIN;
uint32_t x66 = 7705U;
int64_t x68 = INT64_MAX;
uint32_t x75 = 175090U;
int8_t x76 = -1;
int16_t x90 = -2172;
volatile int64_t x92 = INT64_MAX;
static uint64_t x102 = 1715LLU;
volatile int64_t t18 = 98741250535952LL;
uint16_t x105 = UINT16_MAX;
uint16_t x114 = 11814U;
uint8_t x124 = 2U;
int32_t x126 = -1;
static volatile int64_t t24 = 13610LL;
uint64_t t25 = 319921699LLU;
int32_t x142 = -29;
static int8_t x144 = -4;
int8_t x152 = -1;
int32_t t27 = -17068;
int16_t x170 = 15;
int8_t x176 = -1;
int64_t x177 = -42LL;
uint64_t x181 = 18405812224199LLU;
volatile uint64_t t32 = 179293273161088856LLU;
uint32_t x194 = UINT32_MAX;
int16_t x201 = INT16_MIN;
int8_t x209 = -1;
static int8_t x218 = INT8_MIN;
volatile int8_t x220 = INT8_MAX;
volatile int32_t t39 = -962472798;
static int8_t x221 = -1;
uint32_t x225 = UINT32_MAX;
int8_t x226 = 2;
static int16_t x228 = -1;
static uint64_t x233 = UINT64_MAX;
uint64_t t43 = 1LLU;
int64_t x250 = INT64_MAX;
int32_t x253 = -1;
int16_t x257 = -15115;
int64_t x259 = INT64_MIN;
uint64_t t48 = 3017561LLU;
volatile int32_t t49 = -123;
static uint16_t x270 = UINT16_MAX;
uint64_t x272 = UINT64_MAX;
volatile uint32_t t54 = 97U;
int64_t x294 = -642140268311826LL;
volatile int32_t x298 = -167237;
int16_t x299 = -1;
volatile int32_t x311 = 6989999;
int32_t t58 = -40844;
int8_t x314 = -1;
static volatile int64_t x326 = 2088812917LL;
int64_t x344 = -675196372879LL;
int64_t x359 = -1LL;
int32_t t67 = -243171650;
uint32_t x361 = UINT32_MAX;
volatile uint32_t t68 = 1595U;
volatile int64_t x371 = INT64_MAX;
int16_t x383 = 3573;
int16_t x384 = -1;
volatile int32_t t74 = 622189491;
uint64_t x396 = 132900620LLU;
uint64_t t76 = 390LLU;
static int16_t x402 = -2422;
int8_t x409 = INT8_MIN;
uint64_t x410 = 119LLU;
static uint32_t x414 = 1U;
int16_t x425 = -1;
static int32_t t83 = INT32_MAX;
volatile int16_t x433 = INT16_MIN;
uint16_t x436 = 1U;
int8_t x442 = -6;
uint8_t x449 = 13U;
volatile int8_t x457 = INT8_MIN;
static int32_t x459 = 35;
int8_t x461 = -1;
static int16_t x465 = -9923;
static uint64_t x466 = UINT64_MAX;
uint8_t x468 = UINT8_MAX;
volatile int32_t t92 = -261366656;
int16_t x473 = INT16_MIN;
int32_t t94 = -2873;
uint16_t x480 = UINT16_MAX;
int32_t t95 = -8;
volatile int64_t x504 = -1416664313LL;
uint32_t x505 = UINT32_MAX;
int8_t x513 = INT8_MIN;
int16_t x516 = -7228;


void f0(void) {
	int32_t x1 = -1;
	volatile int32_t x2 = 814;
	uint16_t x3 = 443U;
	uint8_t x4 = 126U;
	int32_t t0 = -288;

	t0 = (x1*((x2==x3)^x4));

	if (t0 != -126) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 223790U;
	int32_t x10 = INT32_MIN;
	static int32_t x12 = 12;
	uint32_t t1 = 63064U;

	t1 = (x9*((x10==x11)^x12));

	if (t1 != 2685480U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	static int64_t t2 = 33839035856358LL;

	t2 = (x13*((x14==x15)^x16));

	if (t2 != 2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = -1;
	static int8_t x18 = -1;
	uint32_t x19 = 333U;
	static volatile int32_t t3 = -17;

	t3 = (x17*((x18==x19)^x20));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = UINT32_MAX;
	int32_t x22 = -870416593;
	static volatile int16_t x23 = -1;
	uint32_t t4 = 267415U;

	t4 = (x21*((x22==x23)^x24));

	if (t4 != 4294901761U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MIN;
	volatile int32_t t5 = 195;

	t5 = (x25*((x26==x27)^x28));

	if (t5 != 32385) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x31 = 15530;
	uint16_t x32 = 4U;
	uint32_t t6 = 11U;

	t6 = (x29*((x30==x31)^x32));

	if (t6 != 4U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 1921115804U;
	volatile int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	volatile uint32_t t7 = 2095767715U;

	t7 = (x33*((x34==x35)^x36));

	if (t7 != 1947867492U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MIN;
	int64_t t8 = -6965171717349420LL;

	t8 = (x37*((x38==x39)^x40));

	if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 62LLU;
	volatile int64_t x46 = -1LL;
	static uint8_t x47 = UINT8_MAX;
	int64_t x48 = 391107223082256LL;
	uint64_t t9 = 11371LLU;

	t9 = (x45*((x46==x47)^x48));

	if (t9 != 24248647831099872LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MIN;
	volatile int32_t x55 = -1;
	int64_t x56 = -1LL;

	t10 = (x53*((x54==x55)^x56));

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	uint8_t x58 = 1U;
	int8_t x60 = INT8_MAX;
	uint32_t t11 = 31810U;

	t11 = (x57*((x58==x59)^x60));

	if (t11 != 4294967169U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	int64_t x62 = 84974026LL;
	static volatile int16_t x63 = INT16_MIN;
	uint32_t x64 = 608U;
	uint32_t t12 = 300335216U;

	t12 = (x61*((x62==x63)^x64));

	if (t12 != 4294966688U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	uint8_t x67 = 1U;
	static int64_t t13 = 5460864723979LL;

	t13 = (x65*((x66==x67)^x68));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = 11041538981071LL;
	int64_t x70 = 433806314172286LL;
	uint64_t x71 = 552210371877750LLU;
	int16_t x72 = -5357;
	static int64_t t14 = -433070137LL;

	t14 = (x69*((x70==x71)^x72));

	if (t14 != -59149524321597347LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x73 = 6U;
	static int64_t x74 = -1LL;
	uint32_t t15 = 123397928U;

	t15 = (x73*((x74==x75)^x76));

	if (t15 != 4294967290U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x77 = 2148420LLU;
	int32_t x78 = -16118;
	uint8_t x79 = UINT8_MAX;
	static int64_t x80 = 1570649564204LL;
	volatile uint64_t t16 = 398500LLU;

	t16 = (x77*((x78==x79)^x80));

	if (t16 != 3374414936727157680LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x89 = -1;
	int64_t x91 = -793LL;
	volatile int64_t t17 = -3LL;

	t17 = (x89*((x90==x91)^x92));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = -1LL;
	uint64_t x103 = 156LLU;
	volatile int16_t x104 = INT16_MAX;

	t18 = (x101*((x102==x103)^x104));

	if (t18 != -32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x106 = INT32_MAX;
	int16_t x107 = 1;
	static volatile uint32_t x108 = 239U;
	volatile uint32_t t19 = 2535325U;

	t19 = (x105*((x106==x107)^x108));

	if (t19 != 15662865U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = 2;
	int32_t x115 = 4;
	int8_t x116 = 9;
	int32_t t20 = 29;

	t20 = (x113*((x114==x115)^x116));

	if (t20 != 18) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = -1;
	int32_t x122 = INT32_MIN;
	static uint64_t x123 = UINT64_MAX;
	int32_t t21 = 17590458;

	t21 = (x121*((x122==x123)^x124));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = INT64_MAX;
	int8_t x127 = INT8_MIN;
	int8_t x128 = 1;
	int64_t t22 = INT64_MAX;

	t22 = (x125*((x126==x127)^x128));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x129 = -1;
	static volatile int8_t x130 = -5;
	int8_t x131 = -6;
	int8_t x132 = INT8_MIN;
	volatile int32_t t23 = -143566;

	t23 = (x129*((x130==x131)^x132));

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x133 = INT32_MIN;
	static int64_t x134 = INT64_MAX;
	int16_t x135 = 662;
	static volatile int64_t x136 = -1LL;

	t24 = (x133*((x134==x135)^x136));

	if (t24 != 2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x137 = 99U;
	int8_t x138 = 0;
	static int64_t x139 = INT64_MAX;
	uint64_t x140 = 17357829135LLU;

	t25 = (x137*((x138==x139)^x140));

	if (t25 != 1718425084365LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x141 = 5034U;
	volatile int16_t x143 = -114;
	static uint32_t t26 = 37043169U;

	t26 = (x141*((x142==x143)^x144));

	if (t26 != 4294947160U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = -1;
	volatile uint16_t x150 = UINT16_MAX;
	static uint16_t x151 = UINT16_MAX;

	t27 = (x149*((x150==x151)^x152));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x157 = 1491923U;
	uint32_t x158 = UINT32_MAX;
	static uint8_t x159 = 1U;
	int16_t x160 = INT16_MIN;
	volatile uint32_t t28 = 851994U;

	t28 = (x157*((x158==x159)^x160));

	if (t28 != 2652274688U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x169 = 59897162U;
	int8_t x171 = -1;
	volatile uint16_t x172 = 56U;
	volatile uint32_t t29 = 7U;

	t29 = (x169*((x170==x171)^x172));

	if (t29 != 3354241072U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = -174LL;
	volatile int32_t x174 = 245630;
	int64_t x175 = -1LL;
	int64_t t30 = 26704LL;

	t30 = (x173*((x174==x175)^x176));

	if (t30 != 174LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x178 = INT64_MAX;
	int16_t x179 = -26;
	int8_t x180 = 6;
	volatile int64_t t31 = -280734527232LL;

	t31 = (x177*((x178==x179)^x180));

	if (t31 != -252LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x182 = 5757U;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = 1521;

	t32 = (x181*((x182==x183)^x184));

	if (t32 != 27995240393006679LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	volatile uint16_t x187 = 411U;
	int8_t x188 = -1;
	int32_t t33 = 22;

	t33 = (x185*((x186==x187)^x188));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x193 = -5;
	volatile int32_t x195 = -1;
	volatile uint16_t x196 = 127U;
	volatile int32_t t34 = 31563641;

	t34 = (x193*((x194==x195)^x196));

	if (t34 != -630) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x197 = -182439LL;
	int16_t x198 = INT16_MAX;
	volatile int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	volatile int64_t t35 = -1LL;

	t35 = (x197*((x198==x199)^x200));

	if (t35 != 5977978713LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 186509095812034399LLU;
	volatile int32_t x204 = -1;
	volatile int32_t t36 = 250;

	t36 = (x201*((x202==x203)^x204));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x210 = 15697;
	static volatile int8_t x211 = INT8_MAX;
	uint8_t x212 = UINT8_MAX;
	int32_t t37 = 31439;

	t37 = (x209*((x210==x211)^x212));

	if (t37 != -255) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = 1;
	volatile int16_t x214 = -1;
	volatile uint64_t x215 = UINT64_MAX;
	int8_t x216 = INT8_MIN;
	static int32_t t38 = -56915642;

	t38 = (x213*((x214==x215)^x216));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x217 = 1U;
	int32_t x219 = INT32_MIN;

	t39 = (x217*((x218==x219)^x220));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x222 = 14U;
	uint8_t x223 = 1U;
	int8_t x224 = -23;
	int32_t t40 = -36;

	t40 = (x221*((x222==x223)^x224));

	if (t40 != 23) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x227 = INT64_MAX;
	uint32_t t41 = 2023405447U;

	t41 = (x225*((x226==x227)^x228));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x229 = -1;
	uint32_t x230 = 30378718U;
	int64_t x231 = INT64_MIN;
	int8_t x232 = -1;
	int32_t t42 = -6724146;

	t42 = (x229*((x230==x231)^x232));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = -1;

	t43 = (x233*((x234==x235)^x236));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x237 = 63LLU;
	static int16_t x238 = -12911;
	volatile int8_t x239 = 0;
	int64_t x240 = -1LL;
	volatile uint64_t t44 = 127729859LLU;

	t44 = (x237*((x238==x239)^x240));

	if (t44 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = -1;
	uint8_t x251 = UINT8_MAX;
	uint8_t x252 = 1U;
	volatile int32_t t45 = -41468232;

	t45 = (x249*((x250==x251)^x252));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x254 = INT8_MAX;
	static volatile int64_t x255 = INT64_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t46 = -12929988;

	t46 = (x253*((x254==x255)^x256));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x258 = INT64_MIN;
	int32_t x260 = 231;
	int32_t t47 = 681409289;

	t47 = (x257*((x258==x259)^x260));

	if (t47 != -3476450) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = -1LL;
	uint64_t x262 = 8780265355751LLU;
	uint32_t x263 = 3961U;
	volatile uint64_t x264 = 3178763694LLU;

	t48 = (x261*((x262==x263)^x264));

	if (t48 != 18446744070530787922LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x265 = 3U;
	static uint16_t x266 = 1746U;
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;

	t49 = (x265*((x266==x267)^x268));

	if (t49 != 765) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x269 = 2075LL;
	volatile int64_t x271 = INT64_MIN;
	volatile uint64_t t50 = 1568579003337997LLU;

	t50 = (x269*((x270==x271)^x272));

	if (t50 != 18446744073709549541LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x277 = -1;
	static int8_t x278 = INT8_MAX;
	static volatile uint8_t x279 = UINT8_MAX;
	uint8_t x280 = 105U;
	int32_t t51 = -1222693;

	t51 = (x277*((x278==x279)^x280));

	if (t51 != -105) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x281 = 428061U;
	uint16_t x282 = 5U;
	uint32_t x283 = 1U;
	uint32_t x284 = 2U;
	volatile uint32_t t52 = 537U;

	t52 = (x281*((x282==x283)^x284));

	if (t52 != 856122U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = -1;
	static uint32_t x287 = 17539U;
	static int32_t x288 = -34415;
	int32_t t53 = -267624961;

	t53 = (x285*((x286==x287)^x288));

	if (t53 != 4405120) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x289 = UINT32_MAX;
	static volatile int32_t x290 = INT32_MAX;
	volatile uint16_t x291 = 52U;
	volatile uint8_t x292 = 6U;

	t54 = (x289*((x290==x291)^x292));

	if (t54 != 4294967290U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x293 = -1;
	uint8_t x295 = 21U;
	volatile int16_t x296 = 18;
	int32_t t55 = -7;

	t55 = (x293*((x294==x295)^x296));

	if (t55 != -18) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x297 = UINT8_MAX;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t56 = 546262114982704147LLU;

	t56 = (x297*((x298==x299)^x300));

	if (t56 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x301 = 1U;
	uint16_t x302 = 101U;
	static uint16_t x303 = 3999U;
	int16_t x304 = -6;
	int32_t t57 = -14589467;

	t57 = (x301*((x302==x303)^x304));

	if (t57 != -6) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x309 = INT8_MAX;
	volatile int8_t x310 = 9;
	static int32_t x312 = 70;

	t58 = (x309*((x310==x311)^x312));

	if (t58 != 8890) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x313 = 13813U;
	int8_t x315 = -47;
	uint8_t x316 = 0U;
	int32_t t59 = 609;

	t59 = (x313*((x314==x315)^x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = INT8_MAX;
	uint32_t x318 = 8358926U;
	int16_t x319 = INT16_MAX;
	static volatile uint32_t x320 = UINT32_MAX;
	volatile uint32_t t60 = 1143800376U;

	t60 = (x317*((x318==x319)^x320));

	if (t60 != 4294967169U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x321 = 15;
	volatile int16_t x322 = INT16_MAX;
	static int16_t x323 = -273;
	volatile uint8_t x324 = 15U;
	volatile int32_t t61 = 51435973;

	t61 = (x321*((x322==x323)^x324));

	if (t61 != 225) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x325 = 739U;
	uint32_t x327 = 276U;
	uint16_t x328 = 175U;
	volatile int32_t t62 = -13;

	t62 = (x325*((x326==x327)^x328));

	if (t62 != 129325) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x329 = 5832U;
	int64_t x330 = -1LL;
	uint8_t x331 = 23U;
	int16_t x332 = 1;
	int32_t t63 = 11;

	t63 = (x329*((x330==x331)^x332));

	if (t63 != 5832) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x333 = 12U;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MAX;
	uint32_t x336 = 2U;
	uint32_t t64 = 5254U;

	t64 = (x333*((x334==x335)^x336));

	if (t64 != 24U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x337 = 2679;
	static int8_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t65 = -2079725;

	t65 = (x337*((x338==x339)^x340));

	if (t65 != -340233) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = -1LL;
	static int64_t x342 = 8154568475040LL;
	int16_t x343 = INT16_MIN;
	volatile int64_t t66 = 3779596000127LL;

	t66 = (x341*((x342==x343)^x344));

	if (t66 != 675196372879LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x357 = INT8_MIN;
	int16_t x358 = -55;
	volatile int16_t x360 = INT16_MIN;

	t67 = (x357*((x358==x359)^x360));

	if (t67 != 4194304) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x362 = INT32_MAX;
	uint64_t x363 = 4024720614608LLU;
	int8_t x364 = 16;

	t68 = (x361*((x362==x363)^x364));

	if (t68 != 4294967280U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x365 = 3218U;
	uint32_t x366 = 75901789U;
	int16_t x367 = INT16_MIN;
	uint64_t x368 = 1943722092768053LLU;
	volatile uint64_t t69 = 556935LLU;

	t69 = (x365*((x366==x367)^x368));

	if (t69 != 6254897694527594554LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x369 = INT8_MIN;
	static uint8_t x370 = 100U;
	volatile int8_t x372 = 0;
	static int32_t t70 = -1168921;

	t70 = (x369*((x370==x371)^x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x374 = -1LL;
	int8_t x375 = -1;
	volatile int16_t x376 = INT16_MAX;
	static int32_t t71 = -48619557;

	t71 = (x373*((x374==x375)^x376));

	if (t71 != -4194048) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x377 = UINT16_MAX;
	uint32_t x378 = UINT32_MAX;
	static int8_t x379 = INT8_MAX;
	int32_t x380 = -1;
	int32_t t72 = 17930;

	t72 = (x377*((x378==x379)^x380));

	if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	static int32_t t73 = -28841;

	t73 = (x381*((x382==x383)^x384));

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 3780645U;
	int16_t x387 = -15;
	uint16_t x388 = 2033U;

	t74 = (x385*((x386==x387)^x388));

	if (t74 != -66617344) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x389 = 222U;
	int8_t x390 = INT8_MAX;
	volatile uint8_t x391 = 15U;
	int32_t x392 = -1;
	volatile uint32_t t75 = 108283531U;

	t75 = (x389*((x390==x391)^x392));

	if (t75 != 4294967074U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x393 = INT8_MIN;
	static volatile uint8_t x394 = UINT8_MAX;
	static uint8_t x395 = UINT8_MAX;

	t76 = (x393*((x394==x395)^x396));

	if (t76 != 18446744056698272128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x401 = 4U;
	int16_t x403 = 24;
	int8_t x404 = -1;
	volatile int32_t t77 = -2574030;

	t77 = (x401*((x402==x403)^x404));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x405 = -28;
	static uint64_t x406 = 66130167682405488LLU;
	static uint8_t x407 = 3U;
	int32_t x408 = -1;
	volatile int32_t t78 = 1;

	t78 = (x405*((x406==x407)^x408));

	if (t78 != 28) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x411 = 0U;
	uint8_t x412 = 42U;
	volatile int32_t t79 = -490;

	t79 = (x409*((x410==x411)^x412));

	if (t79 != -5376) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x413 = 71509LLU;
	volatile int64_t x415 = -3835871350483060LL;
	int64_t x416 = -1LL;
	volatile uint64_t t80 = 45360096897LLU;

	t80 = (x413*((x414==x415)^x416));

	if (t80 != 18446744073709480107LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x417 = 24U;
	static uint32_t x418 = 25756U;
	volatile int8_t x419 = -6;
	static int8_t x420 = INT8_MAX;
	int32_t t81 = -36017;

	t81 = (x417*((x418==x419)^x420));

	if (t81 != 3048) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x421 = 17U;
	static int8_t x422 = -1;
	uint64_t x423 = 6708834908654817LLU;
	volatile int32_t x424 = -1;
	volatile int32_t t82 = -1;

	t82 = (x421*((x422==x423)^x424));

	if (t82 != -17) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x426 = -1;
	volatile int64_t x427 = -1LL;
	static int32_t x428 = INT32_MIN;

	t83 = (x425*((x426==x427)^x428));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = -38;
	volatile int16_t x430 = -1;
	static volatile uint8_t x431 = 1U;
	int32_t x432 = -445927;
	int32_t t84 = -93319117;

	t84 = (x429*((x430==x431)^x432));

	if (t84 != 16945226) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x434 = INT32_MAX;
	int16_t x435 = INT16_MAX;
	int32_t t85 = -4116;

	t85 = (x433*((x434==x435)^x436));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x437 = INT16_MIN;
	static volatile int64_t x438 = 101185516LL;
	int16_t x439 = INT16_MIN;
	uint8_t x440 = 14U;
	static volatile int32_t t86 = -696006;

	t86 = (x437*((x438==x439)^x440));

	if (t86 != -458752) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x441 = UINT16_MAX;
	int8_t x443 = INT8_MIN;
	uint32_t x444 = 130311U;
	volatile uint32_t t87 = 23U;

	t87 = (x441*((x442==x443)^x444));

	if (t87 != 4244964089U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x450 = 23LLU;
	int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MAX;
	volatile int32_t t88 = -33714;

	t88 = (x449*((x450==x451)^x452));

	if (t88 != 425971) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x453 = 386313820871LLU;
	uint8_t x454 = 1U;
	int8_t x455 = INT8_MIN;
	uint64_t x456 = 1726LLU;
	static volatile uint64_t t89 = 3LLU;

	t89 = (x453*((x454==x455)^x456));

	if (t89 != 666777654823346LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x458 = 8LLU;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t90 = 1982111974U;

	t90 = (x457*((x458==x459)^x460));

	if (t90 != 128U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x462 = -25;
	int32_t x463 = -21;
	volatile int32_t x464 = -186263;
	static volatile int32_t t91 = 375269;

	t91 = (x461*((x462==x463)^x464));

	if (t91 != 186263) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x467 = 703744710765026758LL;

	t92 = (x465*((x466==x467)^x468));

	if (t92 != -2530365) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x469 = UINT64_MAX;
	int32_t x470 = INT32_MAX;
	int32_t x471 = INT32_MAX;
	static uint8_t x472 = UINT8_MAX;
	static volatile uint64_t t93 = 3461442916LLU;

	t93 = (x469*((x470==x471)^x472));

	if (t93 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x474 = 31;
	uint16_t x475 = 11114U;
	uint16_t x476 = 2008U;

	t94 = (x473*((x474==x475)^x476));

	if (t94 != -65798144) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = INT8_MIN;
	uint8_t x478 = 11U;
	volatile uint32_t x479 = UINT32_MAX;

	t95 = (x477*((x478==x479)^x480));

	if (t95 != -8388480) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x489 = INT32_MIN;
	int8_t x490 = -1;
	int64_t x491 = -1LL;
	int64_t x492 = -1LL;
	int64_t t96 = -123167LL;

	t96 = (x489*((x490==x491)^x492));

	if (t96 != 4294967296LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x501 = UINT32_MAX;
	int32_t x502 = INT32_MAX;
	static uint64_t x503 = UINT64_MAX;
	volatile int64_t t97 = -35087392773901961LL;

	t97 = (x501*((x502==x503)^x504));

	if (t97 != -6084526892328643335LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x506 = INT8_MIN;
	volatile int64_t x507 = INT64_MIN;
	static int64_t x508 = -102506LL;
	static int64_t t98 = -397376085139062LL;

	t98 = (x505*((x506==x507)^x508));

	if (t98 != -440259917541270LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x514 = UINT8_MAX;
	volatile int64_t x515 = 18914386554191LL;
	int32_t t99 = -243877;

	t99 = (x513*((x514==x515)^x516));

	if (t99 != 925184) { NG(); } else { ; }
	
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

