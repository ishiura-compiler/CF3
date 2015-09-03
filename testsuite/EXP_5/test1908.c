#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = -1LL;
int16_t x16 = -1;
int16_t x19 = -1;
static volatile int32_t t6 = 621487630;
uint8_t x32 = UINT8_MAX;
int8_t x39 = INT8_MAX;
int32_t t9 = -1;
volatile int32_t x43 = -322103810;
volatile int32_t x49 = -1;
uint32_t x51 = 28U;
static int32_t x53 = -220933057;
int32_t x56 = -29126654;
static int16_t x61 = INT16_MIN;
int64_t x62 = INT64_MIN;
int32_t x63 = INT32_MAX;
static volatile int32_t t15 = -14;
static int8_t x66 = INT8_MIN;
uint8_t x68 = 8U;
int8_t x74 = INT8_MIN;
static int32_t x76 = INT32_MIN;
static uint32_t x89 = 6446U;
uint32_t x97 = 33689U;
uint8_t x98 = UINT8_MAX;
volatile uint64_t x100 = UINT64_MAX;
int64_t x103 = INT64_MAX;
int32_t x107 = INT32_MAX;
int16_t x118 = -1;
static uint32_t x127 = 161222U;
int16_t x128 = INT16_MAX;
int8_t x130 = -19;
volatile int32_t t33 = -7453545;
int16_t x144 = INT16_MIN;
uint8_t x148 = UINT8_MAX;
int8_t x153 = INT8_MIN;
int64_t x155 = INT64_MIN;
int32_t t38 = 500;
volatile int32_t t39 = -254307;
int8_t x164 = INT8_MAX;
int32_t x175 = -70;
int8_t x176 = INT8_MAX;
int32_t x178 = -1;
volatile int16_t x183 = -1;
int32_t x191 = INT32_MAX;
static int16_t x193 = INT16_MIN;
static int32_t t47 = 0;
int32_t t48 = -921;
volatile int32_t t49 = 186;
int16_t x206 = -15;
int64_t x213 = -1LL;
volatile int32_t x222 = INT32_MIN;
int16_t x223 = INT16_MIN;
int8_t x224 = -1;
volatile int8_t x226 = INT8_MIN;
static int32_t t55 = 5716;
static volatile int8_t x231 = -1;
int32_t t56 = 343683;
volatile int8_t x240 = INT8_MIN;
volatile int64_t x245 = INT64_MIN;
uint16_t x247 = 2645U;
int32_t t60 = 0;
volatile int16_t x249 = 16;
int16_t x252 = INT16_MAX;
int8_t x255 = -1;
uint32_t x266 = 1U;
volatile int64_t x273 = -1LL;
int16_t x275 = -1;
static int32_t t70 = 7;
static uint8_t x290 = 16U;
int32_t x292 = 423478452;
uint64_t x298 = 125098678LLU;
int32_t t73 = 157;
int8_t x310 = 2;
int32_t t76 = -3595;
int16_t x316 = INT16_MAX;
static int32_t t78 = -324;
uint16_t x322 = 1U;
int16_t x324 = -1;
int32_t t80 = 7;
uint32_t x330 = 16257298U;
static volatile int32_t t81 = -306124365;
static int32_t x335 = -1;
static volatile int32_t t82 = 18;
uint16_t x337 = UINT16_MAX;
int32_t x340 = -1;
static uint16_t x345 = UINT16_MAX;
uint8_t x347 = 26U;
volatile int32_t t85 = -331970297;
int64_t x356 = -1526609760635245LL;
static int32_t t86 = -16704752;
int16_t x360 = INT16_MIN;
volatile int16_t x366 = 10;
static volatile uint32_t x392 = UINT32_MAX;
static int32_t x399 = 0;
static int32_t t96 = -4;
static int32_t t97 = -8420;
uint32_t x405 = UINT32_MAX;
static int64_t x408 = INT64_MAX;
volatile int16_t x409 = INT16_MAX;
int16_t x411 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = 0;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int32_t t0 = 57501503;

	t0 = (x1<=((x2|x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = 0U;
	int32_t x8 = -79902;
	volatile int32_t t1 = 18611;

	t1 = (x5<=((x6|x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -1557;

	t2 = (x9<=((x10|x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int64_t x14 = INT64_MIN;
	static int64_t x15 = -27185LL;
	int32_t t3 = 855214447;

	t3 = (x13<=((x14|x15)/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 4397U;
	int32_t x18 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	static volatile int32_t t4 = -48305854;

	t4 = (x17<=((x18|x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static int32_t x22 = -290910;
	static int32_t x23 = INT32_MIN;
	int32_t x24 = -1;
	int32_t t5 = 1;

	t5 = (x21<=((x22|x23)/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int8_t x26 = -1;
	int8_t x27 = -3;
	int8_t x28 = 1;

	t6 = (x25<=((x26|x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	int32_t t7 = 3669;

	t7 = (x29<=((x30|x31)/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int32_t x34 = INT32_MIN;
	int8_t x35 = 0;
	int8_t x36 = 3;
	int32_t t8 = 1447;

	t8 = (x33<=((x34|x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MAX;
	int8_t x40 = -1;

	t9 = (x37<=((x38|x39)/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	int8_t x42 = INT8_MAX;
	int16_t x44 = -1;
	volatile int32_t t10 = -3;

	t10 = (x41<=((x42|x43)/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	static uint16_t x47 = 3U;
	int16_t x48 = -1;
	static int32_t t11 = 1056623047;

	t11 = (x45<=((x46|x47)/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -2284;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 15;

	t12 = (x49<=((x50|x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	volatile int32_t t13 = 84;

	t13 = (x53<=((x54|x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 1U;
	int16_t x58 = -94;
	static int32_t x59 = -2782;
	int8_t x60 = INT8_MIN;
	static int32_t t14 = 6343;

	t14 = (x57<=((x58|x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x64 = 579900LLU;

	t15 = (x61<=((x62|x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 8117783442LLU;
	static int64_t x67 = 3848LL;
	volatile int32_t t16 = 206148009;

	t16 = (x65<=((x66|x67)/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 6726LLU;
	int64_t x70 = -151306133830986LL;
	static int8_t x71 = -4;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 1077389;

	t17 = (x69<=((x70|x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 3507350837032715LLU;
	volatile uint32_t x75 = UINT32_MAX;
	int32_t t18 = 197123872;

	t18 = (x73<=((x74|x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MAX;
	static volatile int64_t x78 = 3289897196529813LL;
	uint64_t x79 = UINT64_MAX;
	static int8_t x80 = 11;
	int32_t t19 = 250;

	t19 = (x77<=((x78|x79)/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 42385296U;
	volatile uint8_t x82 = UINT8_MAX;
	static int64_t x83 = -1LL;
	volatile int8_t x84 = -1;
	int32_t t20 = 3;

	t20 = (x81<=((x82|x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MAX;
	uint64_t x86 = 57522446112903LLU;
	static int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	static volatile int32_t t21 = -47271;

	t21 = (x85<=((x86|x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MAX;
	static int8_t x91 = -55;
	static int64_t x92 = INT64_MIN;
	int32_t t22 = -11;

	t22 = (x89<=((x90|x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	volatile int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 20;

	t23 = (x93<=((x94|x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x99 = UINT8_MAX;
	volatile int32_t t24 = -5822;

	t24 = (x97<=((x98|x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = 22;
	int16_t x102 = INT16_MIN;
	volatile uint16_t x104 = 846U;
	static int32_t t25 = 1;

	t25 = (x101<=((x102|x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 4757105;
	uint8_t x106 = UINT8_MAX;
	volatile int32_t x108 = INT32_MAX;
	volatile int32_t t26 = 823300971;

	t26 = (x105<=((x106|x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = UINT8_MAX;
	uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;
	int32_t t27 = 262;

	t27 = (x109<=((x110|x111)/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 109U;
	int64_t x114 = -1LL;
	int16_t x115 = -1;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 97323;

	t28 = (x113<=((x114|x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x119 = 220519041LL;
	int8_t x120 = 57;
	volatile int32_t t29 = 10234;

	t29 = (x117<=((x118|x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 2;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t30 = 25251594;

	t30 = (x121<=((x122|x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;
	static int32_t t31 = 62343;

	t31 = (x125<=((x126|x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 12331852;

	t32 = (x129<=((x130|x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 269815636U;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = 119;
	int64_t x136 = INT64_MIN;

	t33 = (x133<=((x134|x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	int64_t x138 = INT64_MIN;
	uint64_t x139 = 5533232723LLU;
	static volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 694581676;

	t34 = (x137<=((x138|x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	static int16_t x142 = -1;
	uint64_t x143 = 299349084LLU;
	volatile int32_t t35 = -67742;

	t35 = (x141<=((x142|x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	static uint8_t x146 = 16U;
	int32_t x147 = INT32_MIN;
	int32_t t36 = -1;

	t36 = (x145<=((x146|x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MAX;
	static int8_t x150 = -1;
	static int8_t x151 = INT8_MIN;
	uint32_t x152 = 29192U;
	volatile int32_t t37 = -2444;

	t37 = (x149<=((x150|x151)/x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 42;
	volatile uint16_t x156 = UINT16_MAX;

	t38 = (x153<=((x154|x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -112;
	int16_t x158 = -1;
	int8_t x159 = INT8_MAX;
	volatile int16_t x160 = INT16_MIN;

	t39 = (x157<=((x158|x159)/x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = -35478251;
	static uint32_t x163 = 3631U;
	static int32_t t40 = 1;

	t40 = (x161<=((x162|x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 301425U;
	static uint8_t x167 = 4U;
	uint64_t x168 = UINT64_MAX;
	static int32_t t41 = 31;

	t41 = (x165<=((x166|x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 7172;
	int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	volatile int16_t x172 = 9622;
	volatile int32_t t42 = 108;

	t42 = (x169<=((x170|x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 60;
	static volatile uint64_t x174 = 141791966673LLU;
	int32_t t43 = -13136;

	t43 = (x173<=((x174|x175)/x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 75U;
	uint32_t x179 = 52721898U;
	volatile uint32_t x180 = 1663060274U;
	int32_t t44 = -54969498;

	t44 = (x177<=((x178|x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 6U;
	int8_t x182 = -1;
	uint64_t x184 = UINT64_MAX;
	static int32_t t45 = -14;

	t45 = (x181<=((x182|x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	static volatile int16_t x190 = -1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t46 = -1;

	t46 = (x189<=((x190|x191)/x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x194 = UINT16_MAX;
	static int32_t x195 = -1;
	int64_t x196 = INT64_MIN;

	t47 = (x193<=((x194|x195)/x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = INT8_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x199 = -6540187621LL;
	volatile uint8_t x200 = 53U;

	t48 = (x197<=((x198|x199)/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x201 = 1U;
	static volatile int32_t x202 = 23160061;
	uint32_t x203 = 1618U;
	volatile int8_t x204 = INT8_MIN;

	t49 = (x201<=((x202|x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x205 = 2LLU;
	int8_t x207 = INT8_MIN;
	static volatile int16_t x208 = 6290;
	int32_t t50 = -11;

	t50 = (x205<=((x206|x207)/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 0;
	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 857013825446916LLU;
	volatile uint64_t x212 = 10998738957275LLU;
	static volatile int32_t t51 = -490818864;

	t51 = (x209<=((x210|x211)/x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x214 = 0;
	int16_t x215 = INT16_MAX;
	int32_t x216 = 65314844;
	static volatile int32_t t52 = -1307143;

	t52 = (x213<=((x214|x215)/x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x218 = 47U;
	static int8_t x219 = INT8_MIN;
	uint16_t x220 = 1104U;
	static int32_t t53 = 690303;

	t53 = (x217<=((x218|x219)/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	int32_t t54 = -26;

	t54 = (x221<=((x222|x223)/x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x227 = 538418784622342LLU;
	int32_t x228 = -1;

	t55 = (x225<=((x226|x227)/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	static int64_t x230 = -1306959853126675105LL;
	uint64_t x232 = 1LLU;

	t56 = (x229<=((x230|x231)/x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = 5;
	int16_t x234 = INT16_MIN;
	int8_t x235 = 4;
	int64_t x236 = INT64_MIN;
	volatile int32_t t57 = -214;

	t57 = (x233<=((x234|x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MAX;
	int16_t x239 = 410;
	static volatile int32_t t58 = -998;

	t58 = (x237<=((x238|x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1660008575LL;
	uint32_t x242 = 12U;
	volatile int32_t x243 = 9692;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t59 = -1015589;

	t59 = (x241<=((x242|x243)/x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x246 = INT64_MIN;
	int16_t x248 = -787;

	t60 = (x245<=((x246|x247)/x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x250 = INT32_MIN;
	static volatile uint64_t x251 = 521989471777713170LLU;
	int32_t t61 = -117573557;

	t61 = (x249<=((x250|x251)/x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x253 = 1813LLU;
	uint8_t x254 = 43U;
	uint32_t x256 = 238941U;
	static int32_t t62 = -701075;

	t62 = (x253<=((x254|x255)/x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	volatile int16_t x258 = INT16_MAX;
	volatile int16_t x259 = INT16_MIN;
	int16_t x260 = -6;
	static int32_t t63 = -844;

	t63 = (x257<=((x258|x259)/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = 0;
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t64 = 34796;

	t64 = (x261<=((x262|x263)/x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = INT32_MIN;
	int8_t x267 = -1;
	uint32_t x268 = 202393U;
	volatile int32_t t65 = 16448722;

	t65 = (x265<=((x266|x267)/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = 33;
	static int64_t x270 = INT64_MAX;
	int64_t x271 = 48786LL;
	static uint16_t x272 = 7U;
	static int32_t t66 = 520;

	t66 = (x269<=((x270|x271)/x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x274 = 548545U;
	static int64_t x276 = -4573LL;
	int32_t t67 = 210046;

	t67 = (x273<=((x274|x275)/x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = 106451412;
	int64_t x278 = 126957667014LL;
	uint8_t x279 = 30U;
	uint32_t x280 = 13811459U;
	int32_t t68 = -537510534;

	t68 = (x277<=((x278|x279)/x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x281 = INT64_MAX;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -1;
	uint64_t x284 = 202330161730LLU;
	int32_t t69 = -18;

	t69 = (x281<=((x282|x283)/x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -1;
	static uint32_t x286 = 19U;
	int64_t x287 = -1LL;
	int16_t x288 = -1;

	t70 = (x285<=((x286|x287)/x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 1U;
	int16_t x291 = INT16_MIN;
	volatile int32_t t71 = -720;

	t71 = (x289<=((x290|x291)/x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 23U;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 4461383061LLU;
	volatile int32_t t72 = 2;

	t72 = (x293<=((x294|x295)/x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 3U;
	volatile uint16_t x299 = UINT16_MAX;
	static volatile int8_t x300 = 1;

	t73 = (x297<=((x298|x299)/x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x301 = 1U;
	static volatile int8_t x302 = INT8_MIN;
	static int64_t x303 = 64LL;
	static uint64_t x304 = 26110LLU;
	int32_t t74 = 19;

	t74 = (x301<=((x302|x303)/x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x305 = 3310175U;
	static int16_t x306 = INT16_MAX;
	int64_t x307 = -1LL;
	int16_t x308 = INT16_MAX;
	int32_t t75 = -6234;

	t75 = (x305<=((x306|x307)/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = UINT8_MAX;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 840450U;

	t76 = (x309<=((x310|x311)/x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 50U;
	int8_t x314 = INT8_MIN;
	int64_t x315 = 373630945857938506LL;
	static int32_t t77 = 2829877;

	t77 = (x313<=((x314|x315)/x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = -63;
	int32_t x318 = INT32_MIN;
	int32_t x319 = -44;
	int64_t x320 = -1LL;

	t78 = (x317<=((x318|x319)/x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x321 = INT8_MAX;
	uint16_t x323 = 0U;
	volatile int32_t t79 = -1;

	t79 = (x321<=((x322|x323)/x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 7U;
	volatile int16_t x326 = INT16_MIN;
	volatile int32_t x327 = INT32_MIN;
	volatile uint16_t x328 = 2021U;

	t80 = (x325<=((x326|x327)/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x331 = -1;
	uint8_t x332 = 98U;

	t81 = (x329<=((x330|x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = -1;
	int32_t x334 = -1;
	static volatile int32_t x336 = INT32_MAX;

	t82 = (x333<=((x334|x335)/x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x338 = INT32_MIN;
	int32_t x339 = -1;
	static int32_t t83 = 241123;

	t83 = (x337<=((x338|x339)/x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MIN;
	volatile int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	uint32_t x344 = 428U;
	volatile int32_t t84 = -371;

	t84 = (x341<=((x342|x343)/x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = -1;
	int16_t x348 = 57;

	t85 = (x345<=((x346|x347)/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 698U;
	uint8_t x355 = 107U;

	t86 = (x353<=((x354|x355)/x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	volatile int16_t x359 = 7;
	volatile int32_t t87 = 12;

	t87 = (x357<=((x358|x359)/x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = UINT16_MAX;
	int32_t t88 = -5436047;

	t88 = (x361<=((x362|x363)/x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MAX;
	int16_t x367 = INT16_MIN;
	int64_t x368 = -1LL;
	int32_t t89 = 59195693;

	t89 = (x365<=((x366|x367)/x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x369 = UINT8_MAX;
	static int64_t x370 = -1LL;
	int8_t x371 = -13;
	int32_t x372 = INT32_MAX;
	int32_t t90 = -796;

	t90 = (x369<=((x370|x371)/x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 34214643862229LLU;
	int64_t x374 = INT64_MIN;
	static volatile int8_t x375 = INT8_MIN;
	static int64_t x376 = -5653742489LL;
	volatile int32_t t91 = 964410623;

	t91 = (x373<=((x374|x375)/x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 97120754U;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = 9146299U;
	int32_t x380 = 710272634;
	volatile int32_t t92 = 171005;

	t92 = (x377<=((x378|x379)/x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x381 = 74U;
	volatile int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	volatile uint32_t x384 = 92U;
	volatile int32_t t93 = -1;

	t93 = (x381<=((x382|x383)/x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = 54068U;
	uint32_t x386 = UINT32_MAX;
	static int8_t x387 = 14;
	volatile int16_t x388 = -1;
	int32_t t94 = -12600;

	t94 = (x385<=((x386|x387)/x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 777836022459295LLU;
	uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 3999021058108989754LLU;
	int32_t t95 = 94;

	t95 = (x389<=((x390|x391)/x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MIN;
	int64_t x400 = INT64_MIN;

	t96 = (x397<=((x398|x399)/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MAX;
	static volatile uint8_t x402 = 49U;
	int64_t x403 = INT64_MAX;
	int8_t x404 = -1;

	t97 = (x401<=((x402|x403)/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x406 = -7775;
	int64_t x407 = 455906534720556710LL;
	int32_t t98 = 53417406;

	t98 = (x405<=((x406|x407)/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x410 = INT8_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t99 = 43;

	t99 = (x409<=((x410|x411)/x412));

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

