#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
volatile uint8_t x6 = 1U;
uint32_t x9 = UINT32_MAX;
volatile int32_t t2 = -8025;
int32_t x14 = INT32_MIN;
volatile int32_t t5 = 23;
static uint8_t x25 = 127U;
static int64_t x32 = -1LL;
volatile int32_t t7 = 0;
int64_t x34 = INT64_MAX;
uint16_t x35 = 5984U;
uint16_t x36 = 1979U;
volatile int32_t t8 = 263784649;
uint16_t x38 = 1U;
uint16_t x42 = 1U;
static int32_t x43 = -1;
volatile uint8_t x46 = UINT8_MAX;
uint8_t x56 = 10U;
volatile int32_t t13 = -236796;
int64_t x60 = -40581LL;
static volatile int32_t t15 = 990700;
uint8_t x65 = 23U;
int16_t x67 = INT16_MIN;
uint8_t x76 = UINT8_MAX;
uint8_t x77 = UINT8_MAX;
int8_t x82 = INT8_MIN;
static uint64_t x83 = UINT64_MAX;
static uint8_t x91 = UINT8_MAX;
int8_t x92 = -1;
static int64_t x93 = -18685397495LL;
uint64_t x106 = 96742866LLU;
int8_t x110 = -1;
static uint64_t x115 = 903LLU;
volatile int32_t t27 = 33809;
int64_t x117 = INT64_MIN;
int32_t t28 = -328942;
volatile int8_t x132 = -15;
volatile int32_t t31 = -254454;
int32_t x134 = 1294;
static uint16_t x135 = UINT16_MAX;
uint16_t x151 = 31U;
static int8_t x155 = INT8_MIN;
uint8_t x156 = 0U;
static volatile uint16_t x171 = UINT16_MAX;
volatile uint64_t x173 = 160763LLU;
uint32_t x175 = 67U;
int16_t x176 = -62;
int8_t x177 = INT8_MIN;
volatile int8_t x189 = INT8_MAX;
uint64_t x192 = 139259994LLU;
int32_t t46 = 1;
volatile int32_t t48 = 219;
uint16_t x216 = 1028U;
int8_t x223 = INT8_MIN;
static uint64_t x226 = 29920501LLU;
int8_t x227 = INT8_MIN;
int64_t x232 = 7620294976931LL;
uint64_t x233 = UINT64_MAX;
int32_t t54 = 26949879;
volatile int32_t t57 = -38218;
int8_t x265 = INT8_MIN;
volatile uint16_t x290 = UINT16_MAX;
int64_t x296 = -6894704975971LL;
int32_t x300 = INT32_MAX;
int64_t x305 = 127790580LL;
uint64_t x307 = 463122721990710524LLU;
volatile int16_t x314 = 0;
volatile int16_t x317 = 44;
int32_t x326 = -1;
static volatile int32_t t76 = -125;
int32_t x345 = 8;
volatile int32_t t78 = 72104;
static uint64_t x350 = UINT64_MAX;
uint64_t x354 = 71463502324813657LLU;
int32_t t80 = -5611268;
static volatile int8_t x360 = INT8_MIN;
int32_t x363 = -1;
int32_t t84 = -3;
int8_t x377 = 12;
static int16_t x380 = INT16_MIN;
volatile int32_t t85 = 173189;
static int32_t x383 = -4882;
static int32_t t86 = -1;
int64_t x391 = 1780130236868575049LL;
int64_t x392 = INT64_MAX;
volatile int32_t t88 = 11;
uint32_t x397 = 281710U;
uint8_t x399 = UINT8_MAX;
int32_t t90 = -5;
int8_t x409 = 0;
static int64_t x429 = INT64_MIN;
uint16_t x440 = 62U;
volatile int32_t t99 = -15861;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static int16_t x3 = -1;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -5479623;

	t0 = ((x1-(x2%x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2083077405U;
	int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 5;

	t1 = ((x5-(x6%x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 21097U;
	int8_t x11 = INT8_MIN;
	static volatile int64_t x12 = -3484LL;

	t2 = ((x9-(x10%x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 126LLU;
	int16_t x15 = -47;
	uint8_t x16 = 34U;
	volatile int32_t t3 = -94575363;

	t3 = ((x13-(x14%x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -28;
	uint16_t x18 = 454U;
	uint64_t x19 = 31LLU;
	int16_t x20 = 1;
	volatile int32_t t4 = -106834769;

	t4 = ((x17-(x18%x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int8_t x22 = INT8_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	int64_t x24 = -4117566LL;

	t5 = ((x21-(x22%x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	volatile int32_t x27 = -86033598;
	int32_t x28 = INT32_MAX;
	int32_t t6 = 266;

	t6 = ((x25-(x26%x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 904861362010556037LL;
	uint8_t x30 = 52U;
	volatile int8_t x31 = INT8_MIN;

	t7 = ((x29-(x30%x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 871U;

	t8 = ((x33-(x34%x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int8_t x39 = -1;
	static int64_t x40 = 282898942044482315LL;
	volatile int32_t t9 = 14;

	t9 = ((x37-(x38%x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x44 = 3;
	static volatile int32_t t10 = -1;

	t10 = ((x41-(x42%x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x47 = INT8_MAX;
	uint64_t x48 = UINT64_MAX;
	static volatile int32_t t11 = 3963;

	t11 = ((x45-(x46%x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = -1;
	uint64_t x51 = 1083184158LLU;
	uint16_t x52 = 827U;
	static int32_t t12 = 5943;

	t12 = ((x49-(x50%x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 0U;
	uint8_t x54 = 1U;
	int16_t x55 = INT16_MIN;

	t13 = ((x53-(x54%x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = 18145U;
	int32_t x59 = -89881;
	volatile int32_t t14 = 337555;

	t14 = ((x57-(x58%x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint32_t x62 = 1093275124U;
	volatile uint16_t x63 = UINT16_MAX;
	static int8_t x64 = INT8_MAX;

	t15 = ((x61-(x62%x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 43U;
	static volatile int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 3737;

	t16 = ((x65-(x66%x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MIN;
	volatile int32_t x71 = 35738761;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = 1225960;

	t17 = ((x69-(x70%x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static uint8_t x74 = 0U;
	int64_t x75 = 4030970688537490LL;
	volatile int32_t t18 = 298;

	t18 = ((x73-(x74%x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 244U;
	volatile int64_t x79 = 5460LL;
	volatile int64_t x80 = INT64_MAX;
	static int32_t t19 = -1;

	t19 = ((x77-(x78%x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 72U;
	uint32_t x84 = UINT32_MAX;
	static volatile int32_t t20 = -3954;

	t20 = ((x81-(x82%x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = 3471;
	static volatile uint64_t x86 = 642397460013831362LLU;
	uint8_t x87 = 1U;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -46295745;

	t21 = ((x85-(x86%x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = -1;
	int32_t t22 = 3;

	t22 = ((x89-(x90%x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	uint32_t x95 = 402761276U;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 1;

	t23 = ((x93-(x94%x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	static uint16_t x100 = UINT16_MAX;
	int32_t t24 = 58120021;

	t24 = ((x97-(x98%x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	int8_t x107 = -1;
	int8_t x108 = -58;
	volatile int32_t t25 = 238060556;

	t25 = ((x105-(x106%x107))<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -2;
	int16_t x111 = -1;
	uint64_t x112 = 4LLU;
	int32_t t26 = -4138;

	t26 = ((x109-(x110%x111))<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = -1;
	int32_t x116 = INT32_MIN;

	t27 = ((x113-(x114%x115))<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = -320;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;

	t28 = ((x117-(x118%x119))<=x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MAX;
	uint32_t x123 = 43705U;
	int8_t x124 = INT8_MAX;
	static volatile int32_t t29 = -214;

	t29 = ((x121-(x122%x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -920;
	int32_t x126 = INT32_MAX;
	volatile int8_t x127 = INT8_MIN;
	static int8_t x128 = 3;
	volatile int32_t t30 = 775348;

	t30 = ((x125-(x126%x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = -1;
	int16_t x130 = -123;
	volatile int64_t x131 = 14LL;

	t31 = ((x129-(x130%x131))<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	int64_t x136 = -1LL;
	static volatile int32_t t32 = -33824;

	t32 = ((x133-(x134%x135))<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 17;
	volatile uint32_t x138 = UINT32_MAX;
	uint64_t x139 = UINT64_MAX;
	static uint32_t x140 = 193702U;
	volatile int32_t t33 = 187;

	t33 = ((x137-(x138%x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int32_t x142 = INT32_MAX;
	int64_t x143 = INT64_MAX;
	uint64_t x144 = 193600247505LLU;
	int32_t t34 = 1144258;

	t34 = ((x141-(x142%x143))<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = UINT16_MAX;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MAX;
	volatile int32_t t35 = 97;

	t35 = ((x145-(x146%x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = -9;
	int32_t x152 = INT32_MIN;
	int32_t t36 = -5;

	t36 = ((x149-(x150%x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 61U;
	volatile int64_t x154 = -1LL;
	int32_t t37 = -121;

	t37 = ((x153-(x154%x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 1;
	int32_t x158 = INT32_MIN;
	volatile int64_t x159 = 14771752416LL;
	uint32_t x160 = 73661915U;
	volatile int32_t t38 = -3694319;

	t38 = ((x157-(x158%x159))<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = 6U;
	int32_t x170 = 2021;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t39 = -8227251;

	t39 = ((x169-(x170%x171))<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x174 = -1;
	int32_t t40 = -58910;

	t40 = ((x173-(x174%x175))<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = INT16_MIN;
	int8_t x179 = -17;
	static volatile int16_t x180 = INT16_MAX;
	static int32_t t41 = -19371;

	t41 = ((x177-(x178%x179))<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = -1;
	int8_t x182 = 1;
	int16_t x183 = 62;
	int16_t x184 = -1;
	int32_t t42 = -248;

	t42 = ((x181-(x182%x183))<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -1;
	static uint8_t x186 = UINT8_MAX;
	int32_t x187 = 78;
	static uint32_t x188 = UINT32_MAX;
	volatile int32_t t43 = -116824567;

	t43 = ((x185-(x186%x187))<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x190 = INT16_MIN;
	int8_t x191 = -7;
	static volatile int32_t t44 = 256135;

	t44 = ((x189-(x190%x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x193 = 38U;
	static int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MAX;
	uint32_t x196 = 111U;
	volatile int32_t t45 = -996051061;

	t45 = ((x193-(x194%x195))<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x197 = 10LLU;
	static uint16_t x198 = 14564U;
	int64_t x199 = -1LL;
	int64_t x200 = INT64_MIN;

	t46 = ((x197-(x198%x199))<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = -1;
	int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	volatile int32_t t47 = -118855;

	t47 = ((x201-(x202%x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = 23;
	volatile uint64_t x210 = 28534378LLU;
	int16_t x211 = -3433;
	static int16_t x212 = 0;

	t48 = ((x209-(x210%x211))<=x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = 60200652196401LLU;
	int16_t x215 = INT16_MIN;
	volatile int32_t t49 = 190395;

	t49 = ((x213-(x214%x215))<=x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MAX;
	static int64_t x218 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t50 = 97;

	t50 = ((x217-(x218%x219))<=x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = INT32_MIN;
	static int16_t x222 = INT16_MIN;
	uint32_t x224 = 22553924U;
	int32_t t51 = -111475680;

	t51 = ((x221-(x222%x223))<=x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int16_t x228 = -1;
	int32_t t52 = 54235;

	t52 = ((x225-(x226%x227))<=x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = INT8_MAX;
	volatile int32_t x230 = INT32_MAX;
	int16_t x231 = -28;
	int32_t t53 = -13318;

	t53 = ((x229-(x230%x231))<=x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x234 = INT16_MAX;
	uint16_t x235 = 2819U;
	int64_t x236 = -1LL;

	t54 = ((x233-(x234%x235))<=x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MIN;
	static int8_t x238 = INT8_MAX;
	static uint64_t x239 = 31373214191307LLU;
	uint16_t x240 = 127U;
	static volatile int32_t t55 = 15932427;

	t55 = ((x237-(x238%x239))<=x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	volatile int8_t x242 = INT8_MAX;
	int64_t x243 = -125LL;
	int32_t x244 = -1;
	volatile int32_t t56 = 7593143;

	t56 = ((x241-(x242%x243))<=x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 190968U;
	static int32_t x246 = -1;
	volatile uint64_t x247 = UINT64_MAX;
	static uint64_t x248 = UINT64_MAX;

	t57 = ((x245-(x246%x247))<=x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x253 = 250U;
	uint8_t x254 = 0U;
	volatile int64_t x255 = -1LL;
	int16_t x256 = -1;
	int32_t t58 = 98603305;

	t58 = ((x253-(x254%x255))<=x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	volatile int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t59 = -977265;

	t59 = ((x257-(x258%x259))<=x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x261 = 11666109398680533LLU;
	uint16_t x262 = 3820U;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 1U;
	volatile int32_t t60 = -92;

	t60 = ((x261-(x262%x263))<=x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x266 = INT8_MAX;
	volatile int8_t x267 = INT8_MAX;
	volatile int32_t x268 = INT32_MIN;
	int32_t t61 = -101;

	t61 = ((x265-(x266%x267))<=x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 56U;
	static int32_t t62 = -3;

	t62 = ((x269-(x270%x271))<=x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MAX;
	static int16_t x278 = INT16_MAX;
	int16_t x279 = 15;
	static int32_t x280 = -1;
	static volatile int32_t t63 = -31412;

	t63 = ((x277-(x278%x279))<=x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = 5;
	static int32_t x282 = INT32_MAX;
	volatile int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t64 = -28568119;

	t64 = ((x281-(x282%x283))<=x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1469257947767LL;
	volatile uint32_t x291 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t65 = -951698782;

	t65 = ((x289-(x290%x291))<=x292);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = 2134712253791LL;
	int16_t x294 = 22;
	int16_t x295 = INT16_MIN;
	volatile int32_t t66 = 779;

	t66 = ((x293-(x294%x295))<=x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = -1;
	int64_t x299 = -2901076954463LL;
	static int32_t t67 = 1069428;

	t67 = ((x297-(x298%x299))<=x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = 3U;
	static int32_t x302 = INT32_MIN;
	static int32_t x303 = INT32_MIN;
	volatile uint64_t x304 = 849446732531LLU;
	static volatile int32_t t68 = -20656673;

	t68 = ((x301-(x302%x303))<=x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x306 = -1LL;
	uint16_t x308 = 1636U;
	static int32_t t69 = -70109;

	t69 = ((x305-(x306%x307))<=x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = -1;
	uint32_t x310 = 270647U;
	int64_t x311 = -1LL;
	volatile uint32_t x312 = 8394U;
	static int32_t t70 = 20797;

	t70 = ((x309-(x310%x311))<=x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = 49827811LL;
	uint64_t x315 = UINT64_MAX;
	uint64_t x316 = 1882095722450745LLU;
	int32_t t71 = -1325;

	t71 = ((x313-(x314%x315))<=x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x318 = UINT16_MAX;
	volatile int16_t x319 = -228;
	int8_t x320 = INT8_MIN;
	int32_t t72 = 0;

	t72 = ((x317-(x318%x319))<=x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	uint64_t x327 = 13738637768322032LLU;
	volatile int16_t x328 = 1;
	int32_t t73 = 15327599;

	t73 = ((x325-(x326%x327))<=x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x329 = -253884229LL;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	int16_t x332 = -1;
	volatile int32_t t74 = -9096352;

	t74 = ((x329-(x330%x331))<=x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MAX;
	static int32_t x335 = -1;
	volatile uint64_t x336 = 23763LLU;
	volatile int32_t t75 = -944;

	t75 = ((x333-(x334%x335))<=x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	static volatile int32_t x339 = -1;
	uint16_t x340 = UINT16_MAX;

	t76 = ((x337-(x338%x339))<=x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = INT32_MIN;
	static volatile int64_t x344 = INT64_MAX;
	int32_t t77 = 1110;

	t77 = ((x341-(x342%x343))<=x344);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x346 = INT16_MIN;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;

	t78 = ((x345-(x346%x347))<=x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x351 = -3384683LL;
	int16_t x352 = INT16_MAX;
	int32_t t79 = -63863;

	t79 = ((x349-(x350%x351))<=x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = 2603U;
	uint32_t x355 = 169662U;
	int64_t x356 = INT64_MIN;

	t80 = ((x353-(x354%x355))<=x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -1;
	int32_t t81 = -258;

	t81 = ((x357-(x358%x359))<=x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x361 = INT32_MAX;
	uint32_t x362 = 5U;
	volatile int16_t x364 = INT16_MIN;
	static int32_t t82 = -2396;

	t82 = ((x361-(x362%x363))<=x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 2571U;
	int32_t x366 = 9594;
	int8_t x367 = -1;
	uint64_t x368 = 1468LLU;
	volatile int32_t t83 = 1793093;

	t83 = ((x365-(x366%x367))<=x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MAX;
	static volatile int8_t x372 = -1;

	t84 = ((x369-(x370%x371))<=x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;

	t85 = ((x377-(x378%x379))<=x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x381 = 173769283U;
	volatile int8_t x382 = -16;
	volatile uint8_t x384 = 29U;

	t86 = ((x381-(x382%x383))<=x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MAX;
	int64_t x386 = INT64_MAX;
	static uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	static int32_t t87 = -1;

	t87 = ((x385-(x386%x387))<=x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x389 = -1;
	int64_t x390 = -12135306350916899LL;

	t88 = ((x389-(x390%x391))<=x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x393 = INT64_MAX;
	int32_t x394 = INT32_MIN;
	static volatile uint64_t x395 = 308408370614664LLU;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t89 = -2472;

	t89 = ((x393-(x394%x395))<=x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x398 = INT32_MAX;
	volatile int64_t x400 = INT64_MIN;

	t90 = ((x397-(x398%x399))<=x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = INT8_MIN;
	static int8_t x402 = 1;
	static int16_t x403 = INT16_MAX;
	uint64_t x404 = 1821696534332LLU;
	volatile int32_t t91 = 366144546;

	t91 = ((x401-(x402%x403))<=x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = 4962U;
	uint16_t x406 = 161U;
	volatile int64_t x407 = 158763LL;
	int16_t x408 = -1;
	int32_t t92 = -56;

	t92 = ((x405-(x406%x407))<=x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x410 = -1;
	uint16_t x411 = 8U;
	int64_t x412 = INT64_MIN;
	volatile int32_t t93 = 4156;

	t93 = ((x409-(x410%x411))<=x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = -1;
	static int64_t x418 = 199905579513558285LL;
	static int32_t x419 = -1;
	int8_t x420 = INT8_MIN;
	volatile int32_t t94 = 469243;

	t94 = ((x417-(x418%x419))<=x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = 29;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = 61U;
	volatile int8_t x424 = 0;
	int32_t t95 = 139;

	t95 = ((x421-(x422%x423))<=x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = -166216028700319LL;
	volatile int16_t x426 = -1;
	static uint64_t x427 = 31838346LLU;
	volatile int64_t x428 = INT64_MAX;
	volatile int32_t t96 = -12645503;

	t96 = ((x425-(x426%x427))<=x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x430 = 356;
	volatile int8_t x431 = -1;
	int64_t x432 = INT64_MIN;
	static int32_t t97 = 1;

	t97 = ((x429-(x430%x431))<=x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x433 = UINT8_MAX;
	int64_t x434 = INT64_MAX;
	volatile uint8_t x435 = UINT8_MAX;
	uint32_t x436 = 494778877U;
	int32_t t98 = 158540596;

	t98 = ((x433-(x434%x435))<=x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = INT8_MIN;
	volatile int64_t x438 = 1LL;
	static int16_t x439 = INT16_MIN;

	t99 = ((x437-(x438%x439))<=x440);

	if (t99 != 1) { NG(); } else { ; }
	
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

