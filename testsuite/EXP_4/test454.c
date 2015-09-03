#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 2U;
int8_t x2 = 35;
uint32_t x10 = UINT32_MAX;
int8_t x11 = INT8_MIN;
int16_t x12 = -1;
int8_t x21 = -2;
static int32_t t3 = 90438132;
static int16_t x28 = -1869;
int8_t x36 = 13;
uint16_t x61 = UINT16_MAX;
uint32_t x63 = 7U;
static int64_t x68 = 35109668503134373LL;
volatile int16_t x69 = -1;
int64_t x75 = 405LL;
int32_t t17 = 752;
int16_t x116 = -1;
uint32_t x119 = 32791217U;
uint32_t x121 = 91U;
volatile uint64_t x131 = 4710106082LLU;
volatile int32_t t24 = INT32_MAX;
int32_t x141 = 335;
uint64_t x149 = UINT64_MAX;
int64_t x161 = INT64_MIN;
volatile uint32_t x164 = UINT32_MAX;
int16_t x166 = INT16_MAX;
static int32_t t29 = -26291;
volatile int8_t x174 = -2;
static int32_t x176 = INT32_MIN;
static int64_t x177 = INT64_MAX;
uint16_t x178 = 902U;
uint8_t x179 = 56U;
int16_t x180 = INT16_MAX;
int16_t x185 = INT16_MIN;
int8_t x186 = 1;
int32_t x191 = INT32_MIN;
uint32_t x193 = 184583U;
int64_t x206 = INT64_MIN;
static uint32_t x208 = 170U;
int16_t x214 = -1;
static uint16_t x218 = 4U;
int64_t x219 = -1LL;
int64_t x223 = INT64_MIN;
volatile uint16_t x236 = 4468U;
static int32_t x242 = -1;
int16_t x244 = INT16_MIN;
static uint64_t x245 = UINT64_MAX;
uint32_t x255 = UINT32_MAX;
uint32_t x256 = 0U;
int64_t x270 = -492641191607LL;
static volatile int32_t x272 = -1;
int32_t x274 = -1918;
static volatile int32_t t52 = INT32_MAX;
volatile int64_t x282 = -1LL;
int64_t x296 = INT64_MIN;
volatile int32_t x308 = 166159;
static int64_t t63 = INT64_MIN;
volatile int32_t t64 = -1;
volatile int64_t x359 = -1LL;
int64_t x393 = -1LL;
volatile uint64_t x397 = 2364989280888305778LLU;
int32_t x402 = INT32_MAX;
int16_t x406 = 213;
int64_t x410 = INT64_MIN;
uint32_t x414 = 83143U;
int32_t t75 = -318;
volatile uint16_t x422 = UINT16_MAX;
int64_t x431 = INT64_MIN;
int32_t t78 = -14306;
static int32_t t79 = -1;
uint32_t x437 = 27642U;
int64_t x440 = -3217994LL;
uint8_t x441 = 0U;
int8_t x452 = -1;
int16_t x454 = -1;
volatile int8_t x468 = -1;
volatile uint64_t t86 = 42057836942007LLU;
int32_t t88 = 1;
int16_t x487 = INT16_MAX;
uint32_t x497 = 0U;
int64_t x499 = -6894935922808LL;
uint8_t x504 = 53U;
static volatile int64_t x508 = 12524548LL;
static uint32_t x514 = 77434U;
uint16_t x515 = UINT16_MAX;
volatile int64_t t94 = -938950298244059LL;
int16_t x520 = INT16_MIN;
volatile int32_t t95 = -7110751;
volatile int32_t t96 = -167483;
static int32_t x547 = -1;


void f0(void) {
	volatile uint32_t x3 = UINT32_MAX;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -1;

	t0 = (x1|(x2<(x3*x4)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 13U;
	volatile int32_t t1 = -46;

	t1 = (x9|(x10<(x11*x12)));

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 7U;
	int32_t x14 = INT32_MAX;
	static uint64_t x15 = 2101644522402008LLU;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = 500753;

	t2 = (x13|(x14<(x15*x16)));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x22 = -1LL;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 16729647561152LLU;

	t3 = (x21|(x22<(x23*x24)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 1;
	volatile int8_t x26 = INT8_MIN;
	int64_t x27 = -97287283196601LL;
	int32_t t4 = -866187;

	t4 = (x25|(x26<(x27*x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -103;
	volatile int32_t x34 = INT32_MIN;
	uint8_t x35 = 36U;
	volatile int32_t t5 = -278770826;

	t5 = (x33|(x34<(x35*x36)));

	if (t5 != -103) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = 883;
	uint8_t x50 = 25U;
	int8_t x51 = 0;
	volatile int32_t x52 = -974;
	volatile int32_t t6 = -1825904;

	t6 = (x49|(x50<(x51*x52)));

	if (t6 != 883) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	uint32_t x55 = 45990U;
	int32_t x56 = INT32_MAX;
	int32_t t7 = 29;

	t7 = (x53|(x54<(x55*x56)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x62 = -1;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t8 = 454838;

	t8 = (x61|(x62<(x63*x64)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = 90592070818LLU;
	static uint8_t x67 = 26U;
	int32_t t9 = 3847;

	t9 = (x65|(x66<(x67*x68)));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x70 = 1995792U;
	static volatile int16_t x71 = 115;
	uint64_t x72 = UINT64_MAX;
	int32_t t10 = -220;

	t10 = (x69|(x70<(x71*x72)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = 15;
	int8_t x74 = 33;
	int8_t x76 = 1;
	volatile int32_t t11 = 205114041;

	t11 = (x73|(x74<(x75*x76)));

	if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x77 = 1U;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = -6;
	static int32_t t12 = 0;

	t12 = (x77|(x78<(x79*x80)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = -1;
	volatile uint64_t x82 = 185006565605137204LLU;
	uint64_t x83 = 35340748LLU;
	uint32_t x84 = 3U;
	static volatile int32_t t13 = -44020009;

	t13 = (x81|(x82<(x83*x84)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = -1;
	int8_t x86 = -1;
	uint64_t x87 = 32252948425777LLU;
	int16_t x88 = INT16_MIN;
	volatile int32_t t14 = 257;

	t14 = (x85|(x86<(x87*x88)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x97 = -3;
	int8_t x98 = -1;
	volatile uint16_t x99 = UINT16_MAX;
	int64_t x100 = 1001325687218LL;
	int32_t t15 = -48572026;

	t15 = (x97|(x98<(x99*x100)));

	if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x101 = INT8_MAX;
	volatile uint32_t x102 = 774U;
	int64_t x103 = 4519LL;
	uint8_t x104 = 106U;
	volatile int32_t t16 = 75;

	t16 = (x101|(x102<(x103*x104)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = -8929081;
	int8_t x107 = 0;
	int64_t x108 = INT64_MIN;

	t17 = (x105|(x106<(x107*x108)));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = 12U;
	int16_t x111 = 2047;
	static uint16_t x112 = 18851U;
	int32_t t18 = -14584013;

	t18 = (x109|(x110<(x111*x112)));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t t19 = 4;

	t19 = (x113|(x114<(x115*x116)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = -1;
	int32_t x118 = -1;
	uint32_t x120 = 1196965878U;
	static int32_t t20 = -830993281;

	t20 = (x117|(x118<(x119*x120)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x122 = INT64_MAX;
	static int64_t x123 = 6799935513LL;
	int16_t x124 = INT16_MAX;
	static volatile uint32_t t21 = 3U;

	t21 = (x121|(x122<(x123*x124)));

	if (t21 != 91U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	static int64_t x126 = 6599660LL;
	static uint16_t x127 = UINT16_MAX;
	volatile int16_t x128 = INT16_MAX;
	int32_t t22 = 14;

	t22 = (x125|(x126<(x127*x128)));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = 1979523;
	volatile uint64_t x130 = 105910942319174752LLU;
	int64_t x132 = INT64_MIN;
	volatile int32_t t23 = -63324;

	t23 = (x129|(x130<(x131*x132)));

	if (t23 != 1979523) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x133 = INT32_MAX;
	uint32_t x134 = UINT32_MAX;
	static uint8_t x135 = 20U;
	uint32_t x136 = 50757525U;

	t24 = (x133|(x134<(x135*x136)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x142 = -1;
	uint8_t x143 = 7U;
	volatile int32_t x144 = -15;
	int32_t t25 = 1974;

	t25 = (x141|(x142<(x143*x144)));

	if (t25 != 335) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = 42U;
	uint32_t x146 = 3U;
	int8_t x147 = INT8_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t26 = 12877;

	t26 = (x145|(x146<(x147*x148)));

	if (t26 != 43) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x150 = INT8_MIN;
	int32_t x151 = -1;
	int16_t x152 = INT16_MIN;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x149|(x150<(x151*x152)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x162 = 55;
	volatile int16_t x163 = INT16_MIN;
	volatile int64_t t28 = -27208312135930LL;

	t28 = (x161|(x162<(x163*x164)));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = INT16_MAX;
	int8_t x167 = -1;
	int16_t x168 = INT16_MAX;

	t29 = (x165|(x166<(x167*x168)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = -1;
	uint32_t x175 = 1587953995U;
	static int32_t t30 = -5890;

	t30 = (x173|(x174<(x175*x176)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t t31 = INT64_MAX;

	t31 = (x177|(x178<(x179*x180)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x181 = UINT16_MAX;
	volatile uint8_t x182 = 0U;
	uint32_t x183 = 1919U;
	int32_t x184 = -998797;
	static volatile int32_t t32 = 1;

	t32 = (x181|(x182<(x183*x184)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x187 = 1U;
	volatile int64_t x188 = 78127400488945LL;
	int32_t t33 = 179155789;

	t33 = (x185|(x186<(x187*x188)));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = -1058509116722LL;
	int8_t x190 = INT8_MAX;
	uint64_t x192 = 5629902295LLU;
	volatile int64_t t34 = -3253175098595500204LL;

	t34 = (x189|(x190<(x191*x192)));

	if (t34 != -1058509116721LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x194 = INT16_MIN;
	volatile int8_t x195 = -1;
	static uint16_t x196 = 15075U;
	volatile uint32_t t35 = 332U;

	t35 = (x193|(x194<(x195*x196)));

	if (t35 != 184583U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = -1;
	static int8_t x198 = INT8_MIN;
	uint32_t x199 = 30U;
	int8_t x200 = -1;
	static volatile int32_t t36 = -13310;

	t36 = (x197|(x198<(x199*x200)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = INT16_MAX;
	int16_t x203 = INT16_MIN;
	int8_t x204 = -1;
	int32_t t37 = 0;

	t37 = (x201|(x202<(x203*x204)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x205 = 198U;
	uint64_t x207 = 2813247791LLU;
	static int32_t t38 = -520035201;

	t38 = (x205|(x206<(x207*x208)));

	if (t38 != 198) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x213 = 1569127333LLU;
	int8_t x215 = -1;
	uint32_t x216 = 980119U;
	volatile uint64_t t39 = 1029532749824968LLU;

	t39 = (x213|(x214<(x215*x216)));

	if (t39 != 1569127333LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x217 = INT8_MIN;
	static volatile uint64_t x220 = 451LLU;
	volatile int32_t t40 = 349696;

	t40 = (x217|(x218<(x219*x220)));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	int16_t x224 = 0;
	static volatile int32_t t41 = 1488366;

	t41 = (x221|(x222<(x223*x224)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = -9;
	static int16_t x227 = INT16_MAX;
	static int16_t x228 = 5;
	uint32_t t42 = UINT32_MAX;

	t42 = (x225|(x226<(x227*x228)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x233 = -1LL;
	int8_t x234 = 10;
	volatile int8_t x235 = INT8_MAX;
	static int64_t t43 = -2541621817690992LL;

	t43 = (x233|(x234<(x235*x236)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x237 = -536;
	volatile uint16_t x238 = 94U;
	static uint16_t x239 = 3U;
	uint64_t x240 = 1842917069LLU;
	int32_t t44 = 7367;

	t44 = (x237|(x238<(x239*x240)));

	if (t44 != -535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x241 = UINT16_MAX;
	volatile int8_t x243 = INT8_MIN;
	int32_t t45 = -381;

	t45 = (x241|(x242<(x243*x244)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x246 = 12U;
	int32_t x247 = INT32_MAX;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (x245|(x246<(x247*x248)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x249 = -1;
	static int8_t x250 = 15;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 2U;
	volatile int32_t t47 = -1422141;

	t47 = (x249|(x250<(x251*x252)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = -280094;
	static volatile uint64_t x254 = 87304639885014183LLU;
	volatile int32_t t48 = 4066;

	t48 = (x253|(x254<(x255*x256)));

	if (t48 != -280094) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x261 = 11005LLU;
	int64_t x262 = INT64_MAX;
	volatile int64_t x263 = 504245330250LL;
	static int16_t x264 = INT16_MAX;
	static uint64_t t49 = 5350446226683LLU;

	t49 = (x261|(x262<(x263*x264)));

	if (t49 != 11005LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = 1195LL;
	volatile uint64_t x271 = 335036582121920049LLU;
	volatile int64_t t50 = 3282498352LL;

	t50 = (x269|(x270<(x271*x272)));

	if (t50 != 1195LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x273 = 3U;
	static int16_t x275 = INT16_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t51 = 0;

	t51 = (x273|(x274<(x275*x276)));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x278 = 6627637U;
	int16_t x279 = -525;
	int32_t x280 = 375207;

	t52 = (x277|(x278<(x279*x280)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 17LLU;
	volatile int32_t t53 = -327691981;

	t53 = (x281|(x282<(x283*x284)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x285 = 546286023161538402LLU;
	int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = 966691086U;
	uint32_t x288 = UINT32_MAX;
	volatile uint64_t t54 = 0LLU;

	t54 = (x285|(x286<(x287*x288)));

	if (t54 != 546286023161538403LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x293 = INT32_MIN;
	volatile int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = 396LLU;
	volatile int32_t t55 = INT32_MIN;

	t55 = (x293|(x294<(x295*x296)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x305 = -26446835;
	volatile uint8_t x306 = 2U;
	static uint8_t x307 = 10U;
	int32_t t56 = -28;

	t56 = (x305|(x306<(x307*x308)));

	if (t56 != -26446835) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x309 = 21LLU;
	int32_t x310 = INT32_MAX;
	uint64_t x311 = 30588381464LLU;
	int64_t x312 = INT64_MAX;
	volatile uint64_t t57 = 41447821818LLU;

	t57 = (x309|(x310<(x311*x312)));

	if (t57 != 21LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x313 = 1978U;
	int32_t x314 = INT32_MAX;
	int16_t x315 = 3;
	int64_t x316 = -1LL;
	int32_t t58 = -6;

	t58 = (x313|(x314<(x315*x316)));

	if (t58 != 1978) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x317 = 5430U;
	volatile uint8_t x318 = UINT8_MAX;
	uint32_t x319 = UINT32_MAX;
	static uint16_t x320 = UINT16_MAX;
	volatile int32_t t59 = -927806116;

	t59 = (x317|(x318<(x319*x320)));

	if (t59 != 5431) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x321 = INT32_MIN;
	volatile int64_t x322 = INT64_MIN;
	int64_t x323 = 1LL;
	uint64_t x324 = 209971786LLU;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x321|(x322<(x323*x324)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x325 = 1;
	volatile int32_t x326 = INT32_MAX;
	volatile int16_t x327 = 6;
	int32_t x328 = 0;
	int32_t t61 = -1734;

	t61 = (x325|(x326<(x327*x328)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x333 = 5;
	volatile int16_t x334 = INT16_MAX;
	static uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;
	static int32_t t62 = -7105;

	t62 = (x333|(x334<(x335*x336)));

	if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x341 = INT64_MIN;
	static int64_t x342 = -1LL;
	uint64_t x343 = 161404098LLU;
	static volatile int8_t x344 = -1;

	t63 = (x341|(x342<(x343*x344)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x349 = 27U;
	static uint16_t x350 = 6U;
	int32_t x351 = INT32_MAX;
	int16_t x352 = -1;

	t64 = (x349|(x350<(x351*x352)));

	if (t64 != 27) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x353 = 9328U;
	int32_t x354 = INT32_MAX;
	volatile int64_t x355 = 19224564074433LL;
	int32_t x356 = -1;
	int32_t t65 = -1275079;

	t65 = (x353|(x354<(x355*x356)));

	if (t65 != 9328) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x357 = -14134;
	static int32_t x358 = -1;
	volatile int32_t x360 = 1970;
	static volatile int32_t t66 = -19;

	t66 = (x357|(x358<(x359*x360)));

	if (t66 != -14134) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x365 = -23;
	int8_t x366 = INT8_MIN;
	int64_t x367 = -2LL;
	int16_t x368 = -12;
	static int32_t t67 = 24;

	t67 = (x365|(x366<(x367*x368)));

	if (t67 != -23) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x373 = UINT32_MAX;
	static uint8_t x374 = 0U;
	int16_t x375 = INT16_MAX;
	volatile int8_t x376 = -1;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (x373|(x374<(x375*x376)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = 10510683485284LL;
	uint64_t x378 = UINT64_MAX;
	uint8_t x379 = 70U;
	static int64_t x380 = -14254251382LL;
	volatile int64_t t69 = 635517974LL;

	t69 = (x377|(x378<(x379*x380)));

	if (t69 != 10510683485284LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x394 = 1U;
	int16_t x395 = -1;
	int16_t x396 = INT16_MIN;
	static int64_t t70 = -7334LL;

	t70 = (x393|(x394<(x395*x396)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x398 = INT16_MIN;
	static uint64_t x399 = 935308261345491LLU;
	int64_t x400 = -43200LL;
	uint64_t t71 = 189916583412485LLU;

	t71 = (x397|(x398<(x399*x400)));

	if (t71 != 2364989280888305778LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x401 = INT8_MAX;
	volatile int16_t x403 = -1;
	static int8_t x404 = 3;
	volatile int32_t t72 = -43;

	t72 = (x401|(x402<(x403*x404)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x405 = INT32_MAX;
	volatile int32_t x407 = INT32_MIN;
	int8_t x408 = 0;
	volatile int32_t t73 = INT32_MAX;

	t73 = (x405|(x406<(x407*x408)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x409 = -20;
	int32_t x411 = -9518920;
	volatile uint64_t x412 = UINT64_MAX;
	volatile int32_t t74 = 921420981;

	t74 = (x409|(x410<(x411*x412)));

	if (t74 != -20) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x413 = -1892283;
	uint8_t x415 = 1U;
	uint16_t x416 = UINT16_MAX;

	t75 = (x413|(x414<(x415*x416)));

	if (t75 != -1892283) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	static uint8_t x420 = 7U;
	volatile int32_t t76 = 216216;

	t76 = (x417|(x418<(x419*x420)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x421 = UINT16_MAX;
	static int16_t x423 = INT16_MIN;
	int64_t x424 = 51006582505303LL;
	static volatile int32_t t77 = -1183958;

	t77 = (x421|(x422<(x423*x424)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x429 = -112;
	static volatile uint8_t x430 = 1U;
	uint64_t x432 = 1444090142612660791LLU;

	t78 = (x429|(x430<(x431*x432)));

	if (t78 != -111) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = -5405;
	volatile int32_t x434 = 66794;
	volatile uint32_t x435 = 15039217U;
	uint64_t x436 = 5831LLU;

	t79 = (x433|(x434<(x435*x436)));

	if (t79 != -5405) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x438 = INT64_MAX;
	int16_t x439 = 127;
	static uint32_t t80 = 2U;

	t80 = (x437|(x438<(x439*x440)));

	if (t80 != 27642U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x442 = 834001130U;
	volatile int8_t x443 = 0;
	uint64_t x444 = 2066644885LLU;
	int32_t t81 = 523323;

	t81 = (x441|(x442<(x443*x444)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x445 = UINT8_MAX;
	int32_t x446 = INT32_MIN;
	int16_t x447 = -1;
	uint32_t x448 = UINT32_MAX;
	int32_t t82 = 0;

	t82 = (x445|(x446<(x447*x448)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x449 = INT64_MAX;
	volatile int32_t x450 = INT32_MIN;
	int16_t x451 = INT16_MIN;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x449|(x450<(x451*x452)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x453 = 12U;
	uint8_t x455 = 3U;
	static volatile int8_t x456 = -1;
	static volatile int32_t t84 = 23;

	t84 = (x453|(x454<(x455*x456)));

	if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x461 = INT8_MIN;
	volatile int8_t x462 = INT8_MIN;
	int64_t x463 = -268344037478196709LL;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t85 = -695586320;

	t85 = (x461|(x462<(x463*x464)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x465 = 90880LLU;
	static uint64_t x466 = UINT64_MAX;
	int32_t x467 = -1;

	t86 = (x465|(x466<(x467*x468)));

	if (t86 != 90880LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x469 = INT8_MIN;
	uint64_t x470 = UINT64_MAX;
	int32_t x471 = INT32_MIN;
	int16_t x472 = 0;
	static int32_t t87 = -124;

	t87 = (x469|(x470<(x471*x472)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x473 = INT16_MAX;
	int32_t x474 = 840943;
	static int8_t x475 = INT8_MIN;
	int16_t x476 = -1;

	t88 = (x473|(x474<(x475*x476)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x477 = UINT8_MAX;
	uint16_t x478 = UINT16_MAX;
	volatile uint32_t x479 = UINT32_MAX;
	static uint8_t x480 = 15U;
	volatile int32_t t89 = -478205768;

	t89 = (x477|(x478<(x479*x480)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x485 = -1;
	uint16_t x486 = UINT16_MAX;
	int8_t x488 = -3;
	int32_t t90 = 319002;

	t90 = (x485|(x486<(x487*x488)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x498 = 3U;
	uint32_t x500 = 0U;
	uint32_t t91 = 49753837U;

	t91 = (x497|(x498<(x499*x500)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x501 = UINT16_MAX;
	int16_t x502 = INT16_MIN;
	volatile int16_t x503 = 1;
	volatile int32_t t92 = -6;

	t92 = (x501|(x502<(x503*x504)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x505 = INT32_MAX;
	uint64_t x506 = 28265358LLU;
	int8_t x507 = -12;
	int32_t t93 = INT32_MAX;

	t93 = (x505|(x506<(x507*x508)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x513 = -3LL;
	int32_t x516 = -1;

	t94 = (x513|(x514<(x515*x516)));

	if (t94 != -3LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x517 = 54U;
	int8_t x518 = INT8_MAX;
	int64_t x519 = -1LL;

	t95 = (x517|(x518<(x519*x520)));

	if (t95 != 55) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x521 = INT32_MIN;
	volatile int16_t x522 = -68;
	static uint8_t x523 = 34U;
	int8_t x524 = INT8_MAX;

	t96 = (x521|(x522<(x523*x524)));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x533 = UINT8_MAX;
	int64_t x534 = INT64_MAX;
	uint64_t x535 = UINT64_MAX;
	int8_t x536 = INT8_MAX;
	static int32_t t97 = 19;

	t97 = (x533|(x534<(x535*x536)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x537 = 15U;
	volatile uint32_t x538 = 133759585U;
	static int32_t x539 = INT32_MIN;
	uint8_t x540 = 0U;
	int32_t t98 = -36277;

	t98 = (x537|(x538<(x539*x540)));

	if (t98 != 15) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = INT16_MIN;
	int16_t x546 = 6;
	static uint16_t x548 = 62U;
	int32_t t99 = 21052820;

	t99 = (x545|(x546<(x547*x548)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

