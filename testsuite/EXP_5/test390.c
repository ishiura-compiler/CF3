#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int16_t x2 = -1;
volatile uint8_t x8 = UINT8_MAX;
uint32_t t1 = 65U;
static volatile int64_t x15 = 3769116856LL;
static int8_t x17 = 7;
static volatile int64_t x24 = INT64_MAX;
int32_t x31 = 95912523;
int32_t x32 = INT32_MIN;
uint64_t t5 = UINT64_MAX;
int16_t x53 = INT16_MIN;
static volatile int32_t t8 = 208257;
volatile int32_t x71 = -1;
int64_t x72 = -1LL;
volatile int64_t x81 = INT64_MIN;
static uint16_t x88 = 7U;
int32_t x98 = INT32_MIN;
int64_t x99 = -1LL;
static volatile uint64_t x109 = 8558672401615211LLU;
volatile int8_t x113 = 2;
int32_t x129 = 1076;
static int16_t x138 = INT16_MAX;
volatile int16_t x148 = INT16_MAX;
volatile uint64_t x153 = 214638LLU;
static uint64_t x154 = 78309567011492503LLU;
int64_t x161 = INT64_MIN;
volatile int8_t x162 = INT8_MAX;
volatile int16_t x175 = -1;
volatile int8_t x182 = INT8_MAX;
uint16_t x194 = UINT16_MAX;
int8_t x203 = -1;
int32_t x206 = 1;
volatile uint32_t t34 = 8131U;
int16_t x211 = -302;
static int32_t x213 = -1;
uint64_t x216 = 121484LLU;
uint64_t t36 = 2610460094463573170LLU;
volatile int16_t x226 = 1;
static volatile int64_t t38 = -14681730964LL;
static int64_t x230 = -1LL;
int64_t t39 = -5LL;
uint32_t x235 = UINT32_MAX;
int64_t t41 = 71663853593081568LL;
uint64_t x251 = UINT64_MAX;
volatile uint32_t x263 = 236977842U;
static int16_t x266 = INT16_MAX;
static int8_t x267 = -1;
static int32_t x268 = INT32_MIN;
static volatile int32_t t47 = 1;
int64_t t49 = 64631LL;
volatile uint16_t x301 = 2U;
int16_t x305 = -1;
volatile uint8_t x307 = 0U;
static int64_t x309 = INT64_MIN;
uint64_t t54 = 48955140LLU;
int32_t x320 = INT32_MIN;
uint32_t x321 = 2113443864U;
volatile uint8_t x329 = UINT8_MAX;
int8_t x332 = INT8_MAX;
volatile uint32_t t57 = 348477371U;
volatile uint16_t x333 = 4U;
volatile uint64_t t59 = UINT64_MAX;
int8_t x343 = -2;
static volatile int32_t t62 = 148893;
static uint16_t x357 = UINT16_MAX;
int32_t x404 = INT32_MIN;
int64_t x411 = INT64_MAX;
int8_t x412 = INT8_MAX;
int8_t x413 = INT8_MIN;
int32_t t70 = -6;
volatile int8_t x425 = -11;
static int8_t x427 = INT8_MIN;
static int64_t x434 = 16285512LL;
static volatile int64_t x435 = -1LL;
static int64_t t74 = -693251LL;
static int16_t x438 = INT16_MAX;
int16_t x441 = INT16_MIN;
int16_t x446 = INT16_MAX;
uint16_t x447 = UINT16_MAX;
uint64_t x453 = 158622723LLU;
int8_t x457 = -2;
int64_t x461 = INT64_MAX;
int32_t x462 = 12682;
int8_t x464 = 4;
int64_t t80 = -39LL;
int32_t x475 = INT32_MAX;
int32_t x482 = -1;
int32_t x487 = -1;
volatile int32_t x488 = INT32_MIN;
static int16_t x503 = -2;
volatile int32_t x510 = INT32_MIN;
uint64_t t89 = UINT64_MAX;
uint16_t x528 = 1304U;
int64_t t93 = 0LL;
int8_t x545 = -1;
static volatile int64_t x546 = -73005957281LL;
static uint64_t t95 = 16LLU;
volatile uint64_t t96 = 41181457377417LLU;
int8_t x553 = -1;
static volatile int64_t x555 = -1LL;
static int64_t x556 = INT64_MAX;


void f0(void) {
	int16_t x3 = INT16_MIN;
	int32_t x4 = -9350283;
	int32_t t0 = 7;

	t0 = (x1^((x2*x3)/x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 7U;
	int32_t x6 = INT32_MIN;
	static uint32_t x7 = 8332525U;

	t1 = (x5^((x6*x7)/x8));

	if (t1 != 8421511U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 439748367223LLU;
	int32_t x16 = -110;
	uint64_t t2 = 600LLU;

	t2 = (x13^((x14*x15)/x16));

	if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 43204LLU;
	volatile uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 2446717LLU;

	t3 = (x17^((x18*x19)/x20));

	if (t3 != 7LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int32_t x23 = -1;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x21^((x22*x23)/x24));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -1LL;
	uint64_t x30 = 7410173982461607LLU;

	t5 = (x29^((x30*x31)/x32));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = -1;
	uint64_t x46 = 5LLU;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x45^((x46*x47)/x48));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x54 = 0;
	uint8_t x55 = 96U;
	int8_t x56 = -1;
	static int32_t t7 = -565432;

	t7 = (x53^((x54*x55)/x56));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = -1;
	static uint8_t x62 = 39U;
	static int8_t x63 = -1;
	volatile uint8_t x64 = UINT8_MAX;

	t8 = (x61^((x62*x63)/x64));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x65 = 2143LL;
	int64_t x66 = -1LL;
	static int8_t x67 = -4;
	static int32_t x68 = INT32_MIN;
	volatile int64_t t9 = -116149597650938LL;

	t9 = (x65^((x66*x67)/x68));

	if (t9 != 2143LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = -1LL;
	static int64_t x70 = INT64_MAX;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x69^((x70*x71)/x72));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x82 = 4;
	static uint16_t x83 = 921U;
	static uint32_t x84 = 42979U;
	int64_t t11 = INT64_MIN;

	t11 = (x81^((x82*x83)/x84));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = -1;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MIN;
	static volatile uint64_t t12 = 8343253357391067722LLU;

	t12 = (x85^((x86*x87)/x88));

	if (t12 != 17129119497016012214LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -19059155037LL;
	uint16_t x96 = 958U;
	int64_t t13 = 7LL;

	t13 = (x93^((x94*x95)/x96));

	if (t13 != 2546506002LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x97 = INT64_MIN;
	int16_t x100 = 935;
	volatile int64_t t14 = 14149LL;

	t14 = (x97^((x98*x99)/x100));

	if (t14 != -9223372036852479035LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x101 = -36980238936LL;
	int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int64_t x104 = 213414772294LL;
	static int64_t t15 = 1LL;

	t15 = (x101^((x102*x103)/x104));

	if (t15 != -36980238936LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x110 = 1U;
	uint8_t x111 = 2U;
	int64_t x112 = INT64_MIN;
	uint64_t t16 = 6486LLU;

	t16 = (x109^((x110*x111)/x112));

	if (t16 != 8558672401615211LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x114 = -1;
	volatile int64_t x115 = -42238749LL;
	uint32_t x116 = 7U;
	int64_t t17 = -62LL;

	t17 = (x113^((x114*x115)/x116));

	if (t17 != 6034105LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x121 = 68373279724LLU;
	int8_t x122 = 10;
	static int8_t x123 = INT8_MIN;
	uint16_t x124 = 137U;
	volatile uint64_t t18 = 335332607LLU;

	t18 = (x121^((x122*x123)/x124));

	if (t18 != 18446744005336271899LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x130 = -2969596641719LL;
	static int32_t x131 = -1;
	int64_t x132 = 15LL;
	volatile int64_t t19 = -311317375537LL;

	t19 = (x129^((x130*x131)/x132));

	if (t19 != 197973110515LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x133 = -1LL;
	static uint8_t x134 = 21U;
	static int8_t x135 = INT8_MAX;
	static int64_t x136 = 228557264400LL;
	volatile int64_t t20 = 1588847789264096148LL;

	t20 = (x133^((x134*x135)/x136));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x137 = INT8_MIN;
	volatile uint64_t x139 = 27LLU;
	static volatile int32_t x140 = INT32_MIN;
	volatile uint64_t t21 = 65061LLU;

	t21 = (x137^((x138*x139)/x140));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x146 = 1088;
	uint16_t x147 = UINT16_MAX;
	static volatile int32_t t22 = 4;

	t22 = (x145^((x146*x147)/x148));

	if (t22 != -30592) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MAX;
	int64_t x152 = -1LL;
	static int64_t t23 = -984031365130LL;

	t23 = (x149^((x150*x151)/x152));

	if (t23 != 16255LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x155 = INT64_MIN;
	int64_t x156 = 220155396134LL;
	static uint64_t t24 = 1331540053LLU;

	t24 = (x153^((x154*x155)/x156));

	if (t24 != 41682372LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x163 = INT8_MAX;
	int16_t x164 = INT16_MAX;
	int64_t t25 = INT64_MIN;

	t25 = (x161^((x162*x163)/x164));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = INT8_MIN;
	volatile int16_t x166 = INT16_MIN;
	int16_t x167 = 1063;
	int16_t x168 = INT16_MIN;
	volatile int32_t t26 = 36;

	t26 = (x165^((x166*x167)/x168));

	if (t26 != -1113) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x173 = 28U;
	uint64_t x174 = UINT64_MAX;
	int16_t x176 = INT16_MAX;
	uint64_t t27 = 1268645LLU;

	t27 = (x173^((x174*x175)/x176));

	if (t27 != 28LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x177 = 17U;
	int8_t x178 = 1;
	volatile uint8_t x179 = UINT8_MAX;
	static int8_t x180 = -3;
	int32_t t28 = -1;

	t28 = (x177^((x178*x179)/x180));

	if (t28 != -70) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x181 = UINT8_MAX;
	static uint8_t x183 = UINT8_MAX;
	int64_t x184 = -1LL;
	volatile int64_t t29 = 0LL;

	t29 = (x181^((x182*x183)/x184));

	if (t29 != -32384LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x185 = 3;
	uint64_t x186 = 1306900289491LLU;
	int32_t x187 = -1;
	uint32_t x188 = 10613574U;
	static uint64_t t30 = 1271624341LLU;

	t30 = (x185^((x186*x187)/x188));

	if (t30 != 1738033085447LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x189 = -13276343748263904LL;
	volatile int16_t x190 = INT16_MAX;
	static volatile uint16_t x191 = 3U;
	uint64_t x192 = 20931970LLU;
	uint64_t t31 = 3297668049LLU;

	t31 = (x189^((x190*x191)/x192));

	if (t31 != 18433467729961287712LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x193 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t32 = 22185;

	t32 = (x193^((x194*x195)/x196));

	if (t32 != 8388608) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x201 = 0U;
	uint8_t x202 = 0U;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t33 = 29U;

	t33 = (x201^((x202*x203)/x204));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x205 = 347U;
	volatile uint16_t x207 = UINT16_MAX;
	uint16_t x208 = 2517U;

	t34 = (x205^((x206*x207)/x208));

	if (t34 != 321U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x209 = 4U;
	uint64_t x210 = 14649510049LLU;
	static int16_t x212 = INT16_MIN;
	volatile uint64_t t35 = 3LLU;

	t35 = (x209^((x210*x211)/x212));

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x214 = 145822102261564175LL;
	int16_t x215 = 30;

	t36 = (x213^((x214*x215)/x216));

	if (t36 != 18446708063510119205LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x217 = INT8_MIN;
	static volatile uint8_t x218 = 7U;
	uint64_t x219 = 3054598730139912098LLU;
	int32_t x220 = INT32_MIN;
	uint64_t t37 = 1750583738970532531LLU;

	t37 = (x217^((x218*x219)/x220));

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x225 = 74U;
	int64_t x227 = 5991170303283868LL;
	int16_t x228 = 10195;

	t38 = (x225^((x226*x227)/x228));

	if (t38 != 587657705021LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = 3;
	static int32_t x231 = INT32_MIN;
	int32_t x232 = 510870;

	t39 = (x229^((x230*x231)/x232));

	if (t39 != 4200LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x233 = INT8_MIN;
	int64_t x234 = -53747551LL;
	static uint16_t x236 = 23U;
	static int64_t t40 = -2059391LL;

	t40 = (x233^((x234*x235)/x236));

	if (t40 != 10036694510058406LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x237 = 23U;
	static int8_t x238 = INT8_MAX;
	volatile uint16_t x239 = 425U;
	volatile int64_t x240 = 2240LL;

	t41 = (x237^((x238*x239)/x240));

	if (t41 != 15LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = -1;
	int64_t x246 = -329160756LL;
	uint16_t x247 = 3213U;
	uint8_t x248 = 8U;
	volatile int64_t t42 = 832239399728158581LL;

	t42 = (x245^((x246*x247)/x248));

	if (t42 != 132199188627LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	static uint8_t x252 = 125U;
	static uint64_t t43 = 820LLU;

	t43 = (x249^((x250*x251)/x252));

	if (t43 != 73786976861773889LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 1955U;
	volatile uint64_t x264 = 239LLU;
	volatile uint64_t t44 = 16486826116LLU;

	t44 = (x261^((x262*x263)/x264));

	if (t44 != 18446744073693944166LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x265 = UINT32_MAX;
	uint32_t t45 = UINT32_MAX;

	t45 = (x265^((x266*x267)/x268));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x269 = INT64_MIN;
	int32_t x270 = -309197983;
	uint32_t x271 = UINT32_MAX;
	static int32_t x272 = INT32_MAX;
	int64_t t46 = INT64_MIN;

	t46 = (x269^((x270*x271)/x272));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x273 = 0;
	uint8_t x274 = 123U;
	uint16_t x275 = 523U;
	static int16_t x276 = -1;

	t47 = (x273^((x274*x275)/x276));

	if (t47 != -64329) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = -1;
	int32_t x283 = -1;
	int8_t x284 = -1;
	static volatile int64_t t48 = INT64_MIN;

	t48 = (x281^((x282*x283)/x284));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x285 = INT16_MAX;
	uint8_t x286 = 0U;
	int64_t x287 = -1LL;
	int8_t x288 = 2;

	t49 = (x285^((x286*x287)/x288));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = 171;
	volatile uint64_t x294 = 5662716931585LLU;
	int32_t x295 = -1081;
	int64_t x296 = INT64_MIN;
	static volatile uint64_t t50 = 1154757LLU;

	t50 = (x293^((x294*x295)/x296));

	if (t50 != 170LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x302 = -1LL;
	int16_t x303 = -1;
	uint64_t x304 = 246402107LLU;
	volatile uint64_t t51 = 154931060LLU;

	t51 = (x301^((x302*x303)/x304));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x306 = INT8_MIN;
	int16_t x308 = -3;
	volatile int32_t t52 = 48320;

	t52 = (x305^((x306*x307)/x308));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	int64_t x312 = 68LL;
	volatile int64_t t53 = -11599LL;

	t53 = (x309^((x310*x311)/x312));

	if (t53 != 9223372036854714129LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = 64775;
	volatile uint64_t x314 = 71352840401LLU;
	static uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;

	t54 = (x313^((x314*x315)/x316));

	if (t54 != 64775LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = -33LL;
	uint8_t x318 = 40U;
	uint64_t x319 = 75594031558LLU;
	static volatile uint64_t t55 = 352781774298LLU;

	t55 = (x317^((x318*x319)/x320));

	if (t55 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x322 = 377097327851234409LLU;
	int8_t x323 = 1;
	static int16_t x324 = -1;
	uint64_t t56 = 13666642167359LLU;

	t56 = (x321^((x322*x323)/x324));

	if (t56 != 2113443864LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x330 = -15;
	uint32_t x331 = 2586U;

	t57 = (x329^((x330*x331)/x332));

	if (t57 != 33818145U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x334 = 3747299LLU;
	static int64_t x335 = -1LL;
	uint8_t x336 = 9U;
	volatile uint64_t t58 = 32663705944692208LLU;

	t58 = (x333^((x334*x335)/x336));

	if (t58 != 2049638230411756039LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x337 = UINT64_MAX;
	static uint32_t x338 = 0U;
	int64_t x339 = -1LL;
	volatile uint8_t x340 = 1U;

	t59 = (x337^((x338*x339)/x340));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x341 = -1;
	static volatile int8_t x342 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t60 = -1;

	t60 = (x341^((x342*x343)/x344));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x345 = 8U;
	static int8_t x346 = INT8_MAX;
	int64_t x347 = -1LL;
	static int64_t x348 = INT64_MAX;
	static int64_t t61 = -1LL;

	t61 = (x345^((x346*x347)/x348));

	if (t61 != 8LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x353 = 136U;
	static int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;

	t62 = (x353^((x354*x355)/x356));

	if (t62 != 16136) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x358 = 0U;
	static uint32_t x359 = UINT32_MAX;
	volatile int8_t x360 = 29;
	volatile uint32_t t63 = 1323U;

	t63 = (x357^((x358*x359)/x360));

	if (t63 != 65535U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x361 = -1;
	volatile uint16_t x362 = 6U;
	volatile int16_t x363 = INT16_MIN;
	static uint16_t x364 = UINT16_MAX;
	static int32_t t64 = 24353197;

	t64 = (x361^((x362*x363)/x364));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = 0;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -1;
	int32_t t65 = 312347;

	t65 = (x385^((x386*x387)/x388));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 1170326U;
	volatile uint32_t t66 = 27520023U;

	t66 = (x389^((x390*x391)/x392));

	if (t66 != 4294963669U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = 882759724LLU;
	int8_t x395 = 18;
	static volatile int64_t x396 = -1596LL;
	static uint64_t t67 = 82325092137LLU;

	t67 = (x393^((x394*x395)/x396));

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x401 = -1;
	volatile int16_t x402 = INT16_MAX;
	int64_t x403 = -1LL;
	int64_t t68 = -13813802729LL;

	t68 = (x401^((x402*x403)/x404));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x409 = -1;
	uint64_t x410 = UINT64_MAX;
	uint64_t t69 = 333LLU;

	t69 = (x409^((x410*x411)/x412));

	if (t69 != 18374119097041403774LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x414 = INT8_MIN;
	int8_t x415 = 0;
	int32_t x416 = 1;

	t70 = (x413^((x414*x415)/x416));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x417 = 1U;
	uint16_t x418 = UINT16_MAX;
	volatile uint8_t x419 = 1U;
	static uint32_t x420 = 412140U;
	uint32_t t71 = 14091U;

	t71 = (x417^((x418*x419)/x420));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x426 = 71333;
	uint8_t x428 = UINT8_MAX;
	int32_t t72 = 355;

	t72 = (x425^((x426*x427)/x428));

	if (t72 != 35799) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x429 = -1;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 664U;
	int32_t x432 = -57093;
	static int32_t t73 = 59094;

	t73 = (x429^((x430*x431)/x432));

	if (t73 != -382) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x433 = 19U;
	uint32_t x436 = 11197U;

	t74 = (x433^((x434*x435)/x436));

	if (t74 != -1471LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x437 = INT64_MIN;
	uint16_t x439 = 1149U;
	int8_t x440 = INT8_MAX;
	int64_t t75 = -493LL;

	t75 = (x437^((x438*x439)/x440));

	if (t75 != -9223372036854479357LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x442 = 333006995U;
	int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MAX;
	volatile uint32_t t76 = 61U;

	t76 = (x441^((x442*x443)/x444));

	if (t76 != 4294934528U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x448 = UINT64_MAX;
	volatile uint64_t t77 = 41LLU;

	t77 = (x445^((x446*x447)/x448));

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x454 = 6;
	uint8_t x455 = UINT8_MAX;
	int32_t x456 = -1;
	volatile uint64_t t78 = 377802801205287934LLU;

	t78 = (x453^((x454*x455)/x456));

	if (t78 != 18446744073550929413LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x458 = 19U;
	uint8_t x459 = 13U;
	volatile int32_t x460 = INT32_MIN;
	volatile uint32_t t79 = 15209U;

	t79 = (x457^((x458*x459)/x460));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x463 = INT8_MIN;

	t80 = (x461^((x462*x463)/x464));

	if (t80 != -9223372036854369985LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x465 = 135U;
	static int16_t x466 = INT16_MAX;
	int8_t x467 = -1;
	int64_t x468 = -17977197310916458LL;
	int64_t t81 = -5986428907151296LL;

	t81 = (x465^((x466*x467)/x468));

	if (t81 != 135LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x469 = 24U;
	int64_t x470 = -1LL;
	static int8_t x471 = INT8_MAX;
	uint32_t x472 = 302114U;
	volatile int64_t t82 = -765576599194LL;

	t82 = (x469^((x470*x471)/x472));

	if (t82 != 24LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x473 = 828485016270841809LLU;
	static volatile int8_t x474 = 0;
	volatile uint32_t x476 = 1062206423U;
	volatile uint64_t t83 = 0LLU;

	t83 = (x473^((x474*x475)/x476));

	if (t83 != 828485016270841809LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x477 = INT64_MAX;
	static int16_t x478 = INT16_MIN;
	volatile int8_t x479 = 3;
	volatile int16_t x480 = 16;
	volatile int64_t t84 = -1172192458LL;

	t84 = (x477^((x478*x479)/x480));

	if (t84 != -9223372036854769665LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x481 = INT16_MIN;
	int64_t x483 = -1LL;
	int32_t x484 = INT32_MAX;
	volatile int64_t t85 = 3044850661533796102LL;

	t85 = (x481^((x482*x483)/x484));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x485 = 2U;
	int16_t x486 = INT16_MIN;
	uint32_t t86 = 8U;

	t86 = (x485^((x486*x487)/x488));

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x489 = 0;
	int8_t x490 = 21;
	volatile int16_t x491 = -1;
	static int64_t x492 = -1LL;
	static volatile int64_t t87 = 0LL;

	t87 = (x489^((x490*x491)/x492));

	if (t87 != 21LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x501 = INT64_MAX;
	int32_t x502 = -1669471;
	static int32_t x504 = INT32_MIN;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x501^((x502*x503)/x504));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x509 = -1;
	static uint32_t x511 = 3U;
	uint64_t x512 = UINT64_MAX;

	t89 = (x509^((x510*x511)/x512));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x525 = INT8_MIN;
	static uint32_t x526 = UINT32_MAX;
	volatile uint64_t x527 = 999608226692414LLU;
	volatile uint64_t t90 = 0LLU;

	t90 = (x525^((x526*x527)/x528));

	if (t90 != 18440706891365363597LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x529 = INT32_MIN;
	uint16_t x530 = 8U;
	int16_t x531 = INT16_MIN;
	int64_t x532 = -263215LL;
	volatile int64_t t91 = 1515799677316963LL;

	t91 = (x529^((x530*x531)/x532));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x533 = INT32_MAX;
	volatile int64_t x534 = INT64_MAX;
	uint64_t x535 = UINT64_MAX;
	volatile uint64_t x536 = 53102447LLU;
	uint64_t t92 = 1808271760985501600LLU;

	t92 = (x533^((x534*x535)/x536));

	if (t92 != 172054716347LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x537 = INT64_MIN;
	uint8_t x538 = 2U;
	int64_t x539 = -402608990410LL;
	volatile int32_t x540 = INT32_MIN;

	t93 = (x537^((x538*x539)/x540));

	if (t93 != -9223372036854775434LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x541 = 27U;
	volatile uint16_t x542 = UINT16_MAX;
	volatile uint32_t x543 = 51849U;
	int64_t x544 = INT64_MIN;
	volatile int64_t t94 = 6622LL;

	t94 = (x541^((x542*x543)/x544));

	if (t94 != 27LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x547 = UINT16_MAX;
	uint64_t x548 = 2857244055887075599LLU;

	t95 = (x545^((x546*x547)/x548));

	if (t95 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x549 = 185362667306LLU;
	static int16_t x550 = -1;
	int64_t x551 = -246LL;
	uint64_t x552 = UINT64_MAX;

	t96 = (x549^((x550*x551)/x552));

	if (t96 != 185362667306LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x554 = 430;
	int64_t t97 = -2756239LL;

	t97 = (x553^((x554*x555)/x556));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x557 = 34U;
	static uint32_t x558 = UINT32_MAX;
	volatile uint64_t x559 = 3774681902299818657LLU;
	uint8_t x560 = 31U;
	volatile uint64_t t98 = 1717987063012920LLU;

	t98 = (x557^((x558*x559)/x560));

	if (t98 != 414429250592666142LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x561 = 37600U;
	uint16_t x562 = 0U;
	uint8_t x563 = UINT8_MAX;
	uint8_t x564 = UINT8_MAX;
	volatile uint32_t t99 = 14598U;

	t99 = (x561^((x562*x563)/x564));

	if (t99 != 37600U) { NG(); } else { ; }
	
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

