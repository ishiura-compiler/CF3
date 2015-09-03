#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = -46;
static uint8_t x7 = 16U;
int16_t x8 = 500;
uint8_t x15 = 27U;
static uint16_t x16 = 1U;
volatile uint32_t x18 = 0U;
int16_t x26 = INT16_MIN;
static int16_t x27 = INT16_MIN;
int32_t x29 = 242393897;
uint64_t x49 = UINT64_MAX;
int32_t x52 = -1;
volatile int32_t t10 = 687947;
volatile uint32_t x55 = UINT32_MAX;
int16_t x66 = 1;
static uint32_t x67 = 41U;
int64_t x69 = 454048LL;
static int32_t x77 = INT32_MAX;
static uint64_t x80 = 122389418419088LLU;
static uint16_t x84 = UINT16_MAX;
int32_t t19 = 95215078;
uint8_t x90 = 3U;
uint16_t x91 = 1447U;
volatile int32_t t21 = -1066;
int8_t x111 = INT8_MIN;
int16_t x113 = -1;
int32_t t27 = 0;
uint32_t x142 = UINT32_MAX;
int64_t x150 = 84189273696573LL;
uint8_t x153 = 41U;
volatile int32_t t31 = -376;
static int8_t x162 = INT8_MAX;
static int16_t x163 = INT16_MIN;
int8_t x176 = INT8_MIN;
volatile int8_t x177 = INT8_MAX;
uint16_t x179 = 9U;
uint16_t x181 = 677U;
int32_t x202 = INT32_MIN;
uint8_t x209 = 38U;
volatile int64_t x212 = -137670LL;
uint16_t x213 = 17U;
uint32_t x216 = 103U;
int16_t x219 = INT16_MAX;
int32_t x221 = 1458;
int32_t x228 = 0;
volatile int32_t t45 = 41470284;
static int32_t t46 = 72;
int32_t x233 = -1;
volatile uint32_t x238 = 40206341U;
int32_t x240 = -47;
int8_t x242 = -4;
int16_t x251 = -23;
int32_t t51 = -431;
int32_t x276 = INT32_MIN;
static int32_t t56 = -1154939;
uint8_t x281 = 17U;
uint64_t x283 = 5302565556LLU;
int32_t t58 = -350;
int8_t x289 = 29;
int64_t x290 = INT64_MIN;
static int8_t x291 = INT8_MAX;
volatile int32_t t60 = -17432;
volatile uint32_t x333 = UINT32_MAX;
static int32_t t67 = -1444379;
static int8_t x346 = -1;
int32_t x352 = 4392757;
static uint32_t x356 = 7860092U;
int32_t t70 = 3535022;
int16_t x357 = -1894;
uint16_t x363 = 14U;
int8_t x366 = INT8_MIN;
int32_t t73 = 2;
uint32_t x376 = 1115U;
volatile int16_t x377 = -1;
static uint32_t x380 = 809256U;
uint64_t x387 = 221LLU;
static volatile int32_t t77 = 684245599;
static int8_t x404 = -1;
static int64_t x405 = INT64_MIN;
int32_t x420 = 6620;
static int64_t x426 = INT64_MIN;
uint16_t x439 = 4U;
int8_t x440 = 0;
static volatile int32_t t87 = 472;
uint32_t x444 = 133U;
uint32_t x448 = 7571U;
volatile int32_t t89 = 10715589;
volatile int16_t x449 = 31;
static uint16_t x450 = UINT16_MAX;
static volatile int32_t t90 = 532939583;
uint8_t x453 = 7U;
volatile uint64_t x454 = UINT64_MAX;
volatile int8_t x456 = -1;
int16_t x457 = -1;
int32_t x459 = -1;
uint8_t x466 = UINT8_MAX;
uint64_t x469 = 231615LLU;
volatile uint64_t x471 = 481344118050687247LLU;
static int64_t x472 = -1LL;
int32_t x478 = INT32_MIN;
volatile int32_t t98 = -23884658;
volatile int64_t x487 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = INT8_MAX;
	uint64_t x3 = UINT64_MAX;
	int32_t t0 = 281;

	t0 = (x1<(x2-(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 30;
	uint16_t x6 = 8765U;
	volatile int32_t t1 = 13;

	t1 = (x5<(x6-(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -60;
	int8_t x10 = INT8_MAX;
	int16_t x11 = -1;
	static int16_t x12 = INT16_MAX;
	static int32_t t2 = 5104530;

	t2 = (x9<(x10-(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 1637U;
	int8_t x14 = INT8_MIN;
	int32_t t3 = -305;

	t3 = (x13<(x14-(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 82U;
	int32_t x19 = 99588;
	int32_t x20 = -1;
	volatile int32_t t4 = -14162889;

	t4 = (x17<(x18-(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = INT32_MIN;
	static int8_t x23 = -1;
	volatile uint64_t x24 = 28487740464LLU;
	static volatile int32_t t5 = -11982;

	t5 = (x21<(x22-(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int16_t x28 = 3927;
	volatile int32_t t6 = 899;

	t6 = (x25<(x26-(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	uint8_t x31 = 0U;
	uint32_t x32 = UINT32_MAX;
	static volatile int32_t t7 = -788107173;

	t7 = (x29<(x30-(x31-x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 23341;

	t8 = (x33<(x34-(x35-x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 1LLU;
	uint32_t x38 = 6U;
	int16_t x39 = INT16_MIN;
	int64_t x40 = -1559LL;
	int32_t t9 = 415;

	t9 = (x37<(x38-(x39-x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = 10U;
	volatile int8_t x51 = INT8_MIN;

	t10 = (x49<(x50-(x51-x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = -1;
	int64_t x54 = INT64_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -20754;

	t11 = (x53<(x54-(x55-x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 868148U;
	int8_t x58 = INT8_MIN;
	static int64_t x59 = -3411748114544275616LL;
	int64_t x60 = INT64_MIN;
	static volatile int32_t t12 = -70346438;

	t12 = (x57<(x58-(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 1864U;
	static uint64_t x62 = 23300328717066165LLU;
	uint8_t x63 = 107U;
	static int16_t x64 = -1;
	int32_t t13 = 461856;

	t13 = (x61<(x62-(x63-x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = 57;
	int16_t x68 = -71;
	volatile int32_t t14 = 85350;

	t14 = (x65<(x66-(x67-x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	int32_t t15 = 55;

	t15 = (x69<(x70-(x71-x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	volatile int16_t x74 = -1;
	uint32_t x75 = 357136U;
	static int64_t x76 = INT64_MAX;
	volatile int32_t t16 = -1742427;

	t16 = (x73<(x74-(x75-x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = -1065;
	uint16_t x79 = 1133U;
	volatile int32_t t17 = -63500362;

	t17 = (x77<(x78-(x79-x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 726U;
	static int64_t x82 = -168LL;
	volatile uint32_t x83 = 24407U;
	volatile int32_t t18 = 15;

	t18 = (x81<(x82-(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 63U;
	int16_t x86 = -6;
	uint32_t x87 = 1U;
	volatile uint16_t x88 = 243U;

	t19 = (x85<(x86-(x87-x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x89 = 1839U;
	volatile int32_t x92 = -1;
	int32_t t20 = -9;

	t20 = (x89<(x90-(x91-x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	volatile int16_t x102 = -1570;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = -60;

	t21 = (x101<(x102-(x103-x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	int8_t x106 = 23;
	uint16_t x107 = 251U;
	int16_t x108 = INT16_MIN;
	int32_t t22 = -20989525;

	t22 = (x105<(x106-(x107-x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -23;
	int16_t x110 = 0;
	static volatile int64_t x112 = INT64_MIN;
	int32_t t23 = -686;

	t23 = (x109<(x110-(x111-x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x114 = INT32_MIN;
	uint16_t x115 = 0U;
	int16_t x116 = INT16_MAX;
	volatile int32_t t24 = 465;

	t24 = (x113<(x114-(x115-x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 1;
	int32_t x118 = -1;
	int8_t x119 = -1;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t25 = 45784050;

	t25 = (x117<(x118-(x119-x120)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x121 = INT16_MIN;
	static volatile int16_t x122 = INT16_MIN;
	static uint32_t x123 = 15U;
	static int8_t x124 = -1;
	int32_t t26 = -1905;

	t26 = (x121<(x122-(x123-x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MAX;
	int64_t x127 = -1562046311684235LL;
	volatile int32_t x128 = INT32_MIN;

	t27 = (x125<(x126-(x127-x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = -35360321003066LL;
	int64_t x136 = 8745415LL;
	int32_t t28 = 641529;

	t28 = (x133<(x134-(x135-x136)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x141 = INT16_MIN;
	int32_t x143 = INT32_MAX;
	int64_t x144 = -228431784434481318LL;
	int32_t t29 = 2595498;

	t29 = (x141<(x142-(x143-x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MIN;
	int32_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	int32_t t30 = 15986652;

	t30 = (x149<(x150-(x151-x152)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x154 = 1895585293752LL;
	static uint32_t x155 = UINT32_MAX;
	static int16_t x156 = INT16_MAX;

	t31 = (x153<(x154-(x155-x156)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = -1LL;
	static volatile int8_t x164 = -15;
	volatile int32_t t32 = -42600025;

	t32 = (x161<(x162-(x163-x164)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = INT64_MIN;
	static uint16_t x174 = 15U;
	uint8_t x175 = 3U;
	int32_t t33 = 1232;

	t33 = (x173<(x174-(x175-x176)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x178 = -1;
	int64_t x180 = INT64_MAX;
	volatile int32_t t34 = -507115889;

	t34 = (x177<(x178-(x179-x180)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x182 = -1;
	volatile uint64_t x183 = 7540LLU;
	volatile int32_t x184 = -1;
	static volatile int32_t t35 = -760486963;

	t35 = (x181<(x182-(x183-x184)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = UINT32_MAX;
	static int8_t x186 = INT8_MIN;
	static int32_t x187 = -139;
	uint8_t x188 = UINT8_MAX;
	int32_t t36 = -293947;

	t36 = (x185<(x186-(x187-x188)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x189 = INT16_MAX;
	int8_t x190 = INT8_MIN;
	static int16_t x191 = 14;
	uint8_t x192 = 14U;
	volatile int32_t t37 = 8318469;

	t37 = (x189<(x190-(x191-x192)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = 11350944425691477LLU;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = 3675;
	int32_t t38 = -601066843;

	t38 = (x193<(x194-(x195-x196)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -16010;
	uint32_t x198 = UINT32_MAX;
	uint16_t x199 = 906U;
	uint16_t x200 = 0U;
	volatile int32_t t39 = -309;

	t39 = (x197<(x198-(x199-x200)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MAX;
	volatile uint16_t x203 = 10U;
	int64_t x204 = -374900660663LL;
	int32_t t40 = -3780506;

	t40 = (x201<(x202-(x203-x204)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x210 = 3452U;
	uint64_t x211 = UINT64_MAX;
	int32_t t41 = 33384506;

	t41 = (x209<(x210-(x211-x212)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x214 = -7;
	volatile uint64_t x215 = UINT64_MAX;
	int32_t t42 = 508725755;

	t42 = (x213<(x214-(x215-x216)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = 25529U;
	static uint8_t x220 = 5U;
	volatile int32_t t43 = -119086;

	t43 = (x217<(x218-(x219-x220)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x222 = UINT8_MAX;
	static int16_t x223 = INT16_MIN;
	uint16_t x224 = 1U;
	int32_t t44 = -47033;

	t44 = (x221<(x222-(x223-x224)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x225 = UINT16_MAX;
	volatile uint32_t x226 = 67299U;
	int32_t x227 = INT32_MIN;

	t45 = (x225<(x226-(x227-x228)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MIN;
	int16_t x230 = 81;
	volatile int16_t x231 = -1;
	int32_t x232 = -1;

	t46 = (x229<(x230-(x231-x232)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x234 = INT16_MIN;
	uint64_t x235 = 3LLU;
	static volatile uint64_t x236 = 458815LLU;
	static volatile int32_t t47 = 1135;

	t47 = (x233<(x234-(x235-x236)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x237 = INT16_MIN;
	static uint64_t x239 = 89041LLU;
	volatile int32_t t48 = -1;

	t48 = (x237<(x238-(x239-x240)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = -1;
	int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;
	volatile int32_t t49 = 40409248;

	t49 = (x241<(x242-(x243-x244)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = 1U;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = -10717;
	uint32_t x248 = 1965836732U;
	int32_t t50 = 214735590;

	t50 = (x245<(x246-(x247-x248)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = -1;
	static uint64_t x250 = 2LLU;
	volatile uint16_t x252 = UINT16_MAX;

	t51 = (x249<(x250-(x251-x252)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x253 = 825U;
	volatile uint8_t x254 = 0U;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	volatile int32_t t52 = -203;

	t52 = (x253<(x254-(x255-x256)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = -9121;
	uint32_t x258 = UINT32_MAX;
	static int8_t x259 = INT8_MIN;
	uint16_t x260 = 27909U;
	volatile int32_t t53 = -79135832;

	t53 = (x257<(x258-(x259-x260)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = -1LL;
	volatile int64_t x267 = INT64_MAX;
	int64_t x268 = 2075LL;
	static int32_t t54 = 3;

	t54 = (x265<(x266-(x267-x268)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = INT64_MAX;
	uint8_t x274 = 20U;
	uint64_t x275 = 4LLU;
	volatile int32_t t55 = -72;

	t55 = (x273<(x274-(x275-x276)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = -1;
	static volatile int32_t x279 = INT32_MAX;
	uint32_t x280 = 1734211892U;

	t56 = (x277<(x278-(x279-x280)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x282 = 1833U;
	volatile int16_t x284 = 80;
	int32_t t57 = -7592;

	t57 = (x281<(x282-(x283-x284)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x285 = 3532102U;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MAX;
	int16_t x288 = INT16_MAX;

	t58 = (x285<(x286-(x287-x288)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x292 = 60936LLU;
	int32_t t59 = 388;

	t59 = (x289<(x290-(x291-x292)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = -16884450;
	int16_t x299 = 2028;
	int16_t x300 = 4758;

	t60 = (x297<(x298-(x299-x300)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = INT16_MIN;
	static int16_t x302 = -41;
	int32_t x303 = 2;
	uint32_t x304 = 1209228U;
	volatile int32_t t61 = 144080;

	t61 = (x301<(x302-(x303-x304)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x305 = 17139341;
	static int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = 5656351LLU;
	volatile int32_t t62 = 131254;

	t62 = (x305<(x306-(x307-x308)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x313 = INT8_MAX;
	static uint64_t x314 = 190LLU;
	static int8_t x315 = INT8_MIN;
	volatile int32_t x316 = -1;
	int32_t t63 = -40430;

	t63 = (x313<(x314-(x315-x316)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = 5U;
	int32_t t64 = 906;

	t64 = (x317<(x318-(x319-x320)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x321 = -1;
	volatile int8_t x322 = INT8_MIN;
	volatile int64_t x323 = 1230LL;
	volatile uint16_t x324 = 61U;
	volatile int32_t t65 = 163390002;

	t65 = (x321<(x322-(x323-x324)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = -1LL;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t66 = -16651626;

	t66 = (x325<(x326-(x327-x328)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x334 = 6U;
	int8_t x335 = -8;
	static volatile uint16_t x336 = 4736U;

	t67 = (x333<(x334-(x335-x336)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = INT64_MIN;
	int64_t x347 = -1LL;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t68 = 1724230;

	t68 = (x345<(x346-(x347-x348)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x349 = UINT16_MAX;
	static int16_t x350 = -6;
	uint32_t x351 = UINT32_MAX;
	static int32_t t69 = 127521462;

	t69 = (x349<(x350-(x351-x352)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x353 = -1LL;
	volatile int16_t x354 = 997;
	static uint8_t x355 = 25U;

	t70 = (x353<(x354-(x355-x356)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x358 = UINT64_MAX;
	volatile uint8_t x359 = 13U;
	int16_t x360 = -1;
	int32_t t71 = 172813;

	t71 = (x357<(x358-(x359-x360)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MAX;
	int32_t x364 = -1;
	int32_t t72 = -263;

	t72 = (x361<(x362-(x363-x364)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x365 = 169U;
	uint16_t x367 = 9U;
	volatile uint16_t x368 = UINT16_MAX;

	t73 = (x365<(x366-(x367-x368)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x373 = INT8_MIN;
	volatile int32_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	int32_t t74 = 155753818;

	t74 = (x373<(x374-(x375-x376)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x378 = INT16_MIN;
	static uint32_t x379 = 7341U;
	volatile int32_t t75 = -25883;

	t75 = (x377<(x378-(x379-x380)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x385 = 27312;
	uint16_t x386 = 2U;
	static int64_t x388 = INT64_MAX;
	volatile int32_t t76 = 148731;

	t76 = (x385<(x386-(x387-x388)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MAX;
	static int16_t x391 = INT16_MAX;
	static volatile uint64_t x392 = 5940277817391LLU;

	t77 = (x389<(x390-(x391-x392)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 1U;
	int32_t t78 = 328;

	t78 = (x397<(x398-(x399-x400)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = -16005888725528300LL;
	int32_t x402 = INT32_MAX;
	static int32_t x403 = 748238;
	int32_t t79 = 95861412;

	t79 = (x401<(x402-(x403-x404)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x406 = 523502626605453872LLU;
	static uint64_t x407 = UINT64_MAX;
	uint64_t x408 = 498735628LLU;
	volatile int32_t t80 = -15;

	t80 = (x405<(x406-(x407-x408)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int8_t x411 = -1;
	int8_t x412 = 43;
	static int32_t t81 = -45;

	t81 = (x409<(x410-(x411-x412)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x417 = -800076684352370391LL;
	int8_t x418 = INT8_MIN;
	static uint32_t x419 = 3613418U;
	int32_t t82 = 362247760;

	t82 = (x417<(x418-(x419-x420)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x421 = INT64_MIN;
	static volatile int8_t x422 = -1;
	volatile uint32_t x423 = 162991741U;
	volatile int16_t x424 = INT16_MIN;
	static int32_t t83 = 2766;

	t83 = (x421<(x422-(x423-x424)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x425 = 6838219LL;
	static int16_t x427 = -1;
	int32_t x428 = 0;
	int32_t t84 = -400268;

	t84 = (x425<(x426-(x427-x428)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = INT16_MIN;
	static int8_t x430 = INT8_MAX;
	volatile uint8_t x431 = 0U;
	volatile int16_t x432 = INT16_MAX;
	int32_t t85 = 116201768;

	t85 = (x429<(x430-(x431-x432)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x433 = 30907895389LL;
	volatile int64_t x434 = INT64_MIN;
	int64_t x435 = -1LL;
	int16_t x436 = -1;
	int32_t t86 = -25;

	t86 = (x433<(x434-(x435-x436)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x437 = UINT32_MAX;
	uint8_t x438 = 15U;

	t87 = (x437<(x438-(x439-x440)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x441 = INT32_MIN;
	int16_t x442 = -1;
	static volatile int16_t x443 = INT16_MIN;
	int32_t t88 = -26;

	t88 = (x441<(x442-(x443-x444)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x445 = UINT32_MAX;
	int32_t x446 = -467088;
	int8_t x447 = INT8_MAX;

	t89 = (x445<(x446-(x447-x448)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x451 = -5725196595LL;
	volatile int64_t x452 = -2077431545412228735LL;

	t90 = (x449<(x450-(x451-x452)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x455 = 266389449720LLU;
	volatile int32_t t91 = -225588870;

	t91 = (x453<(x454-(x455-x456)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x458 = 1U;
	uint32_t x460 = 9938376U;
	volatile int32_t t92 = -145961314;

	t92 = (x457<(x458-(x459-x460)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x461 = -44;
	uint64_t x462 = UINT64_MAX;
	int32_t x463 = INT32_MIN;
	static int32_t x464 = -1;
	volatile int32_t t93 = 148;

	t93 = (x461<(x462-(x463-x464)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x465 = INT32_MAX;
	volatile int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	volatile int32_t t94 = -13320823;

	t94 = (x465<(x466-(x467-x468)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x470 = INT8_MAX;
	int32_t t95 = 79;

	t95 = (x469<(x470-(x471-x472)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = -1;
	static int32_t x474 = 4659;
	int64_t x475 = -5LL;
	int64_t x476 = INT64_MIN;
	int32_t t96 = 525589;

	t96 = (x473<(x474-(x475-x476)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x477 = -1LL;
	int16_t x479 = INT16_MIN;
	int8_t x480 = 0;
	int32_t t97 = -20;

	t97 = (x477<(x478-(x479-x480)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x481 = INT16_MAX;
	uint32_t x482 = 203408940U;
	int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MIN;

	t98 = (x481<(x482-(x483-x484)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x485 = INT16_MIN;
	volatile uint64_t x486 = 16421417002723264LLU;
	volatile int64_t x488 = -1LL;
	int32_t t99 = 1139595;

	t99 = (x485<(x486-(x487-x488)));

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

