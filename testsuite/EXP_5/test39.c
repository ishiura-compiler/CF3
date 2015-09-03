#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 897030292015LLU;
uint64_t x5 = 101450330871LLU;
volatile uint64_t x7 = 3056867396975LLU;
uint64_t x11 = 1897710555846702549LLU;
int16_t x21 = 1;
uint64_t x28 = UINT64_MAX;
volatile uint16_t x29 = 2U;
static int16_t x32 = 56;
int32_t x41 = -1;
uint64_t x44 = UINT64_MAX;
int32_t x52 = INT32_MAX;
static uint32_t x54 = 333U;
int32_t x55 = INT32_MIN;
static volatile uint64_t t9 = 754343595285LLU;
static volatile uint64_t x63 = UINT64_MAX;
int16_t x65 = -1969;
uint64_t x73 = 252398002070154568LLU;
static int16_t x99 = INT16_MIN;
uint64_t t16 = 114788262736789600LLU;
static uint8_t x113 = 0U;
static uint8_t x115 = UINT8_MAX;
int16_t x126 = -1;
int16_t x130 = -1;
volatile uint64_t t21 = 14309816323159680LLU;
int64_t x141 = INT64_MIN;
int32_t x142 = 189452;
int64_t x153 = INT64_MIN;
static uint64_t x155 = 974900227364LLU;
static int64_t x157 = INT64_MIN;
int16_t x158 = INT16_MAX;
uint64_t x168 = 106LLU;
int32_t x187 = -152101398;
static int8_t x189 = INT8_MAX;
uint16_t x190 = 13U;
static int32_t x196 = -1;
int64_t x202 = INT64_MAX;
int64_t x213 = -535136LL;
static uint32_t x215 = UINT32_MAX;
uint32_t x216 = 116932153U;
int64_t t34 = -42297074LL;
int32_t x228 = -386;
int64_t x230 = -1LL;
int8_t x239 = INT8_MIN;
int16_t x240 = 16;
static volatile int32_t t39 = 93;
static volatile int64_t x249 = INT64_MAX;
uint16_t x250 = 4U;
int64_t x251 = -669LL;
static uint8_t x258 = UINT8_MAX;
static volatile uint16_t x265 = 2U;
int16_t x280 = -45;
volatile int32_t t46 = -358;
uint16_t x303 = 32315U;
int32_t x325 = -1;
int8_t x331 = -1;
int64_t x334 = 63669847LL;
uint64_t x335 = UINT64_MAX;
int16_t x344 = INT16_MIN;
uint16_t x383 = 1U;
int8_t x390 = -24;
static int32_t x394 = -1;
static int16_t x396 = 397;
int32_t x409 = 5774;
volatile uint8_t x412 = 13U;
int32_t x421 = -2957612;
int8_t x425 = INT8_MAX;
int32_t x431 = -725521179;
uint64_t t75 = 5033337656856LLU;
static int8_t x455 = INT8_MAX;
static uint16_t x456 = 41U;
int32_t x460 = INT32_MAX;
int8_t x461 = INT8_MIN;
static int8_t x474 = -18;
static volatile uint8_t x476 = UINT8_MAX;
static uint64_t t81 = 3276730115LLU;
int8_t x482 = 6;
volatile uint16_t x502 = 27877U;
volatile uint8_t x503 = 18U;
int64_t x506 = 8LL;
uint64_t x516 = 33277836621759132LLU;
static uint64_t t89 = 3968964130LLU;
int8_t x537 = INT8_MIN;
int16_t x549 = INT16_MAX;
volatile uint32_t x550 = 110705U;
int64_t x551 = -40192872LL;
static int8_t x563 = INT8_MIN;
static uint16_t x564 = 37U;
volatile int64_t t98 = 690557301LL;
int32_t x570 = 155;
int64_t x571 = -2LL;
uint16_t x572 = UINT16_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint32_t x2 = UINT32_MAX;
	uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 1LLU;

	t0 = (x1^((x2+x3)*x4));

	if (t0 != 59068353854964269LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 89799326U;
	uint32_t x8 = 195077646U;
	uint64_t t1 = 6353153962LLU;

	t1 = (x5^((x6+x7)*x8));

	if (t1 != 6048203325619301441LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 15U;
	int16_t x10 = INT16_MIN;
	int32_t x12 = INT32_MIN;
	static volatile uint64_t t2 = 6105LLU;

	t2 = (x9^((x10+x11)*x12));

	if (t2 != 16726374605953957903LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x22 = -435952;
	int64_t x23 = -40762LL;
	int8_t x24 = -1;
	int64_t t3 = 774LL;

	t3 = (x21^((x22+x23)*x24));

	if (t3 != 476715LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	uint32_t x27 = 13312U;
	uint64_t t4 = 799LLU;

	t4 = (x25^((x26+x27)*x28));

	if (t4 != 18446744073709538559LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x30 = 2419590LLU;
	uint16_t x31 = 26349U;
	volatile uint64_t t5 = 170LLU;

	t5 = (x29^((x30+x31)*x32));

	if (t5 != 136972586LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	int64_t x38 = 5504179LL;
	uint16_t x39 = UINT16_MAX;
	uint16_t x40 = 94U;
	static volatile int64_t t6 = -249190LL;

	t6 = (x37^((x38+x39)*x40));

	if (t6 != 3771414179LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x42 = -5526LL;
	static volatile uint64_t x43 = 1443309934LLU;
	static uint64_t t7 = 1LLU;

	t7 = (x41^((x42+x43)*x44));

	if (t7 != 1443304407LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 47863U;
	int8_t x51 = -1;
	volatile int64_t t8 = -1LL;

	t8 = (x49^((x50+x51)*x52));

	if (t8 != -9223372032559856374LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	uint64_t x56 = 10177LLU;

	t9 = (x53^((x54+x55)*x56));

	if (t9 != 21854937696754LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MIN;
	int64_t x58 = -14439LL;
	uint8_t x59 = 7U;
	int16_t x60 = INT16_MAX;
	static volatile int64_t t10 = 4046778784386645LL;

	t10 = (x57^((x58+x59)*x60));

	if (t10 != 1674590304LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	static int8_t x62 = -1;
	static int8_t x64 = -1;
	uint64_t t11 = 5423409LLU;

	t11 = (x61^((x62+x63)*x64));

	if (t11 != 4294967293LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x66 = INT32_MAX;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = 7981U;
	volatile uint32_t t12 = 21595U;

	t12 = (x65^((x66+x67)*x68));

	if (t12 != 2148512284U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x74 = -4776;
	volatile int32_t x75 = 1;
	int64_t x76 = 111305909651414LL;
	uint64_t t13 = 5834LLU;

	t13 = (x73^((x74+x75)*x76));

	if (t13 != 18095316154173913646LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = -3;
	uint8_t x78 = 5U;
	int32_t x79 = -442078369;
	uint32_t x80 = 22U;
	uint32_t t14 = 53U;

	t14 = (x77^((x78+x79)*x80));

	if (t14 != 1135789413U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x98 = UINT32_MAX;
	int8_t x100 = -1;
	volatile uint32_t t15 = 28U;

	t15 = (x97^((x98+x99)*x100));

	if (t15 != 4294901761U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x101 = 1U;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 169331088LLU;
	volatile uint32_t x104 = 135492U;

	t16 = (x101^((x102+x103)*x104));

	if (t16 != 22942990432321LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x114 = -1;
	uint64_t x116 = UINT64_MAX;
	uint64_t t17 = 8145500537982220LLU;

	t17 = (x113^((x114+x115)*x116));

	if (t17 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x117 = -1LL;
	volatile uint64_t x118 = 8524889293467223446LLU;
	uint8_t x119 = 28U;
	int16_t x120 = 81;
	uint64_t t18 = 29679067174LLU;

	t18 = (x117^((x118+x119)*x120));

	if (t18 != 10460242030117860013LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x125 = INT64_MAX;
	uint16_t x127 = 4U;
	uint64_t x128 = 395748168LLU;
	volatile uint64_t t19 = 2380005449160LLU;

	t19 = (x125^((x126+x127)*x128));

	if (t19 != 9223372035667531303LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x129 = 5;
	int64_t x131 = -1LL;
	uint8_t x132 = 8U;
	int64_t t20 = -951304864101LL;

	t20 = (x129^((x130+x131)*x132));

	if (t20 != -11LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x133 = 19876099080LLU;
	uint64_t x134 = UINT64_MAX;
	uint32_t x135 = 3052U;
	uint16_t x136 = 20U;

	t21 = (x133^((x134+x135)*x136));

	if (t21 != 19876141652LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x143 = UINT8_MAX;
	int64_t x144 = -1LL;
	static int64_t t22 = -2238535757099562LL;

	t22 = (x141^((x142+x143)*x144));

	if (t22 != 9223372036854586101LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x145 = 1032U;
	int8_t x146 = INT8_MIN;
	int16_t x147 = 7;
	int64_t x148 = -150655030LL;
	static volatile int64_t t23 = -22291098LL;

	t23 = (x145^((x146+x147)*x148));

	if (t23 != 18229259662LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x154 = -31;
	uint16_t x156 = 105U;
	uint64_t t24 = 49565LLU;

	t24 = (x153^((x154+x155)*x156));

	if (t24 != 9223474401378645773LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x159 = 1227U;
	volatile uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t25 = 98202139LLU;

	t25 = (x157^((x158+x159)*x160));

	if (t25 != 9223372036854741814LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x161 = 2U;
	uint8_t x162 = UINT8_MAX;
	uint32_t x163 = UINT32_MAX;
	static volatile int32_t x164 = INT32_MAX;
	uint32_t t26 = 2U;

	t26 = (x161^((x162+x163)*x164));

	if (t26 != 4294967040U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = INT8_MAX;
	int64_t x166 = 129795795LL;
	int32_t x167 = 12;
	uint64_t t27 = 448LLU;

	t27 = (x165^((x166+x167)*x168));

	if (t27 != 13758355497LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x173 = 123U;
	static int64_t x174 = 167LL;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -1;
	volatile int64_t t28 = 14139930569LL;

	t28 = (x173^((x174+x175)*x176));

	if (t28 != -94LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x181 = 4U;
	static volatile int16_t x182 = INT16_MIN;
	volatile uint16_t x183 = 28U;
	static int8_t x184 = -1;
	int32_t t29 = 1319304;

	t29 = (x181^((x182+x183)*x184));

	if (t29 != 32736) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = INT16_MIN;
	static int64_t x186 = -1LL;
	static int8_t x188 = INT8_MAX;
	int64_t t30 = 65LL;

	t30 = (x185^((x186+x187)*x188));

	if (t30 != 19316889239LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x191 = 3318678587430LLU;
	int16_t x192 = INT16_MIN;
	uint64_t t31 = 404084088749599500LLU;

	t31 = (x189^((x190+x191)*x192));

	if (t31 != 18337997613756219519LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	uint64_t x195 = UINT64_MAX;
	uint64_t t32 = 4249522635872LLU;

	t32 = (x193^((x194+x195)*x196));

	if (t32 != 9223372032559808514LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = INT16_MIN;
	int8_t x203 = 0;
	int8_t x204 = 1;
	int64_t t33 = -13220LL;

	t33 = (x201^((x202+x203)*x204));

	if (t33 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x214 = 0U;

	t34 = (x213^((x214+x215)*x216));

	if (t34 != -4178570137LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x217 = 240U;
	int32_t x218 = 428332;
	int8_t x219 = -1;
	uint64_t x220 = 265366239029894LLU;
	uint64_t t35 = 267500491566LLU;

	t35 = (x217^((x218+x219)*x220));

	if (t35 != 2984122087656217202LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x225 = INT64_MAX;
	volatile uint32_t x226 = 19101U;
	static volatile uint8_t x227 = UINT8_MAX;
	int64_t t36 = -24557282LL;

	t36 = (x225^((x226+x227)*x228));

	if (t36 != 9223372032567279927LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x229 = INT64_MIN;
	volatile int8_t x231 = 10;
	int64_t x232 = -60630363214480572LL;
	volatile int64_t t37 = 3610135LL;

	t37 = (x229^((x230+x231)*x232));

	if (t37 != 8677698767924450660LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x237 = -1LL;
	int8_t x238 = 1;
	volatile int64_t t38 = -343592653782444029LL;

	t38 = (x237^((x238+x239)*x240));

	if (t38 != 2031LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x245 = 1594001;
	volatile int8_t x246 = 20;
	uint16_t x247 = 4U;
	uint16_t x248 = 848U;

	t39 = (x245^((x246+x247)*x248));

	if (t39 != 1580305) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x252 = INT16_MIN;
	volatile int64_t t40 = 142067LL;

	t40 = (x249^((x250+x251)*x252));

	if (t40 != 9223372036832985087LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x257 = INT64_MIN;
	static uint64_t x259 = 2LLU;
	int32_t x260 = INT32_MIN;
	uint64_t t41 = 548171LLU;

	t41 = (x257^((x258+x259)*x260));

	if (t41 != 9223371484951478272LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x261 = 48190258258LL;
	uint64_t x262 = 35LLU;
	uint16_t x263 = 56U;
	static volatile int64_t x264 = INT64_MIN;
	volatile uint64_t t42 = 47LLU;

	t42 = (x261^((x262+x263)*x264));

	if (t42 != 9223372085045034066LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x266 = 166;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = -1LL;
	volatile int64_t t43 = -100801826803827951LL;

	t43 = (x265^((x266+x267)*x268));

	if (t43 != -167LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x269 = 1;
	uint64_t x270 = UINT64_MAX;
	static uint16_t x271 = 875U;
	volatile uint16_t x272 = 18U;
	uint64_t t44 = 12LLU;

	t44 = (x269^((x270+x271)*x272));

	if (t44 != 15733LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x273 = INT8_MAX;
	static int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	static int32_t x276 = -235;
	int32_t t45 = 10;

	t45 = (x273^((x274+x275)*x276));

	if (t45 != 7700628) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x277 = INT16_MAX;
	volatile int8_t x278 = INT8_MAX;
	static uint8_t x279 = 1U;

	t46 = (x277^((x278+x279)*x280));

	if (t46 != -27009) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = 1525;
	int32_t x284 = -1;
	int32_t t47 = -37692367;

	t47 = (x281^((x282+x283)*x284));

	if (t47 != -129549) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x289 = 30;
	uint8_t x290 = 0U;
	volatile uint16_t x291 = 70U;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t48 = 11;

	t48 = (x289^((x290+x291)*x292));

	if (t48 != -8930) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x293 = -1;
	uint32_t x294 = 187U;
	static volatile int8_t x295 = INT8_MIN;
	int16_t x296 = 2171;
	volatile uint32_t t49 = 91U;

	t49 = (x293^((x294+x295)*x296));

	if (t49 != 4294839206U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	static int32_t t50 = 310498;

	t50 = (x297^((x298+x299)*x300));

	if (t50 != -32512) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t51 = -14727144;

	t51 = (x301^((x302+x303)*x304));

	if (t51 != -1054703617) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = UINT32_MAX;
	static int16_t x319 = INT16_MAX;
	volatile int32_t x320 = -1798;
	volatile uint32_t t52 = 23U;

	t52 = (x317^((x318+x319)*x320));

	if (t52 != 2088570380U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x326 = INT8_MIN;
	uint32_t x327 = 42154986U;
	uint16_t x328 = UINT16_MAX;
	uint32_t t53 = 305272U;

	t53 = (x325^((x326+x327)*x328));

	if (t53 != 3340319593U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x329 = -29531730609333LL;
	uint8_t x330 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	static int64_t t54 = -5299409138587LL;

	t54 = (x329^((x330+x331)*x332));

	if (t54 != 29531730639435LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x336 = -1LL;
	uint64_t t55 = 5LLU;

	t55 = (x333^((x334+x335)*x336));

	if (t55 != 18446744073645885013LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x341 = 0;
	volatile uint8_t x342 = 14U;
	uint64_t x343 = UINT64_MAX;
	static uint64_t t56 = 2459682360LLU;

	t56 = (x341^((x342+x343)*x344));

	if (t56 != 18446744073709125632LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x353 = UINT32_MAX;
	uint64_t x354 = 13220LLU;
	int64_t x355 = 410LL;
	int8_t x356 = 1;
	uint64_t t57 = 7766982850LLU;

	t57 = (x353^((x354+x355)*x356));

	if (t57 != 4294953665LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x357 = 7757916059112LLU;
	uint64_t x358 = 1797125161002479218LLU;
	int32_t x359 = INT32_MAX;
	int8_t x360 = 1;
	static volatile uint64_t t58 = 4805275987LLU;

	t58 = (x357^((x358+x359)*x360));

	if (t58 != 1797126321636940697LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x369 = 24887357973LLU;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = -2563;
	uint32_t x372 = 407U;
	volatile uint64_t t59 = 2631257999450072LLU;

	t59 = (x369^((x370+x371)*x372));

	if (t59 != 22351603502LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x373 = 83U;
	volatile int32_t x374 = INT32_MAX;
	uint64_t x375 = 9512054791055461LLU;
	int32_t x376 = INT32_MAX;
	uint64_t t60 = 321308LLU;

	t60 = (x373^((x374+x375)*x376));

	if (t60 != 3121567420227540943LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x377 = 20U;
	uint8_t x378 = 3U;
	int32_t x379 = INT32_MIN;
	static uint64_t x380 = 9LLU;
	volatile uint64_t t61 = 3244435463812849830LLU;

	t61 = (x377^((x378+x379)*x380));

	if (t61 != 18446744054382198799LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	static int16_t x384 = -31;
	uint64_t t62 = 6521LLU;

	t62 = (x381^((x382+x383)*x384));

	if (t62 != 18446744073708535838LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x389 = UINT64_MAX;
	static uint16_t x391 = 8118U;
	int16_t x392 = 178;
	static uint64_t t63 = 16LLU;

	t63 = (x389^((x390+x391)*x392));

	if (t63 != 18446744073708110883LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x393 = 128965U;
	int8_t x395 = -1;
	volatile uint32_t t64 = 2510192U;

	t64 = (x393^((x394+x395)*x396));

	if (t64 != 4294839075U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x397 = 6U;
	uint32_t x398 = 1889U;
	static volatile int8_t x399 = 0;
	int8_t x400 = INT8_MIN;
	static uint32_t t65 = 8324922U;

	t65 = (x397^((x398+x399)*x400));

	if (t65 != 4294725510U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x401 = -1LL;
	static int32_t x402 = INT32_MIN;
	uint64_t x403 = 1326798LLU;
	uint64_t x404 = UINT64_MAX;
	uint64_t t66 = 0LLU;

	t66 = (x401^((x402+x403)*x404));

	if (t66 != 18446744071563394765LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x410 = 25;
	volatile int8_t x411 = -37;
	int32_t t67 = -1682;

	t67 = (x409^((x410+x411)*x412));

	if (t67 != -5654) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x413 = INT64_MIN;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = 0;
	int32_t x416 = INT32_MAX;
	uint64_t t68 = 19253380639524LLU;

	t68 = (x413^((x414+x415)*x416));

	if (t68 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x422 = INT16_MIN;
	uint32_t x423 = 65594U;
	uint32_t x424 = 3728032U;
	volatile uint32_t t69 = 1265012U;

	t69 = (x421^((x422+x423)*x424));

	if (t69 != 2179040916U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	volatile int16_t x428 = 34;
	volatile int32_t t70 = -99520973;

	t70 = (x425^((x426+x427)*x428));

	if (t70 != -2228097) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x429 = UINT64_MAX;
	static uint64_t x430 = UINT64_MAX;
	int32_t x432 = 62334729;
	uint64_t t71 = 64489236LLU;

	t71 = (x429^((x430+x431)*x432));

	if (t71 != 45225166139060219LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x433 = -8;
	uint32_t x434 = 123535104U;
	uint32_t x435 = UINT32_MAX;
	static volatile int8_t x436 = INT8_MIN;
	static uint32_t t72 = 369U;

	t72 = (x433^((x434+x435)*x436));

	if (t72 != 2927591288U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x437 = 70U;
	static uint8_t x438 = 6U;
	uint32_t x439 = 18U;
	int16_t x440 = 1;
	volatile uint32_t t73 = 192050U;

	t73 = (x437^((x438+x439)*x440));

	if (t73 != 94U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x441 = INT64_MIN;
	int32_t x442 = INT32_MAX;
	uint64_t x443 = 87327LLU;
	volatile int16_t x444 = INT16_MIN;
	static uint64_t t74 = 46028261876529368LLU;

	t74 = (x441^((x442+x443)*x444));

	if (t74 != 9223301665249099776LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x445 = INT32_MAX;
	uint64_t x446 = 2552818765740124LLU;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = INT32_MAX;

	t75 = (x445^((x446+x447)*x448));

	if (t75 != 4022148119078975578LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x449 = -1;
	uint64_t x450 = 42LLU;
	uint8_t x451 = 29U;
	static uint32_t x452 = 201547U;
	static volatile uint64_t t76 = 31LLU;

	t76 = (x449^((x450+x451)*x452));

	if (t76 != 18446744073695241778LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x453 = 235U;
	int32_t x454 = -1;
	volatile int32_t t77 = -785778465;

	t77 = (x453^((x454+x455)*x456));

	if (t77 != 5317) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x457 = 7;
	volatile int8_t x458 = -1;
	int64_t x459 = -1LL;
	int64_t t78 = 52LL;

	t78 = (x457^((x458+x459)*x460));

	if (t78 != -4294967291LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = 1;
	uint64_t x464 = 17546LLU;
	uint64_t t79 = 907682835620909LLU;

	t79 = (x461^((x462+x463)*x464));

	if (t79 != 18446744072559656832LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x473 = UINT8_MAX;
	uint64_t x475 = 886900869LLU;
	volatile uint64_t t80 = 16LLU;

	t80 = (x473^((x474+x475)*x476));

	if (t80 != 226159716978LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x477 = INT32_MAX;
	static int16_t x478 = INT16_MIN;
	volatile int8_t x479 = INT8_MIN;
	uint64_t x480 = 30684941374577LLU;

	t81 = (x477^((x478+x479)*x480));

	if (t81 != 17437332243799521407LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x481 = INT32_MAX;
	int32_t x483 = -1;
	int8_t x484 = 10;
	volatile int32_t t82 = -982;

	t82 = (x481^((x482+x483)*x484));

	if (t82 != 2147483597) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x485 = 980U;
	int64_t x486 = INT64_MAX;
	uint64_t x487 = UINT64_MAX;
	int8_t x488 = 13;
	volatile uint64_t t83 = 1673014872947704078LLU;

	t83 = (x485^((x486+x487)*x488));

	if (t83 != 9223372036854774834LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x489 = INT32_MIN;
	volatile int8_t x490 = -1;
	uint16_t x491 = UINT16_MAX;
	static int8_t x492 = 6;
	int32_t t84 = 19522351;

	t84 = (x489^((x490+x491)*x492));

	if (t84 != -2147090444) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x493 = UINT8_MAX;
	int8_t x494 = 11;
	int8_t x495 = -1;
	int8_t x496 = INT8_MIN;
	static volatile int32_t t85 = 5512;

	t85 = (x493^((x494+x495)*x496));

	if (t85 != -1025) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x497 = -202LL;
	int8_t x498 = INT8_MAX;
	uint8_t x499 = 7U;
	int16_t x500 = INT16_MAX;
	int64_t t86 = 8250661076763845LL;

	t86 = (x497^((x498+x499)*x500));

	if (t86 != -4390836LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x501 = 4986LLU;
	static int16_t x504 = INT16_MIN;
	uint64_t t87 = 20007273392LLU;

	t87 = (x501^((x502+x503)*x504));

	if (t87 != 18446744072795493242LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x505 = 157U;
	int8_t x507 = -1;
	volatile int8_t x508 = 1;
	volatile int64_t t88 = 206672LL;

	t88 = (x505^((x506+x507)*x508));

	if (t88 != 154LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x513 = UINT64_MAX;
	int64_t x514 = INT64_MIN;
	uint64_t x515 = 217LLU;

	t89 = (x513^((x514+x515)*x516));

	if (t89 != 11225453526787819971LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x517 = -118899472;
	int16_t x518 = INT16_MIN;
	volatile uint16_t x519 = 305U;
	static int64_t x520 = -4080480445LL;
	volatile int64_t t90 = 528948380758LL;

	t90 = (x517^((x518+x519)*x520));

	if (t90 != -132464652266973LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x525 = -1;
	uint16_t x526 = UINT16_MAX;
	uint64_t x527 = UINT64_MAX;
	int16_t x528 = INT16_MAX;
	volatile uint64_t t91 = 3725278110LLU;

	t91 = (x525^((x526+x527)*x528));

	if (t91 != 18446744071562199037LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x529 = -72418686531LL;
	volatile int16_t x530 = INT16_MIN;
	uint32_t x531 = UINT32_MAX;
	static uint32_t x532 = 2828571U;
	static int64_t t92 = 7LL;

	t92 = (x529^((x530+x531)*x532));

	if (t92 != -71793516712LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x533 = UINT64_MAX;
	int16_t x534 = 14386;
	static uint64_t x535 = 425914LLU;
	int8_t x536 = INT8_MAX;
	volatile uint64_t t93 = 7670357957742LLU;

	t93 = (x533^((x534+x535)*x536));

	if (t93 != 18446744073653633515LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x538 = -1;
	volatile uint8_t x539 = 22U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t94 = -1;

	t94 = (x537^((x538+x539)*x540));

	if (t94 != 688000) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x541 = 1040U;
	static volatile int64_t x542 = 370336917LL;
	volatile uint32_t x543 = UINT32_MAX;
	int16_t x544 = -1;
	volatile int64_t t95 = -4635316LL;

	t95 = (x541^((x542+x543)*x544));

	if (t95 != -4665303172LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x545 = -1;
	int16_t x546 = INT16_MIN;
	volatile uint8_t x547 = UINT8_MAX;
	static uint16_t x548 = 1U;
	int32_t t96 = 164725;

	t96 = (x545^((x546+x547)*x548));

	if (t96 != 32512) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x552 = INT16_MIN;
	static volatile int64_t t97 = 8110369697LL;

	t97 = (x549^((x550+x551)*x552));

	if (t97 != 1313412481023LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x561 = INT64_MIN;
	volatile int64_t x562 = -10935038519017488LL;

	t98 = (x561^((x562+x563)*x564));

	if (t98 != 8818775611651124016LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x569 = 0;
	int64_t t99 = -64964765474156LL;

	t99 = (x569^((x570+x571)*x572));

	if (t99 != 10026855LL) { NG(); } else { ; }
	
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

