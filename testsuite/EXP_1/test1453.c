#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 3858362093512440003LLU;
int8_t x5 = INT8_MIN;
int16_t x6 = -1;
volatile uint16_t x8 = UINT16_MAX;
static int8_t x12 = INT8_MAX;
int32_t t2 = -1;
int64_t x13 = -1624LL;
static volatile int16_t x15 = INT16_MIN;
int16_t x19 = INT16_MIN;
static int32_t t5 = -20365393;
int8_t x28 = INT8_MAX;
int32_t x29 = 1677582;
volatile int32_t t8 = -55758;
uint16_t x38 = UINT16_MAX;
static int32_t t11 = -558;
int8_t x49 = INT8_MIN;
volatile uint16_t x52 = 249U;
static volatile int32_t t12 = -251334524;
int64_t x59 = INT64_MIN;
int32_t x61 = INT32_MIN;
static int32_t x66 = -1;
int32_t x73 = -1;
volatile int8_t x74 = INT8_MIN;
static uint16_t x76 = UINT16_MAX;
uint16_t x80 = 142U;
int32_t t19 = 11143417;
int8_t x87 = 1;
volatile int32_t t21 = -196;
volatile int64_t x96 = 917623760325650195LL;
int64_t x100 = INT64_MIN;
int16_t x107 = INT16_MIN;
int16_t x132 = -1;
volatile int32_t t32 = -54;
static int64_t x141 = -1LL;
uint16_t x142 = UINT16_MAX;
static int16_t x147 = 0;
static int32_t x156 = INT32_MIN;
int8_t x157 = INT8_MIN;
int64_t x169 = 2113335535857LL;
static uint64_t x173 = 1288516461110493217LLU;
int64_t x175 = 2855LL;
int64_t x176 = 4670526LL;
uint64_t x177 = 5LLU;
uint16_t x183 = UINT16_MAX;
volatile int32_t t45 = 718507894;
int32_t t46 = 38837045;
volatile int32_t x189 = INT32_MIN;
volatile uint32_t x194 = 331671U;
int32_t t48 = -23;
volatile uint8_t x200 = 0U;
volatile int16_t x201 = INT16_MIN;
int16_t x207 = 2842;
int16_t x209 = 6;
int32_t t53 = -3;
int8_t x223 = INT8_MIN;
int32_t t55 = 6677991;
static int32_t x227 = -3;
int64_t x228 = INT64_MIN;
uint32_t x229 = 4702758U;
volatile int32_t t57 = -7914;
uint64_t x233 = 22LLU;
uint64_t x234 = 20935383156810285LLU;
static int8_t x236 = 1;
uint8_t x237 = 1U;
int64_t x238 = INT64_MAX;
int32_t t62 = -1473118;
volatile int32_t t63 = -15734566;
volatile int16_t x267 = 2;
volatile int32_t t66 = 1;
int64_t x277 = -14LL;
int32_t x284 = INT32_MIN;
int16_t x285 = 237;
int32_t x289 = INT32_MIN;
int8_t x294 = -1;
volatile int32_t x300 = -1;
int16_t x304 = INT16_MIN;
int64_t x305 = -444019281LL;
uint8_t x318 = 0U;
volatile int32_t t79 = 444472;
int64_t x323 = 2311560788070372182LL;
uint32_t x326 = 71609235U;
int8_t x327 = INT8_MIN;
int32_t x330 = INT32_MIN;
int8_t x332 = INT8_MAX;
volatile int32_t t82 = 610032;
int8_t x342 = -47;
int8_t x348 = INT8_MIN;
uint16_t x350 = UINT16_MAX;
uint64_t x352 = 2LLU;
volatile int32_t t87 = -83;
volatile int8_t x353 = INT8_MIN;
static uint64_t x354 = 35859826374383994LLU;
int32_t x355 = -5178;
volatile int32_t t88 = 708989;
int16_t x357 = INT16_MIN;
int32_t x358 = -2872;
uint8_t x359 = 3U;
uint32_t x360 = 1924U;
int32_t t90 = 455755742;
uint64_t x376 = 34014767939553999LLU;
volatile uint8_t x384 = 5U;
static int32_t t95 = 54763;
uint32_t x387 = UINT32_MAX;
static int32_t t97 = 1551;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	static uint16_t x2 = 87U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 5;

	t0 = (((x1<x2)==x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = 46U;
	static int32_t t1 = 6;

	t1 = (((x5<x6)==x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 1975566660LLU;
	static volatile uint32_t x10 = UINT32_MAX;
	int16_t x11 = INT16_MAX;

	t2 = (((x9<x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static volatile int64_t x16 = INT64_MIN;
	static int32_t t3 = 7;

	t3 = (((x13<x14)==x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int64_t x18 = INT64_MIN;
	static int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 1;

	t4 = (((x17<x18)==x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	volatile int32_t x24 = INT32_MIN;

	t5 = (((x21<x22)==x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	int8_t x26 = -1;
	uint8_t x27 = 87U;
	int32_t t6 = -3;

	t6 = (((x25<x26)==x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = 1;
	int16_t x32 = 3040;
	volatile int32_t t7 = 153870910;

	t7 = (((x29<x30)==x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 25U;
	int32_t x34 = -4986;
	int8_t x35 = INT8_MIN;
	volatile int64_t x36 = INT64_MIN;

	t8 = (((x33<x34)==x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 27047U;
	static volatile uint32_t x39 = 1046955450U;
	uint64_t x40 = 416645127LLU;
	static int32_t t9 = 166;

	t9 = (((x37<x38)==x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	static uint16_t x42 = UINT16_MAX;
	uint16_t x43 = 747U;
	volatile uint8_t x44 = 13U;
	volatile int32_t t10 = 0;

	t10 = (((x41<x42)==x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	volatile int16_t x46 = INT16_MIN;
	static int32_t x47 = INT32_MIN;
	int64_t x48 = -241356723756LL;

	t11 = (((x45<x46)==x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x50 = UINT16_MAX;
	int32_t x51 = INT32_MIN;

	t12 = (((x49<x50)==x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 2LL;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 27247U;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 801848;

	t13 = (((x53<x54)==x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -75997820235LL;
	int64_t x58 = INT64_MIN;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = 11;

	t14 = (((x57<x58)==x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x62 = INT64_MIN;
	static int16_t x63 = INT16_MIN;
	static int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -1728;

	t15 = (((x61<x62)==x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 715859U;
	uint16_t x67 = 31710U;
	static int16_t x68 = -1;
	int32_t t16 = -1252;

	t16 = (((x65<x66)==x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	uint32_t x70 = 0U;
	uint32_t x71 = UINT32_MAX;
	static uint64_t x72 = 1979LLU;
	volatile int32_t t17 = 30;

	t17 = (((x69<x70)==x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x75 = 13567;
	volatile int32_t t18 = 1;

	t18 = (((x73<x74)==x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint32_t x78 = 2856609U;
	int16_t x79 = INT16_MIN;

	t19 = (((x77<x78)==x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MAX;
	int8_t x82 = -1;
	volatile uint64_t x83 = 4303433716645561522LLU;
	int16_t x84 = -1;
	int32_t t20 = 59040;

	t20 = (((x81<x82)==x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = -715449919155511LL;
	static int8_t x88 = INT8_MAX;

	t21 = (((x85<x86)==x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 16LLU;
	uint8_t x90 = 33U;
	static volatile uint8_t x91 = 16U;
	uint16_t x92 = 1132U;
	int32_t t22 = -585;

	t22 = (((x89<x90)==x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 23345U;
	static volatile int8_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	static int32_t t23 = -20106;

	t23 = (((x93<x94)==x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = 0;
	static volatile int8_t x99 = 1;
	volatile int32_t t24 = -738591595;

	t24 = (((x97<x98)==x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MAX;
	int8_t x103 = 0;
	uint16_t x104 = 25U;
	int32_t t25 = 834423347;

	t25 = (((x101<x102)==x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 7070U;
	int64_t x106 = INT64_MIN;
	int64_t x108 = -357LL;
	volatile int32_t t26 = 3542;

	t26 = (((x105<x106)==x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	static int16_t x110 = INT16_MIN;
	uint32_t x111 = UINT32_MAX;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = -355812;

	t27 = (((x109<x110)==x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 61U;
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 86LLU;
	static int64_t x116 = 59010570LL;
	volatile int32_t t28 = 174958660;

	t28 = (((x113<x114)==x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = 16333U;
	uint32_t x120 = 14165187U;
	volatile int32_t t29 = 3920;

	t29 = (((x117<x118)==x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 11U;
	static volatile int32_t x122 = -1;
	int64_t x123 = -13084157681086LL;
	int16_t x124 = INT16_MIN;
	static int32_t t30 = -891597672;

	t30 = (((x121<x122)==x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	volatile int16_t x127 = -50;
	int16_t x128 = -1;
	int32_t t31 = 281;

	t31 = (((x125<x126)==x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	uint32_t x130 = 79821017U;
	uint16_t x131 = 18479U;

	t32 = (((x129<x130)==x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1731;
	volatile uint32_t x134 = UINT32_MAX;
	int32_t x135 = -1;
	volatile int8_t x136 = -1;
	int32_t t33 = 294002;

	t33 = (((x133<x134)==x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x137 = 39U;
	int8_t x138 = 0;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -1;
	static volatile int32_t t34 = 18020386;

	t34 = (((x137<x138)==x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 0;

	t35 = (((x141<x142)==x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static uint32_t x146 = UINT32_MAX;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 1530;

	t36 = (((x145<x146)==x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = -1;
	int64_t x151 = INT64_MAX;
	volatile int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -248541228;

	t37 = (((x149<x150)==x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	volatile uint16_t x154 = 39U;
	static volatile uint64_t x155 = UINT64_MAX;
	volatile int32_t t38 = -847920032;

	t38 = (((x153<x154)==x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MIN;
	int8_t x160 = 1;
	volatile int32_t t39 = -1;

	t39 = (((x157<x158)==x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	static volatile int64_t x162 = -1LL;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t40 = -1215;

	t40 = (((x161<x162)==x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	volatile int32_t x168 = INT32_MIN;
	int32_t t41 = -1;

	t41 = (((x165<x166)==x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x170 = 253813U;
	uint32_t x171 = UINT32_MAX;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = -73039;

	t42 = (((x169<x170)==x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = INT8_MAX;
	volatile int32_t t43 = -20262;

	t43 = (((x173<x174)==x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = -1422285;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	volatile int32_t t44 = 6;

	t44 = (((x177<x178)==x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 0;
	int64_t x182 = INT64_MAX;
	int32_t x184 = INT32_MIN;

	t45 = (((x181<x182)==x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x185 = INT32_MAX;
	int8_t x186 = -1;
	static uint8_t x187 = 0U;
	volatile int8_t x188 = 3;

	t46 = (((x185<x186)==x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	static int64_t x191 = INT64_MAX;
	uint8_t x192 = 8U;
	static int32_t t47 = 3;

	t47 = (((x189<x190)==x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int64_t x195 = INT64_MAX;
	volatile int16_t x196 = -1;

	t48 = (((x193<x194)==x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -1;
	static int64_t x198 = 69233301141011LL;
	volatile int16_t x199 = -47;
	int32_t t49 = 24;

	t49 = (((x197<x198)==x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	uint16_t x203 = 6253U;
	static uint16_t x204 = 109U;
	int32_t t50 = -5832278;

	t50 = (((x201<x202)==x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	volatile int32_t x206 = 4987;
	uint64_t x208 = 575226454019LLU;
	volatile int32_t t51 = 962987;

	t51 = (((x205<x206)==x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = 16U;
	int8_t x211 = INT8_MIN;
	static uint32_t x212 = 82950U;
	volatile int32_t t52 = -13904;

	t52 = (((x209<x210)==x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = -1LL;
	static uint8_t x215 = 12U;
	static int16_t x216 = -1;

	t53 = (((x213<x214)==x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 5U;
	static uint32_t x218 = 9U;
	volatile int32_t x219 = -1;
	static uint64_t x220 = 14LLU;
	volatile int32_t t54 = 0;

	t54 = (((x217<x218)==x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	static int32_t x222 = 15;
	uint8_t x224 = 84U;

	t55 = (((x221<x222)==x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -347072022875664LL;
	int32_t x226 = -1;
	int32_t t56 = -256740605;

	t56 = (((x225<x226)==x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x230 = -20512303976067522LL;
	int32_t x231 = 7;
	int16_t x232 = INT16_MAX;

	t57 = (((x229<x230)==x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = INT64_MAX;
	volatile int32_t t58 = -16;

	t58 = (((x233<x234)==x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x239 = INT64_MIN;
	int64_t x240 = -774760772878744LL;
	int32_t t59 = 462863;

	t59 = (((x237<x238)==x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 1644401108LLU;
	uint8_t x242 = 47U;
	int16_t x243 = INT16_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -1;

	t60 = (((x241<x242)==x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x245 = UINT8_MAX;
	uint64_t x246 = 1914967678LLU;
	static volatile int32_t x247 = 9911343;
	int8_t x248 = -1;
	int32_t t61 = -309152368;

	t61 = (((x245<x246)==x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MIN;
	static int16_t x251 = -1;
	int64_t x252 = INT64_MIN;

	t62 = (((x249<x250)==x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = -1;
	volatile uint16_t x254 = 6129U;
	uint16_t x255 = 9U;
	volatile int32_t x256 = 165314;

	t63 = (((x253<x254)==x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile uint32_t x258 = 6532730U;
	volatile int32_t x259 = -1;
	static int32_t x260 = -192788;
	volatile int32_t t64 = -238084368;

	t64 = (((x257<x258)==x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = UINT64_MAX;
	static volatile uint64_t x262 = UINT64_MAX;
	int64_t x263 = -30708655895732775LL;
	static volatile int16_t x264 = -1;
	volatile int32_t t65 = 230146;

	t65 = (((x261<x262)==x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MIN;
	volatile int32_t x266 = -266186190;
	int16_t x268 = INT16_MAX;

	t66 = (((x265<x266)==x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -515757;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	uint64_t x272 = 1153206113LLU;
	int32_t t67 = -53508;

	t67 = (((x269<x270)==x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	volatile int64_t x274 = INT64_MIN;
	volatile int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	volatile int32_t t68 = -21;

	t68 = (((x273<x274)==x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MAX;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 6122U;
	static int32_t t69 = 83143;

	t69 = (((x277<x278)==x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint16_t x282 = 16U;
	int64_t x283 = INT64_MIN;
	int32_t t70 = -22;

	t70 = (((x281<x282)==x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	static int16_t x287 = -1;
	int8_t x288 = INT8_MIN;
	static int32_t t71 = -5;

	t71 = (((x285<x286)==x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 65;
	uint64_t x291 = 301076665120293306LLU;
	int64_t x292 = 70153336823472LL;
	int32_t t72 = -1640427;

	t72 = (((x289<x290)==x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 0U;
	volatile int32_t x295 = 5;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -287858537;

	t73 = (((x293<x294)==x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 329333561118940LLU;
	int64_t x298 = 706435695773LL;
	static uint32_t x299 = 193U;
	static int32_t t74 = 196;

	t74 = (((x297<x298)==x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint16_t x302 = 120U;
	uint64_t x303 = 5997522385702LLU;
	int32_t t75 = 1444;

	t75 = (((x301<x302)==x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	static volatile uint32_t x307 = 32705777U;
	int16_t x308 = -1;
	int32_t t76 = 5;

	t76 = (((x305<x306)==x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -1;
	static uint32_t x312 = 34U;
	volatile int32_t t77 = 213464;

	t77 = (((x309<x310)==x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -6629950;
	static int64_t x315 = INT64_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = -1433;

	t78 = (((x313<x314)==x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	int32_t x319 = 2;
	static uint32_t x320 = UINT32_MAX;

	t79 = (((x317<x318)==x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = -1;
	volatile int64_t x324 = -44474286592LL;
	int32_t t80 = 186;

	t80 = (((x321<x322)==x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	static int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = 1752136;

	t81 = (((x325<x326)==x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -1;
	int32_t x331 = INT32_MIN;

	t82 = (((x329<x330)==x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MAX;
	static int64_t x334 = -1LL;
	static volatile int16_t x335 = -1;
	int64_t x336 = INT64_MIN;
	int32_t t83 = -583;

	t83 = (((x333<x334)==x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -40;
	static int32_t x338 = -7804;
	int16_t x339 = -1;
	static int16_t x340 = -473;
	int32_t t84 = 457101282;

	t84 = (((x337<x338)==x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x343 = 0U;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t85 = -73878;

	t85 = (((x341<x342)==x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	int32_t x346 = INT32_MAX;
	volatile uint32_t x347 = 16U;
	volatile int32_t t86 = 126327;

	t86 = (((x345<x346)==x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 10135;
	int64_t x351 = INT64_MAX;

	t87 = (((x349<x350)==x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x356 = 1U;

	t88 = (((x353<x354)==x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t t89 = 24306;

	t89 = (((x357<x358)==x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	static volatile int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;
	uint64_t x364 = UINT64_MAX;

	t90 = (((x361<x362)==x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -101056453842LL;
	uint16_t x367 = 416U;
	uint32_t x368 = 1219242396U;
	static int32_t t91 = -85683997;

	t91 = (((x365<x366)==x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 113227308;
	uint8_t x370 = 42U;
	int64_t x371 = INT64_MIN;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 20132;

	t92 = (((x369<x370)==x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = 2389437015216LL;
	static uint32_t x374 = 722834U;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t t93 = -1;

	t93 = (((x373<x374)==x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MIN;
	static int16_t x379 = INT16_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t94 = 15141409;

	t94 = (((x377<x378)==x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 14U;
	int32_t x383 = -1;

	t95 = (((x381<x382)==x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -183;
	int16_t x386 = INT16_MIN;
	volatile int16_t x388 = INT16_MAX;
	static volatile int32_t t96 = 31;

	t96 = (((x385<x386)==x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 3290224U;
	int16_t x390 = INT16_MAX;
	int8_t x391 = -1;
	volatile int64_t x392 = -1LL;

	t97 = (((x389<x390)==x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 137U;
	volatile uint8_t x394 = UINT8_MAX;
	static volatile uint64_t x395 = 218963570253219342LLU;
	static int32_t x396 = INT32_MIN;
	int32_t t98 = 43344;

	t98 = (((x393<x394)==x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -12;
	uint8_t x398 = 0U;
	static int8_t x399 = INT8_MIN;
	volatile int16_t x400 = 1582;
	int32_t t99 = -248937;

	t99 = (((x397<x398)==x399)<=x400);

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

