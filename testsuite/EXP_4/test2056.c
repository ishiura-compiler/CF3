#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x7 = INT8_MAX;
int64_t x8 = -15LL;
uint64_t t2 = 2440146593589846899LLU;
volatile uint32_t x26 = UINT32_MAX;
static int8_t x46 = -1;
int16_t x52 = INT16_MIN;
uint64_t t8 = 562298068123706821LLU;
uint16_t x61 = 1U;
int64_t x83 = 118911918573LL;
uint64_t x100 = UINT64_MAX;
static volatile uint64_t t15 = 55407667255271174LLU;
int32_t x108 = INT32_MIN;
uint64_t x110 = 61784087011LLU;
volatile int64_t x111 = INT64_MIN;
int16_t x117 = INT16_MIN;
uint64_t x120 = 8913680LLU;
volatile int64_t x124 = -1LL;
int32_t x125 = INT32_MAX;
static volatile uint8_t x126 = 0U;
uint64_t t23 = 30783LLU;
int8_t x133 = 0;
static int64_t x134 = 28825654LL;
uint32_t x136 = UINT32_MAX;
volatile int16_t x143 = -5;
uint32_t x155 = 113509116U;
uint64_t x157 = 121931013145402LLU;
uint64_t t29 = 119390704186LLU;
uint32_t x162 = 1620U;
volatile int32_t x164 = -1;
volatile uint64_t t32 = 1909940038552LLU;
int32_t x185 = 1;
int8_t x189 = INT8_MIN;
static int8_t x191 = 11;
int8_t x192 = INT8_MIN;
int16_t x195 = INT16_MIN;
int32_t x197 = INT32_MIN;
static uint8_t x215 = 45U;
int64_t x216 = -3LL;
volatile int16_t x218 = 0;
uint32_t x220 = 10312919U;
int32_t x225 = INT32_MIN;
int16_t x232 = INT16_MAX;
volatile uint32_t t43 = 95U;
uint64_t x270 = 14LLU;
uint8_t x276 = UINT8_MAX;
int32_t x277 = INT32_MIN;
int64_t x278 = 47LL;
int8_t x286 = INT8_MAX;
int16_t x300 = -1;
static volatile int64_t t53 = 78LL;
static uint32_t x316 = 9346U;
int32_t x320 = -885282;
int16_t x323 = 10735;
volatile uint32_t x336 = UINT32_MAX;
volatile int8_t x353 = -1;
volatile int8_t x354 = INT8_MAX;
int16_t x364 = 14808;
int32_t x377 = INT32_MIN;
static int64_t x379 = 2168133914132LL;
uint16_t x380 = 3387U;
static int32_t t67 = -7;
volatile uint32_t x393 = 891346U;
uint64_t x402 = UINT64_MAX;
volatile uint32_t x410 = UINT32_MAX;
uint64_t t75 = 111LLU;
static int32_t x429 = INT32_MIN;
uint64_t t76 = 9328786269LLU;
static uint32_t t78 = 224U;
uint32_t x450 = 505484631U;
int8_t x451 = -40;
volatile uint32_t t79 = 867U;
uint64_t x467 = 22479837116498358LLU;
volatile int64_t t87 = 557517536LL;
int8_t x490 = -1;
static uint32_t x491 = UINT32_MAX;
int64_t x492 = INT64_MAX;
int8_t x498 = -19;
static volatile int8_t x499 = 20;
uint64_t x500 = 26427240549695893LLU;
int64_t t91 = -30087520LL;
uint8_t x518 = 0U;
int16_t x520 = INT16_MIN;
int16_t x540 = -1;
static int8_t x545 = -1;
uint64_t x546 = UINT64_MAX;
volatile int64_t x547 = 3661656117386661LL;
static int8_t x548 = 52;


void f0(void) {
	int16_t x5 = 580;
	uint64_t x6 = UINT64_MAX;
	uint64_t t0 = 237423271664049LLU;

	t0 = (x5-(x6*(x7^x8)));

	if (t0 != 466LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 6975254058102LL;
	uint64_t x10 = UINT64_MAX;
	uint8_t x11 = 44U;
	uint64_t x12 = 1062592264947040LLU;
	volatile uint64_t t1 = 1044424558018837334LLU;

	t1 = (x9-(x10*(x11^x12)));

	if (t1 != 1069567519005122LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 999964U;
	int32_t x14 = 2865525;
	uint16_t x15 = 21U;
	volatile uint64_t x16 = UINT64_MAX;

	t2 = (x13-(x14*(x15^x16)));

	if (t2 != 64041514LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = -1;
	uint8_t x18 = 0U;
	static uint32_t x19 = 32453U;
	volatile int16_t x20 = INT16_MAX;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x17-(x18*(x19^x20)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = 1912296432131516112LLU;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 4800LLU;
	uint64_t t4 = 58619068492LLU;

	t4 = (x25-(x26*(x27^x28)));

	if (t4 != 1912317056564466703LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x33 = INT32_MAX;
	uint64_t x34 = 3LLU;
	static int16_t x35 = INT16_MIN;
	int64_t x36 = -2626LL;
	volatile uint64_t t5 = 36367668874592LLU;

	t5 = (x33-(x34*(x35^x36)));

	if (t5 != 2147393221LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	uint16_t x39 = 1345U;
	uint16_t x40 = 1036U;
	int32_t t6 = -1759;

	t6 = (x37-(x38*(x39^x40)));

	if (t6 != 10911743) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MAX;
	volatile int32_t x47 = INT32_MIN;
	int32_t x48 = 400794;
	int64_t t7 = 24031892245032230LL;

	t7 = (x45-(x46*(x47^x48)));

	if (t7 != 9223372034707692953LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = 1842571816558977556LLU;
	volatile int32_t x51 = INT32_MIN;

	t8 = (x49-(x50*(x51^x52)));

	if (t8 != 942539336736931840LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MAX;
	int16_t x55 = 5;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t9 = 2;

	t9 = (x53-(x54*(x55^x56)));

	if (t9 != -8191878) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x62 = 26631U;
	int8_t x63 = INT8_MAX;
	static int8_t x64 = INT8_MAX;
	int32_t t10 = -24071642;

	t10 = (x61-(x62*(x63^x64)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = 44;
	int64_t x66 = -3952562179363024LL;
	static volatile int8_t x67 = INT8_MAX;
	static uint8_t x68 = 33U;
	int64_t t11 = 110555323315207LL;

	t11 = (x65-(x66*(x67^x68)));

	if (t11 != 371540844860124300LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MIN;
	volatile uint8_t x84 = 5U;
	volatile uint64_t t12 = 26196185061LLU;

	t12 = (x81-(x82*(x83^x84)));

	if (t12 != 3896505747636223LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = INT32_MAX;
	int32_t x92 = INT32_MIN;
	uint32_t t13 = 601U;

	t13 = (x89-(x90*(x91^x92)));

	if (t13 != 254U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = INT16_MIN;
	static volatile uint64_t x95 = 1LLU;
	uint16_t x96 = UINT16_MAX;
	volatile uint64_t t14 = 892LLU;

	t14 = (x93-(x94*(x95^x96)));

	if (t14 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x97 = -234;
	int32_t x98 = INT32_MAX;
	int64_t x99 = -1LL;

	t15 = (x97-(x98*(x99^x100)));

	if (t15 != 18446744073709551382LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = -1;
	int16_t x103 = INT16_MAX;
	uint8_t x104 = 23U;
	static int32_t t16 = -1;

	t16 = (x101-(x102*(x103^x104)));

	if (t16 != 32999) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = 7218;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MAX;
	uint64_t t17 = 2521580261951LLU;

	t17 = (x105-(x106*(x107^x108)));

	if (t17 != 18446744071562075313LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = -4LL;
	int8_t x112 = -16;
	uint64_t t18 = 199802LLU;

	t18 = (x109-(x110*(x111^x112)));

	if (t18 != 9223373025400167980LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x113 = INT8_MIN;
	volatile uint32_t x114 = 903954U;
	int16_t x115 = 0;
	static int64_t x116 = -4143281166LL;
	int64_t t19 = -1LL;

	t19 = (x113-(x114*(x115^x116)));

	if (t19 != 3745335583130236LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x118 = 13684506LLU;
	int16_t x119 = INT16_MIN;
	volatile uint64_t t20 = 1313007000215LLU;

	t20 = (x117-(x118*(x119^x120)));

	if (t20 != 122406263996512LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = 2;
	int8_t x123 = -1;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x121-(x122*(x123^x124)));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x127 = -1;
	int16_t x128 = -1;
	int32_t t22 = INT32_MAX;

	t22 = (x125-(x126*(x127^x128)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = -27;
	int32_t x130 = 245938299;
	int16_t x131 = INT16_MAX;
	uint64_t x132 = UINT64_MAX;

	t23 = (x129-(x130*(x131^x132)));

	if (t23 != 8058906181605LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x135 = UINT16_MAX;
	volatile int64_t t24 = -76LL;

	t24 = (x133-(x134*(x135^x136)));

	if (t24 != -123803352097751040LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x137 = 79U;
	volatile uint8_t x138 = 0U;
	uint64_t x139 = 3321183348387228LLU;
	int64_t x140 = INT64_MIN;
	static volatile uint64_t t25 = 10846680439LLU;

	t25 = (x137-(x138*(x139^x140)));

	if (t25 != 79LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x141 = INT8_MIN;
	static int8_t x142 = -1;
	int32_t x144 = -1;
	int32_t t26 = -337721915;

	t26 = (x141-(x142*(x143^x144)));

	if (t26 != -124) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = 7368U;
	int8_t x151 = INT8_MIN;
	int8_t x152 = 18;
	static volatile int64_t t27 = 5421025555296510LL;

	t27 = (x149-(x150*(x151^x152)));

	if (t27 != 810479LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x153 = -11;
	int16_t x154 = -58;
	int16_t x156 = INT16_MAX;
	volatile uint32_t t28 = 154415U;

	t28 = (x153-(x154*(x155^x156)));

	if (t28 != 2290373283U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x158 = 3U;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = -1LL;

	t29 = (x157-(x158*(x159^x160)));

	if (t29 != 121943898047290LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = INT32_MIN;
	static int32_t x163 = 1488026;
	uint32_t t30 = 3221U;

	t30 = (x161-(x162*(x163^x164)));

	if (t30 != 263120092U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x169 = 3U;
	int32_t x170 = -1;
	volatile uint32_t x171 = 8306852U;
	int64_t x172 = -1LL;
	volatile int64_t t31 = 620500657LL;

	t31 = (x169-(x170*(x171^x172)));

	if (t31 != -8306850LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x177 = 2497097;
	uint64_t x178 = 80LLU;
	static int16_t x179 = 305;
	int32_t x180 = -344;

	t32 = (x177-(x178*(x179^x180)));

	if (t32 != 2505337LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x186 = 28U;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MIN;
	volatile uint32_t t33 = 932918U;

	t33 = (x185-(x186*(x187^x188)));

	if (t33 != 910365U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x190 = -4;
	volatile int32_t t34 = 589278;

	t34 = (x189-(x190*(x191^x192)));

	if (t34 != -596) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x193 = 1925037179193750495LLU;
	int64_t x194 = -26LL;
	int8_t x196 = INT8_MAX;
	uint64_t t35 = 418200315199714LLU;

	t35 = (x193-(x194*(x195^x196)));

	if (t35 != 1925037179192901829LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x198 = 17749394LLU;
	static uint64_t x199 = 19696767LLU;
	static int32_t x200 = -1;
	volatile uint64_t t36 = 516091952241235LLU;

	t36 = (x197-(x198*(x199^x200)));

	if (t36 != 349603548274944LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x213 = INT32_MIN;
	static uint8_t x214 = UINT8_MAX;
	static volatile int64_t t37 = 11104LL;

	t37 = (x213-(x214*(x215^x216)));

	if (t37 != -2147471408LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x217 = INT64_MAX;
	volatile int64_t x219 = 65LL;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x217-(x218*(x219^x220)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	volatile int64_t x223 = 5LL;
	volatile int8_t x224 = 7;
	volatile int64_t t39 = -367906060017577282LL;

	t39 = (x221-(x222*(x223^x224)));

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x226 = 2LLU;
	int64_t x227 = INT64_MAX;
	uint8_t x228 = UINT8_MAX;
	uint64_t t40 = 221LLU;

	t40 = (x225-(x226*(x227^x228)));

	if (t40 != 18446744071562068480LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x229 = 62U;
	uint32_t x230 = UINT32_MAX;
	static uint64_t x231 = 1115030327427LLU;
	uint64_t t41 = 1LLU;

	t41 = (x229-(x230*(x231^x232)));

	if (t41 != 7134565508837076922LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x237 = 27U;
	int16_t x238 = INT16_MIN;
	static int32_t x239 = 2734690;
	uint64_t x240 = 94136151121782LLU;
	uint64_t t42 = 197189029LLU;

	t42 = (x237-(x238*(x239^x240)));

	if (t42 != 3084653450471538715LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x241 = 321472048U;
	uint16_t x242 = 13U;
	volatile int32_t x243 = 533846;
	volatile uint8_t x244 = UINT8_MAX;

	t43 = (x241-(x242*(x243^x244)));

	if (t43 != 314530971U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x245 = 55649U;
	static int64_t x246 = -51LL;
	uint16_t x247 = 2062U;
	uint8_t x248 = 2U;
	int64_t t44 = 105202686LL;

	t44 = (x245-(x246*(x247^x248)));

	if (t44 != 160709LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = -1;
	int32_t x251 = INT32_MIN;
	static volatile int64_t x252 = -8177025331750LL;
	int64_t t45 = 1LL;

	t45 = (x249-(x250*(x251^x252)));

	if (t45 != 8176062648025LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x261 = UINT8_MAX;
	static uint32_t x262 = UINT32_MAX;
	static volatile int8_t x263 = -1;
	int8_t x264 = INT8_MIN;
	uint32_t t46 = 1U;

	t46 = (x261-(x262*(x263^x264)));

	if (t46 != 382U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	uint64_t t47 = 29377236041726517LLU;

	t47 = (x269-(x270*(x271^x272)));

	if (t47 != 18446744071562985472LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x273 = -1LL;
	uint32_t x274 = 1U;
	int64_t x275 = INT64_MIN;
	volatile int64_t t48 = -1092495863247538414LL;

	t48 = (x273-(x274*(x275^x276)));

	if (t48 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x279 = 2731U;
	uint32_t x280 = 223U;
	volatile int64_t t49 = -943LL;

	t49 = (x277-(x278*(x279^x280)));

	if (t49 != -2147609420LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	volatile uint16_t x287 = UINT16_MAX;
	volatile int8_t x288 = -1;
	volatile int32_t t50 = -73465;

	t50 = (x285-(x286*(x287^x288)));

	if (t50 != 8322944) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x293 = 3U;
	uint16_t x294 = 913U;
	volatile uint16_t x295 = 12U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t51 = 61;

	t51 = (x293-(x294*(x295^x296)));

	if (t51 != 105911) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x297 = -1LL;
	volatile uint16_t x298 = 13463U;
	uint32_t x299 = 1079U;
	int64_t t52 = -5848537769933LL;

	t52 = (x297-(x298*(x299^x300)));

	if (t52 != -4280427257LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x301 = INT8_MAX;
	volatile int8_t x302 = -1;
	uint8_t x303 = 3U;
	int64_t x304 = INT64_MIN;

	t53 = (x301-(x302*(x303^x304)));

	if (t53 != -9223372036854775678LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x305 = 98U;
	static uint8_t x306 = UINT8_MAX;
	int64_t x307 = 2274963522LL;
	static int64_t x308 = 5235LL;
	int64_t t54 = 25531454158379LL;

	t54 = (x305-(x306*(x307^x308)));

	if (t54 != -580114910317LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x313 = -24;
	int16_t x314 = -1;
	int8_t x315 = -1;
	volatile uint32_t t55 = 307259U;

	t55 = (x313-(x314*(x315^x316)));

	if (t55 != 4294957925U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x317 = 1190172LLU;
	static int8_t x318 = -4;
	int16_t x319 = -1;
	volatile uint64_t t56 = 196157LLU;

	t56 = (x317-(x318*(x319^x320)));

	if (t56 != 4731296LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = -13;
	volatile int8_t x322 = -2;
	uint64_t x324 = 131048911367969037LLU;
	uint64_t t57 = 0LLU;

	t57 = (x321-(x322*(x323^x324)));

	if (t57 != 262097822735950263LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MAX;
	uint8_t x335 = UINT8_MAX;
	uint32_t t58 = 3295U;

	t58 = (x333-(x334*(x335^x336)));

	if (t58 != 8388224U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x337 = 161U;
	int64_t x338 = -1LL;
	int32_t x339 = INT32_MIN;
	volatile int16_t x340 = INT16_MIN;
	volatile int64_t t59 = 84LL;

	t59 = (x337-(x338*(x339^x340)));

	if (t59 != 2147451041LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x345 = INT32_MAX;
	int64_t x346 = 0LL;
	int8_t x347 = INT8_MIN;
	static uint32_t x348 = UINT32_MAX;
	int64_t t60 = -8889185LL;

	t60 = (x345-(x346*(x347^x348)));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x349 = 3559U;
	uint32_t x350 = 11874U;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;
	int64_t t61 = 48261354105659348LL;

	t61 = (x349-(x350*(x351^x352)));

	if (t61 != -389071799LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x355 = 498297105U;
	volatile int32_t x356 = INT32_MIN;
	uint32_t t62 = 447743573U;

	t62 = (x353-(x354*(x355^x356)));

	if (t62 != 3288260752U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x357 = -15080;
	int64_t x358 = -1LL;
	int64_t x359 = INT64_MAX;
	int8_t x360 = 2;
	volatile int64_t t63 = 621237LL;

	t63 = (x357-(x358*(x359^x360)));

	if (t63 != 9223372036854760725LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = -1LL;
	static int32_t x362 = -1;
	uint16_t x363 = 13270U;
	volatile int64_t t64 = 154180LL;

	t64 = (x361-(x362*(x363^x364)));

	if (t64 != 2573LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x378 = INT8_MIN;
	volatile int64_t t65 = 1698078481898869006LL;

	t65 = (x377-(x378*(x379^x380)));

	if (t65 != 277518993168256LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x381 = INT8_MIN;
	static uint32_t x382 = 434U;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MAX;
	uint32_t t66 = 1071163210U;

	t66 = (x381-(x382*(x383^x384)));

	if (t66 != 4294912050U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = -24;
	int32_t x386 = -262984;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = 7013;

	t67 = (x385-(x386*(x387^x388)));

	if (t67 != 1858244920) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x394 = 1886100734U;
	volatile int16_t x395 = INT16_MAX;
	uint32_t x396 = 3U;
	uint32_t t68 = 78492U;

	t68 = (x393-(x394*(x395^x396)));

	if (t68 != 4080864714U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x397 = UINT16_MAX;
	volatile uint16_t x398 = 1U;
	volatile int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	int32_t t69 = -318658580;

	t69 = (x397-(x398*(x399^x400)));

	if (t69 != 65408) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x401 = 44U;
	int8_t x403 = -7;
	static uint32_t x404 = 939406730U;
	uint64_t t70 = 123LLU;

	t70 = (x401-(x402*(x403^x404)));

	if (t70 != 3355560607LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x405 = INT64_MAX;
	volatile int64_t x406 = INT64_MIN;
	volatile int64_t x407 = -1LL;
	static uint64_t x408 = 2LLU;
	uint64_t t71 = UINT64_MAX;

	t71 = (x405-(x406*(x407^x408)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x409 = 1;
	int64_t x411 = -1LL;
	int32_t x412 = 911280561;
	volatile int64_t t72 = -1673LL;

	t72 = (x409-(x410*(x411^x412)));

	if (t72 != 3913920210359219791LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MIN;
	static int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	int32_t t73 = -250;

	t73 = (x413-(x414*(x415^x416)));

	if (t73 != 2147450879) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x421 = 27383U;
	volatile uint16_t x422 = UINT16_MAX;
	uint16_t x423 = 143U;
	int8_t x424 = -11;
	volatile uint32_t t74 = 549U;

	t74 = (x421-(x422*(x423^x424)));

	if (t74 != 8809073U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x425 = 105341;
	int8_t x426 = 9;
	int16_t x427 = -7;
	uint64_t x428 = 137400088451273943LLU;

	t75 = (x425-(x426*(x427^x428)));

	if (t75 != 1236600796061570783LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x430 = 0U;
	uint64_t x431 = UINT64_MAX;
	volatile uint32_t x432 = 2605129U;

	t76 = (x429-(x430*(x431^x432)));

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x438 = 3856272016703776LLU;
	uint8_t x439 = UINT8_MAX;
	volatile int16_t x440 = INT16_MIN;
	uint64_t t77 = 254853922507205872LLU;

	t77 = (x437-(x438*(x439^x440)));

	if (t77 != 5475135599977783584LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x445 = 2559707U;
	uint16_t x446 = UINT16_MAX;
	uint8_t x447 = UINT8_MAX;
	static uint8_t x448 = 6U;

	t78 = (x445-(x446*(x447^x448)));

	if (t78 != 4281208788U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x449 = -1;
	int16_t x452 = INT16_MIN;

	t79 = (x449-(x450*(x451^x452)));

	if (t79 != 713020823U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x457 = INT8_MIN;
	static uint64_t x458 = 520955154610248794LLU;
	uint32_t x459 = 1414U;
	static volatile int64_t x460 = INT64_MAX;
	uint64_t t80 = 1612588671944208LLU;

	t80 = (x457-(x458*(x459^x460)));

	if (t80 != 17728524898829530358LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x461 = UINT16_MAX;
	volatile int64_t x462 = -1LL;
	uint32_t x463 = 859331U;
	volatile int16_t x464 = 1344;
	int64_t t81 = 9660040LL;

	t81 = (x461-(x462*(x463^x464)));

	if (t81 != 924034LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x465 = 659432LL;
	int16_t x466 = 11;
	static int64_t x468 = INT64_MAX;
	uint64_t t82 = 13979785688LLU;

	t82 = (x465-(x466*(x467^x468)));

	if (t82 != 9470650245136917189LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x469 = 71U;
	static int64_t x470 = -1LL;
	int64_t x471 = -1LL;
	static int64_t x472 = -16100999564327LL;
	int64_t t83 = 10512343165231667LL;

	t83 = (x469-(x470*(x471^x472)));

	if (t83 != 16100999564397LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x473 = 1594U;
	volatile int16_t x474 = INT16_MAX;
	uint32_t x475 = 2119U;
	static int16_t x476 = -1;
	uint32_t t84 = 213U;

	t84 = (x473-(x474*(x475^x476)));

	if (t84 != 69467634U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x477 = -1;
	volatile uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MIN;
	int64_t x480 = INT64_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x477-(x478*(x479^x480)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x481 = 715495;
	int8_t x482 = -48;
	int8_t x483 = 10;
	int16_t x484 = INT16_MIN;
	int32_t t86 = -476;

	t86 = (x481-(x482*(x483^x484)));

	if (t86 != -856889) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x485 = 1U;
	int16_t x486 = -1;
	int64_t x487 = INT64_MIN;
	int16_t x488 = -3;

	t87 = (x485-(x486*(x487^x488)));

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x489 = 0U;
	int64_t t88 = -73398388585555LL;

	t88 = (x489-(x490*(x491^x492)));

	if (t88 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x497 = 0;
	static volatile uint64_t t89 = 253LLU;

	t89 = (x497-(x498*(x499^x500)));

	if (t89 != 502117570444221587LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x501 = -19;
	uint32_t x502 = UINT32_MAX;
	int32_t x503 = -624;
	int32_t x504 = 47;
	static uint32_t t90 = 5097U;

	t90 = (x501-(x502*(x503^x504)));

	if (t90 != 4294966700U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x509 = INT32_MIN;
	int8_t x510 = -13;
	static int8_t x511 = INT8_MIN;
	volatile int64_t x512 = 7621204629277LL;

	t91 = (x509-(x510*(x511^x512)));

	if (t91 != -99077807665159LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x517 = 117U;
	int32_t x519 = 7;
	volatile int32_t t92 = 6308;

	t92 = (x517-(x518*(x519^x520)));

	if (t92 != 117) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x521 = 6542U;
	int8_t x522 = 0;
	static uint16_t x523 = 14U;
	static uint16_t x524 = UINT16_MAX;
	uint32_t t93 = 102U;

	t93 = (x521-(x522*(x523^x524)));

	if (t93 != 6542U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x525 = INT32_MAX;
	uint8_t x526 = 40U;
	uint16_t x527 = 7U;
	uint32_t x528 = 5860U;
	volatile uint32_t t94 = 661U;

	t94 = (x525-(x526*(x527^x528)));

	if (t94 != 2147249287U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x537 = -1;
	uint8_t x538 = 6U;
	volatile int32_t x539 = -60412;
	volatile int32_t t95 = 16;

	t95 = (x537-(x538*(x539^x540)));

	if (t95 != -362467) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t t96 = 7648117165LLU;

	t96 = (x545-(x546*(x547^x548)));

	if (t96 != 3661656117386640LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x549 = INT16_MAX;
	uint16_t x550 = 8599U;
	int16_t x551 = 0;
	uint64_t x552 = 15349509LLU;
	volatile uint64_t t97 = 3124425151192067LLU;

	t97 = (x549-(x550*(x551^x552)));

	if (t97 != 18446743941719156492LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x553 = -94;
	volatile int8_t x554 = 17;
	static uint8_t x555 = 5U;
	uint64_t x556 = 25607693661794LLU;
	volatile uint64_t t98 = 702434851275517LLU;

	t98 = (x553-(x554*(x555^x556)));

	if (t98 != 18446308742917300939LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x557 = -1;
	static int8_t x558 = -1;
	int64_t x559 = 352429564876420925LL;
	static volatile int16_t x560 = 205;
	volatile int64_t t99 = -887132241959783518LL;

	t99 = (x557-(x558*(x559^x560)));

	if (t99 != 352429564876421103LL) { NG(); } else { ; }
	
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

