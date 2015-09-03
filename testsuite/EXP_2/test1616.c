#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -11;
volatile int64_t x11 = 74597185746LL;
int16_t x13 = INT16_MAX;
int32_t x23 = 6296;
int64_t x26 = INT64_MIN;
int64_t t6 = 489324615923564LL;
static volatile int32_t t7 = 12356323;
uint16_t x36 = 90U;
int32_t t8 = -1;
int32_t x40 = 29;
volatile int32_t t9 = 2844;
int32_t x43 = -1;
static int8_t x51 = -1;
static int8_t x54 = INT8_MIN;
static int32_t x56 = INT32_MIN;
static volatile int32_t t13 = -1225;
uint8_t x57 = 27U;
uint8_t x61 = 3U;
uint64_t x67 = UINT64_MAX;
int8_t x69 = INT8_MAX;
static volatile int32_t x78 = INT32_MIN;
volatile uint8_t x80 = UINT8_MAX;
volatile int8_t x81 = INT8_MIN;
uint16_t x91 = 1U;
static volatile int32_t t22 = 87796;
uint64_t x100 = 616518929LLU;
int64_t x101 = -1LL;
int64_t x104 = INT64_MIN;
volatile int64_t t24 = 422LL;
int32_t t25 = 387931;
int64_t x109 = INT64_MIN;
int8_t x117 = 2;
uint64_t x118 = 33LLU;
volatile uint32_t t28 = 1856228566U;
int8_t x124 = 1;
int32_t t31 = -138;
volatile int64_t x135 = INT64_MAX;
static int8_t x136 = 4;
uint8_t x137 = UINT8_MAX;
volatile uint64_t x144 = 14131165LLU;
static int16_t x145 = -1;
int64_t x149 = INT64_MIN;
uint64_t x150 = 69289575335288137LLU;
int16_t x153 = -103;
int32_t x154 = 716707;
volatile int16_t x157 = 0;
int16_t x160 = -1;
int64_t t39 = 0LL;
static uint8_t x165 = 0U;
uint16_t x168 = UINT16_MAX;
volatile int32_t x170 = INT32_MAX;
int8_t x171 = -1;
static int16_t x174 = INT16_MAX;
static int8_t x175 = -1;
int32_t x179 = -5;
volatile int8_t x181 = -1;
uint32_t x183 = 3639U;
volatile int64_t x185 = -1LL;
static int64_t t45 = -1126480087537953496LL;
int8_t x189 = INT8_MIN;
uint32_t x192 = UINT32_MAX;
uint32_t t47 = 1287U;
int8_t x200 = -1;
static uint16_t x204 = 1U;
uint8_t x207 = 22U;
static int16_t x214 = INT16_MIN;
uint32_t t52 = 140219U;
int32_t t54 = -25;
static volatile int8_t x230 = INT8_MIN;
static volatile int32_t x238 = -50659711;
int8_t x239 = INT8_MIN;
int64_t x253 = INT64_MIN;
int8_t x258 = INT8_MIN;
int32_t x259 = INT32_MIN;
int16_t x266 = 60;
int16_t x270 = INT16_MAX;
int32_t x272 = -3085;
int16_t x281 = INT16_MAX;
int8_t x287 = -6;
volatile int32_t t70 = 0;
int8_t x289 = 0;
uint32_t x302 = 668U;
int32_t x303 = INT32_MIN;
int16_t x306 = -3282;
static volatile int64_t x307 = INT64_MIN;
volatile uint64_t x318 = 841299LLU;
int8_t x321 = 45;
volatile int8_t x323 = INT8_MAX;
volatile int16_t x339 = INT16_MIN;
int64_t x342 = -45654071569398232LL;
int64_t x343 = 100814LL;
volatile uint16_t x345 = 780U;
volatile uint64_t x347 = 770895142582890366LLU;
static int32_t x349 = 14;
int32_t x352 = INT32_MIN;
int32_t x354 = INT32_MAX;
int32_t x360 = INT32_MAX;
volatile int32_t x369 = 293830007;
int16_t x370 = INT16_MIN;
static uint16_t x371 = UINT16_MAX;
uint64_t x372 = UINT64_MAX;
int32_t x373 = -1240578;
uint16_t x375 = 26251U;
int32_t t91 = -119;
uint16_t x378 = UINT16_MAX;
uint8_t x379 = 20U;
static volatile int32_t x380 = -163;
int64_t t93 = 1209978LL;
static int8_t x399 = -6;
volatile int32_t t96 = -6233584;
int32_t x404 = -1;
int32_t t97 = -116582876;
static uint64_t x410 = 1241708181LLU;
int32_t t99 = -230409;


void f0(void) {
	int64_t x2 = -1LL;
	int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = 106;

	t0 = ((x1==(x2<=x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int64_t x6 = INT64_MIN;
	int16_t x7 = 6;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = -1;

	t1 = ((x5==(x6<=x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	static volatile int16_t x10 = 415;
	uint32_t x12 = 3298U;
	volatile uint32_t t2 = 46238508U;

	t2 = ((x9==(x10<=x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int64_t x15 = -1LL;
	static volatile uint8_t x16 = 1U;
	int32_t t3 = -3;

	t3 = ((x13==(x14<=x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = INT8_MIN;
	static int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 3777;

	t4 = ((x17==(x18<=x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	int32_t x24 = -1;
	volatile int32_t t5 = -115306;

	t5 = ((x21==(x22<=x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x27 = 2474;
	static int64_t x28 = INT64_MIN;

	t6 = ((x25==(x26<=x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	volatile uint8_t x30 = 62U;
	volatile uint16_t x31 = 1U;
	int32_t x32 = -1;

	t7 = ((x29==(x30<=x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 0U;
	int16_t x34 = 767;
	static int64_t x35 = -59129517218128402LL;

	t8 = ((x33==(x34<=x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 2LLU;
	uint8_t x38 = 0U;
	int8_t x39 = INT8_MAX;

	t9 = ((x37==(x38<=x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -9;
	static int32_t x42 = -1;
	uint16_t x44 = 3U;
	int32_t t10 = -311009;

	t10 = ((x41==(x42<=x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int64_t x47 = 77304LL;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 799238929599481377LLU;

	t11 = ((x45==(x46<=x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	static int32_t x52 = INT32_MIN;
	static int32_t t12 = 4590806;

	t12 = ((x49==(x50<=x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 25683014205LLU;
	static volatile uint8_t x55 = 114U;

	t13 = ((x53==(x54<=x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t14 = -7;

	t14 = ((x57==(x58<=x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	static uint32_t x64 = 2U;
	static volatile uint32_t t15 = 46449U;

	t15 = ((x61==(x62<=x63))/x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MIN;
	static int64_t x68 = -1LL;
	static volatile int64_t t16 = -14LL;

	t16 = ((x65==(x66<=x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	uint64_t x71 = 59LLU;
	static uint16_t x72 = 910U;
	static volatile int32_t t17 = -11641;

	t17 = ((x69==(x70<=x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 13140U;
	static int64_t x74 = -1077495749431423800LL;
	uint32_t x75 = 63784349U;
	static int16_t x76 = 15;
	volatile int32_t t18 = -3;

	t18 = ((x73==(x74<=x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	int32_t t19 = -544471601;

	t19 = ((x77==(x78<=x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 68U;
	volatile int16_t x83 = INT16_MAX;
	uint16_t x84 = 23061U;
	int32_t t20 = -28;

	t20 = ((x81==(x82<=x83))/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 565681862604674836LL;
	uint64_t x86 = 939441LLU;
	static int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;
	volatile int64_t t21 = 29096LL;

	t21 = ((x85==(x86<=x87))/x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 4U;
	int16_t x90 = -1;
	static volatile int16_t x92 = 6;

	t22 = ((x89==(x90<=x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 1;
	uint16_t x98 = 9756U;
	int32_t x99 = -1;
	volatile uint64_t t23 = 6738768LLU;

	t23 = ((x97==(x98<=x99))/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x102 = 4144721682LLU;
	static uint16_t x103 = 11507U;

	t24 = ((x101==(x102<=x103))/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	volatile uint8_t x106 = 3U;
	int16_t x107 = 1;
	int32_t x108 = -1;

	t25 = ((x105==(x106<=x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	static int32_t x112 = -2550;
	int32_t t26 = -51;

	t26 = ((x109==(x110<=x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 97U;
	static uint32_t x114 = 574U;
	int32_t x115 = -165;
	static int64_t x116 = -780828LL;
	int64_t t27 = 36LL;

	t27 = ((x113==(x114<=x115))/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 199080195U;

	t28 = ((x117==(x118<=x119))/x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 39571901U;
	int32_t x122 = INT32_MAX;
	uint8_t x123 = 1U;
	int32_t t29 = -12732880;

	t29 = ((x121==(x122<=x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x125 = 55U;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = INT8_MIN;
	volatile uint32_t x128 = 943U;
	static volatile uint32_t t30 = 4060U;

	t30 = ((x125==(x126<=x127))/x128);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 1U;
	int32_t x130 = -90367120;
	int16_t x131 = INT16_MAX;
	volatile int16_t x132 = INT16_MAX;

	t31 = ((x129==(x130<=x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = 9314;
	int32_t x134 = INT32_MIN;
	int32_t t32 = -869456348;

	t32 = ((x133==(x134<=x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x138 = 253U;
	int16_t x139 = -10693;
	volatile int8_t x140 = -5;
	int32_t t33 = -6;

	t33 = ((x137==(x138<=x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = -1;
	uint32_t x142 = 3546772U;
	int16_t x143 = 0;
	volatile uint64_t t34 = 74LLU;

	t34 = ((x141==(x142<=x143))/x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = 374620LLU;
	volatile int32_t x147 = -1;
	int64_t x148 = -1172188635LL;
	int64_t t35 = -3LL;

	t35 = ((x145==(x146<=x147))/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x151 = 25801490U;
	uint16_t x152 = 24684U;
	int32_t t36 = -305255210;

	t36 = ((x149==(x150<=x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x155 = INT16_MIN;
	int16_t x156 = 302;
	volatile int32_t t37 = -28305761;

	t37 = ((x153==(x154<=x155))/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x158 = 524515697855368931LL;
	int64_t x159 = 854990748746072018LL;
	volatile int32_t t38 = 208;

	t38 = ((x157==(x158<=x159))/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x161 = -26668119;
	int8_t x162 = INT8_MAX;
	int32_t x163 = -1;
	int64_t x164 = 45207545LL;

	t39 = ((x161==(x162<=x163))/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 3841U;
	volatile int32_t t40 = 912246;

	t40 = ((x165==(x166<=x167))/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int64_t x172 = -1LL;
	int64_t t41 = 19078LL;

	t41 = ((x169==(x170<=x171))/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 1;
	int16_t x176 = INT16_MIN;
	volatile int32_t t42 = -2857317;

	t42 = ((x173==(x174<=x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	static volatile int16_t x180 = INT16_MIN;
	volatile int32_t t43 = -13667077;

	t43 = ((x177==(x178<=x179))/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = -1LL;
	uint32_t x184 = 1702703U;
	volatile uint32_t t44 = 46725446U;

	t44 = ((x181==(x182<=x183))/x184);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x186 = -1;
	int8_t x187 = INT8_MAX;
	static volatile int64_t x188 = INT64_MIN;

	t45 = ((x185==(x186<=x187))/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x190 = -1LL;
	uint16_t x191 = UINT16_MAX;
	uint32_t t46 = 653U;

	t46 = ((x189==(x190<=x191))/x192);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = INT64_MAX;
	static volatile int64_t x194 = INT64_MIN;
	int16_t x195 = 270;
	uint32_t x196 = 8478873U;

	t47 = ((x193==(x194<=x195))/x196);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 2U;
	volatile int8_t x198 = -19;
	int16_t x199 = INT16_MAX;
	volatile int32_t t48 = 457947;

	t48 = ((x197==(x198<=x199))/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MAX;
	static uint32_t x203 = 2U;
	int32_t t49 = 6529;

	t49 = ((x201==(x202<=x203))/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 855LLU;
	int64_t x206 = -453524229656087LL;
	int64_t x208 = -1LL;
	int64_t t50 = 3504LL;

	t50 = ((x205==(x206<=x207))/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -303617;
	static uint32_t x210 = 148933U;
	volatile uint32_t x211 = 12848545U;
	int16_t x212 = INT16_MAX;
	int32_t t51 = 11022186;

	t51 = ((x209==(x210<=x211))/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 22001042877420LLU;
	volatile int32_t x215 = 77378328;
	uint32_t x216 = 5U;

	t52 = ((x213==(x214<=x215))/x216);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 111U;
	static int16_t x218 = -11;
	int8_t x219 = INT8_MAX;
	static uint32_t x220 = 218U;
	volatile uint32_t t53 = 514U;

	t53 = ((x217==(x218<=x219))/x220);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -70333053316912LL;
	static int8_t x222 = -4;
	static int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MIN;

	t54 = ((x221==(x222<=x223))/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	static int64_t x226 = 108380652LL;
	static int8_t x227 = -1;
	int64_t x228 = INT64_MAX;
	int64_t t55 = -17078178254131LL;

	t55 = ((x225==(x226<=x227))/x228);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = 2399U;
	int8_t x231 = INT8_MIN;
	int64_t x232 = 402722526209163487LL;
	volatile int64_t t56 = 843350584390LL;

	t56 = ((x229==(x230<=x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = 477518332LL;
	int64_t x234 = INT64_MIN;
	volatile uint64_t x235 = 63711619261LLU;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t57 = -193015;

	t57 = ((x233==(x234<=x235))/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x237 = INT64_MIN;
	uint16_t x240 = 120U;
	volatile int32_t t58 = -3073571;

	t58 = ((x237==(x238<=x239))/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -1;
	volatile int8_t x242 = 3;
	int8_t x243 = -1;
	volatile int64_t x244 = 273LL;
	int64_t t59 = -7448402532156992LL;

	t59 = ((x241==(x242<=x243))/x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MAX;
	int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	volatile int32_t t60 = 7;

	t60 = ((x245==(x246<=x247))/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 946U;
	int64_t x250 = -475461413810997LL;
	uint16_t x251 = UINT16_MAX;
	static int8_t x252 = INT8_MAX;
	int32_t t61 = -24;

	t61 = ((x249==(x250<=x251))/x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MAX;
	volatile int16_t x256 = 11286;
	volatile int32_t t62 = -332538;

	t62 = ((x253==(x254<=x255))/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = 0;
	int16_t x260 = INT16_MIN;
	static int32_t t63 = -14563;

	t63 = ((x257==(x258<=x259))/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 245877549749622439LLU;
	uint32_t x262 = 45013U;
	int8_t x263 = 5;
	static int32_t x264 = INT32_MIN;
	static int32_t t64 = -179;

	t64 = ((x261==(x262<=x263))/x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x267 = -746676777;
	static volatile int16_t x268 = 22;
	volatile int32_t t65 = 1;

	t65 = ((x265==(x266<=x267))/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x269 = 1U;
	uint16_t x271 = 27U;
	static int32_t t66 = -7908;

	t66 = ((x269==(x270<=x271))/x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = 1602051U;
	uint64_t x274 = 136725674008199LLU;
	static int16_t x275 = INT16_MIN;
	static uint64_t x276 = 24417867945066LLU;
	uint64_t t67 = 23LLU;

	t67 = ((x273==(x274<=x275))/x276);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	static volatile uint8_t x278 = 2U;
	volatile int8_t x279 = INT8_MIN;
	uint8_t x280 = 7U;
	int32_t t68 = 188122965;

	t68 = ((x277==(x278<=x279))/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x282 = -268885769721947LL;
	int8_t x283 = 0;
	int32_t x284 = INT32_MIN;
	static volatile int32_t t69 = 6750;

	t69 = ((x281==(x282<=x283))/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	volatile uint32_t x286 = 39545U;
	static uint16_t x288 = 289U;

	t70 = ((x285==(x286<=x287))/x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x290 = INT16_MIN;
	static int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t71 = -2389002;

	t71 = ((x289==(x290<=x291))/x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MAX;
	int32_t x294 = 0;
	int8_t x295 = INT8_MIN;
	static uint32_t x296 = UINT32_MAX;
	uint32_t t72 = 9881U;

	t72 = ((x293==(x294<=x295))/x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	static int32_t x299 = -1351678;
	volatile uint8_t x300 = 18U;
	volatile int32_t t73 = 9;

	t73 = ((x297==(x298<=x299))/x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -7;
	int64_t x304 = 35LL;
	int64_t t74 = -13050674404632669LL;

	t74 = ((x301==(x302<=x303))/x304);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = -1;
	int32_t x308 = INT32_MIN;
	static int32_t t75 = -1;

	t75 = ((x305==(x306<=x307))/x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = 0;
	uint16_t x311 = UINT16_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t76 = -14;

	t76 = ((x309==(x310<=x311))/x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int64_t x319 = INT64_MIN;
	int8_t x320 = -1;
	int32_t t77 = 207711222;

	t77 = ((x317==(x318<=x319))/x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = -1LL;
	static uint32_t x324 = UINT32_MAX;
	volatile uint32_t t78 = 1415039178U;

	t78 = ((x321==(x322<=x323))/x324);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 57;
	volatile uint16_t x326 = 24857U;
	uint32_t x327 = 35U;
	int32_t x328 = INT32_MAX;
	volatile int32_t t79 = -26599;

	t79 = ((x325==(x326<=x327))/x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -224545;
	int64_t x330 = -1LL;
	volatile int16_t x331 = INT16_MAX;
	volatile int16_t x332 = INT16_MAX;
	static volatile int32_t t80 = 8073;

	t80 = ((x329==(x330<=x331))/x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x333 = INT8_MIN;
	volatile int16_t x334 = INT16_MIN;
	uint32_t x335 = 24989496U;
	int8_t x336 = INT8_MAX;
	int32_t t81 = 32076910;

	t81 = ((x333==(x334<=x335))/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	volatile uint16_t x340 = 12U;
	int32_t t82 = -377737549;

	t82 = ((x337==(x338<=x339))/x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = 22499516303LL;
	volatile int32_t x344 = INT32_MAX;
	static volatile int32_t t83 = 692911775;

	t83 = ((x341==(x342<=x343))/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x346 = -1;
	int32_t x348 = 5539;
	int32_t t84 = -4646;

	t84 = ((x345==(x346<=x347))/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;
	static uint32_t x351 = UINT32_MAX;
	static volatile int32_t t85 = 8969212;

	t85 = ((x349==(x350<=x351))/x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile int32_t x355 = INT32_MIN;
	int32_t x356 = 1;
	volatile int32_t t86 = -51911;

	t86 = ((x353==(x354<=x355))/x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x357 = INT8_MAX;
	int64_t x358 = -24490168964988011LL;
	uint64_t x359 = UINT64_MAX;
	int32_t t87 = -3263622;

	t87 = ((x357==(x358<=x359))/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 16931169858LLU;
	int8_t x362 = INT8_MAX;
	int8_t x363 = 0;
	static volatile int32_t x364 = 2436;
	volatile int32_t t88 = -2008;

	t88 = ((x361==(x362<=x363))/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	static volatile int16_t x366 = INT16_MAX;
	uint16_t x367 = UINT16_MAX;
	uint32_t x368 = UINT32_MAX;
	uint32_t t89 = 562U;

	t89 = ((x365==(x366<=x367))/x368);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t t90 = 11687356LLU;

	t90 = ((x369==(x370<=x371))/x372);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = -1LL;
	volatile uint16_t x376 = UINT16_MAX;

	t91 = ((x373==(x374<=x375))/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = 8U;
	int32_t t92 = 103;

	t92 = ((x377==(x378<=x379))/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MAX;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;

	t93 = ((x385==(x386<=x387))/x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x389 = 5;
	static int8_t x390 = INT8_MIN;
	int8_t x391 = 22;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t94 = 655135;

	t94 = ((x389==(x390<=x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	static uint64_t x395 = 477LLU;
	int8_t x396 = 5;
	int32_t t95 = 1211500;

	t95 = ((x393==(x394<=x395))/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x397 = INT16_MIN;
	volatile int8_t x398 = -1;
	int16_t x400 = -3;

	t96 = ((x397==(x398<=x399))/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 3U;
	static volatile int64_t x402 = 339LL;
	int8_t x403 = INT8_MIN;

	t97 = ((x401==(x402<=x403))/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x405 = -64;
	int32_t x406 = INT32_MIN;
	int8_t x407 = INT8_MIN;
	uint32_t x408 = UINT32_MAX;
	uint32_t t98 = 7513U;

	t98 = ((x405==(x406<=x407))/x408);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x409 = 1;
	volatile int8_t x411 = 6;
	int32_t x412 = -1;

	t99 = ((x409==(x410<=x411))/x412);

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

