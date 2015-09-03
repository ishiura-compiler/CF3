#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x17 = 1309976117U;
volatile int32_t t4 = -123343401;
uint64_t x34 = 970071460953888LLU;
static uint16_t x35 = UINT16_MAX;
uint32_t x45 = 1U;
uint32_t x49 = 848401U;
uint64_t x57 = 1755394368647LLU;
static uint64_t x59 = 73998LLU;
int64_t x60 = 19LL;
volatile int32_t t12 = 56;
int16_t x73 = INT16_MIN;
int64_t x74 = 886400516LL;
int8_t x82 = 0;
int8_t x102 = INT8_MIN;
int32_t t17 = -1;
int32_t t18 = 1;
int8_t x121 = -1;
uint8_t x124 = 51U;
volatile int32_t t19 = 22690;
static int8_t x143 = -1;
volatile int32_t t24 = -47786188;
volatile uint8_t x170 = 0U;
volatile int16_t x175 = INT16_MAX;
uint32_t x190 = UINT32_MAX;
static volatile int32_t t31 = -140625;
volatile uint64_t x226 = UINT64_MAX;
int32_t x227 = INT32_MIN;
uint64_t x231 = 8198347726082LLU;
int16_t x234 = INT16_MIN;
int16_t x236 = -1;
int8_t x246 = 56;
static volatile int8_t x247 = -15;
volatile int32_t t37 = 0;
int64_t x263 = -12065421LL;
int32_t t39 = 2;
uint32_t x272 = 23U;
volatile int32_t t41 = -7;
uint8_t x289 = 106U;
volatile int32_t t43 = 725645951;
int32_t x308 = INT32_MIN;
int32_t t47 = -31;
int8_t x326 = INT8_MIN;
uint16_t x327 = UINT16_MAX;
volatile int32_t t48 = -1283;
static uint8_t x339 = UINT8_MAX;
uint32_t x340 = 3982971U;
int32_t x341 = -2388;
static int16_t x343 = -3;
int32_t t52 = 36601;
volatile int8_t x354 = -1;
uint16_t x361 = 1U;
volatile int8_t x363 = INT8_MAX;
int8_t x390 = INT8_MIN;
uint16_t x405 = UINT16_MAX;
static int32_t t61 = 223;
int16_t x414 = -1;
int8_t x435 = INT8_MIN;
static int16_t x437 = INT16_MIN;
static uint32_t x440 = 1845318U;
uint8_t x442 = 49U;
int32_t t66 = 3567;
uint8_t x459 = 45U;
int64_t x465 = -1LL;
static int8_t x469 = INT8_MIN;
int32_t x470 = 176663;
uint16_t x471 = 20U;
int16_t x473 = -11;
int64_t x476 = 192LL;
static uint8_t x478 = 0U;
static volatile int32_t t75 = -12659;
uint16_t x494 = 949U;
int8_t x495 = INT8_MIN;
int32_t t77 = -69194;
int64_t x513 = -1LL;
uint32_t x514 = 271U;
int32_t t79 = -469063348;
volatile int16_t x536 = -1;
volatile int32_t x565 = 1;
uint32_t x567 = 986U;
uint8_t x571 = UINT8_MAX;
int8_t x589 = 0;
int64_t x590 = INT64_MIN;
int64_t x591 = 363611373LL;
uint64_t x594 = 732468999105707LLU;
volatile int32_t t90 = -10;
static volatile int32_t t92 = 457447511;
int8_t x622 = -1;
static uint16_t x623 = 468U;
volatile int32_t t97 = -1117703;
int16_t x645 = 684;
int8_t x647 = -5;
static int32_t t99 = -47632879;


void f0(void) {
	uint32_t x13 = 1056974309U;
	int16_t x14 = -1;
	uint8_t x15 = 19U;
	static int64_t x16 = 200715LL;
	int32_t t0 = -169920;

	t0 = ((x13*x14)<=(x15+x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x18 = -54;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t1 = 159626739;

	t1 = ((x17*x18)<=(x19+x20));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 1LLU;
	uint8_t x22 = UINT8_MAX;
	volatile int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MAX;
	static volatile int32_t t2 = 11878092;

	t2 = ((x21*x22)<=(x23+x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 5290;
	int8_t x26 = -3;
	static int64_t x27 = 1606724939249182LL;
	uint32_t x28 = UINT32_MAX;
	int32_t t3 = 6821;

	t3 = ((x25*x26)<=(x27+x28));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x29 = 441613855056322191LLU;
	int16_t x30 = -2806;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = -898729927LL;

	t4 = ((x29*x30)<=(x31+x32));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x36 = INT64_MIN;
	static int32_t t5 = -236;

	t5 = ((x33*x34)<=(x35+x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = 3;
	int8_t x38 = INT8_MIN;
	static int64_t x39 = 13929260480546LL;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t6 = -116558698;

	t6 = ((x37*x38)<=(x39+x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x46 = INT64_MIN;
	uint64_t x47 = 105LLU;
	int16_t x48 = INT16_MIN;
	int32_t t7 = -4;

	t7 = ((x45*x46)<=(x47+x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x50 = -151;
	int32_t x51 = -1;
	int32_t x52 = 114116;
	static int32_t t8 = 1170;

	t8 = ((x49*x50)<=(x51+x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x53 = -783;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MAX;
	int8_t x56 = 49;
	int32_t t9 = -217571706;

	t9 = ((x53*x54)<=(x55+x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x58 = INT16_MIN;
	int32_t t10 = 9867;

	t10 = ((x57*x58)<=(x59+x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = -8;
	uint32_t x67 = 1U;
	int8_t x68 = 13;
	static int32_t t11 = 19;

	t11 = ((x65*x66)<=(x67+x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -1;
	uint64_t x70 = 1970LLU;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;

	t12 = ((x69*x70)<=(x71+x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x75 = INT8_MAX;
	static int8_t x76 = -1;
	int32_t t13 = 1;

	t13 = ((x73*x74)<=(x75+x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 40U;
	volatile uint32_t x83 = UINT32_MAX;
	volatile int8_t x84 = -1;
	volatile int32_t t14 = 20579;

	t14 = ((x81*x82)<=(x83+x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	volatile int32_t x99 = -1;
	uint64_t x100 = 966LLU;
	int32_t t15 = -2188;

	t15 = ((x97*x98)<=(x99+x100));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x101 = 2U;
	volatile int64_t x103 = -1LL;
	static uint16_t x104 = 380U;
	volatile int32_t t16 = 0;

	t16 = ((x101*x102)<=(x103+x104));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	int8_t x115 = 4;
	volatile int32_t x116 = INT32_MIN;

	t17 = ((x113*x114)<=(x115+x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x117 = INT8_MIN;
	uint8_t x118 = 50U;
	volatile uint8_t x119 = 0U;
	uint32_t x120 = 1U;

	t18 = ((x117*x118)<=(x119+x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x122 = 32658600;
	int16_t x123 = INT16_MIN;

	t19 = ((x121*x122)<=(x123+x124));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x129 = 11881883LLU;
	static int32_t x130 = -36091452;
	int16_t x131 = -159;
	uint16_t x132 = 11U;
	volatile int32_t t20 = -14326;

	t20 = ((x129*x130)<=(x131+x132));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x137 = -429;
	uint8_t x138 = 24U;
	uint16_t x139 = 10U;
	volatile int32_t x140 = INT32_MIN;
	static int32_t t21 = 97670482;

	t21 = ((x137*x138)<=(x139+x140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x141 = 0LLU;
	int16_t x142 = -1;
	int32_t x144 = INT32_MAX;
	static int32_t t22 = -485327;

	t22 = ((x141*x142)<=(x143+x144));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -7LL;
	int64_t x152 = -1LL;
	volatile int32_t t23 = 3705;

	t23 = ((x149*x150)<=(x151+x152));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x153 = 412752LLU;
	int8_t x154 = INT8_MAX;
	int16_t x155 = INT16_MAX;
	int64_t x156 = -1LL;

	t24 = ((x153*x154)<=(x155+x156));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x157 = -1;
	int64_t x158 = -8114389230242LL;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -127014LL;
	volatile int32_t t25 = -1;

	t25 = ((x157*x158)<=(x159+x160));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = 29;
	int32_t x162 = 308967;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = -194470332722761LL;
	int32_t t26 = 0;

	t26 = ((x161*x162)<=(x163+x164));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile uint8_t x166 = 6U;
	int32_t x167 = -390986345;
	int16_t x168 = INT16_MAX;
	volatile int32_t t27 = -241;

	t27 = ((x165*x166)<=(x167+x168));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x169 = 13893;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t28 = 78767;

	t28 = ((x169*x170)<=(x171+x172));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x173 = 19U;
	int8_t x174 = -1;
	int32_t x176 = INT32_MIN;
	int32_t t29 = -13803;

	t29 = ((x173*x174)<=(x175+x176));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x189 = 0U;
	static int8_t x191 = 0;
	volatile int64_t x192 = INT64_MAX;
	int32_t t30 = 1;

	t30 = ((x189*x190)<=(x191+x192));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x193 = 101758820U;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;
	static uint16_t x196 = 13U;

	t31 = ((x193*x194)<=(x195+x196));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x217 = -1LL;
	uint32_t x218 = 26U;
	uint8_t x219 = 2U;
	uint32_t x220 = 49356047U;
	int32_t t32 = 1;

	t32 = ((x217*x218)<=(x219+x220));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x225 = 0;
	uint16_t x228 = 8U;
	int32_t t33 = 299219;

	t33 = ((x225*x226)<=(x227+x228));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x229 = 370874LLU;
	volatile int64_t x230 = -29626771245LL;
	uint8_t x232 = 17U;
	volatile int32_t t34 = -39;

	t34 = ((x229*x230)<=(x231+x232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x233 = 568628937U;
	static uint16_t x235 = UINT16_MAX;
	int32_t t35 = -313707;

	t35 = ((x233*x234)<=(x235+x236));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x237 = -1;
	uint8_t x238 = 5U;
	static int16_t x239 = -3;
	static volatile int8_t x240 = -1;
	static volatile int32_t t36 = 3814125;

	t36 = ((x237*x238)<=(x239+x240));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x245 = INT8_MAX;
	int8_t x248 = 4;

	t37 = ((x245*x246)<=(x247+x248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = 0U;
	int16_t x259 = INT16_MAX;
	volatile uint16_t x260 = UINT16_MAX;
	int32_t t38 = -750;

	t38 = ((x257*x258)<=(x259+x260));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x261 = -10027;
	static uint64_t x262 = 880768481678LLU;
	uint8_t x264 = 3U;

	t39 = ((x261*x262)<=(x263+x264));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MIN;
	static uint32_t x271 = 2311U;
	int32_t t40 = 39;

	t40 = ((x269*x270)<=(x271+x272));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x281 = INT16_MAX;
	int8_t x282 = -1;
	int16_t x283 = 55;
	int16_t x284 = -3;

	t41 = ((x281*x282)<=(x283+x284));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x290 = -1;
	volatile uint16_t x291 = 0U;
	static int64_t x292 = -99152368748349LL;
	int32_t t42 = -116056429;

	t42 = ((x289*x290)<=(x291+x292));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x297 = INT16_MAX;
	uint64_t x298 = UINT64_MAX;
	volatile uint32_t x299 = 1107594993U;
	static int32_t x300 = 0;

	t43 = ((x297*x298)<=(x299+x300));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x301 = -1;
	int8_t x302 = INT8_MAX;
	uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MIN;
	static int32_t t44 = 99852;

	t44 = ((x301*x302)<=(x303+x304));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x305 = 43U;
	uint16_t x306 = 5U;
	int32_t x307 = 3;
	volatile int32_t t45 = -3;

	t45 = ((x305*x306)<=(x307+x308));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x317 = 14181652;
	int8_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	volatile int8_t x320 = INT8_MIN;
	int32_t t46 = 18;

	t46 = ((x317*x318)<=(x319+x320));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x321 = INT8_MAX;
	uint16_t x322 = 3839U;
	static uint16_t x323 = UINT16_MAX;
	int8_t x324 = 1;

	t47 = ((x321*x322)<=(x323+x324));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x325 = 65985189485005LL;
	uint32_t x328 = 1617941U;

	t48 = ((x325*x326)<=(x327+x328));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x329 = INT8_MAX;
	uint32_t x330 = 1U;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -1;
	int32_t t49 = -8771;

	t49 = ((x329*x330)<=(x331+x332));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x333 = 53441930710LL;
	uint64_t x334 = 2009612717LLU;
	int64_t x335 = INT64_MAX;
	int64_t x336 = -1LL;
	volatile int32_t t50 = -1;

	t50 = ((x333*x334)<=(x335+x336));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = 32715LL;
	int32_t t51 = 64903;

	t51 = ((x337*x338)<=(x339+x340));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x342 = INT16_MIN;
	int8_t x344 = -2;

	t52 = ((x341*x342)<=(x343+x344));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x345 = 31;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t53 = -43258;

	t53 = ((x345*x346)<=(x347+x348));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x349 = 395U;
	int8_t x350 = INT8_MIN;
	volatile int16_t x351 = -1;
	int8_t x352 = 0;
	int32_t t54 = -165011;

	t54 = ((x349*x350)<=(x351+x352));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x353 = UINT16_MAX;
	int16_t x355 = INT16_MIN;
	int8_t x356 = 1;
	int32_t t55 = 0;

	t55 = ((x353*x354)<=(x355+x356));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x362 = 649441860322222140LLU;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t56 = 2944;

	t56 = ((x361*x362)<=(x363+x364));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x370 = INT16_MIN;
	volatile uint8_t x371 = 6U;
	uint32_t x372 = UINT32_MAX;
	int32_t t57 = 206;

	t57 = ((x369*x370)<=(x371+x372));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x389 = 712362U;
	volatile int16_t x391 = 847;
	volatile uint32_t x392 = UINT32_MAX;
	int32_t t58 = -275689;

	t58 = ((x389*x390)<=(x391+x392));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x401 = -1;
	volatile int32_t x402 = 101975;
	static int16_t x403 = INT16_MIN;
	int64_t x404 = 1LL;
	int32_t t59 = -254;

	t59 = ((x401*x402)<=(x403+x404));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x406 = 20U;
	static volatile uint32_t x407 = 30U;
	int16_t x408 = -590;
	volatile int32_t t60 = -7053687;

	t60 = ((x405*x406)<=(x407+x408));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x409 = 2022U;
	volatile int8_t x410 = 20;
	uint8_t x411 = UINT8_MAX;
	static int32_t x412 = -41;

	t61 = ((x409*x410)<=(x411+x412));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x413 = INT16_MIN;
	static uint64_t x415 = 719293038328LLU;
	volatile uint8_t x416 = 26U;
	int32_t t62 = -2921465;

	t62 = ((x413*x414)<=(x415+x416));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x421 = -1LL;
	int64_t x422 = -113LL;
	uint64_t x423 = 199LLU;
	volatile int64_t x424 = -1LL;
	volatile int32_t t63 = 15148205;

	t63 = ((x421*x422)<=(x423+x424));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x433 = -31;
	int16_t x434 = INT16_MIN;
	volatile int16_t x436 = INT16_MIN;
	int32_t t64 = 0;

	t64 = ((x433*x434)<=(x435+x436));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x438 = -1LL;
	uint32_t x439 = UINT32_MAX;
	int32_t t65 = 14834914;

	t65 = ((x437*x438)<=(x439+x440));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x441 = 0;
	uint16_t x443 = 1U;
	uint32_t x444 = 2271695U;

	t66 = ((x441*x442)<=(x443+x444));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x453 = UINT16_MAX;
	volatile int16_t x454 = INT16_MIN;
	int64_t x455 = -1LL;
	static int8_t x456 = 7;
	int32_t t67 = 3903134;

	t67 = ((x453*x454)<=(x455+x456));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x457 = -4892;
	volatile uint32_t x458 = 2U;
	static int64_t x460 = 118220701LL;
	int32_t t68 = 3958188;

	t68 = ((x457*x458)<=(x459+x460));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x461 = -138500055LL;
	static uint16_t x462 = UINT16_MAX;
	static volatile int64_t x463 = INT64_MAX;
	int16_t x464 = INT16_MIN;
	int32_t t69 = -1533;

	t69 = ((x461*x462)<=(x463+x464));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x466 = INT8_MAX;
	volatile int64_t x467 = 1324498470424682257LL;
	uint64_t x468 = UINT64_MAX;
	int32_t t70 = 227123268;

	t70 = ((x465*x466)<=(x467+x468));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x472 = 1844241LLU;
	int32_t t71 = -1897838;

	t71 = ((x469*x470)<=(x471+x472));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x474 = UINT8_MAX;
	volatile int32_t x475 = INT32_MIN;
	volatile int32_t t72 = 2;

	t72 = ((x473*x474)<=(x475+x476));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x477 = UINT8_MAX;
	static int64_t x479 = INT64_MIN;
	int64_t x480 = 55785LL;
	static volatile int32_t t73 = -21;

	t73 = ((x477*x478)<=(x479+x480));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x481 = 84470649U;
	int16_t x482 = -12;
	int32_t x483 = -1;
	uint32_t x484 = 365U;
	volatile int32_t t74 = 4;

	t74 = ((x481*x482)<=(x483+x484));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x485 = -1;
	int16_t x486 = INT16_MAX;
	volatile int16_t x487 = INT16_MIN;
	static int8_t x488 = -1;

	t75 = ((x485*x486)<=(x487+x488));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x493 = UINT16_MAX;
	static uint64_t x496 = 444305009510012643LLU;
	static volatile int32_t t76 = 34;

	t76 = ((x493*x494)<=(x495+x496));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x505 = -2340597613988LL;
	static uint8_t x506 = 1U;
	uint32_t x507 = 875927U;
	uint8_t x508 = 78U;

	t77 = ((x505*x506)<=(x507+x508));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x509 = 16356U;
	uint64_t x510 = 15622362694LLU;
	int32_t x511 = -1;
	static uint32_t x512 = 8188U;
	int32_t t78 = -1420949;

	t78 = ((x509*x510)<=(x511+x512));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x515 = 0;
	int64_t x516 = INT64_MIN;

	t79 = ((x513*x514)<=(x515+x516));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x517 = -1;
	int16_t x518 = INT16_MAX;
	uint64_t x519 = 109005LLU;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t80 = 71393080;

	t80 = ((x517*x518)<=(x519+x520));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x525 = INT8_MIN;
	static uint64_t x526 = UINT64_MAX;
	int8_t x527 = -32;
	static uint16_t x528 = UINT16_MAX;
	int32_t t81 = -708336256;

	t81 = ((x525*x526)<=(x527+x528));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x534 = -14;
	static int32_t x535 = 1;
	volatile int32_t t82 = 57345;

	t82 = ((x533*x534)<=(x535+x536));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x537 = -16198;
	static int8_t x538 = INT8_MIN;
	int32_t x539 = INT32_MIN;
	int64_t x540 = INT64_MAX;
	static volatile int32_t t83 = -126946150;

	t83 = ((x537*x538)<=(x539+x540));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x545 = -1LL;
	uint32_t x546 = UINT32_MAX;
	int16_t x547 = 3;
	int8_t x548 = INT8_MIN;
	volatile int32_t t84 = 25;

	t84 = ((x545*x546)<=(x547+x548));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x557 = -1LL;
	volatile int64_t x558 = INT64_MAX;
	uint16_t x559 = 0U;
	int8_t x560 = INT8_MAX;
	int32_t t85 = -1179;

	t85 = ((x557*x558)<=(x559+x560));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x566 = 248303997;
	volatile int32_t x568 = -62613100;
	static int32_t t86 = 573647414;

	t86 = ((x565*x566)<=(x567+x568));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x569 = UINT64_MAX;
	volatile int64_t x570 = INT64_MIN;
	static int64_t x572 = INT64_MIN;
	static int32_t t87 = 367631408;

	t87 = ((x569*x570)<=(x571+x572));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x592 = 16176;
	static volatile int32_t t88 = 186454;

	t88 = ((x589*x590)<=(x591+x592));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x593 = INT64_MIN;
	volatile uint8_t x595 = UINT8_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t89 = 25644166;

	t89 = ((x593*x594)<=(x595+x596));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x601 = -5070287LL;
	int8_t x602 = INT8_MAX;
	uint32_t x603 = UINT32_MAX;
	volatile int16_t x604 = INT16_MIN;

	t90 = ((x601*x602)<=(x603+x604));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x609 = -88064LL;
	int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MAX;
	static volatile int32_t x612 = 1551;
	static volatile int32_t t91 = -2967;

	t91 = ((x609*x610)<=(x611+x612));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x613 = UINT64_MAX;
	static int16_t x614 = INT16_MIN;
	static uint8_t x615 = 41U;
	static volatile int8_t x616 = -1;

	t92 = ((x613*x614)<=(x615+x616));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x617 = 1;
	volatile uint16_t x618 = 56U;
	int8_t x619 = INT8_MIN;
	uint64_t x620 = UINT64_MAX;
	static volatile int32_t t93 = 9966;

	t93 = ((x617*x618)<=(x619+x620));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x621 = 1554LLU;
	uint32_t x624 = 360847U;
	volatile int32_t t94 = 477;

	t94 = ((x621*x622)<=(x623+x624));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x625 = 34U;
	volatile int16_t x626 = -1;
	int64_t x627 = -1LL;
	static int16_t x628 = -1;
	volatile int32_t t95 = 205530819;

	t95 = ((x625*x626)<=(x627+x628));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x629 = 8U;
	volatile int64_t x630 = -512600324486LL;
	static volatile int64_t x631 = 1257975LL;
	int16_t x632 = INT16_MIN;
	volatile int32_t t96 = 9782;

	t96 = ((x629*x630)<=(x631+x632));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x637 = 64;
	int16_t x638 = INT16_MIN;
	int64_t x639 = -1LL;
	static int32_t x640 = 183038600;

	t97 = ((x637*x638)<=(x639+x640));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x641 = INT32_MAX;
	static volatile uint64_t x642 = 15898071LLU;
	volatile int64_t x643 = 1035LL;
	volatile uint8_t x644 = UINT8_MAX;
	volatile int32_t t98 = 44;

	t98 = ((x641*x642)<=(x643+x644));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x646 = 2745527770LL;
	int32_t x648 = -1;

	t99 = ((x645*x646)<=(x647+x648));

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

