#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
static volatile int32_t t1 = 389981385;
uint64_t t3 = 83118128LLU;
volatile int32_t x23 = INT32_MAX;
int32_t t4 = 14842221;
uint8_t x32 = 12U;
int32_t t6 = -3;
int8_t x36 = -1;
int32_t x39 = -1;
uint32_t x47 = 51U;
static volatile uint8_t x48 = UINT8_MAX;
volatile uint8_t x54 = 1U;
int64_t x58 = 46915LL;
int32_t x59 = INT32_MIN;
uint8_t x62 = 0U;
uint64_t x65 = UINT64_MAX;
uint32_t x70 = 2U;
int16_t x73 = INT16_MIN;
uint16_t x77 = 1672U;
int32_t t17 = 1596;
int16_t x122 = INT16_MIN;
volatile int16_t x126 = INT16_MIN;
int64_t t25 = 26364705LL;
int32_t x137 = INT32_MAX;
volatile int32_t t27 = 99;
uint32_t t28 = UINT32_MAX;
int8_t x152 = -1;
int8_t x153 = INT8_MIN;
int16_t x156 = INT16_MIN;
int8_t x160 = -1;
volatile int32_t t33 = INT32_MIN;
int32_t t34 = 40;
int8_t x181 = INT8_MIN;
static volatile int32_t t36 = -192503819;
int8_t x194 = -1;
uint64_t x195 = UINT64_MAX;
int32_t x197 = -1;
static uint64_t x205 = 27152LLU;
volatile int32_t x206 = -19368;
volatile uint32_t x207 = 9237U;
volatile uint16_t x221 = 12030U;
static int64_t x231 = INT64_MIN;
volatile uint32_t t45 = UINT32_MAX;
int32_t x237 = -825672023;
int32_t x243 = -27;
volatile uint16_t x247 = 906U;
static uint16_t x248 = 25U;
volatile int32_t t49 = 889916158;
int32_t x257 = -1;
int32_t x260 = INT32_MIN;
static volatile int32_t t52 = -7898179;
int32_t t54 = -364017;
int32_t x269 = INT32_MIN;
int32_t x270 = -15;
int16_t x276 = INT16_MIN;
static int8_t x297 = -1;
static int16_t x310 = -11;
volatile int32_t t62 = -32142;
int64_t x318 = INT64_MAX;
int8_t x319 = -1;
static int32_t x321 = INT32_MAX;
int8_t x324 = 0;
uint16_t x325 = 15U;
static int32_t t69 = -850;
static int16_t x341 = INT16_MAX;
volatile int16_t x343 = INT16_MIN;
static int32_t x344 = INT32_MIN;
int64_t x347 = -1LL;
uint32_t x349 = 17164U;
int16_t x360 = 6951;
int8_t x363 = INT8_MIN;
volatile uint8_t x365 = UINT8_MAX;
static volatile int8_t x367 = 0;
int32_t t79 = -176;
volatile uint32_t t82 = 817129U;
static int16_t x394 = INT16_MAX;
int16_t x397 = INT16_MIN;
static volatile int64_t x399 = INT64_MAX;
int64_t x401 = INT64_MIN;
volatile int32_t x403 = -85130;
uint16_t x404 = 328U;
volatile uint8_t x409 = 34U;
int32_t x411 = INT32_MIN;
int16_t x412 = -8050;
volatile uint64_t x413 = 1352LLU;
static uint16_t x416 = 3U;
int64_t x434 = INT64_MIN;
uint64_t t93 = 142787LLU;
int64_t x445 = 3541924913LL;
volatile int64_t t97 = -8553LL;


void f0(void) {
	volatile int16_t x6 = INT16_MIN;
	static volatile uint64_t x7 = 1053515998246825LLU;
	int64_t x8 = INT64_MIN;
	static volatile int64_t t0 = INT64_MIN;

	t0 = (((x5-x6)<x7)+x8);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 2U;
	volatile int32_t x11 = -1;
	uint8_t x12 = 3U;

	t1 = (((x9-x10)<x11)+x12);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -1LL;
	volatile int8_t x14 = -14;
	int8_t x15 = -15;
	static int8_t x16 = -20;
	static int32_t t2 = 471109214;

	t2 = (((x13-x14)<x15)+x16);

	if (t2 != -20) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	int64_t x18 = -1LL;
	static int8_t x19 = INT8_MIN;
	static uint64_t x20 = 4172704190230LLU;

	t3 = (((x17-x18)<x19)+x20);

	if (t3 != 4172704190230LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = -1;
	static int32_t x24 = -493;

	t4 = (((x21-x22)<x23)+x24);

	if (t4 != -492) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x25 = 61U;
	static int32_t x26 = INT32_MAX;
	int32_t x27 = INT32_MAX;
	static int16_t x28 = 144;
	int32_t t5 = 1000353280;

	t5 = (((x25-x26)<x27)+x28);

	if (t5 != 145) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 4297;
	int32_t x30 = INT32_MAX;
	volatile int64_t x31 = INT64_MIN;

	t6 = (((x29-x30)<x31)+x32);

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 82U;
	int64_t x34 = -1LL;
	static int8_t x35 = INT8_MAX;
	volatile int32_t t7 = 0;

	t7 = (((x33-x34)<x35)+x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 2U;
	int8_t x38 = -1;
	int32_t x40 = INT32_MIN;
	static int32_t t8 = INT32_MIN;

	t8 = (((x37-x38)<x39)+x40);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 5877U;
	int16_t x46 = INT16_MAX;
	volatile int32_t t9 = 69;

	t9 = (((x45-x46)<x47)+x48);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	static int32_t x51 = -1;
	volatile int64_t x52 = INT64_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (((x49-x50)<x51)+x52);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 313;
	static int32_t x55 = -98;
	int8_t x56 = INT8_MAX;
	int32_t t11 = 21484;

	t11 = (((x53-x54)<x55)+x56);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x57 = 6U;
	int8_t x60 = INT8_MIN;
	static int32_t t12 = 3478;

	t12 = (((x57-x58)<x59)+x60);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x61 = 42643;
	static volatile int16_t x63 = INT16_MIN;
	static volatile int8_t x64 = INT8_MIN;
	volatile int32_t t13 = 177177155;

	t13 = (((x61-x62)<x63)+x64);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x66 = INT64_MAX;
	int16_t x67 = 80;
	static uint16_t x68 = 25U;
	static volatile int32_t t14 = -7;

	t14 = (((x65-x66)<x67)+x68);

	if (t14 != 25) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 124U;
	static int32_t x71 = INT32_MIN;
	static volatile int32_t x72 = 54;
	volatile int32_t t15 = -311012;

	t15 = (((x69-x70)<x71)+x72);

	if (t15 != 55) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = -61;
	int8_t x75 = -1;
	volatile int16_t x76 = INT16_MIN;
	int32_t t16 = 7;

	t16 = (((x73-x74)<x75)+x76);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = 2U;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;

	t17 = (((x77-x78)<x79)+x80);

	if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 52U;
	int8_t x86 = INT8_MIN;
	volatile int64_t x87 = 497543119416LL;
	volatile uint16_t x88 = 7613U;
	int32_t t18 = 539843864;

	t18 = (((x85-x86)<x87)+x88);

	if (t18 != 7614) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	uint32_t x95 = 3874U;
	static int64_t x96 = INT64_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = (((x93-x94)<x95)+x96);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -2;
	uint16_t x98 = UINT16_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int8_t x100 = INT8_MIN;
	int32_t t20 = 0;

	t20 = (((x97-x98)<x99)+x100);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = 6;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	static int32_t t21 = INT32_MAX;

	t21 = (((x101-x102)<x103)+x104);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = 126LL;
	uint16_t x106 = 132U;
	volatile uint16_t x107 = 258U;
	int64_t x108 = -1229LL;
	volatile int64_t t22 = -43252113LL;

	t22 = (((x105-x106)<x107)+x108);

	if (t22 != -1228LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 1U;
	int32_t x112 = -1;
	volatile int32_t t23 = -1;

	t23 = (((x109-x110)<x111)+x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = 5U;
	static uint8_t x123 = 50U;
	int64_t x124 = -269414928LL;
	static volatile int64_t t24 = -199765952LL;

	t24 = (((x121-x122)<x123)+x124);

	if (t24 != -269414928LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	int16_t x127 = -164;
	static int64_t x128 = -149727258LL;

	t25 = (((x125-x126)<x127)+x128);

	if (t25 != -149727258LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x129 = INT16_MAX;
	int32_t x130 = 872377173;
	volatile int16_t x131 = -1;
	static uint64_t x132 = UINT64_MAX;
	uint64_t t26 = 65LLU;

	t26 = (((x129-x130)<x131)+x132);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x138 = UINT16_MAX;
	uint32_t x139 = UINT32_MAX;
	int16_t x140 = -1;

	t27 = (((x137-x138)<x139)+x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x141 = UINT64_MAX;
	uint16_t x142 = 8704U;
	int32_t x143 = 1112764;
	uint32_t x144 = UINT32_MAX;

	t28 = (((x141-x142)<x143)+x144);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -122;
	static volatile int32_t t29 = -18;

	t29 = (((x145-x146)<x147)+x148);

	if (t29 != -121) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 25803565015LLU;
	uint32_t x150 = UINT32_MAX;
	static int32_t x151 = -1;
	volatile int32_t t30 = -261;

	t30 = (((x149-x150)<x151)+x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x154 = INT32_MIN;
	int32_t x155 = -47916;
	volatile int32_t t31 = 493726586;

	t31 = (((x153-x154)<x155)+x156);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 663978LLU;
	int16_t x159 = INT16_MAX;
	volatile int32_t t32 = 0;

	t32 = (((x157-x158)<x159)+x160);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 123U;
	uint16_t x166 = 765U;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;

	t33 = (((x165-x166)<x167)+x168);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x169 = UINT32_MAX;
	volatile int32_t x170 = -1;
	int8_t x171 = -6;
	static uint16_t x172 = 5599U;

	t34 = (((x169-x170)<x171)+x172);

	if (t34 != 5600) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x173 = 1;
	static volatile int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = 3136U;
	volatile int32_t t35 = -155266642;

	t35 = (((x173-x174)<x175)+x176);

	if (t35 != 3137) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x182 = UINT16_MAX;
	uint8_t x183 = 3U;
	int32_t x184 = INT32_MIN;

	t36 = (((x181-x182)<x183)+x184);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x185 = -78;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 0U;
	int8_t x188 = 0;
	int32_t t37 = 57;

	t37 = (((x185-x186)<x187)+x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x193 = INT8_MIN;
	volatile int8_t x196 = -1;
	int32_t t38 = 4159;

	t38 = (((x193-x194)<x195)+x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x198 = 6U;
	int32_t x199 = INT32_MAX;
	volatile int32_t x200 = -6244;
	static volatile int32_t t39 = 8;

	t39 = (((x197-x198)<x199)+x200);

	if (t39 != -6244) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x208 = -1;
	int32_t t40 = -7;

	t40 = (((x205-x206)<x207)+x208);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = -1;
	static volatile int16_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	int32_t t41 = -63;

	t41 = (((x209-x210)<x211)+x212);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = -1719502;
	int8_t x218 = 2;
	static int8_t x219 = 4;
	int32_t x220 = INT32_MIN;
	volatile int32_t t42 = -315681504;

	t42 = (((x217-x218)<x219)+x220);

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x222 = INT16_MIN;
	uint8_t x223 = 1U;
	volatile int32_t x224 = -1;
	int32_t t43 = -81749510;

	t43 = (((x221-x222)<x223)+x224);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	volatile int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 46U;
	volatile int32_t t44 = 308935;

	t44 = (((x225-x226)<x227)+x228);

	if (t44 != 46) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x229 = INT64_MAX;
	int16_t x230 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;

	t45 = (((x229-x230)<x231)+x232);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 2927435U;
	int32_t x236 = INT32_MIN;
	volatile int32_t t46 = -1878;

	t46 = (((x233-x234)<x235)+x236);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x238 = UINT16_MAX;
	int8_t x239 = -1;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t47 = -7;

	t47 = (((x237-x238)<x239)+x240);

	if (t47 != 65536) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = 1;
	int64_t x242 = -1LL;
	uint16_t x244 = 111U;
	volatile int32_t t48 = 252731;

	t48 = (((x241-x242)<x243)+x244);

	if (t48 != 111) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MIN;

	t49 = (((x245-x246)<x247)+x248);

	if (t49 != 26) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = UINT16_MAX;
	static int64_t x250 = INT64_MAX;
	static uint64_t x251 = 47623429298809LLU;
	int16_t x252 = INT16_MIN;
	int32_t t50 = 297805715;

	t50 = (((x249-x250)<x251)+x252);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x253 = 3527964U;
	static int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 184U;
	volatile uint32_t t51 = 3U;

	t51 = (((x253-x254)<x255)+x256);

	if (t51 != 185U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = INT16_MAX;

	t52 = (((x257-x258)<x259)+x260);

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = -12474117281753068LL;
	uint16_t x262 = UINT16_MAX;
	static int8_t x263 = INT8_MIN;
	static int16_t x264 = -14;
	int32_t t53 = 2015;

	t53 = (((x261-x262)<x263)+x264);

	if (t53 != -13) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = 1U;
	uint8_t x266 = UINT8_MAX;
	static uint64_t x267 = UINT64_MAX;
	uint8_t x268 = 81U;

	t54 = (((x265-x266)<x267)+x268);

	if (t54 != 82) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x271 = 4972340;
	uint8_t x272 = 52U;
	volatile int32_t t55 = 1627790;

	t55 = (((x269-x270)<x271)+x272);

	if (t55 != 53) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x273 = INT16_MAX;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = 10446;
	volatile int32_t t56 = 27;

	t56 = (((x273-x274)<x275)+x276);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = 13U;
	volatile int8_t x286 = -1;
	int32_t x287 = -3516976;
	int16_t x288 = -5863;
	volatile int32_t t57 = -59817961;

	t57 = (((x285-x286)<x287)+x288);

	if (t57 != -5863) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x289 = 19;
	static int64_t x290 = -116380036404118199LL;
	uint32_t x291 = UINT32_MAX;
	static volatile int64_t x292 = 21LL;
	volatile int64_t t58 = 9075519495LL;

	t58 = (((x289-x290)<x291)+x292);

	if (t58 != 21LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x298 = UINT8_MAX;
	int16_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t59 = 79556;

	t59 = (((x297-x298)<x299)+x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x301 = INT8_MAX;
	int64_t x302 = -1LL;
	int8_t x303 = 0;
	uint16_t x304 = 22438U;
	volatile int32_t t60 = 47900;

	t60 = (((x301-x302)<x303)+x304);

	if (t60 != 22438) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x305 = 693548023;
	uint8_t x306 = 0U;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MAX;
	static volatile int32_t t61 = 5311;

	t61 = (((x305-x306)<x307)+x308);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x311 = 3811915594619803181LLU;
	static volatile int16_t x312 = -96;

	t62 = (((x309-x310)<x311)+x312);

	if (t62 != -96) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x313 = INT64_MIN;
	uint64_t x314 = 82705951200808122LLU;
	volatile int16_t x315 = INT16_MIN;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t63 = 35369501140950741LLU;

	t63 = (((x313-x314)<x315)+x316);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x317 = INT16_MAX;
	int16_t x320 = -15;
	static int32_t t64 = 20345151;

	t64 = (((x317-x318)<x319)+x320);

	if (t64 != -14) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x322 = 13U;
	int8_t x323 = INT8_MAX;
	static volatile int32_t t65 = 17271;

	t65 = (((x321-x322)<x323)+x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x326 = INT16_MAX;
	int64_t x327 = -22LL;
	static int16_t x328 = INT16_MIN;
	static volatile int32_t t66 = -49;

	t66 = (((x325-x326)<x327)+x328);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = 6U;
	volatile int16_t x331 = -1;
	uint8_t x332 = 0U;
	int32_t t67 = -17378515;

	t67 = (((x329-x330)<x331)+x332);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = 5U;
	uint8_t x335 = 0U;
	volatile uint64_t x336 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x333-x334)<x335)+x336);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = 0;
	uint32_t x338 = UINT32_MAX;
	static int64_t x339 = INT64_MAX;
	int32_t x340 = INT32_MIN;

	t69 = (((x337-x338)<x339)+x340);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x342 = -1;
	volatile int32_t t70 = INT32_MIN;

	t70 = (((x341-x342)<x343)+x344);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x345 = 31090;
	volatile int64_t x346 = -69402522454142564LL;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t71 = -22767413;

	t71 = (((x345-x346)<x347)+x348);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	static volatile int64_t x352 = INT64_MIN;
	int64_t t72 = 22010113324296LL;

	t72 = (((x349-x350)<x351)+x352);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x353 = INT16_MAX;
	uint8_t x354 = UINT8_MAX;
	uint32_t x355 = 1845921U;
	int16_t x356 = -1;
	int32_t t73 = -118067;

	t73 = (((x353-x354)<x355)+x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x357 = 6200622861214LL;
	uint8_t x358 = 9U;
	static int32_t x359 = INT32_MAX;
	int32_t t74 = 1321;

	t74 = (((x357-x358)<x359)+x360);

	if (t74 != 6951) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x361 = -7302594;
	int32_t x362 = -4;
	uint64_t x364 = 7040985378424LLU;
	volatile uint64_t t75 = 1726270140709977386LLU;

	t75 = (((x361-x362)<x363)+x364);

	if (t75 != 7040985378425LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x366 = 107U;
	static int64_t x368 = 34591222767LL;
	volatile int64_t t76 = 10982763LL;

	t76 = (((x365-x366)<x367)+x368);

	if (t76 != 34591222767LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x369 = 4;
	uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = -230373536LL;
	static int64_t x372 = INT64_MIN;
	static int64_t t77 = INT64_MIN;

	t77 = (((x369-x370)<x371)+x372);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 112888553391163LLU;
	static int8_t x374 = 63;
	volatile uint32_t x375 = 22146U;
	uint8_t x376 = 110U;
	int32_t t78 = 19;

	t78 = (((x373-x374)<x375)+x376);

	if (t78 != 110) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x377 = -2;
	uint64_t x378 = 57167368383746747LLU;
	volatile int32_t x379 = -1;
	volatile int32_t x380 = 304591;

	t79 = (((x377-x378)<x379)+x380);

	if (t79 != 304592) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 87301U;
	int8_t x382 = -23;
	static int64_t x383 = 716490938685326LL;
	uint16_t x384 = 11U;
	volatile int32_t t80 = 433;

	t80 = (((x381-x382)<x383)+x384);

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x385 = 108U;
	static volatile uint64_t x386 = 15242286537266LLU;
	int32_t x387 = -18;
	int32_t x388 = INT32_MIN;
	volatile int32_t t81 = 7483;

	t81 = (((x385-x386)<x387)+x388);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = -1;
	int8_t x390 = INT8_MAX;
	int8_t x391 = -27;
	volatile uint32_t x392 = 53375U;

	t82 = (((x389-x390)<x391)+x392);

	if (t82 != 53376U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x393 = INT32_MAX;
	int8_t x395 = -1;
	int8_t x396 = INT8_MIN;
	int32_t t83 = 115581;

	t83 = (((x393-x394)<x395)+x396);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x398 = 157047397675868257LLU;
	static volatile uint32_t x400 = UINT32_MAX;
	uint32_t t84 = UINT32_MAX;

	t84 = (((x397-x398)<x399)+x400);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x402 = INT8_MIN;
	int32_t t85 = -7269;

	t85 = (((x401-x402)<x403)+x404);

	if (t85 != 329) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int8_t x406 = INT8_MIN;
	uint32_t x407 = 195502U;
	uint16_t x408 = 11319U;
	int32_t t86 = 2;

	t86 = (((x405-x406)<x407)+x408);

	if (t86 != 11320) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x410 = -1LL;
	int32_t t87 = 102;

	t87 = (((x409-x410)<x411)+x412);

	if (t87 != -8050) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x414 = 51U;
	uint32_t x415 = 78191669U;
	int32_t t88 = -162778;

	t88 = (((x413-x414)<x415)+x416);

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = 1828543995U;
	int32_t x422 = INT32_MAX;
	int32_t x423 = 21703459;
	uint16_t x424 = 0U;
	static int32_t t89 = -1;

	t89 = (((x421-x422)<x423)+x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = -1;
	int8_t x426 = -1;
	volatile uint64_t x427 = UINT64_MAX;
	static uint8_t x428 = UINT8_MAX;
	int32_t t90 = 200757563;

	t90 = (((x425-x426)<x427)+x428);

	if (t90 != 256) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x429 = UINT64_MAX;
	uint32_t x430 = UINT32_MAX;
	int64_t x431 = -2LL;
	volatile int16_t x432 = 3036;
	static int32_t t91 = 9;

	t91 = (((x429-x430)<x431)+x432);

	if (t91 != 3037) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = -42;
	int8_t x435 = INT8_MIN;
	int32_t x436 = 86267314;
	int32_t t92 = -247592;

	t92 = (((x433-x434)<x435)+x436);

	if (t92 != 86267314) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = -1LL;
	volatile uint32_t x438 = 505U;
	int16_t x439 = 6542;
	uint64_t x440 = 1531058853LLU;

	t93 = (((x437-x438)<x439)+x440);

	if (t93 != 1531058854LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x441 = 446;
	uint16_t x442 = 15454U;
	volatile int32_t x443 = INT32_MAX;
	static uint64_t x444 = 3823590LLU;
	uint64_t t94 = 1LLU;

	t94 = (((x441-x442)<x443)+x444);

	if (t94 != 3823591LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x446 = 31603989U;
	uint8_t x447 = UINT8_MAX;
	volatile int16_t x448 = 19;
	volatile int32_t t95 = 88468;

	t95 = (((x445-x446)<x447)+x448);

	if (t95 != 19) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = -1;
	uint8_t x450 = 28U;
	static volatile int16_t x451 = INT16_MAX;
	volatile int64_t x452 = INT64_MIN;
	volatile int64_t t96 = 348845967271158639LL;

	t96 = (((x449-x450)<x451)+x452);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x453 = -22;
	int16_t x454 = 7222;
	int64_t x455 = INT64_MIN;
	int64_t x456 = -1LL;

	t97 = (((x453-x454)<x455)+x456);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x457 = 210090U;
	uint16_t x458 = 294U;
	volatile int64_t x459 = INT64_MIN;
	int64_t x460 = 30LL;
	int64_t t98 = 520468LL;

	t98 = (((x457-x458)<x459)+x460);

	if (t98 != 30LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = -1LL;
	int64_t x463 = -1LL;
	int64_t x464 = 34LL;
	int64_t t99 = -764870267LL;

	t99 = (((x461-x462)<x463)+x464);

	if (t99 != 34LL) { NG(); } else { ; }
	
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
