#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = UINT64_MAX;
int32_t x6 = -20481596;
volatile int32_t t1 = -268497;
volatile int32_t t2 = -1;
volatile uint64_t x18 = UINT64_MAX;
static int32_t t7 = 87183;
static volatile int32_t t8 = -870644;
int32_t x40 = INT32_MAX;
int32_t x44 = INT32_MIN;
int8_t x46 = INT8_MIN;
uint16_t x48 = UINT16_MAX;
uint16_t x49 = UINT16_MAX;
static int8_t x51 = INT8_MIN;
uint16_t x52 = 15U;
volatile int32_t x56 = -1;
static volatile uint64_t x57 = UINT64_MAX;
uint8_t x58 = 0U;
static uint16_t x64 = 2U;
uint64_t x67 = 0LLU;
volatile int32_t t16 = 84619;
static int16_t x71 = INT16_MIN;
int16_t x72 = INT16_MIN;
int16_t x74 = -1;
int32_t t19 = 89221;
volatile int32_t t20 = 864816329;
volatile uint64_t x85 = UINT64_MAX;
volatile int16_t x89 = 14;
uint16_t x97 = UINT16_MAX;
int32_t x100 = INT32_MIN;
volatile int32_t t24 = -1;
int64_t x103 = INT64_MIN;
int32_t t27 = -7;
volatile int8_t x116 = 0;
uint64_t x119 = UINT64_MAX;
static volatile int32_t t30 = 3842;
int8_t x140 = INT8_MIN;
static int8_t x145 = -1;
static int32_t x155 = INT32_MIN;
int64_t x158 = INT64_MIN;
volatile int32_t t39 = 223796484;
int8_t x161 = INT8_MIN;
int8_t x165 = 1;
volatile uint32_t x168 = 2698U;
volatile int32_t t42 = 1984077;
static int32_t t43 = 9263;
int8_t x177 = INT8_MAX;
int16_t x186 = -12544;
int64_t x187 = -11677930423LL;
static int64_t x188 = -221880853908810LL;
volatile uint16_t x190 = 11301U;
volatile int8_t x192 = INT8_MIN;
int32_t t47 = -88128850;
static uint32_t x195 = UINT32_MAX;
int16_t x196 = INT16_MIN;
int64_t x198 = -1LL;
volatile int64_t x200 = INT64_MIN;
int32_t x202 = -49;
int32_t x203 = -2055632;
static volatile int32_t t50 = -527;
int64_t x219 = INT64_MAX;
static int32_t x225 = 25;
volatile int64_t x230 = INT64_MAX;
uint32_t x232 = 175179085U;
int32_t t57 = -4653001;
int64_t x238 = 831187298LL;
int32_t t59 = 45281725;
static int32_t x243 = -1;
int32_t t61 = -960260225;
int16_t x255 = -1;
int8_t x257 = 0;
uint64_t x258 = UINT64_MAX;
int16_t x260 = 5675;
static volatile int32_t x273 = INT32_MAX;
volatile int32_t t70 = -8903;
uint8_t x288 = UINT8_MAX;
int64_t x291 = INT64_MIN;
int32_t x295 = INT32_MAX;
int32_t x300 = INT32_MAX;
static int64_t x301 = 1253887632361LL;
uint8_t x302 = UINT8_MAX;
uint8_t x304 = 20U;
static volatile int32_t t75 = 3255;
int16_t x311 = -1;
int64_t x317 = -1LL;
int64_t x320 = INT64_MIN;
volatile int32_t t79 = -36584;
volatile uint64_t x325 = UINT64_MAX;
uint8_t x348 = 117U;
int32_t t87 = -419201;
uint16_t x354 = UINT16_MAX;
volatile int8_t x355 = INT8_MIN;
static int32_t t88 = 108;
int32_t t90 = -1921;
int16_t x368 = -4218;
int16_t x376 = INT16_MIN;
volatile int32_t x381 = -471043;
int64_t x387 = 13314876602LL;
int16_t x389 = 7;
volatile uint8_t x390 = 0U;
int32_t t97 = 0;
static int64_t x394 = INT64_MIN;
static volatile int32_t t98 = -2;
static int32_t x397 = INT32_MAX;
static volatile int64_t x399 = -1LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MAX;
	volatile int32_t x4 = INT32_MAX;
	int32_t t0 = 19561003;

	t0 = ((x1<(x2^x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 7214519470705LL;
	volatile int64_t x7 = 386564566752LL;
	static int64_t x8 = -37770534LL;

	t1 = ((x5<(x6^x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int32_t x10 = -1;
	volatile int64_t x11 = -1LL;
	uint64_t x12 = 1532839009LLU;

	t2 = ((x9<(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static int32_t x14 = INT32_MIN;
	uint32_t x15 = UINT32_MAX;
	volatile int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -18;

	t3 = ((x13<(x14^x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 53;
	static uint32_t x19 = UINT32_MAX;
	uint16_t x20 = UINT16_MAX;
	static volatile int32_t t4 = 22403352;

	t4 = ((x17<(x18^x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	static volatile int8_t x23 = INT8_MIN;
	int64_t x24 = -213667150792LL;
	static volatile int32_t t5 = 259804328;

	t5 = ((x21<(x22^x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 790;
	static int16_t x26 = -1;
	uint16_t x27 = 5537U;
	int16_t x28 = 1851;
	int32_t t6 = 17507005;

	t6 = ((x25<(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1735U;
	static uint8_t x30 = UINT8_MAX;
	uint32_t x31 = 5398U;
	uint8_t x32 = UINT8_MAX;

	t7 = ((x29<(x30^x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = 119628252U;
	int32_t x34 = -1;
	static int16_t x35 = -1;
	uint64_t x36 = 305LLU;

	t8 = ((x33<(x34^x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 0U;
	volatile int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MAX;
	static volatile int32_t t9 = -970;

	t9 = ((x37<(x38^x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 3U;
	volatile int8_t x42 = -1;
	volatile int64_t x43 = 1002693597692225324LL;
	static int32_t t10 = -19;

	t10 = ((x41<(x42^x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 1680593LLU;
	int32_t x47 = -1;
	static volatile int32_t t11 = -263662450;

	t11 = ((x45<(x46^x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	int32_t t12 = 315036216;

	t12 = ((x49<(x50^x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 3581883;
	static uint32_t x54 = UINT32_MAX;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = 29;

	t13 = ((x53<(x54^x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x59 = 634471930;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = -1;

	t14 = ((x57<(x58^x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile int32_t x62 = -1;
	volatile uint64_t x63 = 7412687863LLU;
	int32_t t15 = -3;

	t15 = ((x61<(x62^x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static uint32_t x66 = 1463U;
	uint8_t x68 = 2U;

	t16 = ((x65<(x66^x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	volatile int32_t t17 = -251;

	t17 = ((x69<(x70^x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	static int32_t x75 = INT32_MIN;
	uint32_t x76 = 1750117311U;
	int32_t t18 = -12187;

	t18 = ((x73<(x74^x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static uint64_t x78 = UINT64_MAX;
	int8_t x79 = 0;
	static uint64_t x80 = UINT64_MAX;

	t19 = ((x77<(x78^x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int32_t x82 = -1;
	volatile int8_t x83 = -1;
	volatile int16_t x84 = 0;

	t20 = ((x81<(x82^x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 0U;
	int8_t x87 = 1;
	uint32_t x88 = 136563U;
	volatile int32_t t21 = -107;

	t21 = ((x85<(x86^x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 168239;
	static int8_t x91 = INT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 1;

	t22 = ((x89<(x90^x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int16_t x94 = INT16_MIN;
	static int32_t x95 = INT32_MIN;
	volatile uint8_t x96 = 7U;
	static volatile int32_t t23 = -9486;

	t23 = ((x93<(x94^x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = -1;
	static int32_t x99 = INT32_MIN;

	t24 = ((x97<(x98^x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 4;
	uint32_t x102 = UINT32_MAX;
	int8_t x104 = 3;
	static volatile int32_t t25 = 951;

	t25 = ((x101<(x102^x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint16_t x106 = 934U;
	int32_t x107 = -1;
	int64_t x108 = -1LL;
	volatile int32_t t26 = -5;

	t26 = ((x105<(x106^x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 0;
	volatile int64_t x110 = INT64_MAX;
	int8_t x111 = -1;
	volatile uint64_t x112 = 33771503995285LLU;

	t27 = ((x109<(x110^x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -56401LL;
	static volatile uint32_t x114 = 19995U;
	int8_t x115 = INT8_MIN;
	volatile int32_t t28 = 17;

	t28 = ((x113<(x114^x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	volatile int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -19112500;

	t29 = ((x117<(x118^x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	volatile int64_t x122 = -887432007536942LL;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = 5;

	t30 = ((x121<(x122^x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 3178962703LL;
	int32_t x126 = INT32_MIN;
	volatile int32_t x127 = 11963;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = 1;

	t31 = ((x125<(x126^x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 14662U;
	static int8_t x131 = -32;
	static int64_t x132 = -1LL;
	int32_t t32 = 7982;

	t32 = ((x129<(x130^x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1785381121100LL;
	static volatile int64_t x134 = -44485104193428LL;
	static uint64_t x135 = 1026182021964999556LLU;
	static uint32_t x136 = 5U;
	int32_t t33 = -612745;

	t33 = ((x133<(x134^x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 352U;
	int32_t x138 = INT32_MIN;
	static int32_t x139 = 68558;
	static volatile int32_t t34 = 25336131;

	t34 = ((x137<(x138^x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MAX;
	volatile int64_t x143 = -1LL;
	static uint32_t x144 = UINT32_MAX;
	int32_t t35 = -17;

	t35 = ((x141<(x142^x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = 2034LL;
	int16_t x147 = INT16_MAX;
	int16_t x148 = -1;
	int32_t t36 = -465127;

	t36 = ((x145<(x146^x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -31;
	uint8_t x150 = UINT8_MAX;
	int32_t x151 = INT32_MIN;
	static int8_t x152 = 1;
	volatile int32_t t37 = 63;

	t37 = ((x149<(x150^x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 40972179U;
	int16_t x154 = 503;
	uint32_t x156 = 515U;
	int32_t t38 = -2434;

	t38 = ((x153<(x154^x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	uint16_t x159 = 9846U;
	int8_t x160 = INT8_MIN;

	t39 = ((x157<(x158^x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x162 = 200U;
	int16_t x163 = INT16_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 53851325;

	t40 = ((x161<(x162^x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	volatile int32_t t41 = -2667;

	t41 = ((x165<(x166^x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 94U;
	static int16_t x170 = -1;
	int16_t x171 = -1;
	int32_t x172 = -1;

	t42 = ((x169<(x170^x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 0U;
	int16_t x174 = INT16_MAX;
	uint32_t x175 = 3U;
	int64_t x176 = INT64_MIN;

	t43 = ((x173<(x174^x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = -1;
	int8_t x179 = -30;
	int8_t x180 = 7;
	volatile int32_t t44 = -219526984;

	t44 = ((x177<(x178^x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 800U;
	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 196583413U;
	int64_t x184 = 25784LL;
	static volatile int32_t t45 = 8957;

	t45 = ((x181<(x182^x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int32_t t46 = 15119697;

	t46 = ((x185<(x186^x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 178LLU;
	uint16_t x191 = 9653U;

	t47 = ((x189<(x190^x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 73;
	uint8_t x194 = 1U;
	static volatile int32_t t48 = 13902001;

	t48 = ((x193<(x194^x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int16_t x199 = 3;
	int32_t t49 = -32904029;

	t49 = ((x197<(x198^x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = UINT64_MAX;
	uint8_t x204 = UINT8_MAX;

	t50 = ((x201<(x202^x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 48616LL;
	volatile uint16_t x206 = 55U;
	uint8_t x207 = 1U;
	uint32_t x208 = 17U;
	int32_t t51 = -1;

	t51 = ((x205<(x206^x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 56107191822921712LL;
	static int16_t x210 = 0;
	volatile int64_t x211 = INT64_MIN;
	uint32_t x212 = 101U;
	int32_t t52 = 1340;

	t52 = ((x209<(x210^x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -1;
	static int32_t x214 = INT32_MAX;
	int64_t x215 = INT64_MAX;
	static volatile uint16_t x216 = 491U;
	int32_t t53 = -1;

	t53 = ((x213<(x214^x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = UINT64_MAX;
	int64_t x218 = INT64_MIN;
	int32_t x220 = INT32_MAX;
	int32_t t54 = -81587971;

	t54 = ((x217<(x218^x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	static int16_t x222 = INT16_MAX;
	uint8_t x223 = 2U;
	int64_t x224 = -290241981LL;
	int32_t t55 = -77107;

	t55 = ((x221<(x222^x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = UINT16_MAX;
	volatile uint64_t x227 = 61533594501LLU;
	volatile uint32_t x228 = 42U;
	volatile int32_t t56 = 25238090;

	t56 = ((x225<(x226^x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -7334;
	int32_t x231 = INT32_MIN;

	t57 = ((x229<(x230^x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 2U;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MAX;
	int64_t x236 = -1LL;
	int32_t t58 = 60661045;

	t58 = ((x233<(x234^x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	int32_t x240 = -1;

	t59 = ((x237<(x238^x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -4;
	volatile uint32_t x242 = 8739U;
	static int16_t x244 = -3;
	volatile int32_t t60 = 746298;

	t60 = ((x241<(x242^x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	volatile int16_t x247 = -33;
	static int8_t x248 = INT8_MIN;

	t61 = ((x245<(x246^x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -37;
	int8_t x250 = -1;
	static uint64_t x251 = 3578LLU;
	uint64_t x252 = 870843881498910399LLU;
	int32_t t62 = -345344633;

	t62 = ((x249<(x250^x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 3551U;
	int32_t x254 = INT32_MIN;
	int16_t x256 = -1;
	int32_t t63 = -501;

	t63 = ((x253<(x254^x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x259 = UINT8_MAX;
	int32_t t64 = -20;

	t64 = ((x257<(x258^x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -25;
	int16_t x262 = 1555;
	int16_t x263 = INT16_MAX;
	uint8_t x264 = 15U;
	int32_t t65 = -1164447;

	t65 = ((x261<(x262^x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1880;
	static uint16_t x266 = 392U;
	volatile uint32_t x267 = 108768845U;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 26724872;

	t66 = ((x265<(x266^x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	static uint32_t x270 = 4U;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -8996;

	t67 = ((x269<(x270^x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = 129U;
	int32_t x275 = 8431;
	int64_t x276 = 1962LL;
	int32_t t68 = -1994;

	t68 = ((x273<(x274^x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -177;
	int64_t x278 = INT64_MIN;
	int16_t x279 = -1;
	uint64_t x280 = 1855LLU;
	static volatile int32_t t69 = 993954;

	t69 = ((x277<(x278^x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 1123960134321163LLU;
	int64_t x282 = 1041393882LL;
	int16_t x283 = -1;
	int8_t x284 = -1;

	t70 = ((x281<(x282^x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	static int8_t x286 = 1;
	static uint16_t x287 = 525U;
	static volatile int32_t t71 = 203674;

	t71 = ((x285<(x286^x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	uint16_t x290 = 524U;
	static int64_t x292 = INT64_MIN;
	volatile int32_t t72 = 11143;

	t72 = ((x289<(x290^x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x294 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = -171603029;

	t73 = ((x293<(x294^x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	int8_t x299 = 13;
	volatile int32_t t74 = 55947690;

	t74 = ((x297<(x298^x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x303 = 6575224U;

	t75 = ((x301<(x302^x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static volatile uint8_t x306 = 14U;
	uint16_t x307 = 19536U;
	uint32_t x308 = 10511463U;
	int32_t t76 = -53187466;

	t76 = ((x305<(x306^x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	static int8_t x312 = -1;
	volatile int32_t t77 = 9170032;

	t77 = ((x309<(x310^x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static int32_t x314 = -11;
	int8_t x315 = INT8_MIN;
	int64_t x316 = -49747489LL;
	volatile int32_t t78 = -388704452;

	t78 = ((x313<(x314^x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 86U;
	static uint64_t x319 = UINT64_MAX;

	t79 = ((x317<(x318^x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = INT32_MAX;
	uint32_t x323 = 265U;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t80 = 345832471;

	t80 = ((x321<(x322^x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x326 = -4;
	int64_t x327 = -188622LL;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = -66671230;

	t81 = ((x325<(x326^x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	int16_t x330 = 2418;
	uint16_t x331 = 13914U;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = -78;

	t82 = ((x329<(x330^x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -52;
	int8_t x334 = 3;
	int64_t x335 = INT64_MAX;
	int8_t x336 = 6;
	volatile int32_t t83 = 1689;

	t83 = ((x333<(x334^x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	static int8_t x338 = -1;
	uint32_t x339 = 109996U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -134966018;

	t84 = ((x337<(x338^x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = 0;
	volatile uint16_t x342 = 10U;
	uint32_t x343 = 6U;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = 621;

	t85 = ((x341<(x342^x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	volatile uint64_t x346 = 2501LLU;
	volatile uint64_t x347 = 2082057LLU;
	int32_t t86 = 12;

	t86 = ((x345<(x346^x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 0U;
	uint64_t x350 = UINT64_MAX;
	static int16_t x351 = INT16_MAX;
	int8_t x352 = 1;

	t87 = ((x349<(x350^x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile uint32_t x356 = 57548U;

	t88 = ((x353<(x354^x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = 1U;
	int64_t x358 = INT64_MIN;
	uint8_t x359 = UINT8_MAX;
	static volatile int32_t x360 = INT32_MAX;
	int32_t t89 = -18090;

	t89 = ((x357<(x358^x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 71481LLU;
	int64_t x362 = 69391931210536LL;
	static int64_t x363 = -1LL;
	int8_t x364 = 38;

	t90 = ((x361<(x362^x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	volatile int32_t x366 = INT32_MAX;
	int8_t x367 = 24;
	volatile int32_t t91 = -31333;

	t91 = ((x365<(x366^x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	int8_t x370 = -1;
	uint8_t x371 = 95U;
	volatile int32_t x372 = INT32_MIN;
	int32_t t92 = -60063;

	t92 = ((x369<(x370^x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int64_t x374 = INT64_MIN;
	static uint64_t x375 = 52552718LLU;
	volatile int32_t t93 = -20;

	t93 = ((x373<(x374^x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	static int32_t x378 = -145659833;
	int32_t x379 = -1;
	uint8_t x380 = 8U;
	volatile int32_t t94 = 1544860;

	t94 = ((x377<(x378^x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x382 = -290;
	static uint32_t x383 = UINT32_MAX;
	uint64_t x384 = 88015656592LLU;
	int32_t t95 = 25;

	t95 = ((x381<(x382^x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 20;
	static volatile int64_t x386 = -23560925949718LL;
	int32_t x388 = INT32_MIN;
	static int32_t t96 = -261;

	t96 = ((x385<(x386^x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x391 = UINT8_MAX;
	static int16_t x392 = INT16_MIN;

	t97 = ((x389<(x390^x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -216791748745LL;
	int32_t x395 = 1311;
	uint8_t x396 = UINT8_MAX;

	t98 = ((x393<(x394^x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MAX;
	int64_t x400 = -8654LL;
	volatile int32_t t99 = 16088;

	t99 = ((x397<(x398^x399))<=x400);

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

