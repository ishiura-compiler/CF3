#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
uint32_t x7 = 183U;
static volatile uint8_t x11 = 2U;
int32_t t2 = -207366;
int32_t x17 = -5912;
int8_t x25 = -1;
volatile int32_t t7 = -38;
static uint32_t x33 = UINT32_MAX;
int16_t x46 = -358;
int32_t x48 = INT32_MIN;
uint64_t x55 = UINT64_MAX;
int64_t x61 = INT64_MIN;
int16_t x62 = INT16_MAX;
int8_t x65 = -1;
volatile int32_t t16 = -94;
int64_t x70 = -6081525659LL;
int16_t x72 = -27;
static int8_t x77 = -1;
int16_t x82 = 744;
int8_t x87 = INT8_MIN;
volatile int32_t t22 = 4;
static int32_t x95 = INT32_MIN;
static uint64_t x107 = 5LLU;
int8_t x114 = 3;
int16_t x116 = -14;
int32_t t29 = -1;
volatile uint32_t x124 = 15U;
int32_t x127 = INT32_MAX;
static volatile int32_t t31 = 52;
volatile int8_t x129 = -2;
volatile int16_t x135 = -3847;
int32_t t34 = 1853;
int8_t x145 = INT8_MAX;
int32_t t37 = -589163;
static volatile int32_t t38 = -1;
static volatile int64_t x163 = INT64_MAX;
int8_t x164 = INT8_MIN;
static uint64_t x167 = UINT64_MAX;
volatile int32_t t41 = -177250;
static int16_t x169 = INT16_MIN;
static uint64_t x177 = UINT64_MAX;
int64_t x179 = INT64_MAX;
int32_t t44 = 5;
int32_t t45 = 1;
uint16_t x187 = 9U;
uint16_t x191 = 378U;
int32_t t48 = 4277951;
int8_t x201 = -1;
int16_t x206 = INT16_MAX;
int64_t x207 = INT64_MAX;
static int32_t t52 = 285;
int32_t x215 = INT32_MIN;
int8_t x231 = 1;
uint16_t x240 = UINT16_MAX;
int32_t t59 = 27977;
int8_t x248 = -1;
static uint64_t x257 = 31706359819981LLU;
int32_t t64 = 1;
int16_t x261 = 49;
int32_t t65 = 141143;
int32_t x267 = -196617162;
int16_t x274 = INT16_MIN;
uint32_t x281 = 813792U;
int32_t x283 = -1;
int32_t t72 = 147345849;
uint8_t x298 = UINT8_MAX;
int8_t x302 = INT8_MAX;
int16_t x305 = INT16_MAX;
volatile uint32_t x317 = UINT32_MAX;
int8_t x323 = -1;
int8_t x334 = INT8_MIN;
volatile int32_t t83 = 503433388;
int32_t t84 = 81678937;
volatile int32_t t86 = -15;
int8_t x352 = INT8_MIN;
int64_t x356 = INT64_MIN;
uint8_t x357 = 127U;
uint32_t x360 = 63U;
int16_t x363 = INT16_MIN;
static volatile int8_t x365 = 29;
volatile int32_t t91 = 9132480;
int32_t t92 = -939;
static int32_t t93 = 0;
static int32_t x382 = -1149;
volatile uint8_t x384 = UINT8_MAX;
int16_t x387 = -11295;
int32_t t97 = 19171;
static int32_t t99 = 0;


void f0(void) {
	static int8_t x1 = -6;
	int8_t x3 = -1;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -23178440;

	t0 = (x1==((x2|x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -1;
	int64_t x6 = -1LL;
	int32_t x8 = 34052;
	volatile int32_t t1 = 30;

	t1 = (x5==((x6|x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = 10018776;
	int8_t x10 = -1;
	int16_t x12 = -1;

	t2 = (x9==((x10|x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 3U;
	int64_t x15 = INT64_MAX;
	int64_t x16 = -1LL;
	int32_t t3 = -322974;

	t3 = (x13==((x14|x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = 565019054818LL;
	int32_t x19 = INT32_MAX;
	volatile uint8_t x20 = 75U;
	int32_t t4 = 21480;

	t4 = (x17==((x18|x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -6;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 325092541078LLU;
	uint64_t x24 = 56843824459LLU;
	static volatile int32_t t5 = -4172;

	t5 = (x21==((x22|x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = -842916;
	static int32_t x27 = -401022;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 6478833;

	t6 = (x25==((x26|x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int16_t x30 = -1;
	int32_t x31 = -1;
	int8_t x32 = 14;

	t7 = (x29==((x30|x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MIN;
	static volatile int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = 224208;

	t8 = (x33==((x34|x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static uint64_t x38 = 1166795867912939894LLU;
	int16_t x39 = INT16_MAX;
	static int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -2116746;

	t9 = (x37==((x38|x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x42 = -1;
	static int64_t x43 = 1395674053714573LL;
	uint16_t x44 = 186U;
	static volatile int32_t t10 = 7;

	t10 = (x41==((x42|x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 7;
	uint64_t x47 = UINT64_MAX;
	int32_t t11 = 3994690;

	t11 = (x45==((x46|x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1575LL;
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 32U;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 3841917;

	t12 = (x49==((x50|x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x53 = INT64_MAX;
	static int64_t x54 = -1530718LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -7;

	t13 = (x53==((x54|x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 11427534313107017LL;
	int8_t x58 = INT8_MIN;
	int64_t x59 = -7718392678549LL;
	static uint8_t x60 = 25U;
	volatile int32_t t14 = 41137;

	t14 = (x57==((x58|x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x63 = INT64_MIN;
	int8_t x64 = -1;
	volatile int32_t t15 = 168249351;

	t15 = (x61==((x62|x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MIN;
	static int64_t x67 = INT64_MIN;
	int32_t x68 = 14975;

	t16 = (x65==((x66|x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 5974U;
	int32_t x71 = INT32_MAX;
	int32_t t17 = -2353915;

	t17 = (x69==((x70|x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 848U;
	uint64_t x74 = 283841498290587683LLU;
	int8_t x75 = 2;
	static uint64_t x76 = 8369053928844507361LLU;
	static int32_t t18 = 3239;

	t18 = (x73==((x74|x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = INT8_MIN;
	static volatile int32_t x79 = INT32_MAX;
	uint64_t x80 = 512708638545743852LLU;
	int32_t t19 = 232985;

	t19 = (x77==((x78|x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 302U;
	int16_t x83 = -1;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 30651832;

	t20 = (x81==((x82|x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	static int8_t x86 = -1;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = 18491993;

	t21 = (x85==((x86|x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int8_t x90 = INT8_MAX;
	volatile int16_t x91 = INT16_MAX;
	uint64_t x92 = 963957724LLU;

	t22 = (x89==((x90|x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 21190717;

	t23 = (x93==((x94|x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = INT8_MAX;
	uint32_t x98 = 440544117U;
	int8_t x99 = 52;
	volatile uint16_t x100 = 23167U;
	static int32_t t24 = -6202905;

	t24 = (x97==((x98|x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -11;
	uint8_t x102 = 44U;
	int16_t x103 = -5;
	uint64_t x104 = 23722457510546LLU;
	static int32_t t25 = 469841;

	t25 = (x101==((x102|x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -369;

	t26 = (x105==((x106|x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 23071U;
	int8_t x110 = 1;
	volatile int16_t x111 = -1449;
	uint64_t x112 = 2834265317520LLU;
	int32_t t27 = -6;

	t27 = (x109==((x110|x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 22U;
	int8_t x115 = INT8_MAX;
	volatile int32_t t28 = 448136842;

	t28 = (x113==((x114|x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 11232072U;
	static volatile int64_t x118 = -1LL;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = 846862LL;

	t29 = (x117==((x118|x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = -536591531;
	int64_t x123 = -1LL;
	int32_t t30 = 349569;

	t30 = (x121==((x122|x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 9U;
	int32_t x126 = INT32_MAX;
	static volatile int64_t x128 = -533533891550LL;

	t31 = (x125==((x126|x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -11127881300986467LL;
	static uint8_t x131 = 15U;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 201055;

	t32 = (x129==((x130|x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int8_t x134 = -47;
	int64_t x136 = INT64_MIN;
	static int32_t t33 = 0;

	t33 = (x133==((x134|x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -22502444178098LL;
	int16_t x138 = 4;
	static int32_t x139 = -1;
	int8_t x140 = INT8_MAX;

	t34 = (x137==((x138|x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	volatile int8_t x142 = 47;
	static volatile uint64_t x143 = 571715522439LLU;
	uint8_t x144 = 36U;
	int32_t t35 = -1459;

	t35 = (x141==((x142|x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = -2027;
	uint16_t x147 = 8U;
	uint32_t x148 = 2849262U;
	volatile int32_t t36 = -4960560;

	t36 = (x145==((x146|x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 25771375478047577LLU;
	volatile int16_t x150 = INT16_MIN;
	static int32_t x151 = INT32_MAX;
	volatile int64_t x152 = -98966342225LL;

	t37 = (x149==((x150|x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static int64_t x154 = INT64_MIN;
	static int16_t x155 = -1;
	int32_t x156 = INT32_MIN;

	t38 = (x153==((x154|x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 25U;
	static int32_t x158 = 8958546;
	uint8_t x159 = UINT8_MAX;
	uint64_t x160 = 8953174094982261LLU;
	volatile int32_t t39 = 1;

	t39 = (x157==((x158|x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 2096006252U;
	int8_t x162 = INT8_MAX;
	static volatile int32_t t40 = 23966073;

	t40 = (x161==((x162|x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint8_t x166 = 8U;
	static int32_t x168 = -1;

	t41 = (x165==((x166|x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -32;
	static volatile int32_t x171 = -588634;
	int64_t x172 = -1LL;
	volatile int32_t t42 = -15;

	t42 = (x169==((x170|x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	int8_t x176 = INT8_MAX;
	static int32_t t43 = -1793;

	t43 = (x173==((x174|x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = 1;
	static volatile int16_t x180 = -1;

	t44 = (x177==((x178|x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = 246733967;
	int64_t x183 = -1LL;
	uint64_t x184 = UINT64_MAX;

	t45 = (x181==((x182|x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	int16_t x188 = -1;
	int32_t t46 = -273718153;

	t46 = (x185==((x186|x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	uint16_t x190 = 730U;
	int64_t x192 = INT64_MAX;
	int32_t t47 = 668870331;

	t47 = (x189==((x190|x191)/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	static int64_t x195 = -164193858421623443LL;
	int16_t x196 = -2;

	t48 = (x193==((x194|x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -75698777777997340LL;
	volatile int8_t x198 = INT8_MAX;
	static uint16_t x199 = UINT16_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t49 = 33;

	t49 = (x197==((x198|x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 2;
	uint16_t x203 = UINT16_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = 3179124;

	t50 = (x201==((x202|x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x208 = 1058480762945654LLU;
	volatile int32_t t51 = 143;

	t51 = (x205==((x206|x207)/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 11U;
	int8_t x210 = 2;
	static uint32_t x211 = UINT32_MAX;
	int16_t x212 = INT16_MIN;

	t52 = (x209==((x210|x211)/x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	static uint16_t x216 = 390U;
	int32_t t53 = 0;

	t53 = (x213==((x214|x215)/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	int16_t x218 = 1;
	volatile uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -3518889;

	t54 = (x217==((x218|x219)/x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 270U;
	uint16_t x223 = 6095U;
	int16_t x224 = 8;
	int32_t t55 = -742;

	t55 = (x221==((x222|x223)/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	int64_t x228 = -16604998656387LL;
	static int32_t t56 = 39957;

	t56 = (x225==((x226|x227)/x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 3476181321944LLU;
	int64_t x230 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	static int32_t t57 = -1748;

	t57 = (x229==((x230|x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = 7650133075350764LLU;
	static int16_t x235 = INT16_MAX;
	uint8_t x236 = 103U;
	volatile int32_t t58 = -3145;

	t58 = (x233==((x234|x235)/x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 71266;
	int64_t x238 = 719LL;
	volatile int16_t x239 = INT16_MIN;

	t59 = (x237==((x238|x239)/x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int32_t x242 = -1;
	static int32_t x243 = -1;
	uint8_t x244 = 1U;
	static int32_t t60 = 123;

	t60 = (x241==((x242|x243)/x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 3U;
	static uint64_t x246 = UINT64_MAX;
	uint16_t x247 = 22U;
	int32_t t61 = -209536;

	t61 = (x245==((x246|x247)/x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	static uint32_t x250 = 64118097U;
	int32_t x251 = INT32_MAX;
	uint32_t x252 = 10U;
	static volatile int32_t t62 = 569524;

	t62 = (x249==((x250|x251)/x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x254 = -4648987411904992LL;
	int64_t x255 = INT64_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = 7747;

	t63 = (x253==((x254|x255)/x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x258 = 5448925701724717LLU;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -1;

	t64 = (x257==((x258|x259)/x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 33930LLU;
	int64_t x264 = -34LL;

	t65 = (x261==((x262|x263)/x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 50532342;
	int8_t x266 = 5;
	static int16_t x268 = INT16_MIN;
	int32_t t66 = 19;

	t66 = (x265==((x266|x267)/x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	int64_t x272 = 3119LL;
	volatile int32_t t67 = 461268458;

	t67 = (x269==((x270|x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 41U;
	static uint64_t x275 = 1281053951744LLU;
	int64_t x276 = -1LL;
	int32_t t68 = -14;

	t68 = (x273==((x274|x275)/x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = 380334;
	uint64_t x278 = 1LLU;
	int16_t x279 = -1;
	uint8_t x280 = 2U;
	volatile int32_t t69 = -2053;

	t69 = (x277==((x278|x279)/x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = 51LLU;
	volatile int16_t x284 = -1557;
	int32_t t70 = -9;

	t70 = (x281==((x282|x283)/x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = -50261633966LL;
	static uint32_t x286 = 247247U;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -8;
	int32_t t71 = 1;

	t71 = (x285==((x286|x287)/x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = 1;
	uint64_t x291 = UINT64_MAX;
	static int8_t x292 = INT8_MIN;

	t72 = (x289==((x290|x291)/x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MAX;
	static int64_t x295 = INT64_MIN;
	static int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = 5129;

	t73 = (x293==((x294|x295)/x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x297 = 3803614243951700340LLU;
	volatile int64_t x299 = 385920401725539LL;
	int16_t x300 = INT16_MIN;
	static int32_t t74 = 3192383;

	t74 = (x297==((x298|x299)/x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	volatile int32_t x303 = -1;
	static uint8_t x304 = 3U;
	volatile int32_t t75 = -132374675;

	t75 = (x301==((x302|x303)/x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = UINT64_MAX;
	static uint16_t x307 = 3U;
	uint32_t x308 = 2152049U;
	int32_t t76 = 1;

	t76 = (x305==((x306|x307)/x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 7;
	int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -27597;

	t77 = (x309==((x310|x311)/x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 27271855379LLU;
	volatile int8_t x314 = -1;
	volatile int32_t x315 = INT32_MAX;
	int8_t x316 = INT8_MIN;
	static int32_t t78 = -106;

	t78 = (x313==((x314|x315)/x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x318 = 1612U;
	int32_t x319 = -1;
	volatile int64_t x320 = 193210795653992016LL;
	volatile int32_t t79 = -767;

	t79 = (x317==((x318|x319)/x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 4U;
	int16_t x322 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -14;

	t80 = (x321==((x322|x323)/x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = UINT16_MAX;
	static uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 1432U;
	static int8_t x328 = INT8_MIN;
	int32_t t81 = 1;

	t81 = (x325==((x326|x327)/x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -32554;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -1;

	t82 = (x329==((x330|x331)/x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 9;
	int64_t x335 = -1LL;
	volatile uint32_t x336 = 4939U;

	t83 = (x333==((x334|x335)/x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 0U;
	int8_t x338 = INT8_MAX;
	uint32_t x339 = UINT32_MAX;
	static int32_t x340 = -13340;

	t84 = (x337==((x338|x339)/x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -1LL;
	uint64_t x342 = 2711349613569LLU;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 53814949;

	t85 = (x341==((x342|x343)/x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MAX;
	uint32_t x346 = UINT32_MAX;
	static volatile int8_t x347 = -47;
	int64_t x348 = INT64_MIN;

	t86 = (x345==((x346|x347)/x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 1;
	static volatile uint64_t x350 = 5777530LLU;
	int32_t x351 = INT32_MIN;
	int32_t t87 = 1966999;

	t87 = (x349==((x350|x351)/x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x353 = 1657U;
	uint32_t x354 = 823449U;
	int32_t x355 = -1;
	volatile int32_t t88 = -15812193;

	t88 = (x353==((x354|x355)/x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -1;
	volatile uint64_t x359 = UINT64_MAX;
	int32_t t89 = 130888246;

	t89 = (x357==((x358|x359)/x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x361 = 283630445U;
	int8_t x362 = -1;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t90 = 143212863;

	t90 = (x361==((x362|x363)/x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = -1;
	int8_t x367 = 0;
	int8_t x368 = INT8_MAX;

	t91 = (x365==((x366|x367)/x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 1007555418601681LL;
	int16_t x370 = 11179;
	int16_t x371 = 1165;
	volatile uint64_t x372 = 160926183516317094LLU;

	t92 = (x369==((x370|x371)/x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 166577U;
	static uint8_t x374 = 4U;
	int16_t x375 = INT16_MAX;
	int16_t x376 = -1;

	t93 = (x373==((x374|x375)/x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 391;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = INT8_MIN;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 324;

	t94 = (x377==((x378|x379)/x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MAX;
	uint64_t x383 = 509641779LLU;
	int32_t t95 = 34014721;

	t95 = (x381==((x382|x383)/x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int32_t x386 = -1216;
	static int16_t x388 = -1;
	int32_t t96 = 40928461;

	t96 = (x385==((x386|x387)/x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int64_t x390 = -85642LL;
	static uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 1096U;

	t97 = (x389==((x390|x391)/x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	uint8_t x394 = 0U;
	int32_t x395 = -209;
	static volatile int32_t x396 = -1;
	volatile int32_t t98 = -1;

	t98 = (x393==((x394|x395)/x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -52;
	int8_t x398 = 1;
	static uint64_t x399 = 6158930033167LLU;
	int32_t x400 = INT32_MIN;

	t99 = (x397==((x398|x399)/x400));

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

