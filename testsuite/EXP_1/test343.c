#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
uint64_t t2 = 419279969724718LLU;
uint64_t x23 = UINT64_MAX;
static uint8_t x25 = UINT8_MAX;
int8_t x38 = INT8_MAX;
static int64_t t7 = 24398141727604LL;
volatile int64_t x43 = INT64_MIN;
static int64_t x44 = INT64_MAX;
volatile int64_t x50 = 16208284235LL;
uint32_t x52 = 531595705U;
uint16_t x60 = 1U;
static volatile uint32_t x68 = 3861U;
volatile uint32_t x71 = UINT32_MAX;
int16_t x73 = 1162;
int64_t x85 = INT64_MAX;
uint64_t x94 = 518819109733LLU;
volatile int16_t x97 = 3;
static int8_t x110 = INT8_MIN;
int32_t t21 = 5859298;
volatile int16_t x113 = -1;
uint32_t x114 = 7419U;
uint8_t x115 = 94U;
volatile uint32_t t22 = 12205U;
volatile int16_t x121 = 14;
static int32_t x123 = INT32_MIN;
uint8_t x125 = 0U;
volatile uint64_t x127 = UINT64_MAX;
volatile int8_t x128 = 45;
static volatile int16_t x133 = INT16_MIN;
int32_t x139 = INT32_MAX;
volatile uint64_t t31 = 3543LLU;
volatile uint64_t t32 = 0LLU;
uint32_t x165 = 166U;
static uint8_t x168 = 5U;
volatile int16_t x171 = INT16_MIN;
uint8_t x172 = 7U;
uint16_t x184 = 1294U;
uint64_t t36 = 1874LLU;
static volatile int64_t t37 = -3LL;
int32_t x207 = INT32_MIN;
uint32_t x224 = 135U;
volatile uint64_t x227 = UINT64_MAX;
volatile int16_t x230 = INT16_MIN;
static int8_t x231 = INT8_MIN;
uint16_t x232 = 245U;
uint32_t t43 = 15867U;
static uint32_t x245 = 135U;
uint16_t x246 = UINT16_MAX;
uint32_t x248 = 545260U;
static uint32_t t46 = 10737U;
int8_t x255 = 7;
int8_t x261 = 1;
volatile int32_t t49 = -1011397;
int32_t x266 = -2705933;
static uint32_t x274 = 1701977U;
static int8_t x276 = INT8_MAX;
uint32_t x279 = 117U;
uint64_t x287 = 45LLU;
static uint64_t t54 = 3183LLU;
static uint16_t x289 = 2U;
uint32_t t55 = 676U;
volatile int32_t x296 = -1;
uint16_t x306 = 32700U;
int32_t x307 = -1;
int32_t x318 = -28;
static uint16_t x319 = UINT16_MAX;
int32_t x337 = 467497;
volatile uint32_t x353 = 168823391U;
uint32_t t68 = 137U;
volatile int16_t x385 = -1;
volatile int8_t x387 = INT8_MIN;
uint32_t x404 = 1U;
static int8_t x406 = INT8_MIN;
volatile int64_t x411 = INT64_MIN;
static int16_t x412 = INT16_MIN;
static int8_t x413 = INT8_MIN;
static volatile uint8_t x423 = 5U;
volatile uint8_t x424 = 9U;
static uint32_t x426 = 657341U;
int64_t x436 = INT64_MIN;
int8_t x445 = -1;
int64_t x446 = -2838LL;
uint16_t x449 = 470U;
int16_t x453 = -1;
int64_t x456 = INT64_MAX;
int32_t x468 = 2045;
uint16_t x475 = UINT16_MAX;
uint32_t x486 = 672U;
uint64_t t87 = 462516984428124037LLU;
int16_t x498 = INT16_MAX;
int16_t x500 = 169;
int32_t x512 = INT32_MAX;
int64_t x514 = -16217553LL;
int8_t x519 = -1;
uint16_t x535 = 0U;
int32_t x536 = INT32_MAX;
int64_t t97 = 54LL;
static int16_t x538 = INT16_MAX;
int64_t x542 = 1413694154LL;
volatile int64_t t99 = -1LL;


void f0(void) {
	static int16_t x6 = 1;
	int64_t x7 = INT64_MIN;
	int32_t x8 = -10;
	int64_t t0 = 19LL;

	t0 = (((x5*x6)+x7)%x8);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 3U;
	volatile uint32_t x10 = 458138022U;
	int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;
	volatile uint32_t t1 = 4U;

	t1 = (((x9*x10)+x11)%x12);

	if (t1 != 1374446833U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 96019168LLU;
	static int64_t x18 = INT64_MIN;
	uint64_t x19 = UINT64_MAX;
	volatile uint8_t x20 = UINT8_MAX;

	t2 = (((x17*x18)+x19)%x20);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = INT16_MAX;
	int32_t x22 = -1;
	int32_t x24 = INT32_MAX;
	uint64_t t3 = 31243LLU;

	t3 = (((x21*x22)+x23)%x24);

	if (t3 != 2147450883LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x26 = UINT64_MAX;
	static uint64_t x27 = 828634938049587254LLU;
	uint64_t x28 = 1614LLU;
	static uint64_t t4 = 33778322277LLU;

	t4 = (((x25*x26)+x27)%x28);

	if (t4 != 863LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 80464262U;
	int16_t x30 = 1;
	int32_t x31 = -30;
	int16_t x32 = INT16_MAX;
	uint32_t t5 = 18597U;

	t5 = (((x29*x30)+x31)%x32);

	if (t5 != 21247U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = -1;
	volatile uint64_t x34 = UINT64_MAX;
	static int16_t x35 = INT16_MIN;
	volatile int64_t x36 = 3116892769552019LL;
	volatile uint64_t t6 = 65008482212774601LLU;

	t6 = (((x33*x34)+x35)%x36);

	if (t6 != 972663500670407LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	static int64_t x39 = -1LL;
	int8_t x40 = INT8_MIN;

	t7 = (((x37*x38)+x39)%x40);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 501593U;
	int8_t x42 = INT8_MAX;
	int64_t t8 = -20506750484747LL;

	t8 = (((x41*x42)+x43)%x44);

	if (t8 != -9223372036791073497LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x49 = UINT64_MAX;
	volatile uint16_t x51 = 1450U;
	volatile uint64_t t9 = 116775956442LLU;

	t9 = (((x49*x50)+x51)%x52);

	if (t9 != 466458746LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x57 = 1;
	int8_t x58 = INT8_MAX;
	int64_t x59 = -1LL;
	static int64_t t10 = 3116392059554LL;

	t10 = (((x57*x58)+x59)%x60);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = 16LLU;
	int64_t x64 = -1LL;
	volatile uint64_t t11 = 141639680255006LLU;

	t11 = (((x61*x62)+x63)%x64);

	if (t11 != 144LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = 1;
	volatile uint8_t x66 = 7U;
	uint64_t x67 = 2045492096332LLU;
	volatile uint64_t t12 = 106113343644626124LLU;

	t12 = (((x65*x66)+x67)%x68);

	if (t12 != 2837LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	int16_t x70 = 11;
	static uint32_t x72 = 45U;
	static uint32_t t13 = 1668521U;

	t13 = (((x69*x70)+x71)%x72);

	if (t13 != 29U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 275LLU;
	uint8_t x76 = 39U;
	uint64_t t14 = 13611LLU;

	t14 = (((x73*x74)+x75)%x76);

	if (t14 != 28LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MAX;
	static int8_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t15 = -1116074;

	t15 = (((x77*x78)+x79)%x80);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x86 = -1;
	int16_t x87 = 2;
	volatile uint8_t x88 = UINT8_MAX;
	int64_t t16 = -14321158097LL;

	t16 = (((x85*x86)+x87)%x88);

	if (t16 != -125LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -1;
	volatile uint8_t x90 = UINT8_MAX;
	int8_t x91 = -1;
	uint8_t x92 = 25U;
	static int32_t t17 = -58211753;

	t17 = (((x89*x90)+x91)%x92);

	if (t17 != -6) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = 30412U;
	int32_t x95 = -96657149;
	static int32_t x96 = INT32_MIN;
	uint64_t t18 = 2597LLU;

	t18 = (((x93*x94)+x95)%x96);

	if (t18 != 15778326668542847LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = 3571524874882023LL;
	int16_t x100 = INT16_MIN;
	int64_t t19 = -13444147LL;

	t19 = (((x97*x98)+x99)%x100);

	if (t19 != 19428LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x105 = UINT64_MAX;
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = 555880030;
	volatile int64_t x108 = -1LL;
	static uint64_t t20 = 1910424841212450711LLU;

	t20 = (((x105*x106)+x107)%x108);

	if (t20 != 18446744069970464351LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	int32_t x111 = 0;
	int32_t x112 = INT32_MIN;

	t21 = (((x109*x110)+x111)%x112);

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x116 = -1;

	t22 = (((x113*x114)+x115)%x116);

	if (t22 != 4294959971U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x117 = UINT32_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = INT8_MIN;
	int64_t x120 = 232477LL;
	volatile uint64_t t23 = 1227851919727LLU;

	t23 = (((x117*x118)+x119)%x120);

	if (t23 != 18330LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x122 = UINT32_MAX;
	uint8_t x124 = 5U;
	static uint32_t t24 = 2376663U;

	t24 = (((x121*x122)+x123)%x124);

	if (t24 != 4U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x126 = 414013398;
	volatile uint64_t t25 = 26299663281LLU;

	t25 = (((x125*x126)+x127)%x128);

	if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x134 = UINT32_MAX;
	static uint32_t x135 = UINT32_MAX;
	int64_t x136 = -1LL;
	volatile int64_t t26 = -104707875098LL;

	t26 = (((x133*x134)+x135)%x136);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x137 = 496;
	volatile uint64_t x138 = UINT64_MAX;
	volatile int8_t x140 = -26;
	static volatile uint64_t t27 = 52928688704691LLU;

	t27 = (((x137*x138)+x139)%x140);

	if (t27 != 2147483151LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	volatile int8_t x142 = 7;
	uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MAX;
	uint32_t t28 = 1671499U;

	t28 = (((x141*x142)+x143)%x144);

	if (t28 != 2147483641U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = UINT16_MAX;
	uint64_t x146 = 4197583147893513LLU;
	static int64_t x147 = -1LL;
	int8_t x148 = INT8_MIN;
	static uint64_t t29 = 1011333294LLU;

	t29 = (((x145*x146)+x147)%x148);

	if (t29 != 16834194565267651830LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 24690U;
	int16_t x154 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	volatile uint32_t x156 = UINT32_MAX;
	int64_t t30 = -20443328134904221LL;

	t30 = (((x153*x154)+x155)%x156);

	if (t30 != -2956525567LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = -1;
	uint64_t x158 = UINT64_MAX;
	static volatile uint16_t x159 = 18786U;
	int16_t x160 = -1;

	t31 = (((x157*x158)+x159)%x160);

	if (t31 != 18787LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = -1LL;
	uint64_t x163 = 864829LLU;
	uint64_t x164 = 1200730LLU;

	t32 = (((x161*x162)+x163)%x164);

	if (t32 != 864830LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x166 = INT16_MAX;
	int8_t x167 = -1;
	uint32_t t33 = 5889595U;

	t33 = (((x165*x166)+x167)%x168);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MAX;
	volatile int16_t x170 = INT16_MIN;
	int32_t t34 = 901391339;

	t34 = (((x169*x170)+x171)%x172);

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = 15;
	uint16_t x178 = 11441U;
	int8_t x179 = INT8_MIN;
	uint8_t x180 = 111U;
	int32_t t35 = -26960;

	t35 = (((x177*x178)+x179)%x180);

	if (t35 != 103) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x181 = 28LLU;
	int16_t x182 = 15332;
	int64_t x183 = INT64_MAX;

	t36 = (((x181*x182)+x183)%x184);

	if (t36 != 1171LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x197 = -1LL;
	static int8_t x198 = 20;
	uint8_t x199 = 24U;
	static int32_t x200 = INT32_MIN;

	t37 = (((x197*x198)+x199)%x200);

	if (t37 != 4LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x201 = 6148665LLU;
	int8_t x202 = INT8_MIN;
	int8_t x203 = 0;
	volatile uint16_t x204 = UINT16_MAX;
	volatile uint64_t t38 = 11000273947LLU;

	t38 = (((x201*x202)+x203)%x204);

	if (t38 != 46231LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x206 = 41444140797053179LLU;
	int32_t x208 = 27595389;
	static uint64_t t39 = 331257690LLU;

	t39 = (((x205*x206)+x207)%x208);

	if (t39 != 3471912LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x217 = 3373138480985625080LL;
	static uint8_t x218 = 0U;
	int64_t x219 = INT64_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	int64_t t40 = 18931LL;

	t40 = (((x217*x218)+x219)%x220);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x221 = 422480871LL;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	static uint64_t t41 = 8183045407794119256LLU;

	t41 = (((x221*x222)+x223)%x224);

	if (t41 != 42LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = INT64_MIN;
	static uint64_t x226 = UINT64_MAX;
	volatile int8_t x228 = INT8_MIN;
	static volatile uint64_t t42 = 16739070658136857LLU;

	t42 = (((x225*x226)+x227)%x228);

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x229 = 22880U;

	t43 = (((x229*x230)+x231)%x232);

	if (t43 != 68U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x233 = UINT16_MAX;
	static int8_t x234 = INT8_MIN;
	static volatile uint64_t x235 = UINT64_MAX;
	uint8_t x236 = 90U;
	uint64_t t44 = 482136651374LLU;

	t44 = (((x233*x234)+x235)%x236);

	if (t44 != 75LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = 8;
	int8_t x242 = INT8_MAX;
	int8_t x243 = -1;
	int64_t x244 = -1LL;
	int64_t t45 = 7519359LL;

	t45 = (((x241*x242)+x243)%x244);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x247 = -2;

	t46 = (((x245*x246)+x247)%x248);

	if (t46 != 123063U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = INT8_MIN;
	volatile int8_t x254 = -38;
	static int16_t x256 = 1660;
	int32_t t47 = 410986;

	t47 = (((x253*x254)+x255)%x256);

	if (t47 != 1551) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	volatile uint32_t x259 = 22572541U;
	volatile uint16_t x260 = UINT16_MAX;
	volatile uint32_t t48 = 203538U;

	t48 = (((x257*x258)+x259)%x260);

	if (t48 != 44885U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x262 = INT8_MIN;
	static int8_t x263 = -1;
	volatile uint8_t x264 = 5U;

	t49 = (((x261*x262)+x263)%x264);

	if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x265 = 59447LL;
	int32_t x267 = 51654;
	int64_t x268 = INT64_MAX;
	int64_t t50 = 957354882972LL;

	t50 = (((x265*x266)+x267)%x268);

	if (t50 != -160859547397LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x273 = 16795598089LLU;
	uint8_t x275 = 14U;
	volatile uint64_t t51 = 8888867372LLU;

	t51 = (((x273*x274)+x275)%x276);

	if (t51 != 80LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	static uint8_t x280 = UINT8_MAX;
	static uint32_t t52 = 4289642U;

	t52 = (((x277*x278)+x279)%x280);

	if (t52 != 182U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x281 = UINT32_MAX;
	static int64_t x282 = -92175967LL;
	int8_t x283 = INT8_MIN;
	int64_t x284 = 1LL;
	int64_t t53 = 11207639LL;

	t53 = (((x281*x282)+x283)%x284);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x285 = UINT16_MAX;
	volatile uint8_t x286 = 0U;
	int32_t x288 = -551379844;

	t54 = (((x285*x286)+x287)%x288);

	if (t54 != 45LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = -1;
	int32_t x292 = -1;

	t55 = (((x289*x290)+x291)%x292);

	if (t55 != 4294967293U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x294 = 323504161LLU;
	int8_t x295 = -1;
	uint64_t t56 = 36056312LLU;

	t56 = (((x293*x294)+x295)%x296);

	if (t56 != 17752024177902092287LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = 20;
	int16_t x303 = 276;
	int8_t x304 = -1;
	static volatile int32_t t57 = -16;

	t57 = (((x301*x302)+x303)%x304);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t58 = 419587267;

	t58 = (((x305*x306)+x307)%x308);

	if (t58 != -32701) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x313 = 16590974LLU;
	int16_t x314 = INT16_MIN;
	volatile int64_t x315 = -271246LL;
	volatile int8_t x316 = INT8_MAX;
	volatile uint64_t t59 = 892LLU;

	t59 = (((x313*x314)+x315)%x316);

	if (t59 != 5LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = -13490;
	int64_t x320 = -314308LL;
	volatile int64_t t60 = 182LL;

	t60 = (((x317*x318)+x319)%x320);

	if (t60 != 128947LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = 242124120LL;
	static volatile uint64_t t61 = 16216441LLU;

	t61 = (((x325*x326)+x327)%x328);

	if (t61 != 147223823LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x333 = 189LL;
	int32_t x334 = INT32_MAX;
	static uint8_t x335 = 127U;
	static volatile int16_t x336 = INT16_MAX;
	int64_t t62 = 331342149740LL;

	t62 = (((x333*x334)+x335)%x336);

	if (t62 != 316LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x338 = 0;
	static volatile uint8_t x339 = UINT8_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t63 = 0;

	t63 = (((x337*x338)+x339)%x340);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x349 = 304U;
	static int8_t x350 = INT8_MAX;
	volatile uint16_t x351 = 193U;
	int8_t x352 = INT8_MIN;
	volatile uint32_t t64 = 67320U;

	t64 = (((x349*x350)+x351)%x352);

	if (t64 != 38801U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x354 = 34U;
	int16_t x355 = -1;
	static volatile int8_t x356 = INT8_MIN;
	uint32_t t65 = 41U;

	t65 = (((x353*x354)+x355)%x356);

	if (t65 != 1445027997U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x357 = -1;
	static int8_t x358 = -1;
	static uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile uint32_t t66 = 35U;

	t66 = (((x357*x358)+x359)%x360);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	static int32_t x363 = INT32_MAX;
	int32_t x364 = INT32_MAX;
	uint64_t t67 = 17243168025076LLU;

	t67 = (((x361*x362)+x363)%x364);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x369 = -68;
	uint16_t x370 = 2174U;
	volatile uint32_t x371 = 37487U;
	int16_t x372 = -1;

	t68 = (((x369*x370)+x371)%x372);

	if (t68 != 4294856951U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x377 = 27U;
	int16_t x378 = INT16_MAX;
	uint64_t x379 = 17607922004593676LLU;
	uint32_t x380 = 1597948430U;
	uint64_t t69 = 130925091468LLU;

	t69 = (((x377*x378)+x379)%x380);

	if (t69 != 419433985LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x381 = UINT32_MAX;
	uint32_t x382 = 136089585U;
	volatile uint16_t x383 = UINT16_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile uint32_t t70 = 1644291767U;

	t70 = (((x381*x382)+x383)%x384);

	if (t70 != 91U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x386 = INT8_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t71 = 26174113U;

	t71 = (((x385*x386)+x387)%x388);

	if (t71 != 4294967041U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x389 = 25390531U;
	uint16_t x390 = UINT16_MAX;
	uint8_t x391 = 2U;
	int64_t x392 = INT64_MAX;
	int64_t t72 = -31824022663LL;

	t72 = (((x389*x390)+x391)%x392);

	if (t72 != 1816105535LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	uint8_t x399 = 0U;
	volatile int64_t x400 = 36LL;
	static volatile int64_t t73 = -8490LL;

	t73 = (((x397*x398)+x399)%x400);

	if (t73 != 8LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x401 = UINT32_MAX;
	static uint64_t x402 = UINT64_MAX;
	volatile int16_t x403 = INT16_MAX;
	uint64_t t74 = 275LLU;

	t74 = (((x401*x402)+x403)%x404);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x405 = INT8_MAX;
	int8_t x407 = -1;
	static uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t75 = 148392795952485359LLU;

	t75 = (((x405*x406)+x407)%x408);

	if (t75 != 18446744073709535359LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x409 = 10714865U;
	int64_t x410 = 1LL;
	int64_t t76 = -166563485LL;

	t76 = (((x409*x410)+x411)%x412);

	if (t76 != -271LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x414 = 1178;
	int64_t x415 = INT64_MAX;
	uint16_t x416 = UINT16_MAX;
	static int64_t t77 = -483LL;

	t77 = (((x413*x414)+x415)%x416);

	if (t77 != 13053LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = INT16_MIN;
	volatile int32_t x422 = -1;
	int32_t t78 = 110617;

	t78 = (((x421*x422)+x423)%x424);

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x425 = -148;
	int64_t x427 = INT64_MIN;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t79 = 3998866LLU;

	t79 = (((x425*x426)+x427)%x428);

	if (t79 != 9223372041052456636LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x433 = INT8_MIN;
	uint8_t x434 = UINT8_MAX;
	uint64_t x435 = UINT64_MAX;
	uint64_t t80 = 9010109LLU;

	t80 = (((x433*x434)+x435)%x436);

	if (t80 != 9223372036854743167LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x447 = -808847018528168879LL;
	uint8_t x448 = 3U;
	volatile int64_t t81 = 6949LL;

	t81 = (((x445*x446)+x447)%x448);

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x450 = -1;
	volatile int64_t x451 = 4454493117LL;
	uint16_t x452 = 11U;
	static volatile int64_t t82 = -6LL;

	t82 = (((x449*x450)+x451)%x452);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x454 = 7037475840LL;
	int8_t x455 = INT8_MIN;
	int64_t t83 = 126062010LL;

	t83 = (((x453*x454)+x455)%x456);

	if (t83 != -7037475968LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x465 = 59139U;
	static int64_t x466 = -8538718426397LL;
	uint64_t x467 = 622579891635773441LLU;
	uint64_t t84 = 5LLU;

	t84 = (((x465*x466)+x467)%x468);

	if (t84 != 398LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x473 = 29206861517LLU;
	static volatile uint16_t x474 = UINT16_MAX;
	uint8_t x476 = 78U;
	volatile uint64_t t85 = 29599935804271LLU;

	t85 = (((x473*x474)+x475)%x476);

	if (t85 != 6LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x481 = UINT64_MAX;
	int16_t x482 = -1;
	uint8_t x483 = UINT8_MAX;
	uint8_t x484 = UINT8_MAX;
	volatile uint64_t t86 = 130668LLU;

	t86 = (((x481*x482)+x483)%x484);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x485 = -1;
	int64_t x487 = -1LL;
	uint64_t x488 = 900389655LLU;

	t87 = (((x485*x486)+x487)%x488);

	if (t87 != 693408003LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x489 = INT64_MIN;
	uint64_t x490 = 51LLU;
	static int32_t x491 = INT32_MAX;
	volatile int64_t x492 = 36190LL;
	uint64_t t88 = 64402716922975LLU;

	t88 = (((x489*x490)+x491)%x492);

	if (t88 != 14485LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = INT16_MIN;
	int8_t x494 = -9;
	uint16_t x495 = 0U;
	volatile uint8_t x496 = UINT8_MAX;
	int32_t t89 = 24312333;

	t89 = (((x493*x494)+x495)%x496);

	if (t89 != 132) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x497 = INT16_MIN;
	static uint8_t x499 = 25U;
	static volatile int32_t t90 = 2562972;

	t90 = (((x497*x498)+x499)%x500);

	if (t90 != -148) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = INT32_MIN;
	volatile uint64_t x502 = 5952250704427LLU;
	int64_t x503 = 2169909681397406283LL;
	uint8_t x504 = 3U;
	volatile uint64_t t91 = 9750547642215LLU;

	t91 = (((x501*x502)+x503)%x504);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x505 = INT8_MAX;
	int8_t x506 = -1;
	uint64_t x507 = 975709100640879LLU;
	int32_t x508 = -37759155;
	volatile uint64_t t92 = 13346502210LLU;

	t92 = (((x505*x506)+x507)%x508);

	if (t92 != 975709100640752LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x509 = 59276313U;
	static uint64_t x510 = UINT64_MAX;
	int64_t x511 = INT64_MAX;
	volatile uint64_t t93 = 958557LLU;

	t93 = (((x509*x510)+x511)%x512);

	if (t93 != 2088207335LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x513 = INT32_MIN;
	uint8_t x515 = 29U;
	int8_t x516 = INT8_MIN;
	volatile int64_t t94 = -26LL;

	t94 = (((x513*x514)+x515)%x516);

	if (t94 != 29LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x517 = INT8_MAX;
	int16_t x518 = -1;
	uint16_t x520 = UINT16_MAX;
	static int32_t t95 = 2;

	t95 = (((x517*x518)+x519)%x520);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x521 = INT64_MAX;
	volatile int32_t x522 = -1;
	uint8_t x523 = 59U;
	volatile uint8_t x524 = UINT8_MAX;
	int64_t t96 = 26224385552LL;

	t96 = (((x521*x522)+x523)%x524);

	if (t96 != -68LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x533 = -1;
	int64_t x534 = 27013856030LL;

	t97 = (((x533*x534)+x535)%x536);

	if (t97 != -1244052266LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x537 = INT16_MIN;
	volatile uint32_t x539 = 35764729U;
	uint16_t x540 = UINT16_MAX;
	volatile uint32_t t98 = 3640U;

	t98 = (((x537*x538)+x539)%x540);

	if (t98 != 64539U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x541 = UINT8_MAX;
	int8_t x543 = 0;
	static volatile int32_t x544 = INT32_MIN;

	t99 = (((x541*x542)+x543)%x544);

	if (t99 != 1862240054LL) { NG(); } else { ; }
	
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

