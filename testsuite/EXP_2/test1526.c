#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 24;
uint16_t x6 = UINT16_MAX;
int16_t x7 = INT16_MIN;
uint64_t x14 = 1449888620LLU;
uint32_t x15 = 151969107U;
static uint64_t x19 = 13LLU;
volatile uint64_t t3 = 280LLU;
uint64_t t4 = 1092274288988LLU;
uint64_t x27 = 254078711335LLU;
int64_t x29 = 7LL;
int8_t x32 = INT8_MIN;
uint64_t x35 = 642527613606132012LLU;
int32_t t7 = 3034;
volatile int64_t t8 = 35553483280881694LL;
volatile int16_t x42 = 14306;
static int64_t x44 = -1LL;
int8_t x48 = 55;
int16_t x52 = 232;
uint64_t x59 = 194811632431LLU;
int8_t x67 = -1;
int64_t x71 = INT64_MAX;
volatile int32_t t16 = 2150;
volatile int64_t x73 = -1LL;
volatile uint16_t x76 = UINT16_MAX;
int16_t x78 = 2109;
volatile int64_t x86 = INT64_MIN;
int8_t x88 = INT8_MIN;
volatile uint8_t x93 = 0U;
int32_t x94 = INT32_MIN;
int32_t x97 = -1;
volatile int32_t x107 = -16561244;
int64_t x108 = 61581701545883585LL;
int64_t x109 = -788587905168933LL;
int16_t x114 = 412;
volatile int16_t x115 = -1;
volatile int64_t t27 = 4479LL;
uint32_t x120 = UINT32_MAX;
uint16_t x131 = 305U;
volatile int32_t t31 = 0;
volatile int32_t x138 = -1;
int16_t x139 = -137;
volatile int32_t t33 = 4;
uint32_t t34 = 293933U;
volatile int16_t x146 = INT16_MAX;
static int16_t x150 = INT16_MIN;
uint32_t x151 = 57450U;
static uint8_t x163 = 41U;
volatile uint32_t x169 = 455211U;
int8_t x170 = -59;
uint32_t x176 = UINT32_MAX;
int16_t x186 = INT16_MIN;
volatile uint64_t t44 = 1881LLU;
int32_t t45 = -12710;
static int16_t x204 = INT16_MAX;
static int32_t x206 = INT32_MAX;
int32_t x207 = INT32_MIN;
static int8_t x208 = INT8_MAX;
static volatile int64_t t49 = -150343991556932LL;
int32_t x214 = INT32_MIN;
static uint32_t t51 = 42037804U;
uint16_t x223 = UINT16_MAX;
int32_t x224 = 7338;
uint32_t t52 = 888U;
static uint8_t x233 = 5U;
static int16_t x236 = INT16_MIN;
static uint8_t x237 = 9U;
uint32_t x247 = UINT32_MAX;
uint16_t x250 = 1854U;
volatile int32_t t58 = 1;
static uint8_t x254 = 13U;
volatile int16_t x259 = -1;
uint32_t x260 = 15U;
uint32_t x262 = 567U;
static volatile int64_t t62 = 6721525316LL;
volatile uint64_t t63 = 8LLU;
static volatile int32_t t66 = 221;
static int64_t t67 = 30318369516785LL;
int32_t t68 = 949;
volatile int16_t x296 = INT16_MIN;
int64_t x298 = INT64_MAX;
int64_t x307 = -2116299LL;
int64_t x308 = INT64_MAX;
volatile uint8_t x312 = 117U;
int64_t x313 = -1LL;
int32_t x315 = -1;
uint16_t x318 = UINT16_MAX;
uint32_t x319 = 13886536U;
volatile int64_t t75 = -148674854519099049LL;
static int16_t x323 = INT16_MIN;
int32_t t76 = -26415;
static int64_t x330 = INT64_MIN;
volatile int16_t x334 = INT16_MAX;
uint8_t x335 = 4U;
volatile int64_t x339 = 5997804203490429LL;
uint64_t x350 = UINT64_MAX;
static int64_t x364 = INT64_MAX;
int64_t t85 = 738443752LL;
int64_t x366 = INT64_MAX;
int8_t x367 = INT8_MAX;
int64_t x369 = INT64_MIN;
int32_t x379 = INT32_MIN;
volatile int32_t t90 = 0;
volatile int8_t x387 = -1;
int32_t x392 = -1;
int32_t t93 = -1;
volatile uint32_t x397 = 43U;
static int8_t x398 = INT8_MIN;
int16_t x404 = INT16_MIN;
volatile uint64_t x406 = 143660457571760256LLU;
int64_t x407 = -97LL;
int16_t x413 = 0;
uint16_t x418 = 2U;
static int32_t t99 = -1;


void f0(void) {
	uint16_t x1 = 26011U;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = 46450U;
	static volatile int32_t x4 = -5140;
	int32_t t0 = 25166396;

	t0 = ((x1+(x2<=x3))%x4);

	if (t0 != 311) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x8 = 1061073468591398LLU;
	volatile uint64_t t1 = 172593471813415527LLU;

	t1 = ((x5+(x6<=x7))%x8);

	if (t1 != 24LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MAX;
	uint16_t x16 = 2524U;
	volatile int32_t t2 = 77;

	t2 = ((x13+(x14<=x15))%x16);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	uint64_t x20 = 12068066581636765LLU;

	t3 = ((x17+(x18<=x19))%x20);

	if (t3 != 6738336968541928LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 9012;
	static volatile int32_t x22 = 51147;
	static volatile uint8_t x23 = 3U;
	static uint64_t x24 = UINT64_MAX;

	t4 = ((x21+(x22<=x23))%x24);

	if (t4 != 9012LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 15168U;
	uint8_t x26 = UINT8_MAX;
	volatile int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 168755781609979LL;

	t5 = ((x25+(x26<=x27))%x28);

	if (t5 != 15169LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 84413522LLU;
	volatile int8_t x31 = INT8_MIN;
	int64_t t6 = 142787808231918250LL;

	t6 = ((x29+(x30<=x31))%x32);

	if (t6 != 8LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	uint8_t x34 = 20U;
	int32_t x36 = 1042291;

	t7 = ((x33+(x34<=x35))%x36);

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	uint16_t x40 = 15U;

	t8 = ((x37+(x38<=x39))%x40);

	if (t8 != 7LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 0U;
	static int64_t x43 = -1LL;
	volatile int64_t t9 = 517200038LL;

	t9 = ((x41+(x42<=x43))%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 339132984U;
	static int32_t x46 = -1610;
	volatile int64_t x47 = 2LL;
	uint32_t t10 = 43121760U;

	t10 = ((x45+(x46<=x47))%x48);

	if (t10 != 15U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 10U;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -7979271866LL;
	int32_t t11 = 4107299;

	t11 = ((x49+(x50<=x51))%x52);

	if (t11 != 10) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = -1;
	uint8_t x54 = 6U;
	int64_t x55 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t12 = 4626130;

	t12 = ((x53+(x54<=x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	volatile int64_t x58 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t13 = 3809;

	t13 = ((x57+(x58<=x59))%x60);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -16;
	static volatile int16_t x62 = 3;
	static uint64_t x63 = 341091661809LLU;
	int8_t x64 = 5;
	static int32_t t14 = -4060100;

	t14 = ((x61+(x62<=x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1815478224U;
	volatile uint64_t x66 = 11027LLU;
	uint16_t x68 = UINT16_MAX;
	uint32_t t15 = 63197821U;

	t15 = ((x65+(x66<=x67))%x68);

	if (t15 != 27655U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;
	static uint64_t x70 = 245230574638LLU;
	int16_t x72 = -1;

	t16 = ((x69+(x70<=x71))%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x74 = 182803;
	int8_t x75 = -9;
	int64_t t17 = 4037531218LL;

	t17 = ((x73+(x74<=x75))%x76);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = -1LL;
	uint8_t x79 = 62U;
	uint64_t x80 = 160LLU;
	uint64_t t18 = 12124901LLU;

	t18 = ((x77+(x78<=x79))%x80);

	if (t18 != 95LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	uint16_t x82 = UINT16_MAX;
	int32_t x83 = INT32_MIN;
	volatile uint64_t x84 = 1479LLU;
	uint64_t t19 = 13784778LLU;

	t19 = ((x81+(x82<=x83))%x84);

	if (t19 != 102LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	static uint16_t x87 = UINT16_MAX;
	int32_t t20 = -177;

	t20 = ((x85+(x86<=x87))%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	volatile uint32_t x91 = 8628444U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t21 = -20;

	t21 = ((x89+(x90<=x91))%x92);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x95 = -53365735078140121LL;
	uint32_t x96 = 6019517U;
	static uint32_t t22 = 123787687U;

	t22 = ((x93+(x94<=x95))%x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = 37U;
	uint64_t x99 = 63367610245738165LLU;
	int8_t x100 = INT8_MIN;
	volatile int32_t t23 = -10201;

	t23 = ((x97+(x98<=x99))%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 48U;
	volatile int8_t x102 = INT8_MAX;
	uint16_t x103 = UINT16_MAX;
	static int64_t x104 = -51517607545644265LL;
	volatile int64_t t24 = 964065910361499LL;

	t24 = ((x101+(x102<=x103))%x104);

	if (t24 != 49LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 22U;
	volatile uint16_t x106 = UINT16_MAX;
	volatile int64_t t25 = 51LL;

	t25 = ((x105+(x106<=x107))%x108);

	if (t25 != 22LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	static uint32_t x112 = UINT32_MAX;
	int64_t t26 = -26633247371944877LL;

	t26 = ((x109+(x110<=x111))%x112);

	if (t26 != -1845035867LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int64_t x116 = 686LL;

	t27 = ((x113+(x114<=x115))%x116);

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	volatile int8_t x118 = -1;
	static int16_t x119 = INT16_MAX;
	uint32_t t28 = 3U;

	t28 = ((x117+(x118<=x119))%x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = UINT64_MAX;
	static uint16_t x122 = UINT16_MAX;
	static uint16_t x123 = 10U;
	int64_t x124 = INT64_MAX;
	volatile uint64_t t29 = 5LLU;

	t29 = ((x121+(x122<=x123))%x124);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	static int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 940811551476114978LLU;

	t30 = ((x125+(x126<=x127))%x128);

	if (t30 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = UINT8_MAX;
	int64_t x130 = INT64_MAX;
	uint16_t x132 = 557U;

	t31 = ((x129+(x130<=x131))%x132);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = -1;
	static volatile int32_t x134 = INT32_MIN;
	uint16_t x135 = 1763U;
	static volatile int8_t x136 = 24;
	volatile int32_t t32 = -7377749;

	t32 = ((x133+(x134<=x135))%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 371U;
	uint16_t x140 = UINT16_MAX;

	t33 = ((x137+(x138<=x139))%x140);

	if (t33 != 371) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = UINT32_MAX;

	t34 = ((x141+(x142<=x143))%x144);

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	int8_t x147 = INT8_MAX;
	uint32_t x148 = 85460U;
	uint32_t t35 = 2583U;

	t35 = ((x145+(x146<=x147))%x148);

	if (t35 != 4075U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x149 = INT32_MIN;
	int32_t x152 = -1;
	int32_t t36 = -6901598;

	t36 = ((x149+(x150<=x151))%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = -47;
	static volatile int64_t x154 = -1LL;
	int8_t x155 = -1;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int32_t t37 = -1163;

	t37 = ((x153+(x154<=x155))%x156);

	if (t37 != -46) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MAX;
	uint8_t x160 = UINT8_MAX;
	static volatile int32_t t38 = -53325005;

	t38 = ((x157+(x158<=x159))%x160);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 188U;
	static int64_t x162 = INT64_MAX;
	int64_t x164 = 2224695506188LL;
	int64_t t39 = -2039400180140084LL;

	t39 = ((x161+(x162<=x163))%x164);

	if (t39 != 188LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x171 = 618415U;
	uint32_t x172 = 1063893048U;
	volatile uint32_t t40 = 546U;

	t40 = ((x169+(x170<=x171))%x172);

	if (t40 != 455211U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = 84721LL;
	int32_t x174 = INT32_MIN;
	int32_t x175 = -1;
	volatile int64_t t41 = 304376495LL;

	t41 = ((x173+(x174<=x175))%x176);

	if (t41 != 84722LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x181 = 1069238002466300364LLU;
	int16_t x182 = 1;
	uint32_t x183 = 4901183U;
	volatile int16_t x184 = INT16_MIN;
	static volatile uint64_t t42 = 199654557218380043LLU;

	t42 = ((x181+(x182<=x183))%x184);

	if (t42 != 1069238002466300365LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = INT8_MIN;
	int64_t x187 = -3170LL;
	static volatile int32_t x188 = INT32_MIN;
	volatile int32_t t43 = 679;

	t43 = ((x185+(x186<=x187))%x188);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x189 = 165743791610LLU;
	static int16_t x190 = 86;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MAX;

	t44 = ((x189+(x190<=x191))%x192);

	if (t44 != 165743791610LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MAX;
	int64_t x195 = INT64_MIN;
	int16_t x196 = -57;

	t45 = ((x193+(x194<=x195))%x196);

	if (t45 != -41) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x197 = 54U;
	uint8_t x198 = UINT8_MAX;
	static int32_t x199 = -1;
	uint8_t x200 = 9U;
	volatile int32_t t46 = 30;

	t46 = ((x197+(x198<=x199))%x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MAX;
	int32_t x203 = -1;
	static int64_t t47 = -9176087LL;

	t47 = ((x201+(x202<=x203))%x204);

	if (t47 != -8LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MIN;
	int64_t t48 = 30500220854954LL;

	t48 = ((x205+(x206<=x207))%x208);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -7016LL;
	volatile int16_t x210 = INT16_MIN;
	volatile int8_t x211 = INT8_MIN;
	volatile int64_t x212 = -1LL;

	t49 = ((x209+(x210<=x211))%x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MIN;
	uint32_t x215 = 11U;
	int8_t x216 = 1;
	int32_t t50 = -3;

	t50 = ((x213+(x214<=x215))%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	static volatile int8_t x218 = 3;
	volatile int8_t x219 = -1;
	uint32_t x220 = UINT32_MAX;

	t51 = ((x217+(x218<=x219))%x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 13U;
	int32_t x222 = INT32_MIN;

	t52 = ((x221+(x222<=x223))%x224);

	if (t52 != 14U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x225 = 750552514141841LLU;
	volatile int64_t x226 = INT64_MIN;
	static uint8_t x227 = UINT8_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile uint64_t t53 = 1085284080794059LLU;

	t53 = ((x225+(x226<=x227))%x228);

	if (t53 != 59697LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x229 = 721748;
	static volatile uint8_t x230 = 84U;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = 11U;
	volatile int32_t t54 = -1150564;

	t54 = ((x229+(x230<=x231))%x232);

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = INT16_MAX;
	int32_t x235 = -1;
	volatile int32_t t55 = -93240;

	t55 = ((x233+(x234<=x235))%x236);

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x238 = INT32_MAX;
	volatile int8_t x239 = -1;
	volatile int32_t x240 = INT32_MIN;
	static int32_t t56 = -3952;

	t56 = ((x237+(x238<=x239))%x240);

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x245 = 2365467860LLU;
	int64_t x246 = INT64_MIN;
	int16_t x248 = 17;
	uint64_t t57 = 64592545326724LLU;

	t57 = ((x245+(x246<=x247))%x248);

	if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x249 = 23U;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;

	t58 = ((x249+(x250<=x251))%x252);

	if (t58 != 23) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x255 = INT32_MIN;
	volatile uint8_t x256 = 8U;
	static int32_t t59 = 445;

	t59 = ((x253+(x254<=x255))%x256);

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	volatile int64_t t60 = 34294009621190462LL;

	t60 = ((x257+(x258<=x259))%x260);

	if (t60 != -7LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MAX;
	int8_t x263 = 1;
	int8_t x264 = INT8_MIN;
	int64_t t61 = 14386758301LL;

	t61 = ((x261+(x262<=x263))%x264);

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	volatile int64_t x268 = INT64_MAX;

	t62 = ((x265+(x266<=x267))%x268);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 959LLU;
	volatile uint64_t x270 = 670091675162138LLU;
	int16_t x271 = -1;
	int32_t x272 = -1;

	t63 = ((x269+(x270<=x271))%x272);

	if (t63 != 960LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = INT64_MIN;
	uint16_t x274 = 2937U;
	uint16_t x275 = 112U;
	static int16_t x276 = INT16_MAX;
	volatile int64_t t64 = -866102995356LL;

	t64 = ((x273+(x274<=x275))%x276);

	if (t64 != -8LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MIN;
	static int16_t x280 = INT16_MAX;
	volatile int32_t t65 = -2;

	t65 = ((x277+(x278<=x279))%x280);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = UINT16_MAX;
	uint32_t x282 = 973739U;
	volatile int64_t x283 = INT64_MAX;
	volatile uint8_t x284 = 42U;

	t66 = ((x281+(x282<=x283))%x284);

	if (t66 != 16) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x285 = 1721194578U;
	int16_t x286 = INT16_MAX;
	uint16_t x287 = UINT16_MAX;
	volatile int64_t x288 = INT64_MAX;

	t67 = ((x285+(x286<=x287))%x288);

	if (t67 != 1721194579LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = INT32_MIN;
	volatile int64_t x290 = INT64_MIN;
	int64_t x291 = -3033881681496LL;
	int8_t x292 = -47;

	t68 = ((x289+(x290<=x291))%x292);

	if (t68 != -20) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = 23514256LL;
	int32_t x295 = INT32_MIN;
	volatile uint64_t t69 = 663662099LLU;

	t69 = ((x293+(x294<=x295))%x296);

	if (t69 != 32767LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x297 = UINT8_MAX;
	static volatile int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MAX;
	volatile int32_t t70 = -17905;

	t70 = ((x297+(x298<=x299))%x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 8042742243LLU;
	int64_t x302 = 2LL;
	int8_t x303 = -1;
	volatile uint32_t x304 = 14621699U;
	volatile uint64_t t71 = 33384864436806LLU;

	t71 = ((x301+(x302<=x303))%x304);

	if (t71 != 807793LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MIN;
	static volatile int32_t x306 = INT32_MIN;
	volatile int64_t t72 = -7695153519223469LL;

	t72 = ((x305+(x306<=x307))%x308);

	if (t72 != -2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x309 = UINT32_MAX;
	static int16_t x310 = -1;
	uint8_t x311 = 0U;
	volatile uint32_t t73 = 13639U;

	t73 = ((x309+(x310<=x311))%x312);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x314 = UINT8_MAX;
	int64_t x316 = 882085346658767323LL;
	int64_t t74 = 10194177850LL;

	t74 = ((x313+(x314<=x315))%x316);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = 69LL;
	int16_t x320 = -786;

	t75 = ((x317+(x318<=x319))%x320);

	if (t75 != 70LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MAX;
	volatile int32_t x324 = INT32_MIN;

	t76 = ((x321+(x322<=x323))%x324);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = -1;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = 212U;
	volatile uint32_t t77 = 261U;

	t77 = ((x325+(x326<=x327))%x328);

	if (t77 != 180U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = 12829168LLU;
	int8_t x331 = 41;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t78 = 638LLU;

	t78 = ((x329+(x330<=x331))%x332);

	if (t78 != 12829169LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x333 = INT64_MIN;
	int16_t x336 = -1;
	int64_t t79 = 56LL;

	t79 = ((x333+(x334<=x335))%x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -3;
	uint32_t x338 = UINT32_MAX;
	static volatile uint8_t x340 = UINT8_MAX;
	int32_t t80 = -70214888;

	t80 = ((x337+(x338<=x339))%x340);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = -3994;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -297794690022LL;
	static volatile int64_t x344 = INT64_MAX;
	static int64_t t81 = 51630246457939LL;

	t81 = ((x341+(x342<=x343))%x344);

	if (t81 != -3994LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = 3;
	uint16_t x351 = 2U;
	static uint8_t x352 = 1U;
	volatile int32_t t82 = 149094985;

	t82 = ((x349+(x350<=x351))%x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = 14U;
	static volatile int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	static int8_t x356 = INT8_MIN;
	static volatile int32_t t83 = -8;

	t83 = ((x353+(x354<=x355))%x356);

	if (t83 != 15) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = INT8_MAX;
	static uint32_t x358 = 463218U;
	int16_t x359 = -1812;
	int64_t x360 = -1LL;
	static int64_t t84 = 828LL;

	t84 = ((x357+(x358<=x359))%x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x361 = INT8_MAX;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = 84U;

	t85 = ((x361+(x362<=x363))%x364);

	if (t85 != 128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = -5408639018LL;
	int32_t x368 = INT32_MIN;
	volatile int64_t t86 = -50546865092479910LL;

	t86 = ((x365+(x366<=x367))%x368);

	if (t86 != -1113671722LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x370 = 4;
	int8_t x371 = 57;
	int64_t x372 = INT64_MIN;
	int64_t t87 = 9389LL;

	t87 = ((x369+(x370<=x371))%x372);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x373 = 60957U;
	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MAX;
	uint32_t t88 = 1540U;

	t88 = ((x373+(x374<=x375))%x376);

	if (t88 != 28191U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = 884;
	uint32_t x380 = UINT32_MAX;
	static volatile uint32_t t89 = 44U;

	t89 = ((x377+(x378<=x379))%x380);

	if (t89 != 65535U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = UINT16_MAX;
	static uint8_t x382 = 4U;
	uint32_t x383 = UINT32_MAX;
	volatile uint16_t x384 = 20485U;

	t90 = ((x381+(x382<=x383))%x384);

	if (t90 != 4081) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x385 = -100;
	uint64_t x386 = UINT64_MAX;
	static volatile int64_t x388 = 186480495LL;
	static int64_t t91 = -23840504757274306LL;

	t91 = ((x385+(x386<=x387))%x388);

	if (t91 != -99LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 2U;
	volatile uint64_t x390 = 4LLU;
	static int16_t x391 = INT16_MAX;
	int32_t t92 = 62419;

	t92 = ((x389+(x390<=x391))%x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -73;
	int64_t x394 = 4115165343957LL;
	volatile int8_t x395 = INT8_MAX;
	int16_t x396 = -1;

	t93 = ((x393+(x394<=x395))%x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x399 = -1LL;
	static int64_t x400 = -4328LL;
	static int64_t t94 = 23097076427735214LL;

	t94 = ((x397+(x398<=x399))%x400);

	if (t94 != 44LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x401 = INT32_MAX;
	int64_t x402 = -1LL;
	static int16_t x403 = INT16_MIN;
	static volatile int32_t t95 = -269668262;

	t95 = ((x401+(x402<=x403))%x404);

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x405 = INT64_MIN;
	int16_t x408 = -1;
	volatile int64_t t96 = 60705LL;

	t96 = ((x405+(x406<=x407))%x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x409 = -1;
	int32_t x410 = -12;
	volatile int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MIN;
	int32_t t97 = 2821155;

	t97 = ((x409+(x410<=x411))%x412);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x414 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;
	int32_t x416 = INT32_MAX;
	static volatile int32_t t98 = -228780671;

	t98 = ((x413+(x414<=x415))%x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = -3;
	uint8_t x419 = UINT8_MAX;
	uint16_t x420 = UINT16_MAX;

	t99 = ((x417+(x418<=x419))%x420);

	if (t99 != -2) { NG(); } else { ; }
	
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

