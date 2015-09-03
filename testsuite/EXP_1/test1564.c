#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = -6;
static uint64_t t1 = 13LLU;
static int32_t x17 = 16137237;
static uint32_t x19 = 12488384U;
volatile int64_t t4 = 6914182065LL;
volatile int64_t x28 = INT64_MIN;
uint32_t x32 = UINT32_MAX;
volatile int64_t t6 = 125LL;
volatile int32_t t7 = 1;
int64_t x37 = INT64_MIN;
uint16_t x55 = 11233U;
static int32_t x56 = -1506;
static int32_t t11 = 24290166;
uint8_t x59 = 6U;
volatile int8_t x61 = INT8_MIN;
int32_t x65 = -1;
volatile uint32_t x67 = UINT32_MAX;
static int64_t x79 = INT64_MIN;
int64_t x80 = -631027800103998231LL;
int16_t x82 = INT16_MIN;
int32_t x94 = INT32_MIN;
int64_t x97 = INT64_MAX;
int32_t x98 = 0;
int32_t t23 = 1;
volatile int16_t x110 = -1;
static int32_t x114 = INT32_MAX;
int16_t x119 = -14;
uint8_t x121 = 0U;
static volatile int64_t t30 = -133684045405LL;
static volatile uint16_t x140 = UINT16_MAX;
int32_t t32 = -2;
int32_t x148 = 309414172;
int64_t x151 = INT64_MAX;
uint16_t x161 = 7U;
static int64_t x168 = -1LL;
static int64_t t39 = -20658912838876LL;
static volatile int64_t t41 = 585972137381189LL;
volatile int32_t t42 = -55309946;
int16_t x183 = -1;
volatile int16_t x187 = INT16_MIN;
static int64_t t45 = 25509192821992LL;
static volatile int32_t t46 = 522184608;
uint16_t x206 = 2430U;
volatile uint32_t x208 = 387243U;
int8_t x215 = -7;
volatile int64_t t54 = -420LL;
uint64_t x243 = 12LLU;
static uint16_t x246 = 85U;
int64_t x248 = -330219613733441199LL;
int8_t x251 = 6;
volatile int32_t t59 = -344296056;
int64_t x273 = INT64_MAX;
int8_t x274 = INT8_MIN;
int64_t x275 = -1LL;
int64_t t64 = 2107135536780032075LL;
uint8_t x277 = 6U;
static int64_t x280 = INT64_MIN;
int16_t x283 = INT16_MAX;
volatile uint64_t t67 = 401751087096960LLU;
static volatile int32_t t69 = -868;
uint8_t x297 = UINT8_MAX;
int32_t x305 = INT32_MIN;
uint16_t x306 = UINT16_MAX;
int8_t x311 = 47;
static uint64_t t73 = 36116098LLU;
static int16_t x318 = INT16_MIN;
uint32_t x325 = 78U;
uint64_t t76 = 106485098216816LLU;
uint64_t x345 = 65170652867349512LLU;
static volatile int32_t x351 = INT32_MIN;
volatile uint64_t x354 = 5278438387790300LLU;
static volatile int32_t t83 = 1627;
volatile uint64_t x362 = UINT64_MAX;
volatile int16_t x366 = INT16_MIN;
static int64_t x367 = INT64_MIN;
static uint8_t x373 = UINT8_MAX;
static uint16_t x374 = 10U;
uint8_t x375 = 1U;
int64_t x379 = 41640LL;
int16_t x381 = INT16_MIN;
int8_t x383 = -1;
volatile uint8_t x384 = UINT8_MAX;
volatile int32_t t90 = 11471359;
int32_t x385 = INT32_MIN;
static int64_t x388 = -1LL;
int64_t x397 = INT64_MAX;
volatile uint16_t x398 = UINT16_MAX;
int16_t x405 = -1;
int64_t x406 = -34LL;
int16_t x413 = -5;
uint8_t x414 = 3U;


void f0(void) {
	uint64_t x6 = 36095LLU;
	int16_t x7 = INT16_MAX;
	static int8_t x8 = -1;
	static volatile int32_t t0 = -2323;

	t0 = (((x5<=x6)/x7)/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -1;
	int16_t x10 = -1983;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = INT32_MAX;

	t1 = (((x9<=x10)/x11)/x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	static int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 37U;
	int32_t t2 = -132636698;

	t2 = (((x13<=x14)/x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	uint16_t x20 = 3236U;
	volatile uint32_t t3 = 7805U;

	t3 = (((x17<=x18)/x19)/x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = INT8_MAX;
	int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MAX;
	volatile int8_t x24 = -1;

	t4 = (((x21<=x22)/x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = 9;
	int32_t x27 = -44346143;
	volatile int64_t t5 = 1435LL;

	t5 = (((x25<=x26)/x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 1U;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int64_t x31 = INT64_MIN;

	t6 = (((x29<=x30)/x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	uint8_t x34 = 108U;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MIN;

	t7 = (((x33<=x34)/x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = 0;
	volatile int64_t x39 = INT64_MIN;
	static uint16_t x40 = 3436U;
	int64_t t8 = 241791366930759840LL;

	t8 = (((x37<=x38)/x39)/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 2816605370515514LL;
	static uint8_t x46 = UINT8_MAX;
	int8_t x47 = -24;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t9 = -875906585;

	t9 = (((x45<=x46)/x47)/x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 31U;
	uint32_t x50 = 3748U;
	int32_t x51 = -23630878;
	volatile uint8_t x52 = 46U;
	volatile int32_t t10 = 26770416;

	t10 = (((x49<=x50)/x51)/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MIN;

	t11 = (((x53<=x54)/x55)/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 2U;
	volatile uint8_t x58 = 10U;
	int8_t x60 = -1;
	int32_t t12 = -35571;

	t12 = (((x57<=x58)/x59)/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x62 = -115;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = 104LL;
	uint64_t t13 = 181249673LLU;

	t13 = (((x61<=x62)/x63)/x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 3U;
	static volatile uint16_t x68 = UINT16_MAX;
	uint32_t t14 = 2785241U;

	t14 = (((x65<=x66)/x67)/x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x69 = INT32_MAX;
	int16_t x70 = -1;
	uint16_t x71 = 923U;
	static int32_t x72 = -815;
	static volatile int32_t t15 = -401591017;

	t15 = (((x69<=x70)/x71)/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 30U;
	uint32_t t16 = 1U;

	t16 = (((x73<=x74)/x75)/x76);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	volatile uint64_t x78 = 332610LLU;
	volatile int64_t t17 = -133141LL;

	t17 = (((x77<=x78)/x79)/x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = -70842;
	volatile uint32_t t18 = 50U;

	t18 = (((x81<=x82)/x83)/x84);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = 1851U;
	int16_t x88 = INT16_MIN;
	uint32_t t19 = 13469U;

	t19 = (((x85<=x86)/x87)/x88);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	static uint16_t x90 = 1U;
	int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MAX;
	int32_t t20 = 11186;

	t20 = (((x89<=x90)/x91)/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MIN;
	int64_t t21 = 3996761LL;

	t21 = (((x93<=x94)/x95)/x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t22 = 1891685;

	t22 = (((x97<=x98)/x99)/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x101 = 198929878U;
	static int16_t x102 = 0;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MIN;

	t23 = (((x101<=x102)/x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 1921004U;
	static uint32_t x106 = 118153154U;
	int32_t x107 = INT32_MIN;
	int32_t x108 = 595121041;
	int32_t t24 = -1;

	t24 = (((x105<=x106)/x107)/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 0U;
	int8_t x111 = INT8_MAX;
	uint16_t x112 = 5U;
	volatile int32_t t25 = 89562;

	t25 = (((x109<=x110)/x111)/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x115 = -51LL;
	uint8_t x116 = 5U;
	int64_t t26 = -166075685374521735LL;

	t26 = (((x113<=x114)/x115)/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -125;
	int32_t x120 = -2403;
	volatile int32_t t27 = -151448;

	t27 = (((x117<=x118)/x119)/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x122 = 5370LLU;
	static int8_t x123 = -1;
	int8_t x124 = INT8_MIN;
	volatile int32_t t28 = -386185;

	t28 = (((x121<=x122)/x123)/x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 1;
	static uint16_t x126 = 4527U;
	int16_t x127 = -1;
	uint16_t x128 = 3U;
	int32_t t29 = 1036573519;

	t29 = (((x125<=x126)/x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -9;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MAX;

	t30 = (((x129<=x130)/x131)/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	static int32_t t31 = 234460;

	t31 = (((x133<=x134)/x135)/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static uint16_t x138 = UINT16_MAX;
	volatile int8_t x139 = INT8_MIN;

	t32 = (((x137<=x138)/x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -1LL;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = 1;
	static int32_t t33 = 0;

	t33 = (((x141<=x142)/x143)/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	int16_t x146 = INT16_MAX;
	volatile int16_t x147 = 5878;
	int32_t t34 = -241762006;

	t34 = (((x145<=x146)/x147)/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	int64_t t35 = -90LL;

	t35 = (((x149<=x150)/x151)/x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x153 = 403469290U;
	int32_t x154 = INT32_MIN;
	uint16_t x155 = UINT16_MAX;
	uint64_t x156 = 231203LLU;
	static uint64_t t36 = 142307987LLU;

	t36 = (((x153<=x154)/x155)/x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x157 = 16365768U;
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = -1LL;
	int32_t x160 = -205674515;
	volatile int64_t t37 = -362429205885758779LL;

	t37 = (((x157<=x158)/x159)/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = INT64_MIN;
	static volatile int32_t x164 = INT32_MIN;
	int64_t t38 = -464343LL;

	t38 = (((x161<=x162)/x163)/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	volatile int16_t x167 = -1;

	t39 = (((x165<=x166)/x167)/x168);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -419;
	int16_t x170 = -1;
	int16_t x171 = -17;
	volatile int64_t x172 = INT64_MAX;
	int64_t t40 = 29942175781757846LL;

	t40 = (((x169<=x170)/x171)/x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 0;
	int64_t x174 = INT64_MIN;
	int64_t x175 = 1898559718LL;
	int8_t x176 = INT8_MIN;

	t41 = (((x173<=x174)/x175)/x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -1LL;
	static int16_t x178 = -1;
	uint8_t x179 = 13U;
	int8_t x180 = INT8_MAX;

	t42 = (((x177<=x178)/x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x181 = 3843141763880536LLU;
	int8_t x182 = INT8_MAX;
	uint32_t x184 = 75807378U;
	volatile uint32_t t43 = 31632499U;

	t43 = (((x181<=x182)/x183)/x184);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x185 = UINT16_MAX;
	volatile uint32_t x186 = 495884U;
	uint32_t x188 = 1575538004U;
	static uint32_t t44 = 2199U;

	t44 = (((x185<=x186)/x187)/x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	static uint16_t x190 = 1U;
	int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;

	t45 = (((x189<=x190)/x191)/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = INT16_MIN;
	int64_t x194 = -334660849LL;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -2077229;

	t46 = (((x193<=x194)/x195)/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = INT32_MIN;
	int32_t x198 = 14215810;
	volatile int64_t x199 = 4494039804LL;
	uint32_t x200 = 138U;
	int64_t t47 = -8639828LL;

	t47 = (((x197<=x198)/x199)/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = -1LL;
	int64_t x207 = INT64_MIN;
	int64_t t48 = -365153470070LL;

	t48 = (((x205<=x206)/x207)/x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = UINT8_MAX;
	static int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MAX;
	int8_t x212 = -5;
	volatile int32_t t49 = 250;

	t49 = (((x209<=x210)/x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = -1LL;
	static int32_t x214 = -9773;
	volatile int8_t x216 = INT8_MAX;
	volatile int32_t t50 = 12;

	t50 = (((x213<=x214)/x215)/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	static volatile uint8_t x218 = 0U;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t51 = -4;

	t51 = (((x217<=x218)/x219)/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	int64_t x222 = INT64_MIN;
	int8_t x223 = -1;
	volatile int32_t x224 = INT32_MIN;
	int32_t t52 = -173;

	t52 = (((x221<=x222)/x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = 0;
	static int16_t x226 = INT16_MAX;
	volatile int32_t x227 = -19638871;
	uint32_t x228 = 2917U;
	volatile uint32_t t53 = 6815U;

	t53 = (((x225<=x226)/x227)/x228);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = -10;
	static uint16_t x230 = UINT16_MAX;
	static uint8_t x231 = 7U;
	volatile int64_t x232 = INT64_MAX;

	t54 = (((x229<=x230)/x231)/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = 5;
	static int16_t x234 = INT16_MIN;
	uint64_t x235 = 40153109041321442LLU;
	static uint64_t x236 = 1129379055927997LLU;
	volatile uint64_t t55 = 4021LLU;

	t55 = (((x233<=x234)/x235)/x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x237 = 1;
	int32_t x238 = -8853;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MAX;
	static int32_t t56 = -498;

	t56 = (((x237<=x238)/x239)/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MIN;
	uint16_t x242 = UINT16_MAX;
	int64_t x244 = INT64_MIN;
	uint64_t t57 = 102374433423LLU;

	t57 = (((x241<=x242)/x243)/x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MIN;
	static int64_t x247 = 16LL;
	static volatile int64_t t58 = -38411215LL;

	t58 = (((x245<=x246)/x247)/x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = -26;
	int64_t x250 = -1LL;
	static uint16_t x252 = UINT16_MAX;

	t59 = (((x249<=x250)/x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 6U;
	static uint64_t x254 = 2LLU;
	uint8_t x255 = 2U;
	static uint32_t x256 = 91736U;
	uint32_t t60 = 171U;

	t60 = (((x253<=x254)/x255)/x256);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MIN;
	static int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	volatile int32_t x260 = 6;
	int32_t t61 = -815;

	t61 = (((x257<=x258)/x259)/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x261 = 769;
	uint8_t x262 = UINT8_MAX;
	int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MAX;
	static volatile int64_t t62 = -5LL;

	t62 = (((x261<=x262)/x263)/x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = 6U;
	uint8_t x266 = 1U;
	static int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MAX;
	volatile int64_t t63 = -4258121465LL;

	t63 = (((x265<=x266)/x267)/x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x276 = 58;

	t64 = (((x273<=x274)/x275)/x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x278 = 122U;
	volatile int16_t x279 = INT16_MIN;
	static volatile int64_t t65 = 136424636LL;

	t65 = (((x277<=x278)/x279)/x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	uint64_t x282 = UINT64_MAX;
	int8_t x284 = INT8_MIN;
	int32_t t66 = 29338;

	t66 = (((x281<=x282)/x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -787;
	static volatile int32_t x286 = -11637045;
	uint64_t x287 = UINT64_MAX;
	uint16_t x288 = 1U;

	t67 = (((x285<=x286)/x287)/x288);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x289 = -1;
	volatile int64_t x290 = INT64_MAX;
	volatile int32_t x291 = INT32_MIN;
	volatile int16_t x292 = INT16_MAX;
	static volatile int32_t t68 = -443353;

	t68 = (((x289<=x290)/x291)/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x293 = 35;
	uint32_t x294 = UINT32_MAX;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = -4;

	t69 = (((x293<=x294)/x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MAX;
	static uint16_t x300 = UINT16_MAX;
	int32_t t70 = 16;

	t70 = (((x297<=x298)/x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = -17300213629133LL;
	int64_t t71 = -8106658257279643LL;

	t71 = (((x305<=x306)/x307)/x308);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x309 = UINT32_MAX;
	static int32_t x310 = INT32_MAX;
	int64_t x312 = -451350LL;
	static int64_t t72 = 3611225LL;

	t72 = (((x309<=x310)/x311)/x312);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x314 = 48U;
	int32_t x315 = -1;
	uint64_t x316 = UINT64_MAX;

	t73 = (((x313<=x314)/x315)/x316);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = UINT32_MAX;
	static int16_t x319 = -12;
	uint64_t x320 = 33726033256LLU;
	volatile uint64_t t74 = 150686LLU;

	t74 = (((x317<=x318)/x319)/x320);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = INT8_MIN;
	static int8_t x322 = -1;
	volatile int64_t x323 = -1LL;
	uint8_t x324 = 8U;
	volatile int64_t t75 = 321266628513LL;

	t75 = (((x321<=x322)/x323)/x324);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 53LLU;
	int8_t x328 = INT8_MIN;

	t76 = (((x325<=x326)/x327)/x328);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x329 = -16020234LL;
	int16_t x330 = -6;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = -1;
	uint64_t t77 = 4LLU;

	t77 = (((x329<=x330)/x331)/x332);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x333 = 1174912134759313187LL;
	uint16_t x334 = 29940U;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	int64_t t78 = 0LL;

	t78 = (((x333<=x334)/x335)/x336);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x337 = 459096U;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 139U;
	volatile int16_t x340 = INT16_MIN;
	volatile uint32_t t79 = 15364U;

	t79 = (((x337<=x338)/x339)/x340);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -45252331;
	uint32_t x342 = UINT32_MAX;
	volatile uint16_t x343 = 23U;
	uint16_t x344 = 80U;
	int32_t t80 = -742;

	t80 = (((x341<=x342)/x343)/x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x346 = 1861421630U;
	uint16_t x347 = 219U;
	int32_t x348 = 98873;
	int32_t t81 = 98433;

	t81 = (((x345<=x346)/x347)/x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = 1;
	int16_t x350 = INT16_MIN;
	static uint32_t x352 = 690U;
	volatile uint32_t t82 = 11243801U;

	t82 = (((x349<=x350)/x351)/x352);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	volatile uint16_t x355 = 95U;
	static int16_t x356 = -1;

	t83 = (((x353<=x354)/x355)/x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x357 = 127860U;
	uint32_t x358 = UINT32_MAX;
	volatile uint8_t x359 = 14U;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t84 = 61249;

	t84 = (((x357<=x358)/x359)/x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -27639;
	int32_t x363 = INT32_MAX;
	int64_t x364 = INT64_MIN;
	int64_t t85 = 0LL;

	t85 = (((x361<=x362)/x363)/x364);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -1;
	int16_t x368 = INT16_MIN;
	volatile int64_t t86 = -5501770LL;

	t86 = (((x365<=x366)/x367)/x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -1497091;
	int32_t x370 = INT32_MIN;
	int8_t x371 = 1;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t87 = 1531039689815555LLU;

	t87 = (((x369<=x370)/x371)/x372);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x376 = INT32_MAX;
	int32_t t88 = -5762058;

	t88 = (((x373<=x374)/x375)/x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -68LL;
	int32_t x378 = INT32_MAX;
	int32_t x380 = INT32_MAX;
	int64_t t89 = -30870261717755LL;

	t89 = (((x377<=x378)/x379)/x380);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x382 = 2788910897233LLU;

	t90 = (((x381<=x382)/x383)/x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x386 = -1;
	volatile int16_t x387 = INT16_MIN;
	static int64_t t91 = -131036038913622LL;

	t91 = (((x385<=x386)/x387)/x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MAX;
	static int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MAX;
	volatile uint64_t x392 = 14940612484LLU;
	volatile uint64_t t92 = 10LLU;

	t92 = (((x389<=x390)/x391)/x392);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = 6019399331539LL;
	int32_t x394 = -1;
	volatile int8_t x395 = INT8_MAX;
	int64_t x396 = -5693589962218LL;
	volatile int64_t t93 = 1209253790839LL;

	t93 = (((x393<=x394)/x395)/x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 34U;
	volatile uint32_t t94 = 78532842U;

	t94 = (((x397<=x398)/x399)/x400);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 0U;
	int64_t x402 = INT64_MAX;
	volatile int32_t x403 = INT32_MIN;
	static volatile uint32_t x404 = 21691U;
	volatile uint32_t t95 = 0U;

	t95 = (((x401<=x402)/x403)/x404);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x407 = -1;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t96 = -5250531;

	t96 = (((x405<=x406)/x407)/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x415 = 271377U;
	int64_t x416 = INT64_MIN;
	int64_t t97 = 941579200964743LL;

	t97 = (((x413<=x414)/x415)/x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = -13660;
	static int8_t x422 = 1;
	static int64_t x423 = -1LL;
	int64_t x424 = 8820LL;
	volatile int64_t t98 = -195267068468087LL;

	t98 = (((x421<=x422)/x423)/x424);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = -1;
	int64_t x426 = -1LL;
	uint16_t x427 = 1U;
	uint16_t x428 = 4037U;
	volatile int32_t t99 = 1873;

	t99 = (((x425<=x426)/x427)/x428);

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

