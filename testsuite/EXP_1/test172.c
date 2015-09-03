#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MIN;
int16_t x16 = INT16_MIN;
uint8_t x18 = 3U;
static int8_t x41 = -1;
static int64_t x46 = -9712863LL;
static int16_t x47 = -1;
int8_t x55 = -1;
static int64_t x57 = INT64_MAX;
static uint64_t t7 = 20367262687766LLU;
int64_t t8 = 11030LL;
volatile int32_t t10 = 486752445;
uint64_t x85 = 3LLU;
uint64_t x108 = UINT64_MAX;
volatile int16_t x109 = INT16_MIN;
int16_t x110 = INT16_MAX;
uint16_t x112 = 1U;
uint32_t x116 = 5U;
uint32_t x127 = UINT32_MAX;
static uint64_t t21 = 60LLU;
static volatile int16_t x155 = -47;
uint8_t x157 = 99U;
uint64_t t27 = 4334588951865922964LLU;
uint64_t x166 = 4071938476355LLU;
volatile uint32_t t31 = 196334U;
static int16_t x185 = -1;
int16_t x190 = INT16_MIN;
uint32_t x194 = 0U;
int8_t x196 = -1;
int32_t x198 = -1;
int64_t x205 = -1LL;
uint32_t x213 = 419674U;
static volatile uint64_t x216 = 801353500248734302LLU;
uint8_t x217 = 10U;
volatile uint64_t t38 = 21LLU;
int32_t x232 = INT32_MAX;
volatile int16_t x257 = INT16_MIN;
int32_t x258 = -1;
volatile uint8_t x260 = 113U;
uint8_t x266 = 0U;
static uint64_t x267 = UINT64_MAX;
uint64_t x303 = 1660154161662097LLU;
uint64_t t51 = 54LLU;
int32_t x306 = -3;
volatile uint8_t x307 = 2U;
volatile uint8_t x313 = 95U;
volatile int64_t t54 = 20334LL;
uint32_t x328 = 1027U;
int16_t x347 = INT16_MIN;
volatile int8_t x348 = INT8_MAX;
static int32_t x370 = -338;
int16_t x372 = INT16_MIN;
static int16_t x381 = INT16_MAX;
uint32_t x382 = 149U;
uint64_t t65 = 118975630311474713LLU;
volatile uint16_t x405 = 16861U;
int64_t x406 = -1LL;
volatile int16_t x410 = -1;
uint8_t x412 = 1U;
int8_t x415 = 23;
volatile int64_t x435 = -1LL;
uint64_t t73 = 71243547455248543LLU;
volatile int8_t x467 = INT8_MIN;
int32_t x469 = 267;
uint8_t x471 = 0U;
int8_t x472 = 0;
static volatile uint32_t t76 = 2288U;
volatile int32_t x489 = -2735;
volatile int64_t x490 = INT64_MIN;
volatile int64_t t79 = 1LL;
volatile int8_t x497 = INT8_MAX;
volatile int8_t x498 = -62;
uint32_t x499 = 912360425U;
uint32_t x509 = 51958723U;
int16_t x512 = INT16_MIN;
int64_t x515 = INT64_MAX;
static int32_t x518 = -1;
static int8_t x520 = INT8_MIN;
static int32_t x524 = INT32_MAX;
int32_t t88 = 1;
int64_t x544 = 1LL;
int8_t x549 = INT8_MAX;
volatile int32_t t90 = 38;
int16_t x567 = INT16_MIN;
volatile int32_t t91 = -218849399;
volatile uint32_t x580 = 27U;
uint8_t x602 = 0U;
volatile uint32_t t96 = 1866287U;
uint64_t x614 = 11728191948LLU;
uint16_t x619 = 8U;


void f0(void) {
	int32_t x5 = -3522;
	uint16_t x6 = 7U;
	uint16_t x7 = 3016U;
	int32_t t0 = -8;

	t0 = (((x5-x6)+x7)*x8);

	if (t0 != 65664) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = 87;
	uint32_t x14 = UINT32_MAX;
	volatile int32_t x15 = INT32_MAX;
	uint32_t t1 = 2430U;

	t1 = (((x13-x14)+x15)*x16);

	if (t1 != 4292116480U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = -121936072888614LL;
	int8_t x19 = -1;
	static int64_t x20 = -1LL;
	static int64_t t2 = 6517LL;

	t2 = (((x17-x18)+x19)*x20);

	if (t2 != 121936072888618LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = -12936;
	uint8_t x34 = 3U;
	static uint16_t x35 = UINT16_MAX;
	uint8_t x36 = 23U;
	int32_t t3 = 0;

	t3 = (((x33-x34)+x35)*x36);

	if (t3 != 1209708) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int64_t x44 = -406091010LL;
	int64_t t4 = 528750337LL;

	t4 = (((x41-x42)+x43)*x44);

	if (t4 != 13306790215680LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x45 = INT32_MIN;
	volatile int8_t x48 = INT8_MAX;
	int64_t t5 = -5947025017LL;

	t5 = (((x45-x46)+x47)*x48);

	if (t5 != -271496889822LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x53 = -1LL;
	uint16_t x54 = 4U;
	uint16_t x56 = 7U;
	int64_t t6 = -221948LL;

	t6 = (((x53-x54)+x55)*x56);

	if (t6 != -42LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x58 = INT64_MAX;
	static int16_t x59 = INT16_MIN;
	volatile uint64_t x60 = 76450943735LLU;

	t7 = (((x57-x58)+x59)*x60);

	if (t7 != 18444238929185243136LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = -148928LL;
	int32_t x63 = -4796;
	int16_t x64 = INT16_MIN;

	t8 = (((x61-x62)+x63)*x64);

	if (t8 != 70364021260288LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = -1;
	int64_t x66 = -14216LL;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -217LL;
	volatile int64_t t9 = -149300834202255413LL;

	t9 = (((x65-x66)+x67)*x68);

	if (t9 != -3139990LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = 34;
	int8_t x70 = 5;
	int16_t x71 = INT16_MAX;
	volatile uint8_t x72 = 4U;

	t10 = (((x69-x70)+x71)*x72);

	if (t10 != 131184) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x73 = -3;
	static uint64_t x74 = 2LLU;
	uint8_t x75 = 0U;
	int32_t x76 = -173;
	volatile uint64_t t11 = 31LLU;

	t11 = (((x73-x74)+x75)*x76);

	if (t11 != 865LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;
	uint64_t t12 = 1LLU;

	t12 = (((x85-x86)+x87)*x88);

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x93 = -15LL;
	int32_t x94 = INT32_MAX;
	static volatile int16_t x95 = -30;
	static volatile int16_t x96 = 0;
	volatile int64_t t13 = -263638288998LL;

	t13 = (((x93-x94)+x95)*x96);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x97 = 5;
	static volatile int16_t x98 = INT16_MIN;
	int8_t x99 = -33;
	int32_t x100 = 137;
	volatile int32_t t14 = -1895939;

	t14 = (((x97-x98)+x99)*x100);

	if (t14 != 4485380) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = UINT64_MAX;
	volatile uint16_t x106 = 0U;
	int8_t x107 = -1;
	volatile uint64_t t15 = 349888119LLU;

	t15 = (((x105-x106)+x107)*x108);

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x111 = -1;
	volatile int32_t t16 = 7;

	t16 = (((x109-x110)+x111)*x112);

	if (t16 != -65536) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 32390997LLU;
	uint64_t t17 = 9062877739153417LLU;

	t17 = (((x113-x114)+x115)*x116);

	if (t17 != 161954985LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x117 = INT8_MIN;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = 31LL;
	uint8_t x120 = UINT8_MAX;
	int64_t t18 = -1LL;

	t18 = (((x117-x118)+x119)*x120);

	if (t18 != -16736160LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = -1;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t19 = 11086088;

	t19 = (((x121-x122)+x123)*x124);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x125 = 1360956311U;
	int32_t x126 = 9;
	volatile int64_t x128 = 975929434LL;
	int64_t t20 = -494720445LL;

	t20 = (((x125-x126)+x127)*x128);

	if (t20 != 1328197312533663634LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x129 = UINT64_MAX;
	volatile int16_t x130 = -1;
	static uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MAX;

	t21 = (((x129-x130)+x131)*x132);

	if (t21 != 140735340806145LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x133 = 127101LLU;
	uint8_t x134 = 15U;
	uint32_t x135 = 1170064U;
	int16_t x136 = INT16_MIN;
	static volatile uint64_t t22 = 6555035501202601381LLU;

	t22 = (((x133-x134)+x135)*x136);

	if (t22 != 18446744031204540416LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x145 = 254;
	uint16_t x146 = 1U;
	static uint64_t x147 = 21349568649939LLU;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t23 = 14942139030442LLU;

	t23 = (((x145-x146)+x147)*x148);

	if (t23 != 699561315960841264LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x149 = INT8_MAX;
	static int32_t x150 = INT32_MAX;
	int64_t x151 = -1LL;
	static int16_t x152 = INT16_MAX;
	static volatile int64_t t24 = 1175LL;

	t24 = (((x149-x150)+x151)*x152);

	if (t24 != -70366592532607LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = 90;
	uint8_t x154 = UINT8_MAX;
	volatile uint8_t x156 = 1U;
	static volatile int32_t t25 = -9;

	t25 = (((x153-x154)+x155)*x156);

	if (t25 != -212) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x158 = INT64_MAX;
	uint64_t x159 = UINT64_MAX;
	static volatile uint64_t x160 = 716787161665756LLU;
	volatile uint64_t t26 = 230357192561714518LLU;

	t26 = (((x157-x158)+x159)*x160);

	if (t26 != 70961929004909844LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = -2;
	static uint64_t x162 = 813430694309485LLU;
	uint8_t x163 = 26U;
	int32_t x164 = -1;

	t27 = (((x161-x162)+x163)*x164);

	if (t27 != 813430694309461LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = UINT16_MAX;
	uint64_t t28 = 1LLU;

	t28 = (((x165-x166)+x167)*x168);

	if (t28 != 18179889587825723461LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x169 = -212;
	volatile int16_t x170 = -54;
	int16_t x171 = -1;
	int8_t x172 = -42;
	volatile int32_t t29 = 48;

	t29 = (((x169-x170)+x171)*x172);

	if (t29 != 6678) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x173 = INT32_MIN;
	int64_t x174 = -37548037712228LL;
	int64_t x175 = -1LL;
	int16_t x176 = 38;
	static int64_t t30 = 721375LL;

	t30 = (((x173-x174)+x175)*x176);

	if (t30 != 1426743828686002LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x177 = UINT16_MAX;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;

	t31 = (((x177-x178)+x179)*x180);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x186 = UINT8_MAX;
	uint32_t x187 = 6234U;
	static int64_t x188 = -1LL;
	volatile int64_t t32 = -2562631111799973LL;

	t32 = (((x185-x186)+x187)*x188);

	if (t32 != -5978LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x189 = -1LL;
	uint32_t x191 = 729351U;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t33 = 16141786LLU;

	t33 = (((x189-x190)+x191)*x192);

	if (t33 != 18446744073708789498LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x193 = -867721610;
	int64_t x195 = INT64_MIN;
	int64_t t34 = 38424LL;

	t34 = (((x193-x194)+x195)*x196);

	if (t34 != 9223372033427530122LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x197 = UINT8_MAX;
	uint64_t x199 = 1827116109LLU;
	int64_t x200 = 230586LL;
	volatile uint64_t t35 = 1LLU;

	t35 = (((x197-x198)+x199)*x200);

	if (t35 != 421307454139890LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x206 = 173599287637LL;
	static int16_t x207 = -149;
	volatile int16_t x208 = INT16_MIN;
	volatile int64_t t36 = -675495818871529LL;

	t36 = (((x205-x206)+x207)*x208);

	if (t36 != 5688501462204416LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x214 = -1LL;
	uint64_t x215 = 121043346871716LLU;
	uint64_t t37 = 9360LLU;

	t37 = (((x213-x214)+x215)*x216);

	if (t37 != 507198217666030498LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x218 = 2727;
	static volatile uint64_t x219 = 225LLU;
	volatile int32_t x220 = -56740;

	t38 = (((x217-x218)+x219)*x220);

	if (t38 != 141396080LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = -68644;
	volatile uint64_t x223 = 19415LLU;
	uint32_t x224 = UINT32_MAX;
	uint64_t t39 = 1533987LLU;

	t39 = (((x221-x222)+x223)*x224);

	if (t39 != 237473036707845LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = 13418928237LLU;
	static volatile int64_t x231 = INT64_MAX;
	uint64_t t40 = 15617LLU;

	t40 = (((x229-x230)+x231)*x232);

	if (t40 != 8076559196047579246LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x233 = INT64_MIN;
	static uint64_t x234 = 7LLU;
	volatile int16_t x235 = -188;
	uint8_t x236 = UINT8_MAX;
	uint64_t t41 = 0LLU;

	t41 = (((x233-x234)+x235)*x236);

	if (t41 != 9223372036854726083LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MAX;
	static uint32_t x239 = 2U;
	volatile int32_t x240 = INT32_MIN;
	volatile uint32_t t42 = 188U;

	t42 = (((x237-x238)+x239)*x240);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x241 = -124;
	int32_t x242 = INT32_MIN;
	volatile int32_t x243 = -14;
	static int16_t x244 = -1;
	int32_t t43 = 36371217;

	t43 = (((x241-x242)+x243)*x244);

	if (t43 != -2147483510) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MAX;
	volatile int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	uint64_t t44 = 0LLU;

	t44 = (((x249-x250)+x251)*x252);

	if (t44 != 128LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x259 = INT8_MIN;
	static volatile int32_t t45 = -232802999;

	t45 = (((x257-x258)+x259)*x260);

	if (t45 != -3717135) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = -26;
	int32_t x262 = -1;
	volatile uint64_t x263 = 2560LLU;
	static int8_t x264 = -23;
	volatile uint64_t t46 = 61503341LLU;

	t46 = (((x261-x262)+x263)*x264);

	if (t46 != 18446744073709493311LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = 6606519LL;
	volatile int8_t x268 = INT8_MAX;
	uint64_t t47 = 832LLU;

	t47 = (((x265-x266)+x267)*x268);

	if (t47 != 839027786LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = 16271;
	volatile int32_t x275 = -1034;
	uint8_t x276 = 1U;
	int32_t t48 = 6026228;

	t48 = (((x273-x274)+x275)*x276);

	if (t48 != 15462) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x277 = 11625;
	int32_t x278 = -1;
	uint64_t x279 = 1LLU;
	int64_t x280 = 38043348205543LL;
	uint64_t t49 = 229627264128673LLU;

	t49 = (((x277-x278)+x279)*x280);

	if (t49 != 442330009585848461LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x289 = 888U;
	uint8_t x290 = 112U;
	int32_t x291 = INT32_MIN;
	int32_t x292 = -1;
	volatile int32_t t50 = -24865344;

	t50 = (((x289-x290)+x291)*x292);

	if (t50 != 2147482872) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x301 = 967U;
	uint16_t x302 = UINT16_MAX;
	static uint32_t x304 = UINT32_MAX;

	t51 = (((x301-x302)+x303)*x304);

	if (t51 != 14054932284183475111LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x305 = 5509LLU;
	static int16_t x308 = 2806;
	static volatile uint64_t t52 = 97958075671LLU;

	t52 = (((x305-x306)+x307)*x308);

	if (t52 != 15472284LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x314 = INT8_MIN;
	uint64_t x315 = 39234391252419857LLU;
	static uint8_t x316 = 53U;
	uint64_t t53 = 0LLU;

	t53 = (((x313-x314)+x315)*x316);

	if (t53 != 2079422736378264240LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x317 = INT16_MIN;
	int64_t x318 = 481114375652LL;
	int64_t x319 = -1806127LL;
	int8_t x320 = -50;

	t54 = (((x317-x318)+x319)*x320);

	if (t54 != 24055810727350LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x321 = 22072466LL;
	static uint64_t x322 = 569256754968334378LLU;
	int16_t x323 = INT16_MIN;
	volatile int32_t x324 = INT32_MIN;
	volatile uint64_t t55 = 46661LLU;

	t55 = (((x321-x322)+x323)*x324);

	if (t55 != 6073211626310336512LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x325 = -1;
	static uint64_t x326 = 1LLU;
	int16_t x327 = -1;
	uint64_t t56 = 57LLU;

	t56 = (((x325-x326)+x327)*x328);

	if (t56 != 18446744073709548535LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x341 = 1U;
	int16_t x342 = -1;
	int32_t x343 = -102619;
	uint8_t x344 = UINT8_MAX;
	int32_t t57 = 314590;

	t57 = (((x341-x342)+x343)*x344);

	if (t57 != -26167335) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = 0;
	int32_t t58 = 5288;

	t58 = (((x345-x346)+x347)*x348);

	if (t58 != -4129151) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int16_t x354 = INT16_MAX;
	int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MAX;
	uint64_t t59 = 240394LLU;

	t59 = (((x353-x354)+x355)*x356);

	if (t59 != 9223301665963147265LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x357 = 100LLU;
	int64_t x358 = INT64_MIN;
	uint32_t x359 = 66454701U;
	static int16_t x360 = -396;
	static uint64_t t60 = 673LLU;

	t60 = (((x357-x358)+x359)*x360);

	if (t60 != 18446744047393450420LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x369 = -270505LL;
	int32_t x371 = -35;
	int64_t t61 = -37672LL;

	t61 = (((x369-x370)+x371)*x372);

	if (t61 != 8853979136LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x373 = -1;
	uint64_t x374 = 140535LLU;
	int32_t x375 = 1;
	int64_t x376 = -89121932LL;
	volatile uint64_t t62 = 7882076591672LLU;

	t62 = (((x373-x374)+x375)*x376);

	if (t62 != 12524750713620LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x383 = INT32_MIN;
	uint32_t x384 = 13U;
	uint32_t t63 = 3U;

	t63 = (((x381-x382)+x383)*x384);

	if (t63 != 2147907682U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x389 = INT8_MAX;
	int64_t x390 = 8LL;
	int64_t x391 = -1LL;
	int64_t x392 = -6251308249390837LL;
	int64_t t64 = -119260LL;

	t64 = (((x389-x390)+x391)*x392);

	if (t64 != -737654373428118766LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x397 = 21256971110143717LLU;
	uint16_t x398 = 203U;
	int64_t x399 = -5534038428LL;
	volatile int32_t x400 = -61;

	t65 = (((x397-x398)+x399)*x400);

	if (t65 != 17150069173567141370LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x407 = 1;
	volatile int16_t x408 = -121;
	static int64_t t66 = 250595LL;

	t66 = (((x405-x406)+x407)*x408);

	if (t66 != -2040423LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint32_t x411 = 1614800254U;
	uint32_t t67 = 20805856U;

	t67 = (((x409-x410)+x411)*x412);

	if (t67 != 1614800510U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x413 = INT64_MAX;
	static int32_t x414 = 4132717;
	int64_t x416 = -1LL;
	volatile int64_t t68 = 62833094897501663LL;

	t68 = (((x413-x414)+x415)*x416);

	if (t68 != -9223372036850643113LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x421 = 286734123096508634LLU;
	int32_t x422 = -1;
	volatile uint32_t x423 = 30512U;
	volatile uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t69 = 4444937814958LLU;

	t69 = (((x421-x422)+x423)*x424);

	if (t69 != 18160009950613012469LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x429 = 1578LLU;
	static volatile int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MAX;
	static volatile uint16_t x432 = UINT16_MAX;
	volatile uint64_t t70 = 430414988707886LLU;

	t70 = (((x429-x430)+x431)*x432);

	if (t70 != 18446744071673903446LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x433 = UINT8_MAX;
	volatile uint64_t x434 = 1814004LLU;
	static volatile int32_t x436 = INT32_MIN;
	uint64_t t71 = 3459LLU;

	t71 = (((x433-x434)+x435)*x436);

	if (t71 != 3894998466560000LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x437 = 6357690111352324088LLU;
	int64_t x438 = -8706289261979LL;
	int64_t x439 = INT64_MAX;
	static int64_t x440 = 3535LL;
	static volatile uint64_t t72 = 21205LLU;

	t72 = (((x437-x438)+x439)*x440);

	if (t72 != 15554410621627650830LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x441 = UINT32_MAX;
	uint64_t x442 = 83014991265137824LLU;
	static int64_t x443 = -161791099229475854LL;
	int64_t x444 = 583047LL;

	t73 = (((x441-x442)+x443)*x444);

	if (t73 != 7451501919285735607LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x465 = UINT32_MAX;
	static int64_t x466 = -184239355224LL;
	int16_t x468 = -101;
	volatile int64_t t74 = -523LL;

	t74 = (((x465-x466)+x467)*x468);

	if (t74 != -19041966561491LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x470 = INT16_MAX;
	int32_t t75 = -3;

	t75 = (((x469-x470)+x471)*x472);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x473 = INT16_MIN;
	int32_t x474 = 17;
	uint32_t x475 = UINT32_MAX;
	int32_t x476 = INT32_MIN;

	t76 = (((x473-x474)+x475)*x476);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MAX;
	static int8_t x479 = INT8_MAX;
	volatile uint64_t x480 = UINT64_MAX;
	volatile uint64_t t77 = 201438019109978937LLU;

	t77 = (((x477-x478)+x479)*x480);

	if (t77 != 65408LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x491 = UINT8_MAX;
	volatile int32_t x492 = -1;
	int64_t t78 = -774694134535732142LL;

	t78 = (((x489-x490)+x491)*x492);

	if (t78 != -9223372036854773328LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x493 = 7255U;
	int16_t x494 = -769;
	int64_t x495 = -3394LL;
	int8_t x496 = INT8_MIN;

	t79 = (((x493-x494)+x495)*x496);

	if (t79 != -592640LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x500 = 303770;
	static uint32_t t80 = 9004977U;

	t80 = (((x497-x498)+x499)*x500);

	if (t80 != 2134038492U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x510 = INT8_MIN;
	uint32_t x511 = UINT32_MAX;
	static volatile uint32_t t81 = 127225714U;

	t81 = (((x509-x510)+x511)*x512);

	if (t81 != 2514419712U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x513 = UINT16_MAX;
	uint64_t x514 = 16505837095786LLU;
	volatile int8_t x516 = INT8_MIN;
	uint64_t t82 = 35988111455LLU;

	t82 = (((x513-x514)+x515)*x516);

	if (t82 != 2112747139872256LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x517 = -1LL;
	volatile uint64_t x519 = UINT64_MAX;
	uint64_t t83 = 16334183934593LLU;

	t83 = (((x517-x518)+x519)*x520);

	if (t83 != 128LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x521 = INT8_MIN;
	uint8_t x522 = 31U;
	static int64_t x523 = -1LL;
	int64_t t84 = -332LL;

	t84 = (((x521-x522)+x523)*x524);

	if (t84 != -343597383520LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x525 = INT8_MIN;
	volatile uint64_t x526 = 95476407LLU;
	int8_t x527 = -1;
	int8_t x528 = 50;
	volatile uint64_t t85 = 1301LLU;

	t85 = (((x525-x526)+x527)*x528);

	if (t85 != 18446744068935724816LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x529 = 53U;
	int8_t x530 = 6;
	uint64_t x531 = 2576645644LLU;
	int64_t x532 = INT64_MIN;
	uint64_t t86 = 5301LLU;

	t86 = (((x529-x530)+x531)*x532);

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x533 = -11711466303LL;
	int32_t x534 = -1;
	static uint8_t x535 = UINT8_MAX;
	int16_t x536 = INT16_MIN;
	volatile int64_t t87 = -376LL;

	t87 = (((x533-x534)+x535)*x536);

	if (t87 != 383761319428096LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x537 = 0;
	int16_t x538 = INT16_MIN;
	int16_t x539 = INT16_MAX;
	static int8_t x540 = -2;

	t88 = (((x537-x538)+x539)*x540);

	if (t88 != -131070) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x541 = INT8_MIN;
	volatile int32_t x542 = 12;
	int64_t x543 = INT64_MAX;
	static int64_t t89 = 17125181878LL;

	t89 = (((x541-x542)+x543)*x544);

	if (t89 != 9223372036854775667LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x550 = 1;
	int16_t x551 = INT16_MAX;
	int16_t x552 = -20;

	t90 = (((x549-x550)+x551)*x552);

	if (t90 != -657860) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x565 = -5356;
	static int8_t x566 = INT8_MIN;
	static uint8_t x568 = 2U;

	t91 = (((x565-x566)+x567)*x568);

	if (t91 != -75992) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x577 = 3100U;
	volatile int16_t x578 = -3798;
	int64_t x579 = 5354597LL;
	static int64_t t92 = -47057LL;

	t92 = (((x577-x578)+x579)*x580);

	if (t92 != 144760365LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x589 = UINT8_MAX;
	int32_t x590 = -1;
	volatile int8_t x591 = 39;
	uint64_t x592 = 128932557870358098LLU;
	static volatile uint64_t t93 = 13704971346869049LLU;

	t93 = (((x589-x590)+x591)*x592);

	if (t93 != 1141616424336535678LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x597 = -1LL;
	static uint8_t x598 = 111U;
	int32_t x599 = -359793;
	static int32_t x600 = INT32_MIN;
	static volatile int64_t t94 = 526501667LL;

	t94 = (((x597-x598)+x599)*x600);

	if (t94 != 772890102333440LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x601 = -1LL;
	uint8_t x603 = 1U;
	int8_t x604 = INT8_MIN;
	int64_t t95 = 268402920982LL;

	t95 = (((x601-x602)+x603)*x604);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x605 = UINT32_MAX;
	int16_t x606 = INT16_MIN;
	int32_t x607 = -1;
	static int32_t x608 = INT32_MIN;

	t96 = (((x605-x606)+x607)*x608);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x609 = -1;
	volatile uint64_t x610 = 1398LLU;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = UINT32_MAX;
	static volatile uint64_t t97 = 4739826634298LLU;

	t97 = (((x609-x610)+x611)*x612);

	if (t97 != 18446597327561983351LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x613 = -5;
	uint32_t x615 = 37U;
	uint64_t x616 = 23816490624353LLU;
	static volatile uint64_t t98 = 8595248008373LLU;

	t98 = (((x613-x614)+x615)*x616);

	if (t98 != 14672700157092790740LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x617 = 472651137U;
	static volatile uint16_t x618 = UINT16_MAX;
	int32_t x620 = -1671;
	volatile uint32_t t99 = 7U;

	t99 = (((x617-x618)+x619)*x620);

	if (t99 != 583428154U) { NG(); } else { ; }
	
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

