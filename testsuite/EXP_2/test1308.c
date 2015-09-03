#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 21U;
int32_t t3 = 2;
volatile uint64_t x30 = 44812248470219LLU;
static uint16_t x38 = 3490U;
volatile int32_t t9 = 80281401;
uint16_t x42 = 7640U;
static uint64_t x43 = 3LLU;
int16_t x45 = INT16_MIN;
uint8_t x51 = 9U;
volatile int64_t x62 = -1LL;
int32_t t16 = 27301;
int64_t x69 = 47350190182511LL;
volatile int32_t x77 = INT32_MAX;
volatile int32_t x81 = -1;
volatile uint8_t x82 = UINT8_MAX;
int64_t x89 = INT64_MIN;
int8_t x91 = INT8_MIN;
volatile int32_t t22 = -247619;
int32_t t23 = -40;
volatile int16_t x106 = INT16_MIN;
uint16_t x109 = UINT16_MAX;
static uint32_t x116 = 0U;
volatile uint32_t x124 = 2384379U;
static int16_t x126 = INT16_MIN;
int32_t t31 = -10;
int8_t x129 = INT8_MAX;
static int32_t t32 = 6416;
static volatile uint32_t x133 = UINT32_MAX;
uint64_t x136 = 141683649LLU;
int64_t x139 = INT64_MIN;
int32_t t34 = -92751321;
int16_t x141 = -1;
int16_t x145 = INT16_MIN;
int32_t x154 = -588524026;
int32_t x158 = -1;
int32_t t42 = 7679296;
uint32_t x173 = 19U;
int64_t x186 = -26212756423206888LL;
int16_t x197 = INT16_MIN;
int64_t x200 = INT64_MAX;
static uint16_t x204 = UINT16_MAX;
static int32_t t50 = -1034;
static volatile int32_t t51 = 942305;
volatile uint32_t x210 = 38303U;
volatile int8_t x213 = INT8_MIN;
int8_t x220 = INT8_MAX;
uint8_t x228 = UINT8_MAX;
int32_t t57 = -12941;
volatile uint16_t x238 = 119U;
volatile int32_t x239 = INT32_MAX;
volatile int32_t x240 = INT32_MIN;
int32_t t60 = -6281;
int8_t x247 = INT8_MAX;
int8_t x250 = 18;
static volatile int32_t t62 = -283416115;
static int32_t t63 = 2340256;
int32_t x258 = -99480;
volatile uint32_t x261 = 8936826U;
int8_t x265 = INT8_MIN;
int32_t x270 = -1;
volatile int32_t t67 = 908;
uint16_t x277 = 42U;
static int32_t x281 = 1;
uint16_t x284 = UINT16_MAX;
int8_t x285 = INT8_MAX;
int64_t x286 = INT64_MIN;
static volatile int16_t x289 = -1;
uint16_t x292 = 2U;
int16_t x297 = -3344;
volatile int32_t t74 = -10078;
volatile int32_t x302 = INT32_MIN;
volatile int32_t t75 = 982790349;
int8_t x306 = INT8_MAX;
uint8_t x314 = 68U;
volatile uint16_t x315 = UINT16_MAX;
int32_t t78 = -100;
static int64_t x317 = -1LL;
int8_t x319 = INT8_MAX;
static volatile uint8_t x321 = 7U;
static int32_t x325 = -1235062;
int16_t x334 = INT16_MAX;
volatile uint16_t x346 = 593U;
volatile int16_t x356 = INT16_MAX;
int32_t x369 = INT32_MAX;
volatile int32_t t92 = 20;
int64_t x374 = INT64_MAX;
static volatile int32_t x375 = INT32_MAX;
volatile uint8_t x381 = 0U;
int8_t x382 = -6;
int16_t x384 = 1;
static int32_t x387 = -6820;
int16_t x388 = -1;
int8_t x400 = -24;


void f0(void) {
	int64_t x1 = -485895040814LL;
	int16_t x3 = 357;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 9;

	t0 = ((x1<=(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int8_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 199137126;

	t1 = ((x5<=(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = INT16_MIN;
	static int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -27565;

	t2 = ((x9<=(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	int8_t x16 = 4;

	t3 = ((x13<=(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static uint8_t x18 = 3U;
	static uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 1945U;
	volatile int32_t t4 = 87;

	t4 = ((x17<=(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 4U;
	static int8_t x22 = INT8_MAX;
	uint32_t x23 = 238589U;
	static volatile int16_t x24 = 812;
	int32_t t5 = -196017;

	t5 = ((x21<=(x22==x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 25;
	volatile int32_t x26 = -3;
	int32_t x27 = INT32_MIN;
	uint32_t x28 = 10882453U;
	static int32_t t6 = -388867567;

	t6 = ((x25<=(x26==x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	uint16_t x32 = 1U;
	volatile int32_t t7 = -21;

	t7 = ((x29<=(x30==x31))==x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	static int64_t x34 = INT64_MIN;
	uint16_t x35 = 12408U;
	int8_t x36 = 0;
	int32_t t8 = -1;

	t8 = ((x33<=(x34==x35))==x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;

	t9 = ((x37<=(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int32_t x44 = -1;
	volatile int32_t t10 = -9;

	t10 = ((x41<=(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = -47;
	static uint16_t x47 = 6673U;
	static uint8_t x48 = 3U;
	volatile int32_t t11 = 344931;

	t11 = ((x45<=(x46==x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int32_t x50 = INT32_MIN;
	int16_t x52 = -1;
	int32_t t12 = 114020;

	t12 = ((x49<=(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = 1;
	int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	static volatile int32_t t13 = -5789;

	t13 = ((x53<=(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 12;
	volatile int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 4324U;
	volatile int32_t t14 = 4536;

	t14 = ((x57<=(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1078;
	int32_t x63 = -965094;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 63889;

	t15 = ((x61<=(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int32_t x66 = -1;
	int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MAX;

	t16 = ((x65<=(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x70 = INT32_MIN;
	volatile int64_t x71 = -1LL;
	uint64_t x72 = 262604LLU;
	volatile int32_t t17 = -114;

	t17 = ((x69<=(x70==x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MAX;
	uint16_t x74 = 520U;
	volatile int64_t x75 = INT64_MAX;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t18 = 1438;

	t18 = ((x73<=(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x78 = 818U;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = 11;
	volatile int32_t t19 = 1;

	t19 = ((x77<=(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x83 = 163615165;
	volatile int32_t x84 = 521266;
	int32_t t20 = 287831;

	t20 = ((x81<=(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int8_t x86 = -12;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -3924;

	t21 = ((x85<=(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -45;
	int8_t x92 = INT8_MIN;

	t22 = ((x89<=(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x94 = 60LLU;
	uint32_t x95 = 1804U;
	uint64_t x96 = 117368866792738809LLU;

	t23 = ((x93<=(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	static int8_t x99 = 2;
	int16_t x100 = -85;
	volatile int32_t t24 = -13670;

	t24 = ((x97<=(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static uint16_t x102 = UINT16_MAX;
	int8_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 135453;

	t25 = ((x101<=(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	uint16_t x107 = 158U;
	int8_t x108 = -4;
	static volatile int32_t t26 = 960472;

	t26 = ((x105<=(x106==x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x110 = -3;
	volatile uint16_t x111 = 3U;
	int16_t x112 = -424;
	static int32_t t27 = -2;

	t27 = ((x109<=(x110==x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -10;
	int8_t x114 = 54;
	int8_t x115 = INT8_MIN;
	volatile int32_t t28 = 9187823;

	t28 = ((x113<=(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 193439464;
	static volatile uint16_t x118 = UINT16_MAX;
	int64_t x119 = -1490LL;
	int8_t x120 = -1;
	int32_t t29 = -7;

	t29 = ((x117<=(x118==x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	volatile int8_t x122 = INT8_MIN;
	int16_t x123 = 18;
	volatile int32_t t30 = 0;

	t30 = ((x121<=(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 62U;
	volatile int64_t x127 = -4303583148714102578LL;
	uint32_t x128 = UINT32_MAX;

	t31 = ((x125<=(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MAX;
	int16_t x131 = -1;
	int16_t x132 = INT16_MAX;

	t32 = ((x129<=(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MIN;
	static int32_t t33 = 644764;

	t33 = ((x133<=(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -54288003;
	static int64_t x138 = INT64_MAX;
	volatile uint64_t x140 = UINT64_MAX;

	t34 = ((x137<=(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x142 = -9236587;
	int16_t x143 = INT16_MAX;
	static uint32_t x144 = 118693811U;
	int32_t t35 = -12525;

	t35 = ((x141<=(x142==x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = 98844U;
	int32_t x147 = INT32_MIN;
	static int32_t x148 = -1;
	static volatile int32_t t36 = 33140630;

	t36 = ((x145<=(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	uint8_t x150 = 1U;
	uint64_t x151 = 3110134LLU;
	static int16_t x152 = 5296;
	volatile int32_t t37 = 3;

	t37 = ((x149<=(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int8_t x155 = -1;
	static int8_t x156 = 11;
	volatile int32_t t38 = -45;

	t38 = ((x153<=(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 50539LL;
	int16_t x159 = -3598;
	int64_t x160 = -4576769712766941336LL;
	volatile int32_t t39 = 0;

	t39 = ((x157<=(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int32_t x162 = 6038267;
	int16_t x163 = INT16_MAX;
	static uint64_t x164 = 0LLU;
	int32_t t40 = 1848017;

	t40 = ((x161<=(x162==x163))==x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -15;
	volatile int64_t x166 = -1LL;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -2619;

	t41 = ((x165<=(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -475150325;
	volatile int8_t x170 = -12;
	uint8_t x171 = UINT8_MAX;
	volatile int16_t x172 = INT16_MIN;

	t42 = ((x169<=(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -11704LL;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = 392539758LLU;
	int32_t t43 = -430587666;

	t43 = ((x173<=(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -1;
	int32_t x178 = -1;
	volatile int16_t x179 = -1;
	volatile uint8_t x180 = 6U;
	int32_t t44 = -1;

	t44 = ((x177<=(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = -1;
	int64_t x183 = -930843111366721359LL;
	uint64_t x184 = 9174LLU;
	volatile int32_t t45 = -541158229;

	t45 = ((x181<=(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 256U;
	int16_t x187 = INT16_MIN;
	static volatile int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -473631;

	t46 = ((x185<=(x186==x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	static int32_t x190 = -461201221;
	uint8_t x191 = UINT8_MAX;
	uint16_t x192 = 638U;
	volatile int32_t t47 = 39;

	t47 = ((x189<=(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -3;
	int16_t x194 = 24;
	uint16_t x195 = 7373U;
	static int32_t x196 = INT32_MAX;
	static volatile int32_t t48 = 1555;

	t48 = ((x193<=(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = -221;
	volatile int8_t x199 = 1;
	static int32_t t49 = -1095;

	t49 = ((x197<=(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	static int64_t x202 = -95893650545130032LL;
	int64_t x203 = INT64_MIN;

	t50 = ((x201<=(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	uint8_t x206 = 118U;
	int32_t x207 = INT32_MIN;
	uint8_t x208 = 24U;

	t51 = ((x205<=(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 11U;
	int8_t x211 = 5;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -1213961;

	t52 = ((x209<=(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = INT16_MIN;
	static uint8_t x215 = 5U;
	static int8_t x216 = -1;
	volatile int32_t t53 = -10;

	t53 = ((x213<=(x214==x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	int32_t t54 = 60594158;

	t54 = ((x217<=(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 27U;
	static int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 7U;
	int32_t t55 = -1;

	t55 = ((x221<=(x222==x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -15649960710684LL;
	static volatile uint16_t x226 = 105U;
	int64_t x227 = -854583340455098LL;
	int32_t t56 = 55841;

	t56 = ((x225<=(x226==x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 1;
	volatile int64_t x230 = -1904474LL;
	int8_t x231 = -1;
	int64_t x232 = -1LL;

	t57 = ((x229<=(x230==x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -1;
	volatile int64_t x234 = INT64_MAX;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t58 = 25998926;

	t58 = ((x233<=(x234==x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int32_t t59 = 109524431;

	t59 = ((x237<=(x238==x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = 2260U;
	int64_t x243 = 206440742670859LL;
	volatile int32_t x244 = INT32_MAX;

	t60 = ((x241<=(x242==x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	static int32_t x246 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t61 = 13714;

	t61 = ((x245<=(x246==x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 49U;
	int64_t x251 = -1412564111LL;
	static uint32_t x252 = UINT32_MAX;

	t62 = ((x249<=(x250==x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MAX;
	uint16_t x254 = 1975U;
	int32_t x255 = -1;
	static uint32_t x256 = UINT32_MAX;

	t63 = ((x253<=(x254==x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -1LL;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = INT8_MIN;
	volatile int32_t t64 = -79;

	t64 = ((x257<=(x258==x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = 279368;
	volatile int8_t x264 = -1;
	int32_t t65 = 104;

	t65 = ((x261<=(x262==x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = UINT8_MAX;
	int32_t x267 = INT32_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 3003;

	t66 = ((x265<=(x266==x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = INT16_MIN;
	static uint64_t x271 = UINT64_MAX;
	volatile int64_t x272 = INT64_MIN;

	t67 = ((x269<=(x270==x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 80396995671LLU;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = INT16_MAX;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 18381;

	t68 = ((x273<=(x274==x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -9;

	t69 = ((x277<=(x278==x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MAX;
	int32_t t70 = 10668801;

	t70 = ((x281<=(x282==x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x287 = 184987U;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 711173951;

	t71 = ((x285<=(x286==x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MAX;
	volatile int32_t t72 = -81542;

	t72 = ((x289<=(x290==x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = -1;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MIN;
	int32_t t73 = 14609;

	t73 = ((x293<=(x294==x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	static volatile int32_t x300 = -6;

	t74 = ((x297<=(x298==x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 28;
	uint32_t x303 = UINT32_MAX;
	uint32_t x304 = UINT32_MAX;

	t75 = ((x301<=(x302==x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x307 = INT32_MAX;
	int64_t x308 = -1LL;
	static int32_t t76 = -1;

	t76 = ((x305<=(x306==x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 0;
	volatile int8_t x310 = 12;
	int64_t x311 = INT64_MIN;
	volatile uint64_t x312 = 12623339009LLU;
	static volatile int32_t t77 = -263303447;

	t77 = ((x309<=(x310==x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -2;
	int8_t x316 = 0;

	t78 = ((x313<=(x314==x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = 3858U;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 114091;

	t79 = ((x317<=(x318==x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 0;

	t80 = ((x321<=(x322==x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -1;
	int8_t x327 = INT8_MAX;
	volatile uint64_t x328 = 264433527517LLU;
	int32_t t81 = -3765;

	t81 = ((x325<=(x326==x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	static int32_t x330 = INT32_MIN;
	static int8_t x331 = INT8_MIN;
	static int8_t x332 = 41;
	int32_t t82 = -68829571;

	t82 = ((x329<=(x330==x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MIN;
	static volatile uint8_t x335 = 3U;
	volatile int64_t x336 = INT64_MAX;
	volatile int32_t t83 = -25343284;

	t83 = ((x333<=(x334==x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	uint64_t x338 = 1016215905135110LLU;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -49148927;

	t84 = ((x337<=(x338==x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	int64_t x342 = -16959LL;
	int16_t x343 = -1;
	int8_t x344 = INT8_MAX;
	int32_t t85 = 375;

	t85 = ((x341<=(x342==x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	uint32_t x347 = UINT32_MAX;
	volatile uint8_t x348 = 1U;
	int32_t t86 = 116932747;

	t86 = ((x345<=(x346==x347))==x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x349 = 1U;
	uint32_t x350 = UINT32_MAX;
	static volatile int32_t x351 = -89;
	int32_t x352 = INT32_MAX;
	int32_t t87 = -1050;

	t87 = ((x349<=(x350==x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MAX;
	volatile int32_t t88 = -115011001;

	t88 = ((x353<=(x354==x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -1LL;
	static int16_t x358 = -5;
	static uint8_t x359 = UINT8_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -148;

	t89 = ((x357<=(x358==x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	volatile int16_t x362 = -580;
	int64_t x363 = INT64_MAX;
	static uint64_t x364 = 782676565576LLU;
	static volatile int32_t t90 = 1108;

	t90 = ((x361<=(x362==x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	int64_t x366 = 1433418LL;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = -6441;

	t91 = ((x365<=(x366==x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x370 = 50444500216733603LLU;
	int32_t x371 = 35288472;
	static uint64_t x372 = 132805353977828651LLU;

	t92 = ((x369<=(x370==x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -2860;
	uint64_t x376 = 7419681659431LLU;
	volatile int32_t t93 = -1;

	t93 = ((x373<=(x374==x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 928U;
	static int16_t x378 = INT16_MIN;
	static volatile uint64_t x379 = 442843LLU;
	static uint64_t x380 = UINT64_MAX;
	int32_t t94 = 122325;

	t94 = ((x377<=(x378==x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x383 = 52U;
	int32_t t95 = -172;

	t95 = ((x381<=(x382==x383))==x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	static int8_t x386 = 2;
	int32_t t96 = 0;

	t96 = ((x385<=(x386==x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	volatile int64_t x391 = INT64_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	static int32_t t97 = -913514;

	t97 = ((x389<=(x390==x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 0;
	static volatile int8_t x394 = -3;
	int64_t x395 = -1LL;
	int8_t x396 = -1;
	static int32_t t98 = -29613454;

	t98 = ((x393<=(x394==x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MAX;
	int32_t x398 = INT32_MIN;
	volatile int8_t x399 = INT8_MAX;
	int32_t t99 = 231;

	t99 = ((x397<=(x398==x399))==x400);

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

