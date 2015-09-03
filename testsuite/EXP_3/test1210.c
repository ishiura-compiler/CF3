#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 29366340712212LLU;
int32_t x15 = -1;
volatile int32_t t4 = 607424786;
int32_t x40 = INT32_MAX;
int32_t t7 = 44;
uint16_t x41 = UINT16_MAX;
int16_t x45 = INT16_MIN;
volatile int32_t x56 = -18046113;
int8_t x76 = INT8_MIN;
volatile uint32_t t14 = UINT32_MAX;
volatile int16_t x79 = INT16_MIN;
int32_t x85 = -1;
uint32_t x101 = 0U;
volatile int8_t x102 = -1;
uint16_t x110 = 0U;
int32_t t21 = -3;
int16_t x115 = -1;
int64_t t22 = 7309083LL;
uint32_t t23 = 972251U;
uint32_t x124 = 5262U;
uint32_t t24 = 0U;
int16_t x139 = 1893;
uint32_t t25 = 2U;
volatile uint8_t x151 = 0U;
volatile uint8_t x153 = 84U;
int32_t x157 = -1852830;
uint32_t x159 = UINT32_MAX;
int64_t x165 = -164LL;
uint32_t x166 = UINT32_MAX;
int8_t x178 = 1;
static uint16_t x179 = UINT16_MAX;
uint64_t t34 = 59489805078LLU;
static uint16_t x191 = UINT16_MAX;
volatile int32_t t35 = 29509007;
volatile uint8_t x197 = 1U;
int32_t x206 = -6684987;
static volatile uint8_t x209 = UINT8_MAX;
uint8_t x210 = UINT8_MAX;
volatile int32_t t39 = -54;
volatile uint16_t x233 = 7021U;
volatile int64_t t41 = 9LL;
static volatile int64_t t43 = -1LL;
uint64_t x246 = 2445800LLU;
volatile uint32_t t45 = 3418824U;
volatile int32_t t52 = -91219;
int64_t x292 = INT64_MIN;
static int32_t t55 = -51890;
uint16_t x301 = 48U;
static int8_t x313 = -1;
static volatile uint32_t t60 = 472546U;
uint16_t x338 = 21864U;
uint32_t x347 = UINT32_MAX;
uint32_t x353 = UINT32_MAX;
volatile int16_t x354 = 11;
int32_t x356 = -1;
int8_t x359 = 0;
int32_t x364 = -1;
int8_t x365 = INT8_MAX;
int16_t x366 = -6;
uint16_t x373 = 2645U;
uint64_t x399 = UINT64_MAX;
volatile int64_t x400 = INT64_MAX;
static volatile uint64_t t75 = 7415695LLU;
static int8_t x414 = INT8_MAX;
int64_t x428 = INT64_MAX;
uint8_t x433 = 15U;
uint64_t t81 = 2704194057LLU;
int32_t x444 = -2;
volatile int32_t t82 = 1185;
static uint8_t x453 = 18U;
uint64_t x454 = 57LLU;
static volatile int32_t t85 = -62825312;
uint8_t x461 = 3U;
int64_t t87 = 93738123454125187LL;
volatile uint16_t x478 = 18390U;
uint16_t x481 = 16649U;
int32_t x483 = INT32_MIN;
volatile int64_t t89 = -22105966877037043LL;
static uint16_t x486 = 1U;
int32_t x489 = INT32_MIN;
int32_t x491 = -1;
uint64_t x496 = 35214219115967199LLU;
uint32_t x498 = 617011209U;
uint8_t x500 = UINT8_MAX;
int16_t x513 = -101;
uint32_t x515 = 39481425U;
uint32_t x516 = 38651U;
static int32_t t96 = 484374578;
int16_t x523 = INT16_MAX;
int64_t x524 = -1077231524709385047LL;
static int8_t x546 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile uint16_t x2 = 15U;
	uint32_t x3 = 5008U;
	static int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 126434;

	t0 = ((x1*x2)+(x3==x4));

	if (t0 != 491505) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 2232812LLU;
	int16_t x10 = -1;
	int64_t x12 = -2133221782LL;
	volatile uint64_t t1 = 488849677228LLU;

	t1 = ((x9*x10)+(x11==x12));

	if (t1 != 18446744073707318804LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 5749;
	volatile uint16_t x14 = UINT16_MAX;
	uint64_t x16 = 23261LLU;
	static volatile int32_t t2 = 3;

	t2 = ((x13*x14)+(x15==x16));

	if (t2 != 376760715) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static int16_t x18 = INT16_MIN;
	volatile uint16_t x19 = 3848U;
	uint8_t x20 = UINT8_MAX;
	int32_t t3 = 352133;

	t3 = ((x17*x18)+(x19==x20));

	if (t3 != 4194304) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 2;
	int8_t x22 = INT8_MAX;
	static int8_t x23 = -1;
	uint8_t x24 = 3U;

	t4 = ((x21*x22)+(x23==x24));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 0;
	int32_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 64U;
	int32_t t5 = -86731;

	t5 = ((x25*x26)+(x27==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	uint64_t x34 = 49447592LLU;
	int64_t x35 = INT64_MAX;
	static volatile int64_t x36 = INT64_MAX;
	static uint64_t t6 = 0LLU;

	t6 = ((x33*x34)+(x35==x36));

	if (t6 != 1620249247065LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x37 = 2;
	int16_t x38 = INT16_MIN;
	int16_t x39 = 892;

	t7 = ((x37*x38)+(x39==x40));

	if (t7 != -65536) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x42 = 6U;
	int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	int32_t t8 = -1611;

	t8 = ((x41*x42)+(x43==x44));

	if (t8 != 393210) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x46 = 1368U;
	int16_t x47 = -1;
	int8_t x48 = INT8_MAX;
	volatile uint32_t t9 = 127654364U;

	t9 = ((x45*x46)+(x47==x48));

	if (t9 != 4250140672U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -505146LL;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MAX;
	volatile int64_t t10 = -3285358839027LL;

	t10 = ((x53*x54)+(x55==x56));

	if (t10 != 64658688LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 83423U;
	int32_t x62 = -235199493;
	uint32_t x63 = 99U;
	static volatile uint8_t x64 = 20U;
	uint32_t t11 = 2788U;

	t11 = ((x61*x62)+(x63==x64));

	if (t11 != 2658270885U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = UINT8_MAX;
	static int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MAX;
	uint32_t x68 = 335182U;
	volatile int32_t t12 = 14300210;

	t12 = ((x65*x66)+(x67==x68));

	if (t12 != -32640) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = 497U;
	int16_t x70 = 0;
	int32_t x71 = 360595382;
	int64_t x72 = INT64_MIN;
	volatile int32_t t13 = -1994139;

	t13 = ((x69*x70)+(x71==x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = 1;
	uint32_t x74 = UINT32_MAX;
	static int32_t x75 = INT32_MIN;

	t14 = ((x73*x74)+(x75==x76));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x77 = 2020351407LL;
	int64_t x78 = 6714LL;
	int32_t x80 = INT32_MIN;
	volatile int64_t t15 = -1LL;

	t15 = ((x77*x78)+(x79==x80));

	if (t15 != 13564639346598LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x86 = 15139325U;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	uint32_t t16 = 56061U;

	t16 = ((x85*x86)+(x87==x88));

	if (t16 != 4279827972U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x93 = -1;
	static volatile int8_t x94 = -1;
	int8_t x95 = -3;
	int32_t x96 = -296;
	static volatile int32_t t17 = -209092;

	t17 = ((x93*x94)+(x95==x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MAX;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MAX;
	volatile uint64_t t18 = 2040357472980LLU;

	t18 = ((x97*x98)+(x99==x100));

	if (t18 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	uint32_t t19 = 659243873U;

	t19 = ((x101*x102)+(x103==x104));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	static int16_t x107 = INT16_MIN;
	int16_t x108 = 217;
	static volatile uint32_t t20 = 3547564U;

	t20 = ((x105*x106)+(x107==x108));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = -9889;
	uint16_t x111 = 12817U;
	uint8_t x112 = UINT8_MAX;

	t21 = ((x109*x110)+(x111==x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = 22878;
	int64_t x114 = -1LL;
	uint32_t x116 = UINT32_MAX;

	t22 = ((x113*x114)+(x115==x116));

	if (t22 != -22877LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MAX;
	static uint32_t x118 = 159203023U;
	uint64_t x119 = 22LLU;
	uint32_t x120 = 46U;

	t23 = ((x117*x118)+(x119==x120));

	if (t23 != 3038914737U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x121 = 481241;
	static uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MIN;

	t24 = ((x121*x122)+(x123==x124));

	if (t24 != 4294486055U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = 19465721U;
	uint32_t x138 = 5617U;
	volatile uint16_t x140 = UINT16_MAX;

	t25 = ((x137*x138)+(x139==x140));

	if (t25 != 1964772457U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x149 = UINT16_MAX;
	static uint16_t x150 = 1U;
	volatile int64_t x152 = INT64_MIN;
	volatile int32_t t26 = 20203;

	t26 = ((x149*x150)+(x151==x152));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x154 = 15U;
	volatile int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;
	int32_t t27 = 190413;

	t27 = ((x153*x154)+(x155==x156));

	if (t27 != 1260) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x158 = INT8_MIN;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t28 = -261;

	t28 = ((x157*x158)+(x159==x160));

	if (t28 != 237162240) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x161 = INT64_MIN;
	uint64_t x162 = UINT64_MAX;
	uint32_t x163 = 28656186U;
	int16_t x164 = -204;
	uint64_t t29 = 91321243434132LLU;

	t29 = ((x161*x162)+(x163==x164));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x167 = 9963;
	int8_t x168 = -1;
	int64_t t30 = 9LL;

	t30 = ((x165*x166)+(x167==x168));

	if (t30 != -704374636380LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = 0;
	uint32_t x170 = 800376861U;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MAX;
	uint32_t t31 = 1616U;

	t31 = ((x169*x170)+(x171==x172));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x173 = -1;
	int8_t x174 = 0;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MAX;
	int32_t t32 = -421;

	t32 = ((x173*x174)+(x175==x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = 899848;
	volatile int8_t x180 = 5;
	static int32_t t33 = 6;

	t33 = ((x177*x178)+(x179==x180));

	if (t33 != 899848) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x185 = 52617059LLU;
	int32_t x186 = INT32_MAX;
	uint8_t x187 = 49U;
	volatile int32_t x188 = 58843;

	t34 = ((x185*x186)+(x187==x188));

	if (t34 != 112994273755734173LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = 1011U;
	int16_t x190 = INT16_MIN;
	int16_t x192 = INT16_MIN;

	t35 = ((x189*x190)+(x191==x192));

	if (t35 != -33128448) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x193 = -1;
	uint64_t x194 = 17639416405040LLU;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = 1;
	static volatile uint64_t t36 = 3897537559LLU;

	t36 = ((x193*x194)+(x195==x196));

	if (t36 != 18446726434293146576LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x198 = 0U;
	static int32_t x199 = INT32_MIN;
	volatile int16_t x200 = 1;
	volatile int32_t t37 = 0;

	t37 = ((x197*x198)+(x199==x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x205 = 8188518LLU;
	static uint32_t x207 = 19326U;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t38 = 2817184009355182LLU;

	t38 = ((x205*x206)+(x207==x208));

	if (t38 != 18446689333573172350LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x211 = INT8_MIN;
	uint64_t x212 = 361646LLU;

	t39 = ((x209*x210)+(x211==x212));

	if (t39 != 65025) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x229 = 4616LLU;
	static int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MAX;
	static uint8_t x232 = UINT8_MAX;
	static volatile uint64_t t40 = 797285LLU;

	t40 = ((x229*x230)+(x231==x232));

	if (t40 != 18446744073558294528LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	static volatile int8_t x236 = INT8_MIN;

	t41 = ((x233*x234)+(x235==x236));

	if (t41 != -7020LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x237 = -1527LL;
	volatile int32_t x238 = 906;
	static int64_t x239 = 463325256LL;
	int8_t x240 = INT8_MIN;
	static volatile int64_t t42 = -265891829094LL;

	t42 = ((x237*x238)+(x239==x240));

	if (t42 != -1383462LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x241 = 25828U;
	volatile int64_t x242 = -1LL;
	volatile int8_t x243 = -35;
	uint8_t x244 = 47U;

	t43 = ((x241*x242)+(x243==x244));

	if (t43 != -25828LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x245 = INT64_MIN;
	int16_t x247 = -1788;
	volatile uint64_t x248 = 787LLU;
	uint64_t t44 = 111405637LLU;

	t44 = ((x245*x246)+(x247==x248));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x253 = 1U;
	int16_t x254 = INT16_MAX;
	static uint32_t x255 = 23172533U;
	uint16_t x256 = 121U;

	t45 = ((x253*x254)+(x255==x256));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x257 = -1;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 19LLU;
	static uint64_t x260 = 85048LLU;
	volatile int32_t t46 = 2932;

	t46 = ((x257*x258)+(x259==x260));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = -4820;
	static int16_t x263 = INT16_MAX;
	int64_t x264 = 260532LL;
	volatile int32_t t47 = 22682;

	t47 = ((x261*x262)+(x263==x264));

	if (t47 != 616960) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x265 = 685429666453834434LLU;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 22;
	volatile uint16_t x268 = 6213U;
	uint64_t t48 = 6860582097LLU;

	t48 = ((x265*x266)+(x267==x268));

	if (t48 != 7974971418987134976LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x269 = 135847337LL;
	uint8_t x270 = UINT8_MAX;
	volatile uint8_t x271 = 16U;
	int8_t x272 = 3;
	volatile int64_t t49 = 77LL;

	t49 = ((x269*x270)+(x271==x272));

	if (t49 != 34641070935LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = -1;
	volatile int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 51944909LLU;
	volatile int32_t t50 = 470371;

	t50 = ((x273*x274)+(x275==x276));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x277 = UINT16_MAX;
	static int8_t x278 = INT8_MIN;
	volatile uint64_t x279 = 5653606596142LLU;
	volatile int64_t x280 = 135151917LL;
	int32_t t51 = 214879;

	t51 = ((x277*x278)+(x279==x280));

	if (t51 != -8388480) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x281 = 1U;
	uint8_t x282 = 24U;
	int8_t x283 = -1;
	int16_t x284 = INT16_MIN;

	t52 = ((x281*x282)+(x283==x284));

	if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = INT8_MAX;
	int16_t x286 = -1;
	int16_t x287 = INT16_MAX;
	int32_t x288 = -1;
	int32_t t53 = 808;

	t53 = ((x285*x286)+(x287==x288));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x289 = -14;
	volatile uint8_t x290 = UINT8_MAX;
	volatile int16_t x291 = -811;
	int32_t t54 = -90646;

	t54 = ((x289*x290)+(x291==x292));

	if (t54 != -3570) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	volatile uint16_t x295 = 1329U;
	uint32_t x296 = 96753U;

	t55 = ((x293*x294)+(x295==x296));

	if (t55 != 1073741824) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = 69327445178583180LL;
	volatile uint8_t x298 = 27U;
	uint32_t x299 = 51904U;
	int64_t x300 = -110LL;
	int64_t t56 = -6965LL;

	t56 = ((x297*x298)+(x299==x300));

	if (t56 != 1871841019821745860LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x302 = 3U;
	static int32_t x303 = INT32_MAX;
	static volatile uint8_t x304 = UINT8_MAX;
	static volatile int32_t t57 = -21410258;

	t57 = ((x301*x302)+(x303==x304));

	if (t57 != 144) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = 2740U;
	uint32_t x306 = 35244U;
	static int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MAX;
	static volatile uint32_t t58 = 2890513U;

	t58 = ((x305*x306)+(x307==x308));

	if (t58 != 96568560U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x314 = 0;
	volatile int16_t x315 = 1;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t59 = -6876649;

	t59 = ((x313*x314)+(x315==x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x317 = UINT32_MAX;
	volatile uint8_t x318 = UINT8_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	int64_t x320 = -1LL;

	t60 = ((x317*x318)+(x319==x320));

	if (t60 != 4294967041U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = INT8_MIN;
	static uint32_t x330 = UINT32_MAX;
	static volatile int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	volatile uint32_t t61 = 6489769U;

	t61 = ((x329*x330)+(x331==x332));

	if (t61 != 128U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x337 = -83;
	int64_t x339 = 2689105488LL;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t62 = -19785;

	t62 = ((x337*x338)+(x339==x340));

	if (t62 != -1814712) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MAX;
	uint32_t x343 = 27U;
	static int8_t x344 = -1;
	uint32_t t63 = 230530U;

	t63 = ((x341*x342)+(x343==x344));

	if (t63 != 2147483649U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	int32_t x348 = INT32_MIN;
	int32_t t64 = 1;

	t64 = ((x345*x346)+(x347==x348));

	if (t64 != 4194304) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x349 = -387750511762880LL;
	uint32_t x350 = 408U;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MAX;
	int64_t t65 = 15779423140989295LL;

	t65 = ((x349*x350)+(x351==x352));

	if (t65 != -158202208799255040LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x355 = 36LL;
	static volatile uint32_t t66 = 0U;

	t66 = ((x353*x354)+(x355==x356));

	if (t66 != 4294967285U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x357 = UINT32_MAX;
	volatile int32_t x358 = -99;
	int8_t x360 = -1;
	uint32_t t67 = 59867U;

	t67 = ((x357*x358)+(x359==x360));

	if (t67 != 99U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x361 = 1;
	static volatile int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MAX;
	int32_t t68 = INT32_MAX;

	t68 = ((x361*x362)+(x363==x364));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x367 = INT64_MIN;
	int8_t x368 = -1;
	int32_t t69 = -1;

	t69 = ((x365*x366)+(x367==x368));

	if (t69 != -762) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = 32514948465202LLU;
	static int8_t x371 = -1;
	int8_t x372 = INT8_MAX;
	static volatile uint64_t t70 = 35357213LLU;

	t70 = ((x369*x370)+(x371==x372));

	if (t70 != 14052918480370401280LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x374 = -1LL;
	int16_t x375 = -1225;
	uint32_t x376 = 29022315U;
	static volatile int64_t t71 = -44356106783LL;

	t71 = ((x373*x374)+(x375==x376));

	if (t71 != -2645LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 15560100704382LLU;
	volatile int32_t x379 = INT32_MAX;
	volatile uint16_t x380 = UINT16_MAX;
	uint64_t t72 = 352LLU;

	t72 = ((x377*x378)+(x379==x380));

	if (t72 != 18446728513608847234LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x397 = 14U;
	static volatile int8_t x398 = -29;
	volatile int32_t t73 = 4616;

	t73 = ((x397*x398)+(x399==x400));

	if (t73 != -406) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x401 = 27253633;
	uint32_t x402 = 2211U;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MAX;
	static volatile uint32_t t74 = 73U;

	t74 = ((x401*x402)+(x403==x404));

	if (t74 != 128240419U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x409 = 34786964587107LLU;
	int16_t x410 = INT16_MAX;
	int8_t x411 = -1;
	int16_t x412 = INT16_MIN;

	t75 = ((x409*x410)+(x411==x412));

	if (t75 != 1139864468625735069LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x413 = INT8_MIN;
	int32_t x415 = INT32_MIN;
	static uint16_t x416 = 41U;
	int32_t t76 = 6309027;

	t76 = ((x413*x414)+(x415==x416));

	if (t76 != -16256) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x421 = -1;
	int32_t x422 = INT32_MAX;
	int8_t x423 = -5;
	static uint8_t x424 = 11U;
	int32_t t77 = 925;

	t77 = ((x421*x422)+(x423==x424));

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x425 = -1;
	uint8_t x426 = 115U;
	uint32_t x427 = 938163024U;
	volatile int32_t t78 = 1;

	t78 = ((x425*x426)+(x427==x428));

	if (t78 != -115) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = 0;
	int16_t x431 = -4976;
	uint16_t x432 = 49U;
	int64_t t79 = -53804449609297621LL;

	t79 = ((x429*x430)+(x431==x432));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x434 = -12;
	static uint8_t x435 = 22U;
	uint16_t x436 = 7U;
	int32_t t80 = -16755;

	t80 = ((x433*x434)+(x435==x436));

	if (t80 != -180) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x437 = INT64_MAX;
	uint64_t x438 = 5LLU;
	volatile int8_t x439 = INT8_MIN;
	volatile int64_t x440 = INT64_MIN;

	t81 = ((x437*x438)+(x439==x440));

	if (t81 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x441 = INT8_MIN;
	int8_t x442 = -1;
	uint8_t x443 = 31U;

	t82 = ((x441*x442)+(x443==x444));

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x445 = INT8_MAX;
	uint32_t x446 = 3072294U;
	int64_t x447 = INT64_MAX;
	uint64_t x448 = 138032785LLU;
	volatile uint32_t t83 = 0U;

	t83 = ((x445*x446)+(x447==x448));

	if (t83 != 390181338U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x455 = INT8_MIN;
	static uint16_t x456 = UINT16_MAX;
	uint64_t t84 = 5857128114619LLU;

	t84 = ((x453*x454)+(x455==x456));

	if (t84 != 1026LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x457 = -1;
	static int16_t x458 = 247;
	int16_t x459 = INT16_MIN;
	int32_t x460 = INT32_MIN;

	t85 = ((x457*x458)+(x459==x460));

	if (t85 != -247) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x462 = UINT16_MAX;
	static int16_t x463 = INT16_MIN;
	static volatile int64_t x464 = INT64_MIN;
	int32_t t86 = 267264045;

	t86 = ((x461*x462)+(x463==x464));

	if (t86 != 196605) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x473 = 5691;
	volatile int64_t x474 = -582289LL;
	static int16_t x475 = -1;
	int32_t x476 = INT32_MAX;

	t87 = ((x473*x474)+(x475==x476));

	if (t87 != -3313806699LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x477 = INT8_MIN;
	uint64_t x479 = 201539767682LLU;
	int64_t x480 = 1LL;
	volatile int32_t t88 = 25;

	t88 = ((x477*x478)+(x479==x480));

	if (t88 != -2353920) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x482 = 332040LL;
	int16_t x484 = INT16_MAX;

	t89 = ((x481*x482)+(x483==x484));

	if (t89 != 5528133960LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x485 = INT16_MAX;
	int64_t x487 = INT64_MAX;
	volatile uint8_t x488 = 2U;
	int32_t t90 = 52717346;

	t90 = ((x485*x486)+(x487==x488));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x490 = 4697667608055343LLU;
	int64_t x492 = INT64_MIN;
	uint64_t t91 = 133589406380307129LLU;

	t91 = ((x489*x490)+(x491==x492));

	if (t91 != 9473736231125778432LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x493 = -1;
	int32_t x494 = INT32_MAX;
	volatile uint16_t x495 = 3U;
	static volatile int32_t t92 = -1775545;

	t92 = ((x493*x494)+(x495==x496));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x497 = -1;
	uint32_t x499 = 679544597U;
	uint32_t t93 = 4U;

	t93 = ((x497*x498)+(x499==x500));

	if (t93 != 3677956087U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 5295U;
	int8_t x502 = INT8_MIN;
	int16_t x503 = -3395;
	static volatile uint16_t x504 = 27903U;
	uint32_t t94 = 89U;

	t94 = ((x501*x502)+(x503==x504));

	if (t94 != 4294289536U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x505 = 3542621587170984750LLU;
	uint32_t x506 = 52U;
	int32_t x507 = -1;
	int8_t x508 = 0;
	static volatile uint64_t t95 = 20607LLU;

	t95 = ((x505*x506)+(x507==x508));

	if (t95 != 18195625869505242456LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x514 = INT8_MIN;

	t96 = ((x513*x514)+(x515==x516));

	if (t96 != 12928) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x521 = -1;
	int8_t x522 = -1;
	volatile int32_t t97 = -3863;

	t97 = ((x521*x522)+(x523==x524));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x541 = 888533118983661LL;
	int8_t x542 = 15;
	int16_t x543 = 103;
	int32_t x544 = -3;
	volatile int64_t t98 = -1010861501772581LL;

	t98 = ((x541*x542)+(x543==x544));

	if (t98 != 13327996784754915LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = -433;
	int32_t x547 = -6;
	static int8_t x548 = -1;
	volatile int32_t t99 = 1;

	t99 = ((x545*x546)+(x547==x548));

	if (t99 != 55424) { NG(); } else { ; }
	
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

