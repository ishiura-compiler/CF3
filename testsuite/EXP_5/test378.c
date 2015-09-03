#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
volatile uint16_t x2 = UINT16_MAX;
int32_t x10 = INT32_MIN;
uint64_t x22 = UINT64_MAX;
volatile int16_t x24 = -1;
volatile uint64_t t5 = 38LLU;
static int32_t x28 = INT32_MIN;
int8_t x33 = INT8_MIN;
volatile int64_t t9 = -12871421922968LL;
int32_t x49 = INT32_MIN;
static volatile uint32_t t13 = 3U;
uint32_t x95 = 129U;
static int64_t x106 = -2660932128143745LL;
volatile int64_t x108 = -126603335754LL;
volatile uint64_t t18 = 826226690009871LLU;
volatile int32_t x114 = -1;
int64_t x122 = -1LL;
volatile int16_t x126 = -1;
uint32_t x127 = 5U;
static uint64_t t25 = 1634LLU;
int16_t x147 = INT16_MIN;
uint32_t x155 = 478725557U;
volatile uint32_t x167 = 72636U;
int32_t x173 = -1;
static int8_t x179 = INT8_MAX;
static uint32_t x181 = UINT32_MAX;
int16_t x182 = -29;
uint32_t t31 = 2U;
int64_t x188 = INT64_MIN;
uint32_t x190 = 38809336U;
volatile uint64_t x199 = UINT64_MAX;
static volatile uint64_t t35 = 3634503996379LLU;
static volatile int8_t x206 = INT8_MAX;
int64_t x212 = 2886890750328LL;
volatile int64_t t37 = 385316536995253LL;
int64_t x219 = -1LL;
int64_t x220 = 2936651216453774440LL;
static int64_t x224 = -1LL;
int32_t x225 = 13;
uint32_t x226 = UINT32_MAX;
int8_t x249 = INT8_MIN;
int8_t x251 = 2;
static volatile uint64_t x259 = 761024726769967LLU;
volatile int64_t t45 = INT64_MAX;
volatile uint64_t x267 = UINT64_MAX;
volatile int64_t x268 = -1LL;
volatile uint64_t t46 = 83942LLU;
static uint64_t x270 = 0LLU;
volatile int64_t x271 = INT64_MAX;
static volatile int8_t x272 = INT8_MIN;
int16_t x292 = INT16_MAX;
int8_t x298 = -18;
static volatile int16_t x301 = -1;
int32_t x304 = INT32_MIN;
uint64_t x308 = 173559LLU;
uint64_t t55 = 277455271273029LLU;
uint8_t x322 = 2U;
uint8_t x325 = UINT8_MAX;
int8_t x326 = INT8_MAX;
static int8_t x341 = INT8_MAX;
int16_t x343 = 0;
uint64_t t63 = 10217967LLU;
uint16_t x349 = 13U;
volatile int8_t x352 = INT8_MIN;
volatile uint64_t t65 = 30LLU;
int8_t x361 = INT8_MIN;
uint8_t x363 = 68U;
int64_t x365 = -1LL;
int64_t t67 = -1733326LL;
int16_t x385 = -1;
volatile uint16_t x386 = 167U;
volatile uint32_t t70 = 5125400U;
int32_t x402 = -50;
volatile int64_t x404 = INT64_MIN;
uint32_t x413 = 1908U;
int64_t x415 = 175LL;
volatile uint16_t x423 = UINT16_MAX;
static volatile uint32_t x446 = UINT32_MAX;
static uint8_t x453 = 35U;
uint64_t x454 = 1859467LLU;
uint64_t t79 = 25LLU;
int64_t t85 = INT64_MIN;
volatile uint64_t x482 = 3618137465720496LLU;
uint64_t x486 = 8598762081418014LLU;
uint64_t t87 = UINT64_MAX;
static int16_t x489 = -1;
int16_t x498 = -1;
volatile int64_t t91 = 389731291LL;
int8_t x509 = 1;
static int64_t x512 = INT64_MIN;
int16_t x515 = INT16_MAX;
uint64_t x520 = UINT64_MAX;
int8_t x523 = INT8_MAX;
volatile int64_t x524 = 1LL;
volatile int64_t t95 = -6374494090673LL;
uint64_t t97 = 1095484072663790986LLU;
volatile int8_t x541 = -1;


void f0(void) {
	int16_t x3 = 1;
	uint32_t x4 = UINT32_MAX;
	static uint32_t t0 = 123U;

	t0 = (x1+((x2*x3)/x4));

	if (t0 != 255U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 186692055U;
	static uint64_t x6 = UINT64_MAX;
	uint8_t x7 = UINT8_MAX;
	volatile uint8_t x8 = UINT8_MAX;
	uint64_t t1 = 76LLU;

	t1 = (x5+((x6*x7)/x8));

	if (t1 != 72340173024768727LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 5819396476870571337LLU;
	uint32_t x11 = 1982U;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 3822433715LLU;

	t2 = (x9+((x10*x11)/x12));

	if (t2 != 5819396476870571337LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MAX;
	volatile int64_t t3 = 65LL;

	t3 = (x13+((x14*x15)/x16));

	if (t3 != -386LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 903U;
	volatile int32_t x18 = 3;
	uint8_t x19 = 58U;
	static int8_t x20 = INT8_MIN;
	volatile uint32_t t4 = 9U;

	t4 = (x17+((x18*x19)/x20));

	if (t4 != 902U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 0;
	uint16_t x23 = 977U;

	t5 = (x21+((x22*x23)/x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 569314341549426688LLU;
	uint8_t x26 = 55U;
	static uint32_t x27 = 129423U;
	uint64_t t6 = 1065438974295552LLU;

	t6 = (x25+((x26*x27)/x28));

	if (t6 != 569314341549426688LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -1LL;
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 0U;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = -3LL;

	t7 = (x29+((x30*x31)/x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 244LLU;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = INT64_MIN;
	uint64_t t8 = 12281688LLU;

	t8 = (x33+((x34*x35)/x36));

	if (t8 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	static volatile int8_t x38 = INT8_MAX;
	int8_t x39 = -1;
	int64_t x40 = INT64_MAX;

	t9 = (x37+((x38*x39)/x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = 1;
	static uint64_t x51 = 1676LLU;
	int8_t x52 = 1;
	static uint64_t t10 = 10145027230057LLU;

	t10 = (x49+((x50*x51)/x52));

	if (t10 != 18446744071562069644LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = 1;
	volatile uint8_t x70 = 1U;
	int64_t x71 = INT64_MAX;
	static int32_t x72 = INT32_MIN;
	static int64_t t11 = -64138366086039866LL;

	t11 = (x69+((x70*x71)/x72));

	if (t11 != -4294967294LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x73 = -1;
	int32_t x74 = -1;
	static uint32_t x75 = UINT32_MAX;
	volatile int16_t x76 = 11340;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x73+((x74*x75)/x76));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MIN;
	uint32_t x78 = 1428262427U;
	int8_t x79 = -1;
	volatile int16_t x80 = 355;

	t13 = (x77+((x78*x79)/x80));

	if (t13 != 2155558872U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = -1;
	static volatile uint8_t x82 = 35U;
	static int32_t x83 = 803702;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t14 = -506417529;

	t14 = (x81+((x82*x83)/x84));

	if (t14 != -219763) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x85 = 11U;
	int8_t x86 = -52;
	static int64_t x87 = 6640LL;
	volatile int64_t x88 = -1LL;
	volatile int64_t t15 = -1203246732LL;

	t15 = (x85+((x86*x87)/x88));

	if (t15 != 345291LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = -170859;
	int32_t x96 = INT32_MIN;
	static uint32_t t16 = 11921U;

	t16 = (x93+((x94*x95)/x96));

	if (t16 != 4294967169U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 1152U;
	uint32_t x103 = 165U;
	volatile int64_t x104 = -8683496LL;
	volatile int64_t t17 = 3LL;

	t17 = (x101+((x102*x103)/x104));

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x107 = UINT64_MAX;

	t18 = (x105+((x106*x107)/x108));

	if (t18 != 255LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x109 = 2279U;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	uint8_t x112 = 4U;
	uint64_t t19 = 132159088055LLU;

	t19 = (x109+((x110*x111)/x112));

	if (t19 != 2305843009213696231LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = 11363;
	volatile uint32_t t20 = 10230347U;

	t20 = (x113+((x114*x115)/x116));

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x121 = UINT16_MAX;
	static volatile uint32_t x123 = UINT32_MAX;
	uint64_t x124 = 2052886430LLU;
	uint64_t t21 = 4426056485838LLU;

	t21 = (x121+((x122*x123)/x124));

	if (t21 != 8985825195LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t22 = 5759U;

	t22 = (x125+((x126*x127)/x128));

	if (t22 != 4294967169U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 274893567975992994LLU;
	static volatile int8_t x130 = 3;
	int8_t x131 = -8;
	uint8_t x132 = 1U;
	uint64_t t23 = 114LLU;

	t23 = (x129+((x130*x131)/x132));

	if (t23 != 274893567975992970LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = INT64_MAX;
	static uint64_t x134 = 175530505737LLU;
	int8_t x135 = -5;
	int32_t x136 = 266;
	uint64_t t24 = 3814300228LLU;

	t24 = (x133+((x134*x135)/x136));

	if (t24 != 9292720695486569126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = 32LLU;
	int64_t x143 = INT64_MAX;
	int8_t x144 = -1;

	t25 = (x141+((x142*x143)/x144));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -1;
	volatile int64_t x146 = 666233663LL;
	int16_t x148 = -442;
	volatile int64_t t26 = -1LL;

	t26 = (x145+((x146*x147)/x148));

	if (t26 != 49391730019LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = 46;
	uint64_t x154 = 317037671598024LLU;
	int32_t x156 = INT32_MIN;
	static uint64_t t27 = 25376212LLU;

	t27 = (x153+((x154*x155)/x156));

	if (t27 != 46LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = -1609128;
	int32_t x166 = INT32_MIN;
	static volatile int32_t x168 = INT32_MIN;
	uint32_t t28 = 3733833U;

	t28 = (x165+((x166*x167)/x168));

	if (t28 != 4293358168U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = -1LL;
	int8_t x176 = -1;
	volatile int64_t t29 = 49904856455LL;

	t29 = (x173+((x174*x175)/x176));

	if (t29 != 254LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x177 = 268377567625976LLU;
	int32_t x178 = -1;
	int16_t x180 = INT16_MIN;
	uint64_t t30 = 128328124617LLU;

	t30 = (x177+((x178*x179)/x180));

	if (t30 != 268377567625976LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x183 = INT8_MAX;
	uint16_t x184 = 410U;

	t31 = (x181+((x182*x183)/x184));

	if (t31 != 4294967287U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x185 = 1;
	static volatile int32_t x186 = INT32_MAX;
	int32_t x187 = -1;
	int64_t t32 = 9889715LL;

	t32 = (x185+((x186*x187)/x188));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = INT32_MAX;
	int16_t x191 = -355;
	int16_t x192 = INT16_MAX;
	uint32_t t33 = 1U;

	t33 = (x189+((x190*x191)/x192));

	if (t33 != 2147587487U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = 1369238921LLU;
	int16_t x194 = -474;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t34 = 6085185979785982LLU;

	t34 = (x193+((x194*x195)/x196));

	if (t34 != 1369238921LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = -1;
	int64_t x198 = INT64_MIN;
	int16_t x200 = INT16_MAX;

	t35 = (x197+((x198*x199)/x200));

	if (t35 != 281483566907399LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x205 = INT16_MIN;
	volatile uint32_t x207 = 189U;
	uint8_t x208 = 13U;
	volatile uint32_t t36 = 68851U;

	t36 = (x205+((x206*x207)/x208));

	if (t36 != 4294936374U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x209 = 0U;
	static int16_t x210 = -45;
	int8_t x211 = INT8_MIN;

	t37 = (x209+((x210*x211)/x212));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x217 = 28161U;
	volatile int8_t x218 = INT8_MAX;
	volatile int64_t t38 = -9444937195310510LL;

	t38 = (x217+((x218*x219)/x220));

	if (t38 != 28161LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x221 = 14U;
	int64_t x222 = -19382360531LL;
	volatile uint32_t x223 = 6467834U;
	volatile int64_t t39 = 32LL;

	t39 = (x221+((x222*x223)/x224));

	if (t39 != 125361890442659868LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t40 = 1380876092U;

	t40 = (x225+((x226*x227)/x228));

	if (t40 != 14U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x229 = 1U;
	int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t41 = 31039909;

	t41 = (x229+((x230*x231)/x232));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x250 = UINT8_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t42 = 248251891247706LLU;

	t42 = (x249+((x250*x251)/x252));

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int32_t x254 = -1;
	uint64_t x255 = 8LLU;
	static volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x253+((x254*x255)/x256));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = -1;
	int64_t x258 = 64LL;
	int32_t x260 = INT32_MIN;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x257+((x258*x259)/x260));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x261 = INT64_MAX;
	uint8_t x262 = 1U;
	volatile int16_t x263 = -1;
	int32_t x264 = -966167238;

	t45 = (x261+((x262*x263)/x264));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = 511188;
	uint16_t x266 = 7U;

	t46 = (x265+((x266*x267)/x268));

	if (t46 != 511188LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile uint64_t t47 = 347176712632734048LLU;

	t47 = (x269+((x270*x271)/x272));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = UINT8_MAX;
	static volatile int16_t x276 = INT16_MIN;
	volatile int32_t t48 = 690460;

	t48 = (x273+((x274*x275)/x276));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x277 = 26;
	int8_t x278 = 2;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = UINT16_MAX;
	static int32_t t49 = -67;

	t49 = (x277+((x278*x279)/x280));

	if (t49 != 26) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	int64_t x284 = 8LL;
	volatile int64_t t50 = -23962567LL;

	t50 = (x281+((x282*x283)/x284));

	if (t50 != -28672LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x289 = -1;
	volatile int32_t x290 = -1;
	int8_t x291 = INT8_MIN;
	int32_t t51 = -38284;

	t51 = (x289+((x290*x291)/x292));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x293 = 0U;
	int8_t x294 = 0;
	static uint8_t x295 = 12U;
	int32_t x296 = 1;
	volatile int32_t t52 = -4807539;

	t52 = (x293+((x294*x295)/x296));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x297 = UINT32_MAX;
	uint8_t x299 = 0U;
	static int64_t x300 = -241227062LL;
	int64_t t53 = 167622925313836LL;

	t53 = (x297+((x298*x299)/x300));

	if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x302 = 0;
	int64_t x303 = -431LL;
	int64_t t54 = 4416827661045LL;

	t54 = (x301+((x302*x303)/x304));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x305 = 23U;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = -1;

	t55 = (x305+((x306*x307)/x308));

	if (t55 != 106285148414737LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x313 = 27U;
	int16_t x314 = INT16_MAX;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = -1;
	volatile int32_t t56 = 12284;

	t56 = (x313+((x314*x315)/x316));

	if (t56 != -8355558) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x317 = 541;
	static int64_t x318 = 388657LL;
	uint64_t x319 = 4229587633LLU;
	int64_t x320 = INT64_MIN;
	volatile uint64_t t57 = 4LLU;

	t57 = (x317+((x318*x319)/x320));

	if (t57 != 541LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = -11750974;
	int16_t x323 = -1;
	uint16_t x324 = 1369U;
	int32_t t58 = -23465374;

	t58 = (x321+((x322*x323)/x324));

	if (t58 != -11750974) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x327 = INT16_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t59 = 116531;

	t59 = (x325+((x326*x327)/x328));

	if (t59 != 16574) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	uint64_t x331 = 26596550414719304LLU;
	static uint16_t x332 = 21U;
	volatile uint64_t t60 = 27651395285457051LLU;

	t60 = (x329+((x330*x331)/x332));

	if (t60 != 716304077172641937LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x333 = UINT8_MAX;
	static volatile int64_t x334 = -1LL;
	int32_t x335 = INT32_MIN;
	uint8_t x336 = UINT8_MAX;
	int64_t t61 = 82170LL;

	t61 = (x333+((x334*x335)/x336));

	if (t61 != 8421759LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x342 = -1LL;
	int64_t x344 = -1LL;
	int64_t t62 = -1034133LL;

	t62 = (x341+((x342*x343)/x344));

	if (t62 != 127LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x345 = 102U;
	volatile uint64_t x346 = 282016196449LLU;
	volatile int8_t x347 = 2;
	uint32_t x348 = UINT32_MAX;

	t63 = (x345+((x346*x347)/x348));

	if (t63 != 233LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x350 = -597069LL;
	volatile uint32_t x351 = UINT32_MAX;
	int64_t t64 = -4740LL;

	t64 = (x349+((x350*x351)/x352));

	if (t64 != 20034311155156LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int8_t x358 = -9;
	static uint64_t x359 = UINT64_MAX;
	uint32_t x360 = UINT32_MAX;

	t65 = (x357+((x358*x359)/x360));

	if (t65 != 255LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x362 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t66 = -37874723260442LL;

	t66 = (x361+((x362*x363)/x364));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = -1LL;
	static volatile int64_t x368 = INT64_MIN;

	t67 = (x365+((x366*x367)/x368));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x369 = 1;
	int16_t x370 = INT16_MIN;
	static uint64_t x371 = 0LLU;
	volatile int32_t x372 = 186;
	uint64_t t68 = 32627036896867LLU;

	t68 = (x369+((x370*x371)/x372));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x373 = 58949916158LLU;
	volatile int32_t x374 = -1;
	int64_t x375 = -1LL;
	int16_t x376 = -1;
	volatile uint64_t t69 = 16082881LLU;

	t69 = (x373+((x374*x375)/x376));

	if (t69 != 58949916157LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x387 = INT16_MIN;
	volatile uint32_t x388 = 28059U;

	t70 = (x385+((x386*x387)/x388));

	if (t70 != 152873U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x389 = 258420654701LLU;
	int32_t x390 = INT32_MIN;
	static volatile uint32_t x391 = 37U;
	int8_t x392 = 20;
	uint64_t t71 = 3361518090LLU;

	t71 = (x389+((x390*x391)/x392));

	if (t71 != 258528028883LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x397 = 170490069009LLU;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = 19;
	static volatile int64_t x400 = INT64_MIN;
	volatile uint64_t t72 = 1735620009271037LLU;

	t72 = (x397+((x398*x399)/x400));

	if (t72 != 170490069010LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x401 = 104U;
	volatile int16_t x403 = INT16_MIN;
	int64_t t73 = -563LL;

	t73 = (x401+((x402*x403)/x404));

	if (t73 != 104LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x409 = UINT64_MAX;
	int8_t x410 = -1;
	int8_t x411 = -1;
	static volatile uint64_t x412 = 1179212890123018LLU;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x409+((x410*x411)/x412));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x414 = -158;
	uint16_t x416 = 10U;
	static volatile int64_t t75 = 3317821LL;

	t75 = (x413+((x414*x415)/x416));

	if (t75 != -857LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x417 = 2;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = 1U;
	volatile int32_t t76 = 1;

	t76 = (x417+((x418*x419)/x420));

	if (t76 != 16386) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x421 = 205473533U;
	uint32_t x422 = 3463U;
	static volatile uint64_t x424 = 33633735965LLU;
	volatile uint64_t t77 = 3168689388657665795LLU;

	t77 = (x421+((x422*x423)/x424));

	if (t77 != 205473533LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x445 = 114U;
	int8_t x447 = 5;
	int8_t x448 = INT8_MIN;
	uint32_t t78 = 0U;

	t78 = (x445+((x446*x447)/x448));

	if (t78 != 115U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x455 = 2129;
	uint8_t x456 = 11U;

	t79 = (x453+((x454*x455)/x456));

	if (t79 != 359891420LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x457 = 80271478212000732LLU;
	uint64_t x458 = 21416LLU;
	static uint16_t x459 = 32211U;
	int16_t x460 = -1;
	volatile uint64_t t80 = 48617080670574624LLU;

	t80 = (x457+((x458*x459)/x460));

	if (t80 != 80271478212000732LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x461 = UINT64_MAX;
	volatile uint64_t x462 = 445145729715876LLU;
	static int8_t x463 = INT8_MIN;
	int64_t x464 = INT64_MAX;
	volatile uint64_t t81 = 674LLU;

	t81 = (x461+((x462*x463)/x464));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x465 = INT64_MIN;
	static volatile int16_t x466 = -2506;
	int8_t x467 = -1;
	int8_t x468 = INT8_MAX;
	static volatile int64_t t82 = -86718744LL;

	t82 = (x465+((x466*x467)/x468));

	if (t82 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x469 = INT32_MIN;
	volatile uint8_t x470 = 14U;
	int64_t x471 = -1LL;
	int16_t x472 = -1;
	int64_t t83 = 394LL;

	t83 = (x469+((x470*x471)/x472));

	if (t83 != -2147483634LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x473 = -1;
	volatile uint64_t x474 = 10534827000710552LLU;
	uint32_t x475 = 1447631394U;
	uint8_t x476 = 3U;
	volatile uint64_t t84 = 129824938409LLU;

	t84 = (x473+((x474*x475)/x476));

	if (t84 != 4742765778882039652LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MIN;
	static int16_t x479 = 248;
	int32_t x480 = INT32_MIN;

	t85 = (x477+((x478*x479)/x480));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x481 = INT8_MIN;
	uint64_t x483 = 31LLU;
	int8_t x484 = INT8_MIN;
	volatile uint64_t t86 = 0LLU;

	t86 = (x481+((x482*x483)/x484));

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x485 = -1;
	volatile int64_t x487 = -2521418LL;
	int16_t x488 = INT16_MIN;

	t87 = (x485+((x486*x487)/x488));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x490 = 35U;
	int64_t x491 = -1LL;
	int8_t x492 = -1;
	volatile int64_t t88 = 6290LL;

	t88 = (x489+((x490*x491)/x492));

	if (t88 != 34LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x493 = -1701741;
	uint16_t x494 = 4U;
	uint8_t x495 = 18U;
	uint64_t x496 = 4138278256708LLU;
	volatile uint64_t t89 = 5LLU;

	t89 = (x493+((x494*x495)/x496));

	if (t89 != 18446744073707849875LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x497 = 33491760569573LLU;
	static int16_t x499 = INT16_MIN;
	int64_t x500 = 245472007650683104LL;
	volatile uint64_t t90 = 430298508813292444LLU;

	t90 = (x497+((x498*x499)/x500));

	if (t90 != 33491760569573LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x501 = UINT16_MAX;
	uint8_t x502 = UINT8_MAX;
	uint32_t x503 = 135U;
	int64_t x504 = -1LL;

	t91 = (x501+((x502*x503)/x504));

	if (t91 != 31110LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x510 = 12;
	int8_t x511 = 1;
	volatile int64_t t92 = 1179873LL;

	t92 = (x509+((x510*x511)/x512));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x513 = 0;
	int8_t x514 = INT8_MAX;
	uint32_t x516 = 6661U;
	volatile uint32_t t93 = 54480U;

	t93 = (x513+((x514*x515)/x516));

	if (t93 != 624U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x517 = 1;
	volatile int32_t x518 = 2;
	static uint16_t x519 = 3848U;
	uint64_t t94 = 855932LLU;

	t94 = (x517+((x518*x519)/x520));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = -3935;
	uint16_t x522 = UINT16_MAX;

	t95 = (x521+((x522*x523)/x524));

	if (t95 != 8319010LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x525 = 0U;
	int64_t x526 = -1LL;
	int16_t x527 = 3;
	int32_t x528 = 246;
	int64_t t96 = 1617472LL;

	t96 = (x525+((x526*x527)/x528));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x537 = UINT32_MAX;
	uint64_t x538 = 10547744231LLU;
	volatile int64_t x539 = INT64_MAX;
	int32_t x540 = -1578;

	t97 = (x537+((x538*x539)/x540));

	if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x542 = 4840267U;
	static int32_t x543 = INT32_MAX;
	int32_t x544 = INT32_MIN;
	uint32_t t98 = UINT32_MAX;

	t98 = (x541+((x542*x543)/x544));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = 124;
	int32_t x546 = INT32_MIN;
	int64_t x547 = -1LL;
	int64_t x548 = INT64_MIN;
	volatile int64_t t99 = 57LL;

	t99 = (x545+((x546*x547)/x548));

	if (t99 != 124LL) { NG(); } else { ; }
	
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

