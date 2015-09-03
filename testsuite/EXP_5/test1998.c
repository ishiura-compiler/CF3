#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int16_t x3 = INT16_MAX;
int32_t x13 = -979679434;
int8_t x14 = INT8_MAX;
int8_t x18 = INT8_MIN;
int32_t t5 = 1;
uint64_t x30 = UINT64_MAX;
int32_t t7 = 944;
int8_t x38 = 1;
uint8_t x47 = 30U;
int64_t x52 = INT64_MIN;
int16_t x57 = 3464;
int16_t x58 = -1;
int8_t x63 = -6;
int32_t t15 = 8451;
int32_t t17 = -1;
int8_t x75 = -1;
uint8_t x87 = UINT8_MAX;
volatile int32_t t21 = 1;
static int32_t t22 = -12677043;
volatile int32_t t25 = 4113298;
volatile int32_t t26 = 992054;
volatile int8_t x109 = -13;
uint16_t x111 = 11U;
static volatile int32_t t27 = 31921;
volatile uint16_t x115 = UINT16_MAX;
int32_t x116 = INT32_MAX;
static volatile int16_t x119 = 86;
volatile uint16_t x120 = 2468U;
volatile uint64_t x122 = UINT64_MAX;
static int64_t x130 = -1LL;
static volatile int32_t t32 = 416645315;
int32_t x134 = -1;
int64_t x142 = -1LL;
int8_t x143 = INT8_MIN;
volatile uint32_t x148 = 215U;
int16_t x156 = INT16_MIN;
int64_t x160 = -1LL;
volatile int64_t x162 = INT64_MIN;
uint16_t x163 = UINT16_MAX;
static int32_t x167 = INT32_MIN;
int32_t x181 = INT32_MIN;
int64_t x190 = INT64_MIN;
volatile int8_t x207 = -1;
uint8_t x208 = UINT8_MAX;
uint32_t x210 = 3481U;
int32_t t53 = 165065624;
int32_t x219 = INT32_MAX;
volatile int32_t t54 = 1270;
uint16_t x225 = UINT16_MAX;
int32_t x228 = -236;
uint32_t x235 = 892735957U;
int8_t x251 = 10;
uint16_t x252 = 1U;
static uint64_t x253 = 996930749045104638LLU;
volatile uint16_t x255 = 43U;
static volatile int16_t x262 = 92;
uint32_t x263 = 8250832U;
volatile int32_t t66 = 32761;
int8_t x269 = INT8_MIN;
uint32_t x270 = UINT32_MAX;
int8_t x277 = 5;
int64_t x280 = -1LL;
static int32_t x282 = INT32_MIN;
int64_t x285 = INT64_MAX;
static volatile int16_t x290 = INT16_MIN;
int32_t x307 = INT32_MIN;
uint16_t x314 = UINT16_MAX;
static uint64_t x317 = 79857974278LLU;
int32_t x320 = -1;
static volatile uint32_t x321 = 1874158U;
int32_t x322 = -102457615;
int64_t x324 = INT64_MAX;
static volatile uint8_t x326 = UINT8_MAX;
int64_t x328 = 0LL;
volatile int32_t t81 = 9;
int16_t x341 = INT16_MIN;
uint8_t x344 = 113U;
volatile uint64_t x348 = 74651434LLU;
volatile int32_t t87 = -671967212;
static int16_t x353 = -1;
int32_t x356 = INT32_MAX;
int32_t t89 = 63819;
int32_t t90 = -513142541;
int64_t x366 = -1LL;
int8_t x368 = INT8_MIN;
static uint32_t x369 = UINT32_MAX;
int8_t x375 = INT8_MAX;
int64_t x376 = INT64_MIN;
volatile int32_t t93 = -10595;
static int16_t x378 = -1;
int64_t x382 = INT64_MIN;
static uint16_t x387 = 402U;
static volatile int32_t t96 = 529583;
int16_t x397 = -256;
static uint64_t x398 = 18434258049413243LLU;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -416182911;

	t0 = (x1<((x2|x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -11;
	uint16_t x6 = UINT16_MAX;
	volatile int64_t x7 = -1090369694868347LL;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 561;

	t1 = (x5<((x6|x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -60;
	volatile int8_t x10 = 7;
	int8_t x11 = -6;
	int64_t x12 = -3LL;
	volatile int32_t t2 = -330222;

	t2 = (x9<((x10|x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = -1;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 264;

	t3 = (x13<((x14|x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MIN;
	volatile uint8_t x19 = UINT8_MAX;
	volatile int16_t x20 = -1;
	volatile int32_t t4 = 750690420;

	t4 = (x17<((x18|x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	uint32_t x22 = 104U;
	volatile int16_t x23 = -1;
	int8_t x24 = INT8_MIN;

	t5 = (x21<((x22|x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 58U;
	int32_t x26 = INT32_MAX;
	static int64_t x27 = -1LL;
	uint64_t x28 = 5732714141476LLU;
	int32_t t6 = -429650;

	t6 = (x25<((x26|x27)&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x31 = 0;
	int8_t x32 = 23;

	t7 = (x29<((x30|x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 800028007613198793LLU;
	volatile int64_t x34 = INT64_MIN;
	int64_t x35 = -40495674572495765LL;
	int16_t x36 = 0;
	int32_t t8 = 28459;

	t8 = (x33<((x34|x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 191818719LLU;
	int8_t x39 = -45;
	int32_t x40 = -744972303;
	int32_t t9 = -8221252;

	t9 = (x37<((x38|x39)&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 4697U;
	static int8_t x42 = -1;
	volatile uint32_t x43 = 1423U;
	volatile uint64_t x44 = 8472348202LLU;
	volatile int32_t t10 = 10;

	t10 = (x41<((x42|x43)&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -54985360345315LL;
	int8_t x46 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -101728;

	t11 = (x45<((x46|x47)&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MAX;
	int32_t x51 = -15;
	static int32_t t12 = 1836391;

	t12 = (x49<((x50|x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 1U;
	int8_t x55 = 0;
	volatile int32_t x56 = 4689195;
	static int32_t t13 = 665025988;

	t13 = (x53<((x54|x55)&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x59 = UINT16_MAX;
	uint32_t x60 = 11U;
	int32_t t14 = 55671;

	t14 = (x57<((x58|x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = -8695459;
	int8_t x62 = INT8_MIN;
	uint16_t x64 = 14238U;

	t15 = (x61<((x62|x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = -1;
	uint8_t x68 = 101U;
	static int32_t t16 = 46;

	t16 = (x65<((x66|x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x70 = 18U;
	static uint8_t x71 = 0U;
	int16_t x72 = INT16_MIN;

	t17 = (x69<((x70|x71)&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = INT32_MIN;
	static int64_t x74 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 52;

	t18 = (x73<((x74|x75)&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	static int32_t x78 = INT32_MIN;
	static volatile int64_t x79 = INT64_MIN;
	uint64_t x80 = 198520LLU;
	int32_t t19 = -1901394;

	t19 = (x77<((x78|x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 80U;
	int64_t x82 = 39701LL;
	int16_t x83 = -1889;
	int64_t x84 = -8326200LL;
	volatile int32_t t20 = -389219;

	t20 = (x81<((x82|x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	volatile int8_t x86 = -1;
	int8_t x88 = -1;

	t21 = (x85<((x86|x87)&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = UINT32_MAX;
	static volatile uint64_t x91 = UINT64_MAX;
	int8_t x92 = INT8_MAX;

	t22 = (x89<((x90|x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = -3LL;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 0U;
	int32_t t23 = -1;

	t23 = (x93<((x94|x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 0U;
	int32_t t24 = -109806;

	t24 = (x97<((x98|x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = -1;
	int32_t x103 = -6;
	int8_t x104 = -19;

	t25 = (x101<((x102|x103)&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 88701U;
	int8_t x108 = INT8_MIN;

	t26 = (x105<((x106|x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	volatile uint64_t x112 = UINT64_MAX;

	t27 = (x109<((x110|x111)&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	static volatile uint8_t x114 = 1U;
	static volatile int32_t t28 = -445864;

	t28 = (x113<((x114|x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	static int32_t x118 = INT32_MAX;
	volatile int32_t t29 = 12770893;

	t29 = (x117<((x118|x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = 7;
	int8_t x123 = -1;
	uint8_t x124 = 14U;
	int32_t t30 = -99635;

	t30 = (x121<((x122|x123)&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int16_t x126 = INT16_MIN;
	static int8_t x127 = -1;
	uint32_t x128 = 6U;
	int32_t t31 = 5;

	t31 = (x125<((x126|x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 1LL;
	volatile int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;

	t32 = (x129<((x130|x131)&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	static int32_t t33 = -149854;

	t33 = (x133<((x134|x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 33LLU;
	uint64_t x138 = 77321399953079LLU;
	uint8_t x139 = 4U;
	uint64_t x140 = 31650334794651LLU;
	int32_t t34 = 925;

	t34 = (x137<((x138|x139)&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t35 = -273;

	t35 = (x141<((x142|x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 407LLU;
	int8_t x146 = INT8_MAX;
	int32_t x147 = 260;
	volatile int32_t t36 = -3;

	t36 = (x145<((x146|x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = INT32_MIN;
	volatile int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -1;

	t37 = (x149<((x150|x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 7U;
	int8_t x154 = -1;
	int32_t x155 = -1989;
	int32_t t38 = -28;

	t38 = (x153<((x154|x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	volatile uint16_t x158 = 32369U;
	int64_t x159 = -1LL;
	int32_t t39 = -30421;

	t39 = (x157<((x158|x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	uint64_t x164 = 8296650LLU;
	volatile int32_t t40 = -87856;

	t40 = (x161<((x162|x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	static int8_t x166 = INT8_MIN;
	int16_t x168 = -1;
	int32_t t41 = -665608113;

	t41 = (x165<((x166|x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 52U;
	int16_t x170 = 1;
	int16_t x171 = -1;
	uint16_t x172 = 9U;
	volatile int32_t t42 = -65233;

	t42 = (x169<((x170|x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = -3;
	volatile uint32_t x175 = 28770U;
	int64_t x176 = 0LL;
	volatile int32_t t43 = -789;

	t43 = (x173<((x174|x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	static int8_t x178 = INT8_MIN;
	volatile uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 38;

	t44 = (x177<((x178|x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MAX;
	static volatile int32_t t45 = -133;

	t45 = (x181<((x182|x183)&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = 1;
	int64_t x186 = 8899505912402LL;
	volatile int16_t x187 = -4;
	uint32_t x188 = UINT32_MAX;
	static volatile int32_t t46 = -58543;

	t46 = (x185<((x186|x187)&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int16_t x191 = 3;
	int8_t x192 = -29;
	static int32_t t47 = -9263;

	t47 = (x189<((x190|x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = UINT32_MAX;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 1417829U;
	static int8_t x196 = -32;
	volatile int32_t t48 = -2832;

	t48 = (x193<((x194|x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MAX;
	int32_t t49 = 360369707;

	t49 = (x197<((x198|x199)&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -946694654LL;
	uint32_t x202 = 16767U;
	uint32_t x203 = 1788564U;
	int8_t x204 = -32;
	volatile int32_t t50 = -2964404;

	t50 = (x201<((x202|x203)&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 1191U;
	int64_t x206 = INT64_MIN;
	static int32_t t51 = 3969;

	t51 = (x205<((x206|x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint16_t x211 = 4130U;
	static uint8_t x212 = 17U;
	int32_t t52 = -429835;

	t52 = (x209<((x210|x211)&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 711692855;
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = -1;
	int8_t x216 = INT8_MIN;

	t53 = (x213<((x214|x215)&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -134766089;
	int16_t x220 = INT16_MIN;

	t54 = (x217<((x218|x219)&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 27137LLU;
	int64_t x222 = -2846LL;
	int64_t x223 = -1259925897619955539LL;
	uint64_t x224 = 2414828554262754095LLU;
	int32_t t55 = 124882013;

	t55 = (x221<((x222|x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x226 = -1;
	volatile int64_t x227 = 1198015038468537LL;
	int32_t t56 = 42070917;

	t56 = (x225<((x226|x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	static volatile uint8_t x230 = 28U;
	int16_t x231 = 31;
	uint32_t x232 = 204U;
	int32_t t57 = 21009532;

	t57 = (x229<((x230|x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 11831LL;
	int64_t x234 = INT64_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 8225883;

	t58 = (x233<((x234|x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 230986648;
	int8_t x238 = INT8_MAX;
	static volatile int16_t x239 = 0;
	uint64_t x240 = 3948872629488LLU;
	static volatile int32_t t59 = -12626435;

	t59 = (x237<((x238|x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 29U;
	int32_t x242 = -1;
	int8_t x243 = -4;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -1021;

	t60 = (x241<((x242|x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	static int32_t x247 = INT32_MIN;
	uint64_t x248 = 487750215057648064LLU;
	volatile int32_t t61 = -214561350;

	t61 = (x245<((x246|x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -171260790110999LL;
	static int16_t x250 = -903;
	volatile int32_t t62 = 1;

	t62 = (x249<((x250|x251)&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MAX;
	volatile int64_t x256 = INT64_MIN;
	int32_t t63 = 778605312;

	t63 = (x253<((x254|x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -3;
	int32_t x258 = -1;
	int16_t x259 = 1;
	int32_t x260 = INT32_MAX;
	int32_t t64 = -389267308;

	t64 = (x257<((x258|x259)&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -228915;

	t65 = (x261<((x262|x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	uint16_t x266 = 11U;
	int8_t x267 = INT8_MAX;
	volatile int32_t x268 = INT32_MIN;

	t66 = (x265<((x266|x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = 1;
	int32_t t67 = -7257687;

	t67 = (x269<((x270|x271)&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int64_t x274 = -1LL;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 51;

	t68 = (x273<((x274|x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -1;
	int16_t x279 = -1;
	int32_t t69 = -296581859;

	t69 = (x277<((x278|x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	volatile int8_t x283 = INT8_MAX;
	int16_t x284 = -1538;
	int32_t t70 = 0;

	t70 = (x281<((x282|x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -82067995445LL;
	int16_t x287 = 121;
	uint32_t x288 = UINT32_MAX;
	static volatile int32_t t71 = 993533;

	t71 = (x285<((x286|x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	int64_t x291 = INT64_MIN;
	static uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = -26695530;

	t72 = (x289<((x290|x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 2843;
	int64_t x294 = 1367488531385044LL;
	int64_t x295 = 6868678787LL;
	volatile int8_t x296 = 0;
	int32_t t73 = 4378449;

	t73 = (x293<((x294|x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 410402048349908LLU;
	static int8_t x299 = INT8_MIN;
	uint16_t x300 = 13657U;
	volatile int32_t t74 = -708962;

	t74 = (x297<((x298|x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint8_t x302 = 5U;
	uint64_t x303 = 276LLU;
	uint16_t x304 = 7U;
	volatile int32_t t75 = -2062895;

	t75 = (x301<((x302|x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 0U;
	int64_t x306 = INT64_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t76 = 10;

	t76 = (x305<((x306|x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t77 = 315109237;

	t77 = (x309<((x310|x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	volatile int32_t x315 = -1;
	static int32_t x316 = -1;
	volatile int32_t t78 = -114769;

	t78 = (x313<((x314|x315)&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x318 = INT16_MAX;
	volatile uint64_t x319 = 15LLU;
	static int32_t t79 = -722769095;

	t79 = (x317<((x318|x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x323 = -1;
	volatile int32_t t80 = -1803247;

	t80 = (x321<((x322|x323)&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	volatile int64_t x327 = INT64_MIN;

	t81 = (x325<((x326|x327)&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 2221U;
	int64_t x330 = 54116204637LL;
	int64_t x331 = INT64_MAX;
	int16_t x332 = 4267;
	static volatile int32_t t82 = 1756607;

	t82 = (x329<((x330|x331)&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 8953805LLU;
	int64_t x334 = 212423077170943484LL;
	static volatile uint64_t x335 = 775978049168745959LLU;
	uint8_t x336 = UINT8_MAX;
	int32_t t83 = -64008032;

	t83 = (x333<((x334|x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 75;
	volatile int32_t x338 = INT32_MIN;
	static int32_t x339 = INT32_MAX;
	uint64_t x340 = 13508755330LLU;
	int32_t t84 = 90928196;

	t84 = (x337<((x338|x339)&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = 115U;
	static uint64_t x343 = 17802899LLU;
	static int32_t t85 = -292003548;

	t85 = (x341<((x342|x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static int64_t x346 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	static volatile int32_t t86 = 43;

	t86 = (x345<((x346|x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MAX;
	static uint16_t x352 = UINT16_MAX;

	t87 = (x349<((x350|x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MAX;
	static int64_t x355 = INT64_MIN;
	volatile int32_t t88 = -22103089;

	t88 = (x353<((x354|x355)&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	volatile uint32_t x358 = 72U;
	uint32_t x359 = 7U;
	int64_t x360 = INT64_MAX;

	t89 = (x357<((x358|x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 3247389792LLU;
	int16_t x362 = 5;
	volatile int64_t x363 = INT64_MIN;
	uint64_t x364 = 7111054683704595127LLU;

	t90 = (x361<((x362|x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	static uint32_t x367 = UINT32_MAX;
	int32_t t91 = -2;

	t91 = (x365<((x366|x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = 45610065LLU;
	uint32_t x371 = 77258U;
	volatile int8_t x372 = -1;
	static int32_t t92 = -13;

	t92 = (x369<((x370|x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = 994;

	t93 = (x373<((x374|x375)&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int32_t x379 = INT32_MIN;
	static uint32_t x380 = UINT32_MAX;
	int32_t t94 = -918;

	t94 = (x377<((x378|x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 2U;
	static int32_t x383 = -132084568;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = 107809870;

	t95 = (x381<((x382|x383)&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -5;
	volatile uint32_t x386 = UINT32_MAX;
	int16_t x388 = -1732;

	t96 = (x385<((x386|x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 14143U;
	static uint64_t x390 = 403875621313091122LLU;
	volatile int16_t x391 = -117;
	static uint8_t x392 = UINT8_MAX;
	static volatile int32_t t97 = 0;

	t97 = (x389<((x390|x391)&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 742;
	int8_t x394 = -58;
	static volatile uint32_t x395 = 6U;
	int32_t x396 = 521172564;
	volatile int32_t t98 = -214167;

	t98 = (x393<((x394|x395)&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x399 = UINT16_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 32344;

	t99 = (x397<((x398|x399)&x400));

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

