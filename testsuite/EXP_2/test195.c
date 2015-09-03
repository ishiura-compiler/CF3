#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 10U;
static uint64_t x5 = 334339637283167LLU;
uint16_t x8 = 101U;
int32_t t3 = 1390846;
int8_t x29 = INT8_MAX;
uint64_t t4 = 408645611715986246LLU;
static volatile int64_t t5 = -1301660976LL;
static uint64_t t6 = 40LLU;
int32_t x50 = INT32_MIN;
int64_t x51 = INT64_MIN;
static uint32_t x55 = UINT32_MAX;
volatile int64_t t9 = -10LL;
static uint32_t x58 = 123988039U;
int32_t x60 = -1;
static uint64_t t11 = 1494LLU;
int64_t x70 = -8524LL;
int32_t x76 = -35155657;
static volatile uint32_t x77 = UINT32_MAX;
int16_t x79 = INT16_MIN;
int32_t x84 = INT32_MAX;
uint64_t t18 = 3328223447LLU;
uint32_t x99 = 316402047U;
static int16_t x100 = -106;
volatile int64_t x101 = 0LL;
static uint64_t x111 = UINT64_MAX;
int8_t x112 = 39;
uint16_t x117 = 1102U;
uint8_t x118 = UINT8_MAX;
int16_t x119 = -1;
int16_t x121 = -1;
volatile int64_t x131 = -985532963106980LL;
static int64_t t25 = -498367395137615321LL;
uint16_t x135 = 653U;
uint16_t x140 = 24714U;
static int32_t t27 = -30079;
int8_t x142 = -1;
volatile int32_t t28 = 705;
uint8_t x148 = UINT8_MAX;
volatile uint32_t t29 = 5U;
int16_t x156 = 572;
static uint8_t x161 = UINT8_MAX;
volatile int8_t x165 = INT8_MIN;
uint64_t x167 = 49355985737494LLU;
volatile int8_t x183 = 2;
uint32_t t36 = 94U;
static uint32_t x185 = 388946U;
int32_t x187 = INT32_MAX;
uint64_t x194 = UINT64_MAX;
int64_t x201 = -139008367398889LL;
uint64_t x210 = UINT64_MAX;
static int16_t x215 = INT16_MIN;
uint64_t x217 = UINT64_MAX;
static int16_t x219 = -1;
uint16_t x225 = UINT16_MAX;
static volatile uint32_t x229 = UINT32_MAX;
volatile int64_t t48 = 28858165LL;
uint32_t x237 = UINT32_MAX;
static uint8_t x249 = 12U;
uint8_t x266 = 4U;
int16_t x273 = 725;
static int32_t x282 = 45353;
volatile uint32_t t57 = 19U;
static int32_t x291 = INT32_MAX;
static volatile int64_t x292 = INT64_MIN;
volatile int64_t t59 = -102438052937LL;
int32_t x294 = INT32_MAX;
int32_t x301 = -1;
uint32_t x305 = UINT32_MAX;
int32_t x307 = 5348005;
static int64_t t64 = -96LL;
volatile int64_t x313 = -1LL;
int16_t x314 = INT16_MIN;
uint64_t x315 = 69658334400LLU;
uint64_t t65 = 75876036011LLU;
volatile uint32_t t69 = 11U;
volatile uint8_t x338 = 114U;
static int8_t x344 = INT8_MAX;
uint16_t x361 = UINT16_MAX;
volatile int8_t x367 = 12;
static int16_t x371 = INT16_MAX;
uint8_t x374 = UINT8_MAX;
volatile int16_t x384 = INT16_MAX;
uint8_t x394 = 1U;
int64_t x396 = -144237667LL;
static uint8_t x416 = 0U;
uint32_t x427 = 20U;
static uint64_t t84 = 5243LLU;
int16_t x430 = INT16_MAX;
int16_t x432 = INT16_MAX;
uint8_t x444 = 1U;
int32_t x463 = 1;
volatile int32_t t91 = -126618982;
volatile uint64_t t92 = 6256282548774022711LLU;
uint64_t t93 = 439410387LLU;
static volatile uint64_t x477 = 6723939475LLU;
static volatile int64_t x480 = -1LL;
uint64_t t95 = 491LLU;
volatile uint64_t x490 = 228400513LLU;
int16_t x497 = INT16_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 25629U;
	static volatile uint32_t t0 = 4876U;

	t0 = ((x1-(x2-x3))^x4);

	if (t0 != 4294941673U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MIN;
	static volatile uint64_t t1 = 115667LLU;

	t1 = ((x5-(x6-x7))^x8);

	if (t1 != 334337489799429LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 80534784063327LLU;
	static uint32_t x14 = 45402053U;
	static int16_t x15 = 16341;
	static int32_t x16 = INT32_MIN;
	volatile uint64_t t2 = 59540867851995LLU;

	t2 = ((x13-(x14-x15))^x16);

	if (t2 != 18446663540732178287LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 13;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int16_t x20 = -51;

	t3 = ((x17-(x18-x19))^x20);

	if (t3 != 2147483456) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x30 = UINT64_MAX;
	uint32_t x31 = 1282U;
	uint8_t x32 = UINT8_MAX;

	t4 = ((x29-(x30-x31))^x32);

	if (t4 != 1405LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = 11;
	static int32_t x34 = INT32_MIN;
	volatile int64_t x35 = -1LL;
	int16_t x36 = -13840;

	t5 = ((x33-(x34-x35))^x36);

	if (t5 != -2147497478LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x37 = 75048U;
	int32_t x38 = 1331;
	uint64_t x39 = 3999729821457599495LLU;
	uint32_t x40 = UINT32_MAX;

	t6 = ((x37-(x38-x39))^x40);

	if (t6 != 3999729819124929539LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MAX;
	int64_t x47 = 943164235191459LL;
	int32_t x48 = 397505780;
	uint64_t t7 = 42287441497LLU;

	t7 = ((x45-(x46-x47))^x48);

	if (t7 != 943164592676951LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x49 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	volatile int64_t t8 = 41771LL;

	t8 = ((x49-(x50-x51))^x52);

	if (t8 != 9223372034707324800LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x53 = 1LL;
	volatile int8_t x54 = -1;
	static int16_t x56 = 1;

	t9 = ((x53-(x54-x55))^x56);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = 0LL;
	volatile uint64_t x59 = 737926149342LLU;
	uint64_t t10 = 21453377LLU;

	t10 = ((x57-(x58-x59))^x60);

	if (t10 != 18446743335907390312LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = 2180124877972LLU;
	uint8_t x63 = 74U;
	int64_t x64 = 957830649657481LL;

	t11 = ((x61-(x62-x63))^x64);

	if (t11 != 18445786537423463359LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MIN;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = 394526012265788LL;
	volatile int64_t t12 = 25986850472LL;

	t12 = ((x65-(x66-x67))^x68);

	if (t12 != -394526052002749LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x69 = 47513655424882LLU;
	uint32_t x71 = 2099787346U;
	static int16_t x72 = 5220;
	uint64_t t13 = 24096421LLU;

	t13 = ((x69-(x70-x71))^x72);

	if (t13 != 47515755223924LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	static volatile int16_t x74 = INT16_MAX;
	static int8_t x75 = -9;
	volatile int32_t t14 = 33652870;

	t14 = ((x73-(x74-x75))^x76);

	if (t14 != 35188303) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = INT8_MAX;
	static volatile int16_t x80 = INT16_MAX;
	uint32_t t15 = 590U;

	t15 = ((x77-(x78-x79))^x80);

	if (t15 != 4294901887U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = 164766U;
	int16_t x83 = 12674;
	volatile uint32_t t16 = 81U;

	t16 = ((x81-(x82-x83))^x84);

	if (t16 != 2147668507U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x85 = 70128118459922LLU;
	uint16_t x86 = UINT16_MAX;
	uint16_t x87 = 3U;
	uint8_t x88 = 0U;
	uint64_t t17 = 9LLU;

	t17 = ((x85-(x86-x87))^x88);

	if (t17 != 70128118394390LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = -64;
	volatile uint64_t x92 = UINT64_MAX;

	t18 = ((x89-(x90-x91))^x92);

	if (t18 != 9223372039002259519LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MAX;
	static uint32_t t19 = 177406U;

	t19 = ((x97-(x98-x99))^x100);

	if (t19 != 1831114262U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	volatile int8_t x104 = 31;
	int64_t t20 = 2472746935LL;

	t20 = ((x101-(x102-x103))^x104);

	if (t20 != -9223372036854743009LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = 0U;
	volatile int32_t x110 = INT32_MIN;
	static volatile uint64_t t21 = 856932331LLU;

	t21 = ((x109-(x110-x111))^x112);

	if (t21 != 2147483608LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x120 = INT64_MIN;
	static volatile int64_t t22 = -175LL;

	t22 = ((x117-(x118-x119))^x120);

	if (t22 != -9223372036854774962LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t23 = -20;

	t23 = ((x121-(x122-x123))^x124);

	if (t23 != -65282) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 2067208447625635LLU;
	int16_t x126 = -1;
	static volatile uint16_t x127 = 688U;
	uint32_t x128 = 30U;
	volatile uint64_t t24 = 146LLU;

	t24 = ((x125-(x126-x127))^x128);

	if (t24 != 2067208447626314LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = 7;
	uint32_t x130 = 11U;
	int16_t x132 = INT16_MIN;

	t25 = ((x129-(x130-x131))^x132);

	if (t25 != 985532963114840LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x133 = 6U;
	static int8_t x134 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t26 = 164788;

	t26 = ((x133-(x134-x135))^x136);

	if (t26 != -31981) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 1U;
	int16_t x138 = 3;
	static int8_t x139 = INT8_MAX;

	t27 = ((x137-(x138-x139))^x140);

	if (t27 != 24823) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	uint16_t x143 = 2914U;
	int16_t x144 = -1;

	t28 = ((x141-(x142-x143))^x144);

	if (t28 != -2915) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x145 = INT16_MIN;
	uint16_t x146 = 7060U;
	uint32_t x147 = UINT32_MAX;

	t29 = ((x145-(x146-x147))^x148);

	if (t29 != 4294927508U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	uint64_t x151 = 28LLU;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t30 = 1023131851365925891LLU;

	t30 = ((x149-(x150-x151))^x152);

	if (t30 != 65437LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = -123;
	int32_t x155 = -1;
	volatile int32_t t31 = 38258;

	t31 = ((x153-(x154-x155))^x156);

	if (t31 != -570) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t32 = -119753001;

	t32 = ((x161-(x162-x163))^x164);

	if (t32 != 130816) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x166 = 1U;
	volatile int8_t x168 = -1;
	static volatile uint64_t t33 = 1092249421322LLU;

	t33 = ((x165-(x166-x167))^x168);

	if (t33 != 18446694717723814250LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	static uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MAX;
	uint64_t t34 = 4038LLU;

	t34 = ((x169-(x170-x171))^x172);

	if (t34 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 1782919833U;
	volatile int16_t x180 = 114;
	volatile uint32_t t35 = 734858384U;

	t35 = ((x177-(x178-x179))^x180);

	if (t35 != 1782919915U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = 23846351;
	uint32_t x182 = 196U;
	int32_t x184 = INT32_MIN;

	t36 = ((x181-(x182-x183))^x184);

	if (t36 != 2171329805U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x186 = 8155U;
	int32_t x188 = 923409;
	static volatile uint32_t t37 = 175929817U;

	t37 = ((x185-(x186-x187))^x188);

	if (t37 != 2148259943U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x189 = 3979098351646724499LLU;
	uint16_t x190 = 6U;
	int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	uint64_t t38 = 2201224146LLU;

	t38 = ((x189-(x190-x191))^x192);

	if (t38 != 14467645722062859890LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x193 = INT64_MIN;
	uint64_t x195 = 33112046163310093LLU;
	int32_t x196 = INT32_MAX;
	static uint64_t t39 = 448140LLU;

	t39 = ((x193-(x194-x195))^x196);

	if (t39 != 9256484084986038769LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = 7;
	static volatile int32_t x198 = -922834;
	int8_t x199 = -51;
	int64_t x200 = INT64_MAX;
	static int64_t t40 = 3768158LL;

	t40 = ((x197-(x198-x199))^x200);

	if (t40 != 9223372036853853017LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x202 = INT16_MAX;
	int64_t x203 = INT64_MAX;
	uint8_t x204 = 3U;
	static int64_t t41 = 28LL;

	t41 = ((x201-(x202-x203))^x204);

	if (t41 != 9223233028487344148LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = -3LL;
	volatile int16_t x211 = -3;
	static volatile int64_t x212 = INT64_MAX;
	volatile uint64_t t42 = 3LLU;

	t42 = ((x209-(x210-x211))^x212);

	if (t42 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MAX;
	static int32_t x214 = INT32_MIN;
	uint8_t x216 = 15U;
	static int32_t t43 = 41966477;

	t43 = ((x213-(x214-x215))^x216);

	if (t43 != 2147450992) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x218 = UINT32_MAX;
	int16_t x220 = INT16_MAX;
	static uint64_t t44 = 20753051688472106LLU;

	t44 = ((x217-(x218-x219))^x220);

	if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = 21250338718LL;
	static int32_t x222 = INT32_MIN;
	volatile int16_t x223 = INT16_MIN;
	volatile uint32_t x224 = 183963U;
	int64_t t45 = -601611079768LL;

	t45 = ((x221-(x222-x223))^x224);

	if (t45 != 23397867781LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x226 = INT16_MAX;
	int8_t x227 = 10;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t46 = 110LL;

	t46 = ((x225-(x226-x227))^x228);

	if (t46 != -9223372036854743030LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x230 = 213829U;
	int16_t x231 = INT16_MIN;
	volatile int32_t x232 = INT32_MAX;
	uint32_t t47 = 1U;

	t47 = ((x229-(x230-x231))^x232);

	if (t47 != 2147730245U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = INT64_MIN;
	static uint8_t x234 = 4U;
	uint8_t x235 = 90U;
	volatile int32_t x236 = -20331066;

	t48 = ((x233-(x234-x235))^x236);

	if (t48 != 9223372036834444688LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x238 = INT16_MIN;
	static volatile int16_t x239 = 6098;
	static uint16_t x240 = 344U;
	volatile uint32_t t49 = 7U;

	t49 = ((x237-(x238-x239))^x240);

	if (t49 != 38537U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x245 = -1;
	uint64_t x246 = 3724516696LLU;
	static volatile int64_t x247 = INT64_MIN;
	static int8_t x248 = 32;
	static uint64_t t50 = 62748425LLU;

	t50 = ((x245-(x246-x247))^x248);

	if (t50 != 9223372033130259079LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x250 = 1075796177057949771LL;
	uint16_t x251 = 0U;
	int64_t x252 = 655151720637216759LL;
	static volatile int64_t t51 = -327529385LL;

	t51 = ((x249-(x250-x251))^x252);

	if (t51 != -574894947196608458LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 422715U;
	int8_t x254 = INT8_MIN;
	static uint32_t x255 = UINT32_MAX;
	volatile int32_t x256 = -2;
	uint32_t t52 = 885049U;

	t52 = ((x253-(x254-x255))^x256);

	if (t52 != 4294544452U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MAX;
	static int64_t x263 = INT64_MAX;
	int16_t x264 = -1;
	volatile int64_t t53 = INT64_MAX;

	t53 = ((x261-(x262-x263))^x264);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x267 = UINT64_MAX;
	uint64_t x268 = 86520233425467LLU;
	static uint64_t t54 = 1280528854871036LLU;

	t54 = ((x265-(x266-x267))^x268);

	if (t54 != 9223285516621350336LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x270 = 1U;
	uint8_t x271 = 10U;
	uint8_t x272 = 26U;
	static int32_t t55 = 6832;

	t55 = ((x269-(x270-x271))^x272);

	if (t55 != -32749) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x274 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 27U;
	static volatile int32_t t56 = 1;

	t56 = ((x273-(x274-x275))^x276);

	if (t56 != 33743) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x283 = 61U;
	uint32_t x284 = UINT32_MAX;

	t57 = ((x281-(x282-x283))^x284);

	if (t57 != 12524U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x285 = -1;
	int32_t x286 = 3196;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = 20;
	int32_t t58 = -451372;

	t58 = ((x285-(x286-x287))^x288);

	if (t58 != -3050) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x289 = 44;
	int32_t x290 = INT32_MAX;

	t59 = ((x289-(x290-x291))^x292);

	if (t59 != -9223372036854775764LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x295 = 15643;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t60 = 29U;

	t60 = ((x293-(x294-x295))^x296);

	if (t60 != 15643U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x297 = 107862LLU;
	static int64_t x298 = INT64_MIN;
	static uint64_t x299 = UINT64_MAX;
	static volatile int32_t x300 = INT32_MIN;
	volatile uint64_t t61 = 444762313001614LLU;

	t61 = ((x297-(x298-x299))^x300);

	if (t61 != 9223372034707400021LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x302 = INT32_MAX;
	uint64_t x303 = UINT64_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile uint64_t t62 = 465755525095654971LLU;

	t62 = ((x301-(x302-x303))^x304);

	if (t62 != 18446744071562067712LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x306 = INT8_MIN;
	static int32_t x308 = 3;
	volatile uint32_t t63 = 209U;

	t63 = ((x305-(x306-x307))^x308);

	if (t63 != 5348135U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x309 = 0;
	int64_t x310 = 5192087315668LL;
	volatile int32_t x311 = INT32_MIN;
	static int16_t x312 = -975;

	t64 = ((x309-(x310-x311))^x312);

	if (t64 != 5194234799901LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x316 = INT64_MIN;

	t65 = ((x313-(x314-x315))^x316);

	if (t65 != 9223372106513142975LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MIN;
	static uint8_t x319 = 13U;
	int32_t x320 = -1;
	volatile uint32_t t66 = 17U;

	t66 = ((x317-(x318-x319))^x320);

	if (t66 != 4294967155U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x325 = 17U;
	uint64_t x326 = UINT64_MAX;
	volatile uint32_t x327 = UINT32_MAX;
	volatile int32_t x328 = -1;
	static uint64_t t67 = 3565257317LLU;

	t67 = ((x325-(x326-x327))^x328);

	if (t67 != 18446744069414584302LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = INT32_MIN;
	static uint16_t x330 = 61U;
	int64_t x331 = -1LL;
	int64_t x332 = INT64_MIN;
	static int64_t t68 = -1090450LL;

	t68 = ((x329-(x330-x331))^x332);

	if (t68 != 9223372034707292098LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -2;
	uint32_t x334 = 25480360U;
	volatile int16_t x335 = 4036;
	int8_t x336 = 8;

	t69 = ((x333-(x334-x335))^x336);

	if (t69 != 4269490962U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x337 = 408U;
	int8_t x339 = -53;
	int8_t x340 = INT8_MIN;
	volatile int32_t t70 = 5098722;

	t70 = ((x337-(x338-x339))^x340);

	if (t70 != -143) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x341 = 196919773U;
	int8_t x342 = INT8_MIN;
	volatile uint16_t x343 = UINT16_MAX;
	uint32_t t71 = 65482733U;

	t71 = ((x341-(x342-x343))^x344);

	if (t71 != 196985379U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = 0;
	uint8_t x347 = 0U;
	int16_t x348 = -1;
	volatile int32_t t72 = -22388271;

	t72 = ((x345-(x346-x347))^x348);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = -1LL;
	int8_t x364 = 1;
	volatile uint64_t t73 = 868720LLU;

	t73 = ((x361-(x362-x363))^x364);

	if (t73 != 65534LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = 4412488708330514401LL;
	static int32_t x366 = -3;
	int8_t x368 = -1;
	int64_t t74 = 14LL;

	t74 = ((x365-(x366-x367))^x368);

	if (t74 != -4412488708330514417LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x369 = 0;
	volatile int8_t x370 = -1;
	volatile int64_t x372 = INT64_MIN;
	int64_t t75 = -1LL;

	t75 = ((x369-(x370-x371))^x372);

	if (t75 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x375 = -10185576;
	static int8_t x376 = INT8_MIN;
	uint64_t t76 = 7LLU;

	t76 = ((x373-(x374-x375))^x376);

	if (t76 != 10185752LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x377 = 264;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = 84977U;
	static int8_t x380 = INT8_MIN;
	volatile uint32_t t77 = 5884U;

	t77 = ((x377-(x378-x379))^x380);

	if (t77 != 4294849401U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = 8;
	uint32_t x382 = 19856U;
	int32_t x383 = INT32_MIN;
	volatile uint32_t t78 = 19051700U;

	t78 = ((x381-(x382-x383))^x384);

	if (t78 != 2147470727U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x385 = 14U;
	int8_t x386 = INT8_MIN;
	static volatile int32_t x387 = 45357;
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t79 = 392468;

	t79 = ((x385-(x386-x387))^x388);

	if (t79 != 2147438148) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x389 = UINT8_MAX;
	int16_t x390 = INT16_MIN;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1LL;
	static volatile uint64_t t80 = 1778LLU;

	t80 = ((x389-(x390-x391))^x392);

	if (t80 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x395 = UINT32_MAX;
	int64_t t81 = 9933LL;

	t81 = ((x393-(x394-x395))^x396);

	if (t81 != -4150729501LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x413 = 137319725260563LLU;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	volatile uint64_t t82 = 20627351LLU;

	t82 = ((x413-(x414-x415))^x416);

	if (t82 != 137319725260563LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = -1LL;
	uint32_t x418 = 795612057U;
	int64_t x419 = 38LL;
	int32_t x420 = INT32_MAX;
	int64_t t83 = -46023LL;

	t83 = ((x417-(x418-x419))^x420);

	if (t83 != -1351871629LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x425 = 0U;
	uint64_t x426 = UINT64_MAX;
	int8_t x428 = -1;

	t84 = ((x425-(x426-x427))^x428);

	if (t84 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = INT8_MAX;
	volatile int32_t x431 = -1;
	int32_t t85 = -26;

	t85 = ((x429-(x430-x431))^x432);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x433 = 13U;
	uint64_t x434 = 2225LLU;
	static int16_t x435 = INT16_MIN;
	static volatile uint64_t x436 = 2665989990408972357LLU;
	static volatile uint64_t t86 = 21128415143431LLU;

	t86 = ((x433-(x434-x435))^x436);

	if (t86 != 15780754083300613913LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x437 = INT16_MIN;
	int64_t x438 = -184455LL;
	uint32_t x439 = 1U;
	static volatile int32_t x440 = -1038;
	static volatile int64_t t87 = -5264737LL;

	t87 = ((x437-(x438-x439))^x440);

	if (t87 != -152710LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x441 = 25505U;
	volatile int16_t x442 = -8;
	uint8_t x443 = UINT8_MAX;
	volatile uint32_t t88 = 101U;

	t88 = ((x441-(x442-x443))^x444);

	if (t88 != 25769U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x445 = 202445354U;
	int32_t x446 = -4;
	static int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MAX;
	int64_t t89 = 128555645462798710LL;

	t89 = ((x445-(x446-x447))^x448);

	if (t89 != -202445359LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x453 = -12617254LL;
	int32_t x454 = INT32_MAX;
	uint8_t x455 = 7U;
	int8_t x456 = 1;
	int64_t t90 = 101185LL;

	t90 = ((x453-(x454-x455))^x456);

	if (t90 != -2160100893LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x461 = -565165;
	volatile int32_t x462 = 272649;
	int8_t x464 = INT8_MIN;

	t91 = ((x461-(x462-x463))^x464);

	if (t91 != 837835) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x465 = -1LL;
	int16_t x466 = -338;
	static uint16_t x467 = 24500U;
	uint64_t x468 = 41112854LLU;

	t92 = ((x465-(x466-x467))^x468);

	if (t92 != 41104403LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x469 = 27620553LLU;
	static int32_t x470 = INT32_MAX;
	int64_t x471 = INT64_MAX;
	static int32_t x472 = INT32_MIN;

	t93 = ((x469-(x470-x471))^x472);

	if (t93 != 9223372036882396361LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x473 = 3U;
	int8_t x474 = INT8_MIN;
	uint64_t x475 = UINT64_MAX;
	volatile int32_t x476 = INT32_MIN;
	volatile uint64_t t94 = 23348LLU;

	t94 = ((x473-(x474-x475))^x476);

	if (t94 != 18446744071562068098LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x478 = -1529;
	static int8_t x479 = 1;

	t95 = ((x477-(x478-x479))^x480);

	if (t95 != 18446744066985610610LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x481 = -22;
	volatile uint64_t x482 = 4838909842643262LLU;
	int16_t x483 = INT16_MIN;
	static uint64_t x484 = UINT64_MAX;
	volatile uint64_t t96 = 86LLU;

	t96 = ((x481-(x482-x483))^x484);

	if (t96 != 4838909842676051LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x485 = INT8_MIN;
	uint8_t x486 = UINT8_MAX;
	int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MIN;
	volatile int32_t t97 = -58441;

	t97 = ((x485-(x486-x487))^x488);

	if (t97 != 2147483137) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = INT8_MIN;
	static volatile int32_t x491 = -18;
	static int16_t x492 = 31;
	volatile uint64_t t98 = 844699260775078LLU;

	t98 = ((x489-(x490-x491))^x492);

	if (t98 != 18446744073481150962LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x498 = UINT64_MAX;
	int32_t x499 = INT32_MIN;
	static int32_t x500 = INT32_MIN;
	volatile uint64_t t99 = 1267LLU;

	t99 = ((x497-(x498-x499))^x500);

	if (t99 != 4294934529LLU) { NG(); } else { ; }
	
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

