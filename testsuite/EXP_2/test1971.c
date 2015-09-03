#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -9862978;
uint8_t x12 = UINT8_MAX;
uint32_t x13 = 83U;
volatile uint8_t x16 = UINT8_MAX;
int8_t x18 = INT8_MIN;
int32_t x19 = 0;
int8_t x24 = INT8_MAX;
volatile int32_t t5 = -8878361;
static volatile uint32_t x32 = 222404373U;
volatile uint64_t x34 = UINT64_MAX;
int16_t x37 = INT16_MIN;
int8_t x39 = -5;
static int32_t x46 = INT32_MIN;
int8_t x49 = INT8_MIN;
uint32_t x52 = UINT32_MAX;
int64_t x54 = INT64_MIN;
int16_t x55 = 12645;
uint32_t x61 = UINT32_MAX;
int64_t x64 = 905LL;
int32_t t15 = -40915;
int32_t t16 = -3247993;
static int16_t x69 = -1;
int64_t x70 = -3097893665027LL;
int32_t t17 = -3627653;
volatile int32_t x75 = INT32_MIN;
int32_t t18 = -80219;
volatile uint16_t x77 = 1U;
int16_t x79 = INT16_MIN;
int32_t t21 = -8715305;
int32_t x93 = -1;
volatile int64_t x94 = INT64_MIN;
uint8_t x96 = UINT8_MAX;
volatile int32_t t23 = -13866653;
uint64_t x103 = 30663518949736LLU;
volatile int32_t t28 = -10707;
static int32_t t29 = 153625;
static volatile int32_t x121 = 2889;
static int8_t x124 = -1;
int32_t t30 = -1007259;
int16_t x126 = INT16_MAX;
uint64_t x132 = 1671536180225744LLU;
static int64_t x134 = -42672644920168LL;
int8_t x143 = 1;
volatile int16_t x147 = INT16_MIN;
uint8_t x153 = UINT8_MAX;
uint8_t x156 = 11U;
uint8_t x165 = 110U;
volatile int64_t x168 = INT64_MAX;
volatile int32_t t41 = -885101248;
int64_t x170 = -3572162441LL;
volatile int32_t t42 = -663005;
uint32_t x176 = 1889596840U;
volatile uint16_t x177 = 16U;
volatile int32_t x178 = 229;
static int64_t x179 = INT64_MIN;
uint16_t x181 = 0U;
int16_t x184 = -1;
int32_t t46 = 2;
static int32_t x192 = INT32_MAX;
uint8_t x194 = 4U;
static volatile uint16_t x196 = 480U;
uint32_t x198 = 3973U;
int32_t t50 = -254768683;
int32_t x211 = INT32_MIN;
int8_t x212 = -1;
uint16_t x213 = 602U;
int32_t x224 = -1051154659;
int8_t x225 = 38;
volatile int8_t x228 = INT8_MAX;
volatile int64_t x231 = INT64_MIN;
static int32_t t57 = -1982;
int16_t x238 = INT16_MAX;
uint16_t x248 = 1946U;
int32_t x250 = -11458;
static int8_t x253 = INT8_MIN;
int32_t t63 = 1350;
volatile uint64_t x257 = UINT64_MAX;
uint16_t x259 = UINT16_MAX;
int32_t x261 = INT32_MIN;
uint8_t x267 = 5U;
volatile int32_t t66 = 22086;
static volatile uint64_t x277 = UINT64_MAX;
uint64_t x283 = 5035170134497780LLU;
uint64_t x297 = UINT64_MAX;
volatile int32_t x298 = 0;
int64_t x299 = INT64_MIN;
uint8_t x300 = 30U;
int32_t t74 = 9;
static uint64_t x304 = 102933660102LLU;
int8_t x307 = 0;
static int16_t x322 = -3;
uint64_t x330 = UINT64_MAX;
uint8_t x334 = 20U;
static int16_t x344 = INT16_MIN;
int8_t x348 = -1;
int16_t x350 = -1020;
int16_t x351 = INT16_MIN;
volatile int32_t t90 = 27258;
uint64_t x366 = UINT64_MAX;
int16_t x367 = -1;
static volatile int32_t x370 = -9;
int8_t x372 = INT8_MIN;
int64_t x375 = 185504701023LL;
int32_t t93 = -1022;
int64_t x380 = INT64_MAX;
int64_t x386 = -1LL;
volatile uint8_t x387 = UINT8_MAX;
int64_t x390 = -1LL;
uint16_t x391 = UINT16_MAX;
int32_t x399 = INT32_MIN;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	volatile uint16_t x2 = 254U;
	int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MAX;

	t0 = ((x1<(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 64745;
	int64_t x6 = INT64_MIN;
	static int32_t x7 = INT32_MIN;
	int8_t x8 = 0;
	volatile int32_t t1 = -7650;

	t1 = ((x5<(x6|x7))==x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 41;
	static int8_t x10 = INT8_MIN;
	volatile int8_t x11 = 2;
	volatile int32_t t2 = -5303;

	t2 = ((x9<(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	static int16_t x15 = -1;
	int32_t t3 = -6250;

	t3 = ((x13<(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x20 = -1LL;
	int32_t t4 = 14408;

	t4 = ((x17<(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	uint16_t x22 = 0U;
	int64_t x23 = INT64_MIN;

	t5 = ((x21<(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = -7;
	static int8_t x26 = -1;
	uint64_t x27 = 1035LLU;
	volatile int8_t x28 = -1;
	volatile int32_t t6 = -12152;

	t6 = ((x25<(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint64_t x30 = 3816444159LLU;
	static volatile uint64_t x31 = 6LLU;
	int32_t t7 = 2;

	t7 = ((x29<(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 4U;
	int64_t x35 = -580LL;
	int8_t x36 = -1;
	int32_t t8 = -36;

	t8 = ((x33<(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 125991771;

	t9 = ((x37<(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 48LLU;
	int64_t x42 = 527948395967LL;
	volatile int16_t x43 = -1;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = 1084414;

	t10 = ((x41<(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = INT8_MAX;
	int64_t x47 = 0LL;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = -3;

	t11 = ((x45<(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	static int8_t x51 = -1;
	int32_t t12 = 715;

	t12 = ((x49<(x50|x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -2;
	uint16_t x56 = 162U;
	volatile int32_t t13 = 450411917;

	t13 = ((x53<(x54|x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int32_t x58 = -1;
	volatile uint64_t x59 = 319628673022292LLU;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 66956856;

	t14 = ((x57<(x58|x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MAX;
	static volatile int64_t x63 = INT64_MIN;

	t15 = ((x61<(x62|x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	static int32_t x66 = -1983737;
	int32_t x67 = INT32_MAX;
	volatile int32_t x68 = -1;

	t16 = ((x65<(x66|x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = INT64_MIN;
	static int16_t x72 = 19;

	t17 = ((x69<(x70|x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 152293665U;
	uint8_t x74 = 91U;
	uint64_t x76 = 67089451689623903LLU;

	t18 = ((x73<(x74|x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 1U;
	static int16_t x80 = 2;
	volatile int32_t t19 = -358;

	t19 = ((x77<(x78|x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 102612510LL;
	volatile uint64_t x82 = 10432278LLU;
	int16_t x83 = -3165;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = 4172333;

	t20 = ((x81<(x82|x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MAX;
	int64_t x87 = INT64_MAX;
	volatile int16_t x88 = INT16_MIN;

	t21 = ((x85<(x86|x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -228973876LL;
	int16_t x90 = -1;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 1458503;

	t22 = ((x89<(x90|x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x95 = UINT32_MAX;

	t23 = ((x93<(x94|x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	volatile int8_t x98 = -1;
	int8_t x99 = -24;
	int8_t x100 = INT8_MAX;
	int32_t t24 = 59;

	t24 = ((x97<(x98|x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	static int32_t x104 = -13;
	int32_t t25 = 78219938;

	t25 = ((x101<(x102|x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 98586893LL;
	uint64_t x106 = 1533485267213197LLU;
	uint16_t x107 = 1209U;
	int32_t x108 = 913779678;
	volatile int32_t t26 = 762;

	t26 = ((x105<(x106|x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int64_t x110 = 2770819972LL;
	int8_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = -453;

	t27 = ((x109<(x110|x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	static volatile int8_t x114 = INT8_MIN;
	uint8_t x115 = 66U;
	uint32_t x116 = UINT32_MAX;

	t28 = ((x113<(x114|x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -7925153764758635LL;
	int32_t x118 = 139;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -42;

	t29 = ((x117<(x118|x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = INT64_MIN;
	uint16_t x123 = 27332U;

	t30 = ((x121<(x122|x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	int64_t x128 = 399760289049LL;
	static int32_t t31 = 0;

	t31 = ((x125<(x126|x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int64_t x130 = INT64_MIN;
	int8_t x131 = 15;
	int32_t t32 = -68269361;

	t32 = ((x129<(x130|x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	int64_t x135 = 9429490629LL;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -398;

	t33 = ((x133<(x134|x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	static int32_t x138 = INT32_MIN;
	int8_t x139 = 1;
	int8_t x140 = -1;
	static int32_t t34 = 362994068;

	t34 = ((x137<(x138|x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 0;
	volatile int64_t x142 = -9977567418881LL;
	volatile uint16_t x144 = 12U;
	int32_t t35 = 81106;

	t35 = ((x141<(x142|x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = -1LL;
	static uint64_t x148 = 572870706302LLU;
	volatile int32_t t36 = -1;

	t36 = ((x145<(x146|x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 333U;
	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = 1;
	volatile int32_t x152 = -2689;
	int32_t t37 = -327909477;

	t37 = ((x149<(x150|x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = -1LL;
	volatile int16_t x155 = INT16_MIN;
	int32_t t38 = -18753;

	t38 = ((x153<(x154|x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 629;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = -9;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 2;

	t39 = ((x157<(x158|x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	static int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile uint8_t x164 = 29U;
	static volatile int32_t t40 = 1;

	t40 = ((x161<(x162|x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 10U;
	uint32_t x167 = UINT32_MAX;

	t41 = ((x165<(x166|x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 2232LLU;
	int64_t x171 = INT64_MAX;
	uint64_t x172 = 57LLU;

	t42 = ((x169<(x170|x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 4U;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	volatile int32_t t43 = 399514859;

	t43 = ((x173<(x174|x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x180 = 11221207;
	static int32_t t44 = -8031373;

	t44 = ((x177<(x178|x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = 13746;
	volatile uint8_t x183 = 1U;
	int32_t t45 = 766881;

	t45 = ((x181<(x182|x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	uint8_t x186 = 22U;
	int64_t x187 = -13981407176223LL;
	int32_t x188 = INT32_MAX;

	t46 = ((x185<(x186|x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	int32_t x190 = -5;
	uint32_t x191 = UINT32_MAX;
	int32_t t47 = 144;

	t47 = ((x189<(x190|x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int32_t x195 = INT32_MIN;
	volatile int32_t t48 = 3823;

	t48 = ((x193<(x194|x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -113256371;

	t49 = ((x197<(x198|x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MIN;
	int32_t x203 = -1;
	int64_t x204 = -1LL;

	t50 = ((x201<(x202|x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 60U;
	int32_t x206 = 1848210;
	volatile int32_t x207 = 1;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -10592052;

	t51 = ((x205<(x206|x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	static volatile int32_t t52 = -3025;

	t52 = ((x209<(x210|x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x214 = INT32_MIN;
	int8_t x215 = -1;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t53 = 143;

	t53 = ((x213<(x214|x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 4401U;
	int8_t x218 = -12;
	volatile uint64_t x219 = 1LLU;
	volatile int64_t x220 = INT64_MIN;
	int32_t t54 = -1;

	t54 = ((x217<(x218|x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x222 = -1677483;
	static int64_t x223 = INT64_MIN;
	volatile int32_t t55 = 52366;

	t55 = ((x221<(x222|x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MAX;
	uint64_t x227 = 6393LLU;
	static int32_t t56 = 3149;

	t56 = ((x225<(x226|x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int32_t x230 = -1;
	int64_t x232 = INT64_MAX;

	t57 = ((x229<(x230|x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 251845U;
	volatile int16_t x234 = INT16_MAX;
	volatile uint32_t x235 = 20U;
	int8_t x236 = INT8_MIN;
	static int32_t t58 = -102142;

	t58 = ((x233<(x234|x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 4085;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 1U;
	volatile int32_t t59 = 263;

	t59 = ((x237<(x238|x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 27076589U;
	int8_t x243 = -1;
	int32_t x244 = 151523;
	volatile int32_t t60 = -26119057;

	t60 = ((x241<(x242|x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 2194047;
	static int64_t x246 = INT64_MIN;
	static int8_t x247 = 51;
	int32_t t61 = 1001405;

	t61 = ((x245<(x246|x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	uint16_t x251 = 228U;
	volatile int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = 4;

	t62 = ((x249<(x250|x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 42U;
	volatile uint16_t x255 = 441U;
	uint32_t x256 = 874290U;

	t63 = ((x253<(x254|x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -42LL;
	static uint8_t x260 = UINT8_MAX;
	int32_t t64 = 0;

	t64 = ((x257<(x258|x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -1;
	static int8_t x263 = -1;
	int32_t x264 = -1;
	static int32_t t65 = 78660571;

	t65 = ((x261<(x262|x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -14;
	uint8_t x266 = 1U;
	int16_t x268 = -19;

	t66 = ((x265<(x266|x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	uint8_t x270 = 73U;
	int32_t x271 = INT32_MIN;
	static volatile uint32_t x272 = 832547761U;
	int32_t t67 = -15005273;

	t67 = ((x269<(x270|x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 0U;
	volatile int64_t x274 = 21411783741782LL;
	static int64_t x275 = INT64_MAX;
	static uint32_t x276 = 8533094U;
	volatile int32_t t68 = -7;

	t68 = ((x273<(x274|x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	int16_t x279 = -6480;
	int64_t x280 = -1LL;
	static volatile int32_t t69 = -29;

	t69 = ((x277<(x278|x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint32_t x282 = UINT32_MAX;
	uint8_t x284 = 28U;
	int32_t t70 = -98163804;

	t70 = ((x281<(x282|x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MAX;
	uint8_t x287 = 15U;
	volatile int64_t x288 = -1LL;
	volatile int32_t t71 = -818;

	t71 = ((x285<(x286|x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = -25;
	int16_t x291 = INT16_MAX;
	uint8_t x292 = 1U;
	int32_t t72 = 207183560;

	t72 = ((x289<(x290|x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	static uint8_t x296 = UINT8_MAX;
	static int32_t t73 = -808;

	t73 = ((x293<(x294|x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {


	t74 = ((x297<(x298|x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x301 = 4U;
	uint8_t x302 = 3U;
	uint8_t x303 = 3U;
	volatile int32_t t75 = 22;

	t75 = ((x301<(x302|x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1U;
	int8_t x306 = INT8_MAX;
	volatile uint32_t x308 = 45198759U;
	static volatile int32_t t76 = 111;

	t76 = ((x305<(x306|x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 46U;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 425218U;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = 295041;

	t77 = ((x309<(x310|x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = -3LL;
	int32_t x315 = INT32_MAX;
	int16_t x316 = -51;
	volatile int32_t t78 = -13;

	t78 = ((x313<(x314|x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = -116;
	uint32_t x319 = 146628677U;
	uint8_t x320 = 26U;
	int32_t t79 = -64946;

	t79 = ((x317<(x318|x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MAX;
	uint8_t x323 = 3U;
	int16_t x324 = INT16_MIN;
	int32_t t80 = -191073095;

	t80 = ((x321<(x322|x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = -1LL;
	uint8_t x327 = 3U;
	int16_t x328 = 60;
	volatile int32_t t81 = 132285350;

	t81 = ((x325<(x326|x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int64_t x331 = -658935554LL;
	static int8_t x332 = INT8_MIN;
	int32_t t82 = -503474;

	t82 = ((x329<(x330|x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 1098;
	int32_t x335 = -1;
	int16_t x336 = -17;
	int32_t t83 = 1;

	t83 = ((x333<(x334|x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MAX;
	int8_t x338 = 29;
	static uint64_t x339 = UINT64_MAX;
	volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = -21893;

	t84 = ((x337<(x338|x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 94U;
	uint64_t x342 = 88846909191391LLU;
	int64_t x343 = -1LL;
	int32_t t85 = 1;

	t85 = ((x341<(x342|x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -20007710731LL;
	int8_t x346 = 1;
	uint32_t x347 = UINT32_MAX;
	static volatile int32_t t86 = -10;

	t86 = ((x345<(x346|x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = INT32_MIN;
	int64_t x352 = -2288509803120LL;
	int32_t t87 = -17124287;

	t87 = ((x349<(x350|x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x353 = INT16_MAX;
	volatile int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MAX;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = -336959;

	t88 = ((x353<(x354|x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = 14;
	int32_t x359 = -5209;
	int16_t x360 = -6;
	int32_t t89 = -28345363;

	t89 = ((x357<(x358|x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint16_t x362 = 103U;
	int64_t x363 = INT64_MIN;
	int16_t x364 = -1;

	t90 = ((x361<(x362|x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int16_t x368 = 9;
	volatile int32_t t91 = 12867174;

	t91 = ((x365<(x366|x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 0;
	int64_t x371 = -1LL;
	volatile int32_t t92 = -798489;

	t92 = ((x369<(x370|x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 326709U;
	int16_t x374 = INT16_MIN;
	volatile int32_t x376 = INT32_MAX;

	t93 = ((x373<(x374|x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static int64_t x378 = INT64_MAX;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t t94 = -231261;

	t94 = ((x377<(x378|x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 22U;
	uint32_t x382 = 5313U;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 213547039U;
	int32_t t95 = -8592272;

	t95 = ((x381<(x382|x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 1318U;
	uint32_t x388 = 163990U;
	int32_t t96 = -947469;

	t96 = ((x385<(x386|x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MAX;
	int32_t x392 = -1;
	volatile int32_t t97 = -319747;

	t97 = ((x389<(x390|x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 1;
	static int32_t x394 = INT32_MIN;
	uint32_t x395 = 263U;
	static int16_t x396 = -1;
	int32_t t98 = -933904;

	t98 = ((x393<(x394|x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	static int64_t x398 = INT64_MAX;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -39863142;

	t99 = ((x397<(x398|x399))==x400);

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

