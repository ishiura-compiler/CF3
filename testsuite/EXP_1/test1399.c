#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MAX;
static int64_t x13 = -195471978LL;
volatile int32_t t3 = -7;
int64_t x26 = INT64_MAX;
static uint16_t x29 = 19995U;
int8_t x31 = -1;
volatile int16_t x45 = INT16_MIN;
uint8_t x46 = 0U;
volatile int32_t t10 = -1079870;
int8_t x51 = 28;
uint8_t x56 = UINT8_MAX;
static uint16_t x62 = UINT16_MAX;
uint16_t x66 = UINT16_MAX;
int32_t t15 = 31;
volatile int32_t t17 = -1117;
int32_t t19 = -33393799;
static int32_t t22 = 161;
uint16_t x100 = UINT16_MAX;
volatile uint64_t x106 = UINT64_MAX;
uint8_t x112 = UINT8_MAX;
int8_t x119 = -1;
static int32_t t28 = -5041;
int16_t x127 = INT16_MIN;
volatile int32_t t30 = 3;
volatile int8_t x129 = INT8_MIN;
static int32_t t32 = -7;
int8_t x140 = INT8_MAX;
uint8_t x143 = UINT8_MAX;
int16_t x150 = -1;
uint8_t x152 = UINT8_MAX;
static int16_t x158 = -2756;
static int8_t x165 = INT8_MIN;
uint32_t x167 = 40447411U;
int32_t t40 = -248554;
volatile int32_t t41 = 1987031;
int16_t x174 = INT16_MIN;
volatile int32_t x175 = INT32_MAX;
uint16_t x176 = UINT16_MAX;
int32_t x177 = INT32_MAX;
uint64_t x180 = 289808360612LLU;
uint64_t x181 = 517077881LLU;
uint64_t x183 = UINT64_MAX;
int32_t t44 = 150834648;
static uint32_t x189 = UINT32_MAX;
static int32_t x207 = INT32_MIN;
static int32_t x208 = INT32_MIN;
volatile int8_t x213 = 2;
static volatile uint16_t x220 = UINT16_MAX;
volatile uint64_t x233 = UINT64_MAX;
int64_t x234 = INT64_MAX;
int32_t t57 = -38927908;
volatile int32_t t59 = 1;
static uint16_t x246 = UINT16_MAX;
static int32_t t60 = -4382;
int16_t x253 = INT16_MAX;
static uint32_t x254 = 17U;
static int64_t x255 = 27510LL;
int32_t t62 = 2159;
int8_t x259 = -1;
int64_t x260 = -1LL;
int16_t x262 = -1;
static uint32_t x265 = 1213U;
int32_t x267 = INT32_MAX;
int8_t x278 = INT8_MIN;
volatile int32_t t67 = -5722030;
uint16_t x290 = 474U;
uint32_t x293 = 190628111U;
int32_t x294 = -1;
static int64_t x296 = INT64_MIN;
uint32_t x297 = UINT32_MAX;
volatile int64_t x298 = INT64_MIN;
static volatile int64_t x301 = 15281198614930LL;
int32_t x304 = INT32_MIN;
int32_t t73 = 39423;
int16_t x311 = INT16_MIN;
int8_t x313 = -12;
int32_t x316 = 0;
static volatile uint8_t x322 = UINT8_MAX;
static int32_t x326 = 105;
static volatile int32_t x331 = INT32_MIN;
volatile int32_t t78 = 32488952;
uint32_t x334 = 2381U;
uint8_t x335 = UINT8_MAX;
int16_t x352 = 1;
int64_t x355 = INT64_MIN;
uint64_t x356 = 276160690960289LLU;
static int16_t x360 = 6;
int64_t x362 = INT64_MIN;
uint8_t x368 = UINT8_MAX;
int32_t x380 = 3043115;
static volatile int16_t x383 = -1;
static int32_t t97 = 50;
static uint16_t x409 = 18U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	static int64_t x3 = INT64_MAX;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -666243463;

	t0 = (((x1<x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 32768631728528660LLU;
	uint8_t x10 = 0U;
	int64_t x11 = INT64_MAX;
	int32_t t1 = 99558;

	t1 = (((x9<x10)/x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = 876;
	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MAX;
	int32_t t2 = 1946900;

	t2 = (((x13<x14)/x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = 79388969U;
	uint8_t x18 = UINT8_MAX;
	static int16_t x19 = -1;
	int16_t x20 = -1;

	t3 = (((x17<x18)/x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = 131869953555078LLU;
	int8_t x22 = -1;
	static volatile uint16_t x23 = 1082U;
	int8_t x24 = -62;
	volatile int32_t t4 = 6691837;

	t4 = (((x21<x22)/x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -1;
	int8_t x27 = -1;
	static int8_t x28 = 0;
	int32_t t5 = 1798;

	t5 = (((x25<x26)/x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MAX;
	int16_t x32 = -1004;
	int32_t t6 = 5996900;

	t6 = (((x29<x30)/x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 9U;
	int16_t x34 = INT16_MAX;
	static volatile int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t7 = 1;

	t7 = (((x33<x34)/x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = 1U;
	volatile int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	volatile int32_t t8 = 1959;

	t8 = (((x37<x38)/x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int16_t x42 = -1;
	static volatile uint32_t x43 = 4751U;
	int32_t x44 = INT32_MAX;
	volatile int32_t t9 = 241500011;

	t9 = (((x41<x42)/x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x47 = 106U;
	int64_t x48 = INT64_MIN;

	t10 = (((x45<x46)/x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -6472;
	int64_t x50 = INT64_MAX;
	volatile int16_t x52 = INT16_MIN;
	int32_t t11 = 130;

	t11 = (((x49<x50)/x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	int8_t x54 = -4;
	volatile int8_t x55 = -1;
	volatile int32_t t12 = 958118;

	t12 = (((x53<x54)/x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	static int32_t x59 = 57802;
	int64_t x60 = INT64_MAX;
	volatile int32_t t13 = 1953577;

	t13 = (((x57<x58)/x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x61 = -1LL;
	static volatile int8_t x63 = -1;
	uint64_t x64 = 800LLU;
	volatile int32_t t14 = -374;

	t14 = (((x61<x62)/x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile int64_t x68 = INT64_MIN;

	t15 = (((x65<x66)/x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	static volatile int16_t x70 = INT16_MIN;
	static volatile int8_t x71 = 1;
	uint8_t x72 = 26U;
	static volatile int32_t t16 = 156;

	t16 = (((x69<x70)/x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	static uint16_t x74 = 0U;
	volatile int16_t x75 = -48;
	int8_t x76 = 1;

	t17 = (((x73<x74)/x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t18 = 3;

	t18 = (((x77<x78)/x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -11;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = -219;
	static uint32_t x84 = 5896768U;

	t19 = (((x81<x82)/x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = -1;
	int64_t x87 = INT64_MIN;
	int8_t x88 = 1;
	int32_t t20 = -3409;

	t20 = (((x85<x86)/x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	volatile int16_t x90 = -1512;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MAX;
	volatile int32_t t21 = 1;

	t21 = (((x89<x90)/x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = 6U;
	int64_t x95 = 26055688LL;
	int8_t x96 = INT8_MAX;

	t22 = (((x93<x94)/x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MIN;
	volatile int8_t x99 = 1;
	int32_t t23 = 0;

	t23 = (((x97<x98)/x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 1199546662U;
	volatile int32_t x102 = 37237;
	static int8_t x103 = -1;
	int32_t x104 = -405931;
	volatile int32_t t24 = 56;

	t24 = (((x101<x102)/x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 0U;
	int64_t x107 = INT64_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t25 = -462643770;

	t25 = (((x105<x106)/x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = -12901624LL;
	int16_t x111 = INT16_MIN;
	volatile int32_t t26 = 78634;

	t26 = (((x109<x110)/x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 1U;
	int8_t x114 = INT8_MAX;
	uint64_t x115 = UINT64_MAX;
	static uint16_t x116 = UINT16_MAX;
	int32_t t27 = 7;

	t27 = (((x113<x114)/x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = -2;
	volatile int32_t x120 = INT32_MIN;

	t28 = (((x117<x118)/x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1534706281599625LL;
	uint64_t x122 = 617769733183LLU;
	static volatile int8_t x123 = INT8_MIN;
	volatile int32_t x124 = INT32_MIN;
	int32_t t29 = 554840738;

	t29 = (((x121<x122)/x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 31425LLU;
	static volatile int32_t x126 = INT32_MIN;
	int64_t x128 = INT64_MIN;

	t30 = (((x125<x126)/x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	volatile uint64_t x131 = 4826940294182LLU;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t31 = 30;

	t31 = (((x129<x130)/x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -1;
	static int16_t x134 = -96;
	int64_t x135 = INT64_MAX;
	int16_t x136 = INT16_MAX;

	t32 = (((x133<x134)/x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = -7LL;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	volatile int32_t t33 = -209487;

	t33 = (((x137<x138)/x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = INT8_MAX;
	int16_t x142 = INT16_MAX;
	static int16_t x144 = INT16_MAX;
	volatile int32_t t34 = 48881;

	t34 = (((x141<x142)/x143)==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x146 = -1;
	uint32_t x147 = 121781U;
	int16_t x148 = INT16_MIN;
	static int32_t t35 = 163146;

	t35 = (((x145<x146)/x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	static uint32_t x151 = 21541758U;
	static int32_t t36 = -1;

	t36 = (((x149<x150)/x151)==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x153 = UINT64_MAX;
	volatile int8_t x154 = INT8_MIN;
	int16_t x155 = 1;
	uint16_t x156 = 13190U;
	int32_t t37 = 4661535;

	t37 = (((x153<x154)/x155)==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 438910905U;
	volatile int32_t x159 = INT32_MAX;
	uint32_t x160 = 70U;
	static int32_t t38 = 5061;

	t38 = (((x157<x158)/x159)==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = INT64_MAX;
	volatile int32_t x162 = INT32_MIN;
	volatile uint8_t x163 = 2U;
	volatile int16_t x164 = -2;
	int32_t t39 = -40511;

	t39 = (((x161<x162)/x163)==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = INT32_MIN;
	static int32_t x168 = 0;

	t40 = (((x165<x166)/x167)==x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 4913;
	volatile uint16_t x170 = 26U;
	static uint64_t x171 = 239LLU;
	int32_t x172 = -1;

	t41 = (((x169<x170)/x171)==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x173 = 249055688363708LL;
	volatile int32_t t42 = 24691;

	t42 = (((x173<x174)/x175)==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = INT64_MIN;
	volatile int32_t x179 = -1;
	int32_t t43 = -4364;

	t43 = (((x177<x178)/x179)==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = INT8_MIN;
	int32_t x184 = INT32_MAX;

	t44 = (((x181<x182)/x183)==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MAX;
	static volatile int16_t x186 = 1;
	int64_t x187 = 2114621782LL;
	int16_t x188 = 1831;
	volatile int32_t t45 = 399770281;

	t45 = (((x185<x186)/x187)==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = INT32_MIN;
	int16_t x192 = -38;
	int32_t t46 = -54;

	t46 = (((x189<x190)/x191)==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = -1188LL;
	int32_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = -1;
	volatile int32_t t47 = 1620973;

	t47 = (((x193<x194)/x195)==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = 2570139795831LL;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = INT16_MAX;
	int32_t t48 = -174881;

	t48 = (((x197<x198)/x199)==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 34U;
	uint8_t x202 = 25U;
	int64_t x203 = -1LL;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t49 = 17;

	t49 = (((x201<x202)/x203)==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	static volatile int32_t x206 = 2733678;
	int32_t t50 = -534017;

	t50 = (((x205<x206)/x207)==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int16_t x210 = INT16_MIN;
	uint8_t x211 = 108U;
	volatile int64_t x212 = -1LL;
	static int32_t t51 = -134339;

	t51 = (((x209<x210)/x211)==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x214 = -1LL;
	int32_t x215 = INT32_MAX;
	int8_t x216 = -1;
	volatile int32_t t52 = 9312;

	t52 = (((x213<x214)/x215)==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	static uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MAX;
	volatile int32_t t53 = -497;

	t53 = (((x217<x218)/x219)==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	int32_t x222 = INT32_MIN;
	int8_t x223 = -6;
	int8_t x224 = INT8_MAX;
	volatile int32_t t54 = 27214285;

	t54 = (((x221<x222)/x223)==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int64_t x226 = INT64_MAX;
	uint16_t x227 = 117U;
	uint16_t x228 = 16917U;
	int32_t t55 = -243610;

	t55 = (((x225<x226)/x227)==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MAX;
	uint16_t x230 = 5062U;
	uint16_t x231 = 17335U;
	static int32_t x232 = 54134;
	static int32_t t56 = -205025;

	t56 = (((x229<x230)/x231)==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x235 = INT16_MIN;
	volatile int8_t x236 = INT8_MIN;

	t57 = (((x233<x234)/x235)==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 2;
	volatile uint8_t x238 = 3U;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -1762;
	static volatile int32_t t58 = -6065;

	t58 = (((x237<x238)/x239)==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = 6LLU;
	static volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = -1;

	t59 = (((x241<x242)/x243)==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = 3465;
	int64_t x247 = INT64_MAX;
	volatile int64_t x248 = -7087LL;

	t60 = (((x245<x246)/x247)==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x249 = 63U;
	volatile int64_t x250 = INT64_MIN;
	uint8_t x251 = UINT8_MAX;
	uint64_t x252 = UINT64_MAX;
	static volatile int32_t t61 = -6;

	t61 = (((x249<x250)/x251)==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x256 = INT16_MIN;

	t62 = (((x253<x254)/x255)==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MAX;
	uint32_t x258 = 265U;
	volatile int32_t t63 = -22562;

	t63 = (((x257<x258)/x259)==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = INT32_MAX;
	static volatile int32_t t64 = -487;

	t64 = (((x261<x262)/x263)==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = INT8_MIN;
	volatile int16_t x268 = -1;
	int32_t t65 = -31;

	t65 = (((x265<x266)/x267)==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x277 = 425U;
	int16_t x279 = -1;
	static int8_t x280 = INT8_MIN;
	static volatile int32_t t66 = -2704;

	t66 = (((x277<x278)/x279)==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	volatile int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;

	t67 = (((x281<x282)/x283)==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = -34687461125199LL;
	uint8_t x286 = 33U;
	int8_t x287 = INT8_MAX;
	int8_t x288 = -1;
	int32_t t68 = -22;

	t68 = (((x285<x286)/x287)==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = UINT8_MAX;
	volatile int16_t x291 = -1;
	static int8_t x292 = -1;
	int32_t t69 = -1;

	t69 = (((x289<x290)/x291)==x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x295 = 9U;
	volatile int32_t t70 = 0;

	t70 = (((x293<x294)/x295)==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x299 = INT32_MIN;
	static volatile int64_t x300 = INT64_MIN;
	int32_t t71 = 384;

	t71 = (((x297<x298)/x299)==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x302 = 122U;
	int64_t x303 = -1LL;
	int32_t t72 = 117;

	t72 = (((x301<x302)/x303)==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = 30U;
	int32_t x306 = -1;
	int8_t x307 = INT8_MIN;
	static int8_t x308 = INT8_MIN;

	t73 = (((x305<x306)/x307)==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = -66649250LL;
	uint8_t x310 = 41U;
	uint64_t x312 = 10156731436LLU;
	int32_t t74 = 57914160;

	t74 = (((x309<x310)/x311)==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x314 = 989066252500LLU;
	static int32_t x315 = -6475;
	static volatile int32_t t75 = 15;

	t75 = (((x313<x314)/x315)==x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	int8_t x323 = 61;
	int32_t x324 = -1;
	int32_t t76 = -1039395498;

	t76 = (((x321<x322)/x323)==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x325 = 454412U;
	int8_t x327 = -1;
	int8_t x328 = INT8_MAX;
	volatile int32_t t77 = 1622441;

	t77 = (((x325<x326)/x327)==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x329 = 16LLU;
	int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;

	t78 = (((x329<x330)/x331)==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 1497U;
	static uint32_t x336 = 214U;
	int32_t t79 = 1611285;

	t79 = (((x333<x334)/x335)==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x338 = 3068645757LL;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t80 = -186700452;

	t80 = (((x337<x338)/x339)==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int64_t x342 = -1LL;
	int32_t x343 = INT32_MIN;
	static uint64_t x344 = UINT64_MAX;
	volatile int32_t t81 = -5041625;

	t81 = (((x341<x342)/x343)==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = -25;
	uint64_t x346 = 6813LLU;
	int64_t x347 = INT64_MIN;
	static int64_t x348 = INT64_MAX;
	static int32_t t82 = -64515;

	t82 = (((x345<x346)/x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = -1;
	volatile uint64_t x350 = 3400LLU;
	int8_t x351 = INT8_MIN;
	int32_t t83 = 12802;

	t83 = (((x349<x350)/x351)==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 202LLU;
	volatile int32_t t84 = -470859414;

	t84 = (((x353<x354)/x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = -1;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 5861LLU;
	int32_t t85 = 18415;

	t85 = (((x357<x358)/x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = INT64_MAX;
	int64_t x363 = INT64_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t86 = 1;

	t86 = (((x361<x362)/x363)==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = -53;
	int64_t x366 = INT64_MIN;
	int16_t x367 = 10543;
	volatile int32_t t87 = -173;

	t87 = (((x365<x366)/x367)==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -75;
	static int16_t x370 = -1;
	static volatile int32_t x371 = -3462038;
	volatile int16_t x372 = -397;
	int32_t t88 = 233028714;

	t88 = (((x369<x370)/x371)==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MAX;
	int32_t x375 = 655266393;
	int32_t x376 = 15296716;
	volatile int32_t t89 = 45980882;

	t89 = (((x373<x374)/x375)==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 7U;
	int64_t x378 = INT64_MAX;
	volatile int32_t x379 = INT32_MIN;
	volatile int32_t t90 = -234354;

	t90 = (((x377<x378)/x379)==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x381 = 4534U;
	uint8_t x382 = UINT8_MAX;
	int8_t x384 = INT8_MAX;
	int32_t t91 = 6062220;

	t91 = (((x381<x382)/x383)==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x385 = 1U;
	int32_t x386 = -384;
	int32_t x387 = -2609344;
	int16_t x388 = -3710;
	int32_t t92 = 46943645;

	t92 = (((x385<x386)/x387)==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x389 = INT16_MAX;
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MAX;
	int32_t x392 = -8020;
	int32_t t93 = -22780;

	t93 = (((x389<x390)/x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = 30LLU;
	volatile int8_t x394 = 47;
	volatile uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t94 = -1814481;

	t94 = (((x393<x394)/x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	volatile int64_t x398 = -26616069LL;
	uint32_t x399 = 114220094U;
	int32_t x400 = INT32_MAX;
	static int32_t t95 = -42579324;

	t95 = (((x397<x398)/x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x401 = -913LL;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = 3360U;
	int32_t x404 = INT32_MIN;
	volatile int32_t t96 = -123;

	t96 = (((x401<x402)/x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	static uint64_t x406 = 64548081303LLU;
	int16_t x407 = -1;
	int8_t x408 = -1;

	t97 = (((x405<x406)/x407)==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x410 = UINT8_MAX;
	static uint64_t x411 = 11914024628995228LLU;
	int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -22;

	t98 = (((x409<x410)/x411)==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	static volatile int64_t x416 = INT64_MIN;
	int32_t t99 = 3591014;

	t99 = (((x413<x414)/x415)==x416);

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

