#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = 137715431330436974LL;
static uint64_t t0 = 145009912078345691LLU;
int16_t x7 = INT16_MIN;
uint64_t x10 = 17743641341LLU;
uint16_t x13 = 1023U;
static int32_t x15 = INT32_MAX;
volatile int64_t x40 = -1LL;
uint16_t x44 = UINT16_MAX;
volatile uint16_t x46 = 26U;
uint16_t x53 = 306U;
static uint64_t x55 = UINT64_MAX;
uint64_t x57 = 2240373472606074365LLU;
static uint64_t t13 = 176LLU;
uint16_t x64 = UINT16_MAX;
uint64_t x66 = 126300125473458LLU;
static int16_t x69 = INT16_MIN;
int32_t x73 = INT32_MAX;
int32_t x78 = -3857;
volatile int32_t x83 = INT32_MIN;
static int64_t x91 = -1LL;
volatile uint16_t x95 = 6U;
volatile uint64_t t21 = 7002069453432367945LLU;
int8_t x102 = INT8_MAX;
volatile uint64_t t23 = 188092LLU;
int8_t x109 = 5;
static int32_t x112 = INT32_MIN;
volatile int64_t t25 = -14893160LL;
int32_t x116 = INT32_MIN;
uint64_t t26 = 7303496247818840LLU;
volatile uint8_t x131 = 17U;
int32_t x138 = INT32_MIN;
int64_t x140 = 728778318272LL;
int8_t x148 = INT8_MIN;
uint64_t x154 = UINT64_MAX;
uint8_t x159 = 12U;
uint64_t t37 = 4070728715926LLU;
static volatile int32_t x162 = -249;
int8_t x164 = -1;
static volatile int8_t x165 = INT8_MIN;
int16_t x167 = INT16_MIN;
int8_t x176 = -1;
static int8_t x179 = INT8_MIN;
uint32_t x181 = 12524890U;
int64_t x184 = -1LL;
int32_t x186 = 31;
int8_t x196 = 12;
static uint8_t x198 = 87U;
uint32_t t47 = 101014523U;
int64_t x208 = INT64_MIN;
int16_t x226 = INT16_MAX;
uint64_t x242 = 92525378844LLU;
uint64_t x252 = UINT64_MAX;
int16_t x268 = -1;
static int8_t x269 = -1;
int16_t x270 = INT16_MIN;
volatile uint64_t t64 = 852676609489386LLU;
volatile uint16_t x274 = UINT16_MAX;
volatile int64_t x275 = INT64_MIN;
static uint64_t x287 = UINT64_MAX;
uint64_t t68 = 2958190816142650120LLU;
int64_t x289 = 129LL;
uint16_t x292 = 122U;
int32_t x296 = -1658966;
static int8_t x306 = INT8_MAX;
int8_t x308 = -5;
volatile uint16_t x312 = UINT16_MAX;
static int64_t x320 = -76303575687438119LL;
uint64_t t79 = 42328775LLU;
int32_t x338 = 153507;
uint16_t x342 = 15U;
int64_t x343 = INT64_MIN;
int32_t x350 = 976;
uint16_t x352 = UINT16_MAX;
volatile uint64_t t83 = 50265788065LLU;
uint32_t x360 = UINT32_MAX;
volatile int16_t x361 = -1;
static int64_t x363 = -426830844665LL;
int16_t x364 = -2;
int64_t x366 = -117487618401112946LL;
int64_t x368 = INT64_MAX;
int8_t x375 = -1;
int64_t t91 = 1931668790LL;
int8_t x395 = INT8_MIN;
volatile uint64_t t93 = 18310172066005725LLU;
int64_t x411 = INT64_MIN;
int64_t x413 = -1LL;
int32_t x416 = INT32_MIN;
uint8_t x420 = 63U;
int16_t x421 = INT16_MIN;


void f0(void) {
	uint64_t x1 = 17561765348596LLU;
	int32_t x2 = -1;
	int32_t x4 = INT32_MIN;

	t0 = (x1+((x2|x3)|x4));

	if (t0 != 17561765348595LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1320760281730730LLU;
	int16_t x6 = -1;
	static int8_t x8 = -24;
	volatile uint64_t t1 = 782285165LLU;

	t1 = (x5+((x6|x7)|x8));

	if (t1 != 1320760281730729LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 12U;
	uint8_t x11 = 4U;
	int32_t x12 = 1731;
	volatile uint64_t t2 = 2775224LLU;

	t2 = (x9+((x10|x11)|x12));

	if (t2 != 17743642379LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 159U;
	static uint16_t x16 = UINT16_MAX;
	uint32_t t3 = 29237U;

	t3 = (x13+((x14|x15)|x16));

	if (t3 != 2147484670U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = INT8_MIN;
	int8_t x20 = -1;
	int32_t t4 = -484;

	t4 = (x17+((x18|x19)|x20));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = 0U;
	int32_t t5 = -25142;

	t5 = (x21+((x22|x23)|x24));

	if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 10221LL;
	int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -1052685022LL;

	t6 = (x25+((x26|x27)|x28));

	if (t6 != 10220LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 1503553249349116211LLU;
	int64_t x34 = -1LL;
	static uint8_t x35 = 1U;
	static uint8_t x36 = UINT8_MAX;
	volatile uint64_t t7 = 15LLU;

	t7 = (x33+((x34|x35)|x36));

	if (t7 != 1503553249349116210LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	static int64_t t8 = -56493LL;

	t8 = (x37+((x38|x39)|x40));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MAX;
	int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MIN;
	volatile int64_t t9 = 16285069828LL;

	t9 = (x41+((x42|x43)|x44));

	if (t9 != 2147483646LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	uint32_t x47 = UINT32_MAX;
	static int16_t x48 = 2;
	volatile uint32_t t10 = 30U;

	t10 = (x45+((x46|x47)|x48));

	if (t10 != 65534U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	static int32_t x50 = 1;
	volatile uint64_t x51 = 480865160890LLU;
	int16_t x52 = INT16_MIN;
	uint64_t t11 = 14829795363LLU;

	t11 = (x49+((x50|x51)|x52));

	if (t11 != 36538LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = -1LL;
	int16_t x56 = INT16_MAX;
	volatile uint64_t t12 = 326596852684948LLU;

	t12 = (x53+((x54|x55)|x56));

	if (t12 != 305LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = -1;
	int32_t x59 = 1348360;
	uint16_t x60 = 0U;

	t13 = (x57+((x58|x59)|x60));

	if (t13 != 2240373472606074364LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 102444U;
	int16_t x62 = INT16_MAX;
	int32_t x63 = INT32_MAX;
	volatile uint32_t t14 = 49519U;

	t14 = (x61+((x62|x63)|x64));

	if (t14 != 2147586091U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = INT64_MIN;
	uint32_t x67 = 441735U;
	static int16_t x68 = INT16_MAX;
	uint64_t t15 = 590048775274858413LLU;

	t15 = (x65+((x66|x67)|x68));

	if (t15 != 9223498336980434943LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -1711519293LL;
	int16_t x71 = -1;
	int32_t x72 = INT32_MIN;
	static volatile int64_t t16 = 15377043420595315LL;

	t16 = (x69+((x70|x71)|x72));

	if (t16 != -32769LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	uint8_t x75 = 2U;
	volatile uint8_t x76 = 46U;
	int32_t t17 = -465360;

	t17 = (x73+((x74|x75)|x76));

	if (t17 != 2147483565) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int32_t x79 = INT32_MAX;
	static int8_t x80 = 0;
	volatile int32_t t18 = -102;

	t18 = (x77+((x78|x79)|x80));

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 42U;
	int32_t x82 = -58073;
	volatile int32_t x84 = INT32_MIN;
	int32_t t19 = -1;

	t19 = (x81+((x82|x83)|x84));

	if (t19 != -58031) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 2741005U;
	uint32_t x90 = 15U;
	uint16_t x92 = 7963U;
	static int64_t t20 = 475451595848721LL;

	t20 = (x89+((x90|x91)|x92));

	if (t20 != 2741004LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x93 = UINT64_MAX;
	static int16_t x94 = INT16_MIN;
	volatile uint32_t x96 = 124942U;

	t21 = (x93+((x94|x95)|x96));

	if (t21 != 4294961165LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -1LL;
	uint8_t x98 = UINT8_MAX;
	volatile int64_t x99 = INT64_MIN;
	volatile int64_t x100 = 25841LL;
	volatile int64_t t22 = 32LL;

	t22 = (x97+((x98|x99)|x100));

	if (t22 != -9223372036854749954LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = 2139848304LLU;
	int8_t x103 = -20;
	uint16_t x104 = 2U;

	t23 = (x101+((x102|x103)|x104));

	if (t23 != 2139848303LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = -1LL;
	int16_t x106 = -1;
	int8_t x107 = INT8_MAX;
	volatile int64_t x108 = 388462LL;
	volatile int64_t t24 = 3426907568618730LL;

	t24 = (x105+((x106|x107)|x108));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = -1;
	int64_t x111 = -1LL;

	t25 = (x109+((x110|x111)|x112));

	if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x113 = 17978LLU;
	static int8_t x114 = INT8_MIN;
	uint64_t x115 = 22LLU;

	t26 = (x113+((x114|x115)|x116));

	if (t26 != 17872LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	int16_t x119 = -3;
	uint8_t x120 = 10U;
	uint64_t t27 = 736LLU;

	t27 = (x117+((x118|x119)|x120));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = 31025;
	int16_t x122 = INT16_MIN;
	volatile int8_t x123 = INT8_MIN;
	int64_t x124 = -1LL;
	volatile int64_t t28 = -351LL;

	t28 = (x121+((x122|x123)|x124));

	if (t28 != 31024LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 0U;
	volatile uint64_t x126 = 13965456250713589LLU;
	int16_t x127 = 12;
	static uint8_t x128 = UINT8_MAX;
	volatile uint64_t t29 = 11883560490436664LLU;

	t29 = (x125+((x126|x127)|x128));

	if (t29 != 13965456250713599LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1466914103775219LL;
	volatile uint8_t x130 = 10U;
	uint64_t x132 = 958304234417151847LLU;
	volatile uint64_t t30 = 0LLU;

	t30 = (x129+((x130|x131)|x132));

	if (t30 != 956837320313376652LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = 7LL;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = 3U;
	int64_t t31 = -2605957989915685107LL;

	t31 = (x133+((x134|x135)|x136));

	if (t31 != -32889LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x137 = 730570763LLU;
	uint32_t x139 = 255U;
	volatile uint64_t t32 = 458022LLU;

	t32 = (x137+((x138|x139)|x140));

	if (t32 != 729508889098LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 3312;
	volatile int8_t x142 = INT8_MIN;
	volatile int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MAX;
	static volatile int64_t t33 = 133582057380044657LL;

	t33 = (x141+((x142|x143)|x144));

	if (t33 != 3311LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 213561LLU;
	volatile uint32_t x146 = 13172U;
	uint16_t x147 = 1U;
	static uint64_t t34 = 2280LLU;

	t34 = (x145+((x146|x147)|x148));

	if (t34 != 4295180846LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = 3306;
	static uint64_t x150 = 2791460026119952LLU;
	int64_t x151 = INT64_MIN;
	volatile int32_t x152 = INT32_MIN;
	static uint64_t t35 = 3LLU;

	t35 = (x149+((x150|x151)|x152));

	if (t35 != 18446744073428730874LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 3LLU;
	uint16_t x155 = 9U;
	int64_t x156 = -1LL;
	static uint64_t t36 = 49LLU;

	t36 = (x153+((x154|x155)|x156));

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = 58341789547LLU;
	int32_t x158 = 1362;
	int8_t x160 = INT8_MAX;

	t37 = (x157+((x158|x159)|x160));

	if (t37 != 58341790954LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -1713;
	uint64_t x163 = UINT64_MAX;
	volatile uint64_t t38 = 29236981649178LLU;

	t38 = (x161+((x162|x163)|x164));

	if (t38 != 18446744073709549902LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x166 = 1U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t39 = 23358548991680LL;

	t39 = (x165+((x166|x167)|x168));

	if (t39 != -32895LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = 65;
	static volatile uint32_t x170 = 324U;
	static int8_t x171 = INT8_MAX;
	int16_t x172 = -108;
	uint32_t t40 = 119U;

	t40 = (x169+((x170|x171)|x172));

	if (t40 != 64U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = -1LL;
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	int64_t t41 = 416796471203460LL;

	t41 = (x173+((x174|x175)|x176));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 4942314;
	uint8_t x178 = 2U;
	static int64_t x180 = -1LL;
	volatile int64_t t42 = 1933LL;

	t42 = (x177+((x178|x179)|x180));

	if (t42 != 4942313LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = -24;
	int16_t x183 = INT16_MIN;
	int64_t t43 = -2917645LL;

	t43 = (x181+((x182|x183)|x184));

	if (t43 != 12524889LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint32_t x187 = 693U;
	volatile int16_t x188 = -1;
	volatile uint32_t t44 = 130626U;

	t44 = (x185+((x186|x187)|x188));

	if (t44 != 254U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = INT32_MAX;
	int32_t t45 = -30321470;

	t45 = (x189+((x190|x191)|x192));

	if (t45 != -129) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = 3;
	static int8_t x194 = 1;
	volatile uint16_t x195 = UINT16_MAX;
	int32_t t46 = 96;

	t46 = (x193+((x194|x195)|x196));

	if (t46 != 65538) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x197 = 1U;
	int16_t x199 = -331;
	uint16_t x200 = 30U;

	t47 = (x197+((x198|x199)|x200));

	if (t47 != 4294967040U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = INT32_MIN;
	static int32_t x202 = INT32_MIN;
	uint32_t x203 = 49U;
	int32_t x204 = INT32_MIN;
	static uint32_t t48 = 109348900U;

	t48 = (x201+((x202|x203)|x204));

	if (t48 != 49U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -3;
	volatile uint32_t x206 = UINT32_MAX;
	int32_t x207 = 62;
	static int64_t t49 = -28291961759LL;

	t49 = (x205+((x206|x207)|x208));

	if (t49 != -9223372032559808516LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = UINT32_MAX;
	static int16_t x210 = INT16_MAX;
	volatile int64_t x211 = 3257446122802LL;
	uint32_t x212 = UINT32_MAX;
	int64_t t50 = -12544725441076292LL;

	t50 = (x209+((x210|x211)|x212));

	if (t50 != 3264175144958LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = 109LL;
	volatile uint32_t x214 = 4627767U;
	int64_t x215 = INT64_MIN;
	uint64_t x216 = 677940799LLU;
	volatile uint64_t t51 = 8200435206393LLU;

	t51 = (x213+((x214|x215)|x216));

	if (t51 != 9223372037533114284LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MAX;
	uint64_t x218 = 354687LLU;
	volatile uint8_t x219 = 19U;
	uint8_t x220 = UINT8_MAX;
	uint64_t t52 = 97751LLU;

	t52 = (x217+((x218|x219)|x220));

	if (t52 != 387582LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = -1;
	static int32_t x222 = 3352442;
	static int64_t x223 = INT64_MIN;
	static uint32_t x224 = 1696331150U;
	static int64_t t53 = 13810392LL;

	t53 = (x221+((x222|x223)|x224));

	if (t53 != -9223372035156346883LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x227 = 3;
	int64_t x228 = -1LL;
	volatile int64_t t54 = -4524877437043293396LL;

	t54 = (x225+((x226|x227)|x228));

	if (t54 != 254LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = UINT8_MAX;
	static int32_t x231 = INT32_MAX;
	int32_t x232 = -3;
	uint64_t t55 = 323672LLU;

	t55 = (x229+((x230|x231)|x232));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 94U;
	volatile uint8_t x234 = UINT8_MAX;
	int16_t x235 = 4;
	uint16_t x236 = UINT16_MAX;
	uint32_t t56 = 122148684U;

	t56 = (x233+((x234|x235)|x236));

	if (t56 != 65629U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;
	uint32_t t57 = 107843U;

	t57 = (x237+((x238|x239)|x240));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x243 = 8389542212774020LLU;
	int64_t x244 = INT64_MIN;
	uint64_t t58 = 220781923792090LLU;

	t58 = (x241+((x242|x243)|x244));

	if (t58 != 9231761583506144668LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	static int16_t x246 = 0;
	int16_t x247 = 5;
	volatile int16_t x248 = INT16_MIN;
	int32_t t59 = 39663;

	t59 = (x245+((x246|x247)|x248));

	if (t59 != 2147450884) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x250 = INT16_MIN;
	static int8_t x251 = 18;
	uint64_t t60 = 34190086013129LLU;

	t60 = (x249+((x250|x251)|x252));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = UINT8_MAX;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MAX;
	static volatile int16_t x256 = -679;
	static volatile int32_t t61 = -14842897;

	t61 = (x253+((x254|x255)|x256));

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -20322LL;
	uint64_t x262 = 918561523913592548LLU;
	static int16_t x263 = -276;
	static int64_t x264 = -7642065051670276LL;
	static uint64_t t62 = 260839428459831LLU;

	t62 = (x261+((x262|x263)|x264));

	if (t62 != 18446744073709531034LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = INT32_MAX;
	int16_t x266 = 12;
	int8_t x267 = INT8_MIN;
	volatile int32_t t63 = -4821788;

	t63 = (x265+((x266|x267)|x268));

	if (t63 != 2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x271 = 598911321324737LLU;
	uint64_t x272 = 4410564231328914052LLU;

	t64 = (x269+((x270|x271)|x272));

	if (t64 != 18446744073709551300LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = 5LL;
	uint64_t x276 = 5LLU;
	uint64_t t65 = 1634232LLU;

	t65 = (x273+((x274|x275)|x276));

	if (t65 != 9223372036854841348LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -1;
	int16_t x278 = INT16_MAX;
	volatile int32_t x279 = -1;
	int64_t x280 = -1LL;
	volatile int64_t t66 = 856896013482955809LL;

	t66 = (x277+((x278|x279)|x280));

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x281 = INT16_MIN;
	int32_t x282 = -1;
	static int64_t x283 = -1LL;
	volatile int32_t x284 = -1;
	static volatile int64_t t67 = -2083966321651810793LL;

	t67 = (x281+((x282|x283)|x284));

	if (t67 != -32769LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -1;
	static int32_t x286 = INT32_MIN;
	int8_t x288 = INT8_MIN;

	t68 = (x285+((x286|x287)|x288));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x290 = 1U;
	volatile uint8_t x291 = UINT8_MAX;
	volatile int64_t t69 = 55036223607070LL;

	t69 = (x289+((x290|x291)|x292));

	if (t69 != 384LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 60U;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	int32_t t70 = 33;

	t70 = (x293+((x294|x295)|x296));

	if (t70 != -1638341) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	volatile uint64_t x298 = 219LLU;
	volatile int8_t x299 = -1;
	int32_t x300 = INT32_MIN;
	volatile uint64_t t71 = 242595728276893195LLU;

	t71 = (x297+((x298|x299)|x300));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 74U;
	uint64_t x302 = 2602818LLU;
	int64_t x303 = 337754333337213LL;
	int32_t x304 = -1;
	uint64_t t72 = 156800421LLU;

	t72 = (x301+((x302|x303)|x304));

	if (t72 != 73LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = -1;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t73 = 8440296874327552LLU;

	t73 = (x305+((x306|x307)|x308));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	int32_t x311 = INT32_MIN;
	int32_t t74 = 2726649;

	t74 = (x309+((x310|x311)|x312));

	if (t74 != -2147418114) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x313 = 817U;
	volatile int64_t x314 = -1LL;
	volatile int32_t x315 = INT32_MIN;
	int32_t x316 = -1;
	int64_t t75 = -3752434435810072601LL;

	t75 = (x313+((x314|x315)|x316));

	if (t75 != 816LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x317 = 55841LLU;
	volatile int64_t x318 = -5992LL;
	int32_t x319 = -1;
	volatile uint64_t t76 = 18542497200240858LLU;

	t76 = (x317+((x318|x319)|x320));

	if (t76 != 55840LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = INT32_MIN;
	uint8_t x322 = 83U;
	uint32_t x323 = UINT32_MAX;
	static int16_t x324 = INT16_MAX;
	volatile uint32_t t77 = 11373254U;

	t77 = (x321+((x322|x323)|x324));

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = -1;
	static int32_t x327 = -3207604;
	int8_t x328 = INT8_MIN;
	int32_t t78 = 18821;

	t78 = (x325+((x326|x327)|x328));

	if (t78 != -129) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = UINT16_MAX;
	volatile uint64_t x330 = UINT64_MAX;
	int16_t x331 = -31;
	int32_t x332 = INT32_MIN;

	t79 = (x329+((x330|x331)|x332));

	if (t79 != 65534LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x337 = INT32_MAX;
	static int64_t x339 = -34146051LL;
	volatile int64_t x340 = -23030402903453009LL;
	int64_t t80 = 329353905LL;

	t80 = (x337+((x338|x339)|x340));

	if (t80 != 2146959358LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int64_t t81 = 241401431750LL;

	t81 = (x341+((x342|x343)|x344));

	if (t81 != -2147516401LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x345 = UINT8_MAX;
	static int64_t x346 = 3312132937741711143LL;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = -2;
	uint64_t t82 = 10177014193700LLU;

	t82 = (x345+((x346|x347)|x348));

	if (t82 != 254LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x349 = 3770LLU;
	int8_t x351 = -12;

	t83 = (x349+((x350|x351)|x352));

	if (t83 != 3769LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -1;
	static int64_t x354 = -5388703637LL;
	int32_t x355 = -66116809;
	int8_t x356 = INT8_MIN;
	static int64_t t84 = -8167600068845LL;

	t84 = (x353+((x354|x355)|x356));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = -1;
	volatile uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	volatile int64_t t85 = 27172920667159LL;

	t85 = (x357+((x358|x359)|x360));

	if (t85 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = INT32_MIN;
	volatile int64_t t86 = 156658760543LL;

	t86 = (x361+((x362|x363)|x364));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 14;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t t87 = 131914902LL;

	t87 = (x365+((x366|x367)|x368));

	if (t87 != 13LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MAX;
	int32_t x371 = INT32_MAX;
	volatile uint64_t x372 = 4020856247565LLU;
	volatile uint64_t t88 = 3646LLU;

	t88 = (x369+((x370|x371)|x372));

	if (t88 != 4020089389055LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 4689U;
	volatile uint16_t x374 = 27U;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t89 = 1643378251211717088LL;

	t89 = (x373+((x374|x375)|x376));

	if (t89 != 4688LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = INT16_MIN;
	static uint32_t x378 = 24U;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MAX;
	volatile uint32_t t90 = 312408U;

	t90 = (x377+((x378|x379)|x380));

	if (t90 != 4294934527U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 496U;
	int32_t x382 = INT32_MIN;
	static int16_t x383 = INT16_MIN;
	int64_t x384 = -311722786424968064LL;

	t91 = (x381+((x382|x383)|x384));

	if (t91 != -20880LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MIN;
	static int8_t x386 = 3;
	int16_t x387 = INT16_MAX;
	volatile uint16_t x388 = 11162U;
	int32_t t92 = 56914105;

	t92 = (x385+((x386|x387)|x388));

	if (t92 != -2147450881) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = -297955;
	int32_t x394 = INT32_MIN;
	uint64_t x396 = 61954047371LLU;

	t93 = (x393+((x394|x395)|x396));

	if (t93 != 18446744073709253544LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = -1;
	int64_t x399 = 2LL;
	int16_t x400 = INT16_MAX;
	int64_t t94 = -855706713500181500LL;

	t94 = (x397+((x398|x399)|x400));

	if (t94 != 4294967294LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = -226;
	volatile uint16_t x406 = 5U;
	static int16_t x407 = -1;
	int16_t x408 = 1;
	volatile int32_t t95 = -8859330;

	t95 = (x405+((x406|x407)|x408));

	if (t95 != -227) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x409 = -1LL;
	volatile uint64_t x410 = 6619903895628LLU;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t96 = 1059329662LLU;

	t96 = (x409+((x410|x411)|x412));

	if (t96 != 9223378656758671614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x414 = UINT64_MAX;
	uint16_t x415 = 13U;
	uint64_t t97 = 1320LLU;

	t97 = (x413+((x414|x415)|x416));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = INT32_MIN;
	static uint64_t x418 = 38907LLU;
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t t98 = 162029283751765LLU;

	t98 = (x417+((x418|x419)|x420));

	if (t98 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x422 = INT8_MAX;
	volatile int64_t x423 = -1LL;
	static volatile int8_t x424 = INT8_MIN;
	int64_t t99 = 162647680LL;

	t99 = (x421+((x422|x423)|x424));

	if (t99 != -32769LL) { NG(); } else { ; }
	
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

