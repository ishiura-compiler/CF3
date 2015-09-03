#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = 612;
static int64_t x11 = -16797139671019LL;
int64_t t4 = -17013880552315219LL;
int32_t t5 = -55654025;
volatile uint16_t x27 = 15278U;
uint16_t x29 = UINT16_MAX;
int8_t x32 = 22;
int32_t x33 = INT32_MAX;
int64_t x42 = 107168976LL;
uint32_t x48 = 9475106U;
int64_t x49 = -122914130210201097LL;
static uint16_t x52 = 2713U;
int32_t x54 = -3312598;
uint8_t x63 = 1U;
int32_t t14 = -16;
int32_t x70 = 675;
int8_t x75 = INT8_MIN;
volatile int32_t t19 = -2911374;
uint64_t x89 = UINT64_MAX;
uint64_t x90 = UINT64_MAX;
volatile int32_t t21 = 240700259;
volatile uint8_t x94 = UINT8_MAX;
int64_t x97 = INT64_MAX;
uint8_t x103 = 3U;
uint16_t x109 = 17U;
static int32_t t26 = 305135463;
static int8_t x114 = INT8_MIN;
uint32_t x116 = 0U;
int16_t x129 = INT16_MIN;
int64_t x131 = INT64_MIN;
uint32_t x140 = UINT32_MAX;
volatile uint32_t x147 = 488221U;
int16_t x148 = 13;
int8_t x151 = INT8_MAX;
uint32_t x155 = UINT32_MAX;
int32_t x156 = -879204;
static int16_t x159 = 120;
int32_t t36 = -978;
uint64_t x162 = 52940327540973871LLU;
int32_t t37 = -1358267;
uint64_t x167 = 332803LLU;
int8_t x168 = INT8_MIN;
int32_t t39 = -91;
static int16_t x185 = INT16_MIN;
uint16_t x187 = UINT16_MAX;
uint32_t x192 = UINT32_MAX;
volatile uint32_t t43 = UINT32_MAX;
volatile uint8_t x198 = UINT8_MAX;
int32_t t44 = 75967;
int8_t x202 = INT8_MIN;
int16_t x208 = -3255;
volatile int32_t t46 = -418979;
volatile int16_t x217 = INT16_MAX;
volatile int32_t t48 = -231;
int32_t x223 = -7026431;
int32_t t49 = 362796;
volatile int32_t t51 = 952047860;
int8_t x234 = 0;
uint64_t x246 = 657063788LLU;
static int16_t x247 = INT16_MIN;
int16_t x248 = INT16_MIN;
uint64_t x251 = 691760849876296LLU;
volatile int32_t t55 = 3992212;
int32_t x258 = -1;
volatile int32_t t56 = 481633258;
int32_t x265 = -30;
uint16_t x267 = 168U;
uint64_t x274 = 51519514922LLU;
volatile int8_t x275 = 0;
static volatile uint8_t x277 = UINT8_MAX;
int8_t x279 = INT8_MIN;
int32_t t65 = 84734484;
uint16_t x298 = UINT16_MAX;
uint16_t x299 = UINT16_MAX;
int64_t x300 = INT64_MAX;
int8_t x303 = INT8_MAX;
int64_t x309 = INT64_MIN;
static uint64_t x310 = UINT64_MAX;
int32_t t69 = 30733;
int8_t x313 = INT8_MAX;
static uint8_t x315 = UINT8_MAX;
volatile uint32_t x326 = 13U;
int64_t x333 = INT64_MIN;
static int8_t x336 = -1;
int16_t x343 = 3002;
int32_t x344 = -1;
static int64_t t77 = -528880650LL;
volatile int16_t x351 = INT16_MIN;
volatile uint8_t x358 = 105U;
uint64_t x359 = UINT64_MAX;
static volatile int32_t x365 = -14679097;
int32_t x371 = -1;
int32_t t82 = 1;
static int8_t x376 = INT8_MAX;
uint64_t t84 = UINT64_MAX;
static int32_t x390 = INT32_MIN;
volatile uint8_t x391 = 0U;
static int64_t x394 = -1LL;
int8_t x411 = INT8_MIN;
static volatile int32_t t90 = 122176;
volatile int8_t x419 = INT8_MIN;
uint64_t x420 = 5615117LLU;
uint8_t x431 = 50U;
int64_t x432 = -1LL;
static int8_t x434 = INT8_MIN;
volatile int64_t x436 = 4174628837642LL;
volatile int16_t x437 = -1;
int16_t x444 = INT16_MIN;
static int32_t t98 = -1;
int32_t x449 = -60385879;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int16_t x2 = 245;
	uint32_t x3 = UINT32_MAX;
	volatile uint8_t x4 = 7U;
	volatile int32_t t0 = -6507566;

	t0 = ((x1<=(x2-x3))|x4);

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = -13;
	int8_t x7 = INT8_MIN;
	volatile int16_t x8 = INT16_MIN;
	static int32_t t1 = 35;

	t1 = ((x5<=(x6-x7))|x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile int16_t x10 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x9<=(x10-x11))|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint8_t x14 = 1U;
	int64_t x15 = 2029779097362012LL;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 15966;

	t3 = ((x13<=(x14-x15))|x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 44U;
	int16_t x18 = -1;
	int32_t x19 = -20555927;
	int64_t x20 = INT64_MIN;

	t4 = ((x17<=(x18-x19))|x20);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = -1;
	int16_t x23 = 0;
	int8_t x24 = 1;

	t5 = ((x21<=(x22-x23))|x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint16_t x26 = 28822U;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 6;

	t6 = ((x25<=(x26-x27))|x28);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x30 = 268617198LLU;
	int8_t x31 = INT8_MIN;
	int32_t t7 = 605713;

	t7 = ((x29<=(x30-x31))|x32);

	if (t7 != 23) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 1592;

	t8 = ((x33<=(x34-x35))|x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 465;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = -1;
	static int8_t x40 = 1;
	static volatile int32_t t9 = 1;

	t9 = ((x37<=(x38-x39))|x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x43 = INT32_MAX;
	volatile int16_t x44 = -1;
	static volatile int32_t t10 = 89701;

	t10 = ((x41<=(x42-x43))|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	volatile int8_t x46 = INT8_MIN;
	static int32_t x47 = INT32_MIN;
	volatile uint32_t t11 = 13404406U;

	t11 = ((x45<=(x46-x47))|x48);

	if (t11 != 9475106U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -20;
	static int32_t x51 = -18;
	volatile int32_t t12 = 787;

	t12 = ((x49<=(x50-x51))|x52);

	if (t12 != 2713) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint8_t x55 = 1U;
	uint8_t x56 = 20U;
	static int32_t t13 = -8;

	t13 = ((x53<=(x54-x55))|x56);

	if (t13 != 20) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = -2;
	static int8_t x64 = -1;

	t14 = ((x61<=(x62-x63))|x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 67565284466976690LL;
	int32_t x66 = 121599176;
	static int8_t x67 = INT8_MIN;
	volatile int8_t x68 = INT8_MAX;
	static int32_t t15 = 966869;

	t15 = ((x65<=(x66-x67))|x68);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -17876;
	uint64_t x71 = 290960873355LLU;
	int32_t x72 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = ((x69<=(x70-x71))|x72);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = -1;
	volatile int32_t x74 = -1;
	static int64_t x76 = 115373864456390LL;
	static int64_t t17 = 5150100736LL;

	t17 = ((x73<=(x74-x75))|x76);

	if (t17 != 115373864456391LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	volatile uint8_t x78 = 1U;
	volatile int64_t x79 = -591457LL;
	static int32_t x80 = 627998388;
	int32_t t18 = 8005;

	t18 = ((x77<=(x78-x79))|x80);

	if (t18 != 627998389) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	volatile uint64_t x82 = UINT64_MAX;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;

	t19 = ((x81<=(x82-x83))|x84);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 59352243224320LLU;
	int32_t x86 = INT32_MAX;
	static volatile uint32_t x87 = 15718U;
	int32_t x88 = -156;
	volatile int32_t t20 = 1;

	t20 = ((x85<=(x86-x87))|x88);

	if (t20 != -156) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x91 = 85U;
	uint8_t x92 = UINT8_MAX;

	t21 = ((x89<=(x90-x91))|x92);

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x95 = 21LLU;
	static volatile int32_t x96 = INT32_MIN;
	static volatile int32_t t22 = INT32_MIN;

	t22 = ((x93<=(x94-x95))|x96);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x98 = UINT64_MAX;
	static int64_t x99 = -1LL;
	volatile int8_t x100 = -1;
	volatile int32_t t23 = -15753;

	t23 = ((x97<=(x98-x99))|x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MIN;
	uint64_t x102 = 23LLU;
	static uint16_t x104 = 9941U;
	static int32_t t24 = 4;

	t24 = ((x101<=(x102-x103))|x104);

	if (t24 != 9941) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -1;
	static int16_t x106 = 10;
	static uint32_t x107 = UINT32_MAX;
	uint32_t x108 = UINT32_MAX;
	uint32_t t25 = UINT32_MAX;

	t25 = ((x105<=(x106-x107))|x108);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = 12U;
	int8_t x111 = INT8_MAX;
	volatile int8_t x112 = INT8_MAX;

	t26 = ((x109<=(x110-x111))|x112);

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int16_t x115 = 1;
	volatile uint32_t t27 = 49436U;

	t27 = ((x113<=(x114-x115))|x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = 1;
	static volatile int8_t x118 = 1;
	uint32_t x119 = 889558U;
	int32_t x120 = INT32_MIN;
	volatile int32_t t28 = -903777;

	t28 = ((x117<=(x118-x119))|x120);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MAX;
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	volatile int32_t x124 = INT32_MIN;
	static int32_t t29 = INT32_MIN;

	t29 = ((x121<=(x122-x123))|x124);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x130 = 19758611LLU;
	int8_t x132 = -37;
	volatile int32_t t30 = 1;

	t30 = ((x129<=(x130-x131))|x132);

	if (t30 != -37) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = 6300LL;
	int32_t x139 = -1;
	static uint32_t t31 = UINT32_MAX;

	t31 = ((x137<=(x138-x139))|x140);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	volatile uint32_t x142 = UINT32_MAX;
	volatile uint8_t x143 = 28U;
	int16_t x144 = -1820;
	int32_t t32 = -3;

	t32 = ((x141<=(x142-x143))|x144);

	if (t32 != -1819) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	int32_t x146 = INT32_MIN;
	volatile int32_t t33 = 62456864;

	t33 = ((x145<=(x146-x147))|x148);

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = 46;
	int16_t x150 = INT16_MIN;
	uint16_t x152 = 7U;
	static int32_t t34 = 1;

	t34 = ((x149<=(x150-x151))|x152);

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 3050077LLU;
	int32_t x154 = INT32_MAX;
	volatile int32_t t35 = 1923361;

	t35 = ((x153<=(x154-x155))|x156);

	if (t35 != -879203) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 417U;
	volatile uint8_t x158 = 82U;
	int8_t x160 = -1;

	t36 = ((x157<=(x158-x159))|x160);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 23500526728707416LLU;
	int32_t x163 = -106;
	int16_t x164 = -1;

	t37 = ((x161<=(x162-x163))|x164);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x165 = -212142;
	int8_t x166 = -1;
	int32_t t38 = -20246649;

	t38 = ((x165<=(x166-x167))|x168);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = INT16_MIN;
	uint8_t x170 = 22U;
	uint8_t x171 = 11U;
	int16_t x172 = 1;

	t39 = ((x169<=(x170-x171))|x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 184U;
	int64_t x174 = 266220588076439LL;
	volatile int32_t x175 = INT32_MIN;
	static volatile int64_t x176 = -1LL;
	int64_t t40 = 295362198766LL;

	t40 = ((x173<=(x174-x175))|x176);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x177 = INT16_MAX;
	int64_t x178 = 51026052LL;
	uint64_t x179 = 40620727LLU;
	volatile int64_t x180 = -59065057185LL;
	int64_t t41 = -145962LL;

	t41 = ((x177<=(x178-x179))|x180);

	if (t41 != -59065057185LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = -1;
	int16_t x188 = -2116;
	volatile int32_t t42 = -9896;

	t42 = ((x185<=(x186-x187))|x188);

	if (t42 != -2116) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = -1LL;
	static volatile int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;

	t43 = ((x189<=(x190-x191))|x192);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	int16_t x199 = -8;
	volatile int8_t x200 = -1;

	t44 = ((x197<=(x198-x199))|x200);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	int16_t x203 = -1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t45 = -19886;

	t45 = ((x201<=(x202-x203))|x204);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = -1;
	uint8_t x207 = 1U;

	t46 = ((x205<=(x206-x207))|x208);

	if (t46 != -3255) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 34U;
	volatile uint8_t x214 = 15U;
	volatile uint64_t x215 = 3111LLU;
	int32_t x216 = INT32_MIN;
	volatile int32_t t47 = -233680533;

	t47 = ((x213<=(x214-x215))|x216);

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x218 = INT32_MAX;
	volatile int8_t x219 = INT8_MAX;
	uint16_t x220 = 27044U;

	t48 = ((x217<=(x218-x219))|x220);

	if (t48 != 27045) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MAX;
	uint16_t x224 = 7920U;

	t49 = ((x221<=(x222-x223))|x224);

	if (t49 != 7921) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	static int64_t x226 = 602091802LL;
	int64_t x227 = INT64_MAX;
	int8_t x228 = INT8_MAX;
	int32_t t50 = 212512784;

	t50 = ((x225<=(x226-x227))|x228);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x229 = 22010U;
	int8_t x230 = -1;
	volatile uint64_t x231 = 8870443561059231LLU;
	int32_t x232 = -1;

	t51 = ((x229<=(x230-x231))|x232);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile uint32_t x235 = 2U;
	volatile int16_t x236 = -4;
	volatile int32_t t52 = 23374;

	t52 = ((x233<=(x234-x235))|x236);

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = INT32_MAX;
	int32_t t53 = -75;

	t53 = ((x245<=(x246-x247))|x248);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = UINT16_MAX;
	static int8_t x250 = INT8_MIN;
	uint64_t x252 = 5640971446490539LLU;
	volatile uint64_t t54 = 1877LLU;

	t54 = ((x249<=(x250-x251))|x252);

	if (t54 != 5640971446490539LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = INT32_MIN;
	static volatile int32_t x254 = -5915474;
	volatile int8_t x255 = INT8_MAX;
	volatile uint8_t x256 = UINT8_MAX;

	t55 = ((x253<=(x254-x255))|x256);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x257 = INT16_MIN;
	int32_t x259 = -1;
	int8_t x260 = INT8_MIN;

	t56 = ((x257<=(x258-x259))|x260);

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = 1U;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MAX;
	static uint16_t x264 = 3084U;
	int32_t t57 = -13150;

	t57 = ((x261<=(x262-x263))|x264);

	if (t57 != 3084) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x266 = INT8_MAX;
	int64_t x268 = INT64_MAX;
	int64_t t58 = INT64_MAX;

	t58 = ((x265<=(x266-x267))|x268);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MAX;
	static int16_t x271 = -1;
	int32_t x272 = 0;
	int32_t t59 = -71137;

	t59 = ((x269<=(x270-x271))|x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x273 = INT8_MAX;
	int64_t x276 = 24339829LL;
	volatile int64_t t60 = -315796031838882553LL;

	t60 = ((x273<=(x274-x275))|x276);

	if (t60 != 24339829LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x278 = UINT64_MAX;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t61 = INT32_MIN;

	t61 = ((x277<=(x278-x279))|x280);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x282 = -1;
	int64_t x283 = -54495448844213450LL;
	int64_t x284 = 3489049LL;
	int64_t t62 = 3646LL;

	t62 = ((x281<=(x282-x283))|x284);

	if (t62 != 3489049LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MAX;
	int32_t x286 = 9;
	static volatile uint16_t x287 = 42U;
	static uint64_t x288 = 680256824050LLU;
	volatile uint64_t t63 = 1000LLU;

	t63 = ((x285<=(x286-x287))|x288);

	if (t63 != 680256824050LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = 1;
	volatile int8_t x290 = 56;
	int8_t x291 = INT8_MIN;
	static int64_t x292 = INT64_MIN;
	static int64_t t64 = 313747LL;

	t64 = ((x289<=(x290-x291))|x292);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x293 = 0U;
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = UINT8_MAX;
	static int32_t x296 = 1;

	t65 = ((x293<=(x294-x295))|x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = INT32_MIN;
	static volatile int64_t t66 = INT64_MAX;

	t66 = ((x297<=(x298-x299))|x300);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = UINT32_MAX;
	volatile int32_t x304 = -1;
	static volatile int32_t t67 = -2943;

	t67 = ((x301<=(x302-x303))|x304);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x305 = -1LL;
	static uint16_t x306 = 3015U;
	int64_t x307 = INT64_MAX;
	int64_t x308 = -1LL;
	int64_t t68 = 6282861773117LL;

	t68 = ((x305<=(x306-x307))|x308);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x311 = -2784;
	int8_t x312 = INT8_MAX;

	t69 = ((x309<=(x310-x311))|x312);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = ((x313<=(x314-x315))|x316);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x321 = INT8_MIN;
	uint16_t x322 = 125U;
	uint64_t x323 = 9367604770068LLU;
	static volatile int16_t x324 = -1;
	int32_t t71 = 9;

	t71 = ((x321<=(x322-x323))|x324);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x327 = 0U;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t72 = INT64_MAX;

	t72 = ((x325<=(x326-x327))|x328);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x329 = 2507320U;
	int64_t x330 = -1LL;
	static volatile int8_t x331 = -30;
	int16_t x332 = 1;
	volatile int32_t t73 = 8160;

	t73 = ((x329<=(x330-x331))|x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x334 = INT16_MAX;
	int64_t x335 = 2723504653226285LL;
	volatile int32_t t74 = 46020979;

	t74 = ((x333<=(x334-x335))|x336);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x337 = INT64_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	static int64_t x339 = 58092LL;
	volatile int16_t x340 = -1;
	static volatile int32_t t75 = -44621171;

	t75 = ((x337<=(x338-x339))|x340);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x341 = 24U;
	int64_t x342 = -711349251LL;
	int32_t t76 = -207711260;

	t76 = ((x341<=(x342-x343))|x344);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x345 = INT32_MIN;
	static int8_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int64_t x348 = 20050181382162875LL;

	t77 = ((x345<=(x346-x347))|x348);

	if (t77 != 20050181382162875LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x349 = INT32_MAX;
	static int64_t x350 = -1LL;
	int8_t x352 = INT8_MIN;
	volatile int32_t t78 = 2;

	t78 = ((x349<=(x350-x351))|x352);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x353 = 185934127U;
	int64_t x354 = 24188LL;
	int16_t x355 = 0;
	int32_t x356 = INT32_MAX;
	volatile int32_t t79 = INT32_MAX;

	t79 = ((x353<=(x354-x355))|x356);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = INT32_MIN;
	static uint32_t x360 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = ((x357<=(x358-x359))|x360);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x366 = -1LL;
	uint8_t x367 = 89U;
	volatile uint64_t x368 = 7811777105521706506LLU;
	volatile uint64_t t81 = 30508113126LLU;

	t81 = ((x365<=(x366-x367))|x368);

	if (t81 != 7811777105521706507LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	uint16_t x372 = 4U;

	t82 = ((x369<=(x370-x371))|x372);

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MAX;
	int32_t x374 = -61;
	int32_t x375 = INT32_MIN;
	int32_t t83 = 128995;

	t83 = ((x373<=(x374-x375))|x376);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = 49U;
	static volatile int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	uint64_t x380 = UINT64_MAX;

	t84 = ((x377<=(x378-x379))|x380);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = 330979203LLU;
	int16_t x382 = INT16_MAX;
	static uint64_t x383 = UINT64_MAX;
	static int32_t x384 = 216437029;
	volatile int32_t t85 = -60834861;

	t85 = ((x381<=(x382-x383))|x384);

	if (t85 != 216437029) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = INT32_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t86 = 34951190;

	t86 = ((x389<=(x390-x391))|x392);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x393 = 1;
	int16_t x395 = INT16_MAX;
	static volatile uint16_t x396 = UINT16_MAX;
	int32_t t87 = -69753;

	t87 = ((x393<=(x394-x395))|x396);

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x397 = 6U;
	int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int64_t t88 = INT64_MAX;

	t88 = ((x397<=(x398-x399))|x400);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = INT64_MIN;
	static uint32_t x406 = 766U;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = -1881;
	static volatile int32_t t89 = -2;

	t89 = ((x405<=(x406-x407))|x408);

	if (t89 != -1881) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = 10458122255324LL;
	volatile int32_t x412 = 0;

	t90 = ((x409<=(x410-x411))|x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 140084429579648LLU;
	int16_t x414 = -1;
	static uint16_t x415 = 41U;
	uint8_t x416 = 2U;
	static int32_t t91 = 134428174;

	t91 = ((x413<=(x414-x415))|x416);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = 0;
	static volatile uint64_t t92 = 167692396395139596LLU;

	t92 = ((x417<=(x418-x419))|x420);

	if (t92 != 5615117LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = -33;
	volatile uint64_t x426 = 7350279818435LLU;
	uint64_t x427 = 0LLU;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = ((x425<=(x426-x427))|x428);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = -1;
	static volatile uint64_t x430 = UINT64_MAX;
	int64_t t94 = 64064592807477LL;

	t94 = ((x429<=(x430-x431))|x432);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x433 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	volatile int64_t t95 = -39057LL;

	t95 = ((x433<=(x434-x435))|x436);

	if (t95 != 4174628837643LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x438 = INT16_MIN;
	static int8_t x439 = -1;
	volatile uint64_t x440 = UINT64_MAX;
	uint64_t t96 = UINT64_MAX;

	t96 = ((x437<=(x438-x439))|x440);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = -1;
	uint32_t x442 = 0U;
	uint32_t x443 = 113568U;
	int32_t t97 = -80;

	t97 = ((x441<=(x442-x443))|x444);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x445 = -2602909;
	int64_t x446 = INT64_MIN;
	int64_t x447 = -1LL;
	volatile int16_t x448 = INT16_MAX;

	t98 = ((x445<=(x446-x447))|x448);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x450 = 4174292;
	uint32_t x451 = 75491282U;
	volatile int16_t x452 = INT16_MAX;
	int32_t t99 = 59633;

	t99 = ((x449<=(x450-x451))|x452);

	if (t99 != 32767) { NG(); } else { ; }
	
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

