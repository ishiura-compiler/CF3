#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x19 = UINT64_MAX;
volatile int8_t x22 = 34;
int32_t t5 = 169;
int8_t x29 = -1;
static int8_t x34 = INT8_MAX;
uint32_t x38 = 13U;
volatile uint16_t x47 = UINT16_MAX;
uint16_t x51 = 1575U;
int16_t x54 = INT16_MAX;
static int32_t x58 = -44711;
int64_t x63 = INT64_MIN;
uint16_t x67 = 7614U;
int64_t x69 = -1LL;
int64_t x72 = INT64_MIN;
volatile int64_t x74 = -7700855543390LL;
int16_t x82 = 136;
static int32_t t20 = 40;
uint64_t x89 = UINT64_MAX;
int16_t x96 = INT16_MIN;
volatile uint16_t x97 = 18344U;
uint16_t x101 = UINT16_MAX;
int64_t x104 = INT64_MIN;
static volatile int32_t t25 = -40908555;
static int8_t x106 = INT8_MAX;
int64_t x107 = INT64_MIN;
volatile int32_t t26 = -52346262;
uint8_t x115 = 84U;
int8_t x117 = INT8_MAX;
static int64_t x121 = 1168LL;
volatile uint32_t x136 = 10993232U;
int64_t x140 = -94976268LL;
int32_t t34 = 28066400;
volatile int8_t x141 = INT8_MAX;
volatile int32_t t35 = -105448;
int32_t x145 = 487676;
volatile uint8_t x153 = UINT8_MAX;
int16_t x155 = INT16_MIN;
volatile int32_t t40 = -42;
int64_t x171 = -1LL;
static volatile int32_t t42 = 27691233;
static volatile int32_t t44 = -212;
int64_t x187 = 27578519254565LL;
int16_t x195 = 0;
int16_t x198 = -1;
volatile int16_t x202 = 5;
int32_t t50 = 11;
static int8_t x205 = 0;
uint8_t x208 = 4U;
uint32_t x210 = 2U;
int32_t t52 = 0;
static int16_t x213 = 1;
int32_t t53 = 26071;
int64_t x218 = INT64_MIN;
int32_t t54 = 29895567;
uint8_t x221 = 57U;
int32_t t55 = 327389;
uint64_t x225 = UINT64_MAX;
int16_t x228 = 3;
volatile int32_t x232 = 27362;
uint16_t x235 = UINT16_MAX;
volatile int32_t t58 = -407131989;
static uint32_t x238 = UINT32_MAX;
int8_t x243 = INT8_MAX;
static volatile int32_t x245 = -12553;
int32_t x250 = INT32_MAX;
int16_t x251 = -1;
int8_t x252 = -1;
static int16_t x253 = -63;
uint8_t x262 = 101U;
static uint8_t x268 = 123U;
uint16_t x271 = 36U;
int32_t x273 = 1;
int8_t x274 = 0;
uint8_t x286 = 20U;
int8_t x289 = INT8_MAX;
volatile int32_t t71 = 316;
volatile int8_t x304 = INT8_MIN;
int64_t x309 = INT64_MAX;
static volatile int64_t x316 = INT64_MAX;
int32_t t82 = 236;
volatile uint16_t x341 = 1U;
static int16_t x347 = INT16_MIN;
int32_t t85 = -14666;
uint8_t x353 = UINT8_MAX;
static int64_t x357 = INT64_MAX;
uint8_t x358 = UINT8_MAX;
volatile int8_t x359 = INT8_MAX;
int16_t x360 = 6;
int8_t x364 = -6;
static int64_t x365 = -1LL;
static uint32_t x366 = 661U;
uint32_t x369 = 55025544U;
int16_t x370 = INT16_MIN;
int32_t x372 = INT32_MIN;
int16_t x393 = INT16_MIN;
static int32_t t97 = 15369;
uint16_t x398 = 414U;
static int64_t x399 = INT64_MIN;
int64_t x400 = INT64_MAX;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MAX;
	volatile uint64_t x3 = 12093LLU;
	uint32_t x4 = 1233U;
	static volatile int32_t t0 = 1;

	t0 = (x1<=((x2|x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	uint64_t x8 = 89LLU;
	volatile int32_t t1 = -131607195;

	t1 = (x5<=((x6|x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1049978LLU;
	int16_t x10 = 290;
	volatile uint16_t x11 = 4U;
	uint32_t x12 = 48996U;
	volatile int32_t t2 = -198;

	t2 = (x9<=((x10|x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = -1;
	int64_t x15 = -1LL;
	int8_t x16 = 59;
	int32_t t3 = -3112980;

	t3 = (x13<=((x14|x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 774;
	static int8_t x18 = 3;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 122;

	t4 = (x17<=((x18|x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x23 = INT8_MAX;
	int32_t x24 = INT32_MIN;

	t5 = (x21<=((x22|x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 352197U;
	volatile int32_t x26 = INT32_MIN;
	uint32_t x27 = UINT32_MAX;
	int32_t x28 = -11239726;
	static int32_t t6 = -5;

	t6 = (x25<=((x26|x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = -7635014LL;
	int32_t x31 = -12058883;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 1512459;

	t7 = (x29<=((x30|x31)%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MAX;
	int32_t t8 = 274;

	t8 = (x33<=((x34|x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	static uint16_t x39 = 3U;
	static int32_t x40 = 2;
	volatile int32_t t9 = 1;

	t9 = (x37<=((x38|x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -16154;
	volatile int64_t x42 = 20761737505322347LL;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -28;

	t10 = (x41<=((x42|x43)%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint16_t x46 = 41U;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 0;

	t11 = (x45<=((x46|x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = UINT8_MAX;
	uint8_t x50 = 33U;
	static int16_t x52 = 419;
	volatile int32_t t12 = -2249799;

	t12 = (x49<=((x50|x51)%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint32_t x55 = 15U;
	volatile int8_t x56 = -6;
	static int32_t t13 = -1;

	t13 = (x53<=((x54|x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -5;
	volatile int16_t x59 = INT16_MIN;
	static uint32_t x60 = 6245U;
	int32_t t14 = -1419;

	t14 = (x57<=((x58|x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	uint8_t x62 = 9U;
	uint16_t x64 = 6261U;
	int32_t t15 = 189742093;

	t15 = (x61<=((x62|x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -19;
	static volatile uint64_t x66 = 1LLU;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = -5938636;

	t16 = (x65<=((x66|x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -1LL;
	volatile uint8_t x71 = 45U;
	static int32_t t17 = 13;

	t17 = (x69<=((x70|x71)%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 459;
	static uint64_t x75 = 30545LLU;
	static int64_t x76 = -3767896917971588403LL;
	volatile int32_t t18 = 434500;

	t18 = (x73<=((x74|x75)%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = INT32_MIN;
	uint16_t x79 = 0U;
	static uint16_t x80 = UINT16_MAX;
	int32_t t19 = 287014;

	t19 = (x77<=((x78|x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int8_t x83 = INT8_MAX;
	uint32_t x84 = 1206814649U;

	t20 = (x81<=((x82|x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -7740;
	uint64_t x86 = UINT64_MAX;
	volatile int8_t x87 = INT8_MIN;
	static uint64_t x88 = 419815395081LLU;
	volatile int32_t t21 = 132846262;

	t21 = (x85<=((x86|x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 14683U;
	int64_t x91 = INT64_MAX;
	int32_t x92 = -1;
	volatile int32_t t22 = 48152;

	t22 = (x89<=((x90|x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 20U;
	volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	static volatile int32_t t23 = 318966;

	t23 = (x93<=((x94|x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	volatile uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = -4006;

	t24 = (x97<=((x98|x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MAX;
	static uint16_t x103 = 495U;

	t25 = (x101<=((x102|x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x105 = 0U;
	int8_t x108 = 41;

	t26 = (x105<=((x106|x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = -77139012202183495LL;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 234921524;

	t27 = (x109<=((x110|x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 169811263;

	t28 = (x113<=((x114|x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = UINT16_MAX;
	int64_t x119 = INT64_MIN;
	static int8_t x120 = 1;
	volatile int32_t t29 = 1;

	t29 = (x117<=((x118|x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = INT64_MAX;
	uint8_t x123 = 30U;
	volatile int64_t x124 = -1199LL;
	static volatile int32_t t30 = -132733729;

	t30 = (x121<=((x122|x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 0U;
	int64_t x126 = 14LL;
	static volatile int32_t x127 = 79204294;
	volatile int16_t x128 = -1;
	int32_t t31 = 32013;

	t31 = (x125<=((x126|x127)%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 106U;
	uint8_t x130 = 3U;
	static int64_t x131 = INT64_MIN;
	static volatile int8_t x132 = INT8_MAX;
	volatile int32_t t32 = -26577468;

	t32 = (x129<=((x130|x131)%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 5522;
	volatile uint32_t x134 = 13900U;
	int64_t x135 = 52LL;
	int32_t t33 = 135;

	t33 = (x133<=((x134|x135)%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -4071241LL;
	static volatile uint32_t x138 = 893529421U;
	static uint32_t x139 = UINT32_MAX;

	t34 = (x137<=((x138|x139)%x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	uint64_t x143 = UINT64_MAX;
	static int8_t x144 = INT8_MIN;

	t35 = (x141<=((x142|x143)%x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MAX;
	int16_t x147 = -180;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t36 = 107;

	t36 = (x145<=((x146|x147)%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MAX;
	int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 13581595;

	t37 = (x149<=((x150|x151)%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = 3912917;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 478;

	t38 = (x153<=((x154|x155)%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	volatile uint8_t x158 = 2U;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -7102389;

	t39 = (x157<=((x158|x159)%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	uint16_t x162 = 1679U;
	int32_t x163 = 1719338;
	static int64_t x164 = INT64_MIN;

	t40 = (x161<=((x162|x163)%x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	static int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MIN;
	int32_t x168 = 2;
	int32_t t41 = -442789467;

	t41 = (x165<=((x166|x167)%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 0U;
	int32_t x170 = -1;
	int32_t x172 = -163820362;

	t42 = (x169<=((x170|x171)%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static int16_t x174 = -1;
	uint16_t x175 = 1U;
	int8_t x176 = -6;
	int32_t t43 = 34;

	t43 = (x173<=((x174|x175)%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 13495551469900364LLU;
	volatile int8_t x178 = -1;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;

	t44 = (x177<=((x178|x179)%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	uint32_t x182 = 24670U;
	static int64_t x183 = INT64_MIN;
	static int16_t x184 = -1;
	static int32_t t45 = -1;

	t45 = (x181<=((x182|x183)%x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	volatile int64_t x186 = -3167863LL;
	volatile uint64_t x188 = UINT64_MAX;
	int32_t t46 = -17293;

	t46 = (x185<=((x186|x187)%x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = -1;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -1;

	t47 = (x189<=((x190|x191)%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	static volatile int64_t x194 = 236691363928549LL;
	volatile int16_t x196 = 607;
	static volatile int32_t t48 = -5777515;

	t48 = (x193<=((x194|x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int16_t x199 = -1;
	uint32_t x200 = 175250487U;
	volatile int32_t t49 = -16399;

	t49 = (x197<=((x198|x199)%x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 506755941587LLU;
	uint16_t x203 = 39U;
	volatile uint8_t x204 = 15U;

	t50 = (x201<=((x202|x203)%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 17U;
	static int16_t x207 = INT16_MIN;
	static volatile int32_t t51 = -3965;

	t51 = (x205<=((x206|x207)%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	uint32_t x211 = UINT32_MAX;
	static volatile uint16_t x212 = 15057U;

	t52 = (x209<=((x210|x211)%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = INT32_MIN;
	static int16_t x216 = INT16_MIN;

	t53 = (x213<=((x214|x215)%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = 115U;
	int8_t x219 = -1;
	int32_t x220 = INT32_MIN;

	t54 = (x217<=((x218|x219)%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = -1;
	int16_t x223 = -1;
	int8_t x224 = 29;

	t55 = (x221<=((x222|x223)%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x226 = 409U;
	int16_t x227 = INT16_MAX;
	volatile int32_t t56 = 4;

	t56 = (x225<=((x226|x227)%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	volatile int8_t x230 = 1;
	uint64_t x231 = 299LLU;
	int32_t t57 = -12658084;

	t57 = (x229<=((x230|x231)%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	int8_t x234 = INT8_MIN;
	int32_t x236 = INT32_MAX;

	t58 = (x233<=((x234|x235)%x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = -1;
	static volatile int32_t t59 = 8040;

	t59 = (x237<=((x238|x239)%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 66U;
	uint16_t x242 = UINT16_MAX;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 794381;

	t60 = (x241<=((x242|x243)%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = UINT64_MAX;
	volatile int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = 3148;

	t61 = (x245<=((x246|x247)%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 3814;
	int32_t t62 = 1637545;

	t62 = (x249<=((x250|x251)%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = -1;
	static uint8_t x255 = 33U;
	uint32_t x256 = 404555U;
	int32_t t63 = -330208;

	t63 = (x253<=((x254|x255)%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -118;
	uint32_t x258 = 3008U;
	int64_t x259 = INT64_MAX;
	volatile uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = 451014;

	t64 = (x257<=((x258|x259)%x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	volatile int32_t x263 = 32195535;
	int16_t x264 = -3;
	int32_t t65 = -50418;

	t65 = (x261<=((x262|x263)%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 58;
	volatile int64_t x266 = -7LL;
	int8_t x267 = 1;
	int32_t t66 = 5740;

	t66 = (x265<=((x266|x267)%x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile int8_t x270 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 78;

	t67 = (x269<=((x270|x271)%x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 13687;

	t68 = (x273<=((x274|x275)%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 39U;
	static int64_t x278 = -1820485984136433LL;
	int64_t x279 = -1LL;
	volatile int8_t x280 = INT8_MAX;
	volatile int32_t t69 = -60;

	t69 = (x277<=((x278|x279)%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	int32_t t70 = 93493;

	t70 = (x285<=((x286|x287)%x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x290 = INT16_MIN;
	int8_t x291 = 0;
	int32_t x292 = 1649475;

	t71 = (x289<=((x290|x291)%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int64_t x295 = -1LL;
	int8_t x296 = -1;
	int32_t t72 = -3848;

	t72 = (x293<=((x294|x295)%x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	int16_t x298 = -1;
	volatile int8_t x299 = INT8_MAX;
	uint8_t x300 = UINT8_MAX;
	int32_t t73 = 1047;

	t73 = (x297<=((x298|x299)%x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = 2017;
	volatile int16_t x302 = -15077;
	static uint16_t x303 = UINT16_MAX;
	int32_t t74 = 113987;

	t74 = (x301<=((x302|x303)%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = 1U;
	int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	static int8_t x308 = INT8_MAX;
	volatile int32_t t75 = 105823;

	t75 = (x305<=((x306|x307)%x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x310 = -1336854251LL;
	uint8_t x311 = 11U;
	int32_t x312 = INT32_MIN;
	int32_t t76 = 125;

	t76 = (x309<=((x310|x311)%x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x313 = UINT32_MAX;
	int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MAX;
	volatile int32_t t77 = 11;

	t77 = (x313<=((x314|x315)%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = INT64_MIN;
	uint8_t x319 = 94U;
	int32_t x320 = -1;
	int32_t t78 = -1;

	t78 = (x317<=((x318|x319)%x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x321 = -1;
	int32_t x322 = 0;
	int64_t x323 = -34281957227337LL;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t79 = 80;

	t79 = (x321<=((x322|x323)%x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 17092U;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t x328 = INT32_MAX;
	static int32_t t80 = -14671;

	t80 = (x325<=((x326|x327)%x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 1357513U;
	int32_t x332 = 204546;
	volatile int32_t t81 = -9188443;

	t81 = (x329<=((x330|x331)%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int64_t x334 = 13488210139291LL;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MAX;

	t82 = (x333<=((x334|x335)%x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = -1LL;
	int64_t x338 = -61029712316702LL;
	int64_t x339 = INT64_MIN;
	static uint8_t x340 = 2U;
	volatile int32_t t83 = 4035566;

	t83 = (x337<=((x338|x339)%x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x342 = 3U;
	int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t84 = -55419641;

	t84 = (x341<=((x342|x343)%x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = -1;
	int64_t x346 = INT64_MAX;
	int8_t x348 = INT8_MIN;

	t85 = (x345<=((x346|x347)%x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = -148911532376LL;
	int16_t x351 = INT16_MIN;
	volatile uint8_t x352 = 22U;
	int32_t t86 = 130305;

	t86 = (x349<=((x350|x351)%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x354 = UINT8_MAX;
	int8_t x355 = -1;
	int8_t x356 = -1;
	int32_t t87 = 2;

	t87 = (x353<=((x354|x355)%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t t88 = 233;

	t88 = (x357<=((x358|x359)%x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = 11708;
	volatile int16_t x362 = 0;
	volatile uint8_t x363 = UINT8_MAX;
	volatile int32_t t89 = -1;

	t89 = (x361<=((x362|x363)%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x367 = 120;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = 5169796;

	t90 = (x365<=((x366|x367)%x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x371 = -1;
	volatile int32_t t91 = -12;

	t91 = (x369<=((x370|x371)%x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = -1LL;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = -3295;
	int32_t x376 = -1;
	int32_t t92 = -4;

	t92 = (x373<=((x374|x375)%x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = 17U;
	int32_t x379 = INT32_MIN;
	int32_t x380 = -19;
	volatile int32_t t93 = 7611713;

	t93 = (x377<=((x378|x379)%x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = 197108236269248726LL;
	int16_t x382 = -1;
	uint32_t x383 = 110U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t94 = 7;

	t94 = (x381<=((x382|x383)%x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x385 = INT32_MAX;
	uint16_t x386 = 89U;
	int64_t x387 = INT64_MIN;
	static volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t95 = 0;

	t95 = (x385<=((x386|x387)%x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 3U;
	static int8_t x390 = -1;
	volatile uint16_t x391 = 103U;
	static uint16_t x392 = 1042U;
	volatile int32_t t96 = -1;

	t96 = (x389<=((x390|x391)%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	static volatile int32_t x396 = -14459613;

	t97 = (x393<=((x394|x395)%x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x397 = 129007877U;
	int32_t t98 = 537;

	t98 = (x397<=((x398|x399)%x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	volatile int64_t x403 = INT64_MIN;
	uint64_t x404 = UINT64_MAX;
	static int32_t t99 = -5;

	t99 = (x401<=((x402|x403)%x404));

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

