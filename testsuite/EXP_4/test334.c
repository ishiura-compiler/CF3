#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
volatile int16_t x4 = -1;
int32_t x10 = INT32_MIN;
uint16_t x14 = 484U;
uint32_t x16 = 515599938U;
int32_t t3 = 25;
int64_t x30 = -1LL;
int16_t x37 = INT16_MIN;
static uint64_t x39 = UINT64_MAX;
static volatile int32_t t6 = -885088;
int64_t x42 = INT64_MAX;
uint64_t x45 = 877LLU;
static volatile int32_t t11 = 19827782;
int32_t x61 = INT32_MIN;
int8_t x71 = 40;
int64_t x72 = -6819LL;
int8_t x80 = 0;
uint64_t x83 = 2054LLU;
uint16_t x86 = 49U;
int16_t x87 = 3094;
int32_t t16 = 15056096;
int32_t x90 = INT32_MAX;
int64_t x92 = INT64_MIN;
int16_t x112 = -180;
uint16_t x113 = UINT16_MAX;
static volatile uint8_t x124 = 1U;
static volatile int8_t x131 = -1;
int16_t x135 = 5;
int64_t x137 = INT64_MAX;
static int32_t x138 = -123832;
uint64_t x139 = UINT64_MAX;
int16_t x147 = INT16_MIN;
volatile int32_t t29 = 1327;
int64_t x155 = -1LL;
uint8_t x163 = UINT8_MAX;
volatile uint16_t x167 = UINT16_MAX;
uint16_t x169 = UINT16_MAX;
int32_t x170 = INT32_MIN;
static int64_t x175 = -1LL;
volatile int32_t x183 = 25425567;
int32_t x188 = -1;
int32_t x193 = INT32_MAX;
int32_t x194 = INT32_MAX;
int32_t x195 = -36047;
int64_t x198 = INT64_MIN;
static int8_t x201 = INT8_MIN;
uint8_t x202 = 101U;
static int32_t t41 = 53046;
volatile int64_t x229 = -2172144012409846052LL;
static int16_t x236 = -95;
volatile int32_t t47 = -38;
int8_t x239 = -2;
static int32_t x243 = INT32_MIN;
int32_t t50 = 5169592;
int64_t x258 = INT64_MIN;
static volatile int32_t x264 = -1281046;
int16_t x269 = 6;
int32_t t57 = 127048;
volatile int16_t x281 = -1;
static volatile uint32_t x288 = 1901478U;
int32_t t60 = 78378702;
int32_t x291 = INT32_MIN;
int16_t x293 = -8;
int32_t x294 = -124;
uint64_t x297 = UINT64_MAX;
uint8_t x301 = UINT8_MAX;
static volatile int64_t x302 = -1LL;
static volatile uint16_t x307 = 3U;
int64_t x308 = 14LL;
static int8_t x309 = 11;
uint16_t x317 = 831U;
static uint32_t x318 = 239U;
int8_t x322 = INT8_MIN;
static uint32_t x325 = 4371U;
volatile int8_t x328 = -53;
uint32_t x332 = UINT32_MAX;
int8_t x334 = -12;
static int32_t t73 = 238;
static volatile int64_t x342 = INT64_MIN;
int32_t x344 = 16707;
static volatile int32_t t75 = -260293690;
static uint64_t x352 = UINT64_MAX;
uint8_t x353 = 8U;
int8_t x356 = INT8_MIN;
int8_t x366 = 0;
int32_t x369 = -1663204;
static volatile int16_t x371 = 995;
static uint64_t x374 = UINT64_MAX;
int32_t x376 = -1;
uint16_t x393 = 28740U;
int8_t x395 = -1;
static int8_t x397 = INT8_MAX;
uint8_t x403 = UINT8_MAX;
int16_t x407 = -1;
uint8_t x411 = UINT8_MAX;
uint16_t x425 = 1U;
int64_t x426 = INT64_MIN;
int16_t x427 = -459;
int8_t x429 = INT8_MIN;
volatile int32_t t93 = 21414;
uint8_t x438 = 55U;
static volatile uint16_t x441 = 94U;
int32_t x445 = -119893;
uint16_t x449 = 4U;
uint8_t x453 = 20U;
int8_t x454 = 26;


void f0(void) {
	uint16_t x1 = 128U;
	volatile int32_t x3 = 1;
	int32_t t0 = -1;

	t0 = (x1<(x2^(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MIN;
	static uint8_t x11 = 0U;
	int64_t x12 = INT64_MAX;
	volatile int32_t t1 = -9;

	t1 = (x9<(x10^(x11-x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 0U;
	static int16_t x15 = -55;
	int32_t t2 = 6;

	t2 = (x13<(x14^(x15-x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	volatile uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 2U;
	int16_t x24 = INT16_MIN;

	t3 = (x21<(x22^(x23-x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 5U;
	int8_t x26 = -45;
	volatile int64_t x27 = -1LL;
	uint64_t x28 = 129028667702830804LLU;
	static int32_t t4 = 767968904;

	t4 = (x25<(x26^(x27-x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 1453;
	volatile int32_t x31 = -1;
	static volatile uint64_t x32 = 17010LLU;
	static volatile int32_t t5 = 3770;

	t5 = (x29<(x30^(x31-x32)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = INT8_MIN;
	int64_t x40 = -1LL;

	t6 = (x37<(x38^(x39-x40)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 1;
	static int32_t x43 = INT32_MAX;
	uint64_t x44 = 4048275424606LLU;
	volatile int32_t t7 = 635;

	t7 = (x41<(x42^(x43-x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = 2U;
	volatile int32_t x47 = -19212;
	volatile int64_t x48 = INT64_MIN;
	static volatile int32_t t8 = 894;

	t8 = (x45<(x46^(x47-x48)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = INT16_MAX;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	uint8_t x52 = 101U;
	int32_t t9 = 1585473;

	t9 = (x49<(x50^(x51-x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = 0;
	int16_t x54 = INT16_MIN;
	static uint64_t x55 = UINT64_MAX;
	static int64_t x56 = INT64_MAX;
	volatile int32_t t10 = -301083183;

	t10 = (x53<(x54^(x55-x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 4U;
	volatile int16_t x58 = INT16_MIN;
	static int8_t x59 = -5;
	static volatile uint64_t x60 = 0LLU;

	t11 = (x57<(x58^(x59-x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = INT64_MIN;
	static int8_t x63 = -1;
	static uint32_t x64 = 871U;
	int32_t t12 = -98214938;

	t12 = (x61<(x62^(x63-x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -1;
	static volatile uint32_t x70 = UINT32_MAX;
	int32_t t13 = 253369;

	t13 = (x69<(x70^(x71-x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 3U;
	int16_t x78 = INT16_MIN;
	int64_t x79 = INT64_MIN;
	volatile int32_t t14 = 19280;

	t14 = (x77<(x78^(x79-x80)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	volatile int64_t x82 = -49076933350LL;
	int32_t x84 = INT32_MIN;
	volatile int32_t t15 = 1;

	t15 = (x81<(x82^(x83-x84)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -487LL;
	static int16_t x88 = INT16_MIN;

	t16 = (x85<(x86^(x87-x88)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	static int64_t x91 = -768770LL;
	int32_t t17 = 3795;

	t17 = (x89<(x90^(x91-x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = 1202549LL;
	static int32_t x95 = -2296;
	static volatile int16_t x96 = INT16_MIN;
	volatile int32_t t18 = -650315966;

	t18 = (x93<(x94^(x95-x96)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = 209;
	int32_t x99 = INT32_MIN;
	static volatile int32_t x100 = INT32_MIN;
	volatile int32_t t19 = 582075309;

	t19 = (x97<(x98^(x99-x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = 110LL;
	int8_t x106 = -1;
	static int16_t x107 = INT16_MAX;
	static uint64_t x108 = 172321647391923095LLU;
	static volatile int32_t t20 = 20398;

	t20 = (x105<(x106^(x107-x108)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MAX;
	uint16_t x110 = 8020U;
	static volatile int8_t x111 = -1;
	volatile int32_t t21 = -975;

	t21 = (x109<(x110^(x111-x112)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x114 = -1;
	uint32_t x115 = 9909799U;
	volatile uint16_t x116 = UINT16_MAX;
	int32_t t22 = 322569;

	t22 = (x113<(x114^(x115-x116)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = -61391899;
	volatile int32_t x118 = INT32_MIN;
	static volatile int16_t x119 = INT16_MAX;
	int32_t x120 = -2;
	int32_t t23 = 91895;

	t23 = (x117<(x118^(x119-x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 393891U;
	uint16_t x122 = UINT16_MAX;
	static int8_t x123 = INT8_MIN;
	int32_t t24 = -46;

	t24 = (x121<(x122^(x123-x124)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MAX;
	volatile uint8_t x130 = 3U;
	int32_t x132 = -1;
	static volatile int32_t t25 = 949808;

	t25 = (x129<(x130^(x131-x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = 690945363;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t26 = -6040015;

	t26 = (x133<(x134^(x135-x136)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x140 = UINT64_MAX;
	int32_t t27 = 2528476;

	t27 = (x137<(x138^(x139-x140)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = 2134;
	int8_t x142 = -1;
	int32_t x143 = INT32_MIN;
	volatile int16_t x144 = -15;
	volatile int32_t t28 = -4921;

	t28 = (x141<(x142^(x143-x144)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x145 = INT8_MIN;
	int32_t x146 = 15914876;
	int64_t x148 = 495442293582296561LL;

	t29 = (x145<(x146^(x147-x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = 0;
	volatile int64_t x154 = INT64_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t30 = -39;

	t30 = (x153<(x154^(x155-x156)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -1614;
	volatile int64_t x162 = 32329LL;
	int64_t x164 = INT64_MAX;
	static int32_t t31 = 1003;

	t31 = (x161<(x162^(x163-x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x165 = 116U;
	int8_t x166 = 1;
	int32_t x168 = -152969;
	int32_t t32 = 23686;

	t32 = (x165<(x166^(x167-x168)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x171 = 191714477403LL;
	static volatile int64_t x172 = 3143LL;
	volatile int32_t t33 = -1067620352;

	t33 = (x169<(x170^(x171-x172)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int64_t x174 = -953940LL;
	volatile uint16_t x176 = 107U;
	static int32_t t34 = -80558208;

	t34 = (x173<(x174^(x175-x176)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x181 = -1;
	volatile int32_t x182 = INT32_MIN;
	uint8_t x184 = 0U;
	volatile int32_t t35 = 68983799;

	t35 = (x181<(x182^(x183-x184)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x185 = INT8_MAX;
	int8_t x186 = 1;
	uint16_t x187 = UINT16_MAX;
	int32_t t36 = 2733;

	t36 = (x185<(x186^(x187-x188)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x196 = -17053394;
	volatile int32_t t37 = 1319;

	t37 = (x193<(x194^(x195-x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = INT32_MIN;
	int32_t x199 = -36818;
	static uint16_t x200 = 4281U;
	int32_t t38 = -14961066;

	t38 = (x197<(x198^(x199-x200)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x203 = -1;
	int64_t x204 = INT64_MAX;
	volatile int32_t t39 = -30;

	t39 = (x201<(x202^(x203-x204)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x205 = 83U;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -1058548437LL;
	int32_t t40 = 385449;

	t40 = (x205<(x206^(x207-x208)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x210 = 1719105482594488LL;
	static uint64_t x211 = 10LLU;
	static uint64_t x212 = 9005665LLU;

	t41 = (x209<(x210^(x211-x212)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x213 = 1;
	volatile int16_t x214 = -1;
	int64_t x215 = -305975728827LL;
	uint8_t x216 = 0U;
	static int32_t t42 = 8681;

	t42 = (x213<(x214^(x215-x216)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 3U;
	volatile uint16_t x218 = 21956U;
	static int32_t x219 = -13938;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t43 = -3104;

	t43 = (x217<(x218^(x219-x220)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x221 = -439940;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = -1;
	uint32_t x224 = 6U;
	volatile int32_t t44 = 10456;

	t44 = (x221<(x222^(x223-x224)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x225 = 14330310U;
	int64_t x226 = INT64_MIN;
	volatile uint64_t x227 = UINT64_MAX;
	int64_t x228 = -1LL;
	static int32_t t45 = -5520664;

	t45 = (x225<(x226^(x227-x228)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x230 = 155317976833LL;
	volatile uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t46 = -28;

	t46 = (x229<(x230^(x231-x232)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x233 = -716968LL;
	static volatile int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;

	t47 = (x233<(x234^(x235-x236)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MAX;
	volatile uint8_t x240 = 3U;
	volatile int32_t t48 = -5181;

	t48 = (x237<(x238^(x239-x240)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MAX;
	uint32_t x242 = 112U;
	uint64_t x244 = 91977616227210042LLU;
	int32_t t49 = -81889;

	t49 = (x241<(x242^(x243-x244)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	static int8_t x247 = -1;
	static uint16_t x248 = 892U;

	t50 = (x245<(x246^(x247-x248)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -1;
	uint32_t x250 = 31U;
	int32_t x251 = -1;
	uint32_t x252 = 1U;
	static volatile int32_t t51 = -1;

	t51 = (x249<(x250^(x251-x252)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 13607LLU;
	static int32_t x254 = -776321;
	uint32_t x255 = UINT32_MAX;
	static int8_t x256 = -1;
	volatile int32_t t52 = -496845;

	t52 = (x253<(x254^(x255-x256)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x257 = INT16_MIN;
	int64_t x259 = -1LL;
	static int16_t x260 = 0;
	int32_t t53 = -1;

	t53 = (x257<(x258^(x259-x260)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MIN;
	volatile uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	static volatile int32_t t54 = 22064345;

	t54 = (x261<(x262^(x263-x264)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x265 = 8;
	static volatile int16_t x266 = INT16_MAX;
	volatile uint32_t x267 = 1718855044U;
	int16_t x268 = -60;
	int32_t t55 = 133301572;

	t55 = (x265<(x266^(x267-x268)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x270 = 5U;
	static uint32_t x271 = 839681312U;
	uint64_t x272 = 37017548311LLU;
	volatile int32_t t56 = -569873832;

	t56 = (x269<(x270^(x271-x272)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x273 = 358U;
	static int16_t x274 = -1;
	int8_t x275 = 0;
	static int64_t x276 = -1LL;

	t57 = (x273<(x274^(x275-x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = 44;
	int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	static uint32_t x280 = UINT32_MAX;
	int32_t t58 = -279961506;

	t58 = (x277<(x278^(x279-x280)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x282 = 2122943;
	static uint8_t x283 = 0U;
	static int16_t x284 = 439;
	volatile int32_t t59 = 2;

	t59 = (x281<(x282^(x283-x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x285 = INT8_MIN;
	uint8_t x286 = 46U;
	static uint64_t x287 = UINT64_MAX;

	t60 = (x285<(x286^(x287-x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t61 = 2;

	t61 = (x289<(x290^(x291-x292)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x295 = 2U;
	static uint32_t x296 = 138464U;
	static volatile int32_t t62 = 1;

	t62 = (x293<(x294^(x295-x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x298 = INT16_MIN;
	static int16_t x299 = -194;
	volatile uint64_t x300 = 400898785632LLU;
	volatile int32_t t63 = -7;

	t63 = (x297<(x298^(x299-x300)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x303 = 237U;
	volatile uint32_t x304 = UINT32_MAX;
	int32_t t64 = 51;

	t64 = (x301<(x302^(x303-x304)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	int32_t t65 = 65710475;

	t65 = (x305<(x306^(x307-x308)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x310 = INT16_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 1449U;
	static int32_t t66 = 767;

	t66 = (x309<(x310^(x311-x312)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = 93967716866527027LLU;
	int32_t x314 = 102852460;
	volatile uint16_t x315 = 1005U;
	int64_t x316 = INT64_MAX;
	int32_t t67 = 1928671;

	t67 = (x313<(x314^(x315-x316)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x319 = INT32_MAX;
	uint16_t x320 = UINT16_MAX;
	int32_t t68 = -57217;

	t68 = (x317<(x318^(x319-x320)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = 1961149047U;
	volatile int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	static volatile int32_t t69 = -1;

	t69 = (x321<(x322^(x323-x324)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x326 = INT64_MIN;
	int64_t x327 = -5419986664478417LL;
	int32_t t70 = -1789433;

	t70 = (x325<(x326^(x327-x328)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = 0U;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -104LL;
	static volatile int32_t t71 = 1010749;

	t71 = (x329<(x330^(x331-x332)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x333 = UINT16_MAX;
	int32_t x335 = -1;
	static volatile uint16_t x336 = 1579U;
	volatile int32_t t72 = 52779;

	t72 = (x333<(x334^(x335-x336)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MIN;
	static uint32_t x339 = 629493178U;
	static uint16_t x340 = 29U;

	t73 = (x337<(x338^(x339-x340)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = -99;
	volatile uint32_t x343 = 61U;
	int32_t t74 = 96902923;

	t74 = (x341<(x342^(x343-x344)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MAX;
	static int16_t x347 = INT16_MAX;
	int32_t x348 = -2811;

	t75 = (x345<(x346^(x347-x348)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = -54;
	int32_t x350 = INT32_MAX;
	volatile uint8_t x351 = 25U;
	volatile int32_t t76 = 216675;

	t76 = (x349<(x350^(x351-x352)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x354 = 494604730;
	int64_t x355 = -1LL;
	volatile int32_t t77 = 94;

	t77 = (x353<(x354^(x355-x356)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x365 = INT16_MIN;
	int32_t x367 = -1;
	static uint16_t x368 = 0U;
	volatile int32_t t78 = 943;

	t78 = (x365<(x366^(x367-x368)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x370 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t79 = -43133141;

	t79 = (x369<(x370^(x371-x372)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x373 = INT16_MIN;
	volatile int16_t x375 = 244;
	volatile int32_t t80 = -7534;

	t80 = (x373<(x374^(x375-x376)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = -1;
	uint64_t x378 = 8448LLU;
	int32_t x379 = INT32_MIN;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t81 = -192061;

	t81 = (x377<(x378^(x379-x380)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = 58568425LL;
	static int16_t x382 = 37;
	volatile uint8_t x383 = UINT8_MAX;
	uint8_t x384 = 58U;
	int32_t t82 = 1;

	t82 = (x381<(x382^(x383-x384)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x385 = -23;
	int16_t x386 = -2828;
	uint8_t x387 = 3U;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t83 = 54;

	t83 = (x385<(x386^(x387-x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x394 = 30U;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t84 = -1;

	t84 = (x393<(x394^(x395-x396)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x398 = -1LL;
	int16_t x399 = INT16_MAX;
	volatile uint64_t x400 = 5LLU;
	int32_t t85 = -27355;

	t85 = (x397<(x398^(x399-x400)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	volatile int8_t x404 = -1;
	volatile int32_t t86 = 1468035;

	t86 = (x401<(x402^(x403-x404)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x405 = 48;
	int32_t x406 = INT32_MIN;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t87 = -1;

	t87 = (x405<(x406^(x407-x408)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = -1;
	int8_t x412 = INT8_MIN;
	int32_t t88 = -4;

	t88 = (x409<(x410^(x411-x412)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = 0U;
	int8_t x414 = INT8_MAX;
	int32_t x415 = -1;
	volatile int8_t x416 = INT8_MIN;
	static int32_t t89 = 50;

	t89 = (x413<(x414^(x415-x416)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x417 = UINT8_MAX;
	int8_t x418 = INT8_MAX;
	volatile int32_t x419 = INT32_MAX;
	uint16_t x420 = UINT16_MAX;
	int32_t t90 = -8244304;

	t90 = (x417<(x418^(x419-x420)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x421 = UINT16_MAX;
	static uint32_t x422 = 6261372U;
	volatile int32_t x423 = INT32_MIN;
	static uint64_t x424 = UINT64_MAX;
	static int32_t t91 = 1;

	t91 = (x421<(x422^(x423-x424)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x428 = -1;
	volatile int32_t t92 = 189040187;

	t92 = (x425<(x426^(x427-x428)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x430 = UINT32_MAX;
	int16_t x431 = 8034;
	int8_t x432 = INT8_MAX;

	t93 = (x429<(x430^(x431-x432)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = -1LL;
	int8_t x434 = -1;
	uint8_t x435 = 4U;
	int32_t x436 = INT32_MAX;
	int32_t t94 = 114766158;

	t94 = (x433<(x434^(x435-x436)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x437 = -1;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = UINT32_MAX;
	int32_t t95 = 468;

	t95 = (x437<(x438^(x439-x440)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x442 = 6706U;
	int64_t x443 = 4119900071LL;
	volatile int64_t x444 = INT64_MAX;
	int32_t t96 = 4886422;

	t96 = (x441<(x442^(x443-x444)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x446 = INT8_MIN;
	static int32_t x447 = -1;
	int32_t x448 = 1102965;
	volatile int32_t t97 = -1;

	t97 = (x445<(x446^(x447-x448)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x450 = INT32_MIN;
	static int32_t x451 = -1;
	int64_t x452 = INT64_MAX;
	int32_t t98 = -9376;

	t98 = (x449<(x450^(x451-x452)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x455 = INT8_MIN;
	static uint8_t x456 = 24U;
	int32_t t99 = 1;

	t99 = (x453<(x454^(x455-x456)));

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

