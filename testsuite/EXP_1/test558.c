#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 9;
volatile int32_t x13 = INT32_MIN;
int8_t x15 = 32;
int16_t x18 = INT16_MIN;
uint16_t x19 = 75U;
int8_t x22 = 13;
int32_t x27 = 3772;
int32_t x33 = INT32_MIN;
int16_t x37 = -1;
uint32_t x43 = 163U;
static volatile int32_t x50 = INT32_MIN;
static volatile int64_t t11 = 21059030568357558LL;
static volatile int32_t t14 = 971205;
volatile int32_t t15 = 127498;
uint64_t t18 = UINT64_MAX;
int64_t x84 = INT64_MAX;
static int64_t t19 = INT64_MAX;
int8_t x92 = 7;
int8_t x94 = INT8_MIN;
int64_t t22 = -1540413900LL;
int8_t x103 = -1;
int16_t x104 = INT16_MIN;
volatile int16_t x114 = INT16_MIN;
uint16_t x116 = 4970U;
volatile int32_t t26 = -28783;
int64_t x119 = INT64_MAX;
static uint16_t x123 = 941U;
volatile uint8_t x127 = 29U;
uint32_t x128 = 428U;
uint16_t x129 = 60U;
volatile int8_t x135 = -1;
uint8_t x138 = UINT8_MAX;
int64_t x141 = -1LL;
volatile int64_t t33 = 926051348293439LL;
int64_t x151 = INT64_MAX;
uint16_t x166 = 3U;
volatile uint16_t x170 = 20U;
volatile uint64_t t40 = 1075651179LLU;
static int32_t x177 = INT32_MIN;
int16_t x178 = 4214;
volatile int16_t x184 = INT16_MIN;
int64_t x185 = INT64_MAX;
uint32_t x187 = 224U;
uint8_t x189 = 28U;
static volatile int8_t x190 = INT8_MIN;
int32_t x202 = -60256743;
int64_t t48 = -279889705805231LL;
uint16_t x210 = 1355U;
int32_t x211 = -84930246;
int32_t x216 = INT32_MIN;
static uint16_t x223 = 17U;
int64_t x225 = -1LL;
int32_t x230 = INT32_MAX;
static int8_t x236 = 6;
uint64_t x237 = UINT64_MAX;
volatile uint64_t t56 = 957LLU;
int32_t x241 = INT32_MIN;
uint16_t x245 = UINT16_MAX;
int8_t x246 = INT8_MIN;
uint32_t x248 = 87U;
volatile int64_t t59 = INT64_MIN;
volatile int64_t x254 = INT64_MIN;
static volatile int32_t x257 = 9614770;
int8_t x267 = 12;
uint64_t x268 = 4428859LLU;
static uint64_t t63 = 22284508916LLU;
uint64_t x269 = 98324LLU;
int32_t x270 = INT32_MAX;
static volatile uint64_t x274 = 1519373297590370720LLU;
int32_t x276 = 21899865;
uint16_t x278 = 98U;
int32_t x281 = 0;
int8_t x290 = -1;
int8_t x292 = INT8_MAX;
uint16_t x296 = UINT16_MAX;
static uint64_t x301 = 0LLU;
int16_t x302 = -1;
int16_t x310 = INT16_MAX;
static int16_t x316 = INT16_MIN;
int32_t x318 = INT32_MIN;
int32_t t76 = 83044;
volatile uint64_t x322 = 12855580LLU;
int16_t x323 = -1;
static int32_t x327 = INT32_MAX;
uint32_t x331 = UINT32_MAX;
int8_t x341 = INT8_MIN;
uint8_t x342 = 103U;
uint64_t x348 = UINT64_MAX;
uint64_t t83 = UINT64_MAX;
static int8_t x349 = 5;
int64_t x357 = 1606LL;
uint64_t x370 = 27101341LLU;
uint32_t x371 = 32714467U;
uint64_t x378 = 11179LLU;
uint8_t x381 = UINT8_MAX;
uint16_t x386 = 5U;
uint32_t x388 = 34821296U;
volatile uint64_t t93 = 1544237LLU;
static volatile int32_t x393 = INT32_MIN;
int16_t x397 = INT16_MAX;
uint64_t x399 = 6437817763306042LLU;
static int8_t x401 = INT8_MAX;
uint32_t t98 = UINT32_MAX;
uint16_t x417 = 261U;


void f0(void) {
	int32_t x1 = -1;
	volatile uint64_t x2 = 18349LLU;
	static int8_t x3 = -14;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = 137LLU;

	t0 = (((x1/x2)/x3)|x4);

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -11;
	static uint8_t x10 = UINT8_MAX;
	int16_t x11 = -53;
	uint16_t x12 = 627U;

	t1 = (((x9/x10)/x11)|x12);

	if (t1 != 627) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MAX;
	uint16_t x16 = 132U;
	int32_t t2 = -172034545;

	t2 = (((x13/x14)/x15)|x16);

	if (t2 != -1916) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 216;
	int64_t x20 = INT64_MAX;
	volatile int64_t t3 = INT64_MAX;

	t3 = (((x17/x18)/x19)|x20);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = -1;
	uint64_t x23 = 33LLU;
	volatile uint64_t x24 = 542210928058LLU;
	uint64_t t4 = 491LLU;

	t4 = (((x21/x22)/x23)|x24);

	if (t4 != 542210928058LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	int8_t x26 = 54;
	uint64_t x28 = 114775161360472LLU;
	uint64_t t5 = 0LLU;

	t5 = (((x25/x26)/x27)|x28);

	if (t5 != 114775161360472LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -50453LL;
	uint64_t x30 = 14662141906462289LLU;
	volatile int8_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	static uint64_t t6 = 73435132693LLU;

	t6 = (((x29/x30)/x31)|x32);

	if (t6 != 65535LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x34 = INT8_MIN;
	static int64_t x35 = INT64_MIN;
	int64_t x36 = -1908098379LL;
	volatile int64_t t7 = -10641305LL;

	t7 = (((x33/x34)/x35)|x36);

	if (t7 != -1908098379LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = 24;
	int8_t x40 = -1;
	int32_t t8 = 936;

	t8 = (((x37/x38)/x39)|x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = -3377;
	int16_t x44 = -2;
	int64_t t9 = 428183LL;

	t9 = (((x41/x42)/x43)|x44);

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = 23345U;
	int64_t x46 = -22164711794260782LL;
	static uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	uint64_t t10 = 80481270108LLU;

	t10 = (((x45/x46)/x47)|x48);

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 8113;
	static uint8_t x51 = UINT8_MAX;
	int64_t x52 = -42LL;

	t11 = (((x49/x50)/x51)|x52);

	if (t11 != -42LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x53 = INT64_MIN;
	int32_t x54 = 646963;
	int32_t x55 = -7;
	int64_t x56 = INT64_MAX;
	static int64_t t12 = INT64_MAX;

	t12 = (((x53/x54)/x55)|x56);

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = 1;
	volatile int16_t x59 = -1;
	volatile int64_t x60 = 517617200626516577LL;
	volatile int64_t t13 = -961141964940812LL;

	t13 = (((x57/x58)/x59)|x60);

	if (t13 != 517617200626516577LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MAX;
	static volatile int32_t x63 = INT32_MIN;
	volatile uint16_t x64 = UINT16_MAX;

	t14 = (((x61/x62)/x63)|x64);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MIN;
	volatile int8_t x66 = INT8_MAX;
	int16_t x67 = -1;
	static volatile int16_t x68 = INT16_MIN;

	t15 = (((x65/x66)/x67)|x68);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = 1;
	static int64_t x71 = INT64_MAX;
	volatile int16_t x72 = -95;
	volatile int64_t t16 = -7956223492LL;

	t16 = (((x69/x70)/x71)|x72);

	if (t16 != -95LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = -1LL;
	int32_t x74 = -198;
	int16_t x75 = INT16_MAX;
	volatile uint64_t x76 = 317006LLU;
	volatile uint64_t t17 = 500450644866032652LLU;

	t17 = (((x73/x74)/x75)|x76);

	if (t17 != 317006LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 80LL;
	int32_t x78 = INT32_MIN;
	static uint64_t x79 = 34177309600315LLU;
	int32_t x80 = -1;

	t18 = (((x77/x78)/x79)|x80);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = -1LL;
	int64_t x82 = -87870696LL;
	int16_t x83 = INT16_MIN;

	t19 = (((x81/x82)/x83)|x84);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 212LLU;
	int8_t x86 = -1;
	static uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = -24613534LL;
	static uint64_t t20 = 474LLU;

	t20 = (((x85/x86)/x87)|x88);

	if (t20 != 18446744073684938082LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 0;
	volatile uint32_t x90 = 1045U;
	int32_t x91 = INT32_MIN;
	uint32_t t21 = 1469U;

	t21 = (((x89/x90)/x91)|x92);

	if (t21 != 7U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	static int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MAX;

	t22 = (((x93/x94)/x95)|x96);

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	int64_t x98 = -598634342260268LL;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -220401518LL;
	static int64_t t23 = -691LL;

	t23 = (((x97/x98)/x99)|x100);

	if (t23 != -220401518LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = -13;
	static uint8_t x102 = UINT8_MAX;
	volatile int32_t t24 = 1448;

	t24 = (((x101/x102)/x103)|x104);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = INT8_MIN;
	volatile uint8_t x110 = 29U;
	uint8_t x111 = 100U;
	static volatile uint64_t x112 = UINT64_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = (((x109/x110)/x111)|x112);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = -1;
	static int16_t x115 = 5750;

	t26 = (((x113/x114)/x115)|x116);

	if (t26 != 4970) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 1730U;
	int32_t x118 = -97977455;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (((x117/x118)/x119)|x120);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -4LL;
	static uint32_t x122 = 149U;
	int32_t x124 = 13;
	volatile int64_t t28 = 19371901LL;

	t28 = (((x121/x122)/x123)|x124);

	if (t28 != 13LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 184930277664LLU;
	int64_t x126 = -84160820943382453LL;
	uint64_t t29 = 2086055128038616LLU;

	t29 = (((x125/x126)/x127)|x128);

	if (t29 != 428LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x130 = -14801;
	uint32_t x131 = 1018817U;
	uint64_t x132 = 212LLU;
	volatile uint64_t t30 = 12856652060LLU;

	t30 = (((x129/x130)/x131)|x132);

	if (t30 != 212LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = -40105LL;
	int16_t x134 = INT16_MIN;
	volatile uint64_t x136 = 24936LLU;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (((x133/x134)/x135)|x136);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint16_t x139 = 2309U;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t32 = INT64_MIN;

	t32 = (((x137/x138)/x139)|x140);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x142 = 73;
	volatile int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;

	t33 = (((x141/x142)/x143)|x144);

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x145 = 84U;
	uint16_t x146 = 3339U;
	int16_t x147 = INT16_MIN;
	int64_t x148 = 380LL;
	int64_t t34 = 6584094438531614LL;

	t34 = (((x145/x146)/x147)|x148);

	if (t34 != 380LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = -1LL;
	static int64_t x150 = -16469137985002445LL;
	static int64_t x152 = INT64_MIN;
	int64_t t35 = INT64_MIN;

	t35 = (((x149/x150)/x151)|x152);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 185657487LLU;
	static int64_t x154 = -1LL;
	volatile uint32_t x155 = 131631451U;
	volatile uint32_t x156 = 0U;
	volatile uint64_t t36 = 53614000LLU;

	t36 = (((x153/x154)/x155)|x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MAX;
	volatile uint16_t x159 = UINT16_MAX;
	static int16_t x160 = 202;
	int32_t t37 = 7798;

	t37 = (((x157/x158)/x159)|x160);

	if (t37 != 458) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x161 = 2U;
	int16_t x162 = INT16_MAX;
	static uint8_t x163 = 15U;
	uint32_t x164 = 491U;
	uint32_t t38 = 38U;

	t38 = (((x161/x162)/x163)|x164);

	if (t38 != 491U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 132U;
	static uint32_t t39 = 21U;

	t39 = (((x165/x166)/x167)|x168);

	if (t39 != 132U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	uint64_t x171 = 807144860515888LLU;
	int32_t x172 = INT32_MIN;

	t40 = (((x169/x170)/x171)|x172);

	if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = -2934LL;
	uint32_t x174 = 53226U;
	volatile int8_t x175 = -1;
	int64_t x176 = INT64_MAX;
	volatile int64_t t41 = INT64_MAX;

	t41 = (((x173/x174)/x175)|x176);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x179 = 35156929068510LL;
	static int16_t x180 = -1;
	volatile int64_t t42 = -42596352LL;

	t42 = (((x177/x178)/x179)|x180);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	volatile uint16_t x182 = 868U;
	volatile int8_t x183 = INT8_MIN;
	int32_t t43 = 710894;

	t43 = (((x181/x182)/x183)|x184);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x186 = -1LL;
	int8_t x188 = 0;
	static volatile int64_t t44 = 1864552155303870588LL;

	t44 = (((x185/x186)/x187)|x188);

	if (t44 != -41175768021673106LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x191 = INT32_MIN;
	int8_t x192 = 20;
	int32_t t45 = 1065191;

	t45 = (((x189/x190)/x191)|x192);

	if (t45 != 20) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int64_t x198 = 941LL;
	int32_t x199 = 33;
	int16_t x200 = -1;
	volatile int64_t t46 = 42777045039LL;

	t46 = (((x197/x198)/x199)|x200);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 0LLU;
	int16_t x203 = INT16_MIN;
	volatile uint32_t x204 = 4U;
	volatile uint64_t t47 = 49244896042304981LLU;

	t47 = (((x201/x202)/x203)|x204);

	if (t47 != 4LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 85U;
	int32_t x206 = -26;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = -1LL;

	t48 = (((x205/x206)/x207)|x208);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 37U;
	int32_t x212 = 73896;
	static volatile int32_t t49 = -9;

	t49 = (((x209/x210)/x211)|x212);

	if (t49 != 73896) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MAX;
	volatile int32_t x215 = INT32_MIN;
	static int64_t t50 = -208355325278LL;

	t50 = (((x213/x214)/x215)|x216);

	if (t50 != -2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 249;
	int16_t x218 = -1;
	int64_t x219 = INT64_MIN;
	static uint8_t x220 = 107U;
	volatile int64_t t51 = 5843615085824179LL;

	t51 = (((x217/x218)/x219)|x220);

	if (t51 != 107LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x221 = INT16_MIN;
	static uint16_t x222 = UINT16_MAX;
	int8_t x224 = INT8_MAX;
	volatile int32_t t52 = -36023380;

	t52 = (((x221/x222)/x223)|x224);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	static int32_t x228 = INT32_MAX;
	int64_t t53 = 113887527930617LL;

	t53 = (((x225/x226)/x227)|x228);

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 1U;
	uint16_t x231 = 11128U;
	static int64_t x232 = INT64_MIN;
	int64_t t54 = INT64_MIN;

	t54 = (((x229/x230)/x231)|x232);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 17U;
	uint32_t x234 = UINT32_MAX;
	int32_t x235 = 24024;
	volatile uint32_t t55 = 2779044U;

	t55 = (((x233/x234)/x235)|x236);

	if (t55 != 6U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x238 = -1;
	int32_t x239 = -1;
	static int8_t x240 = INT8_MAX;

	t56 = (((x237/x238)/x239)|x240);

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x242 = UINT16_MAX;
	volatile int8_t x243 = INT8_MIN;
	static uint32_t x244 = UINT32_MAX;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = (((x241/x242)/x243)|x244);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x247 = 19148196LL;
	volatile int64_t t58 = -48110289781304LL;

	t58 = (((x245/x246)/x247)|x248);

	if (t58 != 87LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x249 = -1;
	static uint32_t x250 = 13225655U;
	int32_t x251 = -1;
	volatile int64_t x252 = INT64_MIN;

	t59 = (((x249/x250)/x251)|x252);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x253 = 8114015539206LLU;
	uint32_t x255 = 117U;
	static uint8_t x256 = 0U;
	uint64_t t60 = 1339475806LLU;

	t60 = (((x253/x254)/x255)|x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x258 = -1;
	volatile uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = 640444416;
	uint64_t t61 = 3LLU;

	t61 = (((x257/x258)/x259)|x260);

	if (t61 != 640444416LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = INT64_MIN;
	uint16_t x262 = 8115U;
	int16_t x263 = -112;
	static int16_t x264 = -15340;
	volatile int64_t t62 = 216523878219LL;

	t62 = (((x261/x262)/x263)|x264);

	if (t62 != -131LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = 30;
	int8_t x266 = INT8_MIN;

	t63 = (((x265/x266)/x267)|x268);

	if (t63 != 4428859LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x271 = 13010U;
	uint32_t x272 = 16338U;
	uint64_t t64 = 1113374147386226490LLU;

	t64 = (((x269/x270)/x271)|x272);

	if (t64 != 16338LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -3;
	volatile int16_t x275 = INT16_MIN;
	static volatile uint64_t t65 = 3078506LLU;

	t65 = (((x273/x274)/x275)|x276);

	if (t65 != 21899865LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -1LL;
	int64_t x279 = INT64_MIN;
	int8_t x280 = 27;
	static volatile int64_t t66 = 550875008181352LL;

	t66 = (((x277/x278)/x279)|x280);

	if (t66 != 27LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x282 = 76757041U;
	volatile int8_t x283 = INT8_MAX;
	uint64_t x284 = 8303LLU;
	uint64_t t67 = 336864475680756LLU;

	t67 = (((x281/x282)/x283)|x284);

	if (t67 != 8303LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 1089U;
	uint8_t x286 = 3U;
	uint8_t x287 = 7U;
	uint8_t x288 = 0U;
	static volatile uint32_t t68 = 263163802U;

	t68 = (((x285/x286)/x287)|x288);

	if (t68 != 51U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x289 = -1LL;
	volatile int16_t x291 = INT16_MIN;
	int64_t t69 = -16LL;

	t69 = (((x289/x290)/x291)|x292);

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = -1LL;
	int16_t x294 = -6;
	volatile int64_t x295 = INT64_MIN;
	int64_t t70 = -1518775862LL;

	t70 = (((x293/x294)/x295)|x296);

	if (t70 != 65535LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x297 = UINT8_MAX;
	volatile int64_t x298 = -380LL;
	volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = 1U;
	volatile int64_t t71 = -154391LL;

	t71 = (((x297/x298)/x299)|x300);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x303 = -2;
	uint16_t x304 = UINT16_MAX;
	volatile uint64_t t72 = 4413770682103571562LLU;

	t72 = (((x301/x302)/x303)|x304);

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 75U;
	int32_t x306 = -75155492;
	int16_t x307 = -2;
	int32_t x308 = -12365824;
	int32_t t73 = -1007591978;

	t73 = (((x305/x306)/x307)|x308);

	if (t73 != -12365824) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	static uint8_t x311 = UINT8_MAX;
	volatile int64_t x312 = INT64_MAX;
	static int64_t t74 = -164LL;

	t74 = (((x309/x310)/x311)|x312);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = 1;
	int16_t x314 = INT16_MAX;
	int16_t x315 = -5;
	volatile int32_t t75 = -683515958;

	t75 = (((x313/x314)/x315)|x316);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = -7;

	t76 = (((x317/x318)/x319)|x320);

	if (t76 != -7) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x321 = UINT32_MAX;
	static uint32_t x324 = 217324U;
	volatile uint64_t t77 = 1814LLU;

	t77 = (((x321/x322)/x323)|x324);

	if (t77 != 217324LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x325 = 40522U;
	int32_t x326 = INT32_MAX;
	static int8_t x328 = -1;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x325/x326)/x327)|x328);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x329 = 1U;
	int64_t x330 = -698335LL;
	volatile int16_t x332 = INT16_MIN;
	volatile int64_t t79 = 1050715005LL;

	t79 = (((x329/x330)/x331)|x332);

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = -7;
	static int32_t x334 = 1739110;
	volatile int8_t x335 = 28;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t80 = 49790429;

	t80 = (((x333/x334)/x335)|x336);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	volatile int8_t x339 = INT8_MAX;
	static int64_t x340 = INT64_MAX;
	int64_t t81 = INT64_MAX;

	t81 = (((x337/x338)/x339)|x340);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x343 = INT32_MIN;
	uint64_t x344 = 7039742LLU;
	uint64_t t82 = 1LLU;

	t82 = (((x341/x342)/x343)|x344);

	if (t82 != 7039742LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x345 = 1847382427LLU;
	volatile int64_t x346 = INT64_MAX;
	int8_t x347 = 1;

	t83 = (((x345/x346)/x347)|x348);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x350 = 1457920934716802470LL;
	uint32_t x351 = 28U;
	volatile int32_t x352 = 405960580;
	int64_t t84 = 793685LL;

	t84 = (((x349/x350)/x351)|x352);

	if (t84 != 405960580LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	uint16_t x354 = 3191U;
	uint32_t x355 = 1U;
	int16_t x356 = -1;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x353/x354)/x355)|x356);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MIN;
	static int8_t x360 = INT8_MIN;
	int64_t t86 = -7793LL;

	t86 = (((x357/x358)/x359)|x360);

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MAX;
	static int8_t x363 = INT8_MIN;
	int64_t x364 = 3971133LL;
	int64_t t87 = 1791670023429750LL;

	t87 = (((x361/x362)/x363)|x364);

	if (t87 != 3971133LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x369 = INT32_MAX;
	int16_t x372 = -1;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = (((x369/x370)/x371)|x372);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x373 = -27;
	uint32_t x374 = 693115U;
	volatile int64_t x375 = INT64_MIN;
	uint64_t x376 = UINT64_MAX;
	uint64_t t89 = UINT64_MAX;

	t89 = (((x373/x374)/x375)|x376);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = 232;
	static int16_t x379 = 689;
	int8_t x380 = INT8_MAX;
	static uint64_t t90 = 2235761873477885LLU;

	t90 = (((x377/x378)/x379)|x380);

	if (t90 != 127LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x382 = -303148285884LL;
	static int64_t x383 = -1LL;
	static int64_t x384 = INT64_MIN;
	int64_t t91 = INT64_MIN;

	t91 = (((x381/x382)/x383)|x384);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 760U;
	int16_t x387 = -1;
	uint32_t t92 = 87313653U;

	t92 = (((x385/x386)/x387)|x388);

	if (t92 != 4294967288U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MIN;
	static int64_t x390 = INT64_MIN;
	static uint64_t x391 = 107761984961334LLU;
	int16_t x392 = -4022;

	t93 = (((x389/x390)/x391)|x392);

	if (t93 != 18446744073709547594LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = 246753412795710LL;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x393/x394)/x395)|x396);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x398 = 681476105LL;
	volatile uint16_t x400 = UINT16_MAX;
	uint64_t t95 = 9658525422LLU;

	t95 = (((x397/x398)/x399)|x400);

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x402 = 1288U;
	static int8_t x403 = -1;
	static uint16_t x404 = 2516U;
	int32_t t96 = -15;

	t96 = (((x401/x402)/x403)|x404);

	if (t96 != 2516) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = 135180476LL;
	static int8_t x410 = INT8_MAX;
	int64_t x411 = 134LL;
	static int16_t x412 = INT16_MIN;
	volatile int64_t t97 = -3710788441244LL;

	t97 = (((x409/x410)/x411)|x412);

	if (t97 != -24825LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x413 = -403;
	volatile uint32_t x414 = 106U;
	uint16_t x415 = 2U;
	int8_t x416 = -1;

	t98 = (((x413/x414)/x415)|x416);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MIN;
	static uint8_t x420 = UINT8_MAX;
	int32_t t99 = 4;

	t99 = (((x417/x418)/x419)|x420);

	if (t99 != 255) { NG(); } else { ; }
	
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

