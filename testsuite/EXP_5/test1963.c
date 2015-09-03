#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -1;
int64_t t3 = -2LL;
uint64_t x31 = 0LLU;
int64_t x34 = INT64_MAX;
static volatile uint16_t x37 = 25423U;
static int8_t x38 = INT8_MIN;
int8_t x40 = INT8_MIN;
int32_t x44 = -1;
static int64_t x48 = -57371444041257LL;
static int32_t t11 = INT32_MIN;
uint64_t x50 = UINT64_MAX;
volatile uint16_t x51 = UINT16_MAX;
int64_t x52 = -265868383197376LL;
volatile uint16_t x54 = 26U;
int8_t x61 = -6;
static volatile uint16_t x72 = 52U;
static int16_t x73 = INT16_MAX;
int8_t x76 = -32;
static volatile int32_t t18 = 1125;
int8_t x79 = -1;
int16_t x85 = INT16_MIN;
int32_t t21 = -6063655;
int32_t x96 = -9844;
static int8_t x97 = -1;
int16_t x104 = INT16_MAX;
volatile int32_t t25 = -589713;
int16_t x115 = 10829;
int32_t t28 = 118029676;
int16_t x123 = -914;
volatile int64_t t30 = INT64_MIN;
uint64_t x126 = 3635299904522LLU;
int32_t t31 = INT32_MIN;
int16_t x132 = INT16_MIN;
int64_t x136 = -446690922310974LL;
int16_t x137 = INT16_MIN;
int32_t x144 = -1;
static uint8_t x152 = 32U;
static int32_t x160 = -1;
volatile int32_t x165 = INT32_MAX;
int32_t t41 = INT32_MAX;
static uint16_t x169 = 61U;
int64_t x170 = INT64_MIN;
static int16_t x173 = INT16_MIN;
int8_t x176 = -1;
static int32_t t43 = 0;
uint16_t x179 = UINT16_MAX;
volatile int32_t x180 = INT32_MAX;
int64_t x190 = -818581796LL;
int8_t x199 = -1;
uint64_t t49 = UINT64_MAX;
int16_t x206 = INT16_MAX;
int64_t x222 = -56235315752583194LL;
static int32_t x224 = -1;
int8_t x229 = INT8_MIN;
int32_t x237 = INT32_MIN;
static int8_t x242 = 24;
static int32_t x244 = -1;
int32_t t60 = 2622293;
uint64_t x246 = UINT64_MAX;
int16_t x247 = INT16_MIN;
int64_t x254 = INT64_MAX;
int64_t x259 = -45044LL;
int64_t x264 = -3281LL;
int32_t x266 = INT32_MIN;
uint64_t x268 = UINT64_MAX;
volatile int64_t t66 = INT64_MIN;
int64_t x270 = INT64_MAX;
volatile int8_t x273 = INT8_MIN;
static int64_t x274 = INT64_MIN;
int8_t x276 = -4;
uint16_t x288 = 1U;
int64_t x292 = INT64_MIN;
volatile int32_t t72 = -413378;
static volatile int16_t x297 = -10;
int32_t x303 = 2695;
int32_t t77 = 743568675;
volatile int8_t x321 = INT8_MIN;
int64_t x330 = 270176065347LL;
static int16_t x331 = INT16_MIN;
uint8_t x335 = 4U;
int16_t x336 = INT16_MAX;
int32_t t83 = -31;
static uint16_t x349 = UINT16_MAX;
int16_t x355 = INT16_MIN;
int16_t x356 = INT16_MIN;
uint8_t x358 = 14U;
static uint8_t x359 = UINT8_MAX;
static volatile uint32_t x362 = 992187U;
volatile uint8_t x370 = 2U;
volatile int32_t t93 = -44;
int16_t x377 = INT16_MAX;
uint32_t x378 = 27906U;
int16_t x379 = INT16_MAX;
uint32_t x380 = UINT32_MAX;
static volatile int64_t x382 = 274238342467311936LL;
static int16_t x391 = INT16_MIN;
static volatile int32_t t97 = -926;
volatile int32_t t98 = -3514938;
uint8_t x399 = UINT8_MAX;
int32_t t99 = 1922586;


void f0(void) {
	int64_t x1 = -1LL;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 83860334724LLU;
	int16_t x4 = 556;
	int64_t t0 = -38281187745LL;

	t0 = (x1^((x2|x3)==x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1127U;
	static volatile int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 18060864;

	t1 = (x5^((x6|x7)==x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	uint8_t x10 = UINT8_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -13;

	t2 = (x9^((x10|x11)==x12));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 40140019138LL;
	uint16_t x14 = 1U;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;

	t3 = (x13^((x14|x15)==x16));

	if (t3 != 40140019138LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	int32_t x18 = 2;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 0U;
	static volatile int32_t t4 = -3397;

	t4 = (x17^((x18|x19)==x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -4663LL;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MAX;
	volatile int8_t x24 = -1;
	int64_t t5 = 75577883LL;

	t5 = (x21^((x22|x23)==x24));

	if (t5 != -4663LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint16_t x26 = UINT16_MAX;
	int8_t x27 = 0;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 471;

	t6 = (x25^((x26|x27)==x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	volatile uint32_t x30 = 5U;
	int32_t x32 = 1;
	volatile int32_t t7 = 46185333;

	t7 = (x29^((x30|x31)==x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static uint8_t x35 = 85U;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -100290055;

	t8 = (x33^((x34|x35)==x36));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = -797972678;

	t9 = (x37^((x38|x39)==x40));

	if (t9 != 25422) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	volatile int16_t x42 = -65;
	static uint32_t x43 = 54237468U;
	volatile int32_t t10 = 389877053;

	t10 = (x41^((x42|x43)==x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static volatile int8_t x46 = INT8_MIN;
	static volatile int8_t x47 = INT8_MIN;

	t11 = (x45^((x46|x47)==x48));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -3983254356LL;
	volatile int64_t t12 = -859669LL;

	t12 = (x49^((x50|x51)==x52));

	if (t12 != -3983254356LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 489LLU;
	int8_t x55 = -18;
	int8_t x56 = INT8_MIN;
	volatile uint64_t t13 = 1155722899596LLU;

	t13 = (x53^((x54|x55)==x56));

	if (t13 != 489LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int16_t x58 = INT16_MAX;
	int64_t x59 = 1LL;
	static uint16_t x60 = 1355U;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57^((x58|x59)==x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 4914571;

	t15 = (x61^((x62|x63)==x64));

	if (t15 != -6) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int8_t x66 = -1;
	uint16_t x67 = 24035U;
	uint8_t x68 = 0U;
	static int32_t t16 = INT32_MIN;

	t16 = (x65^((x66|x67)==x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int8_t x70 = INT8_MIN;
	static int16_t x71 = INT16_MAX;
	int32_t t17 = -3;

	t17 = (x69^((x70|x71)==x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x74 = -1;
	int16_t x75 = INT16_MIN;

	t18 = (x73^((x74|x75)==x76));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 130990616;
	uint8_t x78 = 77U;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -903;

	t19 = (x77^((x78|x79)==x80));

	if (t19 != 130990616) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 643632889U;
	volatile int16_t x83 = -47;
	int16_t x84 = -118;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x81^((x82|x83)==x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = UINT32_MAX;
	volatile int32_t x87 = INT32_MIN;
	uint8_t x88 = UINT8_MAX;

	t21 = (x85^((x86|x87)==x88));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 3024012054923LL;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MIN;
	static volatile int16_t x92 = INT16_MIN;
	static volatile int64_t t22 = -23LL;

	t22 = (x89^((x90|x91)==x92));

	if (t22 != 3024012054923LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile int32_t x94 = INT32_MAX;
	uint16_t x95 = UINT16_MAX;
	static volatile int32_t t23 = 5;

	t23 = (x93^((x94|x95)==x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 392587U;
	uint8_t x99 = 64U;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = -1055435;

	t24 = (x97^((x98|x99)==x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	static int32_t x102 = INT32_MAX;
	volatile int64_t x103 = 173109636551LL;

	t25 = (x101^((x102|x103)==x104));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 1608347888582296LL;
	int32_t x106 = INT32_MAX;
	static volatile int16_t x107 = 1;
	int32_t x108 = INT32_MIN;
	static volatile int64_t t26 = -15LL;

	t26 = (x105^((x106|x107)==x108));

	if (t26 != 1608347888582296LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 0;
	volatile int16_t x110 = -1002;
	uint32_t x111 = 504U;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = 95510;

	t27 = (x109^((x110|x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int8_t x114 = -1;
	int16_t x116 = -1;

	t28 = (x113^((x114|x115)==x116));

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 2446449862LLU;
	uint8_t x118 = 17U;
	int8_t x119 = 1;
	volatile int32_t x120 = INT32_MAX;
	volatile uint64_t t29 = 214978797194085LLU;

	t29 = (x117^((x118|x119)==x120));

	if (t29 != 2446449862LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MAX;
	static int32_t x124 = INT32_MIN;

	t30 = (x121^((x122|x123)==x124));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	volatile uint8_t x127 = UINT8_MAX;
	int64_t x128 = -1661LL;

	t31 = (x125^((x126|x127)==x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -14;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	int32_t t32 = -47489654;

	t32 = (x129^((x130|x131)==x132));

	if (t32 != -14) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MIN;
	int32_t t33 = 29126;

	t33 = (x133^((x134|x135)==x136));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x138 = INT32_MIN;
	uint32_t x139 = 51367U;
	int64_t x140 = -944LL;
	volatile int32_t t34 = 0;

	t34 = (x137^((x138|x139)==x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -20;
	uint8_t x142 = 7U;
	static int16_t x143 = INT16_MAX;
	volatile int32_t t35 = 7833;

	t35 = (x141^((x142|x143)==x144));

	if (t35 != -20) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1U;
	volatile int64_t x146 = -3130757922984LL;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -9210671485295582LL;
	static int32_t t36 = 113280746;

	t36 = (x145^((x146|x147)==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 8U;
	int8_t x150 = 2;
	int8_t x151 = INT8_MIN;
	volatile int32_t t37 = 6;

	t37 = (x149^((x150|x151)==x152));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	volatile int16_t x155 = INT16_MIN;
	uint8_t x156 = 56U;
	int64_t t38 = INT64_MIN;

	t38 = (x153^((x154|x155)==x156));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 27U;
	int64_t x158 = 462904233751LL;
	int8_t x159 = INT8_MAX;
	volatile int32_t t39 = -178057;

	t39 = (x157^((x158|x159)==x160));

	if (t39 != 27) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MAX;
	int64_t x162 = -1LL;
	int64_t x163 = -394624177752LL;
	int16_t x164 = -1;
	static volatile int32_t t40 = -5118;

	t40 = (x161^((x162|x163)==x164));

	if (t40 != 126) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MAX;
	uint32_t x167 = 160U;
	static int64_t x168 = -1LL;

	t41 = (x165^((x166|x167)==x168));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = INT32_MAX;
	int32_t x172 = 107833735;
	static volatile int32_t t42 = 1;

	t42 = (x169^((x170|x171)==x172));

	if (t42 != 61) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = 48LL;
	int16_t x175 = -5;

	t43 = (x173^((x174|x175)==x176));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	uint32_t x178 = 31879U;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177^((x178|x179)==x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	uint16_t x182 = 24U;
	uint64_t x183 = 6928LLU;
	int8_t x184 = INT8_MIN;
	static int64_t t45 = INT64_MIN;

	t45 = (x181^((x182|x183)==x184));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -5;
	volatile uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MAX;
	int64_t x188 = -1750LL;
	int32_t t46 = -5146;

	t46 = (x185^((x186|x187)==x188));

	if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int16_t x191 = INT16_MIN;
	volatile int64_t x192 = 2101554383221353LL;
	static int32_t t47 = 783095;

	t47 = (x189^((x190|x191)==x192));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 1;
	static volatile uint8_t x194 = UINT8_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	int32_t x196 = -351156427;
	volatile int32_t t48 = -248789640;

	t48 = (x193^((x194|x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	int64_t x200 = 6LL;

	t49 = (x197^((x198|x199)==x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	volatile uint64_t x203 = 62403323337827LLU;
	int16_t x204 = -1;
	int64_t t50 = -1LL;

	t50 = (x201^((x202|x203)==x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 1114346403017760LL;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t51 = 38949LL;

	t51 = (x205^((x206|x207)==x208));

	if (t51 != 1114346403017760LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 507U;
	volatile uint16_t x210 = 3016U;
	int8_t x211 = INT8_MIN;
	volatile int8_t x212 = -45;
	volatile int32_t t52 = -5273;

	t52 = (x209^((x210|x211)==x212));

	if (t52 != 507) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	int32_t t53 = -1014501;

	t53 = (x213^((x214|x215)==x216));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -824089674;
	static int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MAX;
	int32_t t54 = -162;

	t54 = (x217^((x218|x219)==x220));

	if (t54 != -824089674) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	uint16_t x223 = UINT16_MAX;
	int32_t t55 = -123;

	t55 = (x221^((x222|x223)==x224));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	uint16_t x226 = 4U;
	uint8_t x227 = 4U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = 1;

	t56 = (x225^((x226|x227)==x228));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -1LL;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = -28467102;

	t57 = (x229^((x230|x231)==x232));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 39U;
	static int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x233^((x234|x235)==x236));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	static volatile int16_t x239 = -73;
	volatile uint32_t x240 = 27U;
	int32_t t59 = INT32_MIN;

	t59 = (x237^((x238|x239)==x240));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	int8_t x243 = 8;

	t60 = (x241^((x242|x243)==x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -1;
	static volatile uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = -1;

	t61 = (x245^((x246|x247)==x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MIN;
	int8_t x250 = 15;
	int32_t x251 = INT32_MAX;
	static int32_t x252 = INT32_MIN;
	int32_t t62 = 94;

	t62 = (x249^((x250|x251)==x252));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	static uint32_t x256 = 2U;
	int32_t t63 = 28082146;

	t63 = (x253^((x254|x255)==x256));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -12LL;
	int32_t x258 = INT32_MAX;
	uint8_t x260 = UINT8_MAX;
	int64_t t64 = -33354LL;

	t64 = (x257^((x258|x259)==x260));

	if (t64 != -12LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 141;
	volatile int8_t x262 = INT8_MAX;
	int16_t x263 = -324;
	int32_t t65 = -438;

	t65 = (x261^((x262|x263)==x264));

	if (t65 != 141) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int8_t x267 = INT8_MIN;

	t66 = (x265^((x266|x267)==x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -1;
	int64_t x271 = -1LL;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = -1941;

	t67 = (x269^((x270|x271)==x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x275 = 13389563U;
	static int32_t t68 = -1640;

	t68 = (x273^((x274|x275)==x276));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int8_t x278 = -56;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = UINT32_MAX;
	int64_t t69 = 20050825LL;

	t69 = (x277^((x278|x279)==x280));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = 1014177253;
	volatile uint16_t x282 = 32U;
	uint16_t x283 = 2895U;
	int16_t x284 = 233;
	int32_t t70 = -713105714;

	t70 = (x281^((x282|x283)==x284));

	if (t70 != 1014177253) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	volatile int16_t x286 = INT16_MIN;
	int64_t x287 = -76779241LL;
	volatile int64_t t71 = INT64_MAX;

	t71 = (x285^((x286|x287)==x288));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = UINT16_MAX;
	int16_t x290 = -957;
	int32_t x291 = INT32_MIN;

	t72 = (x289^((x290|x291)==x292));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static int16_t x294 = 6754;
	static volatile int8_t x295 = INT8_MIN;
	static int32_t x296 = -1;
	static int32_t t73 = -622095;

	t73 = (x293^((x294|x295)==x296));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 121U;
	static volatile int32_t x299 = -1;
	static volatile int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -119;

	t74 = (x297^((x298|x299)==x300));

	if (t74 != -10) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 5663251U;
	static int32_t x302 = INT32_MIN;
	static int64_t x304 = INT64_MIN;
	static volatile uint32_t t75 = 29152365U;

	t75 = (x301^((x302|x303)==x304));

	if (t75 != 5663251U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 11565267433LLU;
	uint64_t x308 = 1458064255812080247LLU;
	int32_t t76 = INT32_MAX;

	t76 = (x305^((x306|x307)==x308));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = -12;
	static volatile uint16_t x311 = 3U;
	volatile uint16_t x312 = UINT16_MAX;

	t77 = (x309^((x310|x311)==x312));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -4101173030981375LL;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = -1;
	uint16_t x316 = 4U;
	int64_t t78 = -17501272928585LL;

	t78 = (x313^((x314|x315)==x316));

	if (t78 != -4101173030981375LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 17860U;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = 9007404LL;
	volatile uint8_t x320 = 1U;
	volatile int32_t t79 = 410761;

	t79 = (x317^((x318|x319)==x320));

	if (t79 != 17860) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = UINT32_MAX;
	static volatile int32_t x323 = INT32_MAX;
	int32_t x324 = -4;
	static int32_t t80 = -94134727;

	t80 = (x321^((x322|x323)==x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -1LL;
	static uint32_t x326 = 167521U;
	int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	int64_t t81 = -44455LL;

	t81 = (x325^((x326|x327)==x328));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MAX;
	volatile int32_t x332 = -1;
	static volatile int32_t t82 = 61929;

	t82 = (x329^((x330|x331)==x332));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 6687;
	static int8_t x334 = -1;

	t83 = (x333^((x334|x335)==x336));

	if (t83 != 6687) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1857;
	int64_t x338 = -1LL;
	static uint32_t x339 = UINT32_MAX;
	static volatile int32_t x340 = INT32_MIN;
	int32_t t84 = 3;

	t84 = (x337^((x338|x339)==x340));

	if (t84 != -1857) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int64_t t85 = INT64_MAX;

	t85 = (x341^((x342|x343)==x344));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int16_t x346 = -1;
	static uint8_t x347 = 64U;
	uint64_t x348 = 2442992538439151LLU;
	volatile int32_t t86 = -3573280;

	t86 = (x345^((x346|x347)==x348));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	int16_t x351 = -3;
	uint32_t x352 = UINT32_MAX;
	int32_t t87 = 92511;

	t87 = (x349^((x350|x351)==x352));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 1U;
	int16_t x354 = 1;
	int32_t t88 = -449;

	t88 = (x353^((x354|x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = 48601011709102LLU;
	static uint64_t x360 = 8373901851630LLU;
	uint64_t t89 = 428328LLU;

	t89 = (x357^((x358|x359)==x360));

	if (t89 != 48601011709102LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	volatile int8_t x363 = INT8_MAX;
	volatile int16_t x364 = 35;
	int32_t t90 = INT32_MIN;

	t90 = (x361^((x362|x363)==x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 1;
	static volatile uint32_t x366 = 2508U;
	int64_t x367 = INT64_MIN;
	volatile uint32_t x368 = 14U;
	int32_t t91 = 6;

	t91 = (x365^((x366|x367)==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1633558U;
	int64_t x371 = INT64_MAX;
	int64_t x372 = INT64_MAX;
	volatile uint32_t t92 = 1540U;

	t92 = (x369^((x370|x371)==x372));

	if (t92 != 1633559U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x373 = 1U;
	static volatile int8_t x374 = -1;
	int32_t x375 = -488968;
	int16_t x376 = INT16_MAX;

	t93 = (x373^((x374|x375)==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t t94 = -29815;

	t94 = (x377^((x378|x379)==x380));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = UINT16_MAX;
	int64_t x383 = -1LL;
	int32_t x384 = -28325;
	static int32_t t95 = -25473;

	t95 = (x381^((x382|x383)==x384));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 36235612U;
	uint32_t x386 = UINT32_MAX;
	uint32_t x387 = 897225U;
	int32_t x388 = INT32_MAX;
	uint32_t t96 = 82U;

	t96 = (x385^((x386|x387)==x388));

	if (t96 != 36235612U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	static int16_t x392 = -90;

	t97 = (x389^((x390|x391)==x392));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 2407U;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = 11429953947LLU;
	int64_t x396 = 4226653915LL;

	t98 = (x393^((x394|x395)==x396));

	if (t98 != 2407) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MAX;
	volatile int8_t x400 = -1;

	t99 = (x397^((x398|x399)==x400));

	if (t99 != -32768) { NG(); } else { ; }
	
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

