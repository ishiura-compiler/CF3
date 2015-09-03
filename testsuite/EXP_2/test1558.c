#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 20720U;
static int32_t t2 = -4196;
static volatile int32_t t3 = -116592;
static int8_t x18 = INT8_MIN;
int8_t x27 = -20;
static uint64_t t7 = 7LLU;
static uint64_t t8 = 43769280LLU;
int16_t x54 = INT16_MIN;
volatile uint64_t x59 = 103812925919651842LLU;
int16_t x62 = INT16_MIN;
volatile int8_t x63 = INT8_MAX;
static int16_t x70 = -7;
uint8_t x77 = 10U;
volatile int32_t t19 = 30002335;
uint16_t x83 = 27340U;
static int8_t x89 = INT8_MIN;
volatile int16_t x90 = -1;
int64_t x94 = -497187468151568LL;
static volatile int64_t t24 = -9943LL;
volatile uint32_t x109 = UINT32_MAX;
static uint16_t x115 = UINT16_MAX;
static int64_t t29 = 1LL;
volatile int16_t x131 = -1;
volatile int16_t x134 = -14802;
volatile int16_t x141 = INT16_MIN;
static int64_t x146 = INT64_MIN;
static volatile int64_t t37 = -518267804907385LL;
int8_t x158 = INT8_MAX;
static int16_t x161 = -1;
int64_t x162 = -20792LL;
volatile int32_t x164 = INT32_MIN;
int64_t x178 = -59341183601193917LL;
int8_t x184 = INT8_MAX;
uint32_t x185 = UINT32_MAX;
int32_t x190 = INT32_MIN;
volatile uint32_t t47 = 23867U;
int64_t x195 = -1LL;
uint8_t x198 = 8U;
int16_t x201 = INT16_MAX;
int64_t t51 = 4179663LL;
uint64_t x222 = UINT64_MAX;
int32_t t55 = -1;
int8_t x225 = -56;
uint32_t x226 = 1999U;
volatile uint8_t x231 = 102U;
static volatile int32_t x237 = INT32_MIN;
uint64_t x238 = UINT64_MAX;
volatile int8_t x239 = 0;
static int64_t x242 = -1LL;
static volatile int32_t t60 = -3973;
static int64_t x248 = INT64_MIN;
int64_t x251 = INT64_MIN;
volatile int64_t t62 = -9729LL;
static int16_t x254 = 621;
volatile uint8_t x271 = 0U;
int64_t x276 = INT64_MAX;
int8_t x283 = INT8_MAX;
uint16_t x285 = 3155U;
static int8_t x288 = 26;
uint8_t x300 = 96U;
static uint64_t t75 = 26355063850LLU;
uint8_t x316 = 4U;
int8_t x317 = INT8_MIN;
uint64_t x318 = UINT64_MAX;
volatile uint64_t t80 = 63901333604316084LLU;
int8_t x326 = -1;
uint16_t x328 = UINT16_MAX;
uint64_t t82 = 250985799620161684LLU;
static uint64_t x333 = 26589597617LLU;
uint64_t x338 = 65480858783LLU;
volatile uint16_t x339 = 12U;
static volatile int32_t t84 = -53;
static int64_t x341 = -1LL;
int16_t x352 = -34;
volatile int32_t t87 = -81604092;
volatile int32_t x353 = INT32_MIN;
int8_t x362 = -13;
int64_t t90 = 65646773681LL;
volatile uint32_t x366 = 800U;
volatile uint64_t t91 = 251LLU;
int8_t x370 = 30;
int16_t x371 = 737;
int16_t x384 = 198;
volatile int32_t t95 = 33673;
int64_t x392 = INT64_MAX;
uint32_t t99 = 17956U;


void f0(void) {
	static int64_t x1 = -364624LL;
	volatile int16_t x2 = INT16_MAX;
	static int16_t x4 = -7;
	int64_t t0 = 1LL;

	t0 = ((x1*(x2<=x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -876118171;
	volatile int32_t x6 = 107906592;
	volatile int32_t x7 = INT32_MIN;
	uint64_t x8 = 16938145343494705LLU;
	uint64_t t1 = 42728674687986707LLU;

	t1 = ((x5*(x6<=x7))&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int64_t x10 = INT64_MIN;
	static int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;

	t2 = ((x9*(x10<=x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	volatile int32_t x16 = -1;

	t3 = ((x13*(x14<=x15))&x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 10U;
	volatile int32_t x19 = INT32_MAX;
	int8_t x20 = -2;
	volatile int32_t t4 = 23526;

	t4 = ((x17*(x18<=x19))&x20);

	if (t4 != 10) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 152722LLU;
	int64_t x22 = 0LL;
	volatile int32_t x23 = -1;
	int32_t x24 = INT32_MIN;
	static uint64_t t5 = 111817523LLU;

	t5 = ((x21*(x22<=x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static int32_t x26 = 181613518;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 3815;

	t6 = ((x25*(x26<=x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x30 = UINT8_MAX;
	static uint8_t x31 = UINT8_MAX;
	volatile uint64_t x32 = UINT64_MAX;

	t7 = ((x29*(x30<=x31))&x32);

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 0U;
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = 2797837191148LLU;

	t8 = ((x33*(x34<=x35))&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MIN;
	volatile uint8_t x38 = 0U;
	volatile int8_t x39 = -1;
	static volatile int64_t x40 = INT64_MAX;
	volatile int64_t t9 = 111586170LL;

	t9 = ((x37*(x38<=x39))&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	uint16_t x42 = 25103U;
	int64_t x43 = 9978LL;
	static int64_t x44 = -498715620LL;
	static volatile int64_t t10 = 885164LL;

	t10 = ((x41*(x42<=x43))&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 1U;
	int16_t x46 = INT16_MIN;
	int32_t x47 = 177195;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 80080216;

	t11 = ((x45*(x46<=x47))&x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 12U;
	uint16_t x50 = 39U;
	static int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -739153;

	t12 = ((x49*(x50<=x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static uint8_t x55 = 3U;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -1502650106336045LL;

	t13 = ((x53*(x54<=x55))&x56);

	if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 14U;
	uint8_t x58 = 86U;
	int64_t x60 = 3680509820LL;
	static volatile int64_t t14 = 1004293256128640LL;

	t14 = ((x57*(x58<=x59))&x60);

	if (t14 != 12LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x64 = 0U;
	volatile int64_t t15 = -127931260976438388LL;

	t15 = ((x61*(x62<=x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -2025674LL;
	uint8_t x66 = 5U;
	int64_t x67 = 54418033LL;
	static volatile int64_t x68 = INT64_MIN;
	int64_t t16 = INT64_MIN;

	t16 = ((x65*(x66<=x67))&x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static int32_t x71 = -1;
	static int8_t x72 = -1;
	static volatile int32_t t17 = INT32_MIN;

	t17 = ((x69*(x70<=x71))&x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x73 = 157221798099LLU;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 1311126LLU;
	uint8_t x76 = UINT8_MAX;
	volatile uint64_t t18 = 10513LLU;

	t18 = ((x73*(x74<=x75))&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = 2958944;
	int16_t x80 = 6991;

	t19 = ((x77*(x78<=x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 2LLU;
	volatile int32_t x82 = INT32_MAX;
	int8_t x84 = -1;
	uint64_t t20 = 1063236273LLU;

	t20 = ((x81*(x82<=x83))&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static int32_t x86 = -1;
	volatile int8_t x87 = 0;
	int16_t x88 = -345;
	volatile int64_t t21 = INT64_MIN;

	t21 = ((x85*(x86<=x87))&x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x91 = 1U;
	static uint16_t x92 = 1U;
	int32_t t22 = 11383;

	t22 = ((x89*(x90<=x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -31;
	int64_t x95 = INT64_MAX;
	static int32_t x96 = INT32_MAX;
	int32_t t23 = -190284;

	t23 = ((x93*(x94<=x95))&x96);

	if (t23 != 2147483617) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 348;
	uint64_t x98 = 492245715423820LLU;
	int16_t x99 = 1787;
	int64_t x100 = INT64_MIN;

	t24 = ((x97*(x98<=x99))&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 12;
	volatile int16_t x102 = INT16_MIN;
	uint32_t x103 = 7160U;
	static volatile int32_t x104 = INT32_MAX;
	int32_t t25 = -21;

	t25 = ((x101*(x102<=x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int32_t x106 = INT32_MIN;
	int64_t x107 = -20386442474LL;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 3654;

	t26 = ((x105*(x106<=x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	int64_t x111 = INT64_MIN;
	int16_t x112 = -1;
	volatile uint32_t t27 = 15057913U;

	t27 = ((x109*(x110<=x111))&x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 5U;
	int8_t x114 = INT8_MIN;
	int16_t x116 = -13887;
	int32_t t28 = -1022721;

	t28 = ((x113*(x114<=x115))&x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	uint8_t x118 = UINT8_MAX;
	static int16_t x119 = 15;
	static volatile int16_t x120 = 122;

	t29 = ((x117*(x118<=x119))&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -846;
	static int16_t x122 = -1;
	int8_t x123 = 1;
	int64_t x124 = INT64_MIN;
	int64_t t30 = INT64_MIN;

	t30 = ((x121*(x122<=x123))&x124);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 255039U;
	volatile int64_t x126 = INT64_MIN;
	uint32_t x127 = 127058847U;
	static int8_t x128 = INT8_MAX;
	static volatile uint32_t t31 = 4U;

	t31 = ((x125*(x126<=x127))&x128);

	if (t31 != 63U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	volatile int16_t x130 = INT16_MAX;
	static volatile int8_t x132 = -1;
	int32_t t32 = 36880552;

	t32 = ((x129*(x130<=x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	volatile int16_t x135 = 254;
	int16_t x136 = -1;
	static volatile uint32_t t33 = UINT32_MAX;

	t33 = ((x133*(x134<=x135))&x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = INT8_MAX;
	static uint32_t x138 = 594096512U;
	int64_t x139 = 66834262333LL;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = 5;

	t34 = ((x137*(x138<=x139))&x140);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 82953285LLU;
	int64_t x143 = -1586126039688LL;
	static uint64_t x144 = 5LLU;
	volatile uint64_t t35 = 366188422862LLU;

	t35 = ((x141*(x142<=x143))&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -133385LL;
	int8_t x147 = 11;
	static volatile int16_t x148 = 0;
	int64_t t36 = -95473602LL;

	t36 = ((x145*(x146<=x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -28843861LL;
	int16_t x150 = -513;
	int16_t x151 = -1;
	volatile int8_t x152 = INT8_MIN;

	t37 = ((x149*(x150<=x151))&x152);

	if (t37 != -28843904LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	volatile uint64_t x154 = 14922752026LLU;
	static uint64_t x155 = 495119588747LLU;
	static int32_t x156 = -400471;
	int32_t t38 = 751842;

	t38 = ((x153*(x154<=x155))&x156);

	if (t38 != 58281) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x159 = 27914501279504885LLU;
	static volatile uint16_t x160 = 3U;
	int32_t t39 = 751;

	t39 = ((x157*(x158<=x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x163 = INT32_MAX;
	static volatile int32_t t40 = INT32_MIN;

	t40 = ((x161*(x162<=x163))&x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 0;
	volatile int16_t x166 = 15;
	static int8_t x167 = INT8_MIN;
	int8_t x168 = -1;
	int32_t t41 = -3881;

	t41 = ((x165*(x166<=x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 3;
	uint64_t x170 = 6585036122LLU;
	static int64_t x171 = 21345LL;
	uint8_t x172 = 0U;
	volatile int32_t t42 = 910;

	t42 = ((x169*(x170<=x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -2273751LL;
	int64_t x174 = INT64_MIN;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = 1;
	static int64_t t43 = 2228545877214273669LL;

	t43 = ((x173*(x174<=x175))&x176);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 3;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = INT64_MIN;
	int64_t t44 = -108LL;

	t44 = ((x177*(x178<=x179))&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	int64_t x182 = -5LL;
	int64_t x183 = -1118LL;
	volatile int32_t t45 = -89550;

	t45 = ((x181*(x182<=x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 221LLU;
	int16_t x187 = -12747;
	int32_t x188 = INT32_MIN;
	uint32_t t46 = 28U;

	t46 = ((x185*(x186<=x187))&x188);

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 1908U;
	uint16_t x191 = 4U;
	uint32_t x192 = 140579U;

	t47 = ((x189*(x190<=x191))&x192);

	if (t47 != 1312U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -11715;
	int64_t x194 = INT64_MIN;
	uint64_t x196 = 137LLU;
	volatile uint64_t t48 = 1047916682LLU;

	t48 = ((x193*(x194<=x195))&x196);

	if (t48 != 9LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	static int16_t x199 = INT16_MIN;
	uint8_t x200 = 16U;
	int32_t t49 = 13917203;

	t49 = ((x197*(x198<=x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	int32_t x203 = -1;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -910577589LL;

	t50 = ((x201*(x202<=x203))&x204);

	if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int32_t x206 = INT32_MAX;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = -1LL;

	t51 = ((x205*(x206<=x207))&x208);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	volatile int16_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	static int64_t t52 = 49395762221738777LL;

	t52 = ((x209*(x210<=x211))&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	static uint32_t x214 = UINT32_MAX;
	int32_t x215 = 1;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -5;

	t53 = ((x213*(x214<=x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static int32_t x218 = 2457108;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = 447040U;
	volatile uint32_t t54 = 2793U;

	t54 = ((x217*(x218<=x219))&x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = 5;
	volatile int8_t x223 = INT8_MAX;
	static int8_t x224 = INT8_MIN;

	t55 = ((x221*(x222<=x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x227 = INT64_MIN;
	uint64_t x228 = 47823LLU;
	uint64_t t56 = 3628240916649LLU;

	t56 = ((x225*(x226<=x227))&x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	static uint64_t x230 = UINT64_MAX;
	volatile int64_t x232 = INT64_MIN;
	static int64_t t57 = 169277227LL;

	t57 = ((x229*(x230<=x231))&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	static volatile int8_t x234 = INT8_MIN;
	uint16_t x235 = 2197U;
	volatile int8_t x236 = INT8_MIN;
	static int32_t t58 = 0;

	t58 = ((x233*(x234<=x235))&x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = 1;

	t59 = ((x237*(x238<=x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int16_t x243 = INT16_MIN;
	uint8_t x244 = 9U;

	t60 = ((x241*(x242<=x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = 260;
	static int64_t x247 = -1LL;
	int64_t t61 = -1727373LL;

	t61 = ((x245*(x246<=x247))&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 1U;
	int8_t x250 = INT8_MIN;
	int64_t x252 = -10LL;

	t62 = ((x249*(x250<=x251))&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -20;
	static volatile uint64_t x255 = UINT64_MAX;
	uint64_t x256 = 136995170506319LLU;
	volatile uint64_t t63 = 220118973877LLU;

	t63 = ((x253*(x254<=x255))&x256);

	if (t63 != 136995170506316LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile int8_t x258 = INT8_MIN;
	static volatile int32_t x259 = INT32_MIN;
	int16_t x260 = 0;
	int32_t t64 = -8156;

	t64 = ((x257*(x258<=x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 1;
	static uint16_t x262 = 254U;
	int64_t x263 = INT64_MIN;
	static uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t65 = 4U;

	t65 = ((x261*(x262<=x263))&x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = INT32_MIN;
	uint32_t x268 = 143041U;
	uint32_t t66 = 12U;

	t66 = ((x265*(x266<=x267))&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	int8_t x272 = -1;
	int32_t t67 = -16727298;

	t67 = ((x269*(x270<=x271))&x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x274 = 9039U;
	volatile uint64_t x275 = UINT64_MAX;
	volatile int64_t t68 = 987938875709292859LL;

	t68 = ((x273*(x274<=x275))&x276);

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MIN;
	static volatile uint32_t x279 = 14U;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t69 = 632LLU;

	t69 = ((x277*(x278<=x279))&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	volatile uint64_t x282 = 14141569LLU;
	int8_t x284 = 3;
	volatile int32_t t70 = -1554;

	t70 = ((x281*(x282<=x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	static uint16_t x287 = 23U;
	int32_t t71 = -463;

	t71 = ((x285*(x286<=x287))&x288);

	if (t71 != 18) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	static int64_t x291 = 32341443044460LL;
	volatile uint64_t x292 = UINT64_MAX;
	static uint64_t t72 = 142792294391279400LLU;

	t72 = ((x289*(x290<=x291))&x292);

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 50U;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = -378;
	int64_t x296 = -329077691116590LL;
	volatile int64_t t73 = -8LL;

	t73 = ((x293*(x294<=x295))&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 295;
	static int8_t x298 = -1;
	static int32_t x299 = -975403;
	volatile int32_t t74 = -6;

	t74 = ((x297*(x298<=x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 123U;
	volatile int8_t x302 = -1;
	static int32_t x303 = -1;
	volatile uint64_t x304 = 8117436949667145LLU;

	t75 = ((x301*(x302<=x303))&x304);

	if (t75 != 73LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -61;
	static uint32_t x306 = UINT32_MAX;
	static int64_t x307 = -1LL;
	int64_t x308 = -489588LL;
	volatile int64_t t76 = -88590228263737LL;

	t76 = ((x305*(x306<=x307))&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = 59859;
	static volatile uint64_t x310 = UINT64_MAX;
	uint64_t x311 = 1272064041974485LLU;
	static volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -194988;

	t77 = ((x309*(x310<=x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -32415;
	int8_t x314 = -1;
	uint16_t x315 = 79U;
	int32_t t78 = -193933;

	t78 = ((x313*(x314<=x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x319 = -1LL;
	uint32_t x320 = 0U;
	uint32_t t79 = 1052U;

	t79 = ((x317*(x318<=x319))&x320);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x321 = UINT64_MAX;
	uint32_t x322 = 412751090U;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;

	t80 = ((x321*(x322<=x323))&x324);

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	int32_t t81 = -1300;

	t81 = ((x325*(x326<=x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 874560424LLU;
	uint16_t x330 = 329U;
	int8_t x331 = -24;
	uint8_t x332 = 0U;

	t82 = ((x329*(x330<=x331))&x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -1;
	uint32_t x335 = 125U;
	static uint8_t x336 = UINT8_MAX;
	volatile uint64_t t83 = 98654179468838806LLU;

	t83 = ((x333*(x334<=x335))&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x340 = 191283;

	t84 = ((x337*(x338<=x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x342 = 36U;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 2U;
	static int64_t t85 = 114687518475LL;

	t85 = ((x341*(x342<=x343))&x344);

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2143114288LLU;
	static int16_t x346 = INT16_MAX;
	uint8_t x347 = UINT8_MAX;
	uint32_t x348 = 1U;
	uint64_t t86 = 14545094830736LLU;

	t86 = ((x345*(x346<=x347))&x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x349 = INT8_MIN;
	uint32_t x350 = 982U;
	volatile int64_t x351 = -1LL;

	t87 = ((x349*(x350<=x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x354 = 1LLU;
	int8_t x355 = INT8_MAX;
	static int16_t x356 = INT16_MIN;
	int32_t t88 = INT32_MIN;

	t88 = ((x353*(x354<=x355))&x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = 49;
	volatile int8_t x359 = INT8_MIN;
	int8_t x360 = -1;
	int32_t t89 = 6;

	t89 = ((x357*(x358<=x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -1LL;
	int8_t x363 = INT8_MIN;
	volatile int8_t x364 = -1;

	t90 = ((x361*(x362<=x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int64_t x367 = 1747989083LL;
	uint64_t x368 = 53204640371LLU;

	t91 = ((x365*(x366<=x367))&x368);

	if (t91 != 25203LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t92 = 205;

	t92 = ((x369*(x370<=x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MIN;
	int32_t x374 = 0;
	uint8_t x375 = 13U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 801241447;

	t93 = ((x373*(x374<=x375))&x376);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = -13;
	int8_t x379 = -1;
	int16_t x380 = INT16_MAX;
	int32_t t94 = 1;

	t94 = ((x377*(x378<=x379))&x380);

	if (t94 != 32640) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 1U;
	uint16_t x382 = 0U;
	int64_t x383 = 1346678655443LL;

	t95 = ((x381*(x382<=x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	static volatile int32_t x386 = INT32_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	uint8_t x388 = UINT8_MAX;
	static int32_t t96 = 87363889;

	t96 = ((x385*(x386<=x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 31U;
	uint16_t x390 = 3U;
	uint8_t x391 = 1U;
	static int64_t t97 = -37824851LL;

	t97 = ((x389*(x390<=x391))&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	int64_t x394 = INT64_MAX;
	uint64_t x395 = 7199119LLU;
	int8_t x396 = INT8_MIN;
	static volatile int64_t t98 = -13921917953LL;

	t98 = ((x393*(x394<=x395))&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 24972;
	int64_t x398 = INT64_MIN;
	static int32_t x399 = INT32_MIN;
	uint32_t x400 = 12877U;

	t99 = ((x397*(x398<=x399))&x400);

	if (t99 != 8204U) { NG(); } else { ; }
	
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

