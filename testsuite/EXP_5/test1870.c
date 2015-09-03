#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint16_t x3 = 3U;
int64_t t2 = 15565948264LL;
int32_t t3 = 1892529;
static int32_t x17 = INT32_MIN;
int32_t x26 = -1;
static int64_t t6 = 71985103683LL;
uint64_t x40 = 16LLU;
volatile uint64_t x49 = 16433126585844014LLU;
int8_t x52 = INT8_MIN;
int64_t x55 = INT64_MIN;
int64_t x60 = -242492719324LL;
uint64_t x64 = 174284351LLU;
static volatile uint16_t x65 = 3U;
int8_t x68 = INT8_MAX;
uint32_t x70 = 58700U;
static int32_t t16 = -4;
int32_t x83 = INT32_MIN;
int64_t x88 = 213084124216052730LL;
int8_t x102 = INT8_MIN;
int16_t x109 = INT16_MAX;
volatile int32_t x112 = INT32_MIN;
int32_t x115 = INT32_MAX;
volatile int32_t x116 = -56769;
int8_t x117 = 4;
uint32_t x118 = UINT32_MAX;
int64_t x123 = -1LL;
static int8_t x133 = INT8_MIN;
volatile int64_t x135 = 1LL;
volatile uint32_t x136 = 16485U;
static uint64_t x144 = UINT64_MAX;
volatile uint64_t x152 = 18674412141602891LLU;
static volatile int64_t x155 = -1LL;
int8_t x166 = INT8_MIN;
static uint16_t x167 = 3912U;
int64_t t38 = -48114363145LL;
static volatile int64_t t39 = -12604549042567LL;
volatile uint64_t x173 = UINT64_MAX;
int16_t x176 = 1;
uint8_t x183 = 2U;
static int32_t x185 = INT32_MIN;
int64_t x187 = INT64_MIN;
uint32_t t44 = 64526729U;
int32_t t45 = 0;
int16_t x212 = -1;
static int32_t t47 = 38;
uint8_t x222 = 12U;
uint16_t x225 = UINT16_MAX;
volatile int32_t t50 = -1;
volatile int16_t x235 = INT16_MIN;
int8_t x244 = -3;
int16_t x253 = -1;
int32_t x258 = -122;
uint64_t x268 = 83664LLU;
static volatile int64_t x269 = 10229746620141414LL;
int16_t x271 = -1;
uint64_t t60 = 1727LLU;
static int16_t x273 = -1;
static uint32_t x276 = 5U;
uint16_t x277 = 622U;
volatile uint32_t x283 = 15032132U;
int16_t x287 = INT16_MIN;
uint32_t x289 = 540055U;
static volatile uint64_t t65 = 4953110162465039LLU;
static uint64_t x293 = 271964466318LLU;
volatile uint32_t x305 = 638971U;
int64_t x307 = 37LL;
int32_t t69 = 6132;
int16_t x314 = INT16_MIN;
int32_t x317 = 397061;
uint32_t x319 = 8U;
int8_t x320 = INT8_MIN;
volatile int64_t t72 = 76565530375LL;
uint8_t x326 = UINT8_MAX;
static int8_t x329 = INT8_MIN;
uint64_t x339 = 2113820711002068LLU;
uint32_t t78 = 34749945U;
uint16_t x350 = UINT16_MAX;
static uint64_t x352 = 12590852732406763LLU;
uint64_t t80 = 124095967782484LLU;
static int8_t x371 = INT8_MAX;
volatile int64_t t83 = INT64_MIN;
volatile uint64_t t85 = 2828881095457018LLU;
int32_t x399 = INT32_MIN;
int16_t x414 = -1;
static int8_t x418 = INT8_MIN;
uint64_t t91 = 1960907351814836LLU;
int8_t x430 = 0;
int16_t x433 = -1;
int32_t t94 = -478497289;
volatile int64_t x443 = INT64_MIN;
int16_t x447 = INT16_MIN;
volatile int16_t x455 = 0;


void f0(void) {
	uint64_t x2 = 102LLU;
	static int64_t x4 = INT64_MIN;
	uint64_t t0 = 2773078615393441531LLU;

	t0 = (x1&((x2|x3)+x4));

	if (t0 != 103LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 139481559U;
	volatile int8_t x6 = INT8_MIN;
	int16_t x7 = 3;
	int16_t x8 = INT16_MAX;
	uint32_t t1 = 8779U;

	t1 = (x5&((x6|x7)+x8));

	if (t1 != 20866U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int64_t x10 = INT64_MIN;
	static uint16_t x11 = 1U;
	int16_t x12 = 3;

	t2 = (x9&((x10|x11)+x12));

	if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int8_t x14 = 1;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;

	t3 = (x13&((x14|x15)+x16));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 1662;
	static uint16_t x19 = 2628U;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -53621;

	t4 = (x17&((x18|x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	static int64_t t5 = 1647400LL;

	t5 = (x21&((x22|x23)+x24));

	if (t5 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int64_t x27 = -614816672580890LL;
	int8_t x28 = INT8_MAX;

	t6 = (x25&((x26|x27)+x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 8170152U;
	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = -1;
	int16_t x32 = 7;
	uint32_t t7 = 38U;

	t7 = (x29&((x30|x31)+x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	int16_t x35 = -8;
	static int64_t x36 = -340LL;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33&((x34|x35)+x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MAX;
	static int16_t x38 = INT16_MIN;
	volatile int16_t x39 = INT16_MIN;
	volatile uint64_t t9 = 9160428LLU;

	t9 = (x37&((x38|x39)+x40));

	if (t9 != 16LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -1;
	int64_t x51 = INT64_MIN;
	uint64_t t10 = 637730591913040052LLU;

	t10 = (x49&((x50|x51)+x52));

	if (t10 != 16433126585844014LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MAX;
	uint8_t x54 = 5U;
	static int64_t x56 = 6721LL;
	static volatile int64_t t11 = -49LL;

	t11 = (x53&((x54|x55)+x56));

	if (t11 != 6726LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 65369676U;
	uint8_t x58 = 0U;
	uint64_t x59 = 111716632395044LLU;
	uint64_t t12 = 372845477992118LLU;

	t12 = (x57&((x58|x59)+x60));

	if (t12 != 6632520LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = -1;
	int64_t x63 = -941200381653010LL;
	static volatile uint64_t t13 = 2918274539321259LLU;

	t13 = (x61&((x62|x63)+x64));

	if (t13 != 24126LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = INT16_MIN;
	static int32_t x67 = -5945;
	volatile int32_t t14 = 18;

	t14 = (x65&((x66|x67)+x68));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	uint64_t x71 = 930613LLU;
	int16_t x72 = INT16_MAX;
	volatile uint64_t t15 = 36600569508692492LLU;

	t15 = (x69&((x70|x71)+x72));

	if (t15 != 1013628LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MAX;
	int8_t x74 = INT8_MIN;
	static volatile int32_t x75 = 8;
	int16_t x76 = 100;

	t16 = (x73&((x74|x75)+x76));

	if (t16 != 32748) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 253241399;
	uint32_t x78 = 100U;
	uint32_t x79 = UINT32_MAX;
	volatile int32_t x80 = INT32_MAX;
	uint32_t t17 = 1036369024U;

	t17 = (x77&((x78|x79)+x80));

	if (t17 != 253241398U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = 412949031;
	uint16_t x82 = 1U;
	uint64_t x84 = 401210137769178LLU;
	uint64_t t18 = 130922732LLU;

	t18 = (x81&((x82|x83)+x84));

	if (t18 != 10293251LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = INT16_MAX;
	int32_t x87 = -1;
	static volatile int64_t t19 = -31835LL;

	t19 = (x85&((x86|x87)+x88));

	if (t19 != 213084124216052608LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -221;
	volatile uint8_t x90 = 71U;
	int16_t x91 = 7923;
	int32_t x92 = -1;
	static int32_t t20 = -41760990;

	t20 = (x89&((x90|x91)+x92));

	if (t20 != 7714) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 30;
	int64_t x94 = INT64_MIN;
	static int16_t x95 = INT16_MIN;
	static uint64_t x96 = UINT64_MAX;
	static uint64_t t21 = 9208126031786LLU;

	t21 = (x93&((x94|x95)+x96));

	if (t21 != 30LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 11493U;
	int64_t x98 = 5LL;
	volatile int8_t x99 = INT8_MAX;
	static int32_t x100 = INT32_MAX;
	int64_t t22 = 5191226189980443LL;

	t22 = (x97&((x98|x99)+x100));

	if (t22 != 100LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 3276713986LLU;
	static int64_t x103 = -1LL;
	static int64_t x104 = -1LL;
	static volatile uint64_t t23 = 15LLU;

	t23 = (x101&((x102|x103)+x104));

	if (t23 != 3276713986LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = 20U;
	int32_t x108 = INT32_MIN;
	volatile int32_t t24 = -2640;

	t24 = (x105&((x106|x107)+x108));

	if (t24 != -2147483521) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MAX;
	int16_t x111 = -493;
	int64_t t25 = -56LL;

	t25 = (x109&((x110|x111)+x112));

	if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 9U;
	uint8_t x114 = 47U;
	int32_t t26 = -5167;

	t26 = (x113&((x114|x115)+x116));

	if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = 1937U;
	volatile uint32_t t27 = 60U;

	t27 = (x117&((x118|x119)+x120));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	static int32_t x122 = INT32_MIN;
	int32_t x124 = -1;
	volatile int64_t t28 = 133085960LL;

	t28 = (x121&((x122|x123)+x124));

	if (t28 != 2147483646LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	uint32_t x127 = UINT32_MAX;
	uint16_t x128 = 1U;
	volatile uint32_t t29 = 43443421U;

	t29 = (x125&((x126|x127)+x128));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x129 = UINT8_MAX;
	int64_t x130 = -90497257327LL;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t30 = 161399005913065539LLU;

	t30 = (x129&((x130|x131)+x132));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = INT32_MIN;
	volatile int64_t t31 = -3264108493548106LL;

	t31 = (x133&((x134|x135)+x136));

	if (t31 != -2147467264LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 428LLU;
	int16_t x142 = 1421;
	int64_t x143 = INT64_MIN;
	uint64_t t32 = 60642LLU;

	t32 = (x141&((x142|x143)+x144));

	if (t32 != 396LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x145 = UINT64_MAX;
	static int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	int8_t x148 = 0;
	uint64_t t33 = 867641LLU;

	t33 = (x145&((x146|x147)+x148));

	if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = 11848905;
	static volatile int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile uint64_t t34 = 257147417743524LLU;

	t34 = (x149&((x150|x151)+x152));

	if (t34 != 1361992LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = INT64_MIN;
	volatile int8_t x154 = 4;
	int32_t x156 = -1;
	int64_t t35 = INT64_MIN;

	t35 = (x153&((x154|x155)+x156));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1LL;
	static int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MAX;
	static int8_t x160 = -1;
	volatile int64_t t36 = -47390LL;

	t36 = (x157&((x158|x159)+x160));

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	static int8_t x162 = 0;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MAX;
	volatile int32_t t37 = 191;

	t37 = (x161&((x162|x163)+x164));

	if (t37 != 65662) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MAX;
	uint8_t x168 = UINT8_MAX;

	t38 = (x165&((x166|x167)+x168));

	if (t38 != 199LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	static int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MAX;
	int32_t x172 = -1;

	t39 = (x169&((x170|x171)+x172));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x174 = 127U;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t t40 = 8493612397824283LLU;

	t40 = (x173&((x174|x175)+x176));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x181 = INT64_MAX;
	uint8_t x182 = 0U;
	int8_t x184 = INT8_MIN;
	int64_t t41 = 7457LL;

	t41 = (x181&((x182|x183)+x184));

	if (t41 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = -1811925917210757483LL;
	int32_t x188 = INT32_MIN;
	volatile int64_t t42 = -59326497889997LL;

	t42 = (x185&((x186|x187)+x188));

	if (t42 != -1811925921259585536LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = 516737028;
	int8_t x194 = -1;
	volatile uint32_t x195 = 44454U;
	volatile uint16_t x196 = 0U;
	volatile uint32_t t43 = 7517U;

	t43 = (x193&((x194|x195)+x196));

	if (t43 != 516737028U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -5984;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 456U;
	volatile uint16_t x200 = 15U;

	t44 = (x197&((x198|x199)+x200));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -1;
	volatile uint16_t x202 = 2753U;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;

	t45 = (x201&((x202|x203)+x204));

	if (t45 != -191) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x205 = INT64_MAX;
	int32_t x206 = -3431;
	volatile uint32_t x207 = 1342996741U;
	int16_t x208 = INT16_MAX;
	int64_t t46 = 787700LL;

	t46 = (x205&((x206|x207)+x208));

	if (t46 != 29596LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MIN;
	static int16_t x211 = 1499;

	t47 = (x209&((x210|x211)+x212));

	if (t47 != 32730) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 7441718341LLU;
	int64_t x214 = 0LL;
	uint64_t x215 = 86431767884083781LLU;
	volatile int16_t x216 = INT16_MIN;
	uint64_t t48 = 113130911465LLU;

	t48 = (x213&((x214|x215)+x216));

	if (t48 != 571052101LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x221 = UINT32_MAX;
	static int8_t x223 = INT8_MIN;
	static uint16_t x224 = 28U;
	uint32_t t49 = 1389U;

	t49 = (x221&((x222|x223)+x224));

	if (t49 != 4294967208U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x226 = INT16_MIN;
	int8_t x227 = 0;
	static uint8_t x228 = 7U;

	t50 = (x225&((x226|x227)+x228));

	if (t50 != 32775) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 1014528562575145LLU;
	volatile uint16_t x230 = 122U;
	int16_t x231 = INT16_MAX;
	int8_t x232 = 1;
	volatile uint64_t t51 = 55478976871697LLU;

	t51 = (x229&((x230|x231)+x232));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = 0;
	int32_t x234 = -1;
	static int32_t x236 = -506200;
	static int32_t t52 = 2057002;

	t52 = (x233&((x234|x235)+x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = INT64_MIN;
	uint64_t x238 = 129190LLU;
	int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MAX;
	uint64_t t53 = 9178043171190057234LLU;

	t53 = (x237&((x238|x239)+x240));

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = 18;
	volatile int16_t x242 = INT16_MIN;
	volatile int32_t x243 = INT32_MAX;
	int32_t t54 = 5119;

	t54 = (x241&((x242|x243)+x244));

	if (t54 != 16) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x249 = INT8_MIN;
	int64_t x250 = -348631547LL;
	int32_t x251 = INT32_MIN;
	volatile int8_t x252 = -1;
	int64_t t55 = -32506107LL;

	t55 = (x249&((x250|x251)+x252));

	if (t55 != -348631552LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x254 = UINT64_MAX;
	volatile int8_t x255 = -1;
	static volatile uint32_t x256 = UINT32_MAX;
	static uint64_t t56 = 1643758655074481LLU;

	t56 = (x253&((x254|x255)+x256));

	if (t56 != 4294967294LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = INT32_MIN;
	int64_t x259 = INT64_MAX;
	int64_t x260 = 6LL;
	int64_t t57 = -4023899LL;

	t57 = (x257&((x258|x259)+x260));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 166414U;
	int8_t x262 = 0;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	uint32_t t58 = 352U;

	t58 = (x261&((x262|x263)+x264));

	if (t58 != 163854U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = -1;
	static volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = 0;
	uint64_t t59 = 39LLU;

	t59 = (x265&((x266|x267)+x268));

	if (t59 != 4295050959LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x270 = -1;
	uint64_t x272 = 3418272859560218240LLU;

	t60 = (x269&((x270|x271)+x272));

	if (t60 != 9012722874322534LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	volatile int64_t t61 = -15473541LL;

	t61 = (x273&((x274|x275)+x276));

	if (t61 != -2147483643LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x278 = 3U;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 52U;
	static uint32_t t62 = 15U;

	t62 = (x277&((x278|x279)+x280));

	if (t62 != 550U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	volatile uint8_t x284 = 0U;
	volatile uint32_t t63 = 133449U;

	t63 = (x281&((x282|x283)+x284));

	if (t63 != 4294958916U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = -1LL;
	int32_t x286 = INT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile int64_t t64 = -33LL;

	t64 = (x285&((x286|x287)+x288));

	if (t64 != -129LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MAX;
	static uint64_t x292 = UINT64_MAX;

	t65 = (x289&((x290|x291)+x292));

	if (t65 != 540054LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x294 = -1;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MIN;
	static uint64_t t66 = 0LLU;

	t66 = (x293&((x294|x295)+x296));

	if (t66 != 271964466318LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x297 = INT32_MIN;
	static volatile uint32_t x298 = 46606U;
	uint8_t x299 = 11U;
	int64_t x300 = 15828974713896667LL;
	static volatile int64_t t67 = 2LL;

	t67 = (x297&((x298|x299)+x300));

	if (t67 != 15828973120389120LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x306 = INT16_MAX;
	uint64_t x308 = 2229LLU;
	uint64_t t68 = 7636802LLU;

	t68 = (x305&((x306|x307)+x308));

	if (t68 != 34992LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = -1;
	volatile int32_t x310 = INT32_MIN;
	volatile uint8_t x311 = 4U;
	static volatile int16_t x312 = 415;

	t69 = (x309&((x310|x311)+x312));

	if (t69 != -2147483229) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x313 = INT16_MIN;
	int64_t x315 = INT64_MIN;
	static volatile uint8_t x316 = UINT8_MAX;
	volatile int64_t t70 = -141987434251LL;

	t70 = (x313&((x314|x315)+x316));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x318 = 47U;
	volatile uint32_t t71 = 380122078U;

	t71 = (x317&((x318|x319)+x320));

	if (t71 != 397061U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MAX;
	static uint8_t x322 = 22U;
	int64_t x323 = INT64_MIN;
	static uint32_t x324 = UINT32_MAX;

	t72 = (x321&((x322|x323)+x324));

	if (t72 != 21LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x327 = -1;
	int8_t x328 = INT8_MIN;
	uint64_t t73 = 16507843389781131LLU;

	t73 = (x325&((x326|x327)+x328));

	if (t73 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x330 = INT16_MIN;
	static uint64_t x331 = 537427206750LLU;
	int8_t x332 = 2;
	volatile uint64_t t74 = 8325635266157549LLU;

	t74 = (x329&((x330|x331)+x332));

	if (t74 != 18446744073709543936LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = -1;
	uint64_t x334 = 8578017869980LLU;
	uint16_t x335 = 132U;
	int8_t x336 = INT8_MAX;
	uint64_t t75 = 113LLU;

	t75 = (x333&((x334|x335)+x336));

	if (t75 != 8578017870107LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 59U;
	volatile int16_t x338 = 794;
	int16_t x340 = -1;
	volatile uint64_t t76 = 11623LLU;

	t76 = (x337&((x338|x339)+x340));

	if (t76 != 25LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = 87U;
	static int32_t x342 = INT32_MAX;
	uint64_t x343 = 5820818973778782LLU;
	int8_t x344 = -10;
	volatile uint64_t t77 = 3237LLU;

	t77 = (x341&((x342|x343)+x344));

	if (t77 != 85LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = INT32_MAX;
	uint32_t x346 = UINT32_MAX;
	static uint8_t x347 = 13U;
	uint16_t x348 = 113U;

	t78 = (x345&((x346|x347)+x348));

	if (t78 != 112U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x349 = 731LL;
	static uint8_t x351 = UINT8_MAX;
	uint64_t t79 = 18573992897664355LLU;

	t79 = (x349&((x350|x351)+x352));

	if (t79 != 714LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x353 = INT64_MAX;
	uint16_t x354 = 703U;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = INT8_MIN;

	t80 = (x353&((x354|x355)+x356));

	if (t80 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = 482U;
	int8_t x360 = -25;
	static volatile int64_t t81 = INT64_MIN;

	t81 = (x357&((x358|x359)+x360));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = INT16_MAX;
	uint16_t x370 = UINT16_MAX;
	int8_t x372 = 4;
	int32_t t82 = 14300;

	t82 = (x369&((x370|x371)+x372));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x373 = INT64_MIN;
	int64_t x374 = -415829577823LL;
	uint16_t x375 = 4086U;
	int8_t x376 = INT8_MIN;

	t83 = (x373&((x374|x375)+x376));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x377 = INT64_MIN;
	volatile int8_t x378 = INT8_MAX;
	int16_t x379 = -2;
	int32_t x380 = -1487697;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x377&((x378|x379)+x380));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = 1898LLU;
	int16_t x387 = INT16_MAX;
	int64_t x388 = INT64_MIN;

	t85 = (x385&((x386|x387)+x388));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = 7U;
	static volatile int8_t x390 = 1;
	static int32_t x391 = -1;
	uint8_t x392 = 0U;
	static volatile int32_t t86 = -123299;

	t86 = (x389&((x390|x391)+x392));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MIN;
	static uint32_t x398 = UINT32_MAX;
	int8_t x400 = INT8_MIN;
	uint32_t t87 = 1803078U;

	t87 = (x397&((x398|x399)+x400));

	if (t87 != 4294934528U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = -1;
	uint64_t x406 = 2789LLU;
	uint8_t x407 = UINT8_MAX;
	uint16_t x408 = 49U;
	volatile uint64_t t88 = 2148805186LLU;

	t88 = (x405&((x406|x407)+x408));

	if (t88 != 2864LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = -1;
	volatile uint32_t x415 = 56U;
	int8_t x416 = INT8_MAX;
	uint32_t t89 = 0U;

	t89 = (x413&((x414|x415)+x416));

	if (t89 != 126U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x417 = -2080693LL;
	static int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MIN;
	volatile int64_t t90 = -114LL;

	t90 = (x417&((x418|x419)+x420));

	if (t90 != -2080768LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x421 = UINT64_MAX;
	uint16_t x422 = 103U;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 470U;

	t91 = (x421&((x422|x423)+x424));

	if (t91 != 9223372036854776381LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x425 = -1LL;
	volatile int16_t x426 = INT16_MAX;
	int32_t x427 = -6034498;
	int8_t x428 = -1;
	volatile int64_t t92 = 51311404LL;

	t92 = (x425&((x426|x427)+x428));

	if (t92 != -6029314LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = INT8_MIN;
	static uint64_t x431 = UINT64_MAX;
	int16_t x432 = 68;
	uint64_t t93 = 49723883LLU;

	t93 = (x429&((x430|x431)+x432));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x434 = INT8_MIN;
	uint8_t x435 = UINT8_MAX;
	int8_t x436 = INT8_MIN;

	t94 = (x433&((x434|x435)+x436));

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x437 = 5;
	static int32_t x438 = 105443;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = 2;
	volatile uint64_t t95 = 4434LLU;

	t95 = (x437&((x438|x439)+x440));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x441 = INT8_MAX;
	int16_t x442 = 5;
	volatile uint16_t x444 = 5U;
	int64_t t96 = -1LL;

	t96 = (x441&((x442|x443)+x444));

	if (t96 != 10LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = -375218751951LL;
	volatile uint64_t x446 = 307LLU;
	int16_t x448 = -1;
	volatile uint64_t t97 = 122LLU;

	t97 = (x445&((x446|x447)+x448));

	if (t97 != 18446743698490785840LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x449 = 1U;
	volatile int64_t x450 = -1LL;
	int8_t x451 = INT8_MAX;
	uint32_t x452 = 62U;
	static int64_t t98 = -194792102130476LL;

	t98 = (x449&((x450|x451)+x452));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x453 = -1;
	int64_t x454 = 12551732118948LL;
	static int16_t x456 = 246;
	volatile int64_t t99 = 1LL;

	t99 = (x453&((x454|x455)+x456));

	if (t99 != 12551732119194LL) { NG(); } else { ; }
	
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

