#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = 15241;
volatile int32_t t3 = -672038095;
uint8_t x45 = 60U;
uint64_t x46 = 21355878188LLU;
int16_t x47 = INT16_MIN;
uint8_t x52 = UINT8_MAX;
int16_t x53 = INT16_MIN;
volatile uint64_t x56 = 28494302141764LLU;
uint16_t x77 = 28751U;
int8_t x83 = -1;
int32_t x88 = 1;
volatile int64_t x98 = INT64_MIN;
volatile int32_t t13 = 27619298;
volatile int32_t t15 = 0;
static int32_t x119 = -1;
int16_t x121 = 0;
uint32_t x122 = 13074470U;
volatile uint16_t x125 = 874U;
uint64_t x126 = 4741065801247332369LLU;
int32_t x136 = 103544;
volatile int32_t x182 = -5;
volatile uint16_t x183 = 675U;
volatile int32_t t25 = -747;
uint16_t x200 = 1U;
int32_t x201 = 0;
static volatile uint8_t x205 = UINT8_MAX;
uint64_t x233 = 205215563782534072LLU;
int64_t x236 = -1LL;
volatile int32_t t32 = -7;
uint8_t x237 = 60U;
volatile int32_t t34 = 33944416;
volatile int16_t x249 = INT16_MIN;
int8_t x254 = 1;
uint8_t x262 = 0U;
uint16_t x272 = UINT16_MAX;
int32_t t39 = 607082812;
int16_t x277 = -3;
static volatile int64_t x287 = -1LL;
uint16_t x295 = 2279U;
int32_t x321 = -200;
static int32_t x324 = INT32_MIN;
volatile int32_t t48 = -1213282;
int16_t x335 = 1319;
volatile int16_t x344 = INT16_MIN;
static volatile int32_t t51 = -342;
int16_t x363 = INT16_MAX;
static uint64_t x365 = 3113LLU;
volatile uint8_t x368 = 7U;
static int16_t x372 = INT16_MAX;
uint16_t x377 = 356U;
int64_t x384 = -1LL;
uint32_t x388 = UINT32_MAX;
volatile int32_t t57 = 0;
int16_t x393 = INT16_MIN;
static volatile int8_t x394 = INT8_MAX;
int8_t x397 = 0;
int16_t x398 = INT16_MIN;
static volatile int32_t t59 = 81;
volatile int8_t x402 = INT8_MIN;
int8_t x413 = 7;
int32_t x418 = -1;
volatile int32_t t64 = -8;
uint32_t x440 = 14480U;
int16_t x443 = -1;
int8_t x445 = 1;
volatile int64_t x459 = -81LL;
uint16_t x469 = 402U;
int8_t x471 = INT8_MIN;
static int8_t x475 = INT8_MIN;
volatile int64_t x485 = -1LL;
int32_t t75 = -760169;
int8_t x493 = -1;
int64_t x502 = -1LL;
static uint16_t x509 = 1U;
int32_t x510 = INT32_MIN;
int32_t x512 = INT32_MAX;
volatile uint32_t x515 = 15259935U;
volatile uint16_t x521 = UINT16_MAX;
int64_t x530 = -1LL;
static uint64_t x537 = UINT64_MAX;
uint16_t x543 = 0U;
int32_t t84 = -3731;
volatile int32_t t86 = -64016;
int16_t x565 = INT16_MIN;
static int32_t x578 = -1;
static int32_t x590 = INT32_MIN;
static volatile int32_t x597 = 2;
static volatile int32_t x600 = -6;
uint32_t x601 = UINT32_MAX;
int8_t x603 = 4;
uint64_t x604 = 6528877513449LLU;
static uint64_t x612 = 1314283LLU;
volatile int8_t x614 = INT8_MIN;
volatile int32_t t96 = 719;
int64_t x628 = 196LL;
int16_t x634 = INT16_MAX;
int32_t t98 = -10;
uint64_t x638 = 130344621LLU;
uint8_t x640 = 114U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int16_t x2 = 2638;
	volatile int8_t x3 = INT8_MAX;
	uint32_t x4 = 254278U;
	volatile int32_t t0 = 1692;

	t0 = (x1<((x2*x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 5219U;
	static int32_t t1 = -468602;

	t1 = (x13<((x14*x15)*x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = 2222020697740593LL;
	int8_t x26 = -12;
	uint32_t x27 = UINT32_MAX;
	uint16_t x28 = UINT16_MAX;
	static volatile int32_t t2 = 1936;

	t2 = (x25<((x26*x27)*x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x33 = UINT32_MAX;
	static uint32_t x34 = 16037941U;
	uint64_t x35 = 51LLU;
	int16_t x36 = 1;

	t3 = (x33<((x34*x35)*x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x37 = INT32_MIN;
	static uint8_t x38 = UINT8_MAX;
	volatile uint8_t x39 = 55U;
	uint16_t x40 = 0U;
	int32_t t4 = 4091;

	t4 = (x37<((x38*x39)*x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x48 = 1U;
	volatile int32_t t5 = -68698;

	t5 = (x45<((x46*x47)*x48));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MIN;
	uint8_t x50 = 48U;
	uint8_t x51 = 0U;
	volatile int32_t t6 = -6550135;

	t6 = (x49<((x50*x51)*x52));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x54 = -1090505897283267LL;
	int8_t x55 = -1;
	int32_t t7 = 489224938;

	t7 = (x53<((x54*x55)*x56));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 88U;
	int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MAX;
	static int32_t t8 = -11070;

	t8 = (x61<((x62*x63)*x64));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x78 = INT32_MAX;
	static int64_t x79 = -15176665LL;
	uint64_t x80 = UINT64_MAX;
	int32_t t9 = -11968147;

	t9 = (x77<((x78*x79)*x80));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x81 = 3710209LLU;
	uint64_t x82 = UINT64_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t10 = 0;

	t10 = (x81<((x82*x83)*x84));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = -1;
	int8_t x86 = 56;
	int8_t x87 = 1;
	volatile int32_t t11 = 3428;

	t11 = (x85<((x86*x87)*x88));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x93 = INT16_MIN;
	uint64_t x94 = 69381001397653811LLU;
	int16_t x95 = -1;
	int8_t x96 = -1;
	volatile int32_t t12 = 15;

	t12 = (x93<((x94*x95)*x96));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x97 = INT16_MAX;
	volatile uint64_t x99 = UINT64_MAX;
	int16_t x100 = 15;

	t13 = (x97<((x98*x99)*x100));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x105 = -1;
	uint8_t x106 = 110U;
	uint16_t x107 = UINT16_MAX;
	uint32_t x108 = 20613U;
	volatile int32_t t14 = -1;

	t14 = (x105<((x106*x107)*x108));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x114 = 50U;
	int32_t x115 = -1874;
	int64_t x116 = 26567973666LL;

	t15 = (x113<((x114*x115)*x116));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x117 = INT16_MIN;
	volatile uint16_t x118 = 581U;
	uint8_t x120 = 16U;
	int32_t t16 = 12769;

	t16 = (x117<((x118*x119)*x120));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x123 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	int32_t t17 = 1118336;

	t17 = (x121<((x122*x123)*x124));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x127 = -1LL;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t18 = -1704547;

	t18 = (x125<((x126*x127)*x128));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x133 = -1LL;
	int16_t x134 = -7;
	volatile uint32_t x135 = 757862U;
	int32_t t19 = -77805;

	t19 = (x133<((x134*x135)*x136));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 67511LLU;
	uint64_t x143 = 345257LLU;
	uint8_t x144 = 62U;
	static int32_t t20 = 3;

	t20 = (x141<((x142*x143)*x144));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x145 = 7;
	int16_t x146 = -26;
	int32_t x147 = -7032;
	volatile uint32_t x148 = UINT32_MAX;
	static volatile int32_t t21 = 7058141;

	t21 = (x145<((x146*x147)*x148));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x161 = 30155543;
	int64_t x162 = -1LL;
	volatile int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MAX;
	static int32_t t22 = 18;

	t22 = (x161<((x162*x163)*x164));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	uint32_t x175 = UINT32_MAX;
	static int32_t x176 = -1;
	volatile int32_t t23 = 70698;

	t23 = (x173<((x174*x175)*x176));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x177 = 1;
	int32_t x178 = INT32_MAX;
	uint32_t x179 = 3953107U;
	int64_t x180 = -9LL;
	int32_t t24 = 12084603;

	t24 = (x177<((x178*x179)*x180));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x181 = -9;
	volatile int8_t x184 = INT8_MIN;

	t25 = (x181<((x182*x183)*x184));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	static int64_t x186 = -1LL;
	int16_t x187 = -1;
	static int16_t x188 = INT16_MIN;
	int32_t t26 = 1101;

	t26 = (x185<((x186*x187)*x188));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x197 = -1;
	volatile int8_t x198 = INT8_MAX;
	uint8_t x199 = 2U;
	volatile int32_t t27 = -1;

	t27 = (x197<((x198*x199)*x200));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x202 = -40;
	int32_t x203 = -1314286;
	uint64_t x204 = 109523LLU;
	static volatile int32_t t28 = -85133;

	t28 = (x201<((x202*x203)*x204));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x206 = 23U;
	uint16_t x207 = 3871U;
	volatile uint8_t x208 = UINT8_MAX;
	int32_t t29 = -6654617;

	t29 = (x205<((x206*x207)*x208));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x213 = -72691577;
	uint32_t x214 = UINT32_MAX;
	static int16_t x215 = INT16_MAX;
	int64_t x216 = -1LL;
	volatile int32_t t30 = 274358680;

	t30 = (x213<((x214*x215)*x216));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x217 = 0;
	int8_t x218 = -1;
	static int8_t x219 = -1;
	int64_t x220 = INT64_MAX;
	volatile int32_t t31 = -4877380;

	t31 = (x217<((x218*x219)*x220));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x234 = INT8_MIN;
	uint16_t x235 = UINT16_MAX;

	t32 = (x233<((x234*x235)*x236));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x238 = 1U;
	volatile int8_t x239 = -44;
	static uint32_t x240 = UINT32_MAX;
	volatile int32_t t33 = 581967;

	t33 = (x237<((x238*x239)*x240));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x241 = 0U;
	uint16_t x242 = UINT16_MAX;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = UINT32_MAX;

	t34 = (x241<((x242*x243)*x244));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = UINT32_MAX;
	volatile uint8_t x252 = 1U;
	volatile int32_t t35 = -126108849;

	t35 = (x249<((x250*x251)*x252));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x253 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MAX;
	volatile int32_t t36 = -478;

	t36 = (x253<((x254*x255)*x256));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x261 = -13LL;
	volatile int32_t x263 = INT32_MIN;
	uint64_t x264 = 217LLU;
	volatile int32_t t37 = -5052432;

	t37 = (x261<((x262*x263)*x264));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x265 = 3988132;
	uint32_t x266 = 820U;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MAX;
	volatile int32_t t38 = 53;

	t38 = (x265<((x266*x267)*x268));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	static int64_t x271 = INT64_MAX;

	t39 = (x269<((x270*x271)*x272));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x278 = 38450301796017050LLU;
	static int8_t x279 = 14;
	uint8_t x280 = 1U;
	int32_t t40 = 34;

	t40 = (x277<((x278*x279)*x280));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x285 = INT32_MAX;
	int32_t x286 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t41 = 1824013;

	t41 = (x285<((x286*x287)*x288));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x289 = INT32_MAX;
	int8_t x290 = 1;
	volatile int32_t x291 = 3354;
	static uint64_t x292 = 12085062LLU;
	int32_t t42 = -374;

	t42 = (x289<((x290*x291)*x292));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x293 = 670766982LL;
	volatile int16_t x294 = -73;
	static uint32_t x296 = UINT32_MAX;
	volatile int32_t t43 = -2373;

	t43 = (x293<((x294*x295)*x296));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x301 = UINT8_MAX;
	static int16_t x302 = 432;
	int32_t x303 = -1;
	int8_t x304 = INT8_MAX;
	int32_t t44 = 9527;

	t44 = (x301<((x302*x303)*x304));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x305 = 9;
	volatile uint16_t x306 = UINT16_MAX;
	int16_t x307 = -1;
	int8_t x308 = INT8_MAX;
	int32_t t45 = -80;

	t45 = (x305<((x306*x307)*x308));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MIN;
	volatile uint32_t x311 = 1922U;
	static volatile uint16_t x312 = 20U;
	static volatile int32_t t46 = 35338;

	t46 = (x309<((x310*x311)*x312));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x317 = -1;
	int64_t x318 = -6LL;
	int32_t x319 = -1;
	int32_t x320 = INT32_MAX;
	static int32_t t47 = 892522;

	t47 = (x317<((x318*x319)*x320));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x322 = -1LL;
	volatile int16_t x323 = INT16_MIN;

	t48 = (x321<((x322*x323)*x324));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x333 = UINT32_MAX;
	volatile uint64_t x334 = 568946386456378569LLU;
	int32_t x336 = INT32_MIN;
	volatile int32_t t49 = -115;

	t49 = (x333<((x334*x335)*x336));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x341 = 30822966704LLU;
	volatile uint8_t x342 = UINT8_MAX;
	static uint16_t x343 = 218U;
	volatile int32_t t50 = 195;

	t50 = (x341<((x342*x343)*x344));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = 9659239991453LLU;
	int8_t x347 = INT8_MIN;
	static int16_t x348 = -1;

	t51 = (x345<((x346*x347)*x348));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x361 = INT64_MAX;
	static uint32_t x362 = UINT32_MAX;
	static int8_t x364 = INT8_MIN;
	int32_t t52 = 54960;

	t52 = (x361<((x362*x363)*x364));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x366 = 6LLU;
	int8_t x367 = -6;
	static volatile int32_t t53 = 0;

	t53 = (x365<((x366*x367)*x368));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x369 = -1315;
	uint64_t x370 = 7221181557075812038LLU;
	uint8_t x371 = 3U;
	int32_t t54 = -108593619;

	t54 = (x369<((x370*x371)*x372));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x378 = 3069775;
	uint32_t x379 = 1855297618U;
	uint8_t x380 = 3U;
	int32_t t55 = -34;

	t55 = (x377<((x378*x379)*x380));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MIN;
	int64_t x383 = 426836788140441LL;
	int32_t t56 = -58;

	t56 = (x381<((x382*x383)*x384));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x385 = INT8_MIN;
	uint8_t x386 = UINT8_MAX;
	volatile int8_t x387 = INT8_MIN;

	t57 = (x385<((x386*x387)*x388));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x395 = 9;
	int64_t x396 = 17356LL;
	int32_t t58 = 0;

	t58 = (x393<((x394*x395)*x396));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x399 = -1LL;
	int16_t x400 = -1;

	t59 = (x397<((x398*x399)*x400));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x403 = -5436LL;
	uint16_t x404 = 17U;
	int32_t t60 = 1;

	t60 = (x401<((x402*x403)*x404));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x409 = -20353786688LL;
	volatile uint64_t x410 = 51284LLU;
	uint64_t x411 = UINT64_MAX;
	int8_t x412 = 29;
	static volatile int32_t t61 = -231602;

	t61 = (x409<((x410*x411)*x412));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x414 = 1;
	uint8_t x415 = 4U;
	int16_t x416 = INT16_MIN;
	int32_t t62 = -221421231;

	t62 = (x413<((x414*x415)*x416));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x417 = -1LL;
	int8_t x419 = INT8_MAX;
	int8_t x420 = INT8_MIN;
	int32_t t63 = 796;

	t63 = (x417<((x418*x419)*x420));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x421 = INT16_MIN;
	static int8_t x422 = INT8_MAX;
	uint16_t x423 = 699U;
	static int16_t x424 = 1265;

	t64 = (x421<((x422*x423)*x424));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x425 = 540431447257LL;
	uint8_t x426 = UINT8_MAX;
	uint8_t x427 = UINT8_MAX;
	uint16_t x428 = 4U;
	volatile int32_t t65 = 622004;

	t65 = (x425<((x426*x427)*x428));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x433 = 820LL;
	static volatile int8_t x434 = 26;
	static int16_t x435 = INT16_MAX;
	int8_t x436 = INT8_MIN;
	int32_t t66 = -179297695;

	t66 = (x433<((x434*x435)*x436));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x437 = -3;
	int8_t x438 = INT8_MAX;
	uint16_t x439 = 1577U;
	volatile int32_t t67 = 833994955;

	t67 = (x437<((x438*x439)*x440));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x441 = UINT16_MAX;
	int16_t x442 = -1;
	int32_t x444 = 5626;
	static int32_t t68 = 10;

	t68 = (x441<((x442*x443)*x444));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x446 = -1;
	static int16_t x447 = INT16_MAX;
	static int16_t x448 = 693;
	static volatile int32_t t69 = 1752;

	t69 = (x445<((x446*x447)*x448));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x449 = INT8_MAX;
	volatile int8_t x450 = -1;
	uint64_t x451 = 33435632120526339LLU;
	volatile int64_t x452 = -1LL;
	volatile int32_t t70 = -27;

	t70 = (x449<((x450*x451)*x452));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x457 = 0U;
	volatile int64_t x458 = 31642114916LL;
	int8_t x460 = -1;
	int32_t t71 = -1940;

	t71 = (x457<((x458*x459)*x460));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x470 = 1U;
	int8_t x472 = 0;
	int32_t t72 = -356;

	t72 = (x469<((x470*x471)*x472));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x473 = INT16_MIN;
	volatile uint16_t x474 = 2U;
	static uint32_t x476 = 87U;
	int32_t t73 = 0;

	t73 = (x473<((x474*x475)*x476));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x481 = -1;
	uint64_t x482 = 118LLU;
	int16_t x483 = -1;
	static volatile uint16_t x484 = 18783U;
	int32_t t74 = 10252006;

	t74 = (x481<((x482*x483)*x484));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x486 = -62;
	uint32_t x487 = 29564U;
	static int32_t x488 = INT32_MIN;

	t75 = (x485<((x486*x487)*x488));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x494 = INT32_MIN;
	static volatile uint64_t x495 = 2087115031014LLU;
	int64_t x496 = -1LL;
	int32_t t76 = -115;

	t76 = (x493<((x494*x495)*x496));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x497 = -1;
	volatile int64_t x498 = -226LL;
	int16_t x499 = 46;
	int64_t x500 = -31LL;
	int32_t t77 = -324611;

	t77 = (x497<((x498*x499)*x500));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x501 = INT32_MIN;
	int16_t x503 = 147;
	static int16_t x504 = INT16_MIN;
	static volatile int32_t t78 = -25;

	t78 = (x501<((x502*x503)*x504));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x511 = 440882180LLU;
	volatile int32_t t79 = 9127497;

	t79 = (x509<((x510*x511)*x512));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x513 = -1;
	volatile uint8_t x514 = 1U;
	volatile uint64_t x516 = 22135963LLU;
	static int32_t t80 = -1;

	t80 = (x513<((x514*x515)*x516));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x522 = 1049080747LLU;
	int64_t x523 = INT64_MIN;
	uint32_t x524 = 253100681U;
	int32_t t81 = -32657102;

	t81 = (x521<((x522*x523)*x524));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x529 = UINT32_MAX;
	int16_t x531 = 11131;
	volatile int16_t x532 = -1916;
	volatile int32_t t82 = -351;

	t82 = (x529<((x530*x531)*x532));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x538 = INT8_MAX;
	uint64_t x539 = 1351387LLU;
	uint64_t x540 = 157895LLU;
	int32_t t83 = 70501968;

	t83 = (x537<((x538*x539)*x540));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x541 = 34;
	uint64_t x542 = UINT64_MAX;
	volatile int64_t x544 = -16192894499LL;

	t84 = (x541<((x542*x543)*x544));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x545 = INT16_MIN;
	volatile int32_t x546 = -1;
	int8_t x547 = INT8_MIN;
	static volatile int32_t x548 = -1;
	volatile int32_t t85 = 341;

	t85 = (x545<((x546*x547)*x548));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x553 = UINT8_MAX;
	int16_t x554 = -1;
	uint32_t x555 = 0U;
	int64_t x556 = -1LL;

	t86 = (x553<((x554*x555)*x556));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x566 = INT8_MAX;
	int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MIN;
	int32_t t87 = -24099;

	t87 = (x565<((x566*x567)*x568));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x577 = -3925943668LL;
	uint64_t x579 = 2829LLU;
	static volatile int64_t x580 = -1LL;
	int32_t t88 = 31;

	t88 = (x577<((x578*x579)*x580));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x589 = INT64_MIN;
	uint32_t x591 = 146U;
	static int16_t x592 = -1;
	static int32_t t89 = 42018;

	t89 = (x589<((x590*x591)*x592));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x593 = -71;
	static uint64_t x594 = UINT64_MAX;
	int8_t x595 = INT8_MIN;
	volatile int16_t x596 = -9;
	volatile int32_t t90 = 3939;

	t90 = (x593<((x594*x595)*x596));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x598 = -1;
	int16_t x599 = INT16_MAX;
	volatile int32_t t91 = 2734;

	t91 = (x597<((x598*x599)*x600));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x602 = 22;
	int32_t t92 = 2906142;

	t92 = (x601<((x602*x603)*x604));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x605 = 15U;
	int16_t x606 = 1637;
	int32_t x607 = -1;
	uint16_t x608 = 83U;
	volatile int32_t t93 = -7758;

	t93 = (x605<((x606*x607)*x608));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x609 = INT16_MIN;
	int16_t x610 = INT16_MIN;
	static uint8_t x611 = 12U;
	volatile int32_t t94 = -2586535;

	t94 = (x609<((x610*x611)*x612));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x613 = INT64_MIN;
	uint16_t x615 = UINT16_MAX;
	volatile int8_t x616 = INT8_MIN;
	int32_t t95 = 180;

	t95 = (x613<((x614*x615)*x616));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x617 = INT8_MIN;
	uint16_t x618 = 29U;
	int8_t x619 = INT8_MIN;
	uint16_t x620 = 3U;

	t96 = (x617<((x618*x619)*x620));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x625 = INT32_MAX;
	int32_t x626 = INT32_MIN;
	uint64_t x627 = UINT64_MAX;
	int32_t t97 = -1874;

	t97 = (x625<((x626*x627)*x628));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x633 = INT32_MAX;
	uint64_t x635 = 3142LLU;
	int64_t x636 = INT64_MIN;

	t98 = (x633<((x634*x635)*x636));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x637 = INT16_MAX;
	uint8_t x639 = 50U;
	volatile int32_t t99 = 1943;

	t99 = (x637<((x638*x639)*x640));

	if (t99 != 1) { NG(); } else { ; }
	
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

