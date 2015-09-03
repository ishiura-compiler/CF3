#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
uint64_t t2 = 6815055LLU;
volatile int64_t t3 = 230LL;
int16_t x21 = INT16_MIN;
int8_t x22 = INT8_MAX;
int8_t x23 = -1;
uint16_t x26 = UINT16_MAX;
int64_t t5 = 22540742248LL;
static int32_t x30 = -1;
int8_t x32 = -21;
static int64_t t7 = -49825596120348LL;
int16_t x37 = INT16_MAX;
uint8_t x42 = 3U;
int64_t x44 = INT64_MIN;
int64_t t9 = INT64_MAX;
int16_t x58 = -1;
int8_t x67 = INT8_MIN;
int16_t x84 = 4796;
static int16_t x91 = -1;
int16_t x99 = INT16_MIN;
int32_t t16 = 54;
uint8_t x109 = 8U;
int16_t x114 = -7;
int16_t x149 = INT16_MIN;
static int64_t x150 = 3816LL;
int8_t x158 = -1;
volatile uint16_t x162 = 31575U;
int8_t x164 = INT8_MIN;
uint64_t x168 = UINT64_MAX;
volatile uint64_t x174 = 46496056816LLU;
int32_t x181 = 49;
volatile uint8_t x182 = 20U;
uint8_t x183 = 3U;
uint32_t t34 = 15958U;
static int16_t x188 = -7;
int8_t x191 = -1;
volatile uint16_t x192 = 253U;
uint64_t t37 = 8383621890LLU;
static uint16_t x213 = UINT16_MAX;
volatile uint32_t x217 = 123099082U;
volatile int32_t x220 = 2985034;
uint64_t x226 = 110567648047LLU;
uint8_t x237 = UINT8_MAX;
static uint16_t x240 = 2U;
int32_t x249 = INT32_MIN;
volatile int8_t x250 = 1;
int32_t x257 = -889307568;
int8_t x266 = INT8_MIN;
volatile int64_t x269 = INT64_MIN;
uint32_t x273 = 14676U;
int8_t x278 = -14;
uint32_t x282 = 3918594U;
uint8_t x288 = 49U;
volatile int32_t t53 = -311001127;
int16_t x292 = -46;
int8_t x295 = -9;
int32_t x298 = -1;
int16_t x299 = -14;
uint32_t x301 = 48U;
uint64_t x309 = 2346394LLU;
static int8_t x310 = INT8_MIN;
uint64_t x312 = UINT64_MAX;
static int8_t x313 = INT8_MIN;
int16_t x315 = INT16_MIN;
int32_t x317 = INT32_MIN;
static int32_t x332 = -1;
static uint64_t t63 = 35993459LLU;
uint64_t x335 = UINT64_MAX;
volatile uint64_t t64 = 9070LLU;
uint16_t x342 = 164U;
int32_t x346 = -57;
uint64_t x361 = UINT64_MAX;
static uint16_t x363 = 6U;
volatile uint8_t x367 = 10U;
int8_t x387 = INT8_MIN;
volatile int16_t x390 = 98;
static int64_t t75 = 4472712011754232LL;
int32_t x403 = -1;
uint8_t x415 = UINT8_MAX;
uint64_t x432 = UINT64_MAX;
uint16_t x447 = UINT16_MAX;
int8_t x450 = INT8_MAX;
static int64_t x451 = 126LL;
static uint16_t x453 = UINT16_MAX;
static uint8_t x454 = 2U;
static int8_t x459 = -1;
int64_t x460 = INT64_MIN;
uint8_t x463 = UINT8_MAX;
volatile uint8_t x472 = 1U;
uint64_t t86 = 24213621911010088LLU;
uint32_t x481 = UINT32_MAX;
uint64_t x491 = UINT64_MAX;
int8_t x492 = INT8_MIN;
uint64_t t89 = 275LLU;
volatile int16_t x493 = -1;
volatile int8_t x494 = 0;
volatile int64_t t90 = 124269455444LL;
int64_t x503 = -71LL;
uint64_t x504 = 2722LLU;
int32_t x512 = INT32_MAX;
uint64_t x514 = 331381325LLU;
int64_t x515 = 476813913LL;
volatile uint64_t t94 = 985LLU;
uint64_t x523 = UINT64_MAX;
volatile int8_t x524 = -1;
volatile uint64_t t96 = 4209366821LLU;
int32_t x527 = -1;
uint8_t x539 = UINT8_MAX;
uint64_t t99 = 864504376894810LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static uint64_t x3 = 398719LLU;
	volatile int16_t x4 = -1;
	volatile uint64_t t0 = 7896498961369LLU;

	t0 = ((x1|(x2*x3))^x4);

	if (t0 != 398592LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MIN;
	uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 62U;
	int32_t t1 = 1639;

	t1 = ((x5|(x6*x7))^x8);

	if (t1 != -8388415) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1295LLU;
	int16_t x10 = 0;
	uint8_t x11 = 4U;
	static uint64_t x12 = 5035438792434721695LLU;

	t2 = ((x9|(x10*x11))^x12);

	if (t2 != 5035438792434722448LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint32_t x18 = 836U;
	volatile int32_t x19 = -5116043;
	int32_t x20 = INT32_MAX;

	t3 = ((x17|(x18*x19))^x20);

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -1;

	t4 = ((x21|(x22*x23))^x24);

	if (t4 != 2147483521) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	static int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;

	t5 = ((x25|(x26*x27))^x28);

	if (t5 != 8355968LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	int32_t x31 = -1;
	static int32_t t6 = -24;

	t6 = ((x29|(x30*x31))^x32);

	if (t6 != -2147483628) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	volatile int8_t x34 = -2;
	int64_t x35 = 93863864964129LL;
	volatile uint8_t x36 = 0U;

	t7 = ((x33|(x34*x35))^x36);

	if (t7 != -10306LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -1;
	volatile int8_t x39 = INT8_MIN;
	uint32_t x40 = 11U;
	uint32_t t8 = 9226126U;

	t8 = ((x37|(x38*x39))^x40);

	if (t8 != 32756U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	int8_t x43 = -1;

	t9 = ((x41|(x42*x43))^x44);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	int16_t x59 = INT16_MIN;
	int32_t x60 = 7469;
	int64_t t10 = -17420613969056LL;

	t10 = ((x57|(x58*x59))^x60);

	if (t10 != -7470LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -1LL;
	static int64_t x66 = -22038436835037765LL;
	volatile int32_t x68 = -458;
	static volatile int64_t t11 = -70844679093920LL;

	t11 = ((x65|(x66*x67))^x68);

	if (t11 != 457LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	volatile int16_t x79 = -1;
	static int16_t x80 = -1;
	static int32_t t12 = 31532797;

	t12 = ((x77|(x78*x79))^x80);

	if (t12 != 2147483519) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x81 = 3U;
	static volatile uint32_t x82 = UINT32_MAX;
	int32_t x83 = INT32_MAX;
	static volatile uint32_t t13 = 3120U;

	t13 = ((x81|(x82*x83))^x84);

	if (t13 != 2147488447U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t14 = INT32_MAX;

	t14 = ((x89|(x90*x91))^x92);

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = 1;
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = -1;
	static int32_t x96 = INT32_MIN;
	int64_t t15 = -61LL;

	t15 = ((x93|(x94*x95))^x96);

	if (t15 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MIN;
	int32_t x100 = 197458;

	t16 = ((x97|(x98*x99))^x100);

	if (t16 != -228526) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x101 = -1;
	static uint64_t x102 = UINT64_MAX;
	volatile int8_t x103 = INT8_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile uint64_t t17 = 435301102LLU;

	t17 = ((x101|(x102*x103))^x104);

	if (t17 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -2;
	int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	volatile uint16_t x108 = 13057U;
	static int32_t t18 = -103243103;

	t18 = ((x105|(x106*x107))^x108);

	if (t18 != -13057) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x110 = 1;
	static int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t19 = 4224278691411297498LL;

	t19 = ((x109|(x110*x111))^x112);

	if (t19 != 9223372034707292168LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = INT16_MIN;
	int8_t x115 = -1;
	int32_t x116 = 1517;
	volatile int32_t t20 = -1;

	t20 = ((x113|(x114*x115))^x116);

	if (t20 != -31254) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -2;
	int64_t x122 = -1LL;
	uint16_t x123 = 1530U;
	static int8_t x124 = -1;
	int64_t t21 = -65633594550LL;

	t21 = ((x121|(x122*x123))^x124);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x125 = UINT64_MAX;
	static int16_t x126 = -184;
	volatile int64_t x127 = -1LL;
	uint16_t x128 = 16647U;
	uint64_t t22 = 1058489753635270LLU;

	t22 = ((x125|(x126*x127))^x128);

	if (t22 != 18446744073709534968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x129 = 150240558LL;
	static uint8_t x130 = 3U;
	int8_t x131 = INT8_MAX;
	static int64_t x132 = INT64_MAX;
	volatile int64_t t23 = -114685766LL;

	t23 = ((x129|(x130*x131))^x132);

	if (t23 != 9223372036704535168LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x137 = 5169;
	static int8_t x138 = 53;
	uint8_t x139 = 1U;
	int32_t x140 = INT32_MAX;
	static int32_t t24 = 3424688;

	t24 = ((x137|(x138*x139))^x140);

	if (t24 != 2147478474) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = 0;
	uint16_t x142 = 545U;
	volatile int32_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t25 = 16275199552195291LLU;

	t25 = ((x141|(x142*x143))^x144);

	if (t25 != 544LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -1LL;
	uint16_t x146 = 15077U;
	uint64_t x147 = UINT64_MAX;
	uint64_t x148 = 24324LLU;
	volatile uint64_t t26 = 6505355060350LLU;

	t26 = ((x145|(x146*x147))^x148);

	if (t26 != 18446744073709527291LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x151 = 1U;
	int64_t x152 = -1LL;
	int64_t t27 = -590332930771888118LL;

	t27 = ((x149|(x150*x151))^x152);

	if (t27 != 28951LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = UINT8_MAX;
	static int64_t x154 = -1408242180534986510LL;
	volatile int8_t x155 = -1;
	static int8_t x156 = INT8_MIN;
	int64_t t28 = -61808LL;

	t28 = ((x153|(x154*x155))^x156);

	if (t28 != -1408242180534986625LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	uint16_t x160 = UINT16_MAX;
	int32_t t29 = -1;

	t29 = ((x157|(x158*x159))^x160);

	if (t29 != -32770) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x161 = -47;
	int16_t x163 = -1;
	volatile int32_t t30 = -3;

	t30 = ((x161|(x162*x163))^x164);

	if (t30 != 121) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x165 = 224U;
	uint64_t x166 = 209773900930073LLU;
	uint32_t x167 = 51347530U;
	static volatile uint64_t t31 = 247186473128595LLU;

	t31 = ((x165|(x166*x167))^x168);

	if (t31 != 1526867822426873861LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x173 = INT16_MIN;
	int64_t x175 = -3599LL;
	int8_t x176 = -56;
	uint64_t t32 = 2010603088LLU;

	t32 = ((x173|(x174*x175))^x176);

	if (t32 != 31032LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x177 = UINT64_MAX;
	static uint8_t x178 = 14U;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	static volatile uint64_t t33 = 39411245LLU;

	t33 = ((x177|(x178*x179))^x180);

	if (t33 != 32767LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x184 = 1960021234U;

	t34 = ((x181|(x182*x183))^x184);

	if (t34 != 1960021199U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x185 = -1;
	static uint32_t x186 = UINT32_MAX;
	int16_t x187 = -1;
	static volatile uint32_t t35 = 22U;

	t35 = ((x185|(x186*x187))^x188);

	if (t35 != 6U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x189 = 1000817433;
	static volatile int16_t x190 = INT16_MAX;
	int32_t t36 = -12261;

	t36 = ((x189|(x190*x191))^x192);

	if (t36 != -15388) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = 56;
	static volatile uint16_t x195 = UINT16_MAX;
	int32_t x196 = INT32_MIN;

	t37 = ((x193|(x194*x195))^x196);

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = INT32_MIN;
	int8_t x198 = -1;
	int16_t x199 = 0;
	int64_t x200 = 138714LL;
	int64_t t38 = 8688017437502LL;

	t38 = ((x197|(x198*x199))^x200);

	if (t38 != -2147344934LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x214 = UINT32_MAX;
	uint16_t x215 = UINT16_MAX;
	static volatile int32_t x216 = -1;
	volatile uint32_t t39 = 1107713125U;

	t39 = ((x213|(x214*x215))^x216);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x218 = INT16_MAX;
	int64_t x219 = -27720LL;
	volatile int64_t t40 = -174267507197488433LL;

	t40 = ((x217|(x218*x219))^x220);

	if (t40 != -806096000LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x225 = -1;
	uint64_t x227 = UINT64_MAX;
	volatile int64_t x228 = INT64_MIN;
	uint64_t t41 = 129720623494LLU;

	t41 = ((x225|(x226*x227))^x228);

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x233 = -1;
	uint64_t x234 = 7873649LLU;
	static volatile int32_t x235 = INT32_MAX;
	int8_t x236 = 1;
	uint64_t t42 = 6725322LLU;

	t42 = ((x233|(x234*x235))^x236);

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x238 = INT64_MAX;
	int32_t x239 = -1;
	volatile int64_t t43 = -1860068367526340274LL;

	t43 = ((x237|(x238*x239))^x240);

	if (t43 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x242 = 13641U;
	uint16_t x243 = 2312U;
	uint64_t x244 = 367219670094382542LLU;
	static uint64_t t44 = 3120LLU;

	t44 = ((x241|(x242*x243))^x244);

	if (t44 != 367219673097092742LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x245 = -1;
	int32_t x246 = -44737;
	uint8_t x247 = UINT8_MAX;
	static int64_t x248 = 83374864942441LL;
	int64_t t45 = 502858699115LL;

	t45 = ((x245|(x246*x247))^x248);

	if (t45 != -83374864942442LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x251 = INT16_MAX;
	static int8_t x252 = -1;
	volatile int32_t t46 = 2921;

	t46 = ((x249|(x250*x251))^x252);

	if (t46 != 2147450880) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x258 = 0;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t47 = -4;

	t47 = ((x257|(x258*x259))^x260);

	if (t47 != 889307600) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x265 = 3388;
	static uint16_t x267 = 77U;
	volatile uint64_t x268 = 66653183LLU;
	static volatile uint64_t t48 = 262933251788LLU;

	t48 = ((x265|(x266*x267))^x268);

	if (t48 != 18446744073642890819LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x270 = INT8_MIN;
	int64_t x271 = 1069715973580074LL;
	uint16_t x272 = 973U;
	static int64_t t49 = -11234LL;

	t49 = ((x269|(x270*x271))^x272);

	if (t49 != -136923644618250035LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x274 = -38;
	volatile int32_t x275 = 0;
	int8_t x276 = -3;
	uint32_t t50 = 15332648U;

	t50 = ((x273|(x274*x275))^x276);

	if (t50 != 4294952617U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x277 = 3;
	static volatile int8_t x279 = INT8_MAX;
	volatile int16_t x280 = -1;
	int32_t t51 = 0;

	t51 = ((x277|(x278*x279))^x280);

	if (t51 != 1776) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x281 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	int32_t x284 = INT32_MIN;
	static volatile uint32_t t52 = 56570033U;

	t52 = ((x281|(x282*x283))^x284);

	if (t52 != 2147483646U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = 3058;
	int16_t x286 = INT16_MAX;
	uint8_t x287 = 11U;

	t53 = ((x285|(x286*x287))^x288);

	if (t53 != 360390) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = -157;
	static int64_t x291 = -1LL;
	static int64_t t54 = 85606515872416889LL;

	t54 = ((x289|(x290*x291))^x292);

	if (t54 != 32591LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x293 = 196U;
	int8_t x294 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t55 = 12176U;

	t55 = ((x293|(x294*x295))^x296);

	if (t55 != 2147482573U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = -4117389910263LL;
	int64_t x300 = -1LL;
	int64_t t56 = -115425472163170LL;

	t56 = ((x297|(x298*x299))^x300);

	if (t56 != 4117389910256LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x302 = -893;
	int64_t x303 = -1LL;
	int8_t x304 = INT8_MIN;
	volatile int64_t t57 = 11235041248LL;

	t57 = ((x301|(x302*x303))^x304);

	if (t57 != -771LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x311 = UINT32_MAX;
	uint64_t t58 = 142256187564753LLU;

	t58 = ((x309|(x310*x311))^x312);

	if (t58 != 18446744073707205221LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x314 = 51426459U;
	volatile uint64_t x316 = 6742622622LLU;
	volatile uint64_t t59 = 1299406949481LLU;

	t59 = ((x313|(x314*x315))^x316);

	if (t59 != 6142279198LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x318 = 0U;
	int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MIN;
	uint32_t t60 = 748220751U;

	t60 = ((x317|(x318*x319))^x320);

	if (t60 != 2147450880U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x321 = -1LL;
	uint16_t x322 = 20929U;
	int16_t x323 = INT16_MAX;
	uint64_t x324 = 1968LLU;
	uint64_t t61 = 25127631810LLU;

	t61 = ((x321|(x322*x323))^x324);

	if (t61 != 18446744073709549647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = 1770;
	volatile uint16_t x326 = 32U;
	static uint16_t x327 = UINT16_MAX;
	uint64_t x328 = 75757LLU;
	volatile uint64_t t62 = 15LLU;

	t62 = ((x325|(x326*x327))^x328);

	if (t62 != 2021383LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = UINT16_MAX;
	static volatile uint64_t x331 = UINT64_MAX;

	t63 = ((x329|(x330*x331))^x332);

	if (t63 != 65534LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	volatile int32_t x336 = INT32_MIN;

	t64 = ((x333|(x334*x335))^x336);

	if (t64 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x337 = 109759LL;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 31838U;
	uint32_t x340 = 768895U;
	volatile int64_t t65 = 6490672367714406LL;

	t65 = ((x337|(x338*x339))^x340);

	if (t65 != -3520832LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x341 = INT8_MIN;
	volatile int32_t x343 = -1;
	int64_t x344 = 763811720LL;
	volatile int64_t t66 = 4201LL;

	t66 = ((x341|(x342*x343))^x344);

	if (t66 != -763811756LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x345 = -1;
	int64_t x347 = -1LL;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t67 = INT64_MAX;

	t67 = ((x345|(x346*x347))^x348);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x349 = 31903U;
	uint64_t x350 = 100724804LLU;
	int8_t x351 = 1;
	uint8_t x352 = 127U;
	uint64_t t68 = 19838164201800LLU;

	t68 = ((x349|(x350*x351))^x352);

	if (t68 != 100727968LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x362 = 1;
	uint32_t x364 = UINT32_MAX;
	static uint64_t t69 = 0LLU;

	t69 = ((x361|(x362*x363))^x364);

	if (t69 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x365 = 61;
	uint8_t x366 = 2U;
	uint64_t x368 = UINT64_MAX;
	uint64_t t70 = 10763705892007LLU;

	t70 = ((x365|(x366*x367))^x368);

	if (t70 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x373 = INT64_MIN;
	uint64_t x374 = UINT64_MAX;
	uint8_t x375 = 2U;
	volatile uint16_t x376 = 0U;
	uint64_t t71 = 8324289897696LLU;

	t71 = ((x373|(x374*x375))^x376);

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x385 = INT8_MAX;
	volatile uint16_t x386 = 30U;
	static int32_t x388 = INT32_MIN;
	int32_t t72 = 121845;

	t72 = ((x385|(x386*x387))^x388);

	if (t72 != 2147479935) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x389 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	static int32_t x392 = INT32_MIN;
	int32_t t73 = -1030;

	t73 = ((x389|(x390*x391))^x392);

	if (t73 != 2147483550) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x393 = INT64_MIN;
	static int64_t x394 = -338337887LL;
	int32_t x395 = 41;
	static int16_t x396 = -13;
	volatile int64_t t74 = -53185506116594413LL;

	t74 = ((x393|(x394*x395))^x396);

	if (t74 != 13871853370LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x397 = 27764U;
	static uint32_t x398 = 23079830U;
	volatile int64_t x399 = -1LL;
	volatile int64_t x400 = INT64_MAX;

	t75 = ((x397|(x398*x399))^x400);

	if (t75 != -9223372036831706239LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	int64_t x404 = 28441970655LL;
	static int64_t t76 = -14693544761094LL;

	t76 = ((x401|(x402*x403))^x404);

	if (t76 != -28441970656LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x405 = UINT64_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	volatile int32_t x407 = -1;
	uint16_t x408 = 13324U;
	uint64_t t77 = 268639715474425LLU;

	t77 = ((x405|(x406*x407))^x408);

	if (t77 != 18446744073709538291LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x413 = INT64_MIN;
	volatile int16_t x414 = INT16_MIN;
	static int32_t x416 = INT32_MIN;
	int64_t t78 = 28165063755160203LL;

	t78 = ((x413|(x414*x415))^x416);

	if (t78 != 2139127808LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = 13820U;
	int32_t t79 = 705955228;

	t79 = ((x417|(x418*x419))^x420);

	if (t79 != 4208003) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x429 = 6LLU;
	volatile int8_t x430 = INT8_MIN;
	int64_t x431 = 9702LL;
	uint64_t t80 = 216904LLU;

	t80 = ((x429|(x430*x431))^x432);

	if (t80 != 1241849LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x445 = 910U;
	int16_t x446 = 48;
	int64_t x448 = INT64_MIN;
	volatile int64_t t81 = -42788LL;

	t81 = ((x445|(x446*x447))^x448);

	if (t81 != -9223372036851630114LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x449 = -1;
	int64_t x452 = INT64_MIN;
	volatile int64_t t82 = INT64_MAX;

	t82 = ((x449|(x450*x451))^x452);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x455 = 1LLU;
	int64_t x456 = -1LL;
	volatile uint64_t t83 = 42357261912949LLU;

	t83 = ((x453|(x454*x455))^x456);

	if (t83 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x457 = INT64_MIN;
	int32_t x458 = 43235671;
	int64_t t84 = 14507027716931418LL;

	t84 = ((x457|(x458*x459))^x460);

	if (t84 != 9223372036811540137LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x461 = INT64_MAX;
	int16_t x462 = -1;
	int64_t x464 = INT64_MAX;
	int64_t t85 = INT64_MIN;

	t85 = ((x461|(x462*x463))^x464);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x469 = -13;
	uint64_t x470 = 5034198840456LLU;
	uint8_t x471 = 0U;

	t86 = ((x469|(x470*x471))^x472);

	if (t86 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x482 = 3088LLU;
	uint32_t x483 = UINT32_MAX;
	uint16_t x484 = 0U;
	static volatile uint64_t t87 = 1823415374218482LLU;

	t87 = ((x481|(x482*x483))^x484);

	if (t87 != 13262859010047LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x485 = INT64_MIN;
	volatile int8_t x486 = 38;
	static int32_t x487 = -1216;
	static uint8_t x488 = 41U;
	volatile int64_t t88 = -1228347775920942226LL;

	t88 = ((x485|(x486*x487))^x488);

	if (t88 != -46167LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x489 = 4U;
	uint8_t x490 = 1U;

	t89 = ((x489|(x490*x491))^x492);

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x495 = INT64_MIN;
	static int8_t x496 = -3;

	t90 = ((x493|(x494*x495))^x496);

	if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x501 = 370;
	int8_t x502 = 29;
	uint64_t t91 = 11019LLU;

	t91 = ((x501|(x502*x503))^x504);

	if (t91 != 18446744073709550933LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x505 = -1;
	int16_t x506 = INT16_MIN;
	static uint64_t x507 = 68503952888LLU;
	volatile uint8_t x508 = UINT8_MAX;
	uint64_t t92 = 241692788311LLU;

	t92 = ((x505|(x506*x507))^x508);

	if (t92 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x509 = 119329307438LLU;
	uint16_t x510 = 22219U;
	volatile int32_t x511 = 0;
	volatile uint64_t t93 = 128850345LLU;

	t93 = ((x509|(x510*x511))^x512);

	if (t93 != 119041377489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = -1LL;
	int64_t x516 = INT64_MIN;

	t94 = ((x513|(x514*x515))^x516);

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x517 = -5666;
	int32_t x518 = -1;
	static int8_t x519 = INT8_MAX;
	static int64_t x520 = INT64_MIN;
	int64_t t95 = -230LL;

	t95 = ((x517|(x518*x519))^x520);

	if (t95 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x521 = -1;
	static uint64_t x522 = 11LLU;

	t96 = ((x521|(x522*x523))^x524);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x525 = INT16_MIN;
	uint64_t x526 = 8263675096287LLU;
	static int64_t x528 = INT64_MIN;
	uint64_t t97 = 19378687LLU;

	t97 = ((x525|(x526*x527))^x528);

	if (t97 != 9223372036854764321LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x529 = 1820U;
	volatile uint16_t x530 = UINT16_MAX;
	int8_t x531 = INT8_MIN;
	int16_t x532 = -20;
	static volatile int32_t t98 = -1;

	t98 = ((x529|(x530*x531))^x532);

	if (t98 != 8386672) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x537 = UINT64_MAX;
	uint32_t x538 = 47610U;
	int64_t x540 = INT64_MIN;

	t99 = ((x537|(x538*x539))^x540);

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

