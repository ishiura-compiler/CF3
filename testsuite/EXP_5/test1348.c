#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 14164;
int32_t x3 = 31106;
int16_t x4 = INT16_MAX;
static int8_t x14 = -1;
uint64_t x15 = UINT64_MAX;
int64_t x20 = INT64_MAX;
uint64_t x22 = 25234555863064125LLU;
int64_t x27 = INT64_MIN;
int32_t x28 = INT32_MIN;
uint32_t x32 = 155692U;
static volatile int32_t t8 = 65955283;
static volatile int32_t t10 = -42;
int32_t t11 = 282;
static int8_t x52 = INT8_MIN;
int16_t x62 = -11081;
static uint64_t x66 = 16847116157LLU;
static uint16_t x70 = 24450U;
int32_t x73 = INT32_MIN;
static uint64_t x77 = UINT64_MAX;
int32_t t21 = 488;
uint16_t x98 = 459U;
int16_t x102 = INT16_MIN;
int8_t x126 = -1;
uint16_t x129 = 12465U;
volatile int64_t x131 = INT64_MIN;
static volatile int32_t t34 = -204;
static int16_t x143 = 11789;
volatile int32_t x148 = INT32_MIN;
int16_t x150 = 22;
int8_t x151 = INT8_MAX;
int8_t x158 = INT8_MIN;
static uint16_t x172 = UINT16_MAX;
uint8_t x193 = 20U;
int16_t x199 = -21;
volatile int8_t x202 = -1;
volatile uint16_t x205 = UINT16_MAX;
uint16_t x206 = 279U;
static int32_t t52 = -1653711;
static int16_t x218 = INT16_MIN;
volatile int32_t t54 = -109069795;
int32_t x223 = INT32_MAX;
int8_t x225 = INT8_MIN;
int32_t x234 = -1;
uint16_t x241 = 60U;
int64_t x244 = INT64_MIN;
static int32_t t62 = -120701;
volatile int32_t t64 = -1994;
uint32_t x261 = 7902U;
int32_t x262 = 366411397;
static int8_t x263 = 0;
uint32_t x269 = UINT32_MAX;
static int32_t x272 = -1;
volatile int32_t x285 = INT32_MAX;
uint16_t x287 = UINT16_MAX;
static int64_t x290 = -1LL;
uint8_t x294 = 5U;
int16_t x296 = 27;
static volatile int16_t x299 = -1;
volatile int32_t t75 = -1;
volatile int8_t x307 = -1;
volatile int32_t t76 = -72802315;
int8_t x311 = INT8_MIN;
static uint16_t x313 = UINT16_MAX;
static int16_t x316 = -1;
uint32_t x318 = UINT32_MAX;
volatile int32_t t80 = 123;
int32_t x325 = -81;
uint8_t x344 = 1U;
volatile int32_t t86 = 1;
volatile uint8_t x352 = 8U;
volatile uint64_t x354 = 461033309279132LLU;
int64_t x363 = INT64_MAX;
int32_t x367 = -510;
int32_t t92 = 328162;
volatile int32_t t93 = -822713;
int8_t x386 = -9;
uint16_t x388 = 155U;
uint32_t x389 = 1392387738U;
int32_t x399 = 31217;
int16_t x400 = 55;


void f0(void) {
	uint32_t x1 = 6135767U;
	int32_t t0 = 47780;

	t0 = (x1<((x2==x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 30U;
	uint16_t x6 = UINT16_MAX;
	uint64_t x7 = 2178716099603751568LLU;
	static volatile uint16_t x8 = 21926U;
	volatile int32_t t1 = 7978194;

	t1 = (x5<((x6==x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	static uint16_t x11 = UINT16_MAX;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -1;

	t2 = (x9<((x10==x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x16 = 482;
	int32_t t3 = 1;

	t3 = (x13<((x14==x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -726487436;
	static int8_t x18 = -1;
	uint16_t x19 = 0U;
	static volatile int32_t t4 = -122;

	t4 = (x17<((x18==x19)^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int64_t x23 = -3476594LL;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 1047;

	t5 = (x21<((x22==x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	int32_t x26 = 61804;
	int32_t t6 = -216499;

	t6 = (x25<((x26==x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = UINT16_MAX;
	int64_t x30 = -17269LL;
	static int8_t x31 = -14;
	int32_t t7 = -3851064;

	t7 = (x29<((x30==x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile int32_t x34 = INT32_MIN;
	static int32_t x35 = INT32_MAX;
	volatile int32_t x36 = -134859438;

	t8 = (x33<((x34==x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	static int16_t x38 = INT16_MIN;
	int8_t x39 = 1;
	uint16_t x40 = 12U;
	int32_t t9 = -17514;

	t9 = (x37<((x38==x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MIN;
	volatile uint8_t x44 = UINT8_MAX;

	t10 = (x41<((x42==x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 860U;
	uint32_t x46 = 82276966U;
	int64_t x47 = 261585201243LL;
	uint32_t x48 = 87U;

	t11 = (x45<((x46==x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int16_t x50 = 616;
	uint16_t x51 = 5561U;
	volatile int32_t t12 = -22425816;

	t12 = (x49<((x50==x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -160;
	uint8_t x54 = UINT8_MAX;
	static volatile int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 355057;

	t13 = (x53<((x54==x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -47;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	volatile int16_t x60 = -1;
	static int32_t t14 = -462465;

	t14 = (x57<((x58==x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x63 = 603377237003925423LLU;
	volatile int8_t x64 = 23;
	static int32_t t15 = 6303;

	t15 = (x61<((x62==x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 16U;
	volatile uint8_t x67 = 17U;
	int8_t x68 = 3;
	volatile int32_t t16 = -446;

	t16 = (x65<((x66==x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static volatile uint64_t x71 = 10059LLU;
	int64_t x72 = 52627628001LL;
	int32_t t17 = 1;

	t17 = (x69<((x70==x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x74 = INT8_MIN;
	static uint16_t x75 = 1601U;
	int64_t x76 = 1305992424993716923LL;
	int32_t t18 = 448;

	t18 = (x73<((x74==x75)^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	int8_t x79 = INT8_MIN;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = 1;

	t19 = (x77<((x78==x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static int64_t x82 = -69441267156763LL;
	static uint64_t x83 = 780931797843LLU;
	uint32_t x84 = 15830690U;
	static int32_t t20 = -1;

	t20 = (x81<((x82==x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 918;
	int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MAX;
	static volatile uint32_t x88 = 188U;

	t21 = (x85<((x86==x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 7699LLU;
	int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MIN;
	uint32_t x92 = 23914986U;
	static int32_t t22 = 12124435;

	t22 = (x89<((x90==x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 444;
	int8_t x94 = -1;
	static volatile int8_t x95 = -1;
	int8_t x96 = -1;
	volatile int32_t t23 = -54;

	t23 = (x93<((x94==x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int64_t x99 = -1LL;
	uint16_t x100 = 6U;
	volatile int32_t t24 = -1502;

	t24 = (x97<((x98==x99)^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 1;
	int64_t x103 = -1LL;
	static uint16_t x104 = 0U;
	volatile int32_t t25 = 24;

	t25 = (x101<((x102==x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	static int32_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	uint8_t x108 = UINT8_MAX;
	int32_t t26 = 21022898;

	t26 = (x105<((x106==x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	static uint16_t x110 = UINT16_MAX;
	static int16_t x111 = -1;
	volatile uint32_t x112 = 9001398U;
	volatile int32_t t27 = 56;

	t27 = (x109<((x110==x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	int32_t x114 = 66212;
	volatile uint8_t x115 = 26U;
	volatile int64_t x116 = -1LL;
	int32_t t28 = 113;

	t28 = (x113<((x114==x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = -6;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 747;

	t29 = (x117<((x118==x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 102U;
	int64_t x122 = 721057LL;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MAX;
	static volatile int32_t t30 = 171505;

	t30 = (x121<((x122==x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static volatile int16_t x127 = INT16_MIN;
	int8_t x128 = 7;
	volatile int32_t t31 = 64;

	t31 = (x125<((x126==x127)^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x130 = 3U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -1;

	t32 = (x129<((x130==x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 2151364570931957349LLU;
	int32_t x134 = INT32_MIN;
	static int8_t x135 = INT8_MAX;
	int16_t x136 = -412;
	int32_t t33 = -47;

	t33 = (x133<((x134==x135)^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static uint8_t x138 = 89U;
	int32_t x139 = -1;
	static uint32_t x140 = 22074201U;

	t34 = (x137<((x138==x139)^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x144 = -1;
	volatile int32_t t35 = 1682669;

	t35 = (x141<((x142==x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	int8_t x147 = 1;
	int32_t t36 = -266828;

	t36 = (x145<((x146==x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	static int64_t x152 = INT64_MIN;
	int32_t t37 = -179395144;

	t37 = (x149<((x150==x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = 30;
	static uint16_t x155 = 26272U;
	uint32_t x156 = 11651U;
	int32_t t38 = 267696055;

	t38 = (x153<((x154==x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = INT8_MIN;
	int16_t x159 = 6;
	uint32_t x160 = UINT32_MAX;
	int32_t t39 = -2;

	t39 = (x157<((x158==x159)^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int16_t x162 = 31;
	int32_t x163 = INT32_MIN;
	volatile int32_t x164 = -144840;
	int32_t t40 = -498571147;

	t40 = (x161<((x162==x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 774112988134241LLU;
	uint32_t x166 = 4115400U;
	static int64_t x167 = INT64_MIN;
	int32_t x168 = 214;
	static volatile int32_t t41 = -3;

	t41 = (x165<((x166==x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = 76908;
	int32_t t42 = 13;

	t42 = (x169<((x170==x171)^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x173 = 0U;
	uint8_t x174 = 28U;
	int16_t x175 = -1;
	uint16_t x176 = 3112U;
	volatile int32_t t43 = 43;

	t43 = (x173<((x174==x175)^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 7558741U;
	int8_t x178 = -1;
	uint8_t x179 = 99U;
	static int8_t x180 = 0;
	static int32_t t44 = -692;

	t44 = (x177<((x178==x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	uint32_t x182 = UINT32_MAX;
	volatile uint64_t x183 = 22020LLU;
	uint32_t x184 = 0U;
	int32_t t45 = -168;

	t45 = (x181<((x182==x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile int64_t x186 = INT64_MAX;
	int16_t x187 = -13;
	int8_t x188 = -3;
	static volatile int32_t t46 = -24;

	t46 = (x185<((x186==x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 213438U;
	static int64_t x190 = INT64_MAX;
	static uint8_t x191 = UINT8_MAX;
	int8_t x192 = 1;
	int32_t t47 = -637883237;

	t47 = (x189<((x190==x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x194 = INT8_MAX;
	uint64_t x195 = UINT64_MAX;
	int8_t x196 = -1;
	static volatile int32_t t48 = 6016219;

	t48 = (x193<((x194==x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	volatile int64_t x198 = -1LL;
	int64_t x200 = INT64_MIN;
	static volatile int32_t t49 = -149;

	t49 = (x197<((x198==x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x201 = 91U;
	uint8_t x203 = 61U;
	volatile uint32_t x204 = UINT32_MAX;
	int32_t t50 = 1112008;

	t50 = (x201<((x202==x203)^x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = -1;
	uint16_t x208 = 7226U;
	volatile int32_t t51 = -130;

	t51 = (x205<((x206==x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MAX;
	static int32_t x210 = INT32_MAX;
	static volatile uint16_t x211 = UINT16_MAX;
	uint32_t x212 = 754996739U;

	t52 = (x209<((x210==x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 14U;
	uint16_t x214 = 1U;
	int8_t x215 = INT8_MAX;
	int64_t x216 = 11899965171LL;
	volatile int32_t t53 = -126537360;

	t53 = (x213<((x214==x215)^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 244338632431656274LLU;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 115154615036474598LLU;

	t54 = (x217<((x218==x219)^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x222 = INT32_MIN;
	uint32_t x224 = 6U;
	int32_t t55 = -2798974;

	t55 = (x221<((x222==x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = 17428LL;
	static int32_t x227 = 149;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = -5;

	t56 = (x225<((x226==x227)^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MAX;
	int32_t x232 = -13;
	static volatile int32_t t57 = 15235393;

	t57 = (x229<((x230==x231)^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -949;
	int32_t x235 = INT32_MIN;
	int8_t x236 = 1;
	volatile int32_t t58 = 2330961;

	t58 = (x233<((x234==x235)^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 50;
	int16_t x238 = INT16_MIN;
	volatile int8_t x239 = 0;
	int32_t x240 = -1;
	volatile int32_t t59 = 79;

	t59 = (x237<((x238==x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 862U;
	int32_t x243 = 485338899;
	int32_t t60 = -611353542;

	t60 = (x241<((x242==x243)^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -390;
	int16_t x246 = INT16_MIN;
	volatile uint8_t x247 = 8U;
	uint32_t x248 = 6314U;
	int32_t t61 = -62795575;

	t61 = (x245<((x246==x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	volatile uint8_t x251 = 19U;
	volatile uint32_t x252 = UINT32_MAX;

	t62 = (x249<((x250==x251)^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 3;
	int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	static int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = -479;

	t63 = (x253<((x254==x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 54U;
	uint8_t x258 = 50U;
	static volatile int16_t x259 = INT16_MIN;
	int16_t x260 = 27;

	t64 = (x257<((x258==x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x264 = -11831056;
	volatile int32_t t65 = -536143;

	t65 = (x261<((x262==x263)^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 81310345U;
	static uint16_t x266 = 0U;
	int8_t x267 = INT8_MIN;
	volatile int32_t x268 = 3281663;
	volatile int32_t t66 = -5395;

	t66 = (x265<((x266==x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -1;
	int8_t x271 = -46;
	int32_t t67 = -2865;

	t67 = (x269<((x270==x271)^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 70158LLU;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -1;
	int32_t t68 = 1112041;

	t68 = (x273<((x274==x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 100093913U;
	int8_t x278 = -1;
	uint16_t x279 = 5795U;
	int32_t x280 = 1341208;
	int32_t t69 = 4385169;

	t69 = (x277<((x278==x279)^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 10U;
	uint16_t x282 = 13U;
	int64_t x283 = 139LL;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -5028301;

	t70 = (x281<((x282==x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 623;

	t71 = (x285<((x286==x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 55403U;
	static int64_t x291 = 52896517246LL;
	uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = -417;

	t72 = (x289<((x290==x291)^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1015;
	uint16_t x295 = 1U;
	volatile int32_t t73 = -839061839;

	t73 = (x293<((x294==x295)^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = -2328;
	int32_t x298 = INT32_MIN;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -12703;

	t74 = (x297<((x298==x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x302 = 1469537865398189LLU;
	volatile int8_t x303 = -2;
	int8_t x304 = -5;

	t75 = (x301<((x302==x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 1;
	volatile int64_t x306 = -1LL;
	uint8_t x308 = UINT8_MAX;

	t76 = (x305<((x306==x307)^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 2U;
	volatile uint8_t x310 = UINT8_MAX;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = -14324;

	t77 = (x309<((x310==x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = 8;
	int32_t t78 = -71412;

	t78 = (x313<((x314==x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	int8_t x319 = -1;
	static uint8_t x320 = 10U;
	static int32_t t79 = 12;

	t79 = (x317<((x318==x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 0U;
	uint64_t x322 = 15202718478LLU;
	uint32_t x323 = UINT32_MAX;
	uint32_t x324 = UINT32_MAX;

	t80 = (x321<((x322==x323)^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x326 = INT16_MIN;
	static uint32_t x327 = UINT32_MAX;
	static int16_t x328 = -1;
	int32_t t81 = -23;

	t81 = (x325<((x326==x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	static int8_t x330 = INT8_MIN;
	uint8_t x331 = 58U;
	int32_t x332 = -1;
	int32_t t82 = 130;

	t82 = (x329<((x330==x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 937900852263LLU;
	uint8_t x334 = UINT8_MAX;
	uint32_t x335 = UINT32_MAX;
	static int64_t x336 = -3700474019LL;
	volatile int32_t t83 = 31123;

	t83 = (x333<((x334==x335)^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	int16_t x339 = -695;
	static int16_t x340 = -328;
	int32_t t84 = 1;

	t84 = (x337<((x338==x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint64_t x342 = 1434400311LLU;
	int8_t x343 = INT8_MAX;
	int32_t t85 = 1092;

	t85 = (x341<((x342==x343)^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = -1787;
	uint8_t x348 = 0U;

	t86 = (x345<((x346==x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int16_t x350 = 0;
	volatile int64_t x351 = INT64_MAX;
	volatile int32_t t87 = -1511442;

	t87 = (x349<((x350==x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = 7001U;
	volatile int8_t x355 = -2;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = 241035;

	t88 = (x353<((x354==x355)^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = -1;
	uint64_t x358 = 724404531218035LLU;
	int32_t x359 = INT32_MIN;
	static int8_t x360 = -1;
	int32_t t89 = 251362;

	t89 = (x357<((x358==x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MIN;
	volatile int64_t x364 = -1LL;
	int32_t t90 = 45;

	t90 = (x361<((x362==x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 120U;
	int64_t x366 = -106216LL;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = 16491376;

	t91 = (x365<((x366==x367)^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;
	uint16_t x372 = 3224U;

	t92 = (x369<((x370==x371)^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 451U;
	static uint8_t x374 = UINT8_MAX;
	int8_t x375 = -1;
	static volatile int32_t x376 = INT32_MAX;

	t93 = (x373<((x374==x375)^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	static int64_t x378 = -1LL;
	uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = -4;
	static volatile int32_t t94 = -897907;

	t94 = (x377<((x378==x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 14;
	int64_t x382 = 2675799240382LL;
	static volatile int8_t x383 = INT8_MIN;
	static uint16_t x384 = 0U;
	int32_t t95 = 182545029;

	t95 = (x381<((x382==x383)^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	volatile uint64_t x387 = 57320981035750049LLU;
	int32_t t96 = -192183;

	t96 = (x385<((x386==x387)^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = -1LL;
	static uint32_t x391 = 156408U;
	static uint32_t x392 = 132326U;
	int32_t t97 = -1;

	t97 = (x389<((x390==x391)^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = INT64_MAX;
	int8_t x395 = -13;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -3111;

	t98 = (x393<((x394==x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static volatile int16_t x398 = INT16_MIN;
	static int32_t t99 = -10;

	t99 = (x397<((x398==x399)^x400));

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

