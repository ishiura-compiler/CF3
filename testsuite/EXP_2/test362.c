#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = UINT8_MAX;
volatile uint64_t x9 = 72366112702LLU;
int64_t x11 = -92565784098638415LL;
volatile uint64_t x13 = UINT64_MAX;
int64_t x36 = INT64_MAX;
uint64_t x40 = 76210LLU;
int32_t x46 = 3075497;
uint8_t x54 = 1U;
static int32_t x57 = INT32_MIN;
static uint32_t x60 = 498345143U;
volatile int64_t t10 = 94373029794591LL;
uint8_t x68 = 1U;
int64_t x72 = INT64_MIN;
static uint16_t x73 = 6U;
static int8_t x74 = INT8_MAX;
uint8_t x77 = UINT8_MAX;
volatile uint32_t t15 = 1619U;
int8_t x81 = -1;
int8_t x99 = -29;
uint16_t x100 = UINT16_MAX;
uint32_t t18 = 892642U;
uint8_t x109 = 20U;
static int32_t x118 = INT32_MIN;
uint32_t x119 = UINT32_MAX;
uint32_t x133 = UINT32_MAX;
volatile uint32_t x134 = UINT32_MAX;
static volatile uint16_t x143 = 2232U;
static uint64_t t26 = 261710362010596739LLU;
static uint64_t x153 = 33122162545LLU;
uint64_t t27 = 961567075LLU;
uint32_t t29 = 32U;
int64_t x166 = -630760LL;
int32_t x193 = 940;
volatile uint32_t t32 = 627665331U;
volatile uint64_t x218 = 1475762205226807016LLU;
volatile uint64_t t34 = 444768050LLU;
volatile int32_t x222 = INT32_MAX;
int64_t t35 = 2737246LL;
static uint64_t x233 = UINT64_MAX;
uint8_t x234 = 121U;
int8_t x236 = -1;
volatile int8_t x251 = -4;
static int32_t t40 = -76959126;
volatile uint64_t t42 = 589876248618174LLU;
uint64_t x267 = 1821856312788LLU;
uint64_t x268 = UINT64_MAX;
static uint8_t x283 = 42U;
static uint8_t x287 = UINT8_MAX;
static int8_t x291 = -2;
static int32_t x292 = INT32_MAX;
uint8_t x298 = 14U;
int8_t x302 = -1;
int32_t x305 = -18;
volatile uint32_t x306 = 1786U;
volatile int8_t x309 = -1;
int16_t x326 = INT16_MAX;
volatile int16_t x348 = -9;
volatile uint64_t t58 = 981962770330280LLU;
int8_t x356 = -7;
int16_t x359 = INT16_MIN;
int64_t x364 = -1LL;
static volatile int32_t x370 = -432;
int8_t x372 = INT8_MIN;
int8_t x383 = INT8_MIN;
static uint16_t x384 = 96U;
static int8_t x387 = INT8_MIN;
volatile int16_t x389 = INT16_MAX;
volatile uint64_t x391 = UINT64_MAX;
int8_t x394 = -16;
static int64_t x395 = -1LL;
int16_t x396 = INT16_MAX;
uint16_t x404 = UINT16_MAX;
int16_t x407 = 50;
int8_t x417 = INT8_MIN;
static int32_t x420 = INT32_MIN;
int8_t x429 = INT8_MIN;
static uint8_t x432 = 65U;
int32_t t74 = 160070602;
uint32_t x434 = 206983U;
int8_t x440 = INT8_MIN;
volatile int32_t t76 = 97664;
static volatile int8_t x441 = 1;
int16_t x443 = INT16_MIN;
int64_t x446 = 585LL;
int8_t x447 = INT8_MAX;
int64_t t78 = -5579516300545LL;
volatile int32_t t79 = -12;
volatile int16_t x454 = INT16_MIN;
int32_t x456 = INT32_MAX;
static int32_t x461 = INT32_MIN;
int32_t x462 = -1;
volatile uint8_t x463 = 27U;
volatile uint64_t t81 = 13627820834LLU;
volatile uint8_t x467 = UINT8_MAX;
int16_t x484 = INT16_MAX;
uint16_t x488 = 586U;
static uint16_t x490 = UINT16_MAX;
volatile int8_t x492 = 1;
volatile int16_t x498 = INT16_MAX;
int32_t x500 = INT32_MIN;
uint32_t x509 = 7354915U;
static volatile uint32_t t87 = 3701089U;
uint8_t x513 = UINT8_MAX;
volatile int32_t t92 = 317;
int32_t x544 = -1;
volatile uint64_t t93 = 4LLU;
static volatile int16_t x548 = INT16_MIN;
uint64_t x550 = UINT64_MAX;
uint64_t t95 = 400902551213209765LLU;
uint16_t x559 = UINT16_MAX;
volatile uint8_t x562 = 14U;
static int64_t x564 = -1LL;


void f0(void) {
	int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = 587LLU;
	uint64_t t0 = 4LLU;

	t0 = ((x1-(x2*x3))&x4);

	if (t0 != 75LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 3U;
	static int32_t x6 = -1226123;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -348134104;

	t1 = ((x5-(x6*x7))&x8);

	if (t1 != -156943744) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 0;
	uint16_t x12 = 27U;
	static volatile uint64_t t2 = 4321402240425LLU;

	t2 = ((x9-(x10*x11))&x12);

	if (t2 != 26LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	static uint8_t x15 = 4U;
	volatile int16_t x16 = 3;
	uint64_t t3 = 62LLU;

	t3 = ((x13-(x14*x15))&x16);

	if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint16_t x18 = 1U;
	int32_t x19 = INT32_MAX;
	int64_t x20 = -36781898297930LL;
	static volatile int64_t t4 = 96LL;

	t4 = ((x17-(x18*x19))&x20);

	if (t4 != -36782099922944LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 4270503646779218967LL;
	volatile uint16_t x22 = 5302U;
	int16_t x23 = INT16_MAX;
	int8_t x24 = -1;
	int64_t t5 = -1LL;

	t5 = ((x21-(x22*x23))&x24);

	if (t5 != 4270503646605488333LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = INT16_MIN;
	static int8_t x34 = -1;
	int16_t x35 = -1;
	volatile int64_t t6 = -3LL;

	t6 = ((x33-(x34*x35))&x36);

	if (t6 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MAX;
	int32_t x38 = -1;
	static volatile uint16_t x39 = 8184U;
	static uint64_t t7 = 3LLU;

	t7 = ((x37-(x38*x39))&x40);

	if (t7 != 2482LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x47 = 7U;
	int64_t x48 = INT64_MIN;
	int64_t t8 = INT64_MIN;

	t8 = ((x45-(x46*x47))&x48);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 2974149633LLU;
	static int32_t x55 = 184543;
	int8_t x56 = 37;
	uint64_t t9 = 141303362521756LLU;

	t9 = ((x53-(x54*x55))&x56);

	if (t9 != 32LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x58 = -248;
	int64_t x59 = -1LL;

	t10 = ((x57-(x58*x59))&x60);

	if (t10 != 498344960LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = INT64_MAX;
	int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int64_t t11 = 54545429176LL;

	t11 = ((x61-(x62*x63))&x64);

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x65 = 2193;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 1556LLU;
	uint64_t t12 = 18704862670859495LLU;

	t12 = ((x65-(x66*x67))&x68);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = 11531112180682LL;
	static int8_t x70 = -1;
	int8_t x71 = -7;
	volatile int64_t t13 = -48LL;

	t13 = ((x69-(x70*x71))&x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x75 = INT16_MIN;
	uint16_t x76 = UINT16_MAX;
	static int32_t t14 = 26311881;

	t14 = ((x73-(x74*x75))&x76);

	if (t14 != 32774) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x78 = 308U;
	int32_t x79 = -1;
	int16_t x80 = -5;

	t15 = ((x77-(x78*x79))&x80);

	if (t15 != 563U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x82 = -1;
	int8_t x83 = -1;
	uint64_t x84 = 4109645293205495LLU;
	uint64_t t16 = 13LLU;

	t16 = ((x81-(x82*x83))&x84);

	if (t16 != 4109645293205494LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x89 = 173U;
	static int64_t x90 = -11LL;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = -1;
	int64_t t17 = 1LL;

	t17 = ((x89-(x90*x91))&x92);

	if (t17 != -360275LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x97 = INT16_MIN;
	uint32_t x98 = 2979639U;

	t18 = ((x97-(x98*x99))&x100);

	if (t18 != 315U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x105 = 15166;
	uint64_t x106 = 2712LLU;
	volatile int8_t x107 = INT8_MAX;
	static int64_t x108 = INT64_MIN;
	uint64_t t19 = 160277944LLU;

	t19 = ((x105-(x106*x107))&x108);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = UINT16_MAX;
	static uint64_t t20 = 565159LLU;

	t20 = ((x109-(x110*x111))&x112);

	if (t20 != 19LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x117 = INT16_MAX;
	int32_t x120 = 2;
	static uint32_t t21 = 1846542383U;

	t21 = ((x117-(x118*x119))&x120);

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 122851U;
	int32_t x123 = -1;
	int32_t x124 = -1214943;
	static uint64_t t22 = 6055LLU;

	t22 = ((x121-(x122*x123))&x124);

	if (t22 != 18446744069414671904LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t23 = -22LL;

	t23 = ((x133-(x134*x135))&x136);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	volatile uint32_t x144 = 27497U;
	uint32_t t24 = 168U;

	t24 = ((x141-(x142*x143))&x144);

	if (t24 != 18537U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = -1LL;
	static volatile int64_t x147 = INT64_MAX;
	int16_t x148 = -1;
	int64_t t25 = 7560678705012LL;

	t25 = ((x145-(x146*x147))&x148);

	if (t25 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x149 = -1;
	static int16_t x150 = -890;
	volatile uint64_t x151 = 13844709382178LLU;
	uint16_t x152 = 26U;

	t26 = ((x149-(x150*x151))&x152);

	if (t26 != 18LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x154 = UINT64_MAX;
	static uint16_t x155 = 30056U;
	int16_t x156 = -1;

	t27 = ((x153-(x154*x155))&x156);

	if (t27 != 33122192601LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = -1;
	static int64_t x158 = -1LL;
	int8_t x159 = -1;
	int64_t x160 = -115985147300LL;
	volatile int64_t t28 = -4029997614317990LL;

	t28 = ((x157-(x158*x159))&x160);

	if (t28 != -115985147300LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x162 = 0U;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;

	t29 = ((x161-(x162*x163))&x164);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = INT32_MIN;
	volatile int64_t x167 = 959144601789LL;
	int16_t x168 = -1;
	volatile int64_t t30 = -9270160LL;

	t30 = ((x165-(x166*x167))&x168);

	if (t30 != 604990046876945992LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x185 = -60;
	uint8_t x186 = 2U;
	int16_t x187 = INT16_MAX;
	static int64_t x188 = INT64_MAX;
	int64_t t31 = -372LL;

	t31 = ((x185-(x186*x187))&x188);

	if (t31 != 9223372036854710214LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x194 = -1;
	int8_t x195 = -4;
	uint32_t x196 = UINT32_MAX;

	t32 = ((x193-(x194*x195))&x196);

	if (t32 != 936U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x209 = 1;
	uint32_t x210 = 3907U;
	int32_t x211 = INT32_MIN;
	uint16_t x212 = UINT16_MAX;
	volatile uint32_t t33 = 160227680U;

	t33 = ((x209-(x210*x211))&x212);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int64_t x219 = -84LL;
	int16_t x220 = INT16_MAX;

	t34 = ((x217-(x218*x219))&x220);

	if (t34 != 25631LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x221 = 735U;
	int64_t x223 = -1LL;
	int8_t x224 = INT8_MIN;

	t35 = ((x221-(x222*x223))&x224);

	if (t35 != 2147484288LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = -1;
	int32_t x226 = -822563;
	volatile uint64_t x227 = UINT64_MAX;
	uint32_t x228 = 36376U;
	uint64_t t36 = 596435312378828LLU;

	t36 = ((x225-(x226*x227))&x228);

	if (t36 != 536LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x235 = 1342179984194065962LLU;
	static uint64_t t37 = 673124137997400005LLU;

	t37 = ((x233-(x234*x235))&x236);

	if (t37 != 3616918575903983141LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x245 = -1LL;
	static int8_t x246 = -4;
	int32_t x247 = -1;
	static volatile uint64_t x248 = 13LLU;
	volatile uint64_t t38 = 347982394278LLU;

	t38 = ((x245-(x246*x247))&x248);

	if (t38 != 9LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x249 = 83172U;
	static volatile int64_t x250 = -295718499582LL;
	volatile uint64_t x252 = 59LLU;
	volatile uint64_t t39 = 662887LLU;

	t39 = ((x249-(x250*x251))&x252);

	if (t39 != 40LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x253 = INT32_MAX;
	int16_t x254 = -39;
	uint16_t x255 = 0U;
	int16_t x256 = INT16_MAX;

	t40 = ((x253-(x254*x255))&x256);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = -39;
	uint32_t x259 = 144907U;
	static volatile int8_t x260 = 15;
	volatile uint32_t t41 = 15U;

	t41 = ((x257-(x258*x259))&x260);

	if (t41 != 13U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x261 = -1;
	static volatile uint64_t x262 = 409387838358364118LLU;
	int8_t x263 = -1;
	int64_t x264 = INT64_MAX;

	t42 = ((x261-(x262*x263))&x264);

	if (t42 != 409387838358364117LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x266 = -15;
	uint64_t t43 = 400279724669396500LLU;

	t43 = ((x265-(x266*x267))&x268);

	if (t43 != 27325697208172LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = 78133133;
	volatile int32_t t44 = 285;

	t44 = ((x269-(x270*x271))&x272);

	if (t44 != 78118912) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x277 = -26;
	uint32_t x278 = 106195U;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -1;
	volatile uint32_t t45 = 0U;

	t45 = ((x277-(x278*x279))&x280);

	if (t45 != 4267887545U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x281 = INT8_MAX;
	static uint16_t x282 = UINT16_MAX;
	uint64_t x284 = 230352760134LLU;
	static volatile uint64_t t46 = 5LLU;

	t46 = ((x281-(x282*x283))&x284);

	if (t46 != 230352224256LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x285 = 6;
	static int16_t x286 = INT16_MIN;
	volatile int8_t x288 = INT8_MIN;
	int32_t t47 = 4841668;

	t47 = ((x285-(x286*x287))&x288);

	if (t47 != 8355840) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x289 = 6U;
	int16_t x290 = 31;
	volatile int32_t t48 = -66811;

	t48 = ((x289-(x290*x291))&x292);

	if (t48 != 68) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x297 = -2582;
	volatile int8_t x299 = INT8_MAX;
	volatile int64_t x300 = INT64_MAX;
	volatile int64_t t49 = 572994425168LL;

	t49 = ((x297-(x298*x299))&x300);

	if (t49 != 9223372036854771448LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x301 = 3821465176704589512LLU;
	uint32_t x303 = 273U;
	uint8_t x304 = 47U;
	volatile uint64_t t50 = 2015767LLU;

	t50 = ((x301-(x302*x303))&x304);

	if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x307 = INT16_MIN;
	static int16_t x308 = 0;
	volatile uint32_t t51 = 3510U;

	t51 = ((x305-(x306*x307))&x308);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x310 = INT64_MIN;
	uint64_t x311 = UINT64_MAX;
	static int8_t x312 = INT8_MIN;
	static uint64_t t52 = 2626110029638569940LLU;

	t52 = ((x309-(x310*x311))&x312);

	if (t52 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x321 = INT8_MAX;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	static int16_t x324 = INT16_MIN;
	volatile uint64_t t53 = 7621849453757441529LLU;

	t53 = ((x321-(x322*x323))&x324);

	if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x325 = 85531757U;
	static int8_t x327 = INT8_MIN;
	int16_t x328 = 4;
	volatile uint32_t t54 = 29U;

	t54 = ((x325-(x326*x327))&x328);

	if (t54 != 4U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MAX;
	int8_t x331 = -1;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t55 = 90346917U;

	t55 = ((x329-(x330*x331))&x332);

	if (t55 != 32894U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = -46;
	int8_t x335 = -63;
	int16_t x336 = INT16_MIN;
	static int32_t t56 = -2794;

	t56 = ((x333-(x334*x335))&x336);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int32_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MIN;
	static uint64_t t57 = 1404620317524342170LLU;

	t57 = ((x337-(x338*x339))&x340);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x345 = INT64_MIN;
	uint32_t x346 = 126781133U;
	volatile uint64_t x347 = 13LLU;

	t58 = ((x345-(x346*x347))&x348);

	if (t58 != 9223372035206621079LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x353 = 2729464;
	volatile uint64_t x354 = UINT64_MAX;
	uint32_t x355 = UINT32_MAX;
	uint64_t t59 = 759LLU;

	t59 = ((x353-(x354*x355))&x356);

	if (t59 != 4297696753LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x357 = 1U;
	volatile int64_t x358 = -1LL;
	int32_t x360 = INT32_MIN;
	volatile int64_t t60 = -467171655188695LL;

	t60 = ((x357-(x358*x359))&x360);

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x361 = 682LLU;
	int64_t x362 = -1LL;
	uint8_t x363 = 6U;
	volatile uint64_t t61 = 27851LLU;

	t61 = ((x361-(x362*x363))&x364);

	if (t61 != 688LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x369 = -1636867;
	uint8_t x371 = UINT8_MAX;
	int32_t t62 = -854495536;

	t62 = ((x369-(x370*x371))&x372);

	if (t62 != -1526784) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	static int64_t x376 = 21037978023548LL;
	static volatile uint64_t t63 = 5285760893LLU;

	t63 = ((x373-(x374*x375))&x376);

	if (t63 != 21037978023548LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = -1;
	int32_t t64 = -1;

	t64 = ((x381-(x382*x383))&x384);

	if (t64 != 96) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x385 = -2813622LL;
	uint32_t x386 = UINT32_MAX;
	uint32_t x388 = 953026U;
	volatile int64_t t65 = 2488338LL;

	t65 = ((x385-(x386*x387))&x388);

	if (t65 != 262338LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x390 = 3U;
	int16_t x392 = 2;
	volatile uint64_t t66 = 7428872486361029LLU;

	t66 = ((x389-(x390*x391))&x392);

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x393 = INT64_MAX;
	int64_t t67 = -246214488384515462LL;

	t67 = ((x393-(x394*x395))&x396);

	if (t67 != 32751LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x397 = 1U;
	uint64_t x398 = 50639393089663952LLU;
	int32_t x399 = -24500220;
	static int16_t x400 = INT16_MAX;
	uint64_t t68 = 84591562938209LLU;

	t68 = ((x397-(x398*x399))&x400);

	if (t68 != 12481LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x401 = 252411683819LL;
	uint8_t x402 = 14U;
	volatile int16_t x403 = -925;
	volatile int64_t t69 = -628742376LL;

	t69 = ((x401-(x402*x403))&x404);

	if (t69 != 54913LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x405 = 11756249225LLU;
	static volatile uint64_t x406 = UINT64_MAX;
	static volatile int8_t x408 = INT8_MIN;
	volatile uint64_t t70 = 340573561927160LLU;

	t70 = ((x405-(x406*x407))&x408);

	if (t70 != 11756249216LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x413 = 74897527183726397LLU;
	static int16_t x414 = -1;
	int64_t x415 = -1LL;
	static int8_t x416 = 44;
	volatile uint64_t t71 = 1237852794613395LLU;

	t71 = ((x413-(x414*x415))&x416);

	if (t71 != 44LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x418 = 0;
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t t72 = 3LLU;

	t72 = ((x417-(x418*x419))&x420);

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x425 = -1LL;
	int8_t x426 = -3;
	static int8_t x427 = 3;
	static uint32_t x428 = 125U;
	volatile int64_t t73 = -2013562LL;

	t73 = ((x425-(x426*x427))&x428);

	if (t73 != 8LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x430 = UINT16_MAX;
	int16_t x431 = INT16_MIN;

	t74 = ((x429-(x430*x431))&x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x433 = 143394559U;
	uint16_t x435 = 27445U;
	static volatile uint16_t x436 = UINT16_MAX;
	uint32_t t75 = 63U;

	t75 = ((x433-(x434*x435))&x436);

	if (t75 != 13836U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x437 = 183U;
	volatile int16_t x438 = INT16_MIN;
	uint16_t x439 = UINT16_MAX;

	t76 = ((x437-(x438*x439))&x440);

	if (t76 != 2147451008) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x442 = UINT64_MAX;
	int32_t x444 = INT32_MIN;
	volatile uint64_t t77 = 329132039548536LLU;

	t77 = ((x441-(x442*x443))&x444);

	if (t77 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x445 = 5481060;
	uint32_t x448 = 424178U;

	t78 = ((x445-(x446*x447))&x448);

	if (t78 != 131104LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x449 = INT16_MAX;
	volatile int16_t x450 = INT16_MAX;
	volatile int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MIN;

	t79 = ((x449-(x450*x451))&x452);

	if (t79 != 1073709056) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x453 = 98854843680LL;
	static uint16_t x455 = UINT16_MAX;
	volatile int64_t t80 = 554LL;

	t80 = ((x453-(x454*x455))&x456);

	if (t80 != 70563104LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x464 = UINT64_MAX;

	t81 = ((x461-(x462*x463))&x464);

	if (t81 != 18446744071562067995LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x465 = INT64_MIN;
	static int16_t x466 = -1;
	uint64_t x468 = UINT64_MAX;
	static volatile uint64_t t82 = 6655LLU;

	t82 = ((x465-(x466*x467))&x468);

	if (t82 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x481 = UINT8_MAX;
	static int64_t x482 = -1LL;
	int8_t x483 = -1;
	volatile int64_t t83 = -4843950509LL;

	t83 = ((x481-(x482*x483))&x484);

	if (t83 != 254LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	volatile int32_t t84 = -1642;

	t84 = ((x485-(x486*x487))&x488);

	if (t84 != 586) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x489 = INT16_MIN;
	volatile uint32_t x491 = 5277083U;
	volatile uint32_t t85 = 6149U;

	t85 = ((x489-(x490*x491))&x492);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x497 = -1;
	static volatile int8_t x499 = INT8_MIN;
	volatile int32_t t86 = -870006;

	t86 = ((x497-(x498*x499))&x500);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x510 = 209;
	uint8_t x511 = UINT8_MAX;
	volatile int16_t x512 = -57;

	t87 = ((x509-(x510*x511))&x512);

	if (t87 != 7301572U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x514 = UINT64_MAX;
	volatile int8_t x515 = INT8_MIN;
	static uint8_t x516 = UINT8_MAX;
	volatile uint64_t t88 = 1132LLU;

	t88 = ((x513-(x514*x515))&x516);

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MAX;
	int16_t x523 = INT16_MIN;
	volatile uint8_t x524 = 52U;
	volatile int32_t t89 = -1;

	t89 = ((x521-(x522*x523))&x524);

	if (t89 != 52) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x525 = UINT64_MAX;
	volatile int8_t x526 = -1;
	int8_t x527 = INT8_MIN;
	volatile int8_t x528 = INT8_MIN;
	volatile uint64_t t90 = 297LLU;

	t90 = ((x525-(x526*x527))&x528);

	if (t90 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x529 = INT8_MAX;
	static int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MAX;
	volatile int32_t x532 = INT32_MAX;
	volatile int32_t t91 = 7594;

	t91 = ((x529-(x530*x531))&x532);

	if (t91 != 16383) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x537 = -4860;
	int8_t x538 = INT8_MAX;
	int8_t x539 = INT8_MIN;
	volatile int16_t x540 = -1;

	t92 = ((x537-(x538*x539))&x540);

	if (t92 != 11396) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x541 = 429427686731051595LLU;
	int8_t x542 = INT8_MIN;
	volatile int16_t x543 = 0;

	t93 = ((x541-(x542*x543))&x544);

	if (t93 != 429427686731051595LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x545 = -1LL;
	int8_t x546 = 7;
	int8_t x547 = INT8_MIN;
	volatile int64_t t94 = -61153810592270LL;

	t94 = ((x545-(x546*x547))&x548);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x549 = -2943979219902170889LL;
	int8_t x551 = -1;
	int32_t x552 = INT32_MIN;

	t95 = ((x549-(x550*x551))&x552);

	if (t95 != 15502764852404813824LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x553 = -1;
	uint8_t x554 = UINT8_MAX;
	static int64_t x555 = -4014996226989650LL;
	int32_t x556 = 1374232;
	int64_t t96 = 91355273159LL;

	t96 = ((x553-(x554*x555))&x556);

	if (t96 != 1110024LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x557 = -1LL;
	int16_t x558 = -2236;
	uint64_t x560 = 62119584923432578LLU;
	volatile uint64_t t97 = 355937887412LLU;

	t97 = ((x557-(x558*x559))&x560);

	if (t97 != 11580930LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x561 = INT8_MIN;
	int64_t x563 = 0LL;
	int64_t t98 = -472LL;

	t98 = ((x561-(x562*x563))&x564);

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x565 = 0;
	uint8_t x566 = UINT8_MAX;
	static uint16_t x567 = 61U;
	int8_t x568 = -2;
	volatile int32_t t99 = 3768;

	t99 = ((x565-(x566*x567))&x568);

	if (t99 != -15556) { NG(); } else { ; }
	
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

